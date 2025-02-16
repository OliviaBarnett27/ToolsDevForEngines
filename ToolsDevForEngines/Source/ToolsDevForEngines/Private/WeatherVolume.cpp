// Fill out your copyright notice in the Description page of Project Settings.


#include "WeatherVolume.h"

#include "CloudsComponent.h"
#include "DayNightComponent.h"
#include "EUW_WeatherSelector.h"
#include "Components/BrushComponent.h"
#include "Components/VolumetricCloudComponent.h"


// Sets default values
AWeatherVolume::AWeatherVolume()
{
	GetBrushComponent()->SetVisibility(true);
	
	_NS_RainComponent = CreateDefaultSubobject<UNiagaraComponent>(TEXT("Rain Component"));
	_NS_RainComponent-> SetupAttachment(RootComponent);
	
	_NS_SnowComponent = CreateDefaultSubobject<UNiagaraComponent>(TEXT("Snow Component"));
	_NS_SnowComponent-> SetupAttachment(RootComponent);

	_CloudsComponent = CreateDefaultSubobject<UCloudsComponent>(TEXT("Clouds Component"));

	_DayNightComponent = CreateDefaultSubobject<UDayNightComponent>(TEXT("Day/Night Component"));
	
	DynamicCloudMaterial = UMaterialInstanceDynamic::Create(_CloudsComponent->CloudMaterial, this);
	_CloudsComponent->_VolumetricCloudComponent->SetMaterial(DynamicCloudMaterial);

	_NS_RainComponent->SetVisibility(false);
	_NS_SnowComponent->SetVisibility(false);
}
//--------------------------------------------------------------------------Begin play
void AWeatherVolume::BeginPlay()
{
	Super::BeginPlay();
	
	if (MyWeatherQueue.IsEmpty()) //if it's empty, the button hasn't been pressed. prevents crashing.
	{
		return;
	}
	
	SetNiagaraParameters(); //sets niagara parameters for the first array element

	ManageTransitions();
}
//--------------------------------------------------------------------------Set User Weather Data: called from EUW_WeatherSelector and sets values in _VolumeData based on user inputs and weather calculations
void AWeatherVolume::SetUserWeatherData(FUserWeatherData WeatherData)
{
	_VolumeData.rainSpawnRate = WeatherData.rainSpawnRate;
	_VolumeData.rainGravity = WeatherData.rainGravity;
	
	_VolumeData.snowSpawnRate = WeatherData.snowSpawnRate;
	_VolumeData.snowGravity = WeatherData.snowGravity;
	
	_VolumeData.dayNightCycle = WeatherData.dayNightCycle;
	_DayNightComponent->enableDayNightCycle = _VolumeData.dayNightCycle;
	_VolumeData.dayLength = WeatherData.dayLength;
	_DayNightComponent->turnRate = _VolumeData.dayLength;

	_VolumeData.erraticismFactor = WeatherData.erraticismFactor;
	
	MyWeatherQueue.Add(_VolumeData); //adds struct to queue array
}
//--------------------------------------------------------------------------Weather transitions: handles weather queue functionality
void AWeatherVolume::WeatherTransition()
{
	FUserWeatherData tempWeatherData =  MyWeatherQueue[currentWeatherIndex]; //used to hold the current struct so that it can be re-added to the array

	MyWeatherQueue.RemoveAt(currentWeatherIndex); //removes the current struct, moving up the queue

	MyWeatherQueue.Add(tempWeatherData); //adds the removed struct to the back of the queue

	if (currentWeatherIndex >= MyWeatherQueue.Num())
	{
		currentWeatherIndex = 0; //resets the indexer once the end of the queue has been reached, so that the weather queue cycles
	}

	SetNiagaraParameters();

	StartTransitionTimer();
}
//--------------------------------------------------------------------------Set Niagara parameters
void AWeatherVolume::SetNiagaraParameters()
{
	UE_LOG(LogTemp, Warning, TEXT("Spawn rate: %f"), MyWeatherQueue[currentWeatherIndex].rainSpawnRate);
	UE_LOG(LogTemp, Warning, TEXT("gravity:  %s"), *MyWeatherQueue[currentWeatherIndex].rainGravity.ToString());
	
	_NS_RainComponent->SetFloatParameter("SpawnRate", MyWeatherQueue[currentWeatherIndex].rainSpawnRate);
	_NS_SnowComponent->SetFloatParameter("SpawnRate", MyWeatherQueue[currentWeatherIndex].snowSpawnRate);
	
	_NS_RainComponent->SetVectorParameter("RainGravity", MyWeatherQueue[currentWeatherIndex].rainGravity);
	_NS_SnowComponent->SetVectorParameter("SnowGravity", MyWeatherQueue[currentWeatherIndex].snowGravity);

	DynamicCloudMaterial->SetScalarParameterValue(FName("WeatherUVScale"), 1);

	_NS_RainComponent->SetVisibility(true);
	_NS_SnowComponent->SetVisibility(true);
}
//--------------------------------------------------------------------------Soften transition: finds the midpoint of the previous precipitation spawn rate and the next to make the transition appear less harsh
void AWeatherVolume::SoftenTransition()
{
	hasBeenSoftened = true;
	
	float previousRainSpawnRate = MyWeatherQueue[currentWeatherIndex].rainSpawnRate; //the current weather
	float nextRainSpawnRate = MyWeatherQueue[currentWeatherIndex+ 1].rainSpawnRate; //the next weather
	float adjustedRainSpawnRate = 0.0f;

	float previousSnowSpawnRate = MyWeatherQueue[currentWeatherIndex].snowSpawnRate;
	float nextSnowSpawnRate = MyWeatherQueue[currentWeatherIndex+ 1].snowSpawnRate;
	float adjustedSnowSpawnRate = 0.0f;

	adjustedRainSpawnRate = (previousRainSpawnRate + nextRainSpawnRate) / 2; //midpoint
	adjustedSnowSpawnRate = (previousSnowSpawnRate + nextSnowSpawnRate) / 2;
	
	_NS_RainComponent->SetFloatParameter("SpawnRate", adjustedRainSpawnRate);
	_NS_SnowComponent->SetFloatParameter("SpawnRate", adjustedSnowSpawnRate);
	
	UE_LOG(LogTemp, Error, TEXT("old spawn: %f"),previousRainSpawnRate);
	UE_LOG(LogTemp, Error, TEXT("next spawn: %f"),nextRainSpawnRate);
	UE_LOG(LogTemp, Error, TEXT("adjustedspawnrate: %f"),adjustedRainSpawnRate);
}
//--------------------------------------------------------------------------Start transition timer: determines how long a weather should be active before switching to the next
void AWeatherVolume::StartTransitionTimer()
{
	//-----timer allows for transitioning between weather states. when it loops it will move to the next struct in the array
	FTimerDelegate TransitionTimerDelegate;
	TransitionTimerDelegate.BindUFunction(this, "WeatherTransition"); 
	GetWorld()->GetTimerManager().SetTimer(TransitionTimer, TransitionTimerDelegate, 100 - (_VolumeData.erraticismFactor), false);

	StartSoftenTimer();
	//-----
}
//--------------------------------------------------------------------------Start soften timer: determines length of softening period
void AWeatherVolume::StartSoftenTimer()
{
	//only the end of the weather's active period should be softened, so the timer length is set to 5% of the transition timer
	float length = ((100 - _VolumeData.erraticismFactor) / 100) * 5;
	//-----timer allows for softening of weather between weather states
	FTimerDelegate SoftenTimerDelegate;
	SoftenTimerDelegate.BindUFunction(this, "SoftenTransition"); 
	GetWorld()->GetTimerManager().SetTimer(SoftenTimer, SoftenTimerDelegate, _VolumeData.erraticismFactor - length, false);

	SoftenTimerDelegate.BindUFunction(this, "StartTransitionTimer");
}
//--------------------------------------------------------------------------Manage transitions: handles timer activation. prevents recursion
void AWeatherVolume::ManageTransitions()
{
	StartTransitionTimer();
}






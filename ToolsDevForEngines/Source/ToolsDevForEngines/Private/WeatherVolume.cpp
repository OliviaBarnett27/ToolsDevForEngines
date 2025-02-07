// Fill out your copyright notice in the Description page of Project Settings.


#include "WeatherVolume.h"
#include "EUW_WeatherSelector.h"


// Sets default values
AWeatherVolume::AWeatherVolume()
{
	_NS_RainComponent = CreateDefaultSubobject<UNiagaraComponent>(TEXT("Rain Component"));
	_NS_RainComponent-> SetupAttachment(RootComponent);
	
	_NS_SnowComponent = CreateDefaultSubobject<UNiagaraComponent>(TEXT("Snow Component"));
	_NS_SnowComponent-> SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void AWeatherVolume::BeginPlay()
{
	Super::BeginPlay();

	if (MyWeatherQueue.IsEmpty()) //if it's empty, the button hasn't been pressed. prevents crashing.
	{
		return;
	}
	
	SetNiagaraParameters(); //sets niagara parameters for the first array element

	//-----timer allows for transitioning between weather states. when it loops it will move to the next struct in the array
	FTimerDelegate TimerDelegate;
	TimerDelegate.BindUFunction(this, "WeatherTransition"); 
	GetWorld()->GetTimerManager().SetTimer(TransitionTimer, TimerDelegate, 5.00, true);
	
	//-----
}

void AWeatherVolume::SetUserWeatherData(FUserWeatherData WeatherData)
{
	_VolumeData.rainSpawnRate = WeatherData.rainSpawnRate;
	_VolumeData.dayNightCycle = WeatherData.dayNightCycle;

	DayNightCycle->enableDayNightCycle = _VolumeData.dayNightCycle;
	
	MyWeatherQueue.Add(_VolumeData); //adds struct to queue array
}

void AWeatherVolume::WeatherTransition()
{
	FUserWeatherData tempWeatherData =  MyWeatherQueue[currentWeatherIndex]; //used to hold the current struct so that it can be re-added to the array

	MyWeatherQueue.RemoveAt(currentWeatherIndex); //removes the current struct, moving up the queue

	MyWeatherQueue.Add(tempWeatherData); //adds the removed struct to the back of the queue

	currentWeatherIndex++; 

	if (currentWeatherIndex >= MyWeatherQueue.Num())
	{
		currentWeatherIndex = 0; //resets the indexer once the end of the queue has been reached, so that the weather queue cycles
	}

	SetNiagaraParameters(); 
}

void AWeatherVolume::SetNiagaraParameters()
{
	//UE_LOG(LogTemp, Display, TEXT("rainGravity Value: %s"), *MyWeatherQueue[currentWeatherIndex].rainGravity.ToString());
	UE_LOG(LogTemp, Warning, TEXT("Spawn rate: %f"), MyWeatherQueue[currentWeatherIndex].rainSpawnRate);
	
	_NS_RainComponent->SetFloatParameter("SpawnRate", MyWeatherQueue[currentWeatherIndex].rainSpawnRate);
	_NS_SnowComponent->SetFloatParameter("SpawnRate", MyWeatherQueue[currentWeatherIndex].snowSpawnRate);
	
	_NS_RainComponent->SetVectorParameter("RainGravity", MyWeatherQueue[currentWeatherIndex].rainGravity);
	//_NS_RainComponent->SetVectorParameter("RainGravity", FVector(10000, 0, -750));
	_NS_SnowComponent->SetVectorParameter("SnowGravity", MyWeatherQueue[currentWeatherIndex].snowGravity);
}





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
	_VolumeData.dayLength = WeatherData.dayLength;

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
	_NS_RainComponent->SetFloatParameter("SpawnRate", MyWeatherQueue[currentWeatherIndex].rainSpawnRate);
}





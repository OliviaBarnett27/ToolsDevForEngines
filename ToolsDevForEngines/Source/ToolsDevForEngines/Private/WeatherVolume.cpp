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

	for (int i = 0; i < MyWeatherQueue.Num(); i++ )
	{
		UE_LOG(LogTemp, Display, TEXT("Rain spawn rate is: %f"), MyWeatherQueue[i].rainSpawnRate);
		_NS_RainComponent->SetFloatParameter("SpawnRate", _VolumeData.rainSpawnRate);
	}
}

void AWeatherVolume::SetUserWeatherData(FUserWeatherData WeatherData)
{
	_VolumeData.rainSpawnRate = WeatherData.rainSpawnRate;
	_VolumeData.dayLength = WeatherData.dayLength;

	MyWeatherQueue.Add(_VolumeData);
}





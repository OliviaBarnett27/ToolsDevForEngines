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

	
}

void AWeatherVolume::SetUserWeatherData(FUserWeatherData WeatherData)
{
	_VolumeData.rainSpawnRate = WeatherData.rainSpawnRate;
}




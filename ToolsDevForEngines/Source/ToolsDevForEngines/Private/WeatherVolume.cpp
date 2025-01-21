// Fill out your copyright notice in the Description page of Project Settings.


#include "WeatherVolume.h"


// Sets default values
AWeatherVolume::AWeatherVolume()
{
	_RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root Component"));
	RootComponent = _RootComponent;
	
	_PCGComponent = CreateDefaultSubobject<UPCGComponent>(TEXT("PCG Component"));
	RootComponent = _RootComponent;
	
	_NS_RainComponent = CreateDefaultSubobject<UNiagaraComponent>(TEXT("Rain Component"));
	RootComponent = _RootComponent;

	_NS_SnowComponent = CreateDefaultSubobject<UNiagaraComponent>(TEXT("Snow Component"));
	RootComponent = _RootComponent;
}

// Called when the game starts or when spawned
void AWeatherVolume::BeginPlay()
{
	Super::BeginPlay();
	
}



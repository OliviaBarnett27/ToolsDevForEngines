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

	UE_LOG(LogTemp, Display, TEXT("Rain spawn rate is: %f"), _VolumeData.rainSpawnRate);
	UE_LOG(LogTemp, Error, TEXT("Niagara system: %s"), *_NS_RainComponent->GetAsset()->GetName());
	
	_NS_RainComponent->SetFloatParameter("SpawnRate", _VolumeData.rainSpawnRate);
}

void AWeatherVolume::SetUserWeatherData(FUserWeatherData WeatherData)
{
	/*_VolumeData.rainSpawnRate = WeatherData.rainSpawnRate;
	_VolumeData.climate = WeatherData.climate;*/

	MyWeatherQueue.Enqueue(WeatherData);
	queuelengthchecker++;
	
	//UE_LOG(LogTemp, Display, TEXT("Name: %s"), *_VolumeData.climate.ToString());

	
	UE_LOG(LogTemp, Display, TEXT("queue length: %d"), queuelengthchecker);
}
	





// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "WeatherVolume.generated.h"

UCLASS()
class TOOLSDEVFORENGINES_API AWeatherVolume : public AVolume
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AWeatherVolume();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};

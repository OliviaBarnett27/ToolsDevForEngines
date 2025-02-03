// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UserWeatherData.generated.h"

USTRUCT(BlueprintType)
struct FUserWeatherData
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float rainSpawnRate;
	float snowSpawnRate;
	float dayLength;

	FUserWeatherData():rainSpawnRate(0.0f),snowSpawnRate(0.0f), dayLength(0.0f){};
};

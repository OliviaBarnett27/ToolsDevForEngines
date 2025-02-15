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
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float snowSpawnRate;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector rainGravity = FVector(0, 0, -2000);
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector snowGravity = FVector(0, 0, -2000);
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float dayLength;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool dayNightCycle;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float erraticismFactor;

	FUserWeatherData():rainSpawnRate(0.0f),snowSpawnRate(0.0f), dayLength(0.1f), rainGravity(FVector(0, 0, -2000)), snowGravity(FVector(0,0,-2000)), dayNightCycle(false), erraticismFactor(1.0f) {};
};

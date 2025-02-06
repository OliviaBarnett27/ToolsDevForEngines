// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Climate.generated.h"

USTRUCT(BlueprintType)
struct FClimate : public FTableRowBase
{
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weather") // Optional Category
	float SnowMin;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weather") // Optional Category
	float SnowMax;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weather")
	float RainMin;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weather")
	float RainMax;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weather")
	float WindMin;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weather")
	float WindMax;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weather")
	float CloudMin;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weather")
	float CloudMax;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weather")
	bool Fog;
};
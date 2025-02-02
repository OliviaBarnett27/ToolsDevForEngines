// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ClimateStruct.generated.h"

USTRUCT(BlueprintType)
struct FClimateStruct
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SnowMin;
	float SnowMax;

	FClimateStruct():SnowMin(0.0f), SnowMax(0.0f){};
};
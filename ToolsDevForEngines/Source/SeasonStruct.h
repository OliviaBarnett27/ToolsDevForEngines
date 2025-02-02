// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SeasonStruct.generated.h"

USTRUCT(BlueprintType)
struct FSeasonStruct
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FName, int32> ClimateMap;

	//FClimateStruct():ClimateMap(){};
};
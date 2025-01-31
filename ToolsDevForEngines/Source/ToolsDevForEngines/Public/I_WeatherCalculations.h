// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "I_WeatherCalculations.generated.h"

// This class does not need to be modified.
UINTERFACE()
class UI_WeatherCalculations : public UInterface
{
	GENERATED_BODY()
};

class TOOLSDEVFORENGINES_API II_WeatherCalculations
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	float GetRainHeaviness();
};

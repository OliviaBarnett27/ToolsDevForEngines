// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "NiagaraComponent.h"
#include "PCGComponent.h"
#include "I_WeatherCalculations.h"
#include "Components/BoxComponent.h"
#include "WeatherVolume.generated.h"

UCLASS()
class TOOLSDEVFORENGINES_API AWeatherVolume : public AVolume
{
	GENERATED_BODY()

public:
	AWeatherVolume();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	TObjectPtr<UNiagaraComponent> _NS_RainComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	TObjectPtr<UNiagaraComponent> _NS_SnowComponent;

private:
	float rainSpawnRate = 0.0f;
};

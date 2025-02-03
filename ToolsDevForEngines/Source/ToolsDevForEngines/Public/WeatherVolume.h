// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EUW_WeatherSelector.h"
#include "GameFramework/Volume.h"
#include "NiagaraComponent.h"
#include "NiagaraSystem.h"
#include "Containers/CircularQueue.h"
#include "WeatherVolume.generated.h"

struct FUserWeatherData;

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

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Weather Data")
	FUserWeatherData _VolumeData;

	UFUNCTION(BlueprintCallable, Category = "Weather Data")
	void SetUserWeatherData(FUserWeatherData WeatherData);

	UFUNCTION(BlueprintCallable)
	void WeatherTransition();

	UFUNCTION(BlueprintCallable)
	void SetNiagaraParameters();

	float currentWeatherIndex = 0;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TArray<FUserWeatherData> MyWeatherQueue;

	FTimerHandle TransitionTimer;
	
public:
	float rainSpawnRate = 0.0f;
};

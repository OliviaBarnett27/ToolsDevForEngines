// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EUW_WeatherSelector.h"
#include "GameFramework/Volume.h"
#include "NiagaraComponent.h"
#include "NiagaraSystem.h"
#include "Containers/CircularQueue.h"
#include "WeatherVolume.generated.h"

class UCloudsComponent;
class UVolumetricCloudComponent;
class AVolumetricCloud;
class UDayNightComponent;
class ADayNightCycle;
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

	//---------- UPROPERTIES
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	TObjectPtr<UNiagaraComponent> _NS_RainComponent;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	TObjectPtr<UNiagaraComponent> _NS_SnowComponent;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	TObjectPtr<UDayNightComponent> _DayNightComponent;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Weather Data")
	FUserWeatherData _VolumeData;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TArray<FUserWeatherData> MyWeatherQueue;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UCloudsComponent* _CloudsComponent;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	UMaterialInstanceDynamic* DynamicCloudMaterial;

	//---------- UFUNCTIONS
	UFUNCTION(BlueprintCallable, Category = "Weather Data")
	void SetUserWeatherData(FUserWeatherData WeatherData);
	UFUNCTION(BlueprintCallable)
	void WeatherTransition();
	UFUNCTION(BlueprintCallable)
	void SetNiagaraParameters();
	UFUNCTION()
	void SoftenTransition();
	UFUNCTION()
	void StartTransitionTimer();
	UFUNCTION()
	void StartSoftenTimer();
	UFUNCTION()
	void TransitionManager();

	//---------- variables
	float currentWeatherIndex = 0;
	FTimerHandle TransitionTimer;
	FTimerHandle SoftenTimer;
	float rainSpawnRate = 0.0f;
	FVector rainGravity = FVector::ZeroVector;
	bool hasBeenSoftened;
};


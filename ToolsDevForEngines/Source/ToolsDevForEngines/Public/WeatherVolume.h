// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "NiagaraComponent.h"
#include "PCGComponent.h"
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
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	TObjectPtr<USceneComponent> _RootComponent;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	TObjectPtr<UNiagaraComponent> _NS_RainComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	TObjectPtr<UNiagaraComponent> _NS_SnowComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	TObjectPtr<UPCGComponent> _PCGComponent;
};

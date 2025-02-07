﻿// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DirectionalLight.h"
#include "Misc/OutputDeviceNull.h"
#include "GameFramework/Actor.h"
#include "DayNightCycle.generated.h"

UCLASS()
class TOOLSDEVFORENGINES_API ADayNightCycle : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ADayNightCycle();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere)
	AActor* sun;

	UPROPERTY(EditAnywhere)
	ADirectionalLight* lightSource;

	UPROPERTY(EditAnywhere)
	float turnRate;

	UPROPERTY(EditAnywhere)
	bool enableDayNightCycle;

	int counter = 0;
};

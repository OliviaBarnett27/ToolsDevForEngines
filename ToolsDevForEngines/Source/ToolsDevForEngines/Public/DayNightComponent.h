﻿// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DayNightComponent.generated.h"


class ADirectionalLight;

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class TOOLSDEVFORENGINES_API UDayNightComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UDayNightComponent();


	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	AActor* skySphere;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	ADirectionalLight* lightSource;

	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	float turnRate;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool enableDayNightCycle = false;
protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
};

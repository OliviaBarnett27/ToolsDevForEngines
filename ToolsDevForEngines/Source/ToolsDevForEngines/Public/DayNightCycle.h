// Fill out your copyright notice in the Description page of Project Settings.

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

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	AActor* sun;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	ADirectionalLight* lightSource;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float turnRate;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool enableDayNightCycle;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
};

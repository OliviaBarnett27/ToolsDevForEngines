// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CloudsComponent.generated.h"


class UVolumetricCloudComponent;
class AVolumetricCloud;

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class TOOLSDEVFORENGINES_API UCloudsComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UCloudsComponent();

	UPROPERTY(EditAnywhere)
	UMaterialInterface* CloudMaterial;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	AVolumetricCloud* _VolumetricCloud;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	UVolumetricCloudComponent* _VolumetricCloudComponent;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	
};

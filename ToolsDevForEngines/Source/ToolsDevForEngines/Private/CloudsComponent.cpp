// Fill out your copyright notice in the Description page of Project Settings.


#include "CloudsComponent.h"

#include "Components/VolumetricCloudComponent.h"


// Sets default values for this component's properties
UCloudsComponent::UCloudsComponent()
{
	_VolumetricCloud = CreateDefaultSubobject<AVolumetricCloud>(TEXT("My Volumetric Cloud"));
	_VolumetricCloudComponent = _VolumetricCloud->GetComponentByClass<UVolumetricCloudComponent>();
	CloudMaterial = _VolumetricCloudComponent->GetMaterial();
}


// Called when the game starts
void UCloudsComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}



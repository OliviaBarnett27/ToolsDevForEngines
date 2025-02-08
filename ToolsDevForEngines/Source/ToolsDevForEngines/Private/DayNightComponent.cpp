// Fill out your copyright notice in the Description page of Project Settings.


#include "DayNightComponent.h"

#include "Engine/DirectionalLight.h"
#include "Misc/OutputDeviceNull.h"


// Sets default values for this component's properties
UDayNightComponent::UDayNightComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UDayNightComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UDayNightComponent::TickComponent(float DeltaTime, ELevelTick TickType,
                                       FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

		
	if (enableDayNightCycle)
	{
		if (lightSource)
		{
			lightSource->AddActorLocalRotation(FRotator((DeltaTime * turnRate), 0, 0));
			UE_LOG(LogTemp, Error, TEXT("Bool is: %s"), enableDayNightCycle ? TEXT("true") : TEXT("false"));
		}
		if (skySphere)
		{
			FOutputDeviceNull ar;
			skySphere->CallFunctionByNameWithArguments(TEXT("UpdateSunDirection"), ar, NULL, true);

		}
	}

	// ...
}


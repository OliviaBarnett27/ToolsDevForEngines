#include "DayNightComponent.h"

#include "Engine/DirectionalLight.h"
#include "Misc/OutputDeviceNull.h"
UDayNightComponent::UDayNightComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}


// Called when the game starts
void UDayNightComponent::BeginPlay()
{
	Super::BeginPlay();
}

void UDayNightComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	
	if (enableDayNightCycle)
	{
		if (lightSource)
		{
			lightSource->AddActorLocalRotation(FRotator((DeltaTime * turnRate), 0, 0));
		}
		if (skySphere)
		{
			FOutputDeviceNull ar;
			skySphere->CallFunctionByNameWithArguments(TEXT("UpdateSunDirection"), ar, NULL, true);
		}
	}
}


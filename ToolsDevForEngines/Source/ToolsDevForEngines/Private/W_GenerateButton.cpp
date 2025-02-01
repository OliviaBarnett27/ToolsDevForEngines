// Fill out your copyright notice in the Description page of Project Settings.


#include "W_GenerateButton.h"

#include "EngineUtils.h"
#include "WeatherVolume.h"
#include "Components/Button.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Components/TextBlock.h"
#include "EntitySystem/MovieSceneEntitySystemRunner.h"

void UW_GenerateButton::NativeConstruct()
{
	Super::NativeConstruct();

	OnGenerateButtonClickedDelegate.AddDynamic(this, &UW_GenerateButton::OnGenerateButtonClicked);

	if (MyButton)
	{
		MyButton->OnClicked.AddDynamic(this, &UW_GenerateButton::OnGenerateButtonClicked);
	}
	else
	{
		UE_LOG(LogTemp, Display, TEXT("no button?"));
	}
	
	Text->SetText(FText::FromString("GENERATE WEATHER"));
}

void UW_GenerateButton::OnGenerateButtonClicked()
{
	TArray<AVolume*> PlacedWeatherVolumes = FindVolumeByClass(GetWorld(), AWeatherVolume::StaticClass());
	if (!(PlacedWeatherVolumes.Num() > 0))
	{
		UE_LOG(LogTemp, Warning, TEXT("No placed volume"));
		return; //exit if no weather volume
	}
	
}

TArray<AVolume*> UW_GenerateButton::FindVolumeByClass(UWorld* World, TSubclassOf<AVolume> VolumeClass)
{
	TArray<AVolume*> AllVolumes;
	for (TActorIterator<AVolume> volumes(World, VolumeClass); volumes; ++volumes)
	{
		UE_LOG(LogTemp, Display, TEXT("VOLUME FOUNDDD"));

		 AllVolumes.Add(*volumes);
	}

	return AllVolumes;
	
	
}

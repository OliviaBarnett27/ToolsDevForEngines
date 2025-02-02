// Fill out your copyright notice in the Description page of Project Settings.


#include "EUW_WeatherSelector.h"

#include "WeatherVolume.h"
#include "W_ClimateWidget.h"
#include "W_GenerateButton.h"
#include "W_SeasonWidget.h"
#include "Components/Button.h"
#include "Components/ComboBoxString.h"
#include "Components/TextBlock.h"

void UEUW_WeatherSelector::NativeConstruct()
{
	Super::NativeConstruct();

	UtilityTitle->SetText(FText::FromString("Weather Selector"));
	
	OnGenerateWeatherButtonClickedDelegate.AddDynamic(this, &UEUW_WeatherSelector::SetUserInputVariables);

	GenerateButton->MyButton->OnClicked.AddDynamic(this, &UEUW_WeatherSelector::SetUserInputVariables);
}

void UEUW_WeatherSelector::SetUserInputVariables()
{
	UserClimate = FName(ClimateWidget->MyComboBox->GetSelectedOption());
	UserSeason = FName(SeasonWidget->MyComboBox->GetSelectedOption());

	TArray<AVolume*> PlacedWeatherVolumes = GenerateButton->FindVolumeByClass(GetWorld(), AWeatherVolume::StaticClass());
	if (!(PlacedWeatherVolumes.Num() > 0))
	{
		UE_LOG(LogTemp, Warning, TEXT("No placed volume"));
		return; //exit if no weather volume
	}

	for (int i = 0; i < PlacedWeatherVolumes.Num(); i++)
	{
		AWeatherVolume* Volume = static_cast<AWeatherVolume*>(PlacedWeatherVolumes[i]);

		//--DEBUGGING--
		UserDataStruct.rainSpawnRate = 3434343.43;
		//--END DEBUGGING--
		
		Volume->SetUserWeatherData(UserDataStruct);
	}
	
	UE_LOG(LogTemp, Display, TEXT("BUTTON PRESSED"));
}



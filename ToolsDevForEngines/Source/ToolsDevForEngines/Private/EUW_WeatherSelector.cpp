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
	UDataTable* MyDataTable = GenerateButton->GetDataTable();

	//--------------------------------get the data table row using struct type and the names

	//GeneratedWeatherQueue.Enqueue(UserDataStruct);

	for (int i = 0; i <= 500; i++)
{
	//--DEBUGGING--
	UserDataStruct.rainSpawnRate = i * 1000 ;
	//--END DEBUGGING--

	GeneratedWeatherQueue.Enqueue(UserDataStruct);

			
}
}

void UEUW_WeatherSelector::CommunicateWithVolumes()
{
	TArray<AVolume*> PlacedWeatherVolumes = GenerateButton->FindVolumeByClass(GetWorld(), AWeatherVolume::StaticClass());
	if (!(PlacedWeatherVolumes.Num() > 0)) //if no weather volumes were found
	{
		UE_LOG(LogTemp, Warning, TEXT("No placed volume"));
		return; //exit if no weather volume
	}

	for (int i = 0; i < PlacedWeatherVolumes.Num(); i++) //for each found weather volume
	{
		AWeatherVolume* Volume = Cast<AWeatherVolume>(PlacedWeatherVolumes[i]); //cast to the weather volume
		
		Volume->SetUserWeatherData(UserDataStruct); //function to set values in volume's struct instance
	}
}

void UEUW_WeatherSelector::CalculateWeather()
{
	UserClimate = FName(ClimateWidget->MyComboBox->GetSelectedOption());
	UserSeason = FName(SeasonWidget->MyComboBox->GetSelectedOption());

	/*for (int i = 0; i <= 500; i++)
	{
		//--DEBUGGING--
		UserDataStruct.rainSpawnRate = i * 1000 ;
		//--END DEBUGGING--

		GeneratedWeatherQueue.Enqueue(UserDataStruct);
	}*/
	



	
}



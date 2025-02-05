// Fill out your copyright notice in the Description page of Project Settings.


#include "EUW_WeatherSelector.h"

#include "WeatherVolume.h"
#include "W_ClimateWidget.h"
#include "W_DayLengthWidget.h"
#include "W_GenerateButton.h"
#include "W_SeasonWidget.h"
#include "Components/Button.h"
#include "Components/ComboBoxString.h"
#include "Components/Slider.h"
#include "Components/TextBlock.h"

void UEUW_WeatherSelector::NativeConstruct()
{
	Super::NativeConstruct();

	UtilityTitle->SetText(FText::FromString("Weather Selector"));
	
	OnGenerateWeatherButtonClickedDelegate.AddDynamic(this, &UEUW_WeatherSelector::SetUserWeatherData);

	GenerateButton->MyButton->OnClicked.AddDynamic(this, &UEUW_WeatherSelector::SetUserWeatherData);
}

void UEUW_WeatherSelector::SetUserInputs()
{
	UserClimate = FName(ClimateWidget->MyComboBox->GetSelectedOption());
	UserSeason = FName(SeasonWidget->MyComboBox->GetSelectedOption());
	//UserDayLength = DayLengthWidget->MySlider->GetValue();
}

void UEUW_WeatherSelector::SetUserWeatherData()
{
	SetUserInputs();

	UserDataStruct.dayLength = UserDayLength;

	TArray<AVolume*> PlacedWeatherVolumes = GenerateButton->FindVolumeByClass(GetWorld(), AWeatherVolume::StaticClass());
	if (!(PlacedWeatherVolumes.Num() > 0)) //if no weather volumes were found
	{
		UE_LOG(LogTemp, Warning, TEXT("No placed volume"));
		return; //exit if no weather volume
	}

	for (int i = 0; i < PlacedWeatherVolumes.Num(); i++) //for each found weather volume
	{
		AWeatherVolume* Volume = Cast<AWeatherVolume>(PlacedWeatherVolumes[i]); //cast to the weather volume

		//--DEBUGGING--
		UserDataStruct.rainSpawnRate = 20000;
		//--END DEBUGGING--

		for(int j = 0; j < 50; j++)
		{
			UserDataStruct.rainSpawnRate = j * j;
			UserDataStruct.rainGravity.X = (j * j) * 100;
			Volume->SetUserWeatherData(UserDataStruct); //function to set values in volume's struct instance
		}

	}

	UDataTable* MyDataTable = GenerateButton->GetDataTable();

	//--------------------------------get the data table row using struct type and the names 
}



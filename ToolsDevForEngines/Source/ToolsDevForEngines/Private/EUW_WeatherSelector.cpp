// Fill out your copyright notice in the Description page of Project Settings.


#include "EUW_WeatherSelector.h"
#include "WeatherVolume.h"
#include "W_ClimateWidget.h"
#include "W_DayLengthWidget.h"
#include "W_DayNightWidget.h"
#include "W_ErraticismWidget.h"
#include "W_GenerateButton.h"
#include "W_SeasonWidget.h"
#include "Components/Button.h"
#include "Components/CheckBox.h"
#include "Components/ComboBoxString.h"
#include "Components/Slider.h"
#include "Components/SpinBox.h"
#include "Components/TextBlock.h"
#include "ToolsDevForEngines/Season.h"


struct FClimate;
struct FSeason;

//--------------------------------------------------------------------------Native construct
void UEUW_WeatherSelector::NativeConstruct()
{
	Super::NativeConstruct();

	UtilityTitle->SetText(FText::FromString("Weather Selector"));
	//OnGenerateWeatherButtonClickedDelegate.AddDynamic(this, &UEUW_WeatherSelector::OnButtonCliked);
	GenerateButton->MyButton->OnClicked.AddDynamic(this, &UEUW_WeatherSelector::OnButtonClicked);
}

//--------------------------------------------------------------------------Button clicked
void UEUW_WeatherSelector::OnButtonClicked()
{
	SetUserInputs();

	if (UserClimate == NAME_None) {return;}
	if (UserSeason == NAME_None) {return;}
	
	ReadDataTable();
	
	UserDataStruct.dayLength = UserDayLength;
	UserDataStruct.dayNightCycle = UserDayNight;

	CommunicateWithVolume();
	
	GenerateButton->Text->SetText(FText::FromString("WEATHER GENERATED"));
}

//--------------------------------------------------------------------------Set User Inputs
void UEUW_WeatherSelector::SetUserInputs()
{
	UserClimate = FName(ClimateWidget->MyComboBox->GetSelectedOption());
	UserSeason = FName(SeasonWidget->MyComboBox->GetSelectedOption());
	UserDayNight = DayNightWidget->MyCheckBox->IsChecked();
	UserDayLength = DayLengthWidget->MySpinBox->GetValue();
	UserErraticism = ErraticismWidget->MySpinBox->GetValue();
}

//--------------------------------------------------------------------------Read Data Table
void UEUW_WeatherSelector::ReadDataTable()
{
	if (!WeatherDataTable) {return;}
	
	FSeason* SeasonData = WeatherDataTable->FindRow<FSeason>(UserSeason, TEXT("Find Season Row"));
	
	if (!SeasonData) {return;}

	ClimateData = SeasonData->ClimateMap.Find(UserClimate);

	if (!ClimateData) {return;}

	UE_LOG(LogTemp, Display, TEXT("RainMin: %f, MainMax: %f"), ClimateData->RainMin, ClimateData->RainMax);
}

//--------------------------------------------------------------------------Calculate weather features 
void UEUW_WeatherSelector::CalculateWeather()
{
	CalculateRainSpawnRate();
	CalculateRainGravity();
}

//--------------------------------------------------------------------------Calculate rain spawn rate
void UEUW_WeatherSelector::CalculateRainSpawnRate()
{
	float randomRain  = FMath::FRandRange(ClimateData->RainMin, ClimateData->RainMax);
	if (randomRain < 20)
	{
		UserDataStruct.rainSpawnRate = randomRain;
	}
	else if (randomRain >= 20 && randomRain < 50)
	{
		UserDataStruct.rainSpawnRate = randomRain * 10;
	}
	else if (randomRain >= 50 && randomRain < 75) 
	{
		UserDataStruct.rainSpawnRate = randomRain * 50;
	}
	else
	{
		UserDataStruct.rainSpawnRate = randomRain * 150;
	}
}

//--------------------------------------------------------------------------Calculate rain gravity
void UEUW_WeatherSelector::CalculateRainGravity()
{
	//temp calc
	UserDataStruct.rainGravity = FVector((7 * 100), 0, -750);
}

//--------------------------------------------------------------------------Communicate with volume(s)
void UEUW_WeatherSelector::CommunicateWithVolume()
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

		Volume->MyWeatherQueue.Empty();

		for(int j = 0; j < 50; j++)
		{
			CalculateWeather();
			Volume->SetUserWeatherData(UserDataStruct); //function to set values in volume's struct instance
		}
	}
}



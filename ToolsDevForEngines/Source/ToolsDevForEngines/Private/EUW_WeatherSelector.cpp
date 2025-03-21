﻿// Fill out your copyright notice in the Description page of Project Settings.


#include "EUW_WeatherSelector.h"
#include "WeatherVolume.h"
#include "W_ClimateWidget.h"
#include "W_DayLengthWidget.h"
#include "W_DayNightWidget.h"
#include "W_ErraticismWidget.h"
#include "W_GenerateButton.h"
#include "W_SeasonWidget.h"
#include "Components/BrushComponent.h"
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
	GenerateButton->MyButton->OnClicked.AddDynamic(this, &UEUW_WeatherSelector::OnButtonClicked);
}
//--------------------------------------------------------------------------Button clicked
void UEUW_WeatherSelector::OnButtonClicked()
{
	SetUserInputs();

	if (UserClimate == NAME_None) {return;}
	if (UserSeason == NAME_None) {return;}
	
	ReadDataTable();

	//these will not change in calculations
	UserDataStruct.dayLength = UserDayLength;
	UserDataStruct.dayNightCycle = UserDayNight;
	UserDataStruct.erraticismFactor = UserErraticism;

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
//--------------------------------------------------------------------------Read Data Table: gets the correct data for the user's selections
void UEUW_WeatherSelector::ReadDataTable()
{
	if (!WeatherDataTable) {return;}
	
	FSeason* SeasonData = WeatherDataTable->FindRow<FSeason>(UserSeason, TEXT("Find Season Row")); //gets the struct from the row with the same name as the season the user selected
	
	if (!SeasonData) {return;}

	ClimateData = SeasonData->ClimateMap.Find(UserClimate); //finds the map within the season struct with the same name as the climate the user selected

	if (!ClimateData) {return;}

	UE_LOG(LogTemp, Display, TEXT("RainMin: %f, MainMax: %f"), ClimateData->RainMin, ClimateData->RainMax);
}
//--------------------------------------------------------------------------Calculate weather features
void UEUW_WeatherSelector::CalculateWeather()
{
	SetPrecipitation();
	
	if (enableRain)
	{
		CalculateRainSpawnRate();
		CalculateRainGravity();
	}
	else { UserDataStruct.rainSpawnRate = 0.0f;} //if rain has been to decides to not be active, it will be set to zero

	if (enableSnow)
	{
		CalculateSnowSpawnRate();
		CalculateSnowGravity();
	}
	else { UserDataStruct.snowSpawnRate = 0.0f;} //if snow has been to decides to not be active, it will be set to zero
}
//--------------------------------------------------------------------------Calculate rain spawn rate
void UEUW_WeatherSelector::CalculateRainSpawnRate()
{
	float randomRain  = FMath::FRandRange(ClimateData->RainMin, ClimateData->RainMax);
	UE_LOG(LogTemp, Warning, TEXT ("random rain: %f"), randomRain);
	if (randomRain < 25)
	{
		UserDataStruct.rainSpawnRate = randomRain;
	}
	else if (randomRain >= 25 && randomRain < 50)
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
	UE_LOG(LogTemp, Error, TEXT("spawn rate: %f"), UserDataStruct.rainSpawnRate)

	UserDataStruct.rainSpawnRate *= volumeSizeCubed / 100000000; //scales the spawn rate with the volume
}
//--------------------------------------------------------------------------Calculate rain gravity
void UEUW_WeatherSelector::CalculateRainGravity()
{
	float randomWind  = FMath::FRandRange(ClimateData->WindMin, ClimateData->WindMax);
	UserDataStruct.rainGravity.X = randomWind * 10;
}
//--------------------------------------------------------------------------Calculate snow spawn rate
void UEUW_WeatherSelector::CalculateSnowSpawnRate()
{
	float randomSnow  = FMath::FRandRange(ClimateData->SnowMin, ClimateData->SnowMax);
	if (randomSnow < 25)
	{
		UserDataStruct.snowSpawnRate = randomSnow;
	}
	else if (randomSnow >= 25 && randomSnow < 50)
	{
		UserDataStruct.snowSpawnRate = randomSnow * 10;
	}
	else if (randomSnow >= 50 && randomSnow < 75) 
	{
		UserDataStruct.snowSpawnRate = randomSnow * 50;
	}
	else
	{
		UserDataStruct.snowSpawnRate = randomSnow * 150;
	}
	UE_LOG(LogTemp, Error, TEXT("snow spawn rate: %f"), UserDataStruct.snowSpawnRate)
	
	UserDataStruct.snowSpawnRate *= volumeSizeCubed / 100000000;
}
//--------------------------------------------------------------------------Calculate snow gravity
void UEUW_WeatherSelector::CalculateSnowGravity()
{
	float randomWind  = FMath::FRandRange(ClimateData->WindMin, ClimateData->WindMax);
	UserDataStruct.snowGravity.X = randomWind * 10;
}
//--------------------------------------------------------------------------Communicate with volume(s): finds weather volumes in the world and passes them the calculated weather
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
;
		FindVolumeSize(Volume);

		for(int j = 0; j < UserErraticism * 5; j++)
		{
			CalculateWeather();
			Volume->SetUserWeatherData(UserDataStruct); //function to set values in volume's struct instance
		}
	}
}
//--------------------------------------------------------------------------Set precipitation: determines whether snow or rain should be active. if one is active, the other cannot be.
void UEUW_WeatherSelector::SetPrecipitation()
{
	int random;
	
	if (ClimateData->RainMax <= 0.0f) {enableRain = false;}
	if (ClimateData->SnowMax <= 0.0f) {enableSnow = false;}

	if (ClimateData->SnowMax > 75)
	{
		random = FMath::RandRange(1, 10);
		if (random != 10) {enableSnow = true;}
		else {enableSnow = false;}
	}
	if (ClimateData->RainMax > 75)
	{
		random = FMath::RandRange(1, 10);
		UE_LOG(LogTemp, Error, TEXT("Random is: %d"), random);
		if (random !=10) {enableRain = true;}
		else {enableRain = false;}
	}

	if (ClimateData->SnowMax > 50 && ClimateData->SnowMax <= 75)
	{
		random = FMath::RandRange(1, 10);
		if (random <= 3) {enableSnow = false;}
		else {enableSnow = true;}
	}
	if (ClimateData->RainMax > 50 && ClimateData->RainMax <= 75)
	{
		random = FMath::RandRange(1, 10);
		UE_LOG(LogTemp, Error, TEXT("Random is: %d"), random);
		if (random <= 3) {enableRain = false;}
		else {enableRain = true;}
	}
	
	if (ClimateData->SnowMax > 25 && ClimateData->SnowMax <= 50)
	{
		random = FMath::RandRange(1, 10);
		if (random <= 6) {enableSnow = false;}
		else {enableSnow = true;}
	}
	if (ClimateData->RainMax > 25 && ClimateData->RainMax <= 50)
	{
		random = FMath::RandRange(1, 10);
		UE_LOG(LogTemp, Error, TEXT("Random is: %d"), random);
		if (random == 1) {enableRain = false;}
		else {enableRain = true;}
	}
	if (ClimateData->SnowMax > 0 && ClimateData->SnowMax <= 25)
	{
		random = FMath::RandRange(1, 10);
		if (random <= 6) {enableSnow = false;}
		else {enableSnow = true;}
	}
	if (ClimateData->RainMax > 0 && ClimateData->RainMax <= 25)
	{
		random = FMath::RandRange(1, 10);
		UE_LOG(LogTemp, Error, TEXT("Random is: %d"), random);
		if (random == 1) {enableRain = false;}
		else {enableRain = true;}
	}

	if (enableSnow && enableRain)
	{
		if (ClimateData->RainMax > ClimateData->SnowMax)
		{
			enableRain = true;
			enableSnow = false;
		}
		else
		{
			enableRain = true;
			enableSnow = false;
		}
	}
}
//--------------------------------------------------------------------------Find volume size
void UEUW_WeatherSelector::FindVolumeSize(AWeatherVolume* Volume)
{
	FVector volumeSize = Volume->GetComponentsBoundingBox().GetSize();

	volumeSizeCubed = volumeSize.X * volumeSize.Y * volumeSize.Z;
}




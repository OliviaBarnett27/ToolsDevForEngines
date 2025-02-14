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
	SetPrecipitation();
	
	if (enableRain)
	{
		CalculateRainSpawnRate();
		CalculateRainGravity();
	}
	else { UserDataStruct.rainSpawnRate = 0.0f;}

	if (enableSnow)
	{
		CalculateSnowSpawnRate();
		CalculateSnowGravity();
	}
	else { UserDataStruct.snowSpawnRate = 0.0f;}
}
//--------------------------------------------------------------------------Calculate rain spawn rate
void UEUW_WeatherSelector::CalculateRainSpawnRate()
{
	float randomRain  = FMath::FRandRange(ClimateData->RainMin, ClimateData->RainMax);
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
}
//--------------------------------------------------------------------------Calculate rain gravity
void UEUW_WeatherSelector::CalculateRainGravity()
{
	float randomWind  = FMath::FRandRange(ClimateData->WindMin, ClimateData->WindMax);
	if (randomWind < 25)
	{
		UserDataStruct.rainGravity.X = randomWind * 10;
	}
	else if (randomWind >= 25 && randomWind < 50)
	{
		UserDataStruct.rainGravity.X = randomWind * 30;
	}
	else if (randomWind >= 50 && randomWind < 75) 
	{
		UserDataStruct.rainGravity.X = randomWind * 50;
	}
	else
	{
		UserDataStruct.rainGravity.X = randomWind + 75;
	}
	UE_LOG(LogTemp, Warning, TEXT("gravity:  %s"), *UserDataStruct.rainGravity.ToString());
	UE_LOG(LogTemp, Warning, TEXT("random wind:  %f"), randomWind);
}
//--------------------------------------------------------------------------Calculate rain spawn rate
void UEUW_WeatherSelector::CalculateSnowSpawnRate()
{
	float randomSnow  = FMath::FRandRange(ClimateData->SnowMin, ClimateData->SnowMin);
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
	UE_LOG(LogTemp, Error, TEXT("spawn rate: %f"), UserDataStruct.snowSpawnRate)
}
//--------------------------------------------------------------------------Calculate rain gravity
void UEUW_WeatherSelector::CalculateSnowGravity()
{
	float randomWind  = FMath::FRandRange(ClimateData->WindMin, ClimateData->WindMax);
	if (randomWind < 25)
	{
		UserDataStruct.snowGravity.X = randomWind * 10;
	}
	else if (randomWind >= 25 && randomWind < 50)
	{
		UserDataStruct.snowGravity.X = randomWind * 30;
	}
	else if (randomWind >= 50 && randomWind < 75) 
	{
		UserDataStruct.snowGravity.X = randomWind * 50;
	}
	else
	{
		UserDataStruct.snowGravity.X = randomWind + 75;
	}
	UE_LOG(LogTemp, Warning, TEXT("gravity:  %s"), *UserDataStruct.snowGravity.ToString());
	UE_LOG(LogTemp, Warning, TEXT("random wind:  %f"), randomWind);
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
//--------------------------------------------------------------------------Set precipitation
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
}




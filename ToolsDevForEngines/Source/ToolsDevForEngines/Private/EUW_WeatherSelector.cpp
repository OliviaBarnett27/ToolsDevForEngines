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
#include "ToolsDevForEngines/Season.h"


struct FClimate;
struct FSeason;

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

void UEUW_WeatherSelector::ReadDataTable()
{
	if (!WeatherDataTable)
	{
		return;
	}
	
	FSeason* SeasonData = WeatherDataTable->FindRow<FSeason>(UserSeason, TEXT("Find Season Row"));
	
	//SeasonData = reinterpret_cast<FSeason*>(RowPointer); //casts the found row to the season struct
	
	if (!SeasonData)
	{
		UE_LOG(LogTemp, Log, TEXT("RSeason Data : %p"), SeasonData);
		return;
	}

	ClimateData = SeasonData->ClimateMap.Find(UserClimate);

	if (!ClimateData)
	{
		UE_LOG(LogTemp, Log, TEXT("no climate data"));
		return;
	}

	UE_LOG(LogTemp, Display, TEXT("RainMin: %f, MainMax: %f"), ClimateData->RainMin, ClimateData->RainMax);
}

void UEUW_WeatherSelector::GetDataTableRow()
{

}

void UEUW_WeatherSelector::SetUserWeatherData()
{
	SetUserInputs();
	ReadDataTable();
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

		Volume->MyWeatherQueue.Empty();
		//--DEBUGGING--
		//UserDataStruct.rainSpawnRate = 20000;
		//--END DEBUGGING--

		for(int j = 0; j < 50; j++)
		{
			//UserDataStruct.rainSpawnRate = j *j;
			UserDataStruct.rainSpawnRate = FMath::FRandRange(ClimateData->RainMin, ClimateData->RainMax);
			UserDataStruct.rainGravity = FVector((j * j) * 100, 0, -750);
			//UE_LOG(LogTemp, Display, TEXT("SetUserWeatherData - rainSpawnRate: %f | rainGravity: %s"), UserDataStruct.rainSpawnRate, *UserDataStruct.rainGravity.ToString());
			Volume->SetUserWeatherData(UserDataStruct); //function to set values in volume's struct instance
		}
	}

	UDataTable* MyDataTable = GenerateButton->GetDataTable();

	//--------------------------------get the data table row using struct type and the names 
}



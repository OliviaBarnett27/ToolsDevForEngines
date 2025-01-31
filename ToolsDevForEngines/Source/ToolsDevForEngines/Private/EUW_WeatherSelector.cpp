// Fill out your copyright notice in the Description page of Project Settings.


#include "EUW_WeatherSelector.h"

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
	UE_LOG(LogTemp, Display, TEXT("BUTTON PRESSED"));
}

float UEUW_WeatherSelector::GetRainHeaviness_Implementation_Implementation()
{
	float rainSpawnRate = 0.0f;
	return rainSpawnRate;
}


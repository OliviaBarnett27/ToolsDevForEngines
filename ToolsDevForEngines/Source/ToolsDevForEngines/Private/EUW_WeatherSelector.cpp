// Fill out your copyright notice in the Description page of Project Settings.


#include "EUW_WeatherSelector.h"

#include "Components/TextBlock.h"

void UEUW_WeatherSelector::NativeConstruct()
{
	Super::NativeConstruct();

	UtilityTitle->SetText(FText::FromString("Weather Selector"));

}

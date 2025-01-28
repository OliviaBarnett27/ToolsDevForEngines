// Fill out your copyright notice in the Description page of Project Settings.


#include "W_DayNightWidget.h"

#include "Components/TextBlock.h"

void UW_DayNightWidget::NativeConstruct()
{
	Super::NativeConstruct();

	Title->SetText(FText::FromString("Enable day/night cycle? "));
}

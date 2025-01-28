// Fill out your copyright notice in the Description page of Project Settings.


#include "W_GenerateButton.h"

#include "Components/TextBlock.h"

void UW_GenerateButton::NativeConstruct()
{
	Super::NativeConstruct();

	Text->SetText(FText::FromString("GENERATE WEATHER"));
}

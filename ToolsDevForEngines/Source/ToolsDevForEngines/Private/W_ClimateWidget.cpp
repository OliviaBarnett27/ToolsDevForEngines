// Fill out your copyright notice in the Description page of Project Settings.


#include "W_ClimateWidget.h"

#include "Components/Button.h"
#include "Components/ComboBoxString.h"
#include "Components/TextBlock.h"

void UW_ClimateWidget::NativeConstruct()
{
	Super::NativeConstruct();

	OnClimateClearButtonClickedDelegate.AddDynamic(this, &UW_ClimateWidget::ClearComboBoxSelection);

	Title->SetText(FText::FromString("Season:"));
	
	MyComboBox->AddOption("Arid");
	MyComboBox->AddOption("Mediterranean");
	MyComboBox->AddOption("Polar");
	MyComboBox->AddOption("Temperate");
	MyComboBox->AddOption("Tropical");

	ButtonText->SetText(FText::FromString("CLEAR"));

	ClearButton->OnClicked.AddDynamic(this, &UW_ClimateWidget::ClearComboBoxSelection);
}

void UW_ClimateWidget::ClearComboBoxSelection()
{
	MyComboBox->ClearSelection();
}

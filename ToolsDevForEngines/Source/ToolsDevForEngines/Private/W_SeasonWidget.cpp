// Fill out your copyright notice in the Description page of Project Settings.


#include "W_SeasonWidget.h"

#include "Components/Button.h"
#include "Components/ComboBoxString.h"
#include "Components/TextBlock.h"

void UW_SeasonWidget::NativeConstruct()
{
	Super::NativeConstruct();

	OnSeasonClearButtonClickedDelegate.AddDynamic(this, &UW_SeasonWidget::ClearComboBoxSelection);

	Title->SetText(FText::FromString("Season:"));
	
	MyComboBox->AddOption("Spring");
	MyComboBox->AddOption("Summer");
	MyComboBox->AddOption("Autumn");
	MyComboBox->AddOption("Winter");

	ButtonText->SetText(FText::FromString("CLEAR"));

	ClearButton->OnClicked.AddDynamic(this, &UW_SeasonWidget::ClearComboBoxSelection);
}

void UW_SeasonWidget::ClearComboBoxSelection()
{
	MyComboBox->ClearSelection();
}

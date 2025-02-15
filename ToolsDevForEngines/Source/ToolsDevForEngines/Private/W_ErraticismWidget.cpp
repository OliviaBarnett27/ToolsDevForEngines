// Fill out your copyright notice in the Description page of Project Settings.


#include "W_ErraticismWidget.h"

#include "Components/SpinBox.h"

void UW_ErraticismWidget::NativeConstruct()
{
	Super::NativeConstruct();

	MySpinBox->SetMinValue(1.0f);
	MySpinBox->SetMaxValue(95.0f);
	MySpinBox->SetValue(1.0f);
}

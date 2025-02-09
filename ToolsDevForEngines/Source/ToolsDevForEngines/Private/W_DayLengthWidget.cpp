// Fill out your copyright notice in the Description page of Project Settings.


#include "W_DayLengthWidget.h"

#include "Components/Slider.h"
#include "Components/SpinBox.h"

void UW_DayLengthWidget::NativeConstruct()
{
	Super::NativeConstruct();

		UE_LOG(LogTemp, Log, TEXT("MySpinBox was successfully found in SetupSpinBox()"));

		MySpinBox->SetMinValue(0.0f);
		MySpinBox->SetMaxValue(25.0f);
		MySpinBox->SetValue(10.0f);
}

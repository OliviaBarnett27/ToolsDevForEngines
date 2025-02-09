// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "W_DayLengthWidget.generated.h"

class USpacer;
class USpinBox;
class UTextBlock;
class USlider;
class UHorizontalBox;

UCLASS()
class TOOLSDEVFORENGINES_API UW_DayLengthWidget : public UUserWidget
{
	GENERATED_BODY()

	virtual void NativeConstruct() override;

public:
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UHorizontalBox> HorizontalBox;
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UTextBlock> Title;
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<USpinBox> MySpinBox;
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<USpacer> Spacer;
};

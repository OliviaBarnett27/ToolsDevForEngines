// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "W_DayNightWidget.generated.h"

class USpacer;
class UTextBlock;
class UCheckBox;
class UHorizontalBox;
class UBorder;
/**
 * 
 */
UCLASS()
class TOOLSDEVFORENGINES_API UW_DayNightWidget : public UUserWidget
{
	GENERATED_BODY()

	virtual void NativeConstruct() override;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UHorizontalBox> HorizontalBox;
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UTextBlock> Title;
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UBorder> Border;
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UCheckBox> CheckBox;
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<USpacer> Spacer;
};

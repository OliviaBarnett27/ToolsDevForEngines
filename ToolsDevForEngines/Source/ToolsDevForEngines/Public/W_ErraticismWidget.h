// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "W_ErraticismWidget.generated.h"

class UTextBlock;
class USlider;
class UHorizontalBox;
/**
 * 
 */
UCLASS()
class TOOLSDEVFORENGINES_API UW_ErraticismWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UHorizontalBox> HorizontalBox;
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UTextBlock> Title;
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<USlider> MySlider;
};

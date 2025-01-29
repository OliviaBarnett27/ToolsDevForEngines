// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "W_GenerateButton.generated.h"

class UTextBlock;
class UButton;
/**
 * 
 */
UCLASS()
class TOOLSDEVFORENGINES_API UW_GenerateButton : public UUserWidget
{
	GENERATED_BODY()

	virtual void NativeConstruct() override;

public:
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UButton> MyButton;
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UTextBlock> Text;
	
};

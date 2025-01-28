// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "W_SeasonWidget.generated.h"

class UBorder;
class UComboBoxString;
class UButton;
class USpacer;
class UTextBlock;
class UVerticalBox;

//DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnClearButtonClickedSignature);

UCLASS(Abstract, BlueprintType)
class TOOLSDEVFORENGINES_API UW_SeasonWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	virtual void NativeConstruct() override;

	UFUNCTION()
	void ClearComboBoxSelection();
	
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UVerticalBox> VerticalBox;
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UTextBlock> Title;
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UComboBoxString> ComboBox;
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<USpacer> Spacer;
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UButton> ClearButton;
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UTextBlock> ButtonText;
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UBorder> Border;

	/*UPROPERTY(BlueprintAssignable)
	FOnClearButtonClickedSignature OnClearButtonClickedDelegate;*/
};

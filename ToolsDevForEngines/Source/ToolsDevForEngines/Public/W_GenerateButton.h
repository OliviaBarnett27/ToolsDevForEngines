// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "W_GenerateButton.generated.h"

class UTextBlock;
class UButton;

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnGenerateButtonClickedSignature);

UCLASS()
class TOOLSDEVFORENGINES_API UW_GenerateButton : public UUserWidget
{
	GENERATED_BODY()

	virtual void NativeConstruct() override;

public:
	UPROPERTY( meta = (BindWidget))
	TObjectPtr<UButton> MyButton;
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UTextBlock> Text;

	UFUNCTION()
	void OnGenerateButtonClicked();
	

	UFUNCTION(BlueprintCallable)
	static TArray<AVolume*> FindVolumeByClass(UWorld* World, TSubclassOf<AVolume> VolumeClass);

	UPROPERTY(BlueprintAssignable)
	FOnGenerateButtonClickedSignature  OnGenerateButtonClickedDelegate;

	UFUNCTION(BlueprintCallable)
	UDataTable* GetDataTable();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TObjectPtr<UDataTable> WeatherDataTable;

	UDataTable* MyDataTable;
};

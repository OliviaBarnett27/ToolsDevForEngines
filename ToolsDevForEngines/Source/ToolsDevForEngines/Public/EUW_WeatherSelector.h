// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "I_WeatherCalculations.h"
#include "Editor/Blutility/Classes/EditorUtilityWidget.h"
#include "ToolsDevForEngines/UserWeatherData.h"
#include "EUW_WeatherSelector.generated.h"

class UW_DayLengthWidget;
class UW_DayNightWidget;
class UW_ClimateWidget;
class UCanvasPanel;
class UW_SeasonWidget;
class UTextBlock;
class UW_GenerateButton;

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnGenerateWeatherButtonClickedSignature);

UCLASS()
class TOOLSDEVFORENGINES_API UEUW_WeatherSelector : public UEditorUtilityWidget, public II_WeatherCalculations
{
	GENERATED_BODY()

	virtual void NativeConstruct() override;

public:
	FName UserClimate;
	FName UserSeason;
	float UserDayLength;
	uint8* RowPointer;

	//-----Widgets
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UCanvasPanel> Canvas;
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UTextBlock> UtilityTitle;
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UW_SeasonWidget> SeasonWidget;
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UW_ClimateWidget> ClimateWidget;
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UW_DayNightWidget> DayNightWidget;
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UW_DayLengthWidget> DayLengthWidget;
	UPROPERTY(meta = (BindWidget)) 
	TObjectPtr<UW_GenerateButton> GenerateButton;

	//------UPROPERTIES
	UPROPERTY(BlueprintAssignable)
	FOnGenerateWeatherButtonClickedSignature OnGenerateWeatherButtonClickedDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FUserWeatherData UserDataStruct;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	UDataTable* WeatherDataTable;

	//------UFUNCTIONS
	UFUNCTION(BlueprintCallable)
	void SetUserWeatherData();
    
	UFUNCTION(BlueprintCallable)
	void SetUserInputs();

	UFUNCTION(BlueprintCallable)
	void ReadDataTable();

	UFUNCTION(BlueprintCallable)
	void GetDataTableRow();
};

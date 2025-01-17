// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include <string>

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "Subsystem_WeatherSelector.generated.h"

USTRUCT(BlueprintType)
struct FUserInputData
{
	GENERATED_BODY()

	//variables
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "WeatherData")
	FName Climate = "";
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "WeatherData")
	FName Season = "";
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "WeatherData")
	bool BDayNight = true;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "WeatherData")
	bool BAudio = true;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "WeatherData")
	float Erraticism = 0;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "WeatherData")
	float DayLength = 0;

	
};

UCLASS()
class TOOLSDEVFORENGINES_API USubsystem_WeatherSelector : public UGameInstanceSubsystem
{
	GENERATED_BODY()

	public:
    UFUNCTION(BlueprintCallable, Category = "SetterFunction")
	void SetClimate(FName UserClimate);
	UFUNCTION(BlueprintCallable, Category = "SetterFunction")
	void SetSeason(FName UserSeason);
	UFUNCTION(BlueprintCallable, Category = "SetterFunction")
	void SetDayNight (bool UserDayNight);
	UFUNCTION(BlueprintCallable, Category = "SetterFunction")
	void SetAudio (bool UserAudio);
	UFUNCTION(BlueprintCallable, Category = "SetterFunction")
	void SetErraticism (float UserErraticism);
	UFUNCTION(BlueprintCallable, Category = "SetterFunction")
	void SetDayLength (float UserDayLength);

	UFUNCTION(BlueprintCallable, Category = "GetterFunction")
	FName GetClimate() const;
	UFUNCTION(BlueprintCallable, Category = "GetterFunction")
	FName GetSeason() const;
	UFUNCTION(BlueprintCallable, Category = "GetterFunction")
	bool GetDayNight() const;
	UFUNCTION(BlueprintCallable, Category = "GetterFunction")
	bool GetAudio() const;
	UFUNCTION(BlueprintCallable, Category = "GetterFunction")
	float GetErraticism() const;
	UFUNCTION(BlueprintCallable, Category = "GetterFunction")
	float GetDayLength() const;

private:
	FUserInputData UserInputData;
};





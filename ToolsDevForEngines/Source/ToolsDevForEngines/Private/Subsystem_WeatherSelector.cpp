// Fill out your copyright notice in the Description page of Project Settings.


#include "ToolsDevForEngines/Public/Subsystem_WeatherSelector.h"


//setter functions
void USubsystem_WeatherSelector::SetClimate(FString UserClimate)
{
	UserInputData.Climate = UserClimate;
}

void USubsystem_WeatherSelector::SetSeason(FString UserSeason)
{
	UserInputData.Season = UserSeason;
}

void USubsystem_WeatherSelector::SetDayNight(bool UserDayNight)
{
	UserInputData.BDayNight = UserDayNight;
}

void USubsystem_WeatherSelector::SetAudio(bool UserAudio)
{
	UserInputData.BAudio = UserAudio;
}

void USubsystem_WeatherSelector::SetErraticism(float UserErraticism)
{
	UserInputData.Erraticism = UserErraticism;
}

void USubsystem_WeatherSelector::SetDayLength(float UserDayLength)
{
	UserInputData.DayLength = UserDayLength;
}


//getter functions
FString USubsystem_WeatherSelector::GetClimate() const
{
	return UserInputData.Climate;
}

FString USubsystem_WeatherSelector::GetSeason() const
{
	return UserInputData.Season;
}

bool USubsystem_WeatherSelector::GetDayNight() const
{
	return UserInputData.BDayNight;
}

bool USubsystem_WeatherSelector::GetAudio() const
{
	return UserInputData.BAudio;
}

float USubsystem_WeatherSelector::GetErraticism() const
{
	return UserInputData.Erraticism;
}

float USubsystem_WeatherSelector::GetDayLength() const
{
	return UserInputData.DayLength;
}

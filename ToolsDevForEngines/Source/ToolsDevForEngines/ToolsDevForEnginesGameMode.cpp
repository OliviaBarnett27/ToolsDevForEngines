// Copyright Epic Games, Inc. All Rights Reserved.

#include "ToolsDevForEnginesGameMode.h"
#include "ToolsDevForEnginesCharacter.h"
#include "UObject/ConstructorHelpers.h"

AToolsDevForEnginesGameMode::AToolsDevForEnginesGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

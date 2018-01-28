// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "TRANSmissionGameMode.h"
#include "TRANSmissionCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATRANSmissionGameMode::ATRANSmissionGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/Gameplay/RobotCharacter/BP_RobotCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = NULL;
	}
}

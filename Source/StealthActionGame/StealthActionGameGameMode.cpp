// Copyright Epic Games, Inc. All Rights Reserved.

#include "StealthActionGameGameMode.h"
#include "StealthActionGameCharacter.h"
#include "UObject/ConstructorHelpers.h"

AStealthActionGameGameMode::AStealthActionGameGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

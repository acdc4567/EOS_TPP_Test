// Copyright Epic Games, Inc. All Rights Reserved.

#include "EOS_TPP_TestGameMode.h"
#include "EOS_TPP_TestCharacter.h"
#include "UObject/ConstructorHelpers.h"

AEOS_TPP_TestGameMode::AEOS_TPP_TestGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

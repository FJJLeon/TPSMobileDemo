// Copyright Epic Games, Inc. All Rights Reserved.

#include "TPSMobileDemoGameMode.h"
#include "TPSMobileDemoCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATPSMobileDemoGameMode::ATPSMobileDemoGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

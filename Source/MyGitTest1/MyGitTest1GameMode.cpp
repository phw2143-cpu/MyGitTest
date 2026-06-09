// Copyright Epic Games, Inc. All Rights Reserved.

#include "MyGitTest1GameMode.h"
#include "MyGitTest1Character.h"
#include "UObject/ConstructorHelpers.h"

AMyGitTest1GameMode::AMyGitTest1GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

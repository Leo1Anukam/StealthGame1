// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "StealthGame1GameMode.h"
#include "StealthGame1HUD.h"
#include "StealthGame1Character.h"
#include "UObject/ConstructorHelpers.h"

AStealthGame1GameMode::AStealthGame1GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AStealthGame1HUD::StaticClass();
}

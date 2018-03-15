// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "DistrictsGameMode.h"
#include "DistrictsHUD.h"
#include "DistrictsCharacter.h"
#include "UObject/ConstructorHelpers.h"

ADistrictsGameMode::ADistrictsGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ADistrictsHUD::StaticClass();
}

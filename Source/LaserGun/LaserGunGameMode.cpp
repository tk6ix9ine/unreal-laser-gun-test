// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "LaserGunGameMode.h"
#include "LaserGunHUD.h"
#include "LaserGunCharacter.h"
#include "UObject/ConstructorHelpers.h"

ALaserGunGameMode::ALaserGunGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ALaserGunHUD::StaticClass();
}

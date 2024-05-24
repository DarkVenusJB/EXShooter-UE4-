// Copyright Epic Games, Inc. All Rights Reserved.

#include "EXShooterPlayerController.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"
#include "Runtime/Engine/Classes/Components/DecalComponent.h"
#include "HeadMountedDisplayFunctionLibrary.h"
# include  "EXShooter/Character/EXShooterCharacter.h"
#include "Engine/World.h"

AEXShooterPlayerController::AEXShooterPlayerController()
{
	
}

void AEXShooterPlayerController::PlayerTick(float DeltaTime)
{
	Super::PlayerTick(DeltaTime);
}

void AEXShooterPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();
}

void AEXShooterPlayerController::OnResetVR()
{
	UHeadMountedDisplayFunctionLibrary::ResetOrientationAndPosition();
}

void AEXShooterPlayerController::MoveToMouseCursor()
{
	
}

void AEXShooterPlayerController::MoveToTouchLocation(const ETouchIndex::Type FingerIndex, const FVector Location)
{
	
}

void AEXShooterPlayerController::SetNewMoveDestination(const FVector DestLocation)
{
	
}

void AEXShooterPlayerController::OnSetDestinationPressed()
{
	
}

void AEXShooterPlayerController::OnSetDestinationReleased()
{
	
}

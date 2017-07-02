// Fill out your copyright notice in the Description page of Project Settings.

#include "battleTank.h"
#include "TankPlayerController.h"

void ATankPlayerController::BeginPlay()
{
	Super::BeginPlay();

	auto Tank = GetPossessedControlledTank();
	if (!Tank) 
	{
		UE_LOG(LogTemp, Warning, TEXT("No Tank Found"))
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("%s "), *GetPawn()->GetName())
	}
	
}

ATank* ATankPlayerController::GetPossessedControlledTank() const
{
	return Cast<ATank>(GetPawn());
}
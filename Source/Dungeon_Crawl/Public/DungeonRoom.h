// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DungeonRoom.generated.h"

UENUM(BlueprintType)
enum class ERoomContent : uint8
{
	Empty,
	Boss,
	Enemy,
	Chest,
	NPC
};

USTRUCT(BlueprintType)
struct FDungeonRoom
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	FIntPoint Coordinates;

	UPROPERTY(EditAnywhere)
	bool bhasWestDoor;

	UPROPERTY(EditAnywhere)
	bool bhasNorthDoor;

	UPROPERTY(EditAnywhere)
	bool bhasEastDoor;

	UPROPERTY(EditAnywhere)
	bool bhasSouthDoor;

	UPROPERTY(EditAnywhere)
	TArray<ERoomContent> Contents;
};
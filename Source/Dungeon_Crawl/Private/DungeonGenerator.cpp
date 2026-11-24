// Fill out your copyright notice in the Description page of Project Settings.


#include "DungeonGenerator.h"


FDungeonRoom ADungeonGenerator::GenerateRoom(FIntPoint Coordinates)
{
	uint32 RoomSeed = HashCombine(HashCombine(GetTypeHash(Coordinates.X), GetTypeHash(Coordinates.Y)), GetTypeHash(WorldSeed));

	FRandomStream Stream(RoomSeed);

	FDungeonRoom Room;
	Room.Coordinates = Coordinates;

	int32 Roll = Stream.RandRange(0, 99);
	UE_LOG(LogTemp, Log, TEXT("Room (%d %d) rolled %d"), Coordinates.X, Coordinates.Y, Roll);

	return Room;
}

// Sets default values
ADungeonGenerator::ADungeonGenerator()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADungeonGenerator::BeginPlay()
{
	Super::BeginPlay();

	//test
	for (int32 i = 0; i < 3; i++)
	{
		GenerateRoom(FIntPoint(i, 0));
	}
}

// Called every frame
void ADungeonGenerator::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


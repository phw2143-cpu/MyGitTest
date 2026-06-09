// Fill out your copyright notice in the Description page of Project Settings.


#include "OneActor.h"

// Sets default values
AOneActor::AOneActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AOneActor::BeginPlay()
{
	Super::BeginPlay();
	// 작업자456
}

// Called every frame
void AOneActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


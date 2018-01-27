// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Vibrator.generated.h"

UCLASS()
class TRANSMISSION_API AVibrator : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AVibrator();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	
};

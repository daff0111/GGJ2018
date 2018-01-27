// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "StateMachine.generated.h"


UENUM(BlueprintType)
enum class GameState : uint8
{
	Running,
	Loss,
	Victory
};

class UStateMachine;

UCLASS(BlueprintType)
class TRANSMISSION_API UState : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, Category = "State Definition")
	float Lenght;

	UFUNCTION(BlueprintImplementableEvent)
	void OnStateStart(UStateMachine * StateMachine);

	UFUNCTION(BlueprintImplementableEvent)
	void Tick(UStateMachine * StateMachine, float DeltaTime);

	UFUNCTION(BlueprintImplementableEvent)
	bool IsOver(UStateMachine * StateMachine);

};

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class TRANSMISSION_API UStateMachine : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UStateMachine();

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "States")
	TArray<TSubclassOf<UState>> StateDefinitions;


protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private:

	UPROPERTY(BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	GameState CurrentGameState = GameState::Running;

	UPROPERTY(BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	int CurrentState;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "States", meta = (AllowPrivateAccess = "true"))
	TArray<UState *> States;
};

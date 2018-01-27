// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PutinManager.h"
#include "StateMachine.generated.h"


UENUM(BlueprintType)
enum class GameState : uint8
{
	Running,
	Loss,
	Victory
};

class UStateMachine;

UCLASS(BlueprintType, Blueprintable)
class TRANSMISSION_API UState : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, Category = "State Definition")
	float Lenght = 10;

	UFUNCTION(BlueprintImplementableEvent)
	void OnOver(UStateMachine * StateMachine, EPutInState State, bool Player1Correct, bool Player2Correct);

	UFUNCTION(BlueprintImplementableEvent)
	void OnStateStart(UStateMachine * StateMachine);

	UFUNCTION(BlueprintImplementableEvent)
	void Tick(UStateMachine * StateMachine, float DeltaTime);

	void SetOverConditions(bool IsPlayer1Correct, bool IsPlayer2Correct);

private:
	UPROPERTY(BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	bool Over;

	UPROPERTY(BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	bool Player1Correct;

	UPROPERTY(BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	bool Player2Correct;

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

	APutinManager * InputManager;

	UPROPERTY(BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	GameState CurrentGameState = GameState::Running;

	UPROPERTY(BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	int CurrentState;

	UPROPERTY(BlueprintReadWrite, Category = "States", meta = (AllowPrivateAccess = "true"))
	TArray<UState *> States;
};

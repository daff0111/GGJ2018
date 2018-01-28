// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PutinManager.h"
#include "DelegateCombinations.h"
#include "StateMachine.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGameOverDelegate, bool, Victory);

UENUM(BlueprintType)
enum class GameState : uint8
{
	PreStart,
	Running,
	Loss,
	Victory
};

UENUM(BlueprintType)
enum class StateFlow : uint8
{
	Idle,
	Warmup,
	Wait,
	Completed
};

class UStateMachine;

UCLASS(BlueprintType, Blueprintable)
class TRANSMISSION_API UState : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, Category = "State Definition")
	float Lenght = 10;

	UPROPERTY(BlueprintReadWrite, Category = "State Definition")
	float WarmupTime = 2;

	UPROPERTY(BlueprintReadWrite, Category = "State Definition")
	float CompletedTime = 3;

	UFUNCTION(BlueprintImplementableEvent)
	void OnOver(UStateMachine * StateMachine, EPutInState State, bool Player1Correct, bool Player2Correct);

	UFUNCTION(BlueprintImplementableEvent)
	void OnStateStart(UStateMachine * StateMachine);

	UFUNCTION(BlueprintImplementableEvent)
	void Tick(UStateMachine * StateMachine, float DeltaTime);

	void SetOverConditions(bool IsPlayer1Correct, bool IsPlayer2Correct);

	bool FinishedCorrectly();

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

	UFUNCTION(BlueprintCallable)
	void Start();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UPROPERTY(BlueprintAssignable)
	FGameOverDelegate GameOverDelegate;

private:

	APutinManager * InputManager;

	UPROPERTY(BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	GameState CurrentGameState = GameState::PreStart;

	UPROPERTY(BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	int CurrentState;

	UPROPERTY(BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	StateFlow CurrentStateFlow = StateFlow::Idle;

	UPROPERTY(BlueprintReadWrite, Category = "States", meta = (AllowPrivateAccess = "true"))
	TArray<UState *> States;

	UPROPERTY(BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	float StateTime = 0;
};

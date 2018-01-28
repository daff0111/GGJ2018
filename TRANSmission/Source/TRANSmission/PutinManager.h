// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Vibrator.h"
#include "PutinManager.generated.h"

UENUM(BlueprintType)
enum class EPutInState : uint8
{
	Idle,
	SendingSignal,
	WaitingForResponse,
	Completed
};

struct FInputResponse
{
	EPutInState State;
	bool Player1Correct;
	bool Player2Correct;

	FInputResponse(EPutInState state, bool player1, bool player2)
	{
		State = state;
		Player1Correct = player1;
		Player2Correct = player2;
	}
};

UCLASS()
class TRANSMISSION_API APutinManager : public AActor
{
	GENERATED_BODY()	
public:	
	// Sets default values for this actor's properties
	APutinManager();
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PutInManager")
	bool Test_SendSignal;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PutInManager")
	float SignalWaitTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PutInManager")
	float SyncMaxTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PutInManager")
	AVibrator* VibratorManager;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "PutInManager")
	EPutInState InputState;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable, Category = "PutInManager")
	void SendSignalPair(float stageTime);

	//UFUNCTION(BlueprintCallable, Category = "PutInManager")
	FInputResponse CheckInput();

	UFUNCTION(BlueprintNativeEvent, Category = "PutInManager")
	void OnReceiveCommand();

	UFUNCTION(BlueprintNativeEvent, Category = "PutInManager")
	void OnInputCompleted(bool player1Response, bool player2Response);

	UFUNCTION(BlueprintNativeEvent, Category = "PutInManager")
	void OnPlayer1Response(EMorseInput input);

	UFUNCTION(BlueprintNativeEvent, Category = "PutInManager")
	void OnPlayer2Response(EMorseInput input);


private:
	void GenerateRandomInputPair();

	EMorseInput GenerateRandomSignal(float rand);

	void SendSignalsToPlayers();

	void SendCompleted();

	bool PollPlayer1Response();

	bool PollPlayer2Response();

private:
	float stageMaxTime;
	float currentStageTime;
	float currentSyncTime;
	//Player 1 Signal
	bool player1Received;
	bool player1Correct;
	EMorseInput player1Signal;

	//Player 2 Signal
	bool player2Received;
	bool player2Correct;
	EMorseInput player2Signal;	
};

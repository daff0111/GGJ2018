// Fill out your copyright notice in the Description page of Project Settings.
#include "PutinManager.h"
#include "Kismet/GameplayStatics.h"



// Sets default values
APutinManager::APutinManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void APutinManager::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void APutinManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	switch (InputState)
	{
	case EPutInState::SendingSignal:
		currentStageTime += DeltaTime;
		if (currentStageTime >= SignalWaitTime)
		{
			InputState = EPutInState::WaitingForResponse;
		}
		break;
	case EPutInState::WaitingForResponse:
		currentStageTime += DeltaTime;
		if (currentStageTime > stageMaxTime)
		{
			player1Received = true;
			player2Received = true;
		}

		if (player1Received && player2Received)
		{
			SendCompleted();
		}
		else if (player2Received && !player1Received)
		{
			//Wait for Player 1 Response
			currentSyncTime += DeltaTime;
			if (currentSyncTime > SyncMaxTime)
			{
				player1Correct = false;
				player1Received = true;
			}
			player1Correct = PollPlayer1Response();
		}
		else if (player1Received && !player2Received)
		{
			//Wait for Player 2 Response
			currentSyncTime += DeltaTime;
			if (currentSyncTime > SyncMaxTime)
			{
				player2Correct = false;
				player2Received = true;
			}
			player2Correct = PollPlayer2Response();
		}
		else
		{
			//Wait for both Players Response
			player1Correct = PollPlayer1Response();
			player2Correct = PollPlayer2Response();
		}
		break;
	case EPutInState::Idle:
	case EPutInState::Completed:
		if (Test_SendSignal)
		{
			SendSignalPair(10);
			Test_SendSignal = false;
		}
		break;
	default:
		break;
	}

}

bool APutinManager::PollPlayer1Response()
{
	APlayerController* controller = UGameplayStatics::GetPlayerController(GetWorld(), 0);
	if (controller)
	{
		EMorseInput signalReceived;
		if (controller->WasInputKeyJustPressed(FKey("Gamepad_FaceButton_Top")))
		{
			player1Received = true;
			signalReceived = EMorseInput::Y;
		}
		else if (controller->WasInputKeyJustPressed(FKey("Gamepad_FaceButton_Left")))
		{
			player1Received = true;
			signalReceived = EMorseInput::X;
		}
		else if (controller->WasInputKeyJustPressed(FKey("Gamepad_FaceButton_Right")))
		{
			player1Received = true;
			signalReceived = EMorseInput::B;
		}
		else if (controller->WasInputKeyJustPressed(FKey("Gamepad_FaceButton_Bottom")))
		{
			player1Received = true;
			signalReceived = EMorseInput::A;
		}
		if (player1Received)
		{
			currentSyncTime = 0;
			OnPlayer1Response(signalReceived);
			return player1Signal == signalReceived;
		}		
	}
	return false;
}

bool APutinManager::PollPlayer2Response()
{
	APlayerController* controller = UGameplayStatics::GetPlayerController(GetWorld(), 1);
	if (controller)
	{
		EMorseInput signalReceived;
		if (controller->WasInputKeyJustPressed(FKey("Gamepad_FaceButton_Top")))
		{
			player2Received = true;
			signalReceived = EMorseInput::Y;
		}
		else if (controller->WasInputKeyJustPressed(FKey("Gamepad_FaceButton_Left")))
		{
			player2Received = true;
			signalReceived = EMorseInput::X;
		}
		else if (controller->WasInputKeyJustPressed(FKey("Gamepad_FaceButton_Right")))
		{
			player2Received = true;
			signalReceived = EMorseInput::B;
		}
		else if (controller->WasInputKeyJustPressed(FKey("Gamepad_FaceButton_Bottom")))
		{
			player2Received = true;
			signalReceived = EMorseInput::A;
		}
		if (player2Received)
		{
			currentSyncTime = 0;
			OnPlayer2Response(signalReceived);
			return player2Signal == signalReceived;
		}
	}
	return false;
}

void APutinManager::SendSignalPair(float stageTime)
{
	if (InputState == EPutInState::Idle || InputState == EPutInState::Completed)
	{
		//Set Time Limit
		stageMaxTime = stageTime;
		currentStageTime = 0;
		//Send Signals
		GenerateRandomInputPair();
		SendSignalsToPlayers();
		InputState = EPutInState::SendingSignal;
	}
}

FInputResponse APutinManager::CheckInput()
{
	return FInputResponse(InputState, true, true);
}

void APutinManager::GenerateRandomInputPair()
{
	double secs = FTimespan(FDateTime::Now().GetTicks()).GetTotalMilliseconds();
	int32 seed = (int32)(((int64)secs) % INT_MAX);
	FMath::RandInit(seed);
	float rand = FMath::FRand();
	player1Signal = GenerateRandomSignal(rand);
	rand = FMath::RandRange(0.f, 1.f);
	player2Signal = GenerateRandomSignal(rand);
}

void APutinManager::SendSignalsToPlayers()
{
	VibratorManager->SendInput(player2Signal, EController::Player1);
	player1Received = false;
	player1Correct = false;
	VibratorManager->SendInput(player1Signal, EController::Player2);
	player2Received = false;
	player2Correct = false;
}

void APutinManager::SendCompleted()
{
	OnInputCompleted(player1Correct, player2Correct);
	InputState = EPutInState::Completed;
}

EMorseInput APutinManager::GenerateRandomSignal(float rand)
{
	if (rand > 0.75f)
	{
		return EMorseInput::A;
	}
	else if (rand > 0.5f)
	{
		return EMorseInput::B;
	}
	else if (rand > 0.25f)
	{
		return EMorseInput::X;
	}
	else
	{
		return EMorseInput::Y;
	}
}

void APutinManager::OnInputCompleted_Implementation(bool player1Response, bool player2Response)
{
}

void APutinManager::OnPlayer1Response_Implementation(EMorseInput input)
{													 
}													 
													 
void APutinManager::OnPlayer2Response_Implementation(EMorseInput input)
{
}

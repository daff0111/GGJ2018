// Fill out your copyright notice in the Description page of Project Settings.

#include "Vibrator.h"
#include "Haptics/HapticFeedbackEffect_Base.h"
#include "Kismet/GameplayStatics.h"


// Sets default values
AVibrator::AVibrator()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AVibrator::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AVibrator::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (PlaySignal)
	{
		SendInput(SignalToPlay, EController::Player1);
		PlaySignal = false;
	}
	UpdatePlayer1Signal(DeltaTime);
	UpdatePlayer2Signal(DeltaTime);
}

void AVibrator::SendInput(EMorseInput MorseInput, EController PlayerController)
{
	TArray<EMorseSignal> signalToSend;
	switch (MorseInput)
	{
	case EMorseInput::A:
		//.-
		signalToSend.Add(EMorseSignal::Dot);
		signalToSend.Add(EMorseSignal::Dash);
		break;
	case EMorseInput::B:
		//-...
		signalToSend.Add(EMorseSignal::Dash);
		signalToSend.Add(EMorseSignal::Dot);
		signalToSend.Add(EMorseSignal::Dot);
		signalToSend.Add(EMorseSignal::Dot);
		break;
	case EMorseInput::X:
		//-..-
		signalToSend.Add(EMorseSignal::Dash);
		signalToSend.Add(EMorseSignal::Dot);
		signalToSend.Add(EMorseSignal::Dot);
		signalToSend.Add(EMorseSignal::Dash);
		break;
	case EMorseInput::Y:
		//-.--
		signalToSend.Add(EMorseSignal::Dash);
		signalToSend.Add(EMorseSignal::Dot);
		signalToSend.Add(EMorseSignal::Dash);
		signalToSend.Add(EMorseSignal::Dash);
		break;
	case EMorseInput::S:
		//...
		signalToSend.Add(EMorseSignal::Dot);
		signalToSend.Add(EMorseSignal::Dot);
		signalToSend.Add(EMorseSignal::Dot);
		break;
	case EMorseInput::U:
		//..-
		signalToSend.Add(EMorseSignal::Dot);
		signalToSend.Add(EMorseSignal::Dot);
		signalToSend.Add(EMorseSignal::Dash);
		break;
	case EMorseInput::C:
		//-.-.
		signalToSend.Add(EMorseSignal::Dash);
		signalToSend.Add(EMorseSignal::Dot);
		signalToSend.Add(EMorseSignal::Dash);
		signalToSend.Add(EMorseSignal::Dot);
		break;
	default:
		break;
	}
	switch (PlayerController)
	{
	case EController::Player1:
		player1Signals = signalToSend;
		player1PlayingSignal = true;
		break;
	case EController::Player2:
		player2Signals = signalToSend;
		player1PlayingSignal = true;
		break;
	default:
		break;
	}
}

void AVibrator::SendSignal(EMorseSignal MorseSignal, EController PlayerController)
{
	int playerIndex = 0;
	if (PlayerController == EController::Player2)
	{
		playerIndex = 1;
	}
	switch (MorseSignal)
	{
	case EMorseSignal::Dot:
		UGameplayStatics::GetPlayerController(GetWorld(), playerIndex)->ClientPlayForceFeedback(DotHapticFeedback, false, "DOT");
		break;
	case EMorseSignal::Dash:
		UGameplayStatics::GetPlayerController(GetWorld(), playerIndex)->ClientPlayForceFeedback(DashHapticFeedback, false, "DOT");
		break;
	default:
		break;
	}
}

void AVibrator::UpdatePlayer1Signal(float deltaTime)
{				
	if (player1PlayingSignal)
	{
		player1Timer += deltaTime;
		if (player1CurrentSignal == EMorseSignal::None)
		{
			//Pop Signal
			if (player1Signals.Num() > 0)
			{
				player1CurrentSignal = player1Signals[0];
				SendSignal(player1CurrentSignal, EController::Player1);
				player1Signals.RemoveAt(0);
				player1Timer = 0;
			}
			else
			{
				player1PlayingSignal = false;
			}
		}
		switch (player1CurrentSignal)
		{
		case EMorseSignal::Dot:
			if (player1Timer >= DotDuration)
			{
				player1CurrentSignal = EMorseSignal::Break;
				player1Timer = 0;
			}
			break;
		case EMorseSignal::Dash:
			if (player1Timer >= DashDuration)
			{
				player1CurrentSignal = EMorseSignal::Break;
				player1Timer = 0;
			}
			break;
		case EMorseSignal::Break:
			if (player1Timer >= BreakDuration)
			{
				player1CurrentSignal = EMorseSignal::None;
			}
			break;
		default:
			break;
		}
	}
}				
				
void AVibrator::UpdatePlayer2Signal(float deltaTime)
{
	if (player2PlayingSignal)
	{
		player2Timer += deltaTime;
		if (player2CurrentSignal == EMorseSignal::None)
		{
			//Pop Signal
			if (player2Signals.Num() > 0)
			{
				player2CurrentSignal = player2Signals[0];
				SendSignal(player2CurrentSignal, EController::Player2);
				player2Signals.RemoveAt(0);
				player2Timer = 0;
			}
			else
			{
				player2PlayingSignal = false;
			}
		}
		switch (player2CurrentSignal)
		{
		case EMorseSignal::Dot:
			if (player2Timer >= DotDuration)
			{
				player2CurrentSignal = EMorseSignal::Dot;
				player2Timer = 0;
			}
			break;
		case EMorseSignal::Dash:
			if (player2Timer >= DashDuration)
			{
				player2CurrentSignal = EMorseSignal::Break;
				player2Timer = 0;
			}
			break;
		case EMorseSignal::Break:
			if (player2Timer >= BreakDuration)
			{
				player2CurrentSignal = EMorseSignal::None;
			}
			break;
		default:
			break;
		}
	}
}


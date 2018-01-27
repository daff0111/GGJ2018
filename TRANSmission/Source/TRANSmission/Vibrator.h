// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Vibrator.generated.h"

UENUM(BlueprintType)
enum class EMorseInput : uint8
{
	A,
	B,
	X,
	Y,
	S,
	U,
	C
};

UENUM(BlueprintType)
enum class EController : uint8
{
	Player1,
	Player2
};

UCLASS()
class TRANSMISSION_API AVibrator : public AActor
{
	GENERATED_BODY()
	
public:	
	enum EMorseSignal
	{
		None,
		Dot,
		Dash,
		Break
	};

	// Sets default values for this actor's properties
	AVibrator();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to send the Letter Signal to the controller
	void SendInput(EMorseInput MorseInput, EController PlayerController);

	// Send SUCA Signal
	void Suca();

private:
	void SendSignal(EMorseSignal MorseSignal, EController PlayerController);

	void UpdatePlayer1Signal(float deltaTime);
		 					 
	void UpdatePlayer2Signal(float deltaTime);

//Attributes
public:
	//Test
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Vibrator")
	bool Test_PlaySignal = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Vibrator")
	EController Test_ControllerToVibrate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Vibrator")
	EMorseInput Test_SignalToPlay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Vibrator")
	UForceFeedbackEffect* DotHapticFeedback;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Vibrator")
	UForceFeedbackEffect* DashHapticFeedback;

private:
	//Vibration duration
	const float DotDuration = 0.1f;
	const float DashDuration = 0.3f;
	const float BreakDuration = 0.3f;

	//Controller 1 Signal Parameters
	bool player1PlayingSignal = false;
	float player1Timer = 0;
	TArray<EMorseSignal> player1Signals;
	EMorseSignal player1CurrentSignal = EMorseSignal::None;

	//Controller 2 Signal Parameters
	bool player2PlayingSignal = false;
	float player2Timer = 0;
	TArray<EMorseSignal> player2Signals;
	EMorseSignal player2CurrentSignal = EMorseSignal::None;
};
// Fill out your copyright notice in the Description page of Project Settings.
#include "StateMachine.h"
#include "Kismet/GameplayStatics.h"



// Sets default values for this component's properties
UStateMachine::UStateMachine()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UStateMachine::BeginPlay()
{
	Super::BeginPlay();

	for (TSubclassOf<UState> stateDefinition : StateDefinitions)
	{
		auto state = NewObject<UState>(stateDefinition);
		States.Add(state);
	}

	CurrentState = 0;

	TArray<AActor *> Actors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), APutinManager::StaticClass(), Actors);

	if (Actors.Num() != 0)
	{
		InputManager = Cast<APutinManager>(Actors[0]);
	}

	States[CurrentState]->OnStateStart(this);

	InputManager->SendSignalPair(States[CurrentState]->Lenght);
}


// Called every frame
void UStateMachine::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{

	if (CurrentGameState != GameState::Running)
	{
		return;
	}

	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	auto input = InputManager->CheckInput();
	
	uint8 state = (uint8)(input.State);


	if (state == (uint8)(EPutInState::Completed))
	{
		States[CurrentState]->SetOverConditions(input.Player1Correct, input.Player2Correct);
		States[CurrentState]->OnOver(this, input.State, input.Player1Correct, input.Player2Correct);

		CurrentState++;

		if (CurrentState < States.Num())
		{
			InputManager->SendSignalPair(States[CurrentState]->Lenght);
		}
		else
		{
			CurrentGameState = GameState::Victory;
		}
	}
	else
	{
		States[CurrentState]->Tick(this, DeltaTime);
	}

}

void UState::SetOverConditions(bool IsPlayer1Correct, bool IsPlayer2Correct)
{
	Over = true;

	Player1Correct = IsPlayer1Correct;
	Player2Correct = IsPlayer2Correct;
}

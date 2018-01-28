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


void UStateMachine::Start()
{
	States[CurrentState]->OnStateStart(this);
	CurrentStateFlow = StateFlow::Warmup;
	StateTime = 0;

	CurrentGameState = GameState::Running;
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

}


// Called every frame
void UStateMachine::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (CurrentGameState != GameState::Running)
	{
		return;
	}

	switch (CurrentStateFlow)
	{
	  case StateFlow::Warmup:
	  {
	  	StateTime += DeltaTime;
	  
	  	if (StateTime >= States[CurrentState]->WarmupTime)
	  	{
	  		InputManager->SendSignalPair(States[CurrentState]->Lenght);
	  		CurrentStateFlow = StateFlow::Wait;
	  		StateTime = 0;
	  	}
	  
	  	break;
	  }
	  case StateFlow::Wait:
	  {
	  	auto input = InputManager->CheckInput();	  
	  	uint8 state = (uint8)(input.State);
	  
	  	if (state == (uint8)(EPutInState::Completed))
	  	{
	  		States[CurrentState]->SetOverConditions(input.Player1Correct, input.Player2Correct);
	  		States[CurrentState]->OnOver(this, input.State, input.Player1Correct, input.Player2Correct);
	  
			CurrentStateFlow = StateFlow::Completed;
			StateTime = 0;
	  	}
	  	else
	  	{
	  		States[CurrentState]->Tick(this, DeltaTime);
			StateTime += DeltaTime;

	  	}
	  
	  	break;
	  }

	  case StateFlow::Completed:
	  {
		  if (StateTime < States[CurrentState]->CompletedTime)
		  {
			  StateTime += DeltaTime;
		  }
		  else
		  {
			  CurrentState++;

			  if (CurrentState < States.Num())
			  {
				  States[CurrentState]->OnStateStart(this);
				  CurrentStateFlow = StateFlow::Warmup;
			  }
			  else
			  {

				  bool Victory = true;

				  for (auto state : States)
				  {
					  Victory = Victory && state->FinishedCorrectly();
				  }

				  if (Victory)
				  {
					  if (GameOverDelegate.IsBound())
					  {
						  GameOverDelegate.Broadcast(true);
					  }

					  CurrentGameState = GameState::Victory;
				  }
				  else
				  {
					  if (GameOverDelegate.IsBound())
					  {
						  GameOverDelegate.Broadcast(false);
					  }

					  CurrentGameState = GameState::Loss;
				  }
			  }

			  StateTime = 0;
		  }

	  }
	  
	  default:
	  	break;
	}
}

void UState::SetOverConditions(bool IsPlayer1Correct, bool IsPlayer2Correct)
{
	Over = true;

	Player1Correct = IsPlayer1Correct;
	Player2Correct = IsPlayer2Correct;
}

bool UState::FinishedCorrectly()
{
	return Over && Player2Correct && Player1Correct;
}

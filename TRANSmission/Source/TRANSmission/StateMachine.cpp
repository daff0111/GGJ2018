// Fill out your copyright notice in the Description page of Project Settings.

#include "StateMachine.h"


// Sets default values for this component's properties
UStateMachine::UStateMachine()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...

	for (TSubclassOf<UState> stateDefinition : StateDefinitions)
	{
		States.Push(NewObject<UState>(stateDefinition));
	}

	CurrentState = 0;
}


// Called when the game starts
void UStateMachine::BeginPlay()
{
	Super::BeginPlay();

	States[CurrentState]->OnStateStart(this);

}


// Called every frame
void UStateMachine::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	States[CurrentState]->Tick(this, DeltaTime);

	if (States[CurrentState]->IsOver(this) && CurrentState < States.Num())
	{
		CurrentState++;
	}
	else
	{
		CurrentGameState = GameState::Victory;
	}
}


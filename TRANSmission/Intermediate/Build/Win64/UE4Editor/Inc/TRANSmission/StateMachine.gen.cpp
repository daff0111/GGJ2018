// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "StateMachine.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStateMachine() {}
// Cross Module References
	TRANSMISSION_API UEnum* Z_Construct_UEnum_TRANSmission_GameState();
	UPackage* Z_Construct_UPackage__Script_TRANSmission();
	TRANSMISSION_API UClass* Z_Construct_UClass_UState_NoRegister();
	TRANSMISSION_API UClass* Z_Construct_UClass_UState();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	TRANSMISSION_API UFunction* Z_Construct_UFunction_UState_OnOver();
	TRANSMISSION_API UEnum* Z_Construct_UEnum_TRANSmission_EPutInState();
	TRANSMISSION_API UClass* Z_Construct_UClass_UStateMachine_NoRegister();
	TRANSMISSION_API UFunction* Z_Construct_UFunction_UState_OnStateStart();
	TRANSMISSION_API UFunction* Z_Construct_UFunction_UState_Tick();
	TRANSMISSION_API UClass* Z_Construct_UClass_UStateMachine();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	static UEnum* GameState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_TRANSmission_GameState, Z_Construct_UPackage__Script_TRANSmission(), TEXT("GameState"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_GameState(GameState_StaticEnum, TEXT("/Script/TRANSmission"), TEXT("GameState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_TRANSmission_GameState_CRC() { return 3522574104U; }
	UEnum* Z_Construct_UEnum_TRANSmission_GameState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_TRANSmission();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("GameState"), 0, Get_Z_Construct_UEnum_TRANSmission_GameState_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "GameState::Running", (int64)GameState::Running },
				{ "GameState::Loss", (int64)GameState::Loss },
				{ "GameState::Victory", (int64)GameState::Victory },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "StateMachine.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_TRANSmission,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"GameState",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"GameState",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static FName NAME_UState_OnOver = FName(TEXT("OnOver"));
	void UState::OnOver(UStateMachine* StateMachine, EPutInState State, bool Player1Correct, bool Player2Correct)
	{
		State_eventOnOver_Parms Parms;
		Parms.StateMachine=StateMachine;
		Parms.State=State;
		Parms.Player1Correct=Player1Correct ? true : false;
		Parms.Player2Correct=Player2Correct ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UState_OnOver),&Parms);
	}
	static FName NAME_UState_OnStateStart = FName(TEXT("OnStateStart"));
	void UState::OnStateStart(UStateMachine* StateMachine)
	{
		State_eventOnStateStart_Parms Parms;
		Parms.StateMachine=StateMachine;
		ProcessEvent(FindFunctionChecked(NAME_UState_OnStateStart),&Parms);
	}
	static FName NAME_UState_Tick = FName(TEXT("Tick"));
	void UState::Tick(UStateMachine* StateMachine, float DeltaTime)
	{
		State_eventTick_Parms Parms;
		Parms.StateMachine=StateMachine;
		Parms.DeltaTime=DeltaTime;
		ProcessEvent(FindFunctionChecked(NAME_UState_Tick),&Parms);
	}
	void UState::StaticRegisterNativesUState()
	{
	}
	UFunction* Z_Construct_UFunction_UState_OnOver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_Player2Correct_SetBit = [](void* Obj){ ((State_eventOnOver_Parms*)Obj)->Player2Correct = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Player2Correct = { UE4CodeGen_Private::EPropertyClass::Bool, "Player2Correct", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(State_eventOnOver_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_Player2Correct_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_Player1Correct_SetBit = [](void* Obj){ ((State_eventOnOver_Parms*)Obj)->Player1Correct = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Player1Correct = { UE4CodeGen_Private::EPropertyClass::Bool, "Player1Correct", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(State_eventOnOver_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_Player1Correct_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_State = { UE4CodeGen_Private::EPropertyClass::Enum, "State", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(State_eventOnOver_Parms, State), Z_Construct_UEnum_TRANSmission_EPutInState, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_State_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StateMachine_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StateMachine = { UE4CodeGen_Private::EPropertyClass::Object, "StateMachine", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(State_eventOnOver_Parms, StateMachine), Z_Construct_UClass_UStateMachine_NoRegister, METADATA_PARAMS(NewProp_StateMachine_MetaData, ARRAY_COUNT(NewProp_StateMachine_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Player2Correct,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Player1Correct,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_State,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_State_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StateMachine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "StateMachine.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UState, "OnOver", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, sizeof(State_eventOnOver_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UState_OnStateStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StateMachine_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StateMachine = { UE4CodeGen_Private::EPropertyClass::Object, "StateMachine", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(State_eventOnStateStart_Parms, StateMachine), Z_Construct_UClass_UStateMachine_NoRegister, METADATA_PARAMS(NewProp_StateMachine_MetaData, ARRAY_COUNT(NewProp_StateMachine_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StateMachine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "StateMachine.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UState, "OnStateStart", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, sizeof(State_eventOnStateStart_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UState_Tick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime = { UE4CodeGen_Private::EPropertyClass::Float, "DeltaTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(State_eventTick_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StateMachine_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StateMachine = { UE4CodeGen_Private::EPropertyClass::Object, "StateMachine", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(State_eventTick_Parms, StateMachine), Z_Construct_UClass_UStateMachine_NoRegister, METADATA_PARAMS(NewProp_StateMachine_MetaData, ARRAY_COUNT(NewProp_StateMachine_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DeltaTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StateMachine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "StateMachine.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UState, "Tick", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, sizeof(State_eventTick_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UState_NoRegister()
	{
		return UState::StaticClass();
	}
	UClass* Z_Construct_UClass_UState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_TRANSmission,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UState_OnOver, "OnOver" }, // 2696663598
				{ &Z_Construct_UFunction_UState_OnStateStart, "OnStateStart" }, // 102282255
				{ &Z_Construct_UFunction_UState_Tick, "Tick" }, // 1435555084
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "StateMachine.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "StateMachine.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Player2Correct_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "State" },
				{ "ModuleRelativePath", "StateMachine.h" },
			};
#endif
			auto NewProp_Player2Correct_SetBit = [](void* Obj){ ((UState*)Obj)->Player2Correct = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Player2Correct = { UE4CodeGen_Private::EPropertyClass::Bool, "Player2Correct", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000014, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UState), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_Player2Correct_SetBit)>::SetBit, METADATA_PARAMS(NewProp_Player2Correct_MetaData, ARRAY_COUNT(NewProp_Player2Correct_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Player1Correct_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "State" },
				{ "ModuleRelativePath", "StateMachine.h" },
			};
#endif
			auto NewProp_Player1Correct_SetBit = [](void* Obj){ ((UState*)Obj)->Player1Correct = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Player1Correct = { UE4CodeGen_Private::EPropertyClass::Bool, "Player1Correct", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000014, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UState), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_Player1Correct_SetBit)>::SetBit, METADATA_PARAMS(NewProp_Player1Correct_MetaData, ARRAY_COUNT(NewProp_Player1Correct_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Over_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "State" },
				{ "ModuleRelativePath", "StateMachine.h" },
			};
#endif
			auto NewProp_Over_SetBit = [](void* Obj){ ((UState*)Obj)->Over = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Over = { UE4CodeGen_Private::EPropertyClass::Bool, "Over", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000014, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UState), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_Over_SetBit)>::SetBit, METADATA_PARAMS(NewProp_Over_MetaData, ARRAY_COUNT(NewProp_Over_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Lenght_MetaData[] = {
				{ "Category", "State Definition" },
				{ "ModuleRelativePath", "StateMachine.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Lenght = { UE4CodeGen_Private::EPropertyClass::Float, "Lenght", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000004, 1, nullptr, STRUCT_OFFSET(UState, Lenght), METADATA_PARAMS(NewProp_Lenght_MetaData, ARRAY_COUNT(NewProp_Lenght_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Player2Correct,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Player1Correct,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Over,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Lenght,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UState>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UState::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UState, 787122006);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UState(Z_Construct_UClass_UState, &UState::StaticClass, TEXT("/Script/TRANSmission"), TEXT("UState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UState);
	void UStateMachine::StaticRegisterNativesUStateMachine()
	{
	}
	UClass* Z_Construct_UClass_UStateMachine_NoRegister()
	{
		return UStateMachine::StaticClass();
	}
	UClass* Z_Construct_UClass_UStateMachine()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UActorComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_TRANSmission,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "ClassGroupNames", "Custom" },
				{ "IncludePath", "StateMachine.h" },
				{ "ModuleRelativePath", "StateMachine.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_States_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "States" },
				{ "ModuleRelativePath", "StateMachine.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_States = { UE4CodeGen_Private::EPropertyClass::Array, "States", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000004, 1, nullptr, STRUCT_OFFSET(UStateMachine, States), METADATA_PARAMS(NewProp_States_MetaData, ARRAY_COUNT(NewProp_States_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_States_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "States", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UState_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentState_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "StateMachine" },
				{ "ModuleRelativePath", "StateMachine.h" },
			};
#endif
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_CurrentState = { UE4CodeGen_Private::EPropertyClass::Int, "CurrentState", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000014, 1, nullptr, STRUCT_OFFSET(UStateMachine, CurrentState), METADATA_PARAMS(NewProp_CurrentState_MetaData, ARRAY_COUNT(NewProp_CurrentState_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentGameState_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "StateMachine" },
				{ "ModuleRelativePath", "StateMachine.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CurrentGameState = { UE4CodeGen_Private::EPropertyClass::Enum, "CurrentGameState", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000014, 1, nullptr, STRUCT_OFFSET(UStateMachine, CurrentGameState), Z_Construct_UEnum_TRANSmission_GameState, METADATA_PARAMS(NewProp_CurrentGameState_MetaData, ARRAY_COUNT(NewProp_CurrentGameState_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_CurrentGameState_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StateDefinitions_MetaData[] = {
				{ "Category", "States" },
				{ "ModuleRelativePath", "StateMachine.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StateDefinitions = { UE4CodeGen_Private::EPropertyClass::Array, "StateDefinitions", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000005, 1, nullptr, STRUCT_OFFSET(UStateMachine, StateDefinitions), METADATA_PARAMS(NewProp_StateDefinitions_MetaData, ARRAY_COUNT(NewProp_StateDefinitions_MetaData)) };
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_StateDefinitions_Inner = { UE4CodeGen_Private::EPropertyClass::Class, "StateDefinitions", RF_Public|RF_Transient|RF_MarkAsNative, 0x0004000000000000, 1, nullptr, 0, Z_Construct_UClass_UState_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_States,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_States_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CurrentState,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CurrentGameState,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CurrentGameState_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StateDefinitions,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StateDefinitions_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UStateMachine>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UStateMachine::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00080u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStateMachine, 1957575192);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStateMachine(Z_Construct_UClass_UStateMachine, &UStateMachine::StaticClass, TEXT("/Script/TRANSmission"), TEXT("UStateMachine"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStateMachine);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

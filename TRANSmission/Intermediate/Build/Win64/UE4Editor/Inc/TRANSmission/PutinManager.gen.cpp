// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "PutinManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePutinManager() {}
// Cross Module References
	TRANSMISSION_API UEnum* Z_Construct_UEnum_TRANSmission_EPutInState();
	UPackage* Z_Construct_UPackage__Script_TRANSmission();
	TRANSMISSION_API UClass* Z_Construct_UClass_APutinManager_NoRegister();
	TRANSMISSION_API UClass* Z_Construct_UClass_APutinManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	TRANSMISSION_API UFunction* Z_Construct_UFunction_APutinManager_OnInputCompleted();
	TRANSMISSION_API UFunction* Z_Construct_UFunction_APutinManager_OnPlayer1Response();
	TRANSMISSION_API UEnum* Z_Construct_UEnum_TRANSmission_EMorseInput();
	TRANSMISSION_API UFunction* Z_Construct_UFunction_APutinManager_OnPlayer2Response();
	TRANSMISSION_API UFunction* Z_Construct_UFunction_APutinManager_SendSignalPair();
	TRANSMISSION_API UClass* Z_Construct_UClass_AVibrator_NoRegister();
// End Cross Module References
	static UEnum* EPutInState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_TRANSmission_EPutInState, Z_Construct_UPackage__Script_TRANSmission(), TEXT("EPutInState"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPutInState(EPutInState_StaticEnum, TEXT("/Script/TRANSmission"), TEXT("EPutInState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_TRANSmission_EPutInState_CRC() { return 1352803136U; }
	UEnum* Z_Construct_UEnum_TRANSmission_EPutInState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_TRANSmission();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPutInState"), 0, Get_Z_Construct_UEnum_TRANSmission_EPutInState_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPutInState::Idle", (int64)EPutInState::Idle },
				{ "EPutInState::SendingSignal", (int64)EPutInState::SendingSignal },
				{ "EPutInState::WaitingForResponse", (int64)EPutInState::WaitingForResponse },
				{ "EPutInState::Completed", (int64)EPutInState::Completed },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "PutinManager.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_TRANSmission,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EPutInState",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EPutInState",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static FName NAME_APutinManager_OnInputCompleted = FName(TEXT("OnInputCompleted"));
	void APutinManager::OnInputCompleted(bool player1Response, bool player2Response)
	{
		PutinManager_eventOnInputCompleted_Parms Parms;
		Parms.player1Response=player1Response ? true : false;
		Parms.player2Response=player2Response ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_APutinManager_OnInputCompleted),&Parms);
	}
	static FName NAME_APutinManager_OnPlayer1Response = FName(TEXT("OnPlayer1Response"));
	void APutinManager::OnPlayer1Response(EMorseInput input)
	{
		PutinManager_eventOnPlayer1Response_Parms Parms;
		Parms.input=input;
		ProcessEvent(FindFunctionChecked(NAME_APutinManager_OnPlayer1Response),&Parms);
	}
	static FName NAME_APutinManager_OnPlayer2Response = FName(TEXT("OnPlayer2Response"));
	void APutinManager::OnPlayer2Response(EMorseInput input)
	{
		PutinManager_eventOnPlayer2Response_Parms Parms;
		Parms.input=input;
		ProcessEvent(FindFunctionChecked(NAME_APutinManager_OnPlayer2Response),&Parms);
	}
	void APutinManager::StaticRegisterNativesAPutinManager()
	{
		UClass* Class = APutinManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnInputCompleted", (Native)&APutinManager::execOnInputCompleted },
			{ "OnPlayer1Response", (Native)&APutinManager::execOnPlayer1Response },
			{ "OnPlayer2Response", (Native)&APutinManager::execOnPlayer2Response },
			{ "SendSignalPair", (Native)&APutinManager::execSendSignalPair },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_APutinManager_OnInputCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_player2Response_SetBit = [](void* Obj){ ((PutinManager_eventOnInputCompleted_Parms*)Obj)->player2Response = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_player2Response = { UE4CodeGen_Private::EPropertyClass::Bool, "player2Response", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(PutinManager_eventOnInputCompleted_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_player2Response_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_player1Response_SetBit = [](void* Obj){ ((PutinManager_eventOnInputCompleted_Parms*)Obj)->player1Response = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_player1Response = { UE4CodeGen_Private::EPropertyClass::Bool, "player1Response", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(PutinManager_eventOnInputCompleted_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_player1Response_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_player2Response,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_player1Response,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "PutInManager" },
				{ "ModuleRelativePath", "PutinManager.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APutinManager, "OnInputCompleted", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020C00, sizeof(PutinManager_eventOnInputCompleted_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APutinManager_OnPlayer1Response()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_input = { UE4CodeGen_Private::EPropertyClass::Enum, "input", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PutinManager_eventOnPlayer1Response_Parms, input), Z_Construct_UEnum_TRANSmission_EMorseInput, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_input_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_input,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_input_Underlying,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "PutInManager" },
				{ "ModuleRelativePath", "PutinManager.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APutinManager, "OnPlayer1Response", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020C00, sizeof(PutinManager_eventOnPlayer1Response_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APutinManager_OnPlayer2Response()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_input = { UE4CodeGen_Private::EPropertyClass::Enum, "input", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PutinManager_eventOnPlayer2Response_Parms, input), Z_Construct_UEnum_TRANSmission_EMorseInput, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_input_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_input,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_input_Underlying,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "PutInManager" },
				{ "ModuleRelativePath", "PutinManager.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APutinManager, "OnPlayer2Response", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020C00, sizeof(PutinManager_eventOnPlayer2Response_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APutinManager_SendSignalPair()
	{
		struct PutinManager_eventSendSignalPair_Parms
		{
			float stageTime;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_stageTime = { UE4CodeGen_Private::EPropertyClass::Float, "stageTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PutinManager_eventSendSignalPair_Parms, stageTime), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_stageTime,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "PutInManager" },
				{ "ModuleRelativePath", "PutinManager.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APutinManager, "SendSignalPair", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(PutinManager_eventSendSignalPair_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APutinManager_NoRegister()
	{
		return APutinManager::StaticClass();
	}
	UClass* Z_Construct_UClass_APutinManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_TRANSmission,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_APutinManager_OnInputCompleted, "OnInputCompleted" }, // 1112346446
				{ &Z_Construct_UFunction_APutinManager_OnPlayer1Response, "OnPlayer1Response" }, // 855595998
				{ &Z_Construct_UFunction_APutinManager_OnPlayer2Response, "OnPlayer2Response" }, // 1945286786
				{ &Z_Construct_UFunction_APutinManager_SendSignalPair, "SendSignalPair" }, // 3172202202
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "PutinManager.h" },
				{ "ModuleRelativePath", "PutinManager.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputState_MetaData[] = {
				{ "Category", "PutInManager" },
				{ "ModuleRelativePath", "PutinManager.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InputState = { UE4CodeGen_Private::EPropertyClass::Enum, "InputState", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(APutinManager, InputState), Z_Construct_UEnum_TRANSmission_EPutInState, METADATA_PARAMS(NewProp_InputState_MetaData, ARRAY_COUNT(NewProp_InputState_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_InputState_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VibratorManager_MetaData[] = {
				{ "Category", "PutInManager" },
				{ "ModuleRelativePath", "PutinManager.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VibratorManager = { UE4CodeGen_Private::EPropertyClass::Object, "VibratorManager", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(APutinManager, VibratorManager), Z_Construct_UClass_AVibrator_NoRegister, METADATA_PARAMS(NewProp_VibratorManager_MetaData, ARRAY_COUNT(NewProp_VibratorManager_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SyncMaxTime_MetaData[] = {
				{ "Category", "PutInManager" },
				{ "ModuleRelativePath", "PutinManager.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SyncMaxTime = { UE4CodeGen_Private::EPropertyClass::Float, "SyncMaxTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(APutinManager, SyncMaxTime), METADATA_PARAMS(NewProp_SyncMaxTime_MetaData, ARRAY_COUNT(NewProp_SyncMaxTime_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SignalWaitTime_MetaData[] = {
				{ "Category", "PutInManager" },
				{ "ModuleRelativePath", "PutinManager.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SignalWaitTime = { UE4CodeGen_Private::EPropertyClass::Float, "SignalWaitTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(APutinManager, SignalWaitTime), METADATA_PARAMS(NewProp_SignalWaitTime_MetaData, ARRAY_COUNT(NewProp_SignalWaitTime_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Test_SendSignal_MetaData[] = {
				{ "Category", "PutInManager" },
				{ "ModuleRelativePath", "PutinManager.h" },
			};
#endif
			auto NewProp_Test_SendSignal_SetBit = [](void* Obj){ ((APutinManager*)Obj)->Test_SendSignal = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Test_SendSignal = { UE4CodeGen_Private::EPropertyClass::Bool, "Test_SendSignal", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(APutinManager), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_Test_SendSignal_SetBit)>::SetBit, METADATA_PARAMS(NewProp_Test_SendSignal_MetaData, ARRAY_COUNT(NewProp_Test_SendSignal_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InputState,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InputState_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VibratorManager,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SyncMaxTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SignalWaitTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Test_SendSignal,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<APutinManager>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&APutinManager::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
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
	IMPLEMENT_CLASS(APutinManager, 753211291);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APutinManager(Z_Construct_UClass_APutinManager, &APutinManager::StaticClass, TEXT("/Script/TRANSmission"), TEXT("APutinManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APutinManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

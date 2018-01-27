// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Vibrator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVibrator() {}
// Cross Module References
	TRANSMISSION_API UEnum* Z_Construct_UEnum_TRANSmission_EController();
	UPackage* Z_Construct_UPackage__Script_TRANSmission();
	TRANSMISSION_API UEnum* Z_Construct_UEnum_TRANSmission_EMorseInput();
	TRANSMISSION_API UClass* Z_Construct_UClass_AVibrator_NoRegister();
	TRANSMISSION_API UClass* Z_Construct_UClass_AVibrator();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UForceFeedbackEffect_NoRegister();
// End Cross Module References
	static UEnum* EController_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_TRANSmission_EController, Z_Construct_UPackage__Script_TRANSmission(), TEXT("EController"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EController(EController_StaticEnum, TEXT("/Script/TRANSmission"), TEXT("EController"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_TRANSmission_EController_CRC() { return 4001267138U; }
	UEnum* Z_Construct_UEnum_TRANSmission_EController()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_TRANSmission();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EController"), 0, Get_Z_Construct_UEnum_TRANSmission_EController_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EController::Player1", (int64)EController::Player1 },
				{ "EController::Player2", (int64)EController::Player2 },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Vibrator.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_TRANSmission,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EController",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EController",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EMorseInput_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_TRANSmission_EMorseInput, Z_Construct_UPackage__Script_TRANSmission(), TEXT("EMorseInput"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMorseInput(EMorseInput_StaticEnum, TEXT("/Script/TRANSmission"), TEXT("EMorseInput"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_TRANSmission_EMorseInput_CRC() { return 797329059U; }
	UEnum* Z_Construct_UEnum_TRANSmission_EMorseInput()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_TRANSmission();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMorseInput"), 0, Get_Z_Construct_UEnum_TRANSmission_EMorseInput_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMorseInput::A", (int64)EMorseInput::A },
				{ "EMorseInput::B", (int64)EMorseInput::B },
				{ "EMorseInput::X", (int64)EMorseInput::X },
				{ "EMorseInput::Y", (int64)EMorseInput::Y },
				{ "EMorseInput::S", (int64)EMorseInput::S },
				{ "EMorseInput::U", (int64)EMorseInput::U },
				{ "EMorseInput::C", (int64)EMorseInput::C },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Vibrator.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_TRANSmission,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EMorseInput",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EMorseInput",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void AVibrator::StaticRegisterNativesAVibrator()
	{
	}
	UClass* Z_Construct_UClass_AVibrator_NoRegister()
	{
		return AVibrator::StaticClass();
	}
	UClass* Z_Construct_UClass_AVibrator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_TRANSmission,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Vibrator.h" },
				{ "ModuleRelativePath", "Vibrator.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DashHapticFeedback_MetaData[] = {
				{ "Category", "Vibrator" },
				{ "ModuleRelativePath", "Vibrator.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DashHapticFeedback = { UE4CodeGen_Private::EPropertyClass::Object, "DashHapticFeedback", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AVibrator, DashHapticFeedback), Z_Construct_UClass_UForceFeedbackEffect_NoRegister, METADATA_PARAMS(NewProp_DashHapticFeedback_MetaData, ARRAY_COUNT(NewProp_DashHapticFeedback_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DotHapticFeedback_MetaData[] = {
				{ "Category", "Vibrator" },
				{ "ModuleRelativePath", "Vibrator.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DotHapticFeedback = { UE4CodeGen_Private::EPropertyClass::Object, "DotHapticFeedback", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AVibrator, DotHapticFeedback), Z_Construct_UClass_UForceFeedbackEffect_NoRegister, METADATA_PARAMS(NewProp_DotHapticFeedback_MetaData, ARRAY_COUNT(NewProp_DotHapticFeedback_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SignalToPlay_MetaData[] = {
				{ "Category", "Vibrator" },
				{ "ModuleRelativePath", "Vibrator.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SignalToPlay = { UE4CodeGen_Private::EPropertyClass::Enum, "SignalToPlay", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AVibrator, SignalToPlay), Z_Construct_UEnum_TRANSmission_EMorseInput, METADATA_PARAMS(NewProp_SignalToPlay_MetaData, ARRAY_COUNT(NewProp_SignalToPlay_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_SignalToPlay_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlaySignal_MetaData[] = {
				{ "Category", "Vibrator" },
				{ "ModuleRelativePath", "Vibrator.h" },
				{ "ToolTip", "Test" },
			};
#endif
			auto NewProp_PlaySignal_SetBit = [](void* Obj){ ((AVibrator*)Obj)->PlaySignal = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_PlaySignal = { UE4CodeGen_Private::EPropertyClass::Bool, "PlaySignal", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AVibrator), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_PlaySignal_SetBit)>::SetBit, METADATA_PARAMS(NewProp_PlaySignal_MetaData, ARRAY_COUNT(NewProp_PlaySignal_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DashHapticFeedback,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DotHapticFeedback,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SignalToPlay,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SignalToPlay_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PlaySignal,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AVibrator>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AVibrator::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
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
	IMPLEMENT_CLASS(AVibrator, 3214353239);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AVibrator(Z_Construct_UClass_AVibrator, &AVibrator::StaticClass, TEXT("/Script/TRANSmission"), TEXT("AVibrator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVibrator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

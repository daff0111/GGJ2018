// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "TRANSmissionGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTRANSmissionGameMode() {}
// Cross Module References
	TRANSMISSION_API UClass* Z_Construct_UClass_ATRANSmissionGameMode_NoRegister();
	TRANSMISSION_API UClass* Z_Construct_UClass_ATRANSmissionGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_TRANSmission();
// End Cross Module References
	void ATRANSmissionGameMode::StaticRegisterNativesATRANSmissionGameMode()
	{
	}
	UClass* Z_Construct_UClass_ATRANSmissionGameMode_NoRegister()
	{
		return ATRANSmissionGameMode::StaticClass();
	}
	UClass* Z_Construct_UClass_ATRANSmissionGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AGameModeBase,
				(UObject* (*)())Z_Construct_UPackage__Script_TRANSmission,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "TRANSmissionGameMode.h" },
				{ "ModuleRelativePath", "TRANSmissionGameMode.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ATRANSmissionGameMode>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ATRANSmissionGameMode::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00880288u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATRANSmissionGameMode, 3913201432);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATRANSmissionGameMode(Z_Construct_UClass_ATRANSmissionGameMode, &ATRANSmissionGameMode::StaticClass, TEXT("/Script/TRANSmission"), TEXT("ATRANSmissionGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATRANSmissionGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

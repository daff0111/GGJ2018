// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TRANSMISSION_Vibrator_generated_h
#error "Vibrator.generated.h already included, missing '#pragma once' in Vibrator.h"
#endif
#define TRANSMISSION_Vibrator_generated_h

#define TRANSmission_Source_TRANSmission_Vibrator_h_31_RPC_WRAPPERS
#define TRANSmission_Source_TRANSmission_Vibrator_h_31_RPC_WRAPPERS_NO_PURE_DECLS
#define TRANSmission_Source_TRANSmission_Vibrator_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVibrator(); \
	friend TRANSMISSION_API class UClass* Z_Construct_UClass_AVibrator(); \
public: \
	DECLARE_CLASS(AVibrator, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/TRANSmission"), NO_API) \
	DECLARE_SERIALIZER(AVibrator) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TRANSmission_Source_TRANSmission_Vibrator_h_31_INCLASS \
private: \
	static void StaticRegisterNativesAVibrator(); \
	friend TRANSMISSION_API class UClass* Z_Construct_UClass_AVibrator(); \
public: \
	DECLARE_CLASS(AVibrator, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/TRANSmission"), NO_API) \
	DECLARE_SERIALIZER(AVibrator) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TRANSmission_Source_TRANSmission_Vibrator_h_31_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AVibrator(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVibrator) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVibrator); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVibrator); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVibrator(AVibrator&&); \
	NO_API AVibrator(const AVibrator&); \
public:


#define TRANSmission_Source_TRANSmission_Vibrator_h_31_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVibrator(AVibrator&&); \
	NO_API AVibrator(const AVibrator&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVibrator); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVibrator); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AVibrator)


#define TRANSmission_Source_TRANSmission_Vibrator_h_31_PRIVATE_PROPERTY_OFFSET
#define TRANSmission_Source_TRANSmission_Vibrator_h_28_PROLOG
#define TRANSmission_Source_TRANSmission_Vibrator_h_31_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TRANSmission_Source_TRANSmission_Vibrator_h_31_PRIVATE_PROPERTY_OFFSET \
	TRANSmission_Source_TRANSmission_Vibrator_h_31_RPC_WRAPPERS \
	TRANSmission_Source_TRANSmission_Vibrator_h_31_INCLASS \
	TRANSmission_Source_TRANSmission_Vibrator_h_31_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TRANSmission_Source_TRANSmission_Vibrator_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TRANSmission_Source_TRANSmission_Vibrator_h_31_PRIVATE_PROPERTY_OFFSET \
	TRANSmission_Source_TRANSmission_Vibrator_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	TRANSmission_Source_TRANSmission_Vibrator_h_31_INCLASS_NO_PURE_DECLS \
	TRANSmission_Source_TRANSmission_Vibrator_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TRANSmission_Source_TRANSmission_Vibrator_h


#define FOREACH_ENUM_ECONTROLLER(op) \
	op(EController::Player1) 
#define FOREACH_ENUM_EMORSEINPUT(op) \
	op(EMorseInput::A) \
	op(EMorseInput::B) \
	op(EMorseInput::X) \
	op(EMorseInput::Y) \
	op(EMorseInput::S) \
	op(EMorseInput::U) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS

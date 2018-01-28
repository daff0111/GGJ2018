// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UStateMachine;
enum class EPutInState : uint8;
#ifdef TRANSMISSION_StateMachine_generated_h
#error "StateMachine.generated.h already included, missing '#pragma once' in StateMachine.h"
#endif
#define TRANSMISSION_StateMachine_generated_h

#define TRANSmission_Source_TRANSmission_StateMachine_h_24_RPC_WRAPPERS
#define TRANSmission_Source_TRANSmission_StateMachine_h_24_RPC_WRAPPERS_NO_PURE_DECLS
#define TRANSmission_Source_TRANSmission_StateMachine_h_24_EVENT_PARMS \
	struct State_eventOnOver_Parms \
	{ \
		UStateMachine* StateMachine; \
		EPutInState State; \
		bool Player1Correct; \
		bool Player2Correct; \
	}; \
	struct State_eventOnStateStart_Parms \
	{ \
		UStateMachine* StateMachine; \
	}; \
	struct State_eventTick_Parms \
	{ \
		UStateMachine* StateMachine; \
		float DeltaTime; \
	};


#define TRANSmission_Source_TRANSmission_StateMachine_h_24_CALLBACK_WRAPPERS
#define TRANSmission_Source_TRANSmission_StateMachine_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUState(); \
	friend TRANSMISSION_API class UClass* Z_Construct_UClass_UState(); \
public: \
	DECLARE_CLASS(UState, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/TRANSmission"), NO_API) \
	DECLARE_SERIALIZER(UState) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TRANSmission_Source_TRANSmission_StateMachine_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUState(); \
	friend TRANSMISSION_API class UClass* Z_Construct_UClass_UState(); \
public: \
	DECLARE_CLASS(UState, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/TRANSmission"), NO_API) \
	DECLARE_SERIALIZER(UState) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TRANSmission_Source_TRANSmission_StateMachine_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UState(UState&&); \
	NO_API UState(const UState&); \
public:


#define TRANSmission_Source_TRANSmission_StateMachine_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UState(UState&&); \
	NO_API UState(const UState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UState); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UState)


#define TRANSmission_Source_TRANSmission_StateMachine_h_24_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Over() { return STRUCT_OFFSET(UState, Over); } \
	FORCEINLINE static uint32 __PPO__Player1Correct() { return STRUCT_OFFSET(UState, Player1Correct); } \
	FORCEINLINE static uint32 __PPO__Player2Correct() { return STRUCT_OFFSET(UState, Player2Correct); }


#define TRANSmission_Source_TRANSmission_StateMachine_h_21_PROLOG \
	TRANSmission_Source_TRANSmission_StateMachine_h_24_EVENT_PARMS


#define TRANSmission_Source_TRANSmission_StateMachine_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TRANSmission_Source_TRANSmission_StateMachine_h_24_PRIVATE_PROPERTY_OFFSET \
	TRANSmission_Source_TRANSmission_StateMachine_h_24_RPC_WRAPPERS \
	TRANSmission_Source_TRANSmission_StateMachine_h_24_CALLBACK_WRAPPERS \
	TRANSmission_Source_TRANSmission_StateMachine_h_24_INCLASS \
	TRANSmission_Source_TRANSmission_StateMachine_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TRANSmission_Source_TRANSmission_StateMachine_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TRANSmission_Source_TRANSmission_StateMachine_h_24_PRIVATE_PROPERTY_OFFSET \
	TRANSmission_Source_TRANSmission_StateMachine_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	TRANSmission_Source_TRANSmission_StateMachine_h_24_CALLBACK_WRAPPERS \
	TRANSmission_Source_TRANSmission_StateMachine_h_24_INCLASS_NO_PURE_DECLS \
	TRANSmission_Source_TRANSmission_StateMachine_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TRANSmission_Source_TRANSmission_StateMachine_h_56_RPC_WRAPPERS
#define TRANSmission_Source_TRANSmission_StateMachine_h_56_RPC_WRAPPERS_NO_PURE_DECLS
#define TRANSmission_Source_TRANSmission_StateMachine_h_56_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStateMachine(); \
	friend TRANSMISSION_API class UClass* Z_Construct_UClass_UStateMachine(); \
public: \
	DECLARE_CLASS(UStateMachine, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/TRANSmission"), NO_API) \
	DECLARE_SERIALIZER(UStateMachine) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TRANSmission_Source_TRANSmission_StateMachine_h_56_INCLASS \
private: \
	static void StaticRegisterNativesUStateMachine(); \
	friend TRANSMISSION_API class UClass* Z_Construct_UClass_UStateMachine(); \
public: \
	DECLARE_CLASS(UStateMachine, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/TRANSmission"), NO_API) \
	DECLARE_SERIALIZER(UStateMachine) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TRANSmission_Source_TRANSmission_StateMachine_h_56_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStateMachine(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStateMachine) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStateMachine); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStateMachine); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStateMachine(UStateMachine&&); \
	NO_API UStateMachine(const UStateMachine&); \
public:


#define TRANSmission_Source_TRANSmission_StateMachine_h_56_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStateMachine(UStateMachine&&); \
	NO_API UStateMachine(const UStateMachine&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStateMachine); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStateMachine); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UStateMachine)


#define TRANSmission_Source_TRANSmission_StateMachine_h_56_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CurrentGameState() { return STRUCT_OFFSET(UStateMachine, CurrentGameState); } \
	FORCEINLINE static uint32 __PPO__CurrentState() { return STRUCT_OFFSET(UStateMachine, CurrentState); } \
	FORCEINLINE static uint32 __PPO__States() { return STRUCT_OFFSET(UStateMachine, States); }


#define TRANSmission_Source_TRANSmission_StateMachine_h_53_PROLOG
#define TRANSmission_Source_TRANSmission_StateMachine_h_56_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TRANSmission_Source_TRANSmission_StateMachine_h_56_PRIVATE_PROPERTY_OFFSET \
	TRANSmission_Source_TRANSmission_StateMachine_h_56_RPC_WRAPPERS \
	TRANSmission_Source_TRANSmission_StateMachine_h_56_INCLASS \
	TRANSmission_Source_TRANSmission_StateMachine_h_56_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TRANSmission_Source_TRANSmission_StateMachine_h_56_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TRANSmission_Source_TRANSmission_StateMachine_h_56_PRIVATE_PROPERTY_OFFSET \
	TRANSmission_Source_TRANSmission_StateMachine_h_56_RPC_WRAPPERS_NO_PURE_DECLS \
	TRANSmission_Source_TRANSmission_StateMachine_h_56_INCLASS_NO_PURE_DECLS \
	TRANSmission_Source_TRANSmission_StateMachine_h_56_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TRANSmission_Source_TRANSmission_StateMachine_h


#define FOREACH_ENUM_GAMESTATE(op) \
	op(GameState::Running) \
	op(GameState::Loss) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS

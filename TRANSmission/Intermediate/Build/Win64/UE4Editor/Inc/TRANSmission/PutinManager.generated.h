// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EMorseInput : uint8;
#ifdef TRANSMISSION_PutinManager_generated_h
#error "PutinManager.generated.h already included, missing '#pragma once' in PutinManager.h"
#endif
#define TRANSMISSION_PutinManager_generated_h

#define TRANSmission_Source_TRANSmission_PutinManager_h_36_RPC_WRAPPERS \
	virtual void OnPlayer2Response_Implementation(EMorseInput input); \
	virtual void OnPlayer1Response_Implementation(EMorseInput input); \
	virtual void OnInputCompleted_Implementation(bool player1Response, bool player2Response); \
 \
	DECLARE_FUNCTION(execOnPlayer2Response) \
	{ \
		P_GET_ENUM(EMorseInput,Z_Param_input); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnPlayer2Response_Implementation(EMorseInput(Z_Param_input)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnPlayer1Response) \
	{ \
		P_GET_ENUM(EMorseInput,Z_Param_input); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnPlayer1Response_Implementation(EMorseInput(Z_Param_input)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnInputCompleted) \
	{ \
		P_GET_UBOOL(Z_Param_player1Response); \
		P_GET_UBOOL(Z_Param_player2Response); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnInputCompleted_Implementation(Z_Param_player1Response,Z_Param_player2Response); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendSignalPair) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_stageTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SendSignalPair(Z_Param_stageTime); \
		P_NATIVE_END; \
	}


#define TRANSmission_Source_TRANSmission_PutinManager_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnPlayer2Response_Implementation(EMorseInput input); \
	virtual void OnPlayer1Response_Implementation(EMorseInput input); \
	virtual void OnInputCompleted_Implementation(bool player1Response, bool player2Response); \
 \
	DECLARE_FUNCTION(execOnPlayer2Response) \
	{ \
		P_GET_ENUM(EMorseInput,Z_Param_input); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnPlayer2Response_Implementation(EMorseInput(Z_Param_input)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnPlayer1Response) \
	{ \
		P_GET_ENUM(EMorseInput,Z_Param_input); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnPlayer1Response_Implementation(EMorseInput(Z_Param_input)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnInputCompleted) \
	{ \
		P_GET_UBOOL(Z_Param_player1Response); \
		P_GET_UBOOL(Z_Param_player2Response); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnInputCompleted_Implementation(Z_Param_player1Response,Z_Param_player2Response); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendSignalPair) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_stageTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SendSignalPair(Z_Param_stageTime); \
		P_NATIVE_END; \
	}


#define TRANSmission_Source_TRANSmission_PutinManager_h_36_EVENT_PARMS \
	struct PutinManager_eventOnInputCompleted_Parms \
	{ \
		bool player1Response; \
		bool player2Response; \
	}; \
	struct PutinManager_eventOnPlayer1Response_Parms \
	{ \
		EMorseInput input; \
	}; \
	struct PutinManager_eventOnPlayer2Response_Parms \
	{ \
		EMorseInput input; \
	};


#define TRANSmission_Source_TRANSmission_PutinManager_h_36_CALLBACK_WRAPPERS
#define TRANSmission_Source_TRANSmission_PutinManager_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPutinManager(); \
	friend TRANSMISSION_API class UClass* Z_Construct_UClass_APutinManager(); \
public: \
	DECLARE_CLASS(APutinManager, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/TRANSmission"), NO_API) \
	DECLARE_SERIALIZER(APutinManager) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TRANSmission_Source_TRANSmission_PutinManager_h_36_INCLASS \
private: \
	static void StaticRegisterNativesAPutinManager(); \
	friend TRANSMISSION_API class UClass* Z_Construct_UClass_APutinManager(); \
public: \
	DECLARE_CLASS(APutinManager, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/TRANSmission"), NO_API) \
	DECLARE_SERIALIZER(APutinManager) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TRANSmission_Source_TRANSmission_PutinManager_h_36_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APutinManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APutinManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APutinManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APutinManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APutinManager(APutinManager&&); \
	NO_API APutinManager(const APutinManager&); \
public:


#define TRANSmission_Source_TRANSmission_PutinManager_h_36_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APutinManager(APutinManager&&); \
	NO_API APutinManager(const APutinManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APutinManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APutinManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APutinManager)


#define TRANSmission_Source_TRANSmission_PutinManager_h_36_PRIVATE_PROPERTY_OFFSET
#define TRANSmission_Source_TRANSmission_PutinManager_h_33_PROLOG \
	TRANSmission_Source_TRANSmission_PutinManager_h_36_EVENT_PARMS


#define TRANSmission_Source_TRANSmission_PutinManager_h_36_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TRANSmission_Source_TRANSmission_PutinManager_h_36_PRIVATE_PROPERTY_OFFSET \
	TRANSmission_Source_TRANSmission_PutinManager_h_36_RPC_WRAPPERS \
	TRANSmission_Source_TRANSmission_PutinManager_h_36_CALLBACK_WRAPPERS \
	TRANSmission_Source_TRANSmission_PutinManager_h_36_INCLASS \
	TRANSmission_Source_TRANSmission_PutinManager_h_36_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TRANSmission_Source_TRANSmission_PutinManager_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TRANSmission_Source_TRANSmission_PutinManager_h_36_PRIVATE_PROPERTY_OFFSET \
	TRANSmission_Source_TRANSmission_PutinManager_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	TRANSmission_Source_TRANSmission_PutinManager_h_36_CALLBACK_WRAPPERS \
	TRANSmission_Source_TRANSmission_PutinManager_h_36_INCLASS_NO_PURE_DECLS \
	TRANSmission_Source_TRANSmission_PutinManager_h_36_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TRANSmission_Source_TRANSmission_PutinManager_h


#define FOREACH_ENUM_EPUTINSTATE(op) \
	op(EPutInState::Idle) \
	op(EPutInState::SendingSignal) \
	op(EPutInState::WaitingForResponse) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS

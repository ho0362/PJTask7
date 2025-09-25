// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TaskPawn.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FInputActionValue;
#ifdef PJTASK7_TaskPawn_generated_h
#error "TaskPawn.generated.h already included, missing '#pragma once' in TaskPawn.h"
#endif
#define PJTASK7_TaskPawn_generated_h

#define FID_Users_User_Documents_GitHub_PJTask7_PJTask7_Source_PJTask7_Public_TaskPawn_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execStopSprint); \
	DECLARE_FUNCTION(execStartSprint); \
	DECLARE_FUNCTION(execLook); \
	DECLARE_FUNCTION(execMove);


#define FID_Users_User_Documents_GitHub_PJTask7_PJTask7_Source_PJTask7_Public_TaskPawn_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATaskPawn(); \
	friend struct Z_Construct_UClass_ATaskPawn_Statics; \
public: \
	DECLARE_CLASS(ATaskPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PJTask7"), NO_API) \
	DECLARE_SERIALIZER(ATaskPawn)


#define FID_Users_User_Documents_GitHub_PJTask7_PJTask7_Source_PJTask7_Public_TaskPawn_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ATaskPawn(ATaskPawn&&); \
	ATaskPawn(const ATaskPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATaskPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATaskPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATaskPawn) \
	NO_API virtual ~ATaskPawn();


#define FID_Users_User_Documents_GitHub_PJTask7_PJTask7_Source_PJTask7_Public_TaskPawn_h_21_PROLOG
#define FID_Users_User_Documents_GitHub_PJTask7_PJTask7_Source_PJTask7_Public_TaskPawn_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_User_Documents_GitHub_PJTask7_PJTask7_Source_PJTask7_Public_TaskPawn_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_User_Documents_GitHub_PJTask7_PJTask7_Source_PJTask7_Public_TaskPawn_h_24_INCLASS_NO_PURE_DECLS \
	FID_Users_User_Documents_GitHub_PJTask7_PJTask7_Source_PJTask7_Public_TaskPawn_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PJTASK7_API UClass* StaticClass<class ATaskPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_User_Documents_GitHub_PJTask7_PJTask7_Source_PJTask7_Public_TaskPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

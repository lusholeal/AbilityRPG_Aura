// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/AuraAttributeSet.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayAttributeData;
#ifdef AURA_AuraAttributeSet_generated_h
#error "AuraAttributeSet.generated.h already included, missing '#pragma once' in AuraAttributeSet.h"
#endif
#define AURA_AuraAttributeSet_generated_h

#define FID_Users_Luisl_OneDrive_Escritorio_AuraRPG_Aura_Source_Aura_Public_AbilitySystem_AuraAttributeSet_h_19_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEffectProperties_Statics; \
	AURA_API static class UScriptStruct* StaticStruct();


template<> AURA_API UScriptStruct* StaticStruct<struct FEffectProperties>();

#define FID_Users_Luisl_OneDrive_Escritorio_AuraRPG_Aura_Source_Aura_Public_AbilitySystem_AuraAttributeSet_h_56_SPARSE_DATA
#define FID_Users_Luisl_OneDrive_Escritorio_AuraRPG_Aura_Source_Aura_Public_AbilitySystem_AuraAttributeSet_h_56_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_MaxMana); \
	DECLARE_FUNCTION(execOnRep_Mana); \
	DECLARE_FUNCTION(execOnRep_MaxHealth); \
	DECLARE_FUNCTION(execOnRep_Health);


#define FID_Users_Luisl_OneDrive_Escritorio_AuraRPG_Aura_Source_Aura_Public_AbilitySystem_AuraAttributeSet_h_56_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_MaxMana); \
	DECLARE_FUNCTION(execOnRep_Mana); \
	DECLARE_FUNCTION(execOnRep_MaxHealth); \
	DECLARE_FUNCTION(execOnRep_Health);


#define FID_Users_Luisl_OneDrive_Escritorio_AuraRPG_Aura_Source_Aura_Public_AbilitySystem_AuraAttributeSet_h_56_ACCESSORS
#define FID_Users_Luisl_OneDrive_Escritorio_AuraRPG_Aura_Source_Aura_Public_AbilitySystem_AuraAttributeSet_h_56_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAuraAttributeSet(); \
	friend struct Z_Construct_UClass_UAuraAttributeSet_Statics; \
public: \
	DECLARE_CLASS(UAuraAttributeSet, UAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Aura"), NO_API) \
	DECLARE_SERIALIZER(UAuraAttributeSet) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Health=NETFIELD_REP_START, \
		MaxHealth, \
		Mana, \
		MaxMana, \
		NETFIELD_REP_END=MaxMana	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(UAuraAttributeSet) \
public:


#define FID_Users_Luisl_OneDrive_Escritorio_AuraRPG_Aura_Source_Aura_Public_AbilitySystem_AuraAttributeSet_h_56_INCLASS \
private: \
	static void StaticRegisterNativesUAuraAttributeSet(); \
	friend struct Z_Construct_UClass_UAuraAttributeSet_Statics; \
public: \
	DECLARE_CLASS(UAuraAttributeSet, UAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Aura"), NO_API) \
	DECLARE_SERIALIZER(UAuraAttributeSet) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Health=NETFIELD_REP_START, \
		MaxHealth, \
		Mana, \
		MaxMana, \
		NETFIELD_REP_END=MaxMana	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(UAuraAttributeSet) \
public:


#define FID_Users_Luisl_OneDrive_Escritorio_AuraRPG_Aura_Source_Aura_Public_AbilitySystem_AuraAttributeSet_h_56_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAuraAttributeSet(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAuraAttributeSet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAuraAttributeSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAuraAttributeSet); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAuraAttributeSet(UAuraAttributeSet&&); \
	NO_API UAuraAttributeSet(const UAuraAttributeSet&); \
public: \
	NO_API virtual ~UAuraAttributeSet();


#define FID_Users_Luisl_OneDrive_Escritorio_AuraRPG_Aura_Source_Aura_Public_AbilitySystem_AuraAttributeSet_h_56_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAuraAttributeSet(UAuraAttributeSet&&); \
	NO_API UAuraAttributeSet(const UAuraAttributeSet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAuraAttributeSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAuraAttributeSet); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAuraAttributeSet) \
	NO_API virtual ~UAuraAttributeSet();


#define FID_Users_Luisl_OneDrive_Escritorio_AuraRPG_Aura_Source_Aura_Public_AbilitySystem_AuraAttributeSet_h_53_PROLOG
#define FID_Users_Luisl_OneDrive_Escritorio_AuraRPG_Aura_Source_Aura_Public_AbilitySystem_AuraAttributeSet_h_56_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Luisl_OneDrive_Escritorio_AuraRPG_Aura_Source_Aura_Public_AbilitySystem_AuraAttributeSet_h_56_SPARSE_DATA \
	FID_Users_Luisl_OneDrive_Escritorio_AuraRPG_Aura_Source_Aura_Public_AbilitySystem_AuraAttributeSet_h_56_RPC_WRAPPERS \
	FID_Users_Luisl_OneDrive_Escritorio_AuraRPG_Aura_Source_Aura_Public_AbilitySystem_AuraAttributeSet_h_56_ACCESSORS \
	FID_Users_Luisl_OneDrive_Escritorio_AuraRPG_Aura_Source_Aura_Public_AbilitySystem_AuraAttributeSet_h_56_INCLASS \
	FID_Users_Luisl_OneDrive_Escritorio_AuraRPG_Aura_Source_Aura_Public_AbilitySystem_AuraAttributeSet_h_56_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_Luisl_OneDrive_Escritorio_AuraRPG_Aura_Source_Aura_Public_AbilitySystem_AuraAttributeSet_h_56_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Luisl_OneDrive_Escritorio_AuraRPG_Aura_Source_Aura_Public_AbilitySystem_AuraAttributeSet_h_56_SPARSE_DATA \
	FID_Users_Luisl_OneDrive_Escritorio_AuraRPG_Aura_Source_Aura_Public_AbilitySystem_AuraAttributeSet_h_56_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Luisl_OneDrive_Escritorio_AuraRPG_Aura_Source_Aura_Public_AbilitySystem_AuraAttributeSet_h_56_ACCESSORS \
	FID_Users_Luisl_OneDrive_Escritorio_AuraRPG_Aura_Source_Aura_Public_AbilitySystem_AuraAttributeSet_h_56_INCLASS_NO_PURE_DECLS \
	FID_Users_Luisl_OneDrive_Escritorio_AuraRPG_Aura_Source_Aura_Public_AbilitySystem_AuraAttributeSet_h_56_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AURA_API UClass* StaticClass<class UAuraAttributeSet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Luisl_OneDrive_Escritorio_AuraRPG_Aura_Source_Aura_Public_AbilitySystem_AuraAttributeSet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

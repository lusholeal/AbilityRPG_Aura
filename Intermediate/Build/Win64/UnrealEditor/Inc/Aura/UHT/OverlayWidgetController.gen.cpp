// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/UI/WidgetController/OverlayWidgetController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOverlayWidgetController() {}
// Cross Module References
	AURA_API UClass* Z_Construct_UClass_UAuraWidgetController();
	AURA_API UClass* Z_Construct_UClass_UOverlayWidgetController();
	AURA_API UClass* Z_Construct_UClass_UOverlayWidgetController_NoRegister();
	AURA_API UFunction* Z_Construct_UDelegateFunction_Aura_OnHealthChangedSignature__DelegateSignature();
	AURA_API UFunction* Z_Construct_UDelegateFunction_Aura_OnMaxHealthChangedSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Aura_OnHealthChangedSignature__DelegateSignature_Statics
	{
		struct _Script_Aura_eventOnHealthChangedSignature_Parms
		{
			float NewHealth;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewHealth;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Aura_OnHealthChangedSignature__DelegateSignature_Statics::NewProp_NewHealth = { "NewHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Aura_eventOnHealthChangedSignature_Parms, NewHealth), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Aura_OnHealthChangedSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Aura_OnHealthChangedSignature__DelegateSignature_Statics::NewProp_NewHealth,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Aura_OnHealthChangedSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/WidgetController/OverlayWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Aura_OnHealthChangedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Aura, nullptr, "OnHealthChangedSignature__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_Aura_OnHealthChangedSignature__DelegateSignature_Statics::_Script_Aura_eventOnHealthChangedSignature_Parms), Z_Construct_UDelegateFunction_Aura_OnHealthChangedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Aura_OnHealthChangedSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Aura_OnHealthChangedSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Aura_OnHealthChangedSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Aura_OnHealthChangedSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Aura_OnHealthChangedSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnHealthChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnHealthChangedSignature, float NewHealth)
{
	struct _Script_Aura_eventOnHealthChangedSignature_Parms
	{
		float NewHealth;
	};
	_Script_Aura_eventOnHealthChangedSignature_Parms Parms;
	Parms.NewHealth=NewHealth;
	OnHealthChangedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_Aura_OnMaxHealthChangedSignature__DelegateSignature_Statics
	{
		struct _Script_Aura_eventOnMaxHealthChangedSignature_Parms
		{
			float NewMaxHealth;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewMaxHealth;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Aura_OnMaxHealthChangedSignature__DelegateSignature_Statics::NewProp_NewMaxHealth = { "NewMaxHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Aura_eventOnMaxHealthChangedSignature_Parms, NewMaxHealth), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Aura_OnMaxHealthChangedSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Aura_OnMaxHealthChangedSignature__DelegateSignature_Statics::NewProp_NewMaxHealth,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Aura_OnMaxHealthChangedSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/WidgetController/OverlayWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Aura_OnMaxHealthChangedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Aura, nullptr, "OnMaxHealthChangedSignature__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_Aura_OnMaxHealthChangedSignature__DelegateSignature_Statics::_Script_Aura_eventOnMaxHealthChangedSignature_Parms), Z_Construct_UDelegateFunction_Aura_OnMaxHealthChangedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Aura_OnMaxHealthChangedSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Aura_OnMaxHealthChangedSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Aura_OnMaxHealthChangedSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Aura_OnMaxHealthChangedSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Aura_OnMaxHealthChangedSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnMaxHealthChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnMaxHealthChangedSignature, float NewMaxHealth)
{
	struct _Script_Aura_eventOnMaxHealthChangedSignature_Parms
	{
		float NewMaxHealth;
	};
	_Script_Aura_eventOnMaxHealthChangedSignature_Parms Parms;
	Parms.NewMaxHealth=NewMaxHealth;
	OnMaxHealthChangedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
	void UOverlayWidgetController::StaticRegisterNativesUOverlayWidgetController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOverlayWidgetController);
	UClass* Z_Construct_UClass_UOverlayWidgetController_NoRegister()
	{
		return UOverlayWidgetController::StaticClass();
	}
	struct Z_Construct_UClass_UOverlayWidgetController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnHealthChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHealthChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnMaxHealthChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMaxHealthChanged;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOverlayWidgetController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAuraWidgetController,
		(UObject* (*)())Z_Construct_UPackage__Script_Aura,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOverlayWidgetController_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/WidgetController/OverlayWidgetController.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UI/WidgetController/OverlayWidgetController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_OnHealthChanged_MetaData[] = {
		{ "Category", "GAS|Attributes" },
		{ "ModuleRelativePath", "Public/UI/WidgetController/OverlayWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_OnHealthChanged = { "OnHealthChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOverlayWidgetController, OnHealthChanged), Z_Construct_UDelegateFunction_Aura_OnHealthChangedSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_OnHealthChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_OnHealthChanged_MetaData)) }; // 2613838914
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_OnMaxHealthChanged_MetaData[] = {
		{ "Category", "GAS|Attributes" },
		{ "ModuleRelativePath", "Public/UI/WidgetController/OverlayWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_OnMaxHealthChanged = { "OnMaxHealthChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOverlayWidgetController, OnMaxHealthChanged), Z_Construct_UDelegateFunction_Aura_OnMaxHealthChangedSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_OnMaxHealthChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_OnMaxHealthChanged_MetaData)) }; // 1198787525
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOverlayWidgetController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_OnHealthChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOverlayWidgetController_Statics::NewProp_OnMaxHealthChanged,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOverlayWidgetController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOverlayWidgetController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOverlayWidgetController_Statics::ClassParams = {
		&UOverlayWidgetController::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOverlayWidgetController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOverlayWidgetController_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOverlayWidgetController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOverlayWidgetController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOverlayWidgetController()
	{
		if (!Z_Registration_Info_UClass_UOverlayWidgetController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOverlayWidgetController.OuterSingleton, Z_Construct_UClass_UOverlayWidgetController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOverlayWidgetController.OuterSingleton;
	}
	template<> AURA_API UClass* StaticClass<UOverlayWidgetController>()
	{
		return UOverlayWidgetController::StaticClass();
	}
	UOverlayWidgetController::UOverlayWidgetController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOverlayWidgetController);
	UOverlayWidgetController::~UOverlayWidgetController() {}
	struct Z_CompiledInDeferFile_FID_Users_Luisl_OneDrive_Escritorio_AuraRPG_Aura_Source_Aura_Public_UI_WidgetController_OverlayWidgetController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Luisl_OneDrive_Escritorio_AuraRPG_Aura_Source_Aura_Public_UI_WidgetController_OverlayWidgetController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOverlayWidgetController, UOverlayWidgetController::StaticClass, TEXT("UOverlayWidgetController"), &Z_Registration_Info_UClass_UOverlayWidgetController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOverlayWidgetController), 901159007U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Luisl_OneDrive_Escritorio_AuraRPG_Aura_Source_Aura_Public_UI_WidgetController_OverlayWidgetController_h_1500158938(TEXT("/Script/Aura"),
		Z_CompiledInDeferFile_FID_Users_Luisl_OneDrive_Escritorio_AuraRPG_Aura_Source_Aura_Public_UI_WidgetController_OverlayWidgetController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Luisl_OneDrive_Escritorio_AuraRPG_Aura_Source_Aura_Public_UI_WidgetController_OverlayWidgetController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

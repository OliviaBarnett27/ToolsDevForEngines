// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ToolsDevForEngines/Public/W_GenerateButton.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeW_GenerateButton() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AVolume_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
TOOLSDEVFORENGINES_API UClass* Z_Construct_UClass_UW_GenerateButton();
TOOLSDEVFORENGINES_API UClass* Z_Construct_UClass_UW_GenerateButton_NoRegister();
TOOLSDEVFORENGINES_API UFunction* Z_Construct_UDelegateFunction_ToolsDevForEngines_OnGenerateButtonClickedSignature__DelegateSignature();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_ToolsDevForEngines();
// End Cross Module References

// Begin Delegate FOnGenerateButtonClickedSignature
struct Z_Construct_UDelegateFunction_ToolsDevForEngines_OnGenerateButtonClickedSignature__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/W_GenerateButton.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ToolsDevForEngines_OnGenerateButtonClickedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ToolsDevForEngines, nullptr, "OnGenerateButtonClickedSignature__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ToolsDevForEngines_OnGenerateButtonClickedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ToolsDevForEngines_OnGenerateButtonClickedSignature__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_ToolsDevForEngines_OnGenerateButtonClickedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ToolsDevForEngines_OnGenerateButtonClickedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnGenerateButtonClickedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnGenerateButtonClickedSignature)
{
	OnGenerateButtonClickedSignature.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnGenerateButtonClickedSignature

// Begin Class UW_GenerateButton Function FindVolumeByClass
struct Z_Construct_UFunction_UW_GenerateButton_FindVolumeByClass_Statics
{
	struct W_GenerateButton_eventFindVolumeByClass_Parms
	{
		UWorld* World;
		TSubclassOf<AVolume> VolumeClass;
		TArray<AVolume*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/W_GenerateButton.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FClassPropertyParams NewProp_VolumeClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UW_GenerateButton_FindVolumeByClass_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(W_GenerateButton_eventFindVolumeByClass_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UW_GenerateButton_FindVolumeByClass_Statics::NewProp_VolumeClass = { "VolumeClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(W_GenerateButton_eventFindVolumeByClass_Parms, VolumeClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AVolume_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UW_GenerateButton_FindVolumeByClass_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AVolume_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UW_GenerateButton_FindVolumeByClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(W_GenerateButton_eventFindVolumeByClass_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UW_GenerateButton_FindVolumeByClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UW_GenerateButton_FindVolumeByClass_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UW_GenerateButton_FindVolumeByClass_Statics::NewProp_VolumeClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UW_GenerateButton_FindVolumeByClass_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UW_GenerateButton_FindVolumeByClass_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UW_GenerateButton_FindVolumeByClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UW_GenerateButton_FindVolumeByClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UW_GenerateButton, nullptr, "FindVolumeByClass", nullptr, nullptr, Z_Construct_UFunction_UW_GenerateButton_FindVolumeByClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UW_GenerateButton_FindVolumeByClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UW_GenerateButton_FindVolumeByClass_Statics::W_GenerateButton_eventFindVolumeByClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UW_GenerateButton_FindVolumeByClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UW_GenerateButton_FindVolumeByClass_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UW_GenerateButton_FindVolumeByClass_Statics::W_GenerateButton_eventFindVolumeByClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UW_GenerateButton_FindVolumeByClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UW_GenerateButton_FindVolumeByClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UW_GenerateButton::execFindVolumeByClass)
{
	P_GET_OBJECT(UWorld,Z_Param_World);
	P_GET_OBJECT(UClass,Z_Param_VolumeClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<AVolume*>*)Z_Param__Result=UW_GenerateButton::FindVolumeByClass(Z_Param_World,Z_Param_VolumeClass);
	P_NATIVE_END;
}
// End Class UW_GenerateButton Function FindVolumeByClass

// Begin Class UW_GenerateButton Function GetDataTable
struct Z_Construct_UFunction_UW_GenerateButton_GetDataTable_Statics
{
	struct W_GenerateButton_eventGetDataTable_Parms
	{
		UDataTable* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/W_GenerateButton.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UW_GenerateButton_GetDataTable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(W_GenerateButton_eventGetDataTable_Parms, ReturnValue), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UW_GenerateButton_GetDataTable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UW_GenerateButton_GetDataTable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UW_GenerateButton_GetDataTable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UW_GenerateButton_GetDataTable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UW_GenerateButton, nullptr, "GetDataTable", nullptr, nullptr, Z_Construct_UFunction_UW_GenerateButton_GetDataTable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UW_GenerateButton_GetDataTable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UW_GenerateButton_GetDataTable_Statics::W_GenerateButton_eventGetDataTable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UW_GenerateButton_GetDataTable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UW_GenerateButton_GetDataTable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UW_GenerateButton_GetDataTable_Statics::W_GenerateButton_eventGetDataTable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UW_GenerateButton_GetDataTable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UW_GenerateButton_GetDataTable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UW_GenerateButton::execGetDataTable)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UDataTable**)Z_Param__Result=P_THIS->GetDataTable();
	P_NATIVE_END;
}
// End Class UW_GenerateButton Function GetDataTable

// Begin Class UW_GenerateButton Function OnGenerateButtonClicked
struct Z_Construct_UFunction_UW_GenerateButton_OnGenerateButtonClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/W_GenerateButton.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UW_GenerateButton_OnGenerateButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UW_GenerateButton, nullptr, "OnGenerateButtonClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UW_GenerateButton_OnGenerateButtonClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UW_GenerateButton_OnGenerateButtonClicked_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UW_GenerateButton_OnGenerateButtonClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UW_GenerateButton_OnGenerateButtonClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UW_GenerateButton::execOnGenerateButtonClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnGenerateButtonClicked();
	P_NATIVE_END;
}
// End Class UW_GenerateButton Function OnGenerateButtonClicked

// Begin Class UW_GenerateButton
void UW_GenerateButton::StaticRegisterNativesUW_GenerateButton()
{
	UClass* Class = UW_GenerateButton::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "FindVolumeByClass", &UW_GenerateButton::execFindVolumeByClass },
		{ "GetDataTable", &UW_GenerateButton::execGetDataTable },
		{ "OnGenerateButtonClicked", &UW_GenerateButton::execOnGenerateButtonClicked },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UW_GenerateButton);
UClass* Z_Construct_UClass_UW_GenerateButton_NoRegister()
{
	return UW_GenerateButton::StaticClass();
}
struct Z_Construct_UClass_UW_GenerateButton_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "W_GenerateButton.h" },
		{ "ModuleRelativePath", "Public/W_GenerateButton.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MyButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/W_GenerateButton.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/W_GenerateButton.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnGenerateButtonClickedDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/W_GenerateButton.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeatherDataTable_MetaData[] = {
		{ "Category", "W_GenerateButton" },
		{ "ModuleRelativePath", "Public/W_GenerateButton.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MyButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Text;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGenerateButtonClickedDelegate;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WeatherDataTable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UW_GenerateButton_FindVolumeByClass, "FindVolumeByClass" }, // 1993767434
		{ &Z_Construct_UFunction_UW_GenerateButton_GetDataTable, "GetDataTable" }, // 3953196456
		{ &Z_Construct_UFunction_UW_GenerateButton_OnGenerateButtonClicked, "OnGenerateButtonClicked" }, // 4128125043
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UW_GenerateButton>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UW_GenerateButton_Statics::NewProp_MyButton = { "MyButton", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UW_GenerateButton, MyButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MyButton_MetaData), NewProp_MyButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UW_GenerateButton_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UW_GenerateButton, Text), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_MetaData), NewProp_Text_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UW_GenerateButton_Statics::NewProp_OnGenerateButtonClickedDelegate = { "OnGenerateButtonClickedDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UW_GenerateButton, OnGenerateButtonClickedDelegate), Z_Construct_UDelegateFunction_ToolsDevForEngines_OnGenerateButtonClickedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnGenerateButtonClickedDelegate_MetaData), NewProp_OnGenerateButtonClickedDelegate_MetaData) }; // 3762991163
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UW_GenerateButton_Statics::NewProp_WeatherDataTable = { "WeatherDataTable", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UW_GenerateButton, WeatherDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeatherDataTable_MetaData), NewProp_WeatherDataTable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UW_GenerateButton_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UW_GenerateButton_Statics::NewProp_MyButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UW_GenerateButton_Statics::NewProp_Text,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UW_GenerateButton_Statics::NewProp_OnGenerateButtonClickedDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UW_GenerateButton_Statics::NewProp_WeatherDataTable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UW_GenerateButton_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UW_GenerateButton_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_ToolsDevForEngines,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UW_GenerateButton_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UW_GenerateButton_Statics::ClassParams = {
	&UW_GenerateButton::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UW_GenerateButton_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UW_GenerateButton_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UW_GenerateButton_Statics::Class_MetaDataParams), Z_Construct_UClass_UW_GenerateButton_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UW_GenerateButton()
{
	if (!Z_Registration_Info_UClass_UW_GenerateButton.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UW_GenerateButton.OuterSingleton, Z_Construct_UClass_UW_GenerateButton_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UW_GenerateButton.OuterSingleton;
}
template<> TOOLSDEVFORENGINES_API UClass* StaticClass<UW_GenerateButton>()
{
	return UW_GenerateButton::StaticClass();
}
UW_GenerateButton::UW_GenerateButton(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UW_GenerateButton);
UW_GenerateButton::~UW_GenerateButton() {}
// End Class UW_GenerateButton

// Begin Registration
struct Z_CompiledInDeferFile_FID_C_Documents_GitHub_ToolsDevForEngines_ToolsDevForEngines_Source_ToolsDevForEngines_Public_W_GenerateButton_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UW_GenerateButton, UW_GenerateButton::StaticClass, TEXT("UW_GenerateButton"), &Z_Registration_Info_UClass_UW_GenerateButton, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UW_GenerateButton), 3401375459U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_C_Documents_GitHub_ToolsDevForEngines_ToolsDevForEngines_Source_ToolsDevForEngines_Public_W_GenerateButton_h_607206148(TEXT("/Script/ToolsDevForEngines"),
	Z_CompiledInDeferFile_FID_C_Documents_GitHub_ToolsDevForEngines_ToolsDevForEngines_Source_ToolsDevForEngines_Public_W_GenerateButton_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_C_Documents_GitHub_ToolsDevForEngines_ToolsDevForEngines_Source_ToolsDevForEngines_Public_W_GenerateButton_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

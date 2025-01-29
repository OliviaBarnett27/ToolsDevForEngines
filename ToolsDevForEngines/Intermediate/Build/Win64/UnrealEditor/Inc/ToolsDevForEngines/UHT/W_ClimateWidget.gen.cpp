// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ToolsDevForEngines/Public/W_ClimateWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeW_ClimateWidget() {}

// Begin Cross Module References
TOOLSDEVFORENGINES_API UClass* Z_Construct_UClass_UW_ClimateWidget();
TOOLSDEVFORENGINES_API UClass* Z_Construct_UClass_UW_ClimateWidget_NoRegister();
TOOLSDEVFORENGINES_API UFunction* Z_Construct_UDelegateFunction_ToolsDevForEngines_OnClimateClearButtonClickedSignature__DelegateSignature();
UMG_API UClass* Z_Construct_UClass_UBorder_NoRegister();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UComboBoxString_NoRegister();
UMG_API UClass* Z_Construct_UClass_USpacer_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UMG_API UClass* Z_Construct_UClass_UVerticalBox_NoRegister();
UPackage* Z_Construct_UPackage__Script_ToolsDevForEngines();
// End Cross Module References

// Begin Delegate FOnClimateClearButtonClickedSignature
struct Z_Construct_UDelegateFunction_ToolsDevForEngines_OnClimateClearButtonClickedSignature__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/W_ClimateWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ToolsDevForEngines_OnClimateClearButtonClickedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ToolsDevForEngines, nullptr, "OnClimateClearButtonClickedSignature__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ToolsDevForEngines_OnClimateClearButtonClickedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ToolsDevForEngines_OnClimateClearButtonClickedSignature__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_ToolsDevForEngines_OnClimateClearButtonClickedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ToolsDevForEngines_OnClimateClearButtonClickedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnClimateClearButtonClickedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnClimateClearButtonClickedSignature)
{
	OnClimateClearButtonClickedSignature.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnClimateClearButtonClickedSignature

// Begin Class UW_ClimateWidget Function ClearComboBoxSelection
struct Z_Construct_UFunction_UW_ClimateWidget_ClearComboBoxSelection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/W_ClimateWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UW_ClimateWidget_ClearComboBoxSelection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UW_ClimateWidget, nullptr, "ClearComboBoxSelection", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UW_ClimateWidget_ClearComboBoxSelection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UW_ClimateWidget_ClearComboBoxSelection_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UW_ClimateWidget_ClearComboBoxSelection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UW_ClimateWidget_ClearComboBoxSelection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UW_ClimateWidget::execClearComboBoxSelection)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearComboBoxSelection();
	P_NATIVE_END;
}
// End Class UW_ClimateWidget Function ClearComboBoxSelection

// Begin Class UW_ClimateWidget
void UW_ClimateWidget::StaticRegisterNativesUW_ClimateWidget()
{
	UClass* Class = UW_ClimateWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ClearComboBoxSelection", &UW_ClimateWidget::execClearComboBoxSelection },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UW_ClimateWidget);
UClass* Z_Construct_UClass_UW_ClimateWidget_NoRegister()
{
	return UW_ClimateWidget::StaticClass();
}
struct Z_Construct_UClass_UW_ClimateWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "W_ClimateWidget.h" },
		{ "ModuleRelativePath", "Public/W_ClimateWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VerticalBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/W_ClimateWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/W_ClimateWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MyComboBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/W_ClimateWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Spacer_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/W_ClimateWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClearButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/W_ClimateWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ButtonText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/W_ClimateWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Border_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/W_ClimateWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnClimateClearButtonClickedDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/W_ClimateWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VerticalBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Title;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MyComboBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Spacer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ClearButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ButtonText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Border;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnClimateClearButtonClickedDelegate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UW_ClimateWidget_ClearComboBoxSelection, "ClearComboBoxSelection" }, // 3080655307
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UW_ClimateWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UW_ClimateWidget_Statics::NewProp_VerticalBox = { "VerticalBox", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UW_ClimateWidget, VerticalBox), Z_Construct_UClass_UVerticalBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VerticalBox_MetaData), NewProp_VerticalBox_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UW_ClimateWidget_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UW_ClimateWidget, Title), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Title_MetaData), NewProp_Title_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UW_ClimateWidget_Statics::NewProp_MyComboBox = { "MyComboBox", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UW_ClimateWidget, MyComboBox), Z_Construct_UClass_UComboBoxString_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MyComboBox_MetaData), NewProp_MyComboBox_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UW_ClimateWidget_Statics::NewProp_Spacer = { "Spacer", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UW_ClimateWidget, Spacer), Z_Construct_UClass_USpacer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Spacer_MetaData), NewProp_Spacer_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UW_ClimateWidget_Statics::NewProp_ClearButton = { "ClearButton", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UW_ClimateWidget, ClearButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClearButton_MetaData), NewProp_ClearButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UW_ClimateWidget_Statics::NewProp_ButtonText = { "ButtonText", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UW_ClimateWidget, ButtonText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ButtonText_MetaData), NewProp_ButtonText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UW_ClimateWidget_Statics::NewProp_Border = { "Border", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UW_ClimateWidget, Border), Z_Construct_UClass_UBorder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Border_MetaData), NewProp_Border_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UW_ClimateWidget_Statics::NewProp_OnClimateClearButtonClickedDelegate = { "OnClimateClearButtonClickedDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UW_ClimateWidget, OnClimateClearButtonClickedDelegate), Z_Construct_UDelegateFunction_ToolsDevForEngines_OnClimateClearButtonClickedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnClimateClearButtonClickedDelegate_MetaData), NewProp_OnClimateClearButtonClickedDelegate_MetaData) }; // 2161328377
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UW_ClimateWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UW_ClimateWidget_Statics::NewProp_VerticalBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UW_ClimateWidget_Statics::NewProp_Title,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UW_ClimateWidget_Statics::NewProp_MyComboBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UW_ClimateWidget_Statics::NewProp_Spacer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UW_ClimateWidget_Statics::NewProp_ClearButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UW_ClimateWidget_Statics::NewProp_ButtonText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UW_ClimateWidget_Statics::NewProp_Border,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UW_ClimateWidget_Statics::NewProp_OnClimateClearButtonClickedDelegate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UW_ClimateWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UW_ClimateWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_ToolsDevForEngines,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UW_ClimateWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UW_ClimateWidget_Statics::ClassParams = {
	&UW_ClimateWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UW_ClimateWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UW_ClimateWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UW_ClimateWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UW_ClimateWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UW_ClimateWidget()
{
	if (!Z_Registration_Info_UClass_UW_ClimateWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UW_ClimateWidget.OuterSingleton, Z_Construct_UClass_UW_ClimateWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UW_ClimateWidget.OuterSingleton;
}
template<> TOOLSDEVFORENGINES_API UClass* StaticClass<UW_ClimateWidget>()
{
	return UW_ClimateWidget::StaticClass();
}
UW_ClimateWidget::UW_ClimateWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UW_ClimateWidget);
UW_ClimateWidget::~UW_ClimateWidget() {}
// End Class UW_ClimateWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_b013728n_Documents_GitHub_ToolsDevForEngines_ToolsDevForEngines_Source_ToolsDevForEngines_Public_W_ClimateWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UW_ClimateWidget, UW_ClimateWidget::StaticClass, TEXT("UW_ClimateWidget"), &Z_Registration_Info_UClass_UW_ClimateWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UW_ClimateWidget), 149791260U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_b013728n_Documents_GitHub_ToolsDevForEngines_ToolsDevForEngines_Source_ToolsDevForEngines_Public_W_ClimateWidget_h_2328631143(TEXT("/Script/ToolsDevForEngines"),
	Z_CompiledInDeferFile_FID_Users_b013728n_Documents_GitHub_ToolsDevForEngines_ToolsDevForEngines_Source_ToolsDevForEngines_Public_W_ClimateWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_b013728n_Documents_GitHub_ToolsDevForEngines_ToolsDevForEngines_Source_ToolsDevForEngines_Public_W_ClimateWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

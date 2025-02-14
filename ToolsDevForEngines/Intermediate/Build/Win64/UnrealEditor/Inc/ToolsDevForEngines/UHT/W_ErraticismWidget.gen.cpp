// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ToolsDevForEngines/Public/W_ErraticismWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeW_ErraticismWidget() {}

// Begin Cross Module References
TOOLSDEVFORENGINES_API UClass* Z_Construct_UClass_UW_ErraticismWidget();
TOOLSDEVFORENGINES_API UClass* Z_Construct_UClass_UW_ErraticismWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UHorizontalBox_NoRegister();
UMG_API UClass* Z_Construct_UClass_USpacer_NoRegister();
UMG_API UClass* Z_Construct_UClass_USpinBox_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_ToolsDevForEngines();
// End Cross Module References

// Begin Class UW_ErraticismWidget
void UW_ErraticismWidget::StaticRegisterNativesUW_ErraticismWidget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UW_ErraticismWidget);
UClass* Z_Construct_UClass_UW_ErraticismWidget_NoRegister()
{
	return UW_ErraticismWidget::StaticClass();
}
struct Z_Construct_UClass_UW_ErraticismWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "W_ErraticismWidget.h" },
		{ "ModuleRelativePath", "Public/W_ErraticismWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HorizontalBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/W_ErraticismWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/W_ErraticismWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MySpinBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/W_ErraticismWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Spacer_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/W_ErraticismWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HorizontalBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Title;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MySpinBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Spacer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UW_ErraticismWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UW_ErraticismWidget_Statics::NewProp_HorizontalBox = { "HorizontalBox", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UW_ErraticismWidget, HorizontalBox), Z_Construct_UClass_UHorizontalBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HorizontalBox_MetaData), NewProp_HorizontalBox_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UW_ErraticismWidget_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UW_ErraticismWidget, Title), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Title_MetaData), NewProp_Title_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UW_ErraticismWidget_Statics::NewProp_MySpinBox = { "MySpinBox", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UW_ErraticismWidget, MySpinBox), Z_Construct_UClass_USpinBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MySpinBox_MetaData), NewProp_MySpinBox_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UW_ErraticismWidget_Statics::NewProp_Spacer = { "Spacer", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UW_ErraticismWidget, Spacer), Z_Construct_UClass_USpacer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Spacer_MetaData), NewProp_Spacer_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UW_ErraticismWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UW_ErraticismWidget_Statics::NewProp_HorizontalBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UW_ErraticismWidget_Statics::NewProp_Title,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UW_ErraticismWidget_Statics::NewProp_MySpinBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UW_ErraticismWidget_Statics::NewProp_Spacer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UW_ErraticismWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UW_ErraticismWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_ToolsDevForEngines,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UW_ErraticismWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UW_ErraticismWidget_Statics::ClassParams = {
	&UW_ErraticismWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UW_ErraticismWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UW_ErraticismWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UW_ErraticismWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UW_ErraticismWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UW_ErraticismWidget()
{
	if (!Z_Registration_Info_UClass_UW_ErraticismWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UW_ErraticismWidget.OuterSingleton, Z_Construct_UClass_UW_ErraticismWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UW_ErraticismWidget.OuterSingleton;
}
template<> TOOLSDEVFORENGINES_API UClass* StaticClass<UW_ErraticismWidget>()
{
	return UW_ErraticismWidget::StaticClass();
}
UW_ErraticismWidget::UW_ErraticismWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UW_ErraticismWidget);
UW_ErraticismWidget::~UW_ErraticismWidget() {}
// End Class UW_ErraticismWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_b013728n_Documents_GitHub_ToolsDevForEngines_ToolsDevForEngines_Source_ToolsDevForEngines_Public_W_ErraticismWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UW_ErraticismWidget, UW_ErraticismWidget::StaticClass, TEXT("UW_ErraticismWidget"), &Z_Registration_Info_UClass_UW_ErraticismWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UW_ErraticismWidget), 70054945U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_b013728n_Documents_GitHub_ToolsDevForEngines_ToolsDevForEngines_Source_ToolsDevForEngines_Public_W_ErraticismWidget_h_524652777(TEXT("/Script/ToolsDevForEngines"),
	Z_CompiledInDeferFile_FID_Users_b013728n_Documents_GitHub_ToolsDevForEngines_ToolsDevForEngines_Source_ToolsDevForEngines_Public_W_ErraticismWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_b013728n_Documents_GitHub_ToolsDevForEngines_ToolsDevForEngines_Source_ToolsDevForEngines_Public_W_ErraticismWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ToolsDevForEngines/Public/EUW_WeatherSelector.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEUW_WeatherSelector() {}

// Begin Cross Module References
BLUTILITY_API UClass* Z_Construct_UClass_UEditorUtilityWidget();
TOOLSDEVFORENGINES_API UClass* Z_Construct_UClass_UEUW_WeatherSelector();
TOOLSDEVFORENGINES_API UClass* Z_Construct_UClass_UEUW_WeatherSelector_NoRegister();
UPackage* Z_Construct_UPackage__Script_ToolsDevForEngines();
// End Cross Module References

// Begin Class UEUW_WeatherSelector
void UEUW_WeatherSelector::StaticRegisterNativesUEUW_WeatherSelector()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEUW_WeatherSelector);
UClass* Z_Construct_UClass_UEUW_WeatherSelector_NoRegister()
{
	return UEUW_WeatherSelector::StaticClass();
}
struct Z_Construct_UClass_UEUW_WeatherSelector_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "EUW_WeatherSelector.h" },
		{ "ModuleRelativePath", "Public/EUW_WeatherSelector.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEUW_WeatherSelector>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEUW_WeatherSelector_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEditorUtilityWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_ToolsDevForEngines,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEUW_WeatherSelector_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEUW_WeatherSelector_Statics::ClassParams = {
	&UEUW_WeatherSelector::StaticClass,
	"Editor",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEUW_WeatherSelector_Statics::Class_MetaDataParams), Z_Construct_UClass_UEUW_WeatherSelector_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEUW_WeatherSelector()
{
	if (!Z_Registration_Info_UClass_UEUW_WeatherSelector.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEUW_WeatherSelector.OuterSingleton, Z_Construct_UClass_UEUW_WeatherSelector_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEUW_WeatherSelector.OuterSingleton;
}
template<> TOOLSDEVFORENGINES_API UClass* StaticClass<UEUW_WeatherSelector>()
{
	return UEUW_WeatherSelector::StaticClass();
}
UEUW_WeatherSelector::UEUW_WeatherSelector(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEUW_WeatherSelector);
UEUW_WeatherSelector::~UEUW_WeatherSelector() {}
// End Class UEUW_WeatherSelector

// Begin Registration
struct Z_CompiledInDeferFile_FID_C_Documents_GitHub_ToolsDevForEngines_ToolsDevForEngines_Source_ToolsDevForEngines_Public_EUW_WeatherSelector_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEUW_WeatherSelector, UEUW_WeatherSelector::StaticClass, TEXT("UEUW_WeatherSelector"), &Z_Registration_Info_UClass_UEUW_WeatherSelector, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEUW_WeatherSelector), 737265386U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_C_Documents_GitHub_ToolsDevForEngines_ToolsDevForEngines_Source_ToolsDevForEngines_Public_EUW_WeatherSelector_h_1197295204(TEXT("/Script/ToolsDevForEngines"),
	Z_CompiledInDeferFile_FID_C_Documents_GitHub_ToolsDevForEngines_ToolsDevForEngines_Source_ToolsDevForEngines_Public_EUW_WeatherSelector_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_C_Documents_GitHub_ToolsDevForEngines_ToolsDevForEngines_Source_ToolsDevForEngines_Public_EUW_WeatherSelector_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

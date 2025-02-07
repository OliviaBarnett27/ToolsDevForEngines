// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ToolsDevForEngines/Public/DayNightCycle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDayNightCycle() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ADirectionalLight_NoRegister();
TOOLSDEVFORENGINES_API UClass* Z_Construct_UClass_ADayNightCycle();
TOOLSDEVFORENGINES_API UClass* Z_Construct_UClass_ADayNightCycle_NoRegister();
UPackage* Z_Construct_UPackage__Script_ToolsDevForEngines();
// End Cross Module References

// Begin Class ADayNightCycle
void ADayNightCycle::StaticRegisterNativesADayNightCycle()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADayNightCycle);
UClass* Z_Construct_UClass_ADayNightCycle_NoRegister()
{
	return ADayNightCycle::StaticClass();
}
struct Z_Construct_UClass_ADayNightCycle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "DayNightCycle.h" },
		{ "ModuleRelativePath", "Public/DayNightCycle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_sun_MetaData[] = {
		{ "Category", "DayNightCycle" },
		{ "ModuleRelativePath", "Public/DayNightCycle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_lightSource_MetaData[] = {
		{ "Category", "DayNightCycle" },
		{ "ModuleRelativePath", "Public/DayNightCycle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_turnRate_MetaData[] = {
		{ "Category", "DayNightCycle" },
		{ "ModuleRelativePath", "Public/DayNightCycle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_enableDayNightCycle_MetaData[] = {
		{ "Category", "DayNightCycle" },
		{ "ModuleRelativePath", "Public/DayNightCycle.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_sun;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_lightSource;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_turnRate;
	static void NewProp_enableDayNightCycle_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_enableDayNightCycle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADayNightCycle>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADayNightCycle_Statics::NewProp_sun = { "sun", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADayNightCycle, sun), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_sun_MetaData), NewProp_sun_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADayNightCycle_Statics::NewProp_lightSource = { "lightSource", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADayNightCycle, lightSource), Z_Construct_UClass_ADirectionalLight_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_lightSource_MetaData), NewProp_lightSource_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADayNightCycle_Statics::NewProp_turnRate = { "turnRate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADayNightCycle, turnRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_turnRate_MetaData), NewProp_turnRate_MetaData) };
void Z_Construct_UClass_ADayNightCycle_Statics::NewProp_enableDayNightCycle_SetBit(void* Obj)
{
	((ADayNightCycle*)Obj)->enableDayNightCycle = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADayNightCycle_Statics::NewProp_enableDayNightCycle = { "enableDayNightCycle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ADayNightCycle), &Z_Construct_UClass_ADayNightCycle_Statics::NewProp_enableDayNightCycle_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_enableDayNightCycle_MetaData), NewProp_enableDayNightCycle_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADayNightCycle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADayNightCycle_Statics::NewProp_sun,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADayNightCycle_Statics::NewProp_lightSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADayNightCycle_Statics::NewProp_turnRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADayNightCycle_Statics::NewProp_enableDayNightCycle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADayNightCycle_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADayNightCycle_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_ToolsDevForEngines,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADayNightCycle_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADayNightCycle_Statics::ClassParams = {
	&ADayNightCycle::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ADayNightCycle_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ADayNightCycle_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADayNightCycle_Statics::Class_MetaDataParams), Z_Construct_UClass_ADayNightCycle_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADayNightCycle()
{
	if (!Z_Registration_Info_UClass_ADayNightCycle.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADayNightCycle.OuterSingleton, Z_Construct_UClass_ADayNightCycle_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADayNightCycle.OuterSingleton;
}
template<> TOOLSDEVFORENGINES_API UClass* StaticClass<ADayNightCycle>()
{
	return ADayNightCycle::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADayNightCycle);
ADayNightCycle::~ADayNightCycle() {}
// End Class ADayNightCycle

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_b013728n_Documents_GitHub_ToolsDevForEngines_ToolsDevForEngines_Source_ToolsDevForEngines_Public_DayNightCycle_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADayNightCycle, ADayNightCycle::StaticClass, TEXT("ADayNightCycle"), &Z_Registration_Info_UClass_ADayNightCycle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADayNightCycle), 2549631451U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_b013728n_Documents_GitHub_ToolsDevForEngines_ToolsDevForEngines_Source_ToolsDevForEngines_Public_DayNightCycle_h_4067340147(TEXT("/Script/ToolsDevForEngines"),
	Z_CompiledInDeferFile_FID_Users_b013728n_Documents_GitHub_ToolsDevForEngines_ToolsDevForEngines_Source_ToolsDevForEngines_Public_DayNightCycle_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_b013728n_Documents_GitHub_ToolsDevForEngines_ToolsDevForEngines_Source_ToolsDevForEngines_Public_DayNightCycle_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

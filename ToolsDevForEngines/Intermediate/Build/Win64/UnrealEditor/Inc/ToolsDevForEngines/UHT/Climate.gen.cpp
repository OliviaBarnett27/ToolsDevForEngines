// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ToolsDevForEngines/Climate.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClimate() {}

// Begin Cross Module References
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
TOOLSDEVFORENGINES_API UScriptStruct* Z_Construct_UScriptStruct_FClimate();
UPackage* Z_Construct_UPackage__Script_ToolsDevForEngines();
// End Cross Module References

// Begin ScriptStruct FClimate
static_assert(std::is_polymorphic<FClimate>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FClimate cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Climate;
class UScriptStruct* FClimate::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Climate.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Climate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FClimate, (UObject*)Z_Construct_UPackage__Script_ToolsDevForEngines(), TEXT("Climate"));
	}
	return Z_Registration_Info_UScriptStruct_Climate.OuterSingleton;
}
template<> TOOLSDEVFORENGINES_API UScriptStruct* StaticStruct<FClimate>()
{
	return FClimate::StaticStruct();
}
struct Z_Construct_UScriptStruct_FClimate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Climate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SnowMin_MetaData[] = {
		{ "Category", "Weather" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Optional Category\n" },
#endif
		{ "ModuleRelativePath", "Climate.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional Category" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SnowMax_MetaData[] = {
		{ "Category", "Weather" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Optional Category\n" },
#endif
		{ "ModuleRelativePath", "Climate.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional Category" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RainMin_MetaData[] = {
		{ "Category", "Weather" },
		{ "ModuleRelativePath", "Climate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RainMax_MetaData[] = {
		{ "Category", "Weather" },
		{ "ModuleRelativePath", "Climate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WindMin_MetaData[] = {
		{ "Category", "Weather" },
		{ "ModuleRelativePath", "Climate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WindMax_MetaData[] = {
		{ "Category", "Weather" },
		{ "ModuleRelativePath", "Climate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CloudMin_MetaData[] = {
		{ "Category", "Weather" },
		{ "ModuleRelativePath", "Climate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CloudMax_MetaData[] = {
		{ "Category", "Weather" },
		{ "ModuleRelativePath", "Climate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Fog_MetaData[] = {
		{ "Category", "Weather" },
		{ "ModuleRelativePath", "Climate.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SnowMin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SnowMax;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RainMin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RainMax;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WindMin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WindMax;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CloudMin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CloudMax;
	static void NewProp_Fog_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Fog;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClimate>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClimate_Statics::NewProp_SnowMin = { "SnowMin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClimate, SnowMin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SnowMin_MetaData), NewProp_SnowMin_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClimate_Statics::NewProp_SnowMax = { "SnowMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClimate, SnowMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SnowMax_MetaData), NewProp_SnowMax_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClimate_Statics::NewProp_RainMin = { "RainMin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClimate, RainMin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RainMin_MetaData), NewProp_RainMin_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClimate_Statics::NewProp_RainMax = { "RainMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClimate, RainMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RainMax_MetaData), NewProp_RainMax_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClimate_Statics::NewProp_WindMin = { "WindMin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClimate, WindMin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WindMin_MetaData), NewProp_WindMin_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClimate_Statics::NewProp_WindMax = { "WindMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClimate, WindMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WindMax_MetaData), NewProp_WindMax_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClimate_Statics::NewProp_CloudMin = { "CloudMin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClimate, CloudMin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CloudMin_MetaData), NewProp_CloudMin_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClimate_Statics::NewProp_CloudMax = { "CloudMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClimate, CloudMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CloudMax_MetaData), NewProp_CloudMax_MetaData) };
void Z_Construct_UScriptStruct_FClimate_Statics::NewProp_Fog_SetBit(void* Obj)
{
	((FClimate*)Obj)->Fog = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FClimate_Statics::NewProp_Fog = { "Fog", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FClimate), &Z_Construct_UScriptStruct_FClimate_Statics::NewProp_Fog_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Fog_MetaData), NewProp_Fog_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClimate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClimate_Statics::NewProp_SnowMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClimate_Statics::NewProp_SnowMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClimate_Statics::NewProp_RainMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClimate_Statics::NewProp_RainMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClimate_Statics::NewProp_WindMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClimate_Statics::NewProp_WindMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClimate_Statics::NewProp_CloudMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClimate_Statics::NewProp_CloudMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClimate_Statics::NewProp_Fog,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClimate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClimate_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ToolsDevForEngines,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"Climate",
	Z_Construct_UScriptStruct_FClimate_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClimate_Statics::PropPointers),
	sizeof(FClimate),
	alignof(FClimate),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClimate_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FClimate_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FClimate()
{
	if (!Z_Registration_Info_UScriptStruct_Climate.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Climate.InnerSingleton, Z_Construct_UScriptStruct_FClimate_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_Climate.InnerSingleton;
}
// End ScriptStruct FClimate

// Begin Registration
struct Z_CompiledInDeferFile_FID_C_Documents_GitHub_ToolsDevForEngines_ToolsDevForEngines_Source_ToolsDevForEngines_Climate_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FClimate::StaticStruct, Z_Construct_UScriptStruct_FClimate_Statics::NewStructOps, TEXT("Climate"), &Z_Registration_Info_UScriptStruct_Climate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FClimate), 3898670856U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_C_Documents_GitHub_ToolsDevForEngines_ToolsDevForEngines_Source_ToolsDevForEngines_Climate_h_3346243637(TEXT("/Script/ToolsDevForEngines"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_C_Documents_GitHub_ToolsDevForEngines_ToolsDevForEngines_Source_ToolsDevForEngines_Climate_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_C_Documents_GitHub_ToolsDevForEngines_ToolsDevForEngines_Source_ToolsDevForEngines_Climate_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

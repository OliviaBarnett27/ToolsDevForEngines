// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ToolsDevForEngines/Season.h"
#include "ToolsDevForEngines/Climate.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSeason() {}

// Begin Cross Module References
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
TOOLSDEVFORENGINES_API UScriptStruct* Z_Construct_UScriptStruct_FClimate();
TOOLSDEVFORENGINES_API UScriptStruct* Z_Construct_UScriptStruct_FSeason();
UPackage* Z_Construct_UPackage__Script_ToolsDevForEngines();
// End Cross Module References

// Begin ScriptStruct FSeason
static_assert(std::is_polymorphic<FSeason>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FSeason cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Season;
class UScriptStruct* FSeason::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Season.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Season.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSeason, (UObject*)Z_Construct_UPackage__Script_ToolsDevForEngines(), TEXT("Season"));
	}
	return Z_Registration_Info_UScriptStruct_Season.OuterSingleton;
}
template<> TOOLSDEVFORENGINES_API UScriptStruct* StaticStruct<FSeason>()
{
	return FSeason::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSeason_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Season.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClimateMap_MetaData[] = {
		{ "Category", "Season" },
		{ "ModuleRelativePath", "Season.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ClimateMap_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ClimateMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ClimateMap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSeason>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSeason_Statics::NewProp_ClimateMap_ValueProp = { "ClimateMap", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FClimate, METADATA_PARAMS(0, nullptr) }; // 3898670856
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSeason_Statics::NewProp_ClimateMap_Key_KeyProp = { "ClimateMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FSeason_Statics::NewProp_ClimateMap = { "ClimateMap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSeason, ClimateMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClimateMap_MetaData), NewProp_ClimateMap_MetaData) }; // 3898670856
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSeason_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSeason_Statics::NewProp_ClimateMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSeason_Statics::NewProp_ClimateMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSeason_Statics::NewProp_ClimateMap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSeason_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSeason_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ToolsDevForEngines,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"Season",
	Z_Construct_UScriptStruct_FSeason_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSeason_Statics::PropPointers),
	sizeof(FSeason),
	alignof(FSeason),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSeason_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSeason_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSeason()
{
	if (!Z_Registration_Info_UScriptStruct_Season.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Season.InnerSingleton, Z_Construct_UScriptStruct_FSeason_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_Season.InnerSingleton;
}
// End ScriptStruct FSeason

// Begin Registration
struct Z_CompiledInDeferFile_FID_C_Documents_GitHub_ToolsDevForEngines_ToolsDevForEngines_Source_ToolsDevForEngines_Season_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSeason::StaticStruct, Z_Construct_UScriptStruct_FSeason_Statics::NewStructOps, TEXT("Season"), &Z_Registration_Info_UScriptStruct_Season, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSeason), 65688399U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_C_Documents_GitHub_ToolsDevForEngines_ToolsDevForEngines_Source_ToolsDevForEngines_Season_h_3204966479(TEXT("/Script/ToolsDevForEngines"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_C_Documents_GitHub_ToolsDevForEngines_ToolsDevForEngines_Source_ToolsDevForEngines_Season_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_C_Documents_GitHub_ToolsDevForEngines_ToolsDevForEngines_Source_ToolsDevForEngines_Season_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

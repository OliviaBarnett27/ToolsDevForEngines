// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ToolsDevForEngines/UserWeatherData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUserWeatherData() {}

// Begin Cross Module References
TOOLSDEVFORENGINES_API UScriptStruct* Z_Construct_UScriptStruct_FUserWeatherData();
UPackage* Z_Construct_UPackage__Script_ToolsDevForEngines();
// End Cross Module References

// Begin ScriptStruct FUserWeatherData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UserWeatherData;
class UScriptStruct* FUserWeatherData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UserWeatherData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UserWeatherData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUserWeatherData, (UObject*)Z_Construct_UPackage__Script_ToolsDevForEngines(), TEXT("UserWeatherData"));
	}
	return Z_Registration_Info_UScriptStruct_UserWeatherData.OuterSingleton;
}
template<> TOOLSDEVFORENGINES_API UScriptStruct* StaticStruct<FUserWeatherData>()
{
	return FUserWeatherData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FUserWeatherData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "UserWeatherData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_rainSpawnRate_MetaData[] = {
		{ "Category", "UserWeatherData" },
		{ "ModuleRelativePath", "UserWeatherData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_snowSpawnRate_MetaData[] = {
		{ "Category", "UserWeatherData" },
		{ "ModuleRelativePath", "UserWeatherData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_rainSpawnRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_snowSpawnRate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUserWeatherData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUserWeatherData_Statics::NewProp_rainSpawnRate = { "rainSpawnRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUserWeatherData, rainSpawnRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_rainSpawnRate_MetaData), NewProp_rainSpawnRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUserWeatherData_Statics::NewProp_snowSpawnRate = { "snowSpawnRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUserWeatherData, snowSpawnRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_snowSpawnRate_MetaData), NewProp_snowSpawnRate_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUserWeatherData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserWeatherData_Statics::NewProp_rainSpawnRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserWeatherData_Statics::NewProp_snowSpawnRate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserWeatherData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUserWeatherData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ToolsDevForEngines,
	nullptr,
	&NewStructOps,
	"UserWeatherData",
	Z_Construct_UScriptStruct_FUserWeatherData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserWeatherData_Statics::PropPointers),
	sizeof(FUserWeatherData),
	alignof(FUserWeatherData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserWeatherData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FUserWeatherData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FUserWeatherData()
{
	if (!Z_Registration_Info_UScriptStruct_UserWeatherData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UserWeatherData.InnerSingleton, Z_Construct_UScriptStruct_FUserWeatherData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_UserWeatherData.InnerSingleton;
}
// End ScriptStruct FUserWeatherData

// Begin Registration
struct Z_CompiledInDeferFile_FID_C_Documents_GitHub_ToolsDevForEngines_ToolsDevForEngines_Source_ToolsDevForEngines_UserWeatherData_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FUserWeatherData::StaticStruct, Z_Construct_UScriptStruct_FUserWeatherData_Statics::NewStructOps, TEXT("UserWeatherData"), &Z_Registration_Info_UScriptStruct_UserWeatherData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUserWeatherData), 572177468U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_C_Documents_GitHub_ToolsDevForEngines_ToolsDevForEngines_Source_ToolsDevForEngines_UserWeatherData_h_3522323090(TEXT("/Script/ToolsDevForEngines"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_C_Documents_GitHub_ToolsDevForEngines_ToolsDevForEngines_Source_ToolsDevForEngines_UserWeatherData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_C_Documents_GitHub_ToolsDevForEngines_ToolsDevForEngines_Source_ToolsDevForEngines_UserWeatherData_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

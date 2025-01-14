// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ToolsDevForEngines/Public/Subsystem_WeatherSelector.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSubsystem_WeatherSelector() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
TOOLSDEVFORENGINES_API UClass* Z_Construct_UClass_USubsystem_WeatherSelector();
TOOLSDEVFORENGINES_API UClass* Z_Construct_UClass_USubsystem_WeatherSelector_NoRegister();
TOOLSDEVFORENGINES_API UScriptStruct* Z_Construct_UScriptStruct_FUserInputData();
UPackage* Z_Construct_UPackage__Script_ToolsDevForEngines();
// End Cross Module References

// Begin ScriptStruct FUserInputData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UserInputData;
class UScriptStruct* FUserInputData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UserInputData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UserInputData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUserInputData, (UObject*)Z_Construct_UPackage__Script_ToolsDevForEngines(), TEXT("UserInputData"));
	}
	return Z_Registration_Info_UScriptStruct_UserInputData.OuterSingleton;
}
template<> TOOLSDEVFORENGINES_API UScriptStruct* StaticStruct<FUserInputData>()
{
	return FUserInputData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FUserInputData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Subsystem_WeatherSelector.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Climate_MetaData[] = {
		{ "Category", "WeatherData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//variables\n" },
#endif
		{ "ModuleRelativePath", "Public/Subsystem_WeatherSelector.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "variables" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Season_MetaData[] = {
		{ "Category", "WeatherData" },
		{ "ModuleRelativePath", "Public/Subsystem_WeatherSelector.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BDayNight_MetaData[] = {
		{ "Category", "WeatherData" },
		{ "ModuleRelativePath", "Public/Subsystem_WeatherSelector.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BAudio_MetaData[] = {
		{ "Category", "WeatherData" },
		{ "ModuleRelativePath", "Public/Subsystem_WeatherSelector.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Erraticism_MetaData[] = {
		{ "Category", "WeatherData" },
		{ "ModuleRelativePath", "Public/Subsystem_WeatherSelector.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DayLength_MetaData[] = {
		{ "Category", "WeatherData" },
		{ "ModuleRelativePath", "Public/Subsystem_WeatherSelector.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Climate;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Season;
	static void NewProp_BDayNight_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_BDayNight;
	static void NewProp_BAudio_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_BAudio;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Erraticism;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DayLength;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUserInputData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUserInputData_Statics::NewProp_Climate = { "Climate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUserInputData, Climate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Climate_MetaData), NewProp_Climate_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUserInputData_Statics::NewProp_Season = { "Season", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUserInputData, Season), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Season_MetaData), NewProp_Season_MetaData) };
void Z_Construct_UScriptStruct_FUserInputData_Statics::NewProp_BDayNight_SetBit(void* Obj)
{
	((FUserInputData*)Obj)->BDayNight = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FUserInputData_Statics::NewProp_BDayNight = { "BDayNight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FUserInputData), &Z_Construct_UScriptStruct_FUserInputData_Statics::NewProp_BDayNight_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BDayNight_MetaData), NewProp_BDayNight_MetaData) };
void Z_Construct_UScriptStruct_FUserInputData_Statics::NewProp_BAudio_SetBit(void* Obj)
{
	((FUserInputData*)Obj)->BAudio = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FUserInputData_Statics::NewProp_BAudio = { "BAudio", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FUserInputData), &Z_Construct_UScriptStruct_FUserInputData_Statics::NewProp_BAudio_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BAudio_MetaData), NewProp_BAudio_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUserInputData_Statics::NewProp_Erraticism = { "Erraticism", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUserInputData, Erraticism), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Erraticism_MetaData), NewProp_Erraticism_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUserInputData_Statics::NewProp_DayLength = { "DayLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUserInputData, DayLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DayLength_MetaData), NewProp_DayLength_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUserInputData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserInputData_Statics::NewProp_Climate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserInputData_Statics::NewProp_Season,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserInputData_Statics::NewProp_BDayNight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserInputData_Statics::NewProp_BAudio,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserInputData_Statics::NewProp_Erraticism,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserInputData_Statics::NewProp_DayLength,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserInputData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUserInputData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ToolsDevForEngines,
	nullptr,
	&NewStructOps,
	"UserInputData",
	Z_Construct_UScriptStruct_FUserInputData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserInputData_Statics::PropPointers),
	sizeof(FUserInputData),
	alignof(FUserInputData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserInputData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FUserInputData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FUserInputData()
{
	if (!Z_Registration_Info_UScriptStruct_UserInputData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UserInputData.InnerSingleton, Z_Construct_UScriptStruct_FUserInputData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_UserInputData.InnerSingleton;
}
// End ScriptStruct FUserInputData

// Begin Class USubsystem_WeatherSelector Function GetAudio
struct Z_Construct_UFunction_USubsystem_WeatherSelector_GetAudio_Statics
{
	struct Subsystem_WeatherSelector_eventGetAudio_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GetterFunction" },
		{ "ModuleRelativePath", "Public/Subsystem_WeatherSelector.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USubsystem_WeatherSelector_GetAudio_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Subsystem_WeatherSelector_eventGetAudio_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USubsystem_WeatherSelector_GetAudio_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Subsystem_WeatherSelector_eventGetAudio_Parms), &Z_Construct_UFunction_USubsystem_WeatherSelector_GetAudio_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubsystem_WeatherSelector_GetAudio_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubsystem_WeatherSelector_GetAudio_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USubsystem_WeatherSelector_GetAudio_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubsystem_WeatherSelector_GetAudio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubsystem_WeatherSelector, nullptr, "GetAudio", nullptr, nullptr, Z_Construct_UFunction_USubsystem_WeatherSelector_GetAudio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubsystem_WeatherSelector_GetAudio_Statics::PropPointers), sizeof(Z_Construct_UFunction_USubsystem_WeatherSelector_GetAudio_Statics::Subsystem_WeatherSelector_eventGetAudio_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USubsystem_WeatherSelector_GetAudio_Statics::Function_MetaDataParams), Z_Construct_UFunction_USubsystem_WeatherSelector_GetAudio_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USubsystem_WeatherSelector_GetAudio_Statics::Subsystem_WeatherSelector_eventGetAudio_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USubsystem_WeatherSelector_GetAudio()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubsystem_WeatherSelector_GetAudio_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USubsystem_WeatherSelector::execGetAudio)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetAudio();
	P_NATIVE_END;
}
// End Class USubsystem_WeatherSelector Function GetAudio

// Begin Class USubsystem_WeatherSelector Function GetClimate
struct Z_Construct_UFunction_USubsystem_WeatherSelector_GetClimate_Statics
{
	struct Subsystem_WeatherSelector_eventGetClimate_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GetterFunction" },
		{ "ModuleRelativePath", "Public/Subsystem_WeatherSelector.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USubsystem_WeatherSelector_GetClimate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Subsystem_WeatherSelector_eventGetClimate_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubsystem_WeatherSelector_GetClimate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubsystem_WeatherSelector_GetClimate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USubsystem_WeatherSelector_GetClimate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubsystem_WeatherSelector_GetClimate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubsystem_WeatherSelector, nullptr, "GetClimate", nullptr, nullptr, Z_Construct_UFunction_USubsystem_WeatherSelector_GetClimate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubsystem_WeatherSelector_GetClimate_Statics::PropPointers), sizeof(Z_Construct_UFunction_USubsystem_WeatherSelector_GetClimate_Statics::Subsystem_WeatherSelector_eventGetClimate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USubsystem_WeatherSelector_GetClimate_Statics::Function_MetaDataParams), Z_Construct_UFunction_USubsystem_WeatherSelector_GetClimate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USubsystem_WeatherSelector_GetClimate_Statics::Subsystem_WeatherSelector_eventGetClimate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USubsystem_WeatherSelector_GetClimate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubsystem_WeatherSelector_GetClimate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USubsystem_WeatherSelector::execGetClimate)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetClimate();
	P_NATIVE_END;
}
// End Class USubsystem_WeatherSelector Function GetClimate

// Begin Class USubsystem_WeatherSelector Function GetDayLength
struct Z_Construct_UFunction_USubsystem_WeatherSelector_GetDayLength_Statics
{
	struct Subsystem_WeatherSelector_eventGetDayLength_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GetterFunction" },
		{ "ModuleRelativePath", "Public/Subsystem_WeatherSelector.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USubsystem_WeatherSelector_GetDayLength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Subsystem_WeatherSelector_eventGetDayLength_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubsystem_WeatherSelector_GetDayLength_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubsystem_WeatherSelector_GetDayLength_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USubsystem_WeatherSelector_GetDayLength_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubsystem_WeatherSelector_GetDayLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubsystem_WeatherSelector, nullptr, "GetDayLength", nullptr, nullptr, Z_Construct_UFunction_USubsystem_WeatherSelector_GetDayLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubsystem_WeatherSelector_GetDayLength_Statics::PropPointers), sizeof(Z_Construct_UFunction_USubsystem_WeatherSelector_GetDayLength_Statics::Subsystem_WeatherSelector_eventGetDayLength_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USubsystem_WeatherSelector_GetDayLength_Statics::Function_MetaDataParams), Z_Construct_UFunction_USubsystem_WeatherSelector_GetDayLength_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USubsystem_WeatherSelector_GetDayLength_Statics::Subsystem_WeatherSelector_eventGetDayLength_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USubsystem_WeatherSelector_GetDayLength()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubsystem_WeatherSelector_GetDayLength_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USubsystem_WeatherSelector::execGetDayLength)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetDayLength();
	P_NATIVE_END;
}
// End Class USubsystem_WeatherSelector Function GetDayLength

// Begin Class USubsystem_WeatherSelector Function GetDayNight
struct Z_Construct_UFunction_USubsystem_WeatherSelector_GetDayNight_Statics
{
	struct Subsystem_WeatherSelector_eventGetDayNight_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GetterFunction" },
		{ "ModuleRelativePath", "Public/Subsystem_WeatherSelector.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USubsystem_WeatherSelector_GetDayNight_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Subsystem_WeatherSelector_eventGetDayNight_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USubsystem_WeatherSelector_GetDayNight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Subsystem_WeatherSelector_eventGetDayNight_Parms), &Z_Construct_UFunction_USubsystem_WeatherSelector_GetDayNight_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubsystem_WeatherSelector_GetDayNight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubsystem_WeatherSelector_GetDayNight_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USubsystem_WeatherSelector_GetDayNight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubsystem_WeatherSelector_GetDayNight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubsystem_WeatherSelector, nullptr, "GetDayNight", nullptr, nullptr, Z_Construct_UFunction_USubsystem_WeatherSelector_GetDayNight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubsystem_WeatherSelector_GetDayNight_Statics::PropPointers), sizeof(Z_Construct_UFunction_USubsystem_WeatherSelector_GetDayNight_Statics::Subsystem_WeatherSelector_eventGetDayNight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USubsystem_WeatherSelector_GetDayNight_Statics::Function_MetaDataParams), Z_Construct_UFunction_USubsystem_WeatherSelector_GetDayNight_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USubsystem_WeatherSelector_GetDayNight_Statics::Subsystem_WeatherSelector_eventGetDayNight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USubsystem_WeatherSelector_GetDayNight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubsystem_WeatherSelector_GetDayNight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USubsystem_WeatherSelector::execGetDayNight)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetDayNight();
	P_NATIVE_END;
}
// End Class USubsystem_WeatherSelector Function GetDayNight

// Begin Class USubsystem_WeatherSelector Function GetErraticism
struct Z_Construct_UFunction_USubsystem_WeatherSelector_GetErraticism_Statics
{
	struct Subsystem_WeatherSelector_eventGetErraticism_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GetterFunction" },
		{ "ModuleRelativePath", "Public/Subsystem_WeatherSelector.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USubsystem_WeatherSelector_GetErraticism_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Subsystem_WeatherSelector_eventGetErraticism_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubsystem_WeatherSelector_GetErraticism_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubsystem_WeatherSelector_GetErraticism_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USubsystem_WeatherSelector_GetErraticism_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubsystem_WeatherSelector_GetErraticism_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubsystem_WeatherSelector, nullptr, "GetErraticism", nullptr, nullptr, Z_Construct_UFunction_USubsystem_WeatherSelector_GetErraticism_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubsystem_WeatherSelector_GetErraticism_Statics::PropPointers), sizeof(Z_Construct_UFunction_USubsystem_WeatherSelector_GetErraticism_Statics::Subsystem_WeatherSelector_eventGetErraticism_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USubsystem_WeatherSelector_GetErraticism_Statics::Function_MetaDataParams), Z_Construct_UFunction_USubsystem_WeatherSelector_GetErraticism_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USubsystem_WeatherSelector_GetErraticism_Statics::Subsystem_WeatherSelector_eventGetErraticism_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USubsystem_WeatherSelector_GetErraticism()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubsystem_WeatherSelector_GetErraticism_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USubsystem_WeatherSelector::execGetErraticism)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetErraticism();
	P_NATIVE_END;
}
// End Class USubsystem_WeatherSelector Function GetErraticism

// Begin Class USubsystem_WeatherSelector Function GetSeason
struct Z_Construct_UFunction_USubsystem_WeatherSelector_GetSeason_Statics
{
	struct Subsystem_WeatherSelector_eventGetSeason_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GetterFunction" },
		{ "ModuleRelativePath", "Public/Subsystem_WeatherSelector.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USubsystem_WeatherSelector_GetSeason_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Subsystem_WeatherSelector_eventGetSeason_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubsystem_WeatherSelector_GetSeason_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubsystem_WeatherSelector_GetSeason_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USubsystem_WeatherSelector_GetSeason_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubsystem_WeatherSelector_GetSeason_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubsystem_WeatherSelector, nullptr, "GetSeason", nullptr, nullptr, Z_Construct_UFunction_USubsystem_WeatherSelector_GetSeason_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubsystem_WeatherSelector_GetSeason_Statics::PropPointers), sizeof(Z_Construct_UFunction_USubsystem_WeatherSelector_GetSeason_Statics::Subsystem_WeatherSelector_eventGetSeason_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USubsystem_WeatherSelector_GetSeason_Statics::Function_MetaDataParams), Z_Construct_UFunction_USubsystem_WeatherSelector_GetSeason_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USubsystem_WeatherSelector_GetSeason_Statics::Subsystem_WeatherSelector_eventGetSeason_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USubsystem_WeatherSelector_GetSeason()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubsystem_WeatherSelector_GetSeason_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USubsystem_WeatherSelector::execGetSeason)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetSeason();
	P_NATIVE_END;
}
// End Class USubsystem_WeatherSelector Function GetSeason

// Begin Class USubsystem_WeatherSelector Function SetAudio
struct Z_Construct_UFunction_USubsystem_WeatherSelector_SetAudio_Statics
{
	struct Subsystem_WeatherSelector_eventSetAudio_Parms
	{
		bool UserAudio;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SetterFunction" },
		{ "ModuleRelativePath", "Public/Subsystem_WeatherSelector.h" },
	};
#endif // WITH_METADATA
	static void NewProp_UserAudio_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UserAudio;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USubsystem_WeatherSelector_SetAudio_Statics::NewProp_UserAudio_SetBit(void* Obj)
{
	((Subsystem_WeatherSelector_eventSetAudio_Parms*)Obj)->UserAudio = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USubsystem_WeatherSelector_SetAudio_Statics::NewProp_UserAudio = { "UserAudio", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Subsystem_WeatherSelector_eventSetAudio_Parms), &Z_Construct_UFunction_USubsystem_WeatherSelector_SetAudio_Statics::NewProp_UserAudio_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubsystem_WeatherSelector_SetAudio_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubsystem_WeatherSelector_SetAudio_Statics::NewProp_UserAudio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USubsystem_WeatherSelector_SetAudio_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubsystem_WeatherSelector_SetAudio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubsystem_WeatherSelector, nullptr, "SetAudio", nullptr, nullptr, Z_Construct_UFunction_USubsystem_WeatherSelector_SetAudio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubsystem_WeatherSelector_SetAudio_Statics::PropPointers), sizeof(Z_Construct_UFunction_USubsystem_WeatherSelector_SetAudio_Statics::Subsystem_WeatherSelector_eventSetAudio_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USubsystem_WeatherSelector_SetAudio_Statics::Function_MetaDataParams), Z_Construct_UFunction_USubsystem_WeatherSelector_SetAudio_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USubsystem_WeatherSelector_SetAudio_Statics::Subsystem_WeatherSelector_eventSetAudio_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USubsystem_WeatherSelector_SetAudio()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubsystem_WeatherSelector_SetAudio_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USubsystem_WeatherSelector::execSetAudio)
{
	P_GET_UBOOL(Z_Param_UserAudio);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAudio(Z_Param_UserAudio);
	P_NATIVE_END;
}
// End Class USubsystem_WeatherSelector Function SetAudio

// Begin Class USubsystem_WeatherSelector Function SetClimate
struct Z_Construct_UFunction_USubsystem_WeatherSelector_SetClimate_Statics
{
	struct Subsystem_WeatherSelector_eventSetClimate_Parms
	{
		FString UserClimate;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SetterFunction" },
		{ "ModuleRelativePath", "Public/Subsystem_WeatherSelector.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserClimate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USubsystem_WeatherSelector_SetClimate_Statics::NewProp_UserClimate = { "UserClimate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Subsystem_WeatherSelector_eventSetClimate_Parms, UserClimate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubsystem_WeatherSelector_SetClimate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubsystem_WeatherSelector_SetClimate_Statics::NewProp_UserClimate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USubsystem_WeatherSelector_SetClimate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubsystem_WeatherSelector_SetClimate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubsystem_WeatherSelector, nullptr, "SetClimate", nullptr, nullptr, Z_Construct_UFunction_USubsystem_WeatherSelector_SetClimate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubsystem_WeatherSelector_SetClimate_Statics::PropPointers), sizeof(Z_Construct_UFunction_USubsystem_WeatherSelector_SetClimate_Statics::Subsystem_WeatherSelector_eventSetClimate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USubsystem_WeatherSelector_SetClimate_Statics::Function_MetaDataParams), Z_Construct_UFunction_USubsystem_WeatherSelector_SetClimate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USubsystem_WeatherSelector_SetClimate_Statics::Subsystem_WeatherSelector_eventSetClimate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USubsystem_WeatherSelector_SetClimate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubsystem_WeatherSelector_SetClimate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USubsystem_WeatherSelector::execSetClimate)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_UserClimate);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetClimate(Z_Param_UserClimate);
	P_NATIVE_END;
}
// End Class USubsystem_WeatherSelector Function SetClimate

// Begin Class USubsystem_WeatherSelector Function SetDayLength
struct Z_Construct_UFunction_USubsystem_WeatherSelector_SetDayLength_Statics
{
	struct Subsystem_WeatherSelector_eventSetDayLength_Parms
	{
		float UserDayLength;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SetterFunction" },
		{ "ModuleRelativePath", "Public/Subsystem_WeatherSelector.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_UserDayLength;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USubsystem_WeatherSelector_SetDayLength_Statics::NewProp_UserDayLength = { "UserDayLength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Subsystem_WeatherSelector_eventSetDayLength_Parms, UserDayLength), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubsystem_WeatherSelector_SetDayLength_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubsystem_WeatherSelector_SetDayLength_Statics::NewProp_UserDayLength,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USubsystem_WeatherSelector_SetDayLength_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubsystem_WeatherSelector_SetDayLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubsystem_WeatherSelector, nullptr, "SetDayLength", nullptr, nullptr, Z_Construct_UFunction_USubsystem_WeatherSelector_SetDayLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubsystem_WeatherSelector_SetDayLength_Statics::PropPointers), sizeof(Z_Construct_UFunction_USubsystem_WeatherSelector_SetDayLength_Statics::Subsystem_WeatherSelector_eventSetDayLength_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USubsystem_WeatherSelector_SetDayLength_Statics::Function_MetaDataParams), Z_Construct_UFunction_USubsystem_WeatherSelector_SetDayLength_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USubsystem_WeatherSelector_SetDayLength_Statics::Subsystem_WeatherSelector_eventSetDayLength_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USubsystem_WeatherSelector_SetDayLength()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubsystem_WeatherSelector_SetDayLength_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USubsystem_WeatherSelector::execSetDayLength)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_UserDayLength);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDayLength(Z_Param_UserDayLength);
	P_NATIVE_END;
}
// End Class USubsystem_WeatherSelector Function SetDayLength

// Begin Class USubsystem_WeatherSelector Function SetDayNight
struct Z_Construct_UFunction_USubsystem_WeatherSelector_SetDayNight_Statics
{
	struct Subsystem_WeatherSelector_eventSetDayNight_Parms
	{
		bool UserDayNight;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SetterFunction" },
		{ "ModuleRelativePath", "Public/Subsystem_WeatherSelector.h" },
	};
#endif // WITH_METADATA
	static void NewProp_UserDayNight_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UserDayNight;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USubsystem_WeatherSelector_SetDayNight_Statics::NewProp_UserDayNight_SetBit(void* Obj)
{
	((Subsystem_WeatherSelector_eventSetDayNight_Parms*)Obj)->UserDayNight = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USubsystem_WeatherSelector_SetDayNight_Statics::NewProp_UserDayNight = { "UserDayNight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Subsystem_WeatherSelector_eventSetDayNight_Parms), &Z_Construct_UFunction_USubsystem_WeatherSelector_SetDayNight_Statics::NewProp_UserDayNight_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubsystem_WeatherSelector_SetDayNight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubsystem_WeatherSelector_SetDayNight_Statics::NewProp_UserDayNight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USubsystem_WeatherSelector_SetDayNight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubsystem_WeatherSelector_SetDayNight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubsystem_WeatherSelector, nullptr, "SetDayNight", nullptr, nullptr, Z_Construct_UFunction_USubsystem_WeatherSelector_SetDayNight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubsystem_WeatherSelector_SetDayNight_Statics::PropPointers), sizeof(Z_Construct_UFunction_USubsystem_WeatherSelector_SetDayNight_Statics::Subsystem_WeatherSelector_eventSetDayNight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USubsystem_WeatherSelector_SetDayNight_Statics::Function_MetaDataParams), Z_Construct_UFunction_USubsystem_WeatherSelector_SetDayNight_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USubsystem_WeatherSelector_SetDayNight_Statics::Subsystem_WeatherSelector_eventSetDayNight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USubsystem_WeatherSelector_SetDayNight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubsystem_WeatherSelector_SetDayNight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USubsystem_WeatherSelector::execSetDayNight)
{
	P_GET_UBOOL(Z_Param_UserDayNight);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDayNight(Z_Param_UserDayNight);
	P_NATIVE_END;
}
// End Class USubsystem_WeatherSelector Function SetDayNight

// Begin Class USubsystem_WeatherSelector Function SetErraticism
struct Z_Construct_UFunction_USubsystem_WeatherSelector_SetErraticism_Statics
{
	struct Subsystem_WeatherSelector_eventSetErraticism_Parms
	{
		float UserErraticism;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SetterFunction" },
		{ "ModuleRelativePath", "Public/Subsystem_WeatherSelector.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_UserErraticism;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USubsystem_WeatherSelector_SetErraticism_Statics::NewProp_UserErraticism = { "UserErraticism", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Subsystem_WeatherSelector_eventSetErraticism_Parms, UserErraticism), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubsystem_WeatherSelector_SetErraticism_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubsystem_WeatherSelector_SetErraticism_Statics::NewProp_UserErraticism,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USubsystem_WeatherSelector_SetErraticism_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubsystem_WeatherSelector_SetErraticism_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubsystem_WeatherSelector, nullptr, "SetErraticism", nullptr, nullptr, Z_Construct_UFunction_USubsystem_WeatherSelector_SetErraticism_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubsystem_WeatherSelector_SetErraticism_Statics::PropPointers), sizeof(Z_Construct_UFunction_USubsystem_WeatherSelector_SetErraticism_Statics::Subsystem_WeatherSelector_eventSetErraticism_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USubsystem_WeatherSelector_SetErraticism_Statics::Function_MetaDataParams), Z_Construct_UFunction_USubsystem_WeatherSelector_SetErraticism_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USubsystem_WeatherSelector_SetErraticism_Statics::Subsystem_WeatherSelector_eventSetErraticism_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USubsystem_WeatherSelector_SetErraticism()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubsystem_WeatherSelector_SetErraticism_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USubsystem_WeatherSelector::execSetErraticism)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_UserErraticism);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetErraticism(Z_Param_UserErraticism);
	P_NATIVE_END;
}
// End Class USubsystem_WeatherSelector Function SetErraticism

// Begin Class USubsystem_WeatherSelector Function SetSeason
struct Z_Construct_UFunction_USubsystem_WeatherSelector_SetSeason_Statics
{
	struct Subsystem_WeatherSelector_eventSetSeason_Parms
	{
		FString UserSeason;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SetterFunction" },
		{ "ModuleRelativePath", "Public/Subsystem_WeatherSelector.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserSeason;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USubsystem_WeatherSelector_SetSeason_Statics::NewProp_UserSeason = { "UserSeason", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Subsystem_WeatherSelector_eventSetSeason_Parms, UserSeason), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubsystem_WeatherSelector_SetSeason_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubsystem_WeatherSelector_SetSeason_Statics::NewProp_UserSeason,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USubsystem_WeatherSelector_SetSeason_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubsystem_WeatherSelector_SetSeason_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubsystem_WeatherSelector, nullptr, "SetSeason", nullptr, nullptr, Z_Construct_UFunction_USubsystem_WeatherSelector_SetSeason_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubsystem_WeatherSelector_SetSeason_Statics::PropPointers), sizeof(Z_Construct_UFunction_USubsystem_WeatherSelector_SetSeason_Statics::Subsystem_WeatherSelector_eventSetSeason_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USubsystem_WeatherSelector_SetSeason_Statics::Function_MetaDataParams), Z_Construct_UFunction_USubsystem_WeatherSelector_SetSeason_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USubsystem_WeatherSelector_SetSeason_Statics::Subsystem_WeatherSelector_eventSetSeason_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USubsystem_WeatherSelector_SetSeason()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubsystem_WeatherSelector_SetSeason_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USubsystem_WeatherSelector::execSetSeason)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_UserSeason);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSeason(Z_Param_UserSeason);
	P_NATIVE_END;
}
// End Class USubsystem_WeatherSelector Function SetSeason

// Begin Class USubsystem_WeatherSelector
void USubsystem_WeatherSelector::StaticRegisterNativesUSubsystem_WeatherSelector()
{
	UClass* Class = USubsystem_WeatherSelector::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAudio", &USubsystem_WeatherSelector::execGetAudio },
		{ "GetClimate", &USubsystem_WeatherSelector::execGetClimate },
		{ "GetDayLength", &USubsystem_WeatherSelector::execGetDayLength },
		{ "GetDayNight", &USubsystem_WeatherSelector::execGetDayNight },
		{ "GetErraticism", &USubsystem_WeatherSelector::execGetErraticism },
		{ "GetSeason", &USubsystem_WeatherSelector::execGetSeason },
		{ "SetAudio", &USubsystem_WeatherSelector::execSetAudio },
		{ "SetClimate", &USubsystem_WeatherSelector::execSetClimate },
		{ "SetDayLength", &USubsystem_WeatherSelector::execSetDayLength },
		{ "SetDayNight", &USubsystem_WeatherSelector::execSetDayNight },
		{ "SetErraticism", &USubsystem_WeatherSelector::execSetErraticism },
		{ "SetSeason", &USubsystem_WeatherSelector::execSetSeason },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USubsystem_WeatherSelector);
UClass* Z_Construct_UClass_USubsystem_WeatherSelector_NoRegister()
{
	return USubsystem_WeatherSelector::StaticClass();
}
struct Z_Construct_UClass_USubsystem_WeatherSelector_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Subsystem_WeatherSelector.h" },
		{ "ModuleRelativePath", "Public/Subsystem_WeatherSelector.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USubsystem_WeatherSelector_GetAudio, "GetAudio" }, // 1037879295
		{ &Z_Construct_UFunction_USubsystem_WeatherSelector_GetClimate, "GetClimate" }, // 2538394812
		{ &Z_Construct_UFunction_USubsystem_WeatherSelector_GetDayLength, "GetDayLength" }, // 1687359388
		{ &Z_Construct_UFunction_USubsystem_WeatherSelector_GetDayNight, "GetDayNight" }, // 4034459224
		{ &Z_Construct_UFunction_USubsystem_WeatherSelector_GetErraticism, "GetErraticism" }, // 3061130407
		{ &Z_Construct_UFunction_USubsystem_WeatherSelector_GetSeason, "GetSeason" }, // 50622960
		{ &Z_Construct_UFunction_USubsystem_WeatherSelector_SetAudio, "SetAudio" }, // 2957921448
		{ &Z_Construct_UFunction_USubsystem_WeatherSelector_SetClimate, "SetClimate" }, // 1657653698
		{ &Z_Construct_UFunction_USubsystem_WeatherSelector_SetDayLength, "SetDayLength" }, // 2509563473
		{ &Z_Construct_UFunction_USubsystem_WeatherSelector_SetDayNight, "SetDayNight" }, // 3931971352
		{ &Z_Construct_UFunction_USubsystem_WeatherSelector_SetErraticism, "SetErraticism" }, // 4232533659
		{ &Z_Construct_UFunction_USubsystem_WeatherSelector_SetSeason, "SetSeason" }, // 3257977605
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USubsystem_WeatherSelector>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USubsystem_WeatherSelector_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_ToolsDevForEngines,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USubsystem_WeatherSelector_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USubsystem_WeatherSelector_Statics::ClassParams = {
	&USubsystem_WeatherSelector::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USubsystem_WeatherSelector_Statics::Class_MetaDataParams), Z_Construct_UClass_USubsystem_WeatherSelector_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USubsystem_WeatherSelector()
{
	if (!Z_Registration_Info_UClass_USubsystem_WeatherSelector.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USubsystem_WeatherSelector.OuterSingleton, Z_Construct_UClass_USubsystem_WeatherSelector_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USubsystem_WeatherSelector.OuterSingleton;
}
template<> TOOLSDEVFORENGINES_API UClass* StaticClass<USubsystem_WeatherSelector>()
{
	return USubsystem_WeatherSelector::StaticClass();
}
USubsystem_WeatherSelector::USubsystem_WeatherSelector() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USubsystem_WeatherSelector);
USubsystem_WeatherSelector::~USubsystem_WeatherSelector() {}
// End Class USubsystem_WeatherSelector

// Begin Registration
struct Z_CompiledInDeferFile_FID_C_Documents_GitHub_ToolsDevForEngines_ToolsDevForEngines_Source_ToolsDevForEngines_Public_Subsystem_WeatherSelector_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FUserInputData::StaticStruct, Z_Construct_UScriptStruct_FUserInputData_Statics::NewStructOps, TEXT("UserInputData"), &Z_Registration_Info_UScriptStruct_UserInputData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUserInputData), 951188697U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USubsystem_WeatherSelector, USubsystem_WeatherSelector::StaticClass, TEXT("USubsystem_WeatherSelector"), &Z_Registration_Info_UClass_USubsystem_WeatherSelector, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USubsystem_WeatherSelector), 3681082009U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_C_Documents_GitHub_ToolsDevForEngines_ToolsDevForEngines_Source_ToolsDevForEngines_Public_Subsystem_WeatherSelector_h_3231086471(TEXT("/Script/ToolsDevForEngines"),
	Z_CompiledInDeferFile_FID_C_Documents_GitHub_ToolsDevForEngines_ToolsDevForEngines_Source_ToolsDevForEngines_Public_Subsystem_WeatherSelector_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_C_Documents_GitHub_ToolsDevForEngines_ToolsDevForEngines_Source_ToolsDevForEngines_Public_Subsystem_WeatherSelector_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_C_Documents_GitHub_ToolsDevForEngines_ToolsDevForEngines_Source_ToolsDevForEngines_Public_Subsystem_WeatherSelector_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_C_Documents_GitHub_ToolsDevForEngines_ToolsDevForEngines_Source_ToolsDevForEngines_Public_Subsystem_WeatherSelector_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

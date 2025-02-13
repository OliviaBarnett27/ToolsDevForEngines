// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ToolsDevForEngines/Public/EUW_WeatherSelector.h"
#include "ToolsDevForEngines/UserWeatherData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEUW_WeatherSelector() {}

// Begin Cross Module References
BLUTILITY_API UClass* Z_Construct_UClass_UEditorUtilityWidget();
ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
TOOLSDEVFORENGINES_API UClass* Z_Construct_UClass_UEUW_WeatherSelector();
TOOLSDEVFORENGINES_API UClass* Z_Construct_UClass_UEUW_WeatherSelector_NoRegister();
TOOLSDEVFORENGINES_API UClass* Z_Construct_UClass_UI_WeatherCalculations_NoRegister();
TOOLSDEVFORENGINES_API UClass* Z_Construct_UClass_UW_ClimateWidget_NoRegister();
TOOLSDEVFORENGINES_API UClass* Z_Construct_UClass_UW_DayLengthWidget_NoRegister();
TOOLSDEVFORENGINES_API UClass* Z_Construct_UClass_UW_DayNightWidget_NoRegister();
TOOLSDEVFORENGINES_API UClass* Z_Construct_UClass_UW_ErraticismWidget_NoRegister();
TOOLSDEVFORENGINES_API UClass* Z_Construct_UClass_UW_GenerateButton_NoRegister();
TOOLSDEVFORENGINES_API UClass* Z_Construct_UClass_UW_SeasonWidget_NoRegister();
TOOLSDEVFORENGINES_API UFunction* Z_Construct_UDelegateFunction_ToolsDevForEngines_OnGenerateWeatherButtonClickedSignature__DelegateSignature();
TOOLSDEVFORENGINES_API UScriptStruct* Z_Construct_UScriptStruct_FUserWeatherData();
UMG_API UClass* Z_Construct_UClass_UCanvasPanel_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UPackage* Z_Construct_UPackage__Script_ToolsDevForEngines();
// End Cross Module References

// Begin Delegate FOnGenerateWeatherButtonClickedSignature
struct Z_Construct_UDelegateFunction_ToolsDevForEngines_OnGenerateWeatherButtonClickedSignature__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EUW_WeatherSelector.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ToolsDevForEngines_OnGenerateWeatherButtonClickedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ToolsDevForEngines, nullptr, "OnGenerateWeatherButtonClickedSignature__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ToolsDevForEngines_OnGenerateWeatherButtonClickedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ToolsDevForEngines_OnGenerateWeatherButtonClickedSignature__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_ToolsDevForEngines_OnGenerateWeatherButtonClickedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ToolsDevForEngines_OnGenerateWeatherButtonClickedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnGenerateWeatherButtonClickedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnGenerateWeatherButtonClickedSignature)
{
	OnGenerateWeatherButtonClickedSignature.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnGenerateWeatherButtonClickedSignature

// Begin Class UEUW_WeatherSelector Function CalculateRainGravity
struct Z_Construct_UFunction_UEUW_WeatherSelector_CalculateRainGravity_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EUW_WeatherSelector.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEUW_WeatherSelector_CalculateRainGravity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEUW_WeatherSelector, nullptr, "CalculateRainGravity", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEUW_WeatherSelector_CalculateRainGravity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEUW_WeatherSelector_CalculateRainGravity_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UEUW_WeatherSelector_CalculateRainGravity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEUW_WeatherSelector_CalculateRainGravity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEUW_WeatherSelector::execCalculateRainGravity)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CalculateRainGravity();
	P_NATIVE_END;
}
// End Class UEUW_WeatherSelector Function CalculateRainGravity

// Begin Class UEUW_WeatherSelector Function CalculateRainSpawnRate
struct Z_Construct_UFunction_UEUW_WeatherSelector_CalculateRainSpawnRate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EUW_WeatherSelector.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEUW_WeatherSelector_CalculateRainSpawnRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEUW_WeatherSelector, nullptr, "CalculateRainSpawnRate", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEUW_WeatherSelector_CalculateRainSpawnRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEUW_WeatherSelector_CalculateRainSpawnRate_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UEUW_WeatherSelector_CalculateRainSpawnRate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEUW_WeatherSelector_CalculateRainSpawnRate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEUW_WeatherSelector::execCalculateRainSpawnRate)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CalculateRainSpawnRate();
	P_NATIVE_END;
}
// End Class UEUW_WeatherSelector Function CalculateRainSpawnRate

// Begin Class UEUW_WeatherSelector Function CalculateSnowGravity
struct Z_Construct_UFunction_UEUW_WeatherSelector_CalculateSnowGravity_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EUW_WeatherSelector.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEUW_WeatherSelector_CalculateSnowGravity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEUW_WeatherSelector, nullptr, "CalculateSnowGravity", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEUW_WeatherSelector_CalculateSnowGravity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEUW_WeatherSelector_CalculateSnowGravity_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UEUW_WeatherSelector_CalculateSnowGravity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEUW_WeatherSelector_CalculateSnowGravity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEUW_WeatherSelector::execCalculateSnowGravity)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CalculateSnowGravity();
	P_NATIVE_END;
}
// End Class UEUW_WeatherSelector Function CalculateSnowGravity

// Begin Class UEUW_WeatherSelector Function CalculateSnowSpawnRate
struct Z_Construct_UFunction_UEUW_WeatherSelector_CalculateSnowSpawnRate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EUW_WeatherSelector.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEUW_WeatherSelector_CalculateSnowSpawnRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEUW_WeatherSelector, nullptr, "CalculateSnowSpawnRate", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEUW_WeatherSelector_CalculateSnowSpawnRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEUW_WeatherSelector_CalculateSnowSpawnRate_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UEUW_WeatherSelector_CalculateSnowSpawnRate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEUW_WeatherSelector_CalculateSnowSpawnRate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEUW_WeatherSelector::execCalculateSnowSpawnRate)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CalculateSnowSpawnRate();
	P_NATIVE_END;
}
// End Class UEUW_WeatherSelector Function CalculateSnowSpawnRate

// Begin Class UEUW_WeatherSelector Function CalculateWeather
struct Z_Construct_UFunction_UEUW_WeatherSelector_CalculateWeather_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EUW_WeatherSelector.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEUW_WeatherSelector_CalculateWeather_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEUW_WeatherSelector, nullptr, "CalculateWeather", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEUW_WeatherSelector_CalculateWeather_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEUW_WeatherSelector_CalculateWeather_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UEUW_WeatherSelector_CalculateWeather()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEUW_WeatherSelector_CalculateWeather_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEUW_WeatherSelector::execCalculateWeather)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CalculateWeather();
	P_NATIVE_END;
}
// End Class UEUW_WeatherSelector Function CalculateWeather

// Begin Class UEUW_WeatherSelector Function CommunicateWithVolume
struct Z_Construct_UFunction_UEUW_WeatherSelector_CommunicateWithVolume_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EUW_WeatherSelector.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEUW_WeatherSelector_CommunicateWithVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEUW_WeatherSelector, nullptr, "CommunicateWithVolume", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEUW_WeatherSelector_CommunicateWithVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEUW_WeatherSelector_CommunicateWithVolume_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UEUW_WeatherSelector_CommunicateWithVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEUW_WeatherSelector_CommunicateWithVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEUW_WeatherSelector::execCommunicateWithVolume)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CommunicateWithVolume();
	P_NATIVE_END;
}
// End Class UEUW_WeatherSelector Function CommunicateWithVolume

// Begin Class UEUW_WeatherSelector Function OnButtonClicked
struct Z_Construct_UFunction_UEUW_WeatherSelector_OnButtonClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//------UFUNCTIONS\n" },
#endif
		{ "ModuleRelativePath", "Public/EUW_WeatherSelector.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "------UFUNCTIONS" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEUW_WeatherSelector_OnButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEUW_WeatherSelector, nullptr, "OnButtonClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEUW_WeatherSelector_OnButtonClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEUW_WeatherSelector_OnButtonClicked_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UEUW_WeatherSelector_OnButtonClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEUW_WeatherSelector_OnButtonClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEUW_WeatherSelector::execOnButtonClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnButtonClicked();
	P_NATIVE_END;
}
// End Class UEUW_WeatherSelector Function OnButtonClicked

// Begin Class UEUW_WeatherSelector Function ReadDataTable
struct Z_Construct_UFunction_UEUW_WeatherSelector_ReadDataTable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EUW_WeatherSelector.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEUW_WeatherSelector_ReadDataTable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEUW_WeatherSelector, nullptr, "ReadDataTable", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEUW_WeatherSelector_ReadDataTable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEUW_WeatherSelector_ReadDataTable_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UEUW_WeatherSelector_ReadDataTable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEUW_WeatherSelector_ReadDataTable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEUW_WeatherSelector::execReadDataTable)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReadDataTable();
	P_NATIVE_END;
}
// End Class UEUW_WeatherSelector Function ReadDataTable

// Begin Class UEUW_WeatherSelector Function SetPrecipitation
struct Z_Construct_UFunction_UEUW_WeatherSelector_SetPrecipitation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EUW_WeatherSelector.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEUW_WeatherSelector_SetPrecipitation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEUW_WeatherSelector, nullptr, "SetPrecipitation", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEUW_WeatherSelector_SetPrecipitation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEUW_WeatherSelector_SetPrecipitation_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UEUW_WeatherSelector_SetPrecipitation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEUW_WeatherSelector_SetPrecipitation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEUW_WeatherSelector::execSetPrecipitation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPrecipitation();
	P_NATIVE_END;
}
// End Class UEUW_WeatherSelector Function SetPrecipitation

// Begin Class UEUW_WeatherSelector Function SetUserInputs
struct Z_Construct_UFunction_UEUW_WeatherSelector_SetUserInputs_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EUW_WeatherSelector.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEUW_WeatherSelector_SetUserInputs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEUW_WeatherSelector, nullptr, "SetUserInputs", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEUW_WeatherSelector_SetUserInputs_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEUW_WeatherSelector_SetUserInputs_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UEUW_WeatherSelector_SetUserInputs()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEUW_WeatherSelector_SetUserInputs_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEUW_WeatherSelector::execSetUserInputs)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetUserInputs();
	P_NATIVE_END;
}
// End Class UEUW_WeatherSelector Function SetUserInputs

// Begin Class UEUW_WeatherSelector
void UEUW_WeatherSelector::StaticRegisterNativesUEUW_WeatherSelector()
{
	UClass* Class = UEUW_WeatherSelector::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CalculateRainGravity", &UEUW_WeatherSelector::execCalculateRainGravity },
		{ "CalculateRainSpawnRate", &UEUW_WeatherSelector::execCalculateRainSpawnRate },
		{ "CalculateSnowGravity", &UEUW_WeatherSelector::execCalculateSnowGravity },
		{ "CalculateSnowSpawnRate", &UEUW_WeatherSelector::execCalculateSnowSpawnRate },
		{ "CalculateWeather", &UEUW_WeatherSelector::execCalculateWeather },
		{ "CommunicateWithVolume", &UEUW_WeatherSelector::execCommunicateWithVolume },
		{ "OnButtonClicked", &UEUW_WeatherSelector::execOnButtonClicked },
		{ "ReadDataTable", &UEUW_WeatherSelector::execReadDataTable },
		{ "SetPrecipitation", &UEUW_WeatherSelector::execSetPrecipitation },
		{ "SetUserInputs", &UEUW_WeatherSelector::execSetUserInputs },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
		{ "IncludePath", "EUW_WeatherSelector.h" },
		{ "ModuleRelativePath", "Public/EUW_WeatherSelector.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Canvas_MetaData[] = {
		{ "BindWidget", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//-----Widgets\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EUW_WeatherSelector.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "-----Widgets" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UtilityTitle_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EUW_WeatherSelector.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SeasonWidget_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EUW_WeatherSelector.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClimateWidget_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EUW_WeatherSelector.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DayNightWidget_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EUW_WeatherSelector.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DayLengthWidget_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EUW_WeatherSelector.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GenerateButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EUW_WeatherSelector.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ErraticismWidget_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EUW_WeatherSelector.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnGenerateWeatherButtonClickedDelegate_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//------UPROPERTIES\n" },
#endif
		{ "ModuleRelativePath", "Public/EUW_WeatherSelector.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "------UPROPERTIES" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserDataStruct_MetaData[] = {
		{ "Category", "EUW_WeatherSelector" },
		{ "ModuleRelativePath", "Public/EUW_WeatherSelector.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeatherDataTable_MetaData[] = {
		{ "Category", "EUW_WeatherSelector" },
		{ "ModuleRelativePath", "Public/EUW_WeatherSelector.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Canvas;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UtilityTitle;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SeasonWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ClimateWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DayNightWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DayLengthWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GenerateButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ErraticismWidget;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGenerateWeatherButtonClickedDelegate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UserDataStruct;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WeatherDataTable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEUW_WeatherSelector_CalculateRainGravity, "CalculateRainGravity" }, // 2977775577
		{ &Z_Construct_UFunction_UEUW_WeatherSelector_CalculateRainSpawnRate, "CalculateRainSpawnRate" }, // 1851337038
		{ &Z_Construct_UFunction_UEUW_WeatherSelector_CalculateSnowGravity, "CalculateSnowGravity" }, // 2740974574
		{ &Z_Construct_UFunction_UEUW_WeatherSelector_CalculateSnowSpawnRate, "CalculateSnowSpawnRate" }, // 3548923795
		{ &Z_Construct_UFunction_UEUW_WeatherSelector_CalculateWeather, "CalculateWeather" }, // 52793682
		{ &Z_Construct_UFunction_UEUW_WeatherSelector_CommunicateWithVolume, "CommunicateWithVolume" }, // 1227865185
		{ &Z_Construct_UFunction_UEUW_WeatherSelector_OnButtonClicked, "OnButtonClicked" }, // 3883032190
		{ &Z_Construct_UFunction_UEUW_WeatherSelector_ReadDataTable, "ReadDataTable" }, // 1579190298
		{ &Z_Construct_UFunction_UEUW_WeatherSelector_SetPrecipitation, "SetPrecipitation" }, // 45504486
		{ &Z_Construct_UFunction_UEUW_WeatherSelector_SetUserInputs, "SetUserInputs" }, // 3613933360
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEUW_WeatherSelector>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEUW_WeatherSelector_Statics::NewProp_Canvas = { "Canvas", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEUW_WeatherSelector, Canvas), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Canvas_MetaData), NewProp_Canvas_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEUW_WeatherSelector_Statics::NewProp_UtilityTitle = { "UtilityTitle", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEUW_WeatherSelector, UtilityTitle), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UtilityTitle_MetaData), NewProp_UtilityTitle_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEUW_WeatherSelector_Statics::NewProp_SeasonWidget = { "SeasonWidget", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEUW_WeatherSelector, SeasonWidget), Z_Construct_UClass_UW_SeasonWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SeasonWidget_MetaData), NewProp_SeasonWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEUW_WeatherSelector_Statics::NewProp_ClimateWidget = { "ClimateWidget", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEUW_WeatherSelector, ClimateWidget), Z_Construct_UClass_UW_ClimateWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClimateWidget_MetaData), NewProp_ClimateWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEUW_WeatherSelector_Statics::NewProp_DayNightWidget = { "DayNightWidget", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEUW_WeatherSelector, DayNightWidget), Z_Construct_UClass_UW_DayNightWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DayNightWidget_MetaData), NewProp_DayNightWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEUW_WeatherSelector_Statics::NewProp_DayLengthWidget = { "DayLengthWidget", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEUW_WeatherSelector, DayLengthWidget), Z_Construct_UClass_UW_DayLengthWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DayLengthWidget_MetaData), NewProp_DayLengthWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEUW_WeatherSelector_Statics::NewProp_GenerateButton = { "GenerateButton", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEUW_WeatherSelector, GenerateButton), Z_Construct_UClass_UW_GenerateButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GenerateButton_MetaData), NewProp_GenerateButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEUW_WeatherSelector_Statics::NewProp_ErraticismWidget = { "ErraticismWidget", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEUW_WeatherSelector, ErraticismWidget), Z_Construct_UClass_UW_ErraticismWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ErraticismWidget_MetaData), NewProp_ErraticismWidget_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEUW_WeatherSelector_Statics::NewProp_OnGenerateWeatherButtonClickedDelegate = { "OnGenerateWeatherButtonClickedDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEUW_WeatherSelector, OnGenerateWeatherButtonClickedDelegate), Z_Construct_UDelegateFunction_ToolsDevForEngines_OnGenerateWeatherButtonClickedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnGenerateWeatherButtonClickedDelegate_MetaData), NewProp_OnGenerateWeatherButtonClickedDelegate_MetaData) }; // 1436648759
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEUW_WeatherSelector_Statics::NewProp_UserDataStruct = { "UserDataStruct", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEUW_WeatherSelector, UserDataStruct), Z_Construct_UScriptStruct_FUserWeatherData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserDataStruct_MetaData), NewProp_UserDataStruct_MetaData) }; // 1483438220
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEUW_WeatherSelector_Statics::NewProp_WeatherDataTable = { "WeatherDataTable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEUW_WeatherSelector, WeatherDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeatherDataTable_MetaData), NewProp_WeatherDataTable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEUW_WeatherSelector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEUW_WeatherSelector_Statics::NewProp_Canvas,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEUW_WeatherSelector_Statics::NewProp_UtilityTitle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEUW_WeatherSelector_Statics::NewProp_SeasonWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEUW_WeatherSelector_Statics::NewProp_ClimateWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEUW_WeatherSelector_Statics::NewProp_DayNightWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEUW_WeatherSelector_Statics::NewProp_DayLengthWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEUW_WeatherSelector_Statics::NewProp_GenerateButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEUW_WeatherSelector_Statics::NewProp_ErraticismWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEUW_WeatherSelector_Statics::NewProp_OnGenerateWeatherButtonClickedDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEUW_WeatherSelector_Statics::NewProp_UserDataStruct,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEUW_WeatherSelector_Statics::NewProp_WeatherDataTable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEUW_WeatherSelector_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEUW_WeatherSelector_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEditorUtilityWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_ToolsDevForEngines,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEUW_WeatherSelector_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UEUW_WeatherSelector_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UI_WeatherCalculations_NoRegister, (int32)VTABLE_OFFSET(UEUW_WeatherSelector, II_WeatherCalculations), false },  // 4169156868
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEUW_WeatherSelector_Statics::ClassParams = {
	&UEUW_WeatherSelector::StaticClass,
	"Editor",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UEUW_WeatherSelector_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UEUW_WeatherSelector_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
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
		{ Z_Construct_UClass_UEUW_WeatherSelector, UEUW_WeatherSelector::StaticClass, TEXT("UEUW_WeatherSelector"), &Z_Registration_Info_UClass_UEUW_WeatherSelector, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEUW_WeatherSelector), 39350662U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_C_Documents_GitHub_ToolsDevForEngines_ToolsDevForEngines_Source_ToolsDevForEngines_Public_EUW_WeatherSelector_h_2317515118(TEXT("/Script/ToolsDevForEngines"),
	Z_CompiledInDeferFile_FID_C_Documents_GitHub_ToolsDevForEngines_ToolsDevForEngines_Source_ToolsDevForEngines_Public_EUW_WeatherSelector_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_C_Documents_GitHub_ToolsDevForEngines_ToolsDevForEngines_Source_ToolsDevForEngines_Public_EUW_WeatherSelector_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

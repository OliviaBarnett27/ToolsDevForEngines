// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ToolsDevForEngines/Public/WeatherVolume.h"
#include "ToolsDevForEngines/UserWeatherData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeatherVolume() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AVolume();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
TOOLSDEVFORENGINES_API UClass* Z_Construct_UClass_AWeatherVolume();
TOOLSDEVFORENGINES_API UClass* Z_Construct_UClass_AWeatherVolume_NoRegister();
TOOLSDEVFORENGINES_API UClass* Z_Construct_UClass_UCloudsComponent_NoRegister();
TOOLSDEVFORENGINES_API UClass* Z_Construct_UClass_UDayNightComponent_NoRegister();
TOOLSDEVFORENGINES_API UScriptStruct* Z_Construct_UScriptStruct_FUserWeatherData();
UPackage* Z_Construct_UPackage__Script_ToolsDevForEngines();
// End Cross Module References

// Begin Class AWeatherVolume Function ManageTransitions
struct Z_Construct_UFunction_AWeatherVolume_ManageTransitions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WeatherVolume.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeatherVolume_ManageTransitions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeatherVolume, nullptr, "ManageTransitions", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeatherVolume_ManageTransitions_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeatherVolume_ManageTransitions_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AWeatherVolume_ManageTransitions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeatherVolume_ManageTransitions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeatherVolume::execManageTransitions)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ManageTransitions();
	P_NATIVE_END;
}
// End Class AWeatherVolume Function ManageTransitions

// Begin Class AWeatherVolume Function SetNiagaraParameters
struct Z_Construct_UFunction_AWeatherVolume_SetNiagaraParameters_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WeatherVolume.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeatherVolume_SetNiagaraParameters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeatherVolume, nullptr, "SetNiagaraParameters", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeatherVolume_SetNiagaraParameters_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeatherVolume_SetNiagaraParameters_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AWeatherVolume_SetNiagaraParameters()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeatherVolume_SetNiagaraParameters_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeatherVolume::execSetNiagaraParameters)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetNiagaraParameters();
	P_NATIVE_END;
}
// End Class AWeatherVolume Function SetNiagaraParameters

// Begin Class AWeatherVolume Function SetUserWeatherData
struct Z_Construct_UFunction_AWeatherVolume_SetUserWeatherData_Statics
{
	struct WeatherVolume_eventSetUserWeatherData_Parms
	{
		FUserWeatherData WeatherData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Weather Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//---------- UFUNCTIONS\n" },
#endif
		{ "ModuleRelativePath", "Public/WeatherVolume.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "---------- UFUNCTIONS" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_WeatherData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWeatherVolume_SetUserWeatherData_Statics::NewProp_WeatherData = { "WeatherData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeatherVolume_eventSetUserWeatherData_Parms, WeatherData), Z_Construct_UScriptStruct_FUserWeatherData, METADATA_PARAMS(0, nullptr) }; // 2721857485
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeatherVolume_SetUserWeatherData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeatherVolume_SetUserWeatherData_Statics::NewProp_WeatherData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeatherVolume_SetUserWeatherData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeatherVolume_SetUserWeatherData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeatherVolume, nullptr, "SetUserWeatherData", nullptr, nullptr, Z_Construct_UFunction_AWeatherVolume_SetUserWeatherData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeatherVolume_SetUserWeatherData_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWeatherVolume_SetUserWeatherData_Statics::WeatherVolume_eventSetUserWeatherData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeatherVolume_SetUserWeatherData_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeatherVolume_SetUserWeatherData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AWeatherVolume_SetUserWeatherData_Statics::WeatherVolume_eventSetUserWeatherData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWeatherVolume_SetUserWeatherData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeatherVolume_SetUserWeatherData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeatherVolume::execSetUserWeatherData)
{
	P_GET_STRUCT(FUserWeatherData,Z_Param_WeatherData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetUserWeatherData(Z_Param_WeatherData);
	P_NATIVE_END;
}
// End Class AWeatherVolume Function SetUserWeatherData

// Begin Class AWeatherVolume Function SoftenTransition
struct Z_Construct_UFunction_AWeatherVolume_SoftenTransition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WeatherVolume.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeatherVolume_SoftenTransition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeatherVolume, nullptr, "SoftenTransition", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeatherVolume_SoftenTransition_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeatherVolume_SoftenTransition_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AWeatherVolume_SoftenTransition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeatherVolume_SoftenTransition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeatherVolume::execSoftenTransition)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SoftenTransition();
	P_NATIVE_END;
}
// End Class AWeatherVolume Function SoftenTransition

// Begin Class AWeatherVolume Function StartSoftenTimer
struct Z_Construct_UFunction_AWeatherVolume_StartSoftenTimer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WeatherVolume.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeatherVolume_StartSoftenTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeatherVolume, nullptr, "StartSoftenTimer", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeatherVolume_StartSoftenTimer_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeatherVolume_StartSoftenTimer_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AWeatherVolume_StartSoftenTimer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeatherVolume_StartSoftenTimer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeatherVolume::execStartSoftenTimer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartSoftenTimer();
	P_NATIVE_END;
}
// End Class AWeatherVolume Function StartSoftenTimer

// Begin Class AWeatherVolume Function StartTransitionTimer
struct Z_Construct_UFunction_AWeatherVolume_StartTransitionTimer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WeatherVolume.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeatherVolume_StartTransitionTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeatherVolume, nullptr, "StartTransitionTimer", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeatherVolume_StartTransitionTimer_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeatherVolume_StartTransitionTimer_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AWeatherVolume_StartTransitionTimer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeatherVolume_StartTransitionTimer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeatherVolume::execStartTransitionTimer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartTransitionTimer();
	P_NATIVE_END;
}
// End Class AWeatherVolume Function StartTransitionTimer

// Begin Class AWeatherVolume Function WeatherTransition
struct Z_Construct_UFunction_AWeatherVolume_WeatherTransition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WeatherVolume.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeatherVolume_WeatherTransition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeatherVolume, nullptr, "WeatherTransition", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeatherVolume_WeatherTransition_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeatherVolume_WeatherTransition_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AWeatherVolume_WeatherTransition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeatherVolume_WeatherTransition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeatherVolume::execWeatherTransition)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->WeatherTransition();
	P_NATIVE_END;
}
// End Class AWeatherVolume Function WeatherTransition

// Begin Class AWeatherVolume
void AWeatherVolume::StaticRegisterNativesAWeatherVolume()
{
	UClass* Class = AWeatherVolume::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ManageTransitions", &AWeatherVolume::execManageTransitions },
		{ "SetNiagaraParameters", &AWeatherVolume::execSetNiagaraParameters },
		{ "SetUserWeatherData", &AWeatherVolume::execSetUserWeatherData },
		{ "SoftenTransition", &AWeatherVolume::execSoftenTransition },
		{ "StartSoftenTimer", &AWeatherVolume::execStartSoftenTimer },
		{ "StartTransitionTimer", &AWeatherVolume::execStartTransitionTimer },
		{ "WeatherTransition", &AWeatherVolume::execWeatherTransition },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWeatherVolume);
UClass* Z_Construct_UClass_AWeatherVolume_NoRegister()
{
	return AWeatherVolume::StaticClass();
}
struct Z_Construct_UClass_AWeatherVolume_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "WeatherVolume.h" },
		{ "ModuleRelativePath", "Public/WeatherVolume.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__NS_RainComponent_MetaData[] = {
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//---------- UPROPERTIES\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WeatherVolume.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "---------- UPROPERTIES" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__NS_SnowComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WeatherVolume.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__DayNightComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WeatherVolume.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__VolumeData_MetaData[] = {
		{ "Category", "Weather Data" },
		{ "ModuleRelativePath", "Public/WeatherVolume.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MyWeatherQueue_MetaData[] = {
		{ "Category", "WeatherVolume" },
		{ "ModuleRelativePath", "Public/WeatherVolume.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__CloudsComponent_MetaData[] = {
		{ "Category", "WeatherVolume" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WeatherVolume.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DynamicCloudMaterial_MetaData[] = {
		{ "Category", "WeatherVolume" },
		{ "ModuleRelativePath", "Public/WeatherVolume.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp__NS_RainComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__NS_SnowComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__DayNightComponent;
	static const UECodeGen_Private::FStructPropertyParams NewProp__VolumeData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MyWeatherQueue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MyWeatherQueue;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__CloudsComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DynamicCloudMaterial;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AWeatherVolume_ManageTransitions, "ManageTransitions" }, // 3709294901
		{ &Z_Construct_UFunction_AWeatherVolume_SetNiagaraParameters, "SetNiagaraParameters" }, // 3636446522
		{ &Z_Construct_UFunction_AWeatherVolume_SetUserWeatherData, "SetUserWeatherData" }, // 3045260681
		{ &Z_Construct_UFunction_AWeatherVolume_SoftenTransition, "SoftenTransition" }, // 1288529774
		{ &Z_Construct_UFunction_AWeatherVolume_StartSoftenTimer, "StartSoftenTimer" }, // 1743015352
		{ &Z_Construct_UFunction_AWeatherVolume_StartTransitionTimer, "StartTransitionTimer" }, // 3979493534
		{ &Z_Construct_UFunction_AWeatherVolume_WeatherTransition, "WeatherTransition" }, // 1865933648
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWeatherVolume>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeatherVolume_Statics::NewProp__NS_RainComponent = { "_NS_RainComponent", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeatherVolume, _NS_RainComponent), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__NS_RainComponent_MetaData), NewProp__NS_RainComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeatherVolume_Statics::NewProp__NS_SnowComponent = { "_NS_SnowComponent", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeatherVolume, _NS_SnowComponent), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__NS_SnowComponent_MetaData), NewProp__NS_SnowComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeatherVolume_Statics::NewProp__DayNightComponent = { "_DayNightComponent", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeatherVolume, _DayNightComponent), Z_Construct_UClass_UDayNightComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__DayNightComponent_MetaData), NewProp__DayNightComponent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWeatherVolume_Statics::NewProp__VolumeData = { "_VolumeData", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeatherVolume, _VolumeData), Z_Construct_UScriptStruct_FUserWeatherData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__VolumeData_MetaData), NewProp__VolumeData_MetaData) }; // 2721857485
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWeatherVolume_Statics::NewProp_MyWeatherQueue_Inner = { "MyWeatherQueue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FUserWeatherData, METADATA_PARAMS(0, nullptr) }; // 2721857485
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AWeatherVolume_Statics::NewProp_MyWeatherQueue = { "MyWeatherQueue", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeatherVolume, MyWeatherQueue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MyWeatherQueue_MetaData), NewProp_MyWeatherQueue_MetaData) }; // 2721857485
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeatherVolume_Statics::NewProp__CloudsComponent = { "_CloudsComponent", nullptr, (EPropertyFlags)0x001000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeatherVolume, _CloudsComponent), Z_Construct_UClass_UCloudsComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__CloudsComponent_MetaData), NewProp__CloudsComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeatherVolume_Statics::NewProp_DynamicCloudMaterial = { "DynamicCloudMaterial", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeatherVolume, DynamicCloudMaterial), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DynamicCloudMaterial_MetaData), NewProp_DynamicCloudMaterial_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWeatherVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeatherVolume_Statics::NewProp__NS_RainComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeatherVolume_Statics::NewProp__NS_SnowComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeatherVolume_Statics::NewProp__DayNightComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeatherVolume_Statics::NewProp__VolumeData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeatherVolume_Statics::NewProp_MyWeatherQueue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeatherVolume_Statics::NewProp_MyWeatherQueue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeatherVolume_Statics::NewProp__CloudsComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeatherVolume_Statics::NewProp_DynamicCloudMaterial,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWeatherVolume_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AWeatherVolume_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AVolume,
	(UObject* (*)())Z_Construct_UPackage__Script_ToolsDevForEngines,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWeatherVolume_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AWeatherVolume_Statics::ClassParams = {
	&AWeatherVolume::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AWeatherVolume_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AWeatherVolume_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWeatherVolume_Statics::Class_MetaDataParams), Z_Construct_UClass_AWeatherVolume_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AWeatherVolume()
{
	if (!Z_Registration_Info_UClass_AWeatherVolume.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWeatherVolume.OuterSingleton, Z_Construct_UClass_AWeatherVolume_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AWeatherVolume.OuterSingleton;
}
template<> TOOLSDEVFORENGINES_API UClass* StaticClass<AWeatherVolume>()
{
	return AWeatherVolume::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AWeatherVolume);
AWeatherVolume::~AWeatherVolume() {}
// End Class AWeatherVolume

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_b013728n_Documents_GitHub_ToolsDevForEngines_ToolsDevForEngines_Source_ToolsDevForEngines_Public_WeatherVolume_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AWeatherVolume, AWeatherVolume::StaticClass, TEXT("AWeatherVolume"), &Z_Registration_Info_UClass_AWeatherVolume, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWeatherVolume), 614757111U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_b013728n_Documents_GitHub_ToolsDevForEngines_ToolsDevForEngines_Source_ToolsDevForEngines_Public_WeatherVolume_h_3758284189(TEXT("/Script/ToolsDevForEngines"),
	Z_CompiledInDeferFile_FID_Users_b013728n_Documents_GitHub_ToolsDevForEngines_ToolsDevForEngines_Source_ToolsDevForEngines_Public_WeatherVolume_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_b013728n_Documents_GitHub_ToolsDevForEngines_ToolsDevForEngines_Source_ToolsDevForEngines_Public_WeatherVolume_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ToolsDevForEngines/Public/I_WeatherCalculations.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeI_WeatherCalculations() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
TOOLSDEVFORENGINES_API UClass* Z_Construct_UClass_UI_WeatherCalculations();
TOOLSDEVFORENGINES_API UClass* Z_Construct_UClass_UI_WeatherCalculations_NoRegister();
UPackage* Z_Construct_UPackage__Script_ToolsDevForEngines();
// End Cross Module References

// Begin Interface UI_WeatherCalculations Function GetRainHeaviness
struct I_WeatherCalculations_eventGetRainHeaviness_Parms
{
	float ReturnValue;

	/** Constructor, initializes return property only **/
	I_WeatherCalculations_eventGetRainHeaviness_Parms()
		: ReturnValue(0)
	{
	}
};
float II_WeatherCalculations::GetRainHeaviness()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetRainHeaviness instead.");
	I_WeatherCalculations_eventGetRainHeaviness_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UI_WeatherCalculations_GetRainHeaviness = FName(TEXT("GetRainHeaviness"));
float II_WeatherCalculations::Execute_GetRainHeaviness(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UI_WeatherCalculations::StaticClass()));
	I_WeatherCalculations_eventGetRainHeaviness_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UI_WeatherCalculations_GetRainHeaviness);
	if (Func)
	{
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (II_WeatherCalculations*)(O->GetNativeInterfaceAddress(UI_WeatherCalculations::StaticClass())))
	{
		Parms.ReturnValue = I->GetRainHeaviness_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UI_WeatherCalculations_GetRainHeaviness_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/I_WeatherCalculations.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UI_WeatherCalculations_GetRainHeaviness_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(I_WeatherCalculations_eventGetRainHeaviness_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UI_WeatherCalculations_GetRainHeaviness_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UI_WeatherCalculations_GetRainHeaviness_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UI_WeatherCalculations_GetRainHeaviness_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UI_WeatherCalculations_GetRainHeaviness_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UI_WeatherCalculations, nullptr, "GetRainHeaviness", nullptr, nullptr, Z_Construct_UFunction_UI_WeatherCalculations_GetRainHeaviness_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UI_WeatherCalculations_GetRainHeaviness_Statics::PropPointers), sizeof(I_WeatherCalculations_eventGetRainHeaviness_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UI_WeatherCalculations_GetRainHeaviness_Statics::Function_MetaDataParams), Z_Construct_UFunction_UI_WeatherCalculations_GetRainHeaviness_Statics::Function_MetaDataParams) };
static_assert(sizeof(I_WeatherCalculations_eventGetRainHeaviness_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UI_WeatherCalculations_GetRainHeaviness()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UI_WeatherCalculations_GetRainHeaviness_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(II_WeatherCalculations::execGetRainHeaviness)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetRainHeaviness_Implementation();
	P_NATIVE_END;
}
// End Interface UI_WeatherCalculations Function GetRainHeaviness

// Begin Interface UI_WeatherCalculations
void UI_WeatherCalculations::StaticRegisterNativesUI_WeatherCalculations()
{
	UClass* Class = UI_WeatherCalculations::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetRainHeaviness", &II_WeatherCalculations::execGetRainHeaviness },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UI_WeatherCalculations);
UClass* Z_Construct_UClass_UI_WeatherCalculations_NoRegister()
{
	return UI_WeatherCalculations::StaticClass();
}
struct Z_Construct_UClass_UI_WeatherCalculations_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/I_WeatherCalculations.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UI_WeatherCalculations_GetRainHeaviness, "GetRainHeaviness" }, // 3623939807
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<II_WeatherCalculations>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UI_WeatherCalculations_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_ToolsDevForEngines,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UI_WeatherCalculations_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UI_WeatherCalculations_Statics::ClassParams = {
	&UI_WeatherCalculations::StaticClass,
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
	0x000040A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UI_WeatherCalculations_Statics::Class_MetaDataParams), Z_Construct_UClass_UI_WeatherCalculations_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UI_WeatherCalculations()
{
	if (!Z_Registration_Info_UClass_UI_WeatherCalculations.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UI_WeatherCalculations.OuterSingleton, Z_Construct_UClass_UI_WeatherCalculations_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UI_WeatherCalculations.OuterSingleton;
}
template<> TOOLSDEVFORENGINES_API UClass* StaticClass<UI_WeatherCalculations>()
{
	return UI_WeatherCalculations::StaticClass();
}
UI_WeatherCalculations::UI_WeatherCalculations(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UI_WeatherCalculations);
UI_WeatherCalculations::~UI_WeatherCalculations() {}
// End Interface UI_WeatherCalculations

// Begin Registration
struct Z_CompiledInDeferFile_FID_C_Documents_GitHub_ToolsDevForEngines_ToolsDevForEngines_Source_ToolsDevForEngines_Public_I_WeatherCalculations_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UI_WeatherCalculations, UI_WeatherCalculations::StaticClass, TEXT("UI_WeatherCalculations"), &Z_Registration_Info_UClass_UI_WeatherCalculations, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UI_WeatherCalculations), 4169156868U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_C_Documents_GitHub_ToolsDevForEngines_ToolsDevForEngines_Source_ToolsDevForEngines_Public_I_WeatherCalculations_h_197094730(TEXT("/Script/ToolsDevForEngines"),
	Z_CompiledInDeferFile_FID_C_Documents_GitHub_ToolsDevForEngines_ToolsDevForEngines_Source_ToolsDevForEngines_Public_I_WeatherCalculations_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_C_Documents_GitHub_ToolsDevForEngines_ToolsDevForEngines_Source_ToolsDevForEngines_Public_I_WeatherCalculations_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

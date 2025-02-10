// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ToolsDevForEngines/Public/DayNightComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDayNightComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ADirectionalLight_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
TOOLSDEVFORENGINES_API UClass* Z_Construct_UClass_UDayNightComponent();
TOOLSDEVFORENGINES_API UClass* Z_Construct_UClass_UDayNightComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_ToolsDevForEngines();
// End Cross Module References

// Begin Class UDayNightComponent
void UDayNightComponent::StaticRegisterNativesUDayNightComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDayNightComponent);
UClass* Z_Construct_UClass_UDayNightComponent_NoRegister()
{
	return UDayNightComponent::StaticClass();
}
struct Z_Construct_UClass_UDayNightComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "DayNightComponent.h" },
		{ "ModuleRelativePath", "Public/DayNightComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_skySphere_MetaData[] = {
		{ "Category", "DayNightComponent" },
		{ "ModuleRelativePath", "Public/DayNightComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_lightSource_MetaData[] = {
		{ "Category", "DayNightComponent" },
		{ "ModuleRelativePath", "Public/DayNightComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_turnRate_MetaData[] = {
		{ "Category", "DayNightComponent" },
		{ "ModuleRelativePath", "Public/DayNightComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_enableDayNightCycle_MetaData[] = {
		{ "Category", "DayNightComponent" },
		{ "ModuleRelativePath", "Public/DayNightComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_skySphere;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_lightSource;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_turnRate;
	static void NewProp_enableDayNightCycle_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_enableDayNightCycle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDayNightComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDayNightComponent_Statics::NewProp_skySphere = { "skySphere", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDayNightComponent, skySphere), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_skySphere_MetaData), NewProp_skySphere_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDayNightComponent_Statics::NewProp_lightSource = { "lightSource", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDayNightComponent, lightSource), Z_Construct_UClass_ADirectionalLight_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_lightSource_MetaData), NewProp_lightSource_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDayNightComponent_Statics::NewProp_turnRate = { "turnRate", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDayNightComponent, turnRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_turnRate_MetaData), NewProp_turnRate_MetaData) };
void Z_Construct_UClass_UDayNightComponent_Statics::NewProp_enableDayNightCycle_SetBit(void* Obj)
{
	((UDayNightComponent*)Obj)->enableDayNightCycle = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDayNightComponent_Statics::NewProp_enableDayNightCycle = { "enableDayNightCycle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDayNightComponent), &Z_Construct_UClass_UDayNightComponent_Statics::NewProp_enableDayNightCycle_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_enableDayNightCycle_MetaData), NewProp_enableDayNightCycle_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDayNightComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDayNightComponent_Statics::NewProp_skySphere,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDayNightComponent_Statics::NewProp_lightSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDayNightComponent_Statics::NewProp_turnRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDayNightComponent_Statics::NewProp_enableDayNightCycle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDayNightComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDayNightComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ToolsDevForEngines,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDayNightComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDayNightComponent_Statics::ClassParams = {
	&UDayNightComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDayNightComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDayNightComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDayNightComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UDayNightComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDayNightComponent()
{
	if (!Z_Registration_Info_UClass_UDayNightComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDayNightComponent.OuterSingleton, Z_Construct_UClass_UDayNightComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDayNightComponent.OuterSingleton;
}
template<> TOOLSDEVFORENGINES_API UClass* StaticClass<UDayNightComponent>()
{
	return UDayNightComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDayNightComponent);
UDayNightComponent::~UDayNightComponent() {}
// End Class UDayNightComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_b013728n_Documents_GitHub_ToolsDevForEngines_ToolsDevForEngines_Source_ToolsDevForEngines_Public_DayNightComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDayNightComponent, UDayNightComponent::StaticClass, TEXT("UDayNightComponent"), &Z_Registration_Info_UClass_UDayNightComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDayNightComponent), 271464787U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_b013728n_Documents_GitHub_ToolsDevForEngines_ToolsDevForEngines_Source_ToolsDevForEngines_Public_DayNightComponent_h_346934342(TEXT("/Script/ToolsDevForEngines"),
	Z_CompiledInDeferFile_FID_Users_b013728n_Documents_GitHub_ToolsDevForEngines_ToolsDevForEngines_Source_ToolsDevForEngines_Public_DayNightComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_b013728n_Documents_GitHub_ToolsDevForEngines_ToolsDevForEngines_Source_ToolsDevForEngines_Public_DayNightComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ToolsDevForEngines/Public/WeatherVolume.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeatherVolume() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AVolume();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
PCG_API UClass* Z_Construct_UClass_UPCGComponent_NoRegister();
TOOLSDEVFORENGINES_API UClass* Z_Construct_UClass_AWeatherVolume();
TOOLSDEVFORENGINES_API UClass* Z_Construct_UClass_AWeatherVolume_NoRegister();
UPackage* Z_Construct_UPackage__Script_ToolsDevForEngines();
// End Cross Module References

// Begin Class AWeatherVolume
void AWeatherVolume::StaticRegisterNativesAWeatherVolume()
{
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__RootComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WeatherVolume.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__NS_RainComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WeatherVolume.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__NS_SnowComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WeatherVolume.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__PCGComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WeatherVolume.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp__RootComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__NS_RainComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__NS_SnowComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__PCGComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWeatherVolume>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeatherVolume_Statics::NewProp__RootComponent = { "_RootComponent", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeatherVolume, _RootComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__RootComponent_MetaData), NewProp__RootComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeatherVolume_Statics::NewProp__NS_RainComponent = { "_NS_RainComponent", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeatherVolume, _NS_RainComponent), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__NS_RainComponent_MetaData), NewProp__NS_RainComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeatherVolume_Statics::NewProp__NS_SnowComponent = { "_NS_SnowComponent", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeatherVolume, _NS_SnowComponent), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__NS_SnowComponent_MetaData), NewProp__NS_SnowComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeatherVolume_Statics::NewProp__PCGComponent = { "_PCGComponent", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeatherVolume, _PCGComponent), Z_Construct_UClass_UPCGComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__PCGComponent_MetaData), NewProp__PCGComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWeatherVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeatherVolume_Statics::NewProp__RootComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeatherVolume_Statics::NewProp__NS_RainComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeatherVolume_Statics::NewProp__NS_SnowComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeatherVolume_Statics::NewProp__PCGComponent,
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
	nullptr,
	Z_Construct_UClass_AWeatherVolume_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
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
		{ Z_Construct_UClass_AWeatherVolume, AWeatherVolume::StaticClass, TEXT("AWeatherVolume"), &Z_Registration_Info_UClass_AWeatherVolume, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWeatherVolume), 2355785299U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_b013728n_Documents_GitHub_ToolsDevForEngines_ToolsDevForEngines_Source_ToolsDevForEngines_Public_WeatherVolume_h_1364160305(TEXT("/Script/ToolsDevForEngines"),
	Z_CompiledInDeferFile_FID_Users_b013728n_Documents_GitHub_ToolsDevForEngines_ToolsDevForEngines_Source_ToolsDevForEngines_Public_WeatherVolume_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_b013728n_Documents_GitHub_ToolsDevForEngines_ToolsDevForEngines_Source_ToolsDevForEngines_Public_WeatherVolume_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

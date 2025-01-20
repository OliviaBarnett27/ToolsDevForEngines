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
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWeatherVolume>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
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
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
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
		{ Z_Construct_UClass_AWeatherVolume, AWeatherVolume::StaticClass, TEXT("AWeatherVolume"), &Z_Registration_Info_UClass_AWeatherVolume, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWeatherVolume), 1491732417U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_b013728n_Documents_GitHub_ToolsDevForEngines_ToolsDevForEngines_Source_ToolsDevForEngines_Public_WeatherVolume_h_2758669338(TEXT("/Script/ToolsDevForEngines"),
	Z_CompiledInDeferFile_FID_Users_b013728n_Documents_GitHub_ToolsDevForEngines_ToolsDevForEngines_Source_ToolsDevForEngines_Public_WeatherVolume_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_b013728n_Documents_GitHub_ToolsDevForEngines_ToolsDevForEngines_Source_ToolsDevForEngines_Public_WeatherVolume_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ToolsDevForEngines/ToolsDevForEnginesGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeToolsDevForEnginesGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
TOOLSDEVFORENGINES_API UClass* Z_Construct_UClass_AToolsDevForEnginesGameMode();
TOOLSDEVFORENGINES_API UClass* Z_Construct_UClass_AToolsDevForEnginesGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_ToolsDevForEngines();
// End Cross Module References

// Begin Class AToolsDevForEnginesGameMode
void AToolsDevForEnginesGameMode::StaticRegisterNativesAToolsDevForEnginesGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AToolsDevForEnginesGameMode);
UClass* Z_Construct_UClass_AToolsDevForEnginesGameMode_NoRegister()
{
	return AToolsDevForEnginesGameMode::StaticClass();
}
struct Z_Construct_UClass_AToolsDevForEnginesGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ToolsDevForEnginesGameMode.h" },
		{ "ModuleRelativePath", "ToolsDevForEnginesGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AToolsDevForEnginesGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AToolsDevForEnginesGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ToolsDevForEngines,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AToolsDevForEnginesGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AToolsDevForEnginesGameMode_Statics::ClassParams = {
	&AToolsDevForEnginesGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AToolsDevForEnginesGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AToolsDevForEnginesGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AToolsDevForEnginesGameMode()
{
	if (!Z_Registration_Info_UClass_AToolsDevForEnginesGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AToolsDevForEnginesGameMode.OuterSingleton, Z_Construct_UClass_AToolsDevForEnginesGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AToolsDevForEnginesGameMode.OuterSingleton;
}
template<> TOOLSDEVFORENGINES_API UClass* StaticClass<AToolsDevForEnginesGameMode>()
{
	return AToolsDevForEnginesGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AToolsDevForEnginesGameMode);
AToolsDevForEnginesGameMode::~AToolsDevForEnginesGameMode() {}
// End Class AToolsDevForEnginesGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_b013728n_Documents_GitHub_ToolsDevForEngines_ToolsDevForEngines_Source_ToolsDevForEngines_ToolsDevForEnginesGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AToolsDevForEnginesGameMode, AToolsDevForEnginesGameMode::StaticClass, TEXT("AToolsDevForEnginesGameMode"), &Z_Registration_Info_UClass_AToolsDevForEnginesGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AToolsDevForEnginesGameMode), 1443863167U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_b013728n_Documents_GitHub_ToolsDevForEngines_ToolsDevForEngines_Source_ToolsDevForEngines_ToolsDevForEnginesGameMode_h_3918995124(TEXT("/Script/ToolsDevForEngines"),
	Z_CompiledInDeferFile_FID_Users_b013728n_Documents_GitHub_ToolsDevForEngines_ToolsDevForEngines_Source_ToolsDevForEngines_ToolsDevForEnginesGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_b013728n_Documents_GitHub_ToolsDevForEngines_ToolsDevForEngines_Source_ToolsDevForEngines_ToolsDevForEnginesGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

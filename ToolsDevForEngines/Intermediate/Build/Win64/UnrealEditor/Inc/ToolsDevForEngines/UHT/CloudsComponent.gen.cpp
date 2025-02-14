// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ToolsDevForEngines/Public/CloudsComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCloudsComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AVolumetricCloud_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UVolumetricCloudComponent_NoRegister();
TOOLSDEVFORENGINES_API UClass* Z_Construct_UClass_UCloudsComponent();
TOOLSDEVFORENGINES_API UClass* Z_Construct_UClass_UCloudsComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_ToolsDevForEngines();
// End Cross Module References

// Begin Class UCloudsComponent
void UCloudsComponent::StaticRegisterNativesUCloudsComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCloudsComponent);
UClass* Z_Construct_UClass_UCloudsComponent_NoRegister()
{
	return UCloudsComponent::StaticClass();
}
struct Z_Construct_UClass_UCloudsComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "CloudsComponent.h" },
		{ "ModuleRelativePath", "Public/CloudsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CloudMaterial_MetaData[] = {
		{ "Category", "CloudsComponent" },
		{ "ModuleRelativePath", "Public/CloudsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__VolumetricCloud_MetaData[] = {
		{ "Category", "CloudsComponent" },
		{ "ModuleRelativePath", "Public/CloudsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__VolumetricCloudComponent_MetaData[] = {
		{ "Category", "CloudsComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CloudsComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CloudMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__VolumetricCloud;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__VolumetricCloudComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCloudsComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCloudsComponent_Statics::NewProp_CloudMaterial = { "CloudMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCloudsComponent, CloudMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CloudMaterial_MetaData), NewProp_CloudMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCloudsComponent_Statics::NewProp__VolumetricCloud = { "_VolumetricCloud", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCloudsComponent, _VolumetricCloud), Z_Construct_UClass_AVolumetricCloud_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__VolumetricCloud_MetaData), NewProp__VolumetricCloud_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCloudsComponent_Statics::NewProp__VolumetricCloudComponent = { "_VolumetricCloudComponent", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCloudsComponent, _VolumetricCloudComponent), Z_Construct_UClass_UVolumetricCloudComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__VolumetricCloudComponent_MetaData), NewProp__VolumetricCloudComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCloudsComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCloudsComponent_Statics::NewProp_CloudMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCloudsComponent_Statics::NewProp__VolumetricCloud,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCloudsComponent_Statics::NewProp__VolumetricCloudComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCloudsComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCloudsComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ToolsDevForEngines,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCloudsComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCloudsComponent_Statics::ClassParams = {
	&UCloudsComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCloudsComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCloudsComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCloudsComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UCloudsComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCloudsComponent()
{
	if (!Z_Registration_Info_UClass_UCloudsComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCloudsComponent.OuterSingleton, Z_Construct_UClass_UCloudsComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCloudsComponent.OuterSingleton;
}
template<> TOOLSDEVFORENGINES_API UClass* StaticClass<UCloudsComponent>()
{
	return UCloudsComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCloudsComponent);
UCloudsComponent::~UCloudsComponent() {}
// End Class UCloudsComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_b013728n_Documents_GitHub_ToolsDevForEngines_ToolsDevForEngines_Source_ToolsDevForEngines_Public_CloudsComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCloudsComponent, UCloudsComponent::StaticClass, TEXT("UCloudsComponent"), &Z_Registration_Info_UClass_UCloudsComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCloudsComponent), 4043982506U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_b013728n_Documents_GitHub_ToolsDevForEngines_ToolsDevForEngines_Source_ToolsDevForEngines_Public_CloudsComponent_h_234782538(TEXT("/Script/ToolsDevForEngines"),
	Z_CompiledInDeferFile_FID_Users_b013728n_Documents_GitHub_ToolsDevForEngines_ToolsDevForEngines_Source_ToolsDevForEngines_Public_CloudsComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_b013728n_Documents_GitHub_ToolsDevForEngines_ToolsDevForEngines_Source_ToolsDevForEngines_Public_CloudsComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

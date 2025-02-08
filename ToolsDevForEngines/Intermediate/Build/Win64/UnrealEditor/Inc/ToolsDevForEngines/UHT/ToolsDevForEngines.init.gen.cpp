// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeToolsDevForEngines_init() {}
	TOOLSDEVFORENGINES_API UFunction* Z_Construct_UDelegateFunction_ToolsDevForEngines_OnClimateClearButtonClickedSignature__DelegateSignature();
	TOOLSDEVFORENGINES_API UFunction* Z_Construct_UDelegateFunction_ToolsDevForEngines_OnGenerateButtonClickedSignature__DelegateSignature();
	TOOLSDEVFORENGINES_API UFunction* Z_Construct_UDelegateFunction_ToolsDevForEngines_OnGenerateWeatherButtonClickedSignature__DelegateSignature();
	TOOLSDEVFORENGINES_API UFunction* Z_Construct_UDelegateFunction_ToolsDevForEngines_OnSeasonClearButtonClickedSignature__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_ToolsDevForEngines;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_ToolsDevForEngines()
	{
		if (!Z_Registration_Info_UPackage__Script_ToolsDevForEngines.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_ToolsDevForEngines_OnClimateClearButtonClickedSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ToolsDevForEngines_OnGenerateButtonClickedSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ToolsDevForEngines_OnGenerateWeatherButtonClickedSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ToolsDevForEngines_OnSeasonClearButtonClickedSignature__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/ToolsDevForEngines",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xB1DFAE7D,
				0x77815242,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_ToolsDevForEngines.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_ToolsDevForEngines.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_ToolsDevForEngines(Z_Construct_UPackage__Script_ToolsDevForEngines, TEXT("/Script/ToolsDevForEngines"), Z_Registration_Info_UPackage__Script_ToolsDevForEngines, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xB1DFAE7D, 0x77815242));
PRAGMA_ENABLE_DEPRECATION_WARNINGS

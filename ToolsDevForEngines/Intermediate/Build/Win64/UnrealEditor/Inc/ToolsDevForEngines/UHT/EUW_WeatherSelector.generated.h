// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EUW_WeatherSelector.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TOOLSDEVFORENGINES_EUW_WeatherSelector_generated_h
#error "EUW_WeatherSelector.generated.h already included, missing '#pragma once' in EUW_WeatherSelector.h"
#endif
#define TOOLSDEVFORENGINES_EUW_WeatherSelector_generated_h

#define FID_C_Documents_GitHub_ToolsDevForEngines_ToolsDevForEngines_Source_ToolsDevForEngines_Public_EUW_WeatherSelector_h_21_DELEGATE \
TOOLSDEVFORENGINES_API void FOnGenerateWeatherButtonClickedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnGenerateWeatherButtonClickedSignature);


#define FID_C_Documents_GitHub_ToolsDevForEngines_ToolsDevForEngines_Source_ToolsDevForEngines_Public_EUW_WeatherSelector_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCommunicateWithVolume); \
	DECLARE_FUNCTION(execCalculateRainGravity); \
	DECLARE_FUNCTION(execCalculateRainSpawnRate); \
	DECLARE_FUNCTION(execCalculateWeather); \
	DECLARE_FUNCTION(execReadDataTable); \
	DECLARE_FUNCTION(execSetUserInputs); \
	DECLARE_FUNCTION(execOnButtonClicked);


#define FID_C_Documents_GitHub_ToolsDevForEngines_ToolsDevForEngines_Source_ToolsDevForEngines_Public_EUW_WeatherSelector_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEUW_WeatherSelector(); \
	friend struct Z_Construct_UClass_UEUW_WeatherSelector_Statics; \
public: \
	DECLARE_CLASS(UEUW_WeatherSelector, UEditorUtilityWidget, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ToolsDevForEngines"), NO_API) \
	DECLARE_SERIALIZER(UEUW_WeatherSelector) \
	virtual UObject* _getUObject() const override { return const_cast<UEUW_WeatherSelector*>(this); }


#define FID_C_Documents_GitHub_ToolsDevForEngines_ToolsDevForEngines_Source_ToolsDevForEngines_Public_EUW_WeatherSelector_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEUW_WeatherSelector(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEUW_WeatherSelector(UEUW_WeatherSelector&&); \
	UEUW_WeatherSelector(const UEUW_WeatherSelector&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEUW_WeatherSelector); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEUW_WeatherSelector); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEUW_WeatherSelector) \
	NO_API virtual ~UEUW_WeatherSelector();


#define FID_C_Documents_GitHub_ToolsDevForEngines_ToolsDevForEngines_Source_ToolsDevForEngines_Public_EUW_WeatherSelector_h_23_PROLOG
#define FID_C_Documents_GitHub_ToolsDevForEngines_ToolsDevForEngines_Source_ToolsDevForEngines_Public_EUW_WeatherSelector_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_C_Documents_GitHub_ToolsDevForEngines_ToolsDevForEngines_Source_ToolsDevForEngines_Public_EUW_WeatherSelector_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_C_Documents_GitHub_ToolsDevForEngines_ToolsDevForEngines_Source_ToolsDevForEngines_Public_EUW_WeatherSelector_h_26_INCLASS_NO_PURE_DECLS \
	FID_C_Documents_GitHub_ToolsDevForEngines_ToolsDevForEngines_Source_ToolsDevForEngines_Public_EUW_WeatherSelector_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOOLSDEVFORENGINES_API UClass* StaticClass<class UEUW_WeatherSelector>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_C_Documents_GitHub_ToolsDevForEngines_ToolsDevForEngines_Source_ToolsDevForEngines_Public_EUW_WeatherSelector_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WeatherVolume.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FUserWeatherData;
#ifdef TOOLSDEVFORENGINES_WeatherVolume_generated_h
#error "WeatherVolume.generated.h already included, missing '#pragma once' in WeatherVolume.h"
#endif
#define TOOLSDEVFORENGINES_WeatherVolume_generated_h

#define FID_Users_b013728n_Documents_GitHub_ToolsDevForEngines_ToolsDevForEngines_Source_ToolsDevForEngines_Public_WeatherVolume_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetNiagaraParameters); \
	DECLARE_FUNCTION(execWeatherTransition); \
	DECLARE_FUNCTION(execSetUserWeatherData);


#define FID_Users_b013728n_Documents_GitHub_ToolsDevForEngines_ToolsDevForEngines_Source_ToolsDevForEngines_Public_WeatherVolume_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWeatherVolume(); \
	friend struct Z_Construct_UClass_AWeatherVolume_Statics; \
public: \
	DECLARE_CLASS(AWeatherVolume, AVolume, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ToolsDevForEngines"), NO_API) \
	DECLARE_SERIALIZER(AWeatherVolume)


#define FID_Users_b013728n_Documents_GitHub_ToolsDevForEngines_ToolsDevForEngines_Source_ToolsDevForEngines_Public_WeatherVolume_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AWeatherVolume(AWeatherVolume&&); \
	AWeatherVolume(const AWeatherVolume&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeatherVolume); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeatherVolume); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWeatherVolume) \
	NO_API virtual ~AWeatherVolume();


#define FID_Users_b013728n_Documents_GitHub_ToolsDevForEngines_ToolsDevForEngines_Source_ToolsDevForEngines_Public_WeatherVolume_h_20_PROLOG
#define FID_Users_b013728n_Documents_GitHub_ToolsDevForEngines_ToolsDevForEngines_Source_ToolsDevForEngines_Public_WeatherVolume_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_b013728n_Documents_GitHub_ToolsDevForEngines_ToolsDevForEngines_Source_ToolsDevForEngines_Public_WeatherVolume_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_b013728n_Documents_GitHub_ToolsDevForEngines_ToolsDevForEngines_Source_ToolsDevForEngines_Public_WeatherVolume_h_23_INCLASS_NO_PURE_DECLS \
	FID_Users_b013728n_Documents_GitHub_ToolsDevForEngines_ToolsDevForEngines_Source_ToolsDevForEngines_Public_WeatherVolume_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOOLSDEVFORENGINES_API UClass* StaticClass<class AWeatherVolume>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_b013728n_Documents_GitHub_ToolsDevForEngines_ToolsDevForEngines_Source_ToolsDevForEngines_Public_WeatherVolume_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

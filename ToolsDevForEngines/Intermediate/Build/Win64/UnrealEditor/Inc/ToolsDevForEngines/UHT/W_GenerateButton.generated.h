// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "W_GenerateButton.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AVolume;
class UDataTable;
class UWorld;
#ifdef TOOLSDEVFORENGINES_W_GenerateButton_generated_h
#error "W_GenerateButton.generated.h already included, missing '#pragma once' in W_GenerateButton.h"
#endif
#define TOOLSDEVFORENGINES_W_GenerateButton_generated_h

#define FID_C_Documents_GitHub_ToolsDevForEngines_ToolsDevForEngines_Source_ToolsDevForEngines_Public_W_GenerateButton_h_12_DELEGATE \
TOOLSDEVFORENGINES_API void FOnGenerateButtonClickedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnGenerateButtonClickedSignature);


#define FID_C_Documents_GitHub_ToolsDevForEngines_ToolsDevForEngines_Source_ToolsDevForEngines_Public_W_GenerateButton_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetDataTable); \
	DECLARE_FUNCTION(execFindVolumeByClass); \
	DECLARE_FUNCTION(execOnGenerateButtonClicked);


#define FID_C_Documents_GitHub_ToolsDevForEngines_ToolsDevForEngines_Source_ToolsDevForEngines_Public_W_GenerateButton_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUW_GenerateButton(); \
	friend struct Z_Construct_UClass_UW_GenerateButton_Statics; \
public: \
	DECLARE_CLASS(UW_GenerateButton, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ToolsDevForEngines"), NO_API) \
	DECLARE_SERIALIZER(UW_GenerateButton)


#define FID_C_Documents_GitHub_ToolsDevForEngines_ToolsDevForEngines_Source_ToolsDevForEngines_Public_W_GenerateButton_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UW_GenerateButton(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UW_GenerateButton(UW_GenerateButton&&); \
	UW_GenerateButton(const UW_GenerateButton&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UW_GenerateButton); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UW_GenerateButton); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UW_GenerateButton) \
	NO_API virtual ~UW_GenerateButton();


#define FID_C_Documents_GitHub_ToolsDevForEngines_ToolsDevForEngines_Source_ToolsDevForEngines_Public_W_GenerateButton_h_14_PROLOG
#define FID_C_Documents_GitHub_ToolsDevForEngines_ToolsDevForEngines_Source_ToolsDevForEngines_Public_W_GenerateButton_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_C_Documents_GitHub_ToolsDevForEngines_ToolsDevForEngines_Source_ToolsDevForEngines_Public_W_GenerateButton_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_C_Documents_GitHub_ToolsDevForEngines_ToolsDevForEngines_Source_ToolsDevForEngines_Public_W_GenerateButton_h_17_INCLASS_NO_PURE_DECLS \
	FID_C_Documents_GitHub_ToolsDevForEngines_ToolsDevForEngines_Source_ToolsDevForEngines_Public_W_GenerateButton_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOOLSDEVFORENGINES_API UClass* StaticClass<class UW_GenerateButton>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_C_Documents_GitHub_ToolsDevForEngines_ToolsDevForEngines_Source_ToolsDevForEngines_Public_W_GenerateButton_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

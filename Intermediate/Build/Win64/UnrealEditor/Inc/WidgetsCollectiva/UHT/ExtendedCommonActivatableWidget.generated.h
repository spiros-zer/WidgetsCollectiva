// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ExtendedCommonActivatableWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UInputAction;
struct FDataTableRowHandle;
struct FInputActionBindingHandle;
#ifdef WIDGETSCOLLECTIVA_ExtendedCommonActivatableWidget_generated_h
#error "ExtendedCommonActivatableWidget.generated.h already included, missing '#pragma once' in ExtendedCommonActivatableWidget.h"
#endif
#define WIDGETSCOLLECTIVA_ExtendedCommonActivatableWidget_generated_h

#define FID_Unreal_Projects_Ecifircas_Plugins_WidgetsCollectiva_Source_WidgetsCollectiva_Public_ExtendedCommonActivatableWidget_h_11_DELEGATE \
WIDGETSCOLLECTIVA_API void FInputActionExecutedDelegate_DelegateWrapper(const FScriptDelegate& InputActionExecutedDelegate, FName ActionName);


#define FID_Unreal_Projects_Ecifircas_Plugins_WidgetsCollectiva_Source_WidgetsCollectiva_Public_ExtendedCommonActivatableWidget_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInputActionBindingHandle_Statics; \
	WIDGETSCOLLECTIVA_API static class UScriptStruct* StaticStruct();


template<> WIDGETSCOLLECTIVA_API UScriptStruct* StaticStruct<struct FInputActionBindingHandle>();

#define FID_Unreal_Projects_Ecifircas_Plugins_WidgetsCollectiva_Source_WidgetsCollectiva_Public_ExtendedCommonActivatableWidget_h_28_SPARSE_DATA
#define FID_Unreal_Projects_Ecifircas_Plugins_WidgetsCollectiva_Source_WidgetsCollectiva_Public_ExtendedCommonActivatableWidget_h_28_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Unreal_Projects_Ecifircas_Plugins_WidgetsCollectiva_Source_WidgetsCollectiva_Public_ExtendedCommonActivatableWidget_h_28_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Unreal_Projects_Ecifircas_Plugins_WidgetsCollectiva_Source_WidgetsCollectiva_Public_ExtendedCommonActivatableWidget_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUnregisterAllBindings); \
	DECLARE_FUNCTION(execUnregisterBinding); \
	DECLARE_FUNCTION(execRegisterBinding); \
	DECLARE_FUNCTION(execRegisterBindingWithAction); \
	DECLARE_FUNCTION(execRegisterBindingWithDataTable);


#define FID_Unreal_Projects_Ecifircas_Plugins_WidgetsCollectiva_Source_WidgetsCollectiva_Public_ExtendedCommonActivatableWidget_h_28_ACCESSORS
#define FID_Unreal_Projects_Ecifircas_Plugins_WidgetsCollectiva_Source_WidgetsCollectiva_Public_ExtendedCommonActivatableWidget_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUExtendedCommonActivatableWidget(); \
	friend struct Z_Construct_UClass_UExtendedCommonActivatableWidget_Statics; \
public: \
	DECLARE_CLASS(UExtendedCommonActivatableWidget, UCommonActivatableWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WidgetsCollectiva"), NO_API) \
	DECLARE_SERIALIZER(UExtendedCommonActivatableWidget)


#define FID_Unreal_Projects_Ecifircas_Plugins_WidgetsCollectiva_Source_WidgetsCollectiva_Public_ExtendedCommonActivatableWidget_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UExtendedCommonActivatableWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UExtendedCommonActivatableWidget(UExtendedCommonActivatableWidget&&); \
	NO_API UExtendedCommonActivatableWidget(const UExtendedCommonActivatableWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UExtendedCommonActivatableWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UExtendedCommonActivatableWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UExtendedCommonActivatableWidget) \
	NO_API virtual ~UExtendedCommonActivatableWidget();


#define FID_Unreal_Projects_Ecifircas_Plugins_WidgetsCollectiva_Source_WidgetsCollectiva_Public_ExtendedCommonActivatableWidget_h_25_PROLOG
#define FID_Unreal_Projects_Ecifircas_Plugins_WidgetsCollectiva_Source_WidgetsCollectiva_Public_ExtendedCommonActivatableWidget_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_Ecifircas_Plugins_WidgetsCollectiva_Source_WidgetsCollectiva_Public_ExtendedCommonActivatableWidget_h_28_SPARSE_DATA \
	FID_Unreal_Projects_Ecifircas_Plugins_WidgetsCollectiva_Source_WidgetsCollectiva_Public_ExtendedCommonActivatableWidget_h_28_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Unreal_Projects_Ecifircas_Plugins_WidgetsCollectiva_Source_WidgetsCollectiva_Public_ExtendedCommonActivatableWidget_h_28_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Unreal_Projects_Ecifircas_Plugins_WidgetsCollectiva_Source_WidgetsCollectiva_Public_ExtendedCommonActivatableWidget_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_Ecifircas_Plugins_WidgetsCollectiva_Source_WidgetsCollectiva_Public_ExtendedCommonActivatableWidget_h_28_ACCESSORS \
	FID_Unreal_Projects_Ecifircas_Plugins_WidgetsCollectiva_Source_WidgetsCollectiva_Public_ExtendedCommonActivatableWidget_h_28_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_Ecifircas_Plugins_WidgetsCollectiva_Source_WidgetsCollectiva_Public_ExtendedCommonActivatableWidget_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WIDGETSCOLLECTIVA_API UClass* StaticClass<class UExtendedCommonActivatableWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_Ecifircas_Plugins_WidgetsCollectiva_Source_WidgetsCollectiva_Public_ExtendedCommonActivatableWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

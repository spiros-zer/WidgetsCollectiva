// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WidgetsCollectiva/Public/ModularActionWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModularActionWidget() {}
// Cross Module References
	COMMONUI_API UClass* Z_Construct_UClass_UCommonActionWidget();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	UPackage* Z_Construct_UPackage__Script_WidgetsCollectiva();
	WIDGETSCOLLECTIVA_API UClass* Z_Construct_UClass_UModularActionWidget();
	WIDGETSCOLLECTIVA_API UClass* Z_Construct_UClass_UModularActionWidget_NoRegister();
// End Cross Module References
	void UModularActionWidget::StaticRegisterNativesUModularActionWidget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UModularActionWidget);
	UClass* Z_Construct_UClass_UModularActionWidget_NoRegister()
	{
		return UModularActionWidget::StaticClass();
	}
	struct Z_Construct_UClass_UModularActionWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssociatedInputAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AssociatedInputAction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UModularActionWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommonActionWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_WidgetsCollectiva,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UModularActionWidget_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModularActionWidget_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "ModularActionWidget.h" },
		{ "ModuleRelativePath", "Public/ModularActionWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModularActionWidget_Statics::NewProp_AssociatedInputAction_MetaData[] = {
		{ "Category", "ModularActionWidget" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The Enhanced Input Action that is associated with this Common Input action. */" },
#endif
		{ "ModuleRelativePath", "Public/ModularActionWidget.h" },
		{ "NativeConst", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Enhanced Input Action that is associated with this Common Input action." },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UModularActionWidget_Statics::NewProp_AssociatedInputAction = { "AssociatedInputAction", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UModularActionWidget, AssociatedInputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UModularActionWidget_Statics::NewProp_AssociatedInputAction_MetaData), Z_Construct_UClass_UModularActionWidget_Statics::NewProp_AssociatedInputAction_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UModularActionWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModularActionWidget_Statics::NewProp_AssociatedInputAction,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UModularActionWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UModularActionWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UModularActionWidget_Statics::ClassParams = {
		&UModularActionWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UModularActionWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UModularActionWidget_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UModularActionWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UModularActionWidget_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UModularActionWidget_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UModularActionWidget()
	{
		if (!Z_Registration_Info_UClass_UModularActionWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UModularActionWidget.OuterSingleton, Z_Construct_UClass_UModularActionWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UModularActionWidget.OuterSingleton;
	}
	template<> WIDGETSCOLLECTIVA_API UClass* StaticClass<UModularActionWidget>()
	{
		return UModularActionWidget::StaticClass();
	}
	UModularActionWidget::UModularActionWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UModularActionWidget);
	UModularActionWidget::~UModularActionWidget() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Projects_Ecifircas_Plugins_WidgetsCollectiva_Source_WidgetsCollectiva_Public_ModularActionWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Ecifircas_Plugins_WidgetsCollectiva_Source_WidgetsCollectiva_Public_ModularActionWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UModularActionWidget, UModularActionWidget::StaticClass, TEXT("UModularActionWidget"), &Z_Registration_Info_UClass_UModularActionWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UModularActionWidget), 3667021729U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Ecifircas_Plugins_WidgetsCollectiva_Source_WidgetsCollectiva_Public_ModularActionWidget_h_1317935169(TEXT("/Script/WidgetsCollectiva"),
		Z_CompiledInDeferFile_FID_Unreal_Projects_Ecifircas_Plugins_WidgetsCollectiva_Source_WidgetsCollectiva_Public_ModularActionWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_Ecifircas_Plugins_WidgetsCollectiva_Source_WidgetsCollectiva_Public_ModularActionWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

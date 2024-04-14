// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WidgetsCollectiva/Public/ModularButton.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModularButton() {}
// Cross Module References
	COMMONUI_API UClass* Z_Construct_UClass_UCommonButtonBase();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonTextStyle_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UPackage* Z_Construct_UPackage__Script_WidgetsCollectiva();
	WIDGETSCOLLECTIVA_API UClass* Z_Construct_UClass_UModularButton();
	WIDGETSCOLLECTIVA_API UClass* Z_Construct_UClass_UModularButton_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UModularButton::execSetButtonTextInternal)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_InText);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetButtonTextInternal(Z_Param_Out_InText);
		P_NATIVE_END;
	}
	struct ModularButton_eventSetBtnTxt_Parms
	{
		FText InText;
	};
	struct ModularButton_eventSetBtnTxtStyle_Parms
	{
		TSubclassOf<UCommonTextStyle>  InTxtStyle;
	};
	struct ModularButton_eventUpdateButtonText_Parms
	{
		FText InText;
	};
	static FName NAME_UModularButton_SetBtnTxt = FName(TEXT("SetBtnTxt"));
	void UModularButton::SetBtnTxt(FText const& InText)
	{
		ModularButton_eventSetBtnTxt_Parms Parms;
		Parms.InText=InText;
		ProcessEvent(FindFunctionChecked(NAME_UModularButton_SetBtnTxt),&Parms);
	}
	static FName NAME_UModularButton_SetBtnTxtStyle = FName(TEXT("SetBtnTxtStyle"));
	void UModularButton::SetBtnTxtStyle(TSubclassOf<UCommonTextStyle>  InTxtStyle)
	{
		ModularButton_eventSetBtnTxtStyle_Parms Parms;
		Parms.InTxtStyle=InTxtStyle;
		ProcessEvent(FindFunctionChecked(NAME_UModularButton_SetBtnTxtStyle),&Parms);
	}
	static FName NAME_UModularButton_UpdateButtonText = FName(TEXT("UpdateButtonText"));
	void UModularButton::UpdateButtonText(FText const& InText)
	{
		ModularButton_eventUpdateButtonText_Parms Parms;
		Parms.InText=InText;
		ProcessEvent(FindFunctionChecked(NAME_UModularButton_UpdateButtonText),&Parms);
	}
	void UModularButton::StaticRegisterNativesUModularButton()
	{
		UClass* Class = UModularButton::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetButtonTextInternal", &UModularButton::execSetButtonTextInternal },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UModularButton_SetBtnTxt_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InText_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_InText;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModularButton_SetBtnTxt_Statics::NewProp_InText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UModularButton_SetBtnTxt_Statics::NewProp_InText = { "InText", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularButton_eventSetBtnTxt_Parms, InText), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularButton_SetBtnTxt_Statics::NewProp_InText_MetaData), Z_Construct_UFunction_UModularButton_SetBtnTxt_Statics::NewProp_InText_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularButton_SetBtnTxt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularButton_SetBtnTxt_Statics::NewProp_InText,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModularButton_SetBtnTxt_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "FText" },
		{ "Category", "Text" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sets the button text to the input value. */" },
#endif
		{ "ModuleRelativePath", "Public/ModularButton.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the button text to the input value." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularButton_SetBtnTxt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularButton, nullptr, "SetBtnTxt", nullptr, nullptr, Z_Construct_UFunction_UModularButton_SetBtnTxt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularButton_SetBtnTxt_Statics::PropPointers), sizeof(ModularButton_eventSetBtnTxt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularButton_SetBtnTxt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModularButton_SetBtnTxt_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularButton_SetBtnTxt_Statics::PropPointers) < 2048);
	static_assert(sizeof(ModularButton_eventSetBtnTxt_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UModularButton_SetBtnTxt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModularButton_SetBtnTxt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModularButton_SetBtnTxtStyle_Statics
	{
		static const UECodeGen_Private::FClassPropertyParams NewProp_InTxtStyle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UModularButton_SetBtnTxtStyle_Statics::NewProp_InTxtStyle = { "InTxtStyle", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularButton_eventSetBtnTxtStyle_Parms, InTxtStyle), Z_Construct_UClass_UClass, Z_Construct_UClass_UCommonTextStyle_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularButton_SetBtnTxtStyle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularButton_SetBtnTxtStyle_Statics::NewProp_InTxtStyle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModularButton_SetBtnTxtStyle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Text" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Sets the button's text style. this is implemented due to the fact that if a text style is defined in the\n\x09 * button style it will still not be applied on its own.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/ModularButton.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the button's text style. this is implemented due to the fact that if a text style is defined in the\nbutton style it will still not be applied on its own." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularButton_SetBtnTxtStyle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularButton, nullptr, "SetBtnTxtStyle", nullptr, nullptr, Z_Construct_UFunction_UModularButton_SetBtnTxtStyle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularButton_SetBtnTxtStyle_Statics::PropPointers), sizeof(ModularButton_eventSetBtnTxtStyle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularButton_SetBtnTxtStyle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModularButton_SetBtnTxtStyle_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularButton_SetBtnTxtStyle_Statics::PropPointers) < 2048);
	static_assert(sizeof(ModularButton_eventSetBtnTxtStyle_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UModularButton_SetBtnTxtStyle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModularButton_SetBtnTxtStyle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModularButton_SetButtonTextInternal_Statics
	{
		struct ModularButton_eventSetButtonTextInternal_Parms
		{
			FText InText;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InText_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_InText;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModularButton_SetButtonTextInternal_Statics::NewProp_InText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UModularButton_SetButtonTextInternal_Statics::NewProp_InText = { "InText", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularButton_eventSetButtonTextInternal_Parms, InText), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularButton_SetButtonTextInternal_Statics::NewProp_InText_MetaData), Z_Construct_UFunction_UModularButton_SetButtonTextInternal_Statics::NewProp_InText_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularButton_SetButtonTextInternal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularButton_SetButtonTextInternal_Statics::NewProp_InText,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModularButton_SetButtonTextInternal_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Used in order to change the button's text from C++ side. It should only be used from C++ and not blueprints. */" },
#endif
		{ "ModuleRelativePath", "Public/ModularButton.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Used in order to change the button's text from C++ side. It should only be used from C++ and not blueprints." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularButton_SetButtonTextInternal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularButton, nullptr, "SetButtonTextInternal", nullptr, nullptr, Z_Construct_UFunction_UModularButton_SetButtonTextInternal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularButton_SetButtonTextInternal_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModularButton_SetButtonTextInternal_Statics::ModularButton_eventSetButtonTextInternal_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularButton_SetButtonTextInternal_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModularButton_SetButtonTextInternal_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularButton_SetButtonTextInternal_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UModularButton_SetButtonTextInternal_Statics::ModularButton_eventSetButtonTextInternal_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UModularButton_SetButtonTextInternal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModularButton_SetButtonTextInternal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModularButton_UpdateButtonText_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InText_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_InText;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModularButton_UpdateButtonText_Statics::NewProp_InText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UModularButton_UpdateButtonText_Statics::NewProp_InText = { "InText", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularButton_eventUpdateButtonText_Parms, InText), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularButton_UpdateButtonText_Statics::NewProp_InText_MetaData), Z_Construct_UFunction_UModularButton_UpdateButtonText_Statics::NewProp_InText_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularButton_UpdateButtonText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularButton_UpdateButtonText_Statics::NewProp_InText,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModularButton_UpdateButtonText_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Diode to update the button's text when it has been changed from C++ side - e.g. notification creation. All\n\x09 * implemented interfaces that change the button's text have to do it through this function for DRY.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/ModularButton.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Diode to update the button's text when it has been changed from C++ side - e.g. notification creation. All\nimplemented interfaces that change the button's text have to do it through this function for DRY." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularButton_UpdateButtonText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularButton, nullptr, "UpdateButtonText", nullptr, nullptr, Z_Construct_UFunction_UModularButton_UpdateButtonText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularButton_UpdateButtonText_Statics::PropPointers), sizeof(ModularButton_eventUpdateButtonText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularButton_UpdateButtonText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModularButton_UpdateButtonText_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularButton_UpdateButtonText_Statics::PropPointers) < 2048);
	static_assert(sizeof(ModularButton_eventUpdateButtonText_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UModularButton_UpdateButtonText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModularButton_UpdateButtonText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UModularButton);
	UClass* Z_Construct_UClass_UModularButton_NoRegister()
	{
		return UModularButton::StaticClass();
	}
	struct Z_Construct_UClass_UModularButton_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UModularButton_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommonButtonBase,
		(UObject* (*)())Z_Construct_UPackage__Script_WidgetsCollectiva,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UModularButton_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UModularButton_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UModularButton_SetBtnTxt, "SetBtnTxt" }, // 3109720978
		{ &Z_Construct_UFunction_UModularButton_SetBtnTxtStyle, "SetBtnTxtStyle" }, // 1855667179
		{ &Z_Construct_UFunction_UModularButton_SetButtonTextInternal, "SetButtonTextInternal" }, // 2413663551
		{ &Z_Construct_UFunction_UModularButton_UpdateButtonText, "UpdateButtonText" }, // 1989934890
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UModularButton_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModularButton_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "ModularButton.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ModularButton.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UModularButton_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UModularButton>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UModularButton_Statics::ClassParams = {
		&UModularButton::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B010A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UModularButton_Statics::Class_MetaDataParams), Z_Construct_UClass_UModularButton_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UModularButton()
	{
		if (!Z_Registration_Info_UClass_UModularButton.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UModularButton.OuterSingleton, Z_Construct_UClass_UModularButton_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UModularButton.OuterSingleton;
	}
	template<> WIDGETSCOLLECTIVA_API UClass* StaticClass<UModularButton>()
	{
		return UModularButton::StaticClass();
	}
	UModularButton::UModularButton(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UModularButton);
	UModularButton::~UModularButton() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Projects_Ecifircas_Plugins_WidgetsCollectiva_Source_WidgetsCollectiva_Public_ModularButton_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Ecifircas_Plugins_WidgetsCollectiva_Source_WidgetsCollectiva_Public_ModularButton_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UModularButton, UModularButton::StaticClass, TEXT("UModularButton"), &Z_Registration_Info_UClass_UModularButton, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UModularButton), 3617543020U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Ecifircas_Plugins_WidgetsCollectiva_Source_WidgetsCollectiva_Public_ModularButton_h_2702486270(TEXT("/Script/WidgetsCollectiva"),
		Z_CompiledInDeferFile_FID_Unreal_Projects_Ecifircas_Plugins_WidgetsCollectiva_Source_WidgetsCollectiva_Public_ModularButton_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_Ecifircas_Plugins_WidgetsCollectiva_Source_WidgetsCollectiva_Public_ModularButton_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

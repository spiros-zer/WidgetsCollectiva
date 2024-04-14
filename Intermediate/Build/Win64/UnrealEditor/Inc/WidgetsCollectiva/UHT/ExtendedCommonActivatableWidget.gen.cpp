// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WidgetsCollectiva/Public/ExtendedCommonActivatableWidget.h"
#include "../../Source/Runtime/Engine/Classes/Engine/DataTable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExtendedCommonActivatableWidget() {}
// Cross Module References
	COMMONUI_API UClass* Z_Construct_UClass_UCommonActivatableWidget();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDataTableRowHandle();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	UPackage* Z_Construct_UPackage__Script_WidgetsCollectiva();
	WIDGETSCOLLECTIVA_API UClass* Z_Construct_UClass_UExtendedCommonActivatableWidget();
	WIDGETSCOLLECTIVA_API UClass* Z_Construct_UClass_UExtendedCommonActivatableWidget_NoRegister();
	WIDGETSCOLLECTIVA_API UFunction* Z_Construct_UDelegateFunction_WidgetsCollectiva_InputActionExecutedDelegate__DelegateSignature();
	WIDGETSCOLLECTIVA_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionBindingHandle();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_WidgetsCollectiva_InputActionExecutedDelegate__DelegateSignature_Statics
	{
		struct _Script_WidgetsCollectiva_eventInputActionExecutedDelegate_Parms
		{
			FName ActionName;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ActionName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_WidgetsCollectiva_InputActionExecutedDelegate__DelegateSignature_Statics::NewProp_ActionName = { "ActionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_WidgetsCollectiva_eventInputActionExecutedDelegate_Parms, ActionName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_WidgetsCollectiva_InputActionExecutedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_WidgetsCollectiva_InputActionExecutedDelegate__DelegateSignature_Statics::NewProp_ActionName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_WidgetsCollectiva_InputActionExecutedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ExtendedCommonActivatableWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_WidgetsCollectiva_InputActionExecutedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_WidgetsCollectiva, nullptr, "InputActionExecutedDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_WidgetsCollectiva_InputActionExecutedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WidgetsCollectiva_InputActionExecutedDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_WidgetsCollectiva_InputActionExecutedDelegate__DelegateSignature_Statics::_Script_WidgetsCollectiva_eventInputActionExecutedDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WidgetsCollectiva_InputActionExecutedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_WidgetsCollectiva_InputActionExecutedDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WidgetsCollectiva_InputActionExecutedDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_WidgetsCollectiva_InputActionExecutedDelegate__DelegateSignature_Statics::_Script_WidgetsCollectiva_eventInputActionExecutedDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_WidgetsCollectiva_InputActionExecutedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_WidgetsCollectiva_InputActionExecutedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FInputActionExecutedDelegate_DelegateWrapper(const FScriptDelegate& InputActionExecutedDelegate, FName ActionName)
{
	struct _Script_WidgetsCollectiva_eventInputActionExecutedDelegate_Parms
	{
		FName ActionName;
	};
	_Script_WidgetsCollectiva_eventInputActionExecutedDelegate_Parms Parms;
	Parms.ActionName=ActionName;
	InputActionExecutedDelegate.ProcessDelegate<UObject>(&Parms);
}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InputActionBindingHandle;
class UScriptStruct* FInputActionBindingHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InputActionBindingHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InputActionBindingHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputActionBindingHandle, (UObject*)Z_Construct_UPackage__Script_WidgetsCollectiva(), TEXT("InputActionBindingHandle"));
	}
	return Z_Registration_Info_UScriptStruct_InputActionBindingHandle.OuterSingleton;
}
template<> WIDGETSCOLLECTIVA_API UScriptStruct* StaticStruct<FInputActionBindingHandle>()
{
	return FInputActionBindingHandle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FInputActionBindingHandle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputActionBindingHandle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ExtendedCommonActivatableWidget.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInputActionBindingHandle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputActionBindingHandle>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputActionBindingHandle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WidgetsCollectiva,
		nullptr,
		&NewStructOps,
		"InputActionBindingHandle",
		nullptr,
		0,
		sizeof(FInputActionBindingHandle),
		alignof(FInputActionBindingHandle),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputActionBindingHandle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInputActionBindingHandle_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInputActionBindingHandle()
	{
		if (!Z_Registration_Info_UScriptStruct_InputActionBindingHandle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InputActionBindingHandle.InnerSingleton, Z_Construct_UScriptStruct_FInputActionBindingHandle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_InputActionBindingHandle.InnerSingleton;
	}
	DEFINE_FUNCTION(UExtendedCommonActivatableWidget::execUnregisterAllBindings)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnregisterAllBindings();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExtendedCommonActivatableWidget::execUnregisterBinding)
	{
		P_GET_STRUCT(FInputActionBindingHandle,Z_Param_BindingHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnregisterBinding(Z_Param_BindingHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExtendedCommonActivatableWidget::execRegisterBinding)
	{
		P_GET_OBJECT(UInputAction,Z_Param_InputAction);
		P_GET_STRUCT_REF(FInputActionBindingHandle,Z_Param_Out_BindingHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RegisterBinding(Z_Param_InputAction,Z_Param_Out_BindingHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExtendedCommonActivatableWidget::execRegisterBindingWithAction)
	{
		P_GET_OBJECT(UInputAction,Z_Param_InputAction);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_STRUCT_REF(FInputActionBindingHandle,Z_Param_Out_BindingHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RegisterBindingWithAction(Z_Param_InputAction,FInputActionExecutedDelegate(Z_Param_Out_Callback),Z_Param_Out_BindingHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExtendedCommonActivatableWidget::execRegisterBindingWithDataTable)
	{
		P_GET_STRUCT(FDataTableRowHandle,Z_Param_InputAction);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_GET_STRUCT_REF(FInputActionBindingHandle,Z_Param_Out_BindingHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RegisterBindingWithDataTable(Z_Param_InputAction,FInputActionExecutedDelegate(Z_Param_Out_Callback),Z_Param_Out_BindingHandle);
		P_NATIVE_END;
	}
	void UExtendedCommonActivatableWidget::StaticRegisterNativesUExtendedCommonActivatableWidget()
	{
		UClass* Class = UExtendedCommonActivatableWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RegisterBinding", &UExtendedCommonActivatableWidget::execRegisterBinding },
			{ "RegisterBindingWithAction", &UExtendedCommonActivatableWidget::execRegisterBindingWithAction },
			{ "RegisterBindingWithDataTable", &UExtendedCommonActivatableWidget::execRegisterBindingWithDataTable },
			{ "UnregisterAllBindings", &UExtendedCommonActivatableWidget::execUnregisterAllBindings },
			{ "UnregisterBinding", &UExtendedCommonActivatableWidget::execUnregisterBinding },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UExtendedCommonActivatableWidget_RegisterBinding_Statics
	{
		struct ExtendedCommonActivatableWidget_eventRegisterBinding_Parms
		{
			UInputAction* InputAction;
			FInputActionBindingHandle BindingHandle;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InputAction;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BindingHandle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UExtendedCommonActivatableWidget_RegisterBinding_Statics::NewProp_InputAction = { "InputAction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExtendedCommonActivatableWidget_eventRegisterBinding_Parms, InputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UExtendedCommonActivatableWidget_RegisterBinding_Statics::NewProp_BindingHandle = { "BindingHandle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExtendedCommonActivatableWidget_eventRegisterBinding_Parms, BindingHandle), Z_Construct_UScriptStruct_FInputActionBindingHandle, METADATA_PARAMS(0, nullptr) }; // 2972835018
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExtendedCommonActivatableWidget_RegisterBinding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExtendedCommonActivatableWidget_RegisterBinding_Statics::NewProp_InputAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExtendedCommonActivatableWidget_RegisterBinding_Statics::NewProp_BindingHandle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExtendedCommonActivatableWidget_RegisterBinding_Statics::Function_MetaDataParams[] = {
		{ "Category", "ExtendedActivatableWidget" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Registers an Input Action to be displayed in the action bar of the widget if any is present. If the the action is\n\x09 * pressed then the OnExecuteInputAction() will fire. */" },
#endif
		{ "ModuleRelativePath", "Public/ExtendedCommonActivatableWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Registers an Input Action to be displayed in the action bar of the widget if any is present. If the the action is\npressed then the OnExecuteInputAction() will fire." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExtendedCommonActivatableWidget_RegisterBinding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExtendedCommonActivatableWidget, nullptr, "RegisterBinding", nullptr, nullptr, Z_Construct_UFunction_UExtendedCommonActivatableWidget_RegisterBinding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExtendedCommonActivatableWidget_RegisterBinding_Statics::PropPointers), sizeof(Z_Construct_UFunction_UExtendedCommonActivatableWidget_RegisterBinding_Statics::ExtendedCommonActivatableWidget_eventRegisterBinding_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UExtendedCommonActivatableWidget_RegisterBinding_Statics::Function_MetaDataParams), Z_Construct_UFunction_UExtendedCommonActivatableWidget_RegisterBinding_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UExtendedCommonActivatableWidget_RegisterBinding_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UExtendedCommonActivatableWidget_RegisterBinding_Statics::ExtendedCommonActivatableWidget_eventRegisterBinding_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UExtendedCommonActivatableWidget_RegisterBinding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExtendedCommonActivatableWidget_RegisterBinding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExtendedCommonActivatableWidget_RegisterBindingWithAction_Statics
	{
		struct ExtendedCommonActivatableWidget_eventRegisterBindingWithAction_Parms
		{
			UInputAction* InputAction;
			FScriptDelegate Callback;
			FInputActionBindingHandle BindingHandle;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InputAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BindingHandle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UExtendedCommonActivatableWidget_RegisterBindingWithAction_Statics::NewProp_InputAction = { "InputAction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExtendedCommonActivatableWidget_eventRegisterBindingWithAction_Parms, InputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExtendedCommonActivatableWidget_RegisterBindingWithAction_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UExtendedCommonActivatableWidget_RegisterBindingWithAction_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExtendedCommonActivatableWidget_eventRegisterBindingWithAction_Parms, Callback), Z_Construct_UDelegateFunction_WidgetsCollectiva_InputActionExecutedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UExtendedCommonActivatableWidget_RegisterBindingWithAction_Statics::NewProp_Callback_MetaData), Z_Construct_UFunction_UExtendedCommonActivatableWidget_RegisterBindingWithAction_Statics::NewProp_Callback_MetaData) }; // 2365932865
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UExtendedCommonActivatableWidget_RegisterBindingWithAction_Statics::NewProp_BindingHandle = { "BindingHandle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExtendedCommonActivatableWidget_eventRegisterBindingWithAction_Parms, BindingHandle), Z_Construct_UScriptStruct_FInputActionBindingHandle, METADATA_PARAMS(0, nullptr) }; // 2972835018
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExtendedCommonActivatableWidget_RegisterBindingWithAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExtendedCommonActivatableWidget_RegisterBindingWithAction_Statics::NewProp_InputAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExtendedCommonActivatableWidget_RegisterBindingWithAction_Statics::NewProp_Callback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExtendedCommonActivatableWidget_RegisterBindingWithAction_Statics::NewProp_BindingHandle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExtendedCommonActivatableWidget_RegisterBindingWithAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "ExtendedActivatableWidget" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Registers an Input Action to be displayed in the action bar of the widget if any is present. If the the action is\n\x09 * pressed then the callback set in the blueprint event of this will be executed. */" },
#endif
		{ "ModuleRelativePath", "Public/ExtendedCommonActivatableWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Registers an Input Action to be displayed in the action bar of the widget if any is present. If the the action is\npressed then the callback set in the blueprint event of this will be executed." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExtendedCommonActivatableWidget_RegisterBindingWithAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExtendedCommonActivatableWidget, nullptr, "RegisterBindingWithAction", nullptr, nullptr, Z_Construct_UFunction_UExtendedCommonActivatableWidget_RegisterBindingWithAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExtendedCommonActivatableWidget_RegisterBindingWithAction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UExtendedCommonActivatableWidget_RegisterBindingWithAction_Statics::ExtendedCommonActivatableWidget_eventRegisterBindingWithAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UExtendedCommonActivatableWidget_RegisterBindingWithAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UExtendedCommonActivatableWidget_RegisterBindingWithAction_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UExtendedCommonActivatableWidget_RegisterBindingWithAction_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UExtendedCommonActivatableWidget_RegisterBindingWithAction_Statics::ExtendedCommonActivatableWidget_eventRegisterBindingWithAction_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UExtendedCommonActivatableWidget_RegisterBindingWithAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExtendedCommonActivatableWidget_RegisterBindingWithAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExtendedCommonActivatableWidget_RegisterBindingWithDataTable_Statics
	{
		struct ExtendedCommonActivatableWidget_eventRegisterBindingWithDataTable_Parms
		{
			FDataTableRowHandle InputAction;
			FScriptDelegate Callback;
			FInputActionBindingHandle BindingHandle;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BindingHandle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UExtendedCommonActivatableWidget_RegisterBindingWithDataTable_Statics::NewProp_InputAction = { "InputAction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExtendedCommonActivatableWidget_eventRegisterBindingWithDataTable_Parms, InputAction), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(0, nullptr) }; // 1575649708
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExtendedCommonActivatableWidget_RegisterBindingWithDataTable_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UExtendedCommonActivatableWidget_RegisterBindingWithDataTable_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExtendedCommonActivatableWidget_eventRegisterBindingWithDataTable_Parms, Callback), Z_Construct_UDelegateFunction_WidgetsCollectiva_InputActionExecutedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UExtendedCommonActivatableWidget_RegisterBindingWithDataTable_Statics::NewProp_Callback_MetaData), Z_Construct_UFunction_UExtendedCommonActivatableWidget_RegisterBindingWithDataTable_Statics::NewProp_Callback_MetaData) }; // 2365932865
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UExtendedCommonActivatableWidget_RegisterBindingWithDataTable_Statics::NewProp_BindingHandle = { "BindingHandle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExtendedCommonActivatableWidget_eventRegisterBindingWithDataTable_Parms, BindingHandle), Z_Construct_UScriptStruct_FInputActionBindingHandle, METADATA_PARAMS(0, nullptr) }; // 2972835018
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExtendedCommonActivatableWidget_RegisterBindingWithDataTable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExtendedCommonActivatableWidget_RegisterBindingWithDataTable_Statics::NewProp_InputAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExtendedCommonActivatableWidget_RegisterBindingWithDataTable_Statics::NewProp_Callback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExtendedCommonActivatableWidget_RegisterBindingWithDataTable_Statics::NewProp_BindingHandle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExtendedCommonActivatableWidget_RegisterBindingWithDataTable_Statics::Function_MetaDataParams[] = {
		{ "Category", "ExtendedActivatableWidget" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Deprecated since in its current state it produces error invalid input action row provided. Don't have plans to\n\x09 * fix it currently. */" },
#endif
		{ "DeprecatedFunction", "" },
		{ "ModuleRelativePath", "Public/ExtendedCommonActivatableWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Deprecated since in its current state it produces error invalid input action row provided. Don't have plans to\nfix it currently." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExtendedCommonActivatableWidget_RegisterBindingWithDataTable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExtendedCommonActivatableWidget, nullptr, "RegisterBindingWithDataTable", nullptr, nullptr, Z_Construct_UFunction_UExtendedCommonActivatableWidget_RegisterBindingWithDataTable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExtendedCommonActivatableWidget_RegisterBindingWithDataTable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UExtendedCommonActivatableWidget_RegisterBindingWithDataTable_Statics::ExtendedCommonActivatableWidget_eventRegisterBindingWithDataTable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UExtendedCommonActivatableWidget_RegisterBindingWithDataTable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UExtendedCommonActivatableWidget_RegisterBindingWithDataTable_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UExtendedCommonActivatableWidget_RegisterBindingWithDataTable_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UExtendedCommonActivatableWidget_RegisterBindingWithDataTable_Statics::ExtendedCommonActivatableWidget_eventRegisterBindingWithDataTable_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UExtendedCommonActivatableWidget_RegisterBindingWithDataTable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExtendedCommonActivatableWidget_RegisterBindingWithDataTable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExtendedCommonActivatableWidget_UnregisterAllBindings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExtendedCommonActivatableWidget_UnregisterAllBindings_Statics::Function_MetaDataParams[] = {
		{ "Category", "ExtendedActivatableWidget" },
		{ "ModuleRelativePath", "Public/ExtendedCommonActivatableWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExtendedCommonActivatableWidget_UnregisterAllBindings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExtendedCommonActivatableWidget, nullptr, "UnregisterAllBindings", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UExtendedCommonActivatableWidget_UnregisterAllBindings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UExtendedCommonActivatableWidget_UnregisterAllBindings_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UExtendedCommonActivatableWidget_UnregisterAllBindings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExtendedCommonActivatableWidget_UnregisterAllBindings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExtendedCommonActivatableWidget_UnregisterBinding_Statics
	{
		struct ExtendedCommonActivatableWidget_eventUnregisterBinding_Parms
		{
			FInputActionBindingHandle BindingHandle;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_BindingHandle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UExtendedCommonActivatableWidget_UnregisterBinding_Statics::NewProp_BindingHandle = { "BindingHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExtendedCommonActivatableWidget_eventUnregisterBinding_Parms, BindingHandle), Z_Construct_UScriptStruct_FInputActionBindingHandle, METADATA_PARAMS(0, nullptr) }; // 2972835018
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExtendedCommonActivatableWidget_UnregisterBinding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExtendedCommonActivatableWidget_UnregisterBinding_Statics::NewProp_BindingHandle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExtendedCommonActivatableWidget_UnregisterBinding_Statics::Function_MetaDataParams[] = {
		{ "Category", "ExtendedActivatableWidget" },
		{ "ModuleRelativePath", "Public/ExtendedCommonActivatableWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExtendedCommonActivatableWidget_UnregisterBinding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExtendedCommonActivatableWidget, nullptr, "UnregisterBinding", nullptr, nullptr, Z_Construct_UFunction_UExtendedCommonActivatableWidget_UnregisterBinding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExtendedCommonActivatableWidget_UnregisterBinding_Statics::PropPointers), sizeof(Z_Construct_UFunction_UExtendedCommonActivatableWidget_UnregisterBinding_Statics::ExtendedCommonActivatableWidget_eventUnregisterBinding_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UExtendedCommonActivatableWidget_UnregisterBinding_Statics::Function_MetaDataParams), Z_Construct_UFunction_UExtendedCommonActivatableWidget_UnregisterBinding_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UExtendedCommonActivatableWidget_UnregisterBinding_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UExtendedCommonActivatableWidget_UnregisterBinding_Statics::ExtendedCommonActivatableWidget_eventUnregisterBinding_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UExtendedCommonActivatableWidget_UnregisterBinding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExtendedCommonActivatableWidget_UnregisterBinding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UExtendedCommonActivatableWidget);
	UClass* Z_Construct_UClass_UExtendedCommonActivatableWidget_NoRegister()
	{
		return UExtendedCommonActivatableWidget::StaticClass();
	}
	struct Z_Construct_UClass_UExtendedCommonActivatableWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UExtendedCommonActivatableWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommonActivatableWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_WidgetsCollectiva,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UExtendedCommonActivatableWidget_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UExtendedCommonActivatableWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UExtendedCommonActivatableWidget_RegisterBinding, "RegisterBinding" }, // 1321848154
		{ &Z_Construct_UFunction_UExtendedCommonActivatableWidget_RegisterBindingWithAction, "RegisterBindingWithAction" }, // 2076117877
		{ &Z_Construct_UFunction_UExtendedCommonActivatableWidget_RegisterBindingWithDataTable, "RegisterBindingWithDataTable" }, // 4239346617
		{ &Z_Construct_UFunction_UExtendedCommonActivatableWidget_UnregisterAllBindings, "UnregisterAllBindings" }, // 4035874371
		{ &Z_Construct_UFunction_UExtendedCommonActivatableWidget_UnregisterBinding, "UnregisterBinding" }, // 449404097
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UExtendedCommonActivatableWidget_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExtendedCommonActivatableWidget_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * An extended activatable widget offers the ability to add more actions displayed in the back handler action bar. This\n * is done by using one of the register binding functions to register an input action.\n */" },
#endif
		{ "DisableNativeTick", "" },
		{ "IncludePath", "ExtendedCommonActivatableWidget.h" },
		{ "ModuleRelativePath", "Public/ExtendedCommonActivatableWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "An extended activatable widget offers the ability to add more actions displayed in the back handler action bar. This\nis done by using one of the register binding functions to register an input action." },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UExtendedCommonActivatableWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UExtendedCommonActivatableWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UExtendedCommonActivatableWidget_Statics::ClassParams = {
		&UExtendedCommonActivatableWidget::StaticClass,
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
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UExtendedCommonActivatableWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UExtendedCommonActivatableWidget_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UExtendedCommonActivatableWidget()
	{
		if (!Z_Registration_Info_UClass_UExtendedCommonActivatableWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UExtendedCommonActivatableWidget.OuterSingleton, Z_Construct_UClass_UExtendedCommonActivatableWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UExtendedCommonActivatableWidget.OuterSingleton;
	}
	template<> WIDGETSCOLLECTIVA_API UClass* StaticClass<UExtendedCommonActivatableWidget>()
	{
		return UExtendedCommonActivatableWidget::StaticClass();
	}
	UExtendedCommonActivatableWidget::UExtendedCommonActivatableWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UExtendedCommonActivatableWidget);
	UExtendedCommonActivatableWidget::~UExtendedCommonActivatableWidget() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Projects_Ecifircas_Plugins_WidgetsCollectiva_Source_WidgetsCollectiva_Public_ExtendedCommonActivatableWidget_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Ecifircas_Plugins_WidgetsCollectiva_Source_WidgetsCollectiva_Public_ExtendedCommonActivatableWidget_h_Statics::ScriptStructInfo[] = {
		{ FInputActionBindingHandle::StaticStruct, Z_Construct_UScriptStruct_FInputActionBindingHandle_Statics::NewStructOps, TEXT("InputActionBindingHandle"), &Z_Registration_Info_UScriptStruct_InputActionBindingHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInputActionBindingHandle), 2972835018U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Ecifircas_Plugins_WidgetsCollectiva_Source_WidgetsCollectiva_Public_ExtendedCommonActivatableWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UExtendedCommonActivatableWidget, UExtendedCommonActivatableWidget::StaticClass, TEXT("UExtendedCommonActivatableWidget"), &Z_Registration_Info_UClass_UExtendedCommonActivatableWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UExtendedCommonActivatableWidget), 3441261616U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Ecifircas_Plugins_WidgetsCollectiva_Source_WidgetsCollectiva_Public_ExtendedCommonActivatableWidget_h_3302844789(TEXT("/Script/WidgetsCollectiva"),
		Z_CompiledInDeferFile_FID_Unreal_Projects_Ecifircas_Plugins_WidgetsCollectiva_Source_WidgetsCollectiva_Public_ExtendedCommonActivatableWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_Ecifircas_Plugins_WidgetsCollectiva_Source_WidgetsCollectiva_Public_ExtendedCommonActivatableWidget_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Unreal_Projects_Ecifircas_Plugins_WidgetsCollectiva_Source_WidgetsCollectiva_Public_ExtendedCommonActivatableWidget_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_Ecifircas_Plugins_WidgetsCollectiva_Source_WidgetsCollectiva_Public_ExtendedCommonActivatableWidget_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

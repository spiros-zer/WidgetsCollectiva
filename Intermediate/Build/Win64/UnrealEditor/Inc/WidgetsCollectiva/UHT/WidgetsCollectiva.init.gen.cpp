// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidgetsCollectiva_init() {}
	WIDGETSCOLLECTIVA_API UFunction* Z_Construct_UDelegateFunction_WidgetsCollectiva_InputActionExecutedDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_WidgetsCollectiva;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_WidgetsCollectiva()
	{
		if (!Z_Registration_Info_UPackage__Script_WidgetsCollectiva.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_WidgetsCollectiva_InputActionExecutedDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/WidgetsCollectiva",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x80A8175D,
				0xD9D5B53C,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_WidgetsCollectiva.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_WidgetsCollectiva.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_WidgetsCollectiva(Z_Construct_UPackage__Script_WidgetsCollectiva, TEXT("/Script/WidgetsCollectiva"), Z_Registration_Info_UPackage__Script_WidgetsCollectiva, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x80A8175D, 0xD9D5B53C));
PRAGMA_ENABLE_DEPRECATION_WARNINGS

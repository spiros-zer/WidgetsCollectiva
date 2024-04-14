// Copyright 2024 Spyridon Zervos

#pragma once

#include "CoreMinimal.h"
#include "CommonButtonBase.h"

#include "ModularButton.generated.h"

/**
 * 
 */
UCLASS(Abstract, BlueprintType, Blueprintable)
class WIDGETSCOLLECTIVA_API UModularButton : public UCommonButtonBase
{
	GENERATED_BODY()

public:

	/** Used in order to change the button's text from C++ side. It should only be used from C++ and not blueprints. */
	UFUNCTION(BlueprintCallable)
	void SetButtonTextInternal(const FText& InText);
	
	/**
	 * Sets the button's text style. this is implemented due to the fact that if a text style is defined in the
	 * button style it will still not be applied on its own.
	 */
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Text")
	void SetBtnTxtStyle(TSubclassOf<UCommonTextStyle> InTxtStyle);

	/** Sets the button text to the input value. */
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="Text", meta = (AutoCreateRefTerm="FText"))
	void SetBtnTxt(const FText& InText);

	/**
	 * Diode to update the button's text when it has been changed from C++ side - e.g. notification creation. All
	 * implemented interfaces that change the button's text have to do it through this function for DRY.
	 */
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void UpdateButtonText(const FText& InText);
};

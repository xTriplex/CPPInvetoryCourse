﻿// XS

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "INV_Highlightable.generated.h"

// This class does not need to be modified.
UINTERFACE()
class UINV_Highlightable : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class INVENTORYSYSTEM_API IINV_Highlightable
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	UFUNCTION(BlueprintNativeEvent, Category = "Inventory")
	void Highlight();

	UFUNCTION(BlueprintNativeEvent, Category = "Inventory")
	void UnHighlight();
};

// XS

#pragma once

#include "CoreMinimal.h"
#include "Widgets/Inventory/InventoryBase/INV_InventoryBase.h"
#include "INV_SpatialInventory.generated.h"

class UButton;
class UWidgetSwitcher;
class UINV_InventoryGrid;
/**
 * 
 */
UCLASS()
class INVENTORYSYSTEM_API UINV_SpatialInventory : public UINV_InventoryBase
{
	GENERATED_BODY()

public:
	virtual void NativeOnInitialized() override;

private:
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UWidgetSwitcher> Switcher;
	
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UINV_InventoryGrid> Grid_Equipables;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UINV_InventoryGrid> Grid_Consumables;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UINV_InventoryGrid> Grid_Craftables;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UINV_InventoryGrid> Grid_QuestItems;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UButton> Button_Equipables;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UButton> Button_Consumables;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UButton> Button_Craftables;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UButton> Button_QuestItems;

	UFUNCTION()
	void ShowEquipables();

	UFUNCTION()
	void ShowConsumables();

	UFUNCTION()
	void ShowCraftables();

	UFUNCTION()
	void ShowQuestItems();
	
	void DisableButton(UButton* Button);
	void SetActiveGrid(UINV_InventoryGrid* Grid, UButton* Button);
};

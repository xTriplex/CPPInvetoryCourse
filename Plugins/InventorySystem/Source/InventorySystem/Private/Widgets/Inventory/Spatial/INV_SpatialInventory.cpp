// XS


#include "Widgets/Inventory/Spatial/INV_SpatialInventory.h"

#include "Components/Button.h"
#include "Components/WidgetSwitcher.h"
#include "Widgets/Inventory/Spatial/INV_InventoryGrid.h"

void UINV_SpatialInventory::NativeOnInitialized()
{
	Super::NativeOnInitialized();
	
	Button_Equipables->OnClicked.AddDynamic(this, &ThisClass::UINV_SpatialInventory::ShowEquipables);
	Button_Consumables->OnClicked.AddDynamic(this, &ThisClass::UINV_SpatialInventory::ShowConsumables);
	Button_Craftables->OnClicked.AddDynamic(this, &ThisClass::UINV_SpatialInventory::ShowCraftables);
	Button_QuestItems->OnClicked.AddDynamic(this, &ThisClass::UINV_SpatialInventory::ShowQuestItems);

	ShowEquipables(); // Default. Makes the "Equipables" button selected/disabled by default.
}

void UINV_SpatialInventory::ShowEquipables()
{
	SetActiveGrid(Grid_Equipables, Button_Equipables);
}

void UINV_SpatialInventory::ShowConsumables()
{
	SetActiveGrid(Grid_Consumables, Button_Consumables);
}

void UINV_SpatialInventory::ShowCraftables()
{
	SetActiveGrid(Grid_Craftables, Button_Craftables);
}

void UINV_SpatialInventory::ShowQuestItems()
{
	SetActiveGrid(Grid_QuestItems, Button_QuestItems);
}

void UINV_SpatialInventory::DisableButton(UButton* Button)
{
	Button_Equipables->SetIsEnabled(true);
	Button_Consumables->SetIsEnabled(true);
	Button_Craftables->SetIsEnabled(true);
	Button_QuestItems->SetIsEnabled(true);
	Button->SetIsEnabled(false);
}

void UINV_SpatialInventory::SetActiveGrid(UINV_InventoryGrid* Grid, UButton* Button)
{
	DisableButton(Button);
	Switcher->SetActiveWidget(Grid);
}

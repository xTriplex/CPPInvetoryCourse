// XS

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "INV_ItemComponent.generated.h"


UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent), Blueprintable)
class INVENTORYSYSTEM_API UINV_ItemComponent : public UActorComponent
{
	GENERATED_BODY()

public: 
	UINV_ItemComponent();

	FString GetPickupMessage() const { return PickupMessage; }

private:
	UPROPERTY(EditAnywhere, Category = "Inventory")
	FString PickupMessage;
};

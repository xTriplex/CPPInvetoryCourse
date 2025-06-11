﻿// XS

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "INV_PlayerController.generated.h"

/**
 * 
 */

class UInputMappingContext;
class UInputAction;
class UINV_HUDWidget;

UCLASS()
class INVENTORYSYSTEM_API AINV_PlayerController : public APlayerController
{
	GENERATED_BODY()
public:
	AINV_PlayerController();
	virtual void Tick(float DeltaTime) override;
protected:
	virtual void BeginPlay() override;
	virtual void SetupInputComponent() override;
private:
	void PrimaryInteract();
	void CreateHUDWidget();
	void TraceForItem();
	
	UPROPERTY(EditDefaultsOnly, Category = "Inventory")
	TArray<TObjectPtr<UInputMappingContext>> DefaultIMCs;

	UPROPERTY(EditDefaultsOnly, Category = "Inventory")
	TObjectPtr<UInputAction> PrimaryInteractAction;

	UPROPERTY(EditDefaultsOnly, Category = "Inventory")
	TSubclassOf<UINV_HUDWidget> HUDWidgetClass;

	UPROPERTY()
	TObjectPtr<UINV_HUDWidget> HUDWidget;

	UPROPERTY(EditDefaultsOnly, Category = "Inventory")
	double TraceLength;

	UPROPERTY(EditDefaultsOnly, Category = "Inventory")
	TEnumAsByte<ECollisionChannel> ItemTraceChannel;
	
	TWeakObjectPtr<AActor> ThisActor;
	TWeakObjectPtr<AActor> LastActor;
};

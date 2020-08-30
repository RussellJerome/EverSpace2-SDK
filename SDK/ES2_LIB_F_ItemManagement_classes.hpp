#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_LIB_F_ItemManagement_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LIB_F_ItemManagement.LIB_F_ItemManagement_C
// 0x0000 (0x0028 - 0x0028)
class ULIB_F_ItemManagement_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LIB_F_ItemManagement.LIB_F_ItemManagement_C");
		return ptr;
	}


	void STATIC_IsEquipmentModuleCategory(TEnumAsByte<EInventoryCategory>* Category, class UObject** __WorldContext, bool* Result);
	void STATIC_PlayErrorSFX(class UObject** __WorldContext);
	void STATIC_PlayItemTransferSFX(TEnumAsByte<EItemTransferType>* TransferType, TEnumAsByte<ETechnicalItemTransferType>* TechnicalTransferType, class UWG_Inventory_Slot_C** TargetSlotRef, bool* IsDragAndDrop, bool* IsSilentTransfer, bool* IsFeasibilityCheck, class UObject** __WorldContext);
	void STATIC_PlayBackOrCloseSFX(TEnumAsByte<EWidgetType>* WidgetType, class UObject** __WorldContext);
	void STATIC_PlayNavigationSFX(class UWG_Inventory_Slot_C** PreviousSlot, class UWG_Inventory_Slot_C** CurrentSlot, class UObject** __WorldContext);
	void STATIC_MoveAllItems(class UWG_Inventory_C** SourceInventory, class UWG_Inventory_C** TargetInventory, class UObject** __WorldContext);
	void STATIC_GetItemIconReference(class UItem** ItemRef, class UObject** __WorldContext, bool* IsIconRefValid, TSoftObjectPtr<class UTexture2D>* IconRef);
	void STATIC_SetItemIcon(class UObject** LoadedTexture, class UImage** ImageObj, class UObject** __WorldContext);
	void STATIC_SetupRarityAndTypeText(class UTextBlock** TextObj, class UItem** ItemRef, class UObject** __WorldContext);
	void STATIC_IsInternalShopTransfer(class UWG_Inventory_Slot_C** Slot1, class UWG_Inventory_Slot_C** Slot2, class UObject** __WorldContext, bool* Result);
	void STATIC_GetItemBackgroundPattern(class UItem** ItemRef, bool* BigVersion, class UObject** __WorldContext, class UTexture2D** Texture);
	void STATIC_DoCompareInventoryRefreshIfNecessary(class UWG_Inventory_Slot_C** SourceSlot, class UWG_Inventory_C** TargetInventory, class UObject** __WorldContext);
	void STATIC_GetGeneralizedNameOfCategory(TEnumAsByte<EInventoryCategory>* Category, class UObject** __WorldContext, struct FText* Result);
	void STATIC_GetNameOfCategory(TEnumAsByte<EInventoryCategory>* Category, bool* InUpperCase, class UObject** __WorldContext, struct FText* Result);
	void STATIC_GetShipNameByIndex(int* Index, class UObject** __WorldContext, struct FText* Result);
	void STATIC_HighlightActiveInventory(class UObject** __WorldContext, TArray<class UWG_Inventory_C*>* Inventories);
	void STATIC_IsEquipmentCategory(TEnumAsByte<EInventoryCategory>* Category, class UObject** __WorldContext, bool* Result);
	void STATIC_HighlightEquipmentCategoryToCompareWithItem(class UWG_ShipInventory_C** ShipInventory, class UItem** Item, class UWG_Inventory_C** ItemInventory, class UObject** __WorldContext, bool* Success);
	void STATIC_UpdateItemInfoWidget(class UWG_Item_Info_C** Widget, class UWG_Inventory_Slot_C** BaseSlot, class UWG_Inventory_Slot_C** CompareSlot, bool* Hide, bool* DoNotChangeVisibilityState, class UObject** __WorldContext);
	void STATIC_IsShopSlot(class UWG_Inventory_Slot_C** Slot, class UObject** __WorldContext, bool* Result);
	void STATIC_MarkItemForBuybackOrRefund(TEnumAsByte<EItemTransferType>* TransferType, class UItem** Item, bool* IsFeasibilityCheck, class UObject** __WorldContext);
	void STATIC_GetTransferPrice(TEnumAsByte<EItemTransferType>* TransferType, class UItem** Item, int* Amount, class UObject** __WorldContext, int* Total, int* PerItem, bool* CanAfford);
	void STATIC_IsTransferAffordable(class UItem** Item, int* Amount, TEnumAsByte<EItemTransferType>* TransferType, class UObject** __WorldContext, bool* Result);
	void STATIC_PerformCreditsTransactionIfNecessary(TEnumAsByte<EItemTransferType>* TransferType, class UItem** Item, int* Amount, bool* IsFeasibilityCheck, class UObject** __WorldContext, bool* Result, int* CreditsChange, bool* WasNecessary);
	void STATIC_GetSellingPrice(class UItem** Item, int* Amount, bool* ForceRealPrice, class UObject** __WorldContext, int* Total, int* PerItem);
	void STATIC_GetBuyingPrice(class UItem** Item, int* Amount, bool* ForceRealPrice, class UObject** __WorldContext, int* Total, int* PerItem, bool* CanAffordAll, bool* CanAffordOne);
	void STATIC_IsGivenSlotInvalidOrEmpty(class UWG_Inventory_Slot_C** Slot, class UObject** __WorldContext, bool* Result);
	void STATIC_ShowSlotLimitReachedDialog(bool* IsFeasibilityCheck, class UObject** __WorldContext);
	void STATIC_GetInventoryType(class UWG_Inventory_C** Inventory, class UObject** __WorldContext, TEnumAsByte<EInventoryType>* Result);
	void STATIC_ShowInventoryLimitReachedDialog(bool* IsFeasibilityCheck, class UObject** __WorldContext);
	void STATIC_ShowCargoLimitReachedDialog(class FString* UniqueIntro, int* Overload, bool* IsFeasibilityCheck, class UObject** __WorldContext);
	void STATIC_LogMessage(class FString* Message, struct FLinearColor* Color, bool* ForceDisplay, class UObject** __WorldContext);
	void STATIC_LogItemTransferResult(class FString* Message, bool* Result, bool* IsFeasibilityCheck, class UObject** __WorldContext);
	void STATIC_ShowNotEnoughFreeSpaceInCargoDialog(bool* IsFeasibilityCheck, bool* IsFromOtherShip, class UObject** __WorldContext);
	void STATIC_GetMaxFillUpTransferAmount(class UItem** SourceItem, class UItem** TargetItem, class UObject** __WorldContext, int* Result);
	void STATIC_HaveSameType(class UItem** Item1, class UItem** Item2, bool* CountEmpty, class UObject** __WorldContext, bool* Result);
	void STATIC_IsSlotFromOtherShip(TEnumAsByte<EItemSlotType>* SlotType, class UObject** __WorldContext, bool* Result);
	void STATIC_IsValidShipIndex(int* IndexToCheck, class UObject** __WorldContext, bool* Result);
	void STATIC_IsInactiveShipIndex(int* IndexToCheck, class UObject** __WorldContext, bool* Result);
	void STATIC_WouldActionDestroyCargoSpaceOfCurrentShip(class UItem** CurrentItem, class UItem** NewItem, bool* ConsiderCargoChangingItemsOnly, class UObject** __WorldContext, bool* Result, int* SpaceIncrease, int* ItemOverload);
	bool STATIC_IsCargoSpaceChangingItem(class UItem** Item, class UObject** __WorldContext, int* CargoSpaceIncrease);
	void STATIC_IsItemNecessaryToStoreAllCargo(class UItem** Item, class UInventory** CargoInventory, int* ShipIndex, class UObject** __WorldContext, bool* Result, int* Overload);
	void STATIC_IsCreditsTransferToConvert(class UWG_Inventory_Slot_C** SourceSlot, class UWG_Inventory_C** TargetInventory, class UObject** __WorldContext, bool* Result);
	void STATIC_DoWeNeedAmountSelectionToEquip(class UWG_Inventory_C** SourceInventory, struct FName* ItemTemplateID, class UWG_Inventory_Slot_C** TargetSlot, class UObject** __WorldContext, bool* Result, int* InitialAmount, int* MaxAmount);
	void STATIC_DoWeNeedAmountSelectionToMove(class UWG_Inventory_Slot_C** SlotWithItemsToMove, class UWG_Inventory_C** TargetInventory, bool* IsDragAndDrop, class UObject** __WorldContext, bool* Result, int* MaxAmount);
	void STATIC_GetImplicitTransferAmount(class UWG_Inventory_Slot_C** SourceSlot, class UWG_Inventory_Slot_C** TargetSlot, class UObject** __WorldContext, int* Result);
	void STATIC_CreateSlotDataFromSlot(class UWG_Inventory_Slot_C** Slot, class UObject** __WorldContext, struct FSTRCT_ItemSelectionSlotInfo* SlotData);
	void STATIC_DeleteItem(class UInventory** InventoryOfItem, class UItem** ItemToDelete, class UWG_Inventory_Slot_C** SlotToEmpty, class UObject** __WorldContext, bool* Success);
	void STATIC_GetInventoryCategoryByItem(class UItem** Item, bool* IsEquipment, class UObject** __WorldContext, TEnumAsByte<EInventoryCategory>* Category);
	void STATIC_ChangeItemAmount(class UObject** __WorldContext, struct FSTRCT_ItemSelectionSlotInfo* SlotData, int* Value, bool* Success, bool* Consolidated);
	void STATIC_TransferItemsUniversal(class UWG_Inventory_Slot_C** SourceSlot, class UWG_Inventory_Slot_C** TargetSlot, class UWG_Inventory_C** TargetInventory, int* TransferAmount, bool* IsDragAndDrop, bool* IsSilentTransfer, bool* FeasibilityCheckOnly, class UObject** __WorldContext, bool* Success);
	void STATIC_IsShopTransfer(class UWG_Inventory_C** Inventory1, class UWG_Inventory_C** Inventory2, class UObject** __WorldContext, bool* Result);
	void STATIC_GetTransferType(class UWG_Inventory_C** SourceInventory, class UWG_Inventory_C** TargetInventory, class UObject** __WorldContext, TEnumAsByte<EItemTransferType>* TransferType);
	void STATIC_EquipFromOtherShip(class UWG_Inventory_C** CurrentCargoInventory, class UWG_Inventory_Slot_C** CurrentSlotToUnequip, bool* FeasibilityCheckOnly, class UObject** __WorldContext, struct FSTRCT_ItemSelectionSlotInfo* OtherShipSlotData, bool* Success);
	void STATIC_IsEligableForInstantEquipping(class UWG_Inventory_Slot_C** Slot, class UWG_ShipInventory_C** ShipInventory, bool* IncludeUnequip, class UObject** __WorldContext, bool* Result, class UWG_Inventory_Slot_C** TargetSlot);
	void STATIC_ReplaceItemWithEmptySupport(class UWG_Inventory_Slot_C** Slot1, class UWG_Inventory_Slot_C** Slot2, bool* IsFeasibilityCheck, class UObject** __WorldContext, bool* Success);
	void STATIC_UpdateItemActionButtons(bool* IsEquipSupported, bool* IsMoveSupported, bool* IsRemoveSupported, class UWG_MenuAction_Button_C** BottonChangeCompare, bool* IsChangeCompareSupported, class UObject** __WorldContext, class UWG_Inventory_Slot_C** SelectedSlot, class UWG_MenuAction_Button_C** ButtonEquip, class UWG_MenuAction_Button_C** ButtonMove, class UWG_MenuAction_Button_C** ButtonRemove);
	void STATIC_ShowItemSelectionWidget(class UWG_ShipInventory_C** Ship_Inventory, class UWG_Inventory_Slot_C** Base_Slot, struct FScriptDelegate* Event, class UObject** __WorldContext, class APlayerController** PlayerController, TArray<struct FSTRCT_ItemSelectionSlotInfo>* SlotData);
	void STATIC_AddAndInitManagedInventory(class UWG_Inventory_C** InventoryToAdd, struct FText* EquipActionText, struct FText* EquipEmptyText, struct FText* MoveText, class UObject** __WorldContext, TArray<class UWG_Inventory_C*>* Inventories);
	void STATIC_AddAndInitManagedShipEquipmentInventories(class UWG_ShipInventory_C** ShipInventory, struct FText* EquipText, struct FText* EquipEmptyText, struct FText* MoveText, class UObject** __WorldContext, TArray<class UWG_Inventory_C*>* Inventories);
	void STATIC_GetSelectedInventorySlot(class UObject** __WorldContext, TArray<class UWG_Inventory_C*>* Inventories, class UWG_Inventory_Slot_C** SelectedSlot);
	void STATIC_GetActiveInventory(class UObject** __WorldContext, TArray<class UWG_Inventory_C*>* Inventories, class UWG_Inventory_C** Inventory);
	void STATIC_GetSlotCategoryForEquip(class UWG_Inventory_Slot_C** Slot, class UObject** __WorldContext, bool* IsValid, TEnumAsByte<EInventoryCategory>* Category);
	void STATIC_AddSlotSelectionDataShip(TArray<struct FSTRCT_ItemSelectionSlotInfo>* DataRef, TEnumAsByte<EInventoryCategory>* Category, class UInventory** Inventory_Ref, bool* IsCargo, int* ShipIndex, class UWG_ShipInventory_C** WG_ShipInventoryRef, class UWG_Inventory_Slot_C** BaseItemSlotRef, class UObject** __WorldContext);
	void STATIC_AddSlotSelectionDataStorage(TArray<struct FSTRCT_ItemSelectionSlotInfo>* Data_Ref, class UWG_Inventory_C** WG_InventoryRef, TEnumAsByte<EInventoryCategory>* Category, bool* CurrentShipHasCargoSpace, class UObject** __WorldContext);
	void STATIC_GetSlotSelectionData(TEnumAsByte<EInventoryCategory>* Category, bool* IncludeCargoOfCurrentShip, bool* IncludeInactiveShips, bool* IncludeStorageOrContainer, bool* IncludeMoveToCargo, class UWG_ShipInventory_C** ShipInventoryRef, class UWG_Inventory_C** ExternalInventoryRef, class UWG_Inventory_Slot_C** BaseItemSlotRef, class UObject** __WorldContext, TArray<struct FSTRCT_ItemSelectionSlotInfo>* SlotData);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

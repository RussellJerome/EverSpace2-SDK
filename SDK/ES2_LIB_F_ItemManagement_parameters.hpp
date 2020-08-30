#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_LIB_F_ItemManagement_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.IsEquipmentModuleCategory
struct ULIB_F_ItemManagement_C_IsEquipmentModuleCategory_Params
{
	TEnumAsByte<EInventoryCategory>*                   Category;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.PlayErrorSFX
struct ULIB_F_ItemManagement_C_PlayErrorSFX_Params
{
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.PlayItemTransferSFX
struct ULIB_F_ItemManagement_C_PlayItemTransferSFX_Params
{
	TEnumAsByte<EItemTransferType>*                    TransferType;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETechnicalItemTransferType>*           TechnicalTransferType;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWG_Inventory_Slot_C**                       TargetSlotRef;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool*                                              IsDragAndDrop;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsSilentTransfer;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsFeasibilityCheck;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.PlayBackOrCloseSFX
struct ULIB_F_ItemManagement_C_PlayBackOrCloseSFX_Params
{
	TEnumAsByte<EWidgetType>*                          WidgetType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.PlayNavigationSFX
struct ULIB_F_ItemManagement_C_PlayNavigationSFX_Params
{
	class UWG_Inventory_Slot_C**                       PreviousSlot;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWG_Inventory_Slot_C**                       CurrentSlot;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.MoveAllItems
struct ULIB_F_ItemManagement_C_MoveAllItems_Params
{
	class UWG_Inventory_C**                            SourceInventory;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWG_Inventory_C**                            TargetInventory;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.GetItemIconReference
struct ULIB_F_ItemManagement_C_GetItemIconReference_Params
{
	class UItem**                                      ItemRef;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsIconRefValid;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TSoftObjectPtr<class UTexture2D>                   IconRef;                                                  // (Parm, OutParm)
};

// Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.SetItemIcon
struct ULIB_F_ItemManagement_C_SetItemIcon_Params
{
	class UObject**                                    LoadedTexture;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UImage**                                     ImageObj;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.SetupRarityAndTypeText
struct ULIB_F_ItemManagement_C_SetupRarityAndTypeText_Params
{
	class UTextBlock**                                 TextObj;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UItem**                                      ItemRef;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.IsInternalShopTransfer
struct ULIB_F_ItemManagement_C_IsInternalShopTransfer_Params
{
	class UWG_Inventory_Slot_C**                       Slot1;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWG_Inventory_Slot_C**                       Slot2;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.GetItemBackgroundPattern
struct ULIB_F_ItemManagement_C_GetItemBackgroundPattern_Params
{
	class UItem**                                      ItemRef;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              BigVersion;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Texture;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.DoCompareInventoryRefreshIfNecessary
struct ULIB_F_ItemManagement_C_DoCompareInventoryRefreshIfNecessary_Params
{
	class UWG_Inventory_Slot_C**                       SourceSlot;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWG_Inventory_C**                            TargetInventory;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.GetGeneralizedNameOfCategory
struct ULIB_F_ItemManagement_C_GetGeneralizedNameOfCategory_Params
{
	TEnumAsByte<EInventoryCategory>*                   Category;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Result;                                                   // (Parm, OutParm)
};

// Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.GetNameOfCategory
struct ULIB_F_ItemManagement_C_GetNameOfCategory_Params
{
	TEnumAsByte<EInventoryCategory>*                   Category;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              InUpperCase;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Result;                                                   // (Parm, OutParm)
};

// Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.GetShipNameByIndex
struct ULIB_F_ItemManagement_C_GetShipNameByIndex_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Result;                                                   // (Parm, OutParm)
};

// Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.HighlightActiveInventory
struct ULIB_F_ItemManagement_C_HighlightActiveInventory_Params
{
	TArray<class UWG_Inventory_C*>                     Inventories;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.IsEquipmentCategory
struct ULIB_F_ItemManagement_C_IsEquipmentCategory_Params
{
	TEnumAsByte<EInventoryCategory>*                   Category;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.HighlightEquipmentCategoryToCompareWithItem
struct ULIB_F_ItemManagement_C_HighlightEquipmentCategoryToCompareWithItem_Params
{
	class UWG_ShipInventory_C**                        ShipInventory;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UItem**                                      Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWG_Inventory_C**                            ItemInventory;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.UpdateItemInfoWidget
struct ULIB_F_ItemManagement_C_UpdateItemInfoWidget_Params
{
	class UWG_Item_Info_C**                            Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWG_Inventory_Slot_C**                       BaseSlot;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWG_Inventory_Slot_C**                       CompareSlot;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool*                                              Hide;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              DoNotChangeVisibilityState;                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.IsShopSlot
struct ULIB_F_ItemManagement_C_IsShopSlot_Params
{
	class UWG_Inventory_Slot_C**                       Slot;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.MarkItemForBuybackOrRefund
struct ULIB_F_ItemManagement_C_MarkItemForBuybackOrRefund_Params
{
	TEnumAsByte<EItemTransferType>*                    TransferType;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UItem**                                      Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsFeasibilityCheck;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.GetTransferPrice
struct ULIB_F_ItemManagement_C_GetTransferPrice_Params
{
	TEnumAsByte<EItemTransferType>*                    TransferType;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UItem**                                      Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Total;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                PerItem;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               CanAfford;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.IsTransferAffordable
struct ULIB_F_ItemManagement_C_IsTransferAffordable_Params
{
	class UItem**                                      Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EItemTransferType>*                    TransferType;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.PerformCreditsTransactionIfNecessary
struct ULIB_F_ItemManagement_C_PerformCreditsTransactionIfNecessary_Params
{
	TEnumAsByte<EItemTransferType>*                    TransferType;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UItem**                                      Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsFeasibilityCheck;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                CreditsChange;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               WasNecessary;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.GetSellingPrice
struct ULIB_F_ItemManagement_C_GetSellingPrice_Params
{
	class UItem**                                      Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              ForceRealPrice;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Total;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                PerItem;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.GetBuyingPrice
struct ULIB_F_ItemManagement_C_GetBuyingPrice_Params
{
	class UItem**                                      Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              ForceRealPrice;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Total;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                PerItem;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               CanAffordAll;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               CanAffordOne;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.IsGivenSlotInvalidOrEmpty
struct ULIB_F_ItemManagement_C_IsGivenSlotInvalidOrEmpty_Params
{
	class UWG_Inventory_Slot_C**                       Slot;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.ShowSlotLimitReachedDialog
struct ULIB_F_ItemManagement_C_ShowSlotLimitReachedDialog_Params
{
	bool*                                              IsFeasibilityCheck;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.GetInventoryType
struct ULIB_F_ItemManagement_C_GetInventoryType_Params
{
	class UWG_Inventory_C**                            Inventory;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInventoryType>                        Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.ShowInventoryLimitReachedDialog
struct ULIB_F_ItemManagement_C_ShowInventoryLimitReachedDialog_Params
{
	bool*                                              IsFeasibilityCheck;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.ShowCargoLimitReachedDialog
struct ULIB_F_ItemManagement_C_ShowCargoLimitReachedDialog_Params
{
	class FString*                                     UniqueIntro;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int*                                               Overload;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsFeasibilityCheck;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.LogMessage
struct ULIB_F_ItemManagement_C_LogMessage_Params
{
	class FString*                                     Message;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FLinearColor*                               Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              ForceDisplay;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.LogItemTransferResult
struct ULIB_F_ItemManagement_C_LogItemTransferResult_Params
{
	class FString*                                     Message;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool*                                              Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsFeasibilityCheck;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.ShowNotEnoughFreeSpaceInCargoDialog
struct ULIB_F_ItemManagement_C_ShowNotEnoughFreeSpaceInCargoDialog_Params
{
	bool*                                              IsFeasibilityCheck;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsFromOtherShip;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.GetMaxFillUpTransferAmount
struct ULIB_F_ItemManagement_C_GetMaxFillUpTransferAmount_Params
{
	class UItem**                                      SourceItem;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UItem**                                      TargetItem;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.HaveSameType
struct ULIB_F_ItemManagement_C_HaveSameType_Params
{
	class UItem**                                      Item1;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UItem**                                      Item2;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              CountEmpty;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.IsSlotFromOtherShip
struct ULIB_F_ItemManagement_C_IsSlotFromOtherShip_Params
{
	TEnumAsByte<EItemSlotType>*                        SlotType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.IsValidShipIndex
struct ULIB_F_ItemManagement_C_IsValidShipIndex_Params
{
	int*                                               IndexToCheck;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.IsInactiveShipIndex
struct ULIB_F_ItemManagement_C_IsInactiveShipIndex_Params
{
	int*                                               IndexToCheck;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.WouldActionDestroyCargoSpaceOfCurrentShip
struct ULIB_F_ItemManagement_C_WouldActionDestroyCargoSpaceOfCurrentShip_Params
{
	class UItem**                                      CurrentItem;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UItem**                                      NewItem;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              ConsiderCargoChangingItemsOnly;                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                SpaceIncrease;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                ItemOverload;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.IsCargoSpaceChangingItem
struct ULIB_F_ItemManagement_C_IsCargoSpaceChangingItem_Params
{
	class UItem**                                      Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
	int                                                CargoSpaceIncrease;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.IsItemNecessaryToStoreAllCargo
struct ULIB_F_ItemManagement_C_IsItemNecessaryToStoreAllCargo_Params
{
	class UItem**                                      Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UInventory**                                 CargoInventory;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               ShipIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Overload;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.IsCreditsTransferToConvert
struct ULIB_F_ItemManagement_C_IsCreditsTransferToConvert_Params
{
	class UWG_Inventory_Slot_C**                       SourceSlot;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWG_Inventory_C**                            TargetInventory;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.DoWeNeedAmountSelectionToEquip
struct ULIB_F_ItemManagement_C_DoWeNeedAmountSelectionToEquip_Params
{
	class UWG_Inventory_C**                            SourceInventory;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName*                                      ItemTemplateID;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWG_Inventory_Slot_C**                       TargetSlot;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                InitialAmount;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                MaxAmount;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.DoWeNeedAmountSelectionToMove
struct ULIB_F_ItemManagement_C_DoWeNeedAmountSelectionToMove_Params
{
	class UWG_Inventory_Slot_C**                       SlotWithItemsToMove;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWG_Inventory_C**                            TargetInventory;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool*                                              IsDragAndDrop;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                MaxAmount;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.GetImplicitTransferAmount
struct ULIB_F_ItemManagement_C_GetImplicitTransferAmount_Params
{
	class UWG_Inventory_Slot_C**                       SourceSlot;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWG_Inventory_Slot_C**                       TargetSlot;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.CreateSlotDataFromSlot
struct ULIB_F_ItemManagement_C_CreateSlotDataFromSlot_Params
{
	class UWG_Inventory_Slot_C**                       Slot;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FSTRCT_ItemSelectionSlotInfo                SlotData;                                                 // (Parm, OutParm, IsPlainOldData)
};

// Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.DeleteItem
struct ULIB_F_ItemManagement_C_DeleteItem_Params
{
	class UInventory**                                 InventoryOfItem;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UItem**                                      ItemToDelete;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWG_Inventory_Slot_C**                       SlotToEmpty;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.GetInventoryCategoryByItem
struct ULIB_F_ItemManagement_C_GetInventoryCategoryByItem_Params
{
	class UItem**                                      Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsEquipment;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInventoryCategory>                    Category;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.ChangeItemAmount
struct ULIB_F_ItemManagement_C_ChangeItemAmount_Params
{
	struct FSTRCT_ItemSelectionSlotInfo                SlotData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	int                                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Consolidated;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.TransferItemsUniversal
struct ULIB_F_ItemManagement_C_TransferItemsUniversal_Params
{
	class UWG_Inventory_Slot_C**                       SourceSlot;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWG_Inventory_Slot_C**                       TargetSlot;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWG_Inventory_C**                            TargetInventory;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               TransferAmount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsDragAndDrop;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsSilentTransfer;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              FeasibilityCheckOnly;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.IsShopTransfer
struct ULIB_F_ItemManagement_C_IsShopTransfer_Params
{
	class UWG_Inventory_C**                            Inventory1;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWG_Inventory_C**                            Inventory2;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.GetTransferType
struct ULIB_F_ItemManagement_C_GetTransferType_Params
{
	class UWG_Inventory_C**                            SourceInventory;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWG_Inventory_C**                            TargetInventory;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EItemTransferType>                     TransferType;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.EquipFromOtherShip
struct ULIB_F_ItemManagement_C_EquipFromOtherShip_Params
{
	class UWG_Inventory_C**                            CurrentCargoInventory;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWG_Inventory_Slot_C**                       CurrentSlotToUnequip;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FSTRCT_ItemSelectionSlotInfo                OtherShipSlotData;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool*                                              FeasibilityCheckOnly;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.IsEligableForInstantEquipping
struct ULIB_F_ItemManagement_C_IsEligableForInstantEquipping_Params
{
	class UWG_Inventory_Slot_C**                       Slot;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWG_ShipInventory_C**                        ShipInventory;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool*                                              IncludeUnequip;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UWG_Inventory_Slot_C*                        TargetSlot;                                               // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.ReplaceItemWithEmptySupport
struct ULIB_F_ItemManagement_C_ReplaceItemWithEmptySupport_Params
{
	class UWG_Inventory_Slot_C**                       Slot1;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWG_Inventory_Slot_C**                       Slot2;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool*                                              IsFeasibilityCheck;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.UpdateItemActionButtons
struct ULIB_F_ItemManagement_C_UpdateItemActionButtons_Params
{
	class UWG_Inventory_Slot_C*                        SelectedSlot;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	class UWG_MenuAction_Button_C*                     ButtonEquip;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	bool*                                              IsEquipSupported;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWG_MenuAction_Button_C*                     ButtonMove;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	bool*                                              IsMoveSupported;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWG_MenuAction_Button_C*                     ButtonRemove;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	bool*                                              IsRemoveSupported;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWG_MenuAction_Button_C**                    BottonChangeCompare;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool*                                              IsChangeCompareSupported;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.ShowItemSelectionWidget
struct ULIB_F_ItemManagement_C_ShowItemSelectionWidget_Params
{
	class UWG_ShipInventory_C**                        Ship_Inventory;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class APlayerController*                           PlayerController;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	TArray<struct FSTRCT_ItemSelectionSlotInfo>        SlotData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UWG_Inventory_Slot_C**                       Base_Slot;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FScriptDelegate*                            Event;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.AddAndInitManagedInventory
struct ULIB_F_ItemManagement_C_AddAndInitManagedInventory_Params
{
	TArray<class UWG_Inventory_C*>                     Inventories;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UWG_Inventory_C**                            InventoryToAdd;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FText*                                      EquipActionText;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText*                                      EquipEmptyText;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText*                                      MoveText;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.AddAndInitManagedShipEquipmentInventories
struct ULIB_F_ItemManagement_C_AddAndInitManagedShipEquipmentInventories_Params
{
	TArray<class UWG_Inventory_C*>                     Inventories;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UWG_ShipInventory_C**                        ShipInventory;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FText*                                      EquipText;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText*                                      EquipEmptyText;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText*                                      MoveText;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.GetSelectedInventorySlot
struct ULIB_F_ItemManagement_C_GetSelectedInventorySlot_Params
{
	TArray<class UWG_Inventory_C*>                     Inventories;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWG_Inventory_Slot_C*                        SelectedSlot;                                             // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.GetActiveInventory
struct ULIB_F_ItemManagement_C_GetActiveInventory_Params
{
	TArray<class UWG_Inventory_C*>                     Inventories;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWG_Inventory_C*                             Inventory;                                                // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.GetSlotCategoryForEquip
struct ULIB_F_ItemManagement_C_GetSlotCategoryForEquip_Params
{
	class UWG_Inventory_Slot_C**                       Slot;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsValid;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInventoryCategory>                    Category;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.AddSlotSelectionDataShip
struct ULIB_F_ItemManagement_C_AddSlotSelectionDataShip_Params
{
	TArray<struct FSTRCT_ItemSelectionSlotInfo>*       DataRef;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TEnumAsByte<EInventoryCategory>*                   Category;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UInventory**                                 Inventory_Ref;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsCargo;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               ShipIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWG_ShipInventory_C**                        WG_ShipInventoryRef;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWG_Inventory_Slot_C**                       BaseItemSlotRef;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.AddSlotSelectionDataStorage
struct ULIB_F_ItemManagement_C_AddSlotSelectionDataStorage_Params
{
	TArray<struct FSTRCT_ItemSelectionSlotInfo>*       Data_Ref;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UWG_Inventory_C**                            WG_InventoryRef;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<EInventoryCategory>*                   Category;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              CurrentShipHasCargoSpace;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.GetSlotSelectionData
struct ULIB_F_ItemManagement_C_GetSlotSelectionData_Params
{
	TEnumAsByte<EInventoryCategory>*                   Category;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IncludeCargoOfCurrentShip;                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IncludeInactiveShips;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IncludeStorageOrContainer;                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IncludeMoveToCargo;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWG_ShipInventory_C**                        ShipInventoryRef;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWG_Inventory_C**                            ExternalInventoryRef;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWG_Inventory_Slot_C**                       BaseItemSlotRef;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FSTRCT_ItemSelectionSlotInfo>        SlotData;                                                 // (Parm, OutParm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

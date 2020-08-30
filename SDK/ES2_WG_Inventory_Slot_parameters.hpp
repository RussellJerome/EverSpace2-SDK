#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_Inventory_Slot_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WG_Inventory_Slot.WG_Inventory_Slot_C.GetNameOfShip
struct UWG_Inventory_Slot_C_GetNameOfShip_Params
{
	struct FText                                       Name;                                                     // (Parm, OutParm)
};

// Function WG_Inventory_Slot.WG_Inventory_Slot_C.IsCurrentShipInventorySlot
struct UWG_Inventory_Slot_C_IsCurrentShipInventorySlot_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Inventory_Slot.WG_Inventory_Slot_C.DoWeNeedToForceInventoryBasedTransfer
struct UWG_Inventory_Slot_C_DoWeNeedToForceInventoryBasedTransfer_Params
{
	class UWG_Inventory_Slot_C**                       SourceSlot;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WG_Inventory_Slot.WG_Inventory_Slot_C.IsChangeCompareActionPossible
struct UWG_Inventory_Slot_C_IsChangeCompareActionPossible_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Inventory_Slot.WG_Inventory_Slot_C.SetEmptySlotHelpText
struct UWG_Inventory_Slot_C_SetEmptySlotHelpText_Params
{
	TEnumAsByte<EInventoryCategory>*                   SlotCategory;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Inventory_Slot.WG_Inventory_Slot_C.Get_LockedIndicator_Visibility_1
struct UWG_Inventory_Slot_C_Get_LockedIndicator_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WG_Inventory_Slot.WG_Inventory_Slot_C.Get_RefundBuyBackMarker_Visibility_1
struct UWG_Inventory_Slot_C_Get_RefundBuyBackMarker_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WG_Inventory_Slot.WG_Inventory_Slot_C.SetLockedIconPosition
struct UWG_Inventory_Slot_C_SetLockedIconPosition_Params
{
};

// Function WG_Inventory_Slot.WG_Inventory_Slot_C.ToggleDropHighlightAnimation
struct UWG_Inventory_Slot_C_ToggleDropHighlightAnimation_Params
{
};

// Function WG_Inventory_Slot.WG_Inventory_Slot_C.ToggleDragHighlightAnimation
struct UWG_Inventory_Slot_C_ToggleDragHighlightAnimation_Params
{
};

// Function WG_Inventory_Slot.WG_Inventory_Slot_C.HighlightValidDropTargetInventories
struct UWG_Inventory_Slot_C_HighlightValidDropTargetInventories_Params
{
};

// Function WG_Inventory_Slot.WG_Inventory_Slot_C.HideDragIndication
struct UWG_Inventory_Slot_C_HideDragIndication_Params
{
};

// Function WG_Inventory_Slot.WG_Inventory_Slot_C.IsValidDropLocation
struct UWG_Inventory_Slot_C_IsValidDropLocation_Params
{
	class UWG_Inventory_Slot_C**                       SourceSlot;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWG_Inventory_Slot_C**                       TargetSlot;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Inventory_Slot.WG_Inventory_Slot_C.HideDropIndication
struct UWG_Inventory_Slot_C_HideDropIndication_Params
{
};

// Function WG_Inventory_Slot.WG_Inventory_Slot_C.SetSlotTitle
struct UWG_Inventory_Slot_C_SetSlotTitle_Params
{
	class UItem**                                      Item_Ref;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Inventory_Slot.WG_Inventory_Slot_C.UpdateCategoryIcon
struct UWG_Inventory_Slot_C_UpdateCategoryIcon_Params
{
};

// Function WG_Inventory_Slot.WG_Inventory_Slot_C.GetConsumableSlotIndexIcon
struct UWG_Inventory_Slot_C_GetConsumableSlotIndexIcon_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Inventory_Slot.WG_Inventory_Slot_C.IsNewItem
struct UWG_Inventory_Slot_C_IsNewItem_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Inventory_Slot.WG_Inventory_Slot_C.SetSlotAppearance
struct UWG_Inventory_Slot_C_SetSlotAppearance_Params
{
};

// Function WG_Inventory_Slot.WG_Inventory_Slot_C.UpdateCompareInventory
struct UWG_Inventory_Slot_C_UpdateCompareInventory_Params
{
	bool*                                              UseTargetSlotAsCompareBase;                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Inventory_Slot.WG_Inventory_Slot_C.UpdateSlotAppearance
struct UWG_Inventory_Slot_C_UpdateSlotAppearance_Params
{
};

// Function WG_Inventory_Slot.WG_Inventory_Slot_C.IsNotStacked
struct UWG_Inventory_Slot_C_IsNotStacked_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Inventory_Slot.WG_Inventory_Slot_C.TransferAndCloseAfterAmountSelection
struct UWG_Inventory_Slot_C_TransferAndCloseAfterAmountSelection_Params
{
	class UWG_Inventory_Slot_C**                       SourceSlot;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWG_Inventory_Slot_C**                       TargetSlot;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWG_Inventory_C**                            TargetInventory;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               TransferAmount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsFeasibilityCheck;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Inventory_Slot.WG_Inventory_Slot_C.SetDebugLabel
struct UWG_Inventory_Slot_C_SetDebugLabel_Params
{
};

// Function WG_Inventory_Slot.WG_Inventory_Slot_C.IsMoveToCargoPseudoSlot
struct UWG_Inventory_Slot_C_IsMoveToCargoPseudoSlot_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WG_Inventory_Slot.WG_Inventory_Slot_C.IsItemEnabled
struct UWG_Inventory_Slot_C_IsItemEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WG_Inventory_Slot.WG_Inventory_Slot_C.CollectCredits
struct UWG_Inventory_Slot_C_CollectCredits_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Inventory_Slot.WG_Inventory_Slot_C.HasCredits
struct UWG_Inventory_Slot_C_HasCredits_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Inventory_Slot.WG_Inventory_Slot_C.TransferItemsWithOptionalAmountSelection
struct UWG_Inventory_Slot_C_TransferItemsWithOptionalAmountSelection_Params
{
	struct FScriptDelegate*                            Event;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool*                                              ShowDialog;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               InitialAmount;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               MaxAmount;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWG_Inventory_Slot_C**                       SourceSlot;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWG_Inventory_Slot_C**                       TargetSlot;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWG_Inventory_C**                            TargetInventory;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool*                                              IsFeasibilityCheck;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Inventory_Slot.WG_Inventory_Slot_C.SlotChosenToEquip
struct UWG_Inventory_Slot_C_SlotChosenToEquip_Params
{
	class UWG_Inventory_C**                            CurrentShipCargoInventory;                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWG_Inventory_Slot_C**                       BaseItemSlotRef;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FSTRCT_ItemSelectionSlotInfo*               ExplicitSlotData;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool*                                              IsFeasibilityCheck;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate*                            OnAmountSelected;                                         // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool*                                              BuyingConfirmed;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Inventory_Slot.WG_Inventory_Slot_C.EquipItem
struct UWG_Inventory_Slot_C_EquipItem_Params
{
	class UWG_ShipInventory_C**                        ShipInventory;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWG_Inventory_C**                            ExternalInventory;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FScriptDelegate*                            Event;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function WG_Inventory_Slot.WG_Inventory_Slot_C.GetActionDependingSlotSelectionData
struct UWG_Inventory_Slot_C_GetActionDependingSlotSelectionData_Params
{
	class UWG_ShipInventory_C**                        Ship_Inventory_Ref;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWG_Inventory_C**                            External_Inventory_Ref;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FSTRCT_ItemSelectionSlotInfo>        Slot_Data;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function WG_Inventory_Slot.WG_Inventory_Slot_C.CanSwapItemAmountWithGivenSlot
struct UWG_Inventory_Slot_C_CanSwapItemAmountWithGivenSlot_Params
{
	class UWG_Inventory_Slot_C**                       OtherSlot;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Inventory_Slot.WG_Inventory_Slot_C.GetOriginalSlotReference
struct UWG_Inventory_Slot_C_GetOriginalSlotReference_Params
{
	struct FSTRCT_ItemSelectionSlotInfo*               ExplicitSlotData;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FSTRCT_ItemSelectionSlotInfo                SlotInfo;                                                 // (Parm, OutParm, IsPlainOldData)
	class UWG_Inventory_Slot_C*                        Slot;                                                     // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWG_Inventory_C*                             Inventory;                                                // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               IsFromOtherShip;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Inventory_Slot.WG_Inventory_Slot_C.HasItemReachedStackLimit
struct UWG_Inventory_Slot_C_HasItemReachedStackLimit_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Inventory_Slot.WG_Inventory_Slot_C.GetAmountToStackLimit
struct UWG_Inventory_Slot_C_GetAmountToStackLimit_Params
{
	int                                                Amount;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Inventory_Slot.WG_Inventory_Slot_C.GetSafeItemAmount
struct UWG_Inventory_Slot_C_GetSafeItemAmount_Params
{
	int                                                Amount;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Inventory_Slot.WG_Inventory_Slot_C.CanTransferItemAmountToGivenSlot
struct UWG_Inventory_Slot_C_CanTransferItemAmountToGivenSlot_Params
{
	class UWG_Inventory_Slot_C**                       OtherSlot;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool*                                              CountEmpty;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               FailedBecauseFullyStacked;                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Inventory_Slot.WG_Inventory_Slot_C.HasStackableItem
struct UWG_Inventory_Slot_C_HasStackableItem_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Inventory_Slot.WG_Inventory_Slot_C.HasItemOfSameType
struct UWG_Inventory_Slot_C_HasItemOfSameType_Params
{
	class UWG_Inventory_Slot_C**                       OtherSlot;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool*                                              CountEmpty;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Inventory_Slot.WG_Inventory_Slot_C.DeleteItem
struct UWG_Inventory_Slot_C_DeleteItem_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Inventory_Slot.WG_Inventory_Slot_C.IsEquipmentSlot
struct UWG_Inventory_Slot_C_IsEquipmentSlot_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Inventory_Slot.WG_Inventory_Slot_C.IsStacked
struct UWG_Inventory_Slot_C_IsStacked_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Inventory_Slot.WG_Inventory_Slot_C.IsEmptySlot
struct UWG_Inventory_Slot_C_IsEmptySlot_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Inventory_Slot.WG_Inventory_Slot_C.IsRemoveActionPossible
struct UWG_Inventory_Slot_C_IsRemoveActionPossible_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Inventory_Slot.WG_Inventory_Slot_C.IsMoveActionPossible
struct UWG_Inventory_Slot_C_IsMoveActionPossible_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Inventory_Slot.WG_Inventory_Slot_C.ReplaceAndMoveToCargo
struct UWG_Inventory_Slot_C_ReplaceAndMoveToCargo_Params
{
	class UInventory**                                 InvisibleInventoryWithSourceItem;                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UItem**                                      SourceItemRef;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWG_Inventory_C**                            ActiveShipCargoInventory;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Inventory_Slot.WG_Inventory_Slot_C.GetSafeItemRef
struct UWG_Inventory_Slot_C_GetSafeItemRef_Params
{
	class UItem*                                       ItemRef;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Inventory_Slot.WG_Inventory_Slot_C.IsEquipActionPossible
struct UWG_Inventory_Slot_C_IsEquipActionPossible_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Inventory_Slot.WG_Inventory_Slot_C.IsItemSelectionInteractionPossible
struct UWG_Inventory_Slot_C_IsItemSelectionInteractionPossible_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Inventory_Slot.WG_Inventory_Slot_C.SetCompareItem
struct UWG_Inventory_Slot_C_SetCompareItem_Params
{
	class UItem**                                      CompareItemRef;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Inventory_Slot.WG_Inventory_Slot_C.Get_TextBlock_TradePrice_ColorAndOpacity_1
struct UWG_Inventory_Slot_C_Get_TextBlock_TradePrice_ColorAndOpacity_1_Params
{
	struct FSlateColor                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WG_Inventory_Slot.WG_Inventory_Slot_C.OnFocusReceived
struct UWG_Inventory_Slot_C_OnFocusReceived_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FFocusEvent*                                InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WG_Inventory_Slot.WG_Inventory_Slot_C.GetPriceTextColor
struct UWG_Inventory_Slot_C_GetPriceTextColor_Params
{
	struct FSlateColor                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WG_Inventory_Slot.WG_Inventory_Slot_C.OnMouseButtonUp
struct UWG_Inventory_Slot_C_OnMouseButtonUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WG_Inventory_Slot.WG_Inventory_Slot_C.OnMouseButtonDown
struct UWG_Inventory_Slot_C_OnMouseButtonDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WG_Inventory_Slot.WG_Inventory_Slot_C.OnDragDetected
struct UWG_Inventory_Slot_C_OnDragDetected_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              PointerEvent;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UDragDropOperation*                          Operation;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Inventory_Slot.WG_Inventory_Slot_C.IsActionChangingCargoSpace
struct UWG_Inventory_Slot_C_IsActionChangingCargoSpace_Params
{
	class UItem**                                      CurrentItem;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UItem**                                      NewItem;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWG_Inventory_Slot_C**                       SourceInventorySlot;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool*                                              IsEquippedItemThatWillBeMovedToCargo;                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ActionWouldDestroyCargo;                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                CargoSpaceIncrease;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                ItemOverload;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Inventory_Slot.WG_Inventory_Slot_C.IsAttributeChangingSlot
struct UWG_Inventory_Slot_C_IsAttributeChangingSlot_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WG_Inventory_Slot.WG_Inventory_Slot_C.ReplaceItem
struct UWG_Inventory_Slot_C_ReplaceItem_Params
{
	class UWG_Inventory_Slot_C**                       InventorySlotWithNewItem;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool*                                              IsFeasibilityCheck;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Inventory_Slot.WG_Inventory_Slot_C.OnDrop
struct UWG_Inventory_Slot_C_OnDrop_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              PointerEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UDragDropOperation**                         Operation;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WG_Inventory_Slot.WG_Inventory_Slot_C.On_Border_Icon_MouseDoubleClick_1
struct UWG_Inventory_Slot_C_On_Border_Icon_MouseDoubleClick_1_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WG_Inventory_Slot.WG_Inventory_Slot_C.OnMouseEnter
struct UWG_Inventory_Slot_C_OnMouseEnter_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WG_Inventory_Slot.WG_Inventory_Slot_C.OnMouseLeave
struct UWG_Inventory_Slot_C_OnMouseLeave_Params
{
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WG_Inventory_Slot.WG_Inventory_Slot_C.OnDragLeave
struct UWG_Inventory_Slot_C_OnDragLeave_Params
{
	struct FPointerEvent*                              PointerEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UDragDropOperation**                         Operation;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Inventory_Slot.WG_Inventory_Slot_C.OnDragEnter
struct UWG_Inventory_Slot_C_OnDragEnter_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              PointerEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UDragDropOperation**                         Operation;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Inventory_Slot.WG_Inventory_Slot_C.SetAsCompareItem
struct UWG_Inventory_Slot_C_SetAsCompareItem_Params
{
	bool*                                              SetOn;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Inventory_Slot.WG_Inventory_Slot_C.PreConstruct
struct UWG_Inventory_Slot_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Inventory_Slot.WG_Inventory_Slot_C.SetItemInfos
struct UWG_Inventory_Slot_C_SetItemInfos_Params
{
	class UItem**                                      ItemRef;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Inventory_Slot.WG_Inventory_Slot_C.RemoveItem
struct UWG_Inventory_Slot_C_RemoveItem_Params
{
};

// Function WG_Inventory_Slot.WG_Inventory_Slot_C.OnDragCancelled
struct UWG_Inventory_Slot_C_OnDragCancelled_Params
{
	struct FPointerEvent*                              PointerEvent;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UDragDropOperation**                         Operation;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Inventory_Slot.WG_Inventory_Slot_C.UpdateBorderColor
struct UWG_Inventory_Slot_C_UpdateBorderColor_Params
{
};

// Function WG_Inventory_Slot.WG_Inventory_Slot_C.Tick
struct UWG_Inventory_Slot_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Inventory_Slot.WG_Inventory_Slot_C.OnFocusLost
struct UWG_Inventory_Slot_C_OnFocusLost_Params
{
	struct FFocusEvent*                                InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WG_Inventory_Slot.WG_Inventory_Slot_C.AddItem
struct UWG_Inventory_Slot_C_AddItem_Params
{
	class UItem**                                      ItemRef;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Inventory_Slot.WG_Inventory_Slot_C.UpdateSlotType
struct UWG_Inventory_Slot_C_UpdateSlotType_Params
{
};

// Function WG_Inventory_Slot.WG_Inventory_Slot_C.MoveItem
struct UWG_Inventory_Slot_C_MoveItem_Params
{
	class UWG_Inventory_C**                            TargetInventory;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool*                                              IsDragAndDrop;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Inventory_Slot.WG_Inventory_Slot_C.OnEquip
struct UWG_Inventory_Slot_C_OnEquip_Params
{
	class UWG_ShipInventory_C**                        ShipInventory;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWG_Inventory_C**                            ExternalInventory;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WG_Inventory_Slot.WG_Inventory_Slot_C.SlotChosen
struct UWG_Inventory_Slot_C_SlotChosen_Params
{
	class UWG_Inventory_Slot_C**                       Slot;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWG_Inventory_C**                            CurrentShipCargoInventory;                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WG_Inventory_Slot.WG_Inventory_Slot_C.OnAmountSelected
struct UWG_Inventory_Slot_C_OnAmountSelected_Params
{
	class UWG_Inventory_Slot_C**                       SourceInventorySlot;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWG_Inventory_C**                            CustomTransferInventory;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               TransferAmount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWG_Inventory_Slot_C**                       TargetInventorySlot;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WG_Inventory_Slot.WG_Inventory_Slot_C.DummyEvent
struct UWG_Inventory_Slot_C_DummyEvent_Params
{
	class UWG_Inventory_Slot_C**                       SourceInventorySlot;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWG_Inventory_C**                            CustomTransferInventory;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               TransferAmount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWG_Inventory_Slot_C**                       TargetInventorySlot;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WG_Inventory_Slot.WG_Inventory_Slot_C.BuyAndEquipOnOccupiedSlot
struct UWG_Inventory_Slot_C_BuyAndEquipOnOccupiedSlot_Params
{
	class UWG_Inventory_Slot_C**                       SourceSlot;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWG_Inventory_Slot_C**                       TargetSlot;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWG_Inventory_C**                            CurrentShipCargoInventory;                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FSTRCT_ItemSelectionSlotInfo*               TargetSlotData;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function WG_Inventory_Slot.WG_Inventory_Slot_C.SellAndEquip
struct UWG_Inventory_Slot_C_SellAndEquip_Params
{
	class UWG_ModalDialog_C**                          WG_ModalDialog;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WG_Inventory_Slot.WG_Inventory_Slot_C.MoveToCargoAndEquip
struct UWG_Inventory_Slot_C_MoveToCargoAndEquip_Params
{
	class UWG_ModalDialog_C**                          WG_ModalDialog;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WG_Inventory_Slot.WG_Inventory_Slot_C.BuyAndEquipAtEmptySlot
struct UWG_Inventory_Slot_C_BuyAndEquipAtEmptySlot_Params
{
	class UWG_ModalDialog_C**                          WG_ModalDialog;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WG_Inventory_Slot.WG_Inventory_Slot_C.UpdateCreditsInfo
struct UWG_Inventory_Slot_C_UpdateCreditsInfo_Params
{
	int*                                               NewCredits;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               CreditsDelta;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Inventory_Slot.WG_Inventory_Slot_C.UpdateBuyingText
struct UWG_Inventory_Slot_C_UpdateBuyingText_Params
{
	class UItem**                                      Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Inventory_Slot.WG_Inventory_Slot_C.Construct
struct UWG_Inventory_Slot_C_Construct_Params
{
};

// Function WG_Inventory_Slot.WG_Inventory_Slot_C.SetTooltipWidget
struct UWG_Inventory_Slot_C_SetTooltipWidget_Params
{
	class UWG_Item_Info_C**                            ItemInfoWidget;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WG_Inventory_Slot.WG_Inventory_Slot_C.RemoveHeroCompare
struct UWG_Inventory_Slot_C_RemoveHeroCompare_Params
{
};

// Function WG_Inventory_Slot.WG_Inventory_Slot_C.SetCategoryIcon
struct UWG_Inventory_Slot_C_SetCategoryIcon_Params
{
	int*                                               SlotIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Inventory_Slot.WG_Inventory_Slot_C.CloseItemSelection
struct UWG_Inventory_Slot_C_CloseItemSelection_Params
{
};

// Function WG_Inventory_Slot.WG_Inventory_Slot_C.ExecuteUbergraph_WG_Inventory_Slot
struct UWG_Inventory_Slot_C_ExecuteUbergraph_WG_Inventory_Slot_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Inventory_Slot.WG_Inventory_Slot_C.OnMouseDown__DelegateSignature
struct UWG_Inventory_Slot_C_OnMouseDown__DelegateSignature_Params
{
	class UWG_Inventory_Slot_C**                       Slot;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WG_Inventory_Slot.WG_Inventory_Slot_C.OnDeselected__DelegateSignature
struct UWG_Inventory_Slot_C_OnDeselected__DelegateSignature_Params
{
	class UWG_Inventory_Slot_C**                       InventorySlotWidget;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               SlotIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Inventory_Slot.WG_Inventory_Slot_C.OnSelected__DelegateSignature
struct UWG_Inventory_Slot_C_OnSelected__DelegateSignature_Params
{
	class UWG_Inventory_Slot_C**                       InventorySlotWidget;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               SlotIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Inventory_Slot.WG_Inventory_Slot_C.OnVanishAnimFinished__DelegateSignature
struct UWG_Inventory_Slot_C_OnVanishAnimFinished__DelegateSignature_Params
{
	class UWG_Inventory_Slot_C**                       InventorySlotWidget;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WG_Inventory_Slot.WG_Inventory_Slot_C.OnRefresh__DelegateSignature
struct UWG_Inventory_Slot_C_OnRefresh__DelegateSignature_Params
{
};

// Function WG_Inventory_Slot.WG_Inventory_Slot_C.OnTransferItem__DelegateSignature
struct UWG_Inventory_Slot_C_OnTransferItem__DelegateSignature_Params
{
	class UWG_Inventory_Slot_C**                       WG_Inventory_Slot;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWG_Inventory_C**                            CustomTransferInventory;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

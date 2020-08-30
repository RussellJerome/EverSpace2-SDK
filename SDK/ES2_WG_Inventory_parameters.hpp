#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_Inventory_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WG_Inventory.WG_Inventory_C.IsEmpty
struct UWG_Inventory_C_IsEmpty_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Inventory.WG_Inventory_C.GetMostExpensiveItem
struct UWG_Inventory_C_GetMostExpensiveItem_Params
{
	class UWG_Inventory_Slot_C*                        Result;                                                   // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WG_Inventory.WG_Inventory_C.UpdateDragAndDropHighlights
struct UWG_Inventory_C_UpdateDragAndDropHighlights_Params
{
};

// Function WG_Inventory.WG_Inventory_C.GetDropTargetSlotIndex
struct UWG_Inventory_C_GetDropTargetSlotIndex_Params
{
	int                                                Index;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Inventory.WG_Inventory_C.GetDragOriginSlotIndex
struct UWG_Inventory_C_GetDragOriginSlotIndex_Params
{
	int                                                Index;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Inventory.WG_Inventory_C.SetPositionOfDragOriginHighlight
struct UWG_Inventory_C_SetPositionOfDragOriginHighlight_Params
{
	int*                                               SlotIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Inventory.WG_Inventory_C.SetPositionOfDropTargetHighlight
struct UWG_Inventory_C_SetPositionOfDropTargetHighlight_Params
{
	int*                                               SlotIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Inventory.WG_Inventory_C.SetPositionOfSelectionHighlight
struct UWG_Inventory_C_SetPositionOfSelectionHighlight_Params
{
};

// Function WG_Inventory.WG_Inventory_C.CalculateCargoScrollHelpers
struct UWG_Inventory_C_CalculateCargoScrollHelpers_Params
{
};

// Function WG_Inventory.WG_Inventory_C.GetMaxScrollOffset
struct UWG_Inventory_C_GetMaxScrollOffset_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WG_Inventory.WG_Inventory_C.ScrollDown
struct UWG_Inventory_C_ScrollDown_Params
{
};

// Function WG_Inventory.WG_Inventory_C.ScrollUp
struct UWG_Inventory_C_ScrollUp_Params
{
};

// Function WG_Inventory.WG_Inventory_C.GetScrollBoxLineTeasingOffset
struct UWG_Inventory_C_GetScrollBoxLineTeasingOffset_Params
{
	float                                              Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Inventory.WG_Inventory_C.IsScrollingDownPossible
struct UWG_Inventory_C_IsScrollingDownPossible_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                SlotOnBorderIndex;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Inventory.WG_Inventory_C.IsScrollingUpPossible
struct UWG_Inventory_C_IsScrollingUpPossible_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                SlotOnBorderIndex;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Inventory.WG_Inventory_C.IsSlotAtIndexFullyInView
struct UWG_Inventory_C_IsSlotAtIndexFullyInView_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Inventory.WG_Inventory_C.GetGivenSlotPositionY
struct UWG_Inventory_C_GetGivenSlotPositionY_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Inventory.WG_Inventory_C.SetHeight
struct UWG_Inventory_C_SetHeight_Params
{
	float*                                             Height;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Inventory.WG_Inventory_C.SetCompareItemForAllSlotsWithItemOfCategory
struct UWG_Inventory_C_SetCompareItemForAllSlotsWithItemOfCategory_Params
{
	class UItem**                                      CompareItemRef;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Inventory.WG_Inventory_C.GetTotalSlotCount
struct UWG_Inventory_C_GetTotalSlotCount_Params
{
	int                                                Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Inventory.WG_Inventory_C.ToggleHeadlineHighlight
struct UWG_Inventory_C_ToggleHeadlineHighlight_Params
{
	bool*                                              HighlightOn;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Inventory.WG_Inventory_C.HasValidItemWidgetAtIndex
struct UWG_Inventory_C_HasValidItemWidgetAtIndex_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UWG_Inventory_Slot_C*                        Slot;                                                     // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWG_Item_Icon_C*                             ItemWidget;                                               // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WG_Inventory.WG_Inventory_C.HasSpaceToFullyAddGivenItem
struct UWG_Inventory_C_HasSpaceToFullyAddGivenItem_Params
{
	class UItem**                                      Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Inventory.WG_Inventory_C.GetSlotAtIndex
struct UWG_Inventory_C_GetSlotAtIndex_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWG_Inventory_Slot_C*                        Inventory_Slot;                                           // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WG_Inventory.WG_Inventory_C.SelectGivenSlot
struct UWG_Inventory_C_SelectGivenSlot_Params
{
	class UWG_Inventory_Slot_C**                       SlotToSelect;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Inventory.WG_Inventory_C.GetFirstEmptySlot
struct UWG_Inventory_C_GetFirstEmptySlot_Params
{
	class UWG_Inventory_Slot_C*                        EmptySlot;                                                // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               HasEmptySlot;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Inventory.WG_Inventory_C.SetSafeSelectedSlotIndex
struct UWG_Inventory_C_SetSafeSelectedSlotIndex_Params
{
	int*                                               DesiredSlotIndex;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IndexWasClipped;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Inventory.WG_Inventory_C.GetMaxOpenAmountForItem
struct UWG_Inventory_C_GetMaxOpenAmountForItem_Params
{
	class UItem**                                      Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Inventory.WG_Inventory_C.GetAmountOfItemType
struct UWG_Inventory_C_GetAmountOfItemType_Params
{
	class UItem**                                      Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Inventory.WG_Inventory_C.IsSingleSlotInventory
struct UWG_Inventory_C_IsSingleSlotInventory_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Inventory.WG_Inventory_C.GetEquipActionType
struct UWG_Inventory_C_GetEquipActionType_Params
{
	TEnumAsByte<EInventoryType>*                       InventoryType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EEquipActionType>                      EquipActionType;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Inventory.WG_Inventory_C.IsEquipment
struct UWG_Inventory_C_IsEquipment_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Inventory.WG_Inventory_C.HasSameCategory
struct UWG_Inventory_C_HasSameCategory_Params
{
	class UWG_Inventory_C**                            Inventory;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Inventory.WG_Inventory_C.SetItemActionCaptions
struct UWG_Inventory_C_SetItemActionCaptions_Params
{
	struct FText*                                      EquipAction;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText*                                      EquipEmptyAction;                                         // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText*                                      MoveAction;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WG_Inventory.WG_Inventory_C.GetSlotWidgetForItem
struct UWG_Inventory_C_GetSlotWidgetForItem_Params
{
	class UItem**                                      Item_Ref;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWG_Inventory_Slot_C*                        SlotWidget;                                               // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WG_Inventory.WG_Inventory_C.HasSpaceForItemOfCategory
struct UWG_Inventory_C_HasSpaceForItemOfCategory_Params
{
	struct FName*                                      Item_Template_ID;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               HasSpace;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Inventory.WG_Inventory_C.SetFocusToSourceSlot
struct UWG_Inventory_C_SetFocusToSourceSlot_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Inventory.WG_Inventory_C.GetSlotWidgets
struct UWG_Inventory_C_GetSlotWidgets_Params
{
	TArray<class UWG_Inventory_Slot_C*>                SlotWidgets;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function WG_Inventory.WG_Inventory_C.OnMouseButtonDown
struct UWG_Inventory_C_OnMouseButtonDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WG_Inventory.WG_Inventory_C.OnFocusReceived
struct UWG_Inventory_C_OnFocusReceived_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FFocusEvent*                                InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WG_Inventory.WG_Inventory_C.CalcRowsAndColumns
struct UWG_Inventory_C_CalcRowsAndColumns_Params
{
	int*                                               NumItems;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Rows;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Columns;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Inventory.WG_Inventory_C.GetAllowItemSwap
struct UWG_Inventory_C_GetAllowItemSwap_Params
{
	bool                                               AllowItemActions;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Inventory.WG_Inventory_C.IsIconHovered
struct UWG_Inventory_C_IsIconHovered_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WG_Inventory.WG_Inventory_C.SetAllowItemSwap
struct UWG_Inventory_C_SetAllowItemSwap_Params
{
	bool*                                              AllowItemSwap;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Inventory.WG_Inventory_C.GetHighlightInventory
struct UWG_Inventory_C_GetHighlightInventory_Params
{
	TEnumAsByte<EInventoryCategory>*                   Category;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWG_Inventory_C*                             InventoryWidget;                                          // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WG_Inventory.WG_Inventory_C.GetCompareItem
struct UWG_Inventory_C_GetCompareItem_Params
{
	class UWG_Item_Icon_C*                             ItemWidget;                                               // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWG_Inventory_Slot_C*                        ItemSlot;                                                 // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WG_Inventory.WG_Inventory_C.OnMouseWheel
struct UWG_Inventory_C_OnMouseWheel_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WG_Inventory.WG_Inventory_C.ChangeCompareItem
struct UWG_Inventory_C_ChangeCompareItem_Params
{
	bool*                                              Forward;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Inventory.WG_Inventory_C.RemoveCompareItem
struct UWG_Inventory_C_RemoveCompareItem_Params
{
};

// Function WG_Inventory.WG_Inventory_C.ReinitCompareItem
struct UWG_Inventory_C_ReinitCompareItem_Params
{
};

// Function WG_Inventory.WG_Inventory_C.GetFirstInventorySlot
struct UWG_Inventory_C_GetFirstInventorySlot_Params
{
	class UWG_Inventory_Slot_C*                        Inventory_Slot;                                           // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WG_Inventory.WG_Inventory_C.GetAllowItemActions
struct UWG_Inventory_C_GetAllowItemActions_Params
{
	bool                                               AllowItemActions;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Inventory.WG_Inventory_C.SetAllowItemActions
struct UWG_Inventory_C_SetAllowItemActions_Params
{
	bool*                                              AllowItemActions;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Inventory.WG_Inventory_C.Construct
struct UWG_Inventory_C_Construct_Params
{
};

// Function WG_Inventory.WG_Inventory_C.PreConstruct
struct UWG_Inventory_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Inventory.WG_Inventory_C.InitGrid
struct UWG_Inventory_C_InitGrid_Params
{
};

// Function WG_Inventory.WG_Inventory_C.SetInventory
struct UWG_Inventory_C_SetInventory_Params
{
	class UInventory**                                 Inventory;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Inventory.WG_Inventory_C.Refresh
struct UWG_Inventory_C_Refresh_Params
{
};

// Function WG_Inventory.WG_Inventory_C.SetHighlight
struct UWG_Inventory_C_SetHighlight_Params
{
	bool*                                              HighlightOn;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Inventory.WG_Inventory_C.AddEmptySlot
struct UWG_Inventory_C_AddEmptySlot_Params
{
	class UInventory**                                 Inventory;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Inventory.WG_Inventory_C.InventorySlotDeselected
struct UWG_Inventory_C_InventorySlotDeselected_Params
{
	class UWG_Inventory_Slot_C**                       InventorySlotWidget;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               SlotIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Inventory.WG_Inventory_C.InventorySlotSelected
struct UWG_Inventory_C_InventorySlotSelected_Params
{
	class UWG_Inventory_Slot_C**                       InventorySlotWidget;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               SlotIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Inventory.WG_Inventory_C.UpdateShopInventoryWithCompareItem
struct UWG_Inventory_C_UpdateShopInventoryWithCompareItem_Params
{
};

// Function WG_Inventory.WG_Inventory_C.OnMouseDown_Event_1
struct UWG_Inventory_C_OnMouseDown_Event_1_Params
{
	class UWG_Inventory_Slot_C**                       Slot;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WG_Inventory.WG_Inventory_C.ExecuteUbergraph_WG_Inventory
struct UWG_Inventory_C_ExecuteUbergraph_WG_Inventory_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Inventory.WG_Inventory_C.OnSlotMouseDown__DelegateSignature
struct UWG_Inventory_C_OnSlotMouseDown__DelegateSignature_Params
{
	class UWG_Inventory_Slot_C**                       Slot;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WG_Inventory.WG_Inventory_C.OnSlotChosen__DelegateSignature
struct UWG_Inventory_C_OnSlotChosen__DelegateSignature_Params
{
	class UWG_Inventory_Slot_C**                       Slot;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWG_Inventory_C**                            CurrentShipCargoInventory;                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WG_Inventory.WG_Inventory_C.OnSlotDeselected__DelegateSignature
struct UWG_Inventory_C_OnSlotDeselected__DelegateSignature_Params
{
	class UWG_Inventory_Slot_C**                       InventorySlotWidget;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WG_Inventory.WG_Inventory_C.OnSlotSelected__DelegateSignature
struct UWG_Inventory_C_OnSlotSelected__DelegateSignature_Params
{
	class UWG_Inventory_Slot_C**                       InventorySlotWidget;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WG_Inventory.WG_Inventory_C.OnCompareItemChanged__DelegateSignature
struct UWG_Inventory_C_OnCompareItemChanged__DelegateSignature_Params
{
	class UWG_Inventory_Slot_C**                       CompareItemSlot;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WG_Inventory.WG_Inventory_C.OnRefresh__DelegateSignature
struct UWG_Inventory_C_OnRefresh__DelegateSignature_Params
{
	class UWG_Inventory_C**                            InventoryWidget;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

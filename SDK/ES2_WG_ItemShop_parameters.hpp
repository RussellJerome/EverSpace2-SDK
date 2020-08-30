#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_ItemShop_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WG_ItemShop.WG_ItemShop_C.CanItemInfoVisibilityNotBeChanged
struct UWG_ItemShop_C_CanItemInfoVisibilityNotBeChanged_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WG_ItemShop.WG_ItemShop_C.GetSelectedSlot
struct UWG_ItemShop_C_GetSelectedSlot_Params
{
	class UWG_Inventory_Slot_C*                        Result;                                                   // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WG_ItemShop.WG_ItemShop_C.GetItemInfoWidget
struct UWG_ItemShop_C_GetItemInfoWidget_Params
{
	class UWG_Item_Info_C*                             ItemInfoWidget;                                           // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WG_ItemShop.WG_ItemShop_C.OnKeyUp
struct UWG_ItemShop_C_OnKeyUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WG_ItemShop.WG_ItemShop_C.OnKeyDown
struct UWG_ItemShop_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WG_ItemShop.WG_ItemShop_C.OnFocusReceived
struct UWG_ItemShop_C_OnFocusReceived_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FFocusEvent*                                InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WG_ItemShop.WG_ItemShop_C.Refresh
struct UWG_ItemShop_C_Refresh_Params
{
};

// Function WG_ItemShop.WG_ItemShop_C.Construct
struct UWG_ItemShop_C_Construct_Params
{
};

// Function WG_ItemShop.WG_ItemShop_C.OnRemovedFromFocusPath
struct UWG_ItemShop_C_OnRemovedFromFocusPath_Params
{
	struct FFocusEvent*                                InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WG_ItemShop.WG_ItemShop_C.OnGamepadModeChanged
struct UWG_ItemShop_C_OnGamepadModeChanged_Params
{
	bool*                                              IsGamepadMode;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_ItemShop.WG_ItemShop_C.InitWithShopInventory
struct UWG_ItemShop_C_InitWithShopInventory_Params
{
	class UInventory**                                 Inventory;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_ItemShop.WG_ItemShop_C.PreConstruct
struct UWG_ItemShop_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_ItemShop.WG_ItemShop_C.BndEvt__Button_Perks_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UWG_ItemShop_C_BndEvt__Button_Perks_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WG_ItemShop.WG_ItemShop_C.PressedMove
struct UWG_ItemShop_C_PressedMove_Params
{
};

// Function WG_ItemShop.WG_ItemShop_C.PressedEquip
struct UWG_ItemShop_C_PressedEquip_Params
{
};

// Function WG_ItemShop.WG_ItemShop_C.PressedRemove
struct UWG_ItemShop_C_PressedRemove_Params
{
};

// Function WG_ItemShop.WG_ItemShop_C.PressedBack
struct UWG_ItemShop_C_PressedBack_Params
{
};

// Function WG_ItemShop.WG_ItemShop_C.LinkInventoriesWithShop
struct UWG_ItemShop_C_LinkInventoriesWithShop_Params
{
};

// Function WG_ItemShop.WG_ItemShop_C.SetupInventories
struct UWG_ItemShop_C_SetupInventories_Params
{
};

// Function WG_ItemShop.WG_ItemShop_C.UpdateButtonsInFooter
struct UWG_ItemShop_C_UpdateButtonsInFooter_Params
{
	class UWG_Inventory_Slot_C**                       InventorySlotWidget;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WG_ItemShop.WG_ItemShop_C.SlotDeselected
struct UWG_ItemShop_C_SlotDeselected_Params
{
	class UWG_Inventory_Slot_C**                       InventorySlotWidget;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WG_ItemShop.WG_ItemShop_C.OnCargoUnitChanged
struct UWG_ItemShop_C_OnCargoUnitChanged_Params
{
};

// Function WG_ItemShop.WG_ItemShop_C.UpdateShopItemAttributesCompareItem
struct UWG_ItemShop_C_UpdateShopItemAttributesCompareItem_Params
{
	class UWG_Inventory_Slot_C**                       CompareItemSlot;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WG_ItemShop.WG_ItemShop_C.PressedChangeCompare
struct UWG_ItemShop_C_PressedChangeCompare_Params
{
};

// Function WG_ItemShop.WG_ItemShop_C.FadeInOut
struct UWG_ItemShop_C_FadeInOut_Params
{
	bool*                                              IsFadeIn;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_ItemShop.WG_ItemShop_C.InitWithStationID
struct UWG_ItemShop_C_InitWithStationID_Params
{
	struct FName*                                      StationID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWG_Menu_Ingame_C**                          MenuIngameRef;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WG_ItemShop.WG_ItemShop_C.PressedPauseMenu
struct UWG_ItemShop_C_PressedPauseMenu_Params
{
};

// Function WG_ItemShop.WG_ItemShop_C.ExecuteUbergraph_WG_ItemShop
struct UWG_ItemShop_C_ExecuteUbergraph_WG_ItemShop_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_ItemShop.WG_ItemShop_C.OnClosed__DelegateSignature
struct UWG_ItemShop_C_OnClosed__DelegateSignature_Params
{
	class UWG_LootTransfer_C**                         LootTransferWidget;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_LootTransfer_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WG_LootTransfer.WG_LootTransfer_C.CanItemInfoVisibilityNotBeChanged
struct UWG_LootTransfer_C_CanItemInfoVisibilityNotBeChanged_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WG_LootTransfer.WG_LootTransfer_C.GetSelectedSlot
struct UWG_LootTransfer_C_GetSelectedSlot_Params
{
	class UWG_Inventory_Slot_C*                        Result;                                                   // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WG_LootTransfer.WG_LootTransfer_C.GetItemInfoWidget
struct UWG_LootTransfer_C_GetItemInfoWidget_Params
{
	class UWG_Item_Info_C*                             ItemInfoWidget;                                           // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WG_LootTransfer.WG_LootTransfer_C.DoCustomNavigation_1
struct UWG_LootTransfer_C_DoCustomNavigation_1_Params
{
	EUINavigation*                                     Navigation;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function WG_LootTransfer.WG_LootTransfer_C.MoveAllWithAutoClose
struct UWG_LootTransfer_C_MoveAllWithAutoClose_Params
{
};

// Function WG_LootTransfer.WG_LootTransfer_C.ForceNavigationToLootInventory
struct UWG_LootTransfer_C_ForceNavigationToLootInventory_Params
{
	EUINavigation*                                     Navigation;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function WG_LootTransfer.WG_LootTransfer_C.IsMoveAllAvailable
struct UWG_LootTransfer_C_IsMoveAllAvailable_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WG_LootTransfer.WG_LootTransfer_C.ToogleMoveAllAvailability
struct UWG_LootTransfer_C_ToogleMoveAllAvailability_Params
{
	bool*                                              IsActive;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWG_Inventory_Slot_C*                        SelectedSlot;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
};

// Function WG_LootTransfer.WG_LootTransfer_C.OnKeyUp
struct UWG_LootTransfer_C_OnKeyUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WG_LootTransfer.WG_LootTransfer_C.OnFocusReceived
struct UWG_LootTransfer_C_OnFocusReceived_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FFocusEvent*                                InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WG_LootTransfer.WG_LootTransfer_C.OnKeyDown
struct UWG_LootTransfer_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WG_LootTransfer.WG_LootTransfer_C.PressedEquip
struct UWG_LootTransfer_C_PressedEquip_Params
{
};

// Function WG_LootTransfer.WG_LootTransfer_C.PressedRemove
struct UWG_LootTransfer_C_PressedRemove_Params
{
};

// Function WG_LootTransfer.WG_LootTransfer_C.PressedBack
struct UWG_LootTransfer_C_PressedBack_Params
{
};

// Function WG_LootTransfer.WG_LootTransfer_C.SetupInventories
struct UWG_LootTransfer_C_SetupInventories_Params
{
};

// Function WG_LootTransfer.WG_LootTransfer_C.LinkInventoriesWithContainer
struct UWG_LootTransfer_C_LinkInventoriesWithContainer_Params
{
};

// Function WG_LootTransfer.WG_LootTransfer_C.UpdateButtonsInFooter
struct UWG_LootTransfer_C_UpdateButtonsInFooter_Params
{
	class UWG_Inventory_Slot_C**                       InventorySlotWidget;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WG_LootTransfer.WG_LootTransfer_C.SlotDeselected
struct UWG_LootTransfer_C_SlotDeselected_Params
{
	class UWG_Inventory_Slot_C**                       InventorySlotWidget;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WG_LootTransfer.WG_LootTransfer_C.PreConstruct
struct UWG_LootTransfer_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_LootTransfer.WG_LootTransfer_C.Refresh
struct UWG_LootTransfer_C_Refresh_Params
{
};

// Function WG_LootTransfer.WG_LootTransfer_C.OnCargoUnitChanged
struct UWG_LootTransfer_C_OnCargoUnitChanged_Params
{
};

// Function WG_LootTransfer.WG_LootTransfer_C.PressedMove
struct UWG_LootTransfer_C_PressedMove_Params
{
};

// Function WG_LootTransfer.WG_LootTransfer_C.PressedChangeCompare
struct UWG_LootTransfer_C_PressedChangeCompare_Params
{
};

// Function WG_LootTransfer.WG_LootTransfer_C.FadeInOut
struct UWG_LootTransfer_C_FadeInOut_Params
{
	bool*                                              IsFadeIn;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_LootTransfer.WG_LootTransfer_C.PressedMoveAll
struct UWG_LootTransfer_C_PressedMoveAll_Params
{
};

// Function WG_LootTransfer.WG_LootTransfer_C.BndEvt__ButtonMoveAllMouseOnly_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature
struct UWG_LootTransfer_C_BndEvt__ButtonMoveAllMouseOnly_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature_Params
{
	struct FInputActionButtonInfo*                     ActionInfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WG_LootTransfer.WG_LootTransfer_C.InitWithInventory
struct UWG_LootTransfer_C_InitWithInventory_Params
{
	class UInventory**                                 InventoryRef;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_LootTransfer.WG_LootTransfer_C.InitWithStationID
struct UWG_LootTransfer_C_InitWithStationID_Params
{
	struct FName*                                      StationID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWG_Menu_Ingame_C**                          MenuIngameRef;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WG_LootTransfer.WG_LootTransfer_C.OnGamepadModeChanged
struct UWG_LootTransfer_C_OnGamepadModeChanged_Params
{
	bool*                                              IsGamepadMode;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_LootTransfer.WG_LootTransfer_C.ExecuteUbergraph_WG_LootTransfer
struct UWG_LootTransfer_C_ExecuteUbergraph_WG_LootTransfer_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_LootTransfer.WG_LootTransfer_C.OnClosed__DelegateSignature
struct UWG_LootTransfer_C_OnClosed__DelegateSignature_Params
{
	class UWG_LootTransfer_C**                         LootTransferWidget;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

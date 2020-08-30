#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_IngameInventory_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WG_IngameInventory.WG_IngameInventory_C.CanItemInfoVisibilityNotBeChanged
struct UWG_IngameInventory_C_CanItemInfoVisibilityNotBeChanged_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WG_IngameInventory.WG_IngameInventory_C.GetSelectedSlot
struct UWG_IngameInventory_C_GetSelectedSlot_Params
{
	class UWG_Inventory_Slot_C*                        Result;                                                   // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WG_IngameInventory.WG_IngameInventory_C.GetItemInfoWidget
struct UWG_IngameInventory_C_GetItemInfoWidget_Params
{
	class UWG_Item_Info_C*                             ItemInfoWidget;                                           // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WG_IngameInventory.WG_IngameInventory_C.DoCustomNavigation_1
struct UWG_IngameInventory_C_DoCustomNavigation_1_Params
{
	EUINavigation*                                     Navigation;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function WG_IngameInventory.WG_IngameInventory_C.OnKeyUp
struct UWG_IngameInventory_C_OnKeyUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WG_IngameInventory.WG_IngameInventory_C.OnFocusReceived
struct UWG_IngameInventory_C_OnFocusReceived_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FFocusEvent*                                InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WG_IngameInventory.WG_IngameInventory_C.OnKeyDown
struct UWG_IngameInventory_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WG_IngameInventory.WG_IngameInventory_C.LinkInventories
struct UWG_IngameInventory_C_LinkInventories_Params
{
};

// Function WG_IngameInventory.WG_IngameInventory_C.PressedEquip
struct UWG_IngameInventory_C_PressedEquip_Params
{
};

// Function WG_IngameInventory.WG_IngameInventory_C.PressedRemove
struct UWG_IngameInventory_C_PressedRemove_Params
{
};

// Function WG_IngameInventory.WG_IngameInventory_C.PressedBack
struct UWG_IngameInventory_C_PressedBack_Params
{
};

// Function WG_IngameInventory.WG_IngameInventory_C.SetupInventories
struct UWG_IngameInventory_C_SetupInventories_Params
{
};

// Function WG_IngameInventory.WG_IngameInventory_C.Construct
struct UWG_IngameInventory_C_Construct_Params
{
};

// Function WG_IngameInventory.WG_IngameInventory_C.UpdateButtonsInFooter
struct UWG_IngameInventory_C_UpdateButtonsInFooter_Params
{
	class UWG_Inventory_Slot_C**                       InventorySlotWidget;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WG_IngameInventory.WG_IngameInventory_C.Refresh
struct UWG_IngameInventory_C_Refresh_Params
{
};

// Function WG_IngameInventory.WG_IngameInventory_C.SlotDeselected
struct UWG_IngameInventory_C_SlotDeselected_Params
{
	class UWG_Inventory_Slot_C**                       InventorySlotWidget;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WG_IngameInventory.WG_IngameInventory_C.OnGamepadModeChanged
struct UWG_IngameInventory_C_OnGamepadModeChanged_Params
{
	bool*                                              IsGamepadMode;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_IngameInventory.WG_IngameInventory_C.OnCargoUnitChanged
struct UWG_IngameInventory_C_OnCargoUnitChanged_Params
{
};

// Function WG_IngameInventory.WG_IngameInventory_C.PreConstruct
struct UWG_IngameInventory_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_IngameInventory.WG_IngameInventory_C.PressedMove
struct UWG_IngameInventory_C_PressedMove_Params
{
};

// Function WG_IngameInventory.WG_IngameInventory_C.PressedChangeCompare
struct UWG_IngameInventory_C_PressedChangeCompare_Params
{
};

// Function WG_IngameInventory.WG_IngameInventory_C.FadeInOut
struct UWG_IngameInventory_C_FadeInOut_Params
{
	bool*                                              IsFadeIn;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_IngameInventory.WG_IngameInventory_C.InitWithStationID
struct UWG_IngameInventory_C_InitWithStationID_Params
{
	struct FName*                                      StationID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWG_Menu_Ingame_C**                          MenuIngameRef;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WG_IngameInventory.WG_IngameInventory_C.PressedPauseMenu
struct UWG_IngameInventory_C_PressedPauseMenu_Params
{
};

// Function WG_IngameInventory.WG_IngameInventory_C.ExecuteUbergraph_WG_IngameInventory
struct UWG_IngameInventory_C_ExecuteUbergraph_WG_IngameInventory_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_Devices_Inventory_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WG_Devices_Inventory.WG_Devices_Inventory_C.OnFocusReceived
struct UWG_Devices_Inventory_C_OnFocusReceived_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FFocusEvent*                                InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WG_Devices_Inventory.WG_Devices_Inventory_C.OnKeyDown
struct UWG_Devices_Inventory_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WG_Devices_Inventory.WG_Devices_Inventory_C.Construct
struct UWG_Devices_Inventory_C_Construct_Params
{
};

// Function WG_Devices_Inventory.WG_Devices_Inventory_C.BndEvt__WG_MenuAction_Button_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature
struct UWG_Devices_Inventory_C_BndEvt__WG_MenuAction_Button_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature_Params
{
	struct FInputActionButtonInfo*                     ActionInfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WG_Devices_Inventory.WG_Devices_Inventory_C.OnSlotSelected_Event_1
struct UWG_Devices_Inventory_C_OnSlotSelected_Event_1_Params
{
	class UWG_Inventory_Slot_C**                       InventorySlotWidget;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WG_Devices_Inventory.WG_Devices_Inventory_C.OnSlotMouseDown_Event_1
struct UWG_Devices_Inventory_C_OnSlotMouseDown_Event_1_Params
{
	class UWG_Inventory_Slot_C**                       Slot;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WG_Devices_Inventory.WG_Devices_Inventory_C.HighlightSelectedDeviceMode
struct UWG_Devices_Inventory_C_HighlightSelectedDeviceMode_Params
{
};

// Function WG_Devices_Inventory.WG_Devices_Inventory_C.ExecuteUbergraph_WG_Devices_Inventory
struct UWG_Devices_Inventory_C_ExecuteUbergraph_WG_Devices_Inventory_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

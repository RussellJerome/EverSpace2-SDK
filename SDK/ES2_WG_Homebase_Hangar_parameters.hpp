#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_Homebase_Hangar_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WG_Homebase_Hangar.WG_Homebase_Hangar_C.CanItemInfoVisibilityNotBeChanged
struct UWG_Homebase_Hangar_C_CanItemInfoVisibilityNotBeChanged_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Homebase_Hangar.WG_Homebase_Hangar_C.GetSelectedSlot
struct UWG_Homebase_Hangar_C_GetSelectedSlot_Params
{
	class UWG_Inventory_Slot_C*                        Result;                                                   // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WG_Homebase_Hangar.WG_Homebase_Hangar_C.GetItemInfoWidget
struct UWG_Homebase_Hangar_C_GetItemInfoWidget_Params
{
	class UWG_Item_Info_C*                             ItemInfoWidget;                                           // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WG_Homebase_Hangar.WG_Homebase_Hangar_C.SetShipSelectorVisibility
struct UWG_Homebase_Hangar_C_SetShipSelectorVisibility_Params
{
	class UWG_Inventory_Slot_C**                       SelectedSlot;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WG_Homebase_Hangar.WG_Homebase_Hangar_C.OnKeyUp
struct UWG_Homebase_Hangar_C_OnKeyUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WG_Homebase_Hangar.WG_Homebase_Hangar_C.OnAnalogValueChanged
struct UWG_Homebase_Hangar_C_OnAnalogValueChanged_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FAnalogInputEvent*                          InAnalogInputEvent;                                       // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WG_Homebase_Hangar.WG_Homebase_Hangar_C.OnMouseMove
struct UWG_Homebase_Hangar_C_OnMouseMove_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WG_Homebase_Hangar.WG_Homebase_Hangar_C.OnMouseButtonUp
struct UWG_Homebase_Hangar_C_OnMouseButtonUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WG_Homebase_Hangar.WG_Homebase_Hangar_C.On_BorderBG_MouseButtonDown_1
struct UWG_Homebase_Hangar_C_On_BorderBG_MouseButtonDown_1_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WG_Homebase_Hangar.WG_Homebase_Hangar_C.OnKeyDown
struct UWG_Homebase_Hangar_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WG_Homebase_Hangar.WG_Homebase_Hangar_C.OnFocusReceived
struct UWG_Homebase_Hangar_C_OnFocusReceived_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FFocusEvent*                                InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WG_Homebase_Hangar.WG_Homebase_Hangar_C.PreConstruct
struct UWG_Homebase_Hangar_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Homebase_Hangar.WG_Homebase_Hangar_C.BndEvt__Button_Perks_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature
struct UWG_Homebase_Hangar_C_BndEvt__Button_Perks_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WG_Homebase_Hangar.WG_Homebase_Hangar_C.NextShipSelected
struct UWG_Homebase_Hangar_C_NextShipSelected_Params
{
};

// Function WG_Homebase_Hangar.WG_Homebase_Hangar_C.PreviousShipSelected
struct UWG_Homebase_Hangar_C_PreviousShipSelected_Params
{
};

// Function WG_Homebase_Hangar.WG_Homebase_Hangar_C.ChangeShip
struct UWG_Homebase_Hangar_C_ChangeShip_Params
{
	bool*                                              Previous;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Homebase_Hangar.WG_Homebase_Hangar_C.LinkInventoriesWithStorage
struct UWG_Homebase_Hangar_C_LinkInventoriesWithStorage_Params
{
};

// Function WG_Homebase_Hangar.WG_Homebase_Hangar_C.PressedMove
struct UWG_Homebase_Hangar_C_PressedMove_Params
{
};

// Function WG_Homebase_Hangar.WG_Homebase_Hangar_C.PressedEquip
struct UWG_Homebase_Hangar_C_PressedEquip_Params
{
};

// Function WG_Homebase_Hangar.WG_Homebase_Hangar_C.PressedRemove
struct UWG_Homebase_Hangar_C_PressedRemove_Params
{
};

// Function WG_Homebase_Hangar.WG_Homebase_Hangar_C.PressedBack
struct UWG_Homebase_Hangar_C_PressedBack_Params
{
};

// Function WG_Homebase_Hangar.WG_Homebase_Hangar_C.SetupInventories
struct UWG_Homebase_Hangar_C_SetupInventories_Params
{
};

// Function WG_Homebase_Hangar.WG_Homebase_Hangar_C.Construct
struct UWG_Homebase_Hangar_C_Construct_Params
{
};

// Function WG_Homebase_Hangar.WG_Homebase_Hangar_C.UpdateButtonsInFooter
struct UWG_Homebase_Hangar_C_UpdateButtonsInFooter_Params
{
	class UWG_Inventory_Slot_C**                       InventorySlotWidget;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WG_Homebase_Hangar.WG_Homebase_Hangar_C.SlotDeselected
struct UWG_Homebase_Hangar_C_SlotDeselected_Params
{
	class UWG_Inventory_Slot_C**                       InventorySlotWidget;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WG_Homebase_Hangar.WG_Homebase_Hangar_C.OnCargoUnitChanged
struct UWG_Homebase_Hangar_C_OnCargoUnitChanged_Params
{
};

// Function WG_Homebase_Hangar.WG_Homebase_Hangar_C.Tick
struct UWG_Homebase_Hangar_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Homebase_Hangar.WG_Homebase_Hangar_C.PressedChangeCompare
struct UWG_Homebase_Hangar_C_PressedChangeCompare_Params
{
};

// Function WG_Homebase_Hangar.WG_Homebase_Hangar_C.FadeInOut
struct UWG_Homebase_Hangar_C_FadeInOut_Params
{
	bool*                                              IsFadeIn;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Homebase_Hangar.WG_Homebase_Hangar_C.InitWithStationID
struct UWG_Homebase_Hangar_C_InitWithStationID_Params
{
	struct FName*                                      StationID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWG_Menu_Ingame_C**                          MenuIngameRef;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WG_Homebase_Hangar.WG_Homebase_Hangar_C.OnGamepadModeChanged
struct UWG_Homebase_Hangar_C_OnGamepadModeChanged_Params
{
	bool*                                              IsGamepadMode;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Homebase_Hangar.WG_Homebase_Hangar_C.PressedPauseMenu
struct UWG_Homebase_Hangar_C_PressedPauseMenu_Params
{
};

// Function WG_Homebase_Hangar.WG_Homebase_Hangar_C.Refresh
struct UWG_Homebase_Hangar_C_Refresh_Params
{
};

// Function WG_Homebase_Hangar.WG_Homebase_Hangar_C.ExecuteUbergraph_WG_Homebase_Hangar
struct UWG_Homebase_Hangar_C_ExecuteUbergraph_WG_Homebase_Hangar_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Homebase_Hangar.WG_Homebase_Hangar_C.OnBlurOutBackground__DelegateSignature
struct UWG_Homebase_Hangar_C_OnBlurOutBackground__DelegateSignature_Params
{
	bool*                                              Immediately;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Homebase_Hangar.WG_Homebase_Hangar_C.OnBlurInBackground__DelegateSignature
struct UWG_Homebase_Hangar_C_OnBlurInBackground__DelegateSignature_Params
{
	bool*                                              Immediately;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Homebase_Hangar.WG_Homebase_Hangar_C.OnClosed__DelegateSignature
struct UWG_Homebase_Hangar_C_OnClosed__DelegateSignature_Params
{
	class UWG_LootTransfer_C**                         LootTransferWidget;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_Ship_Management_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WG_Ship_Management.WG_Ship_Management_C.CanItemInfoVisibilityNotBeChanged
struct UWG_Ship_Management_C_CanItemInfoVisibilityNotBeChanged_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Ship_Management.WG_Ship_Management_C.GetSelectedSlot
struct UWG_Ship_Management_C_GetSelectedSlot_Params
{
	class UWG_Inventory_Slot_C*                        Result;                                                   // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WG_Ship_Management.WG_Ship_Management_C.GetItemInfoWidget
struct UWG_Ship_Management_C_GetItemInfoWidget_Params
{
	class UWG_Item_Info_C*                             ItemInfoWidget;                                           // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WG_Ship_Management.WG_Ship_Management_C.AddAttributesToBox
struct UWG_Ship_Management_C_AddAttributesToBox_Params
{
	TArray<struct FName>                               Array;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UPanelWidget**                               Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool*                                              IsCompoundAttr;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Ship_Management.WG_Ship_Management_C.OnKeyUp
struct UWG_Ship_Management_C_OnKeyUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WG_Ship_Management.WG_Ship_Management_C.OnKeyDown
struct UWG_Ship_Management_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WG_Ship_Management.WG_Ship_Management_C.OnFocusReceived
struct UWG_Ship_Management_C_OnFocusReceived_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FFocusEvent*                                InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WG_Ship_Management.WG_Ship_Management_C.OnGamepadModeChanged
struct UWG_Ship_Management_C_OnGamepadModeChanged_Params
{
	bool*                                              IsGamepadMode;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Ship_Management.WG_Ship_Management_C.Refresh
struct UWG_Ship_Management_C_Refresh_Params
{
};

// Function WG_Ship_Management.WG_Ship_Management_C.PreConstruct
struct UWG_Ship_Management_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Ship_Management.WG_Ship_Management_C.BndEvt__Button_Perks_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UWG_Ship_Management_C_BndEvt__Button_Perks_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WG_Ship_Management.WG_Ship_Management_C.FadeInOut
struct UWG_Ship_Management_C_FadeInOut_Params
{
	bool*                                              IsFadeIn;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Ship_Management.WG_Ship_Management_C.PressedBack
struct UWG_Ship_Management_C_PressedBack_Params
{
};

// Function WG_Ship_Management.WG_Ship_Management_C.Tick
struct UWG_Ship_Management_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Ship_Management.WG_Ship_Management_C.Construct
struct UWG_Ship_Management_C_Construct_Params
{
};

// Function WG_Ship_Management.WG_Ship_Management_C.NextShipSelected
struct UWG_Ship_Management_C_NextShipSelected_Params
{
};

// Function WG_Ship_Management.WG_Ship_Management_C.PreviousShipSelected
struct UWG_Ship_Management_C_PreviousShipSelected_Params
{
};

// Function WG_Ship_Management.WG_Ship_Management_C.ChangeShip
struct UWG_Ship_Management_C_ChangeShip_Params
{
	bool*                                              Previous;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Ship_Management.WG_Ship_Management_C.BndEvt__WG_MenuAction_Button_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature
struct UWG_Ship_Management_C_BndEvt__WG_MenuAction_Button_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature_Params
{
	struct FInputActionButtonInfo*                     ActionInfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WG_Ship_Management.WG_Ship_Management_C.BndEvt__WG_MenuAction_Button_C_0_K2Node_ComponentBoundEvent_2_OnButtonClicked__DelegateSignature
struct UWG_Ship_Management_C_BndEvt__WG_MenuAction_Button_C_0_K2Node_ComponentBoundEvent_2_OnButtonClicked__DelegateSignature_Params
{
	struct FInputActionButtonInfo*                     ActionInfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WG_Ship_Management.WG_Ship_Management_C.Destruct
struct UWG_Ship_Management_C_Destruct_Params
{
};

// Function WG_Ship_Management.WG_Ship_Management_C.InitWithStationID
struct UWG_Ship_Management_C_InitWithStationID_Params
{
	struct FName*                                      StationID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWG_Menu_Ingame_C**                          MenuIngameRef;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WG_Ship_Management.WG_Ship_Management_C.PressedPauseMenu
struct UWG_Ship_Management_C_PressedPauseMenu_Params
{
};

// Function WG_Ship_Management.WG_Ship_Management_C.ExecuteUbergraph_WG_Ship_Management
struct UWG_Ship_Management_C_ExecuteUbergraph_WG_Ship_Management_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Ship_Management.WG_Ship_Management_C.OnClosed__DelegateSignature
struct UWG_Ship_Management_C_OnClosed__DelegateSignature_Params
{
	class UWG_LootTransfer_C**                         LootTransferWidget;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_Station_Home_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WG_Station_Home.WG_Station_Home_C.CanItemInfoVisibilityNotBeChanged
struct UWG_Station_Home_C_CanItemInfoVisibilityNotBeChanged_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Station_Home.WG_Station_Home_C.GetSelectedSlot
struct UWG_Station_Home_C_GetSelectedSlot_Params
{
	class UWG_Inventory_Slot_C*                        Result;                                                   // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WG_Station_Home.WG_Station_Home_C.GetItemInfoWidget
struct UWG_Station_Home_C_GetItemInfoWidget_Params
{
	class UWG_Item_Info_C*                             ItemInfoWidget;                                           // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WG_Station_Home.WG_Station_Home_C.OnKeyUp
struct UWG_Station_Home_C_OnKeyUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WG_Station_Home.WG_Station_Home_C.OnMouseButtonUp
struct UWG_Station_Home_C_OnMouseButtonUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WG_Station_Home.WG_Station_Home_C.On_BorderBG_MouseButtonDown_1
struct UWG_Station_Home_C_On_BorderBG_MouseButtonDown_1_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WG_Station_Home.WG_Station_Home_C.OnAnalogValueChanged
struct UWG_Station_Home_C_OnAnalogValueChanged_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FAnalogInputEvent*                          InAnalogInputEvent;                                       // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WG_Station_Home.WG_Station_Home_C.OnMouseMove
struct UWG_Station_Home_C_OnMouseMove_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WG_Station_Home.WG_Station_Home_C.OnFocusReceived
struct UWG_Station_Home_C_OnFocusReceived_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FFocusEvent*                                InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WG_Station_Home.WG_Station_Home_C.OnKeyDown
struct UWG_Station_Home_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WG_Station_Home.WG_Station_Home_C.FadeInOut
struct UWG_Station_Home_C_FadeInOut_Params
{
	bool*                                              IsFadeIn;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Station_Home.WG_Station_Home_C.OnGamepadModeChanged
struct UWG_Station_Home_C_OnGamepadModeChanged_Params
{
	bool*                                              IsGamepadMode;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Station_Home.WG_Station_Home_C.PreConstruct
struct UWG_Station_Home_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Station_Home.WG_Station_Home_C.PressedBack
struct UWG_Station_Home_C_PressedBack_Params
{
};

// Function WG_Station_Home.WG_Station_Home_C.ReinitHomeScreen
struct UWG_Station_Home_C_ReinitHomeScreen_Params
{
};

// Function WG_Station_Home.WG_Station_Home_C.Construct
struct UWG_Station_Home_C_Construct_Params
{
};

// Function WG_Station_Home.WG_Station_Home_C.ChangeShip
struct UWG_Station_Home_C_ChangeShip_Params
{
	bool*                                              Previous;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Station_Home.WG_Station_Home_C.InitWithStationID
struct UWG_Station_Home_C_InitWithStationID_Params
{
	struct FName*                                      StationID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWG_Menu_Ingame_C**                          MenuIngameRef;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WG_Station_Home.WG_Station_Home_C.PressedPauseMenu
struct UWG_Station_Home_C_PressedPauseMenu_Params
{
};

// Function WG_Station_Home.WG_Station_Home_C.NextShipSelected
struct UWG_Station_Home_C_NextShipSelected_Params
{
};

// Function WG_Station_Home.WG_Station_Home_C.PreviousShipSelected
struct UWG_Station_Home_C_PreviousShipSelected_Params
{
};

// Function WG_Station_Home.WG_Station_Home_C.OpenRefillMenu
struct UWG_Station_Home_C_OpenRefillMenu_Params
{
};

// Function WG_Station_Home.WG_Station_Home_C.RefillMenuClosed
struct UWG_Station_Home_C_RefillMenuClosed_Params
{
};

// Function WG_Station_Home.WG_Station_Home_C.PressedRefill
struct UWG_Station_Home_C_PressedRefill_Params
{
};

// Function WG_Station_Home.WG_Station_Home_C.PressedRepair
struct UWG_Station_Home_C_PressedRepair_Params
{
};

// Function WG_Station_Home.WG_Station_Home_C.OpenRepairMenu
struct UWG_Station_Home_C_OpenRepairMenu_Params
{
};

// Function WG_Station_Home.WG_Station_Home_C.OnRepairClosed
struct UWG_Station_Home_C_OnRepairClosed_Params
{
	bool*                                              HasRepaired;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Station_Home.WG_Station_Home_C.Refresh
struct UWG_Station_Home_C_Refresh_Params
{
};

// Function WG_Station_Home.WG_Station_Home_C.ExecuteUbergraph_WG_Station_Home
struct UWG_Station_Home_C_ExecuteUbergraph_WG_Station_Home_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

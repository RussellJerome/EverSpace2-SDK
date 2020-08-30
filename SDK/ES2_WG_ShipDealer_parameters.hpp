#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_ShipDealer_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WG_ShipDealer.WG_ShipDealer_C.CanItemInfoVisibilityNotBeChanged
struct UWG_ShipDealer_C_CanItemInfoVisibilityNotBeChanged_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WG_ShipDealer.WG_ShipDealer_C.GetSelectedSlot
struct UWG_ShipDealer_C_GetSelectedSlot_Params
{
	class UWG_Inventory_Slot_C*                        Result;                                                   // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WG_ShipDealer.WG_ShipDealer_C.GetItemInfoWidget
struct UWG_ShipDealer_C_GetItemInfoWidget_Params
{
	class UWG_Item_Info_C*                             ItemInfoWidget;                                           // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WG_ShipDealer.WG_ShipDealer_C.OnKeyUp
struct UWG_ShipDealer_C_OnKeyUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WG_ShipDealer.WG_ShipDealer_C.OnMouseMove
struct UWG_ShipDealer_C_OnMouseMove_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WG_ShipDealer.WG_ShipDealer_C.OnMouseButtonUp
struct UWG_ShipDealer_C_OnMouseButtonUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WG_ShipDealer.WG_ShipDealer_C.On_BorderBG_MouseButtonDown_1
struct UWG_ShipDealer_C_On_BorderBG_MouseButtonDown_1_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WG_ShipDealer.WG_ShipDealer_C.OnAnalogValueChanged
struct UWG_ShipDealer_C_OnAnalogValueChanged_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FAnalogInputEvent*                          InAnalogInputEvent;                                       // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WG_ShipDealer.WG_ShipDealer_C.GetSelectedShipData
struct UWG_ShipDealer_C_GetSelectedShipData_Params
{
	bool                                               FoundData;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FShipData                                   ShipData;                                                 // (Parm, OutParm)
	int                                                Index;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WG_ShipDealer.WG_ShipDealer_C.Get_TxtNoOffers_Visibility_1
struct UWG_ShipDealer_C_Get_TxtNoOffers_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WG_ShipDealer.WG_ShipDealer_C.OnKeyDown
struct UWG_ShipDealer_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WG_ShipDealer.WG_ShipDealer_C.OnFocusReceived
struct UWG_ShipDealer_C_OnFocusReceived_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FFocusEvent*                                InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WG_ShipDealer.WG_ShipDealer_C.FadeInOut
struct UWG_ShipDealer_C_FadeInOut_Params
{
	bool*                                              IsFadeIn;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_ShipDealer.WG_ShipDealer_C.OnGamepadModeChanged
struct UWG_ShipDealer_C_OnGamepadModeChanged_Params
{
	bool*                                              IsGamepadMode;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_ShipDealer.WG_ShipDealer_C.Refresh
struct UWG_ShipDealer_C_Refresh_Params
{
};

// Function WG_ShipDealer.WG_ShipDealer_C.PreConstruct
struct UWG_ShipDealer_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_ShipDealer.WG_ShipDealer_C.PressedBack
struct UWG_ShipDealer_C_PressedBack_Params
{
};

// Function WG_ShipDealer.WG_ShipDealer_C.NewShipSelected
struct UWG_ShipDealer_C_NewShipSelected_Params
{
	class UWG_Inventory_Slot_C**                       InventorySlotWidget;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WG_ShipDealer.WG_ShipDealer_C.PressedBuy
struct UWG_ShipDealer_C_PressedBuy_Params
{
};

// Function WG_ShipDealer.WG_ShipDealer_C.OnFadedOut
struct UWG_ShipDealer_C_OnFadedOut_Params
{
	class UWG_Fullscreen_Fade_C**                      Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WG_ShipDealer.WG_ShipDealer_C.LeaveShop
struct UWG_ShipDealer_C_LeaveShop_Params
{
};

// Function WG_ShipDealer.WG_ShipDealer_C.TradeShip
struct UWG_ShipDealer_C_TradeShip_Params
{
};

// Function WG_ShipDealer.WG_ShipDealer_C.BuyShip
struct UWG_ShipDealer_C_BuyShip_Params
{
};

// Function WG_ShipDealer.WG_ShipDealer_C.FlyNewShip
struct UWG_ShipDealer_C_FlyNewShip_Params
{
};

// Function WG_ShipDealer.WG_ShipDealer_C.FlyOldShip
struct UWG_ShipDealer_C_FlyOldShip_Params
{
};

// Function WG_ShipDealer.WG_ShipDealer_C.TriggerBuy
struct UWG_ShipDealer_C_TriggerBuy_Params
{
};

// Function WG_ShipDealer.WG_ShipDealer_C.InitWithStationID
struct UWG_ShipDealer_C_InitWithStationID_Params
{
	struct FName*                                      StationID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWG_Menu_Ingame_C**                          MenuIngameRef;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WG_ShipDealer.WG_ShipDealer_C.ExecuteUbergraph_WG_ShipDealer
struct UWG_ShipDealer_C_ExecuteUbergraph_WG_ShipDealer_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

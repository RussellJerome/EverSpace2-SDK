#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_Refill_Ammo_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WG_Refill_Ammo.WG_Refill_Ammo_C.IsRefillAllPossible
struct UWG_Refill_Ammo_C_IsRefillAllPossible_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WG_Refill_Ammo.WG_Refill_Ammo_C.OnFocusReceived
struct UWG_Refill_Ammo_C_OnFocusReceived_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FFocusEvent*                                InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WG_Refill_Ammo.WG_Refill_Ammo_C.GetTotalPrice
struct UWG_Refill_Ammo_C_GetTotalPrice_Params
{
	int                                                TotalPrice;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Refill_Ammo.WG_Refill_Ammo_C.OnKeyDown
struct UWG_Refill_Ammo_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WG_Refill_Ammo.WG_Refill_Ammo_C.OnKeyUp
struct UWG_Refill_Ammo_C_OnKeyUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WG_Refill_Ammo.WG_Refill_Ammo_C.PreConstruct
struct UWG_Refill_Ammo_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Refill_Ammo.WG_Refill_Ammo_C.CloseMenu
struct UWG_Refill_Ammo_C_CloseMenu_Params
{
};

// Function WG_Refill_Ammo.WG_Refill_Ammo_C.FillAll
struct UWG_Refill_Ammo_C_FillAll_Params
{
};

// Function WG_Refill_Ammo.WG_Refill_Ammo_C.UpdateHasEnoughCredits
struct UWG_Refill_Ammo_C_UpdateHasEnoughCredits_Params
{
};

// Function WG_Refill_Ammo.WG_Refill_Ammo_C.RowAmountChanged
struct UWG_Refill_Ammo_C_RowAmountChanged_Params
{
};

// Function WG_Refill_Ammo.WG_Refill_Ammo_C.UpdateTotalPrice
struct UWG_Refill_Ammo_C_UpdateTotalPrice_Params
{
};

// Function WG_Refill_Ammo.WG_Refill_Ammo_C.Buy
struct UWG_Refill_Ammo_C_Buy_Params
{
};

// Function WG_Refill_Ammo.WG_Refill_Ammo_C.RowSelected
struct UWG_Refill_Ammo_C_RowSelected_Params
{
	class UWG_Refill_Ammo_Row_C**                      Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WG_Refill_Ammo.WG_Refill_Ammo_C.UpdateBuyButtonVisibility
struct UWG_Refill_Ammo_C_UpdateBuyButtonVisibility_Params
{
};

// Function WG_Refill_Ammo.WG_Refill_Ammo_C.CustomEventYo
struct UWG_Refill_Ammo_C_CustomEventYo_Params
{
};

// Function WG_Refill_Ammo.WG_Refill_Ammo_C.PurchasedPressed
struct UWG_Refill_Ammo_C_PurchasedPressed_Params
{
	struct FInputActionButtonInfo*                     ActionInfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WG_Refill_Ammo.WG_Refill_Ammo_C.CancelPressed
struct UWG_Refill_Ammo_C_CancelPressed_Params
{
	struct FInputActionButtonInfo*                     ActionInfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WG_Refill_Ammo.WG_Refill_Ammo_C.Construct
struct UWG_Refill_Ammo_C_Construct_Params
{
};

// Function WG_Refill_Ammo.WG_Refill_Ammo_C.RefillAllPressed
struct UWG_Refill_Ammo_C_RefillAllPressed_Params
{
	struct FInputActionButtonInfo*                     ActionInfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WG_Refill_Ammo.WG_Refill_Ammo_C.Tick
struct UWG_Refill_Ammo_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Refill_Ammo.WG_Refill_Ammo_C.UpdateRows
struct UWG_Refill_Ammo_C_UpdateRows_Params
{
};

// Function WG_Refill_Ammo.WG_Refill_Ammo_C.ExecuteUbergraph_WG_Refill_Ammo
struct UWG_Refill_Ammo_C_ExecuteUbergraph_WG_Refill_Ammo_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Refill_Ammo.WG_Refill_Ammo_C.OnClose__DelegateSignature
struct UWG_Refill_Ammo_C_OnClose__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

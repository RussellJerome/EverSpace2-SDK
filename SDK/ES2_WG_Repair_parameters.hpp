#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_Repair_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WG_Repair.WG_Repair_C.IsRefillAllPossible
struct UWG_Repair_C_IsRefillAllPossible_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WG_Repair.WG_Repair_C.OnFocusReceived
struct UWG_Repair_C_OnFocusReceived_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FFocusEvent*                                InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WG_Repair.WG_Repair_C.GetTotalPrice
struct UWG_Repair_C_GetTotalPrice_Params
{
	int                                                TotalPrice;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Repair.WG_Repair_C.OnKeyDown
struct UWG_Repair_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WG_Repair.WG_Repair_C.OnKeyUp
struct UWG_Repair_C_OnKeyUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WG_Repair.WG_Repair_C.PreConstruct
struct UWG_Repair_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Repair.WG_Repair_C.CloseMenu
struct UWG_Repair_C_CloseMenu_Params
{
};

// Function WG_Repair.WG_Repair_C.FillAll
struct UWG_Repair_C_FillAll_Params
{
};

// Function WG_Repair.WG_Repair_C.UpdateHasEnoughCredits
struct UWG_Repair_C_UpdateHasEnoughCredits_Params
{
};

// Function WG_Repair.WG_Repair_C.RowAmountChanged
struct UWG_Repair_C_RowAmountChanged_Params
{
};

// Function WG_Repair.WG_Repair_C.UpdateTotalPrice
struct UWG_Repair_C_UpdateTotalPrice_Params
{
};

// Function WG_Repair.WG_Repair_C.Buy
struct UWG_Repair_C_Buy_Params
{
};

// Function WG_Repair.WG_Repair_C.RowSelected
struct UWG_Repair_C_RowSelected_Params
{
	class UWG_Refill_Ammo_Row_C**                      Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WG_Repair.WG_Repair_C.UpdateBuyButtonVisibility
struct UWG_Repair_C_UpdateBuyButtonVisibility_Params
{
};

// Function WG_Repair.WG_Repair_C.CustomEventYo
struct UWG_Repair_C_CustomEventYo_Params
{
};

// Function WG_Repair.WG_Repair_C.PurchasedPressed
struct UWG_Repair_C_PurchasedPressed_Params
{
	struct FInputActionButtonInfo*                     ActionInfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WG_Repair.WG_Repair_C.CancelPressed
struct UWG_Repair_C_CancelPressed_Params
{
	struct FInputActionButtonInfo*                     ActionInfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WG_Repair.WG_Repair_C.Construct
struct UWG_Repair_C_Construct_Params
{
};

// Function WG_Repair.WG_Repair_C.RefillAllPressed
struct UWG_Repair_C_RefillAllPressed_Params
{
	struct FInputActionButtonInfo*                     ActionInfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WG_Repair.WG_Repair_C.Tick
struct UWG_Repair_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Repair.WG_Repair_C.UpdateRows
struct UWG_Repair_C_UpdateRows_Params
{
};

// Function WG_Repair.WG_Repair_C.AddRowEntry
struct UWG_Repair_C_AddRowEntry_Params
{
	class UWG_Refill_Ammo_Row_C**                      Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WG_Repair.WG_Repair_C.CloseWidget
struct UWG_Repair_C_CloseWidget_Params
{
	bool*                                              HasRepaired;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Repair.WG_Repair_C.ExecuteUbergraph_WG_Repair
struct UWG_Repair_C_ExecuteUbergraph_WG_Repair_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Repair.WG_Repair_C.OnClose__DelegateSignature
struct UWG_Repair_C_OnClose__DelegateSignature_Params
{
	bool*                                              HasRepaired;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

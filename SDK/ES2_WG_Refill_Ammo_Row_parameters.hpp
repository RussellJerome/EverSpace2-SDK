#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_Refill_Ammo_Row_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WG_Refill_Ammo_Row.WG_Refill_Ammo_Row_C.ToggleHighlight
struct UWG_Refill_Ammo_Row_C_ToggleHighlight_Params
{
	bool*                                              State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Refill_Ammo_Row.WG_Refill_Ammo_Row_C.IsMaxedOut
struct UWG_Refill_Ammo_Row_C_IsMaxedOut_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Refill_Ammo_Row.WG_Refill_Ammo_Row_C.OnFocusReceived
struct UWG_Refill_Ammo_Row_C_OnFocusReceived_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FFocusEvent*                                InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WG_Refill_Ammo_Row.WG_Refill_Ammo_Row_C.OnKeyDown
struct UWG_Refill_Ammo_Row_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WG_Refill_Ammo_Row.WG_Refill_Ammo_Row_C.GetCurrentAmountText
struct UWG_Refill_Ammo_Row_C_GetCurrentAmountText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WG_Refill_Ammo_Row.WG_Refill_Ammo_Row_C.TrySetToMax
struct UWG_Refill_Ammo_Row_C_TrySetToMax_Params
{
	int*                                               AvailableCredits;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Refill_Ammo_Row.WG_Refill_Ammo_Row_C.Update
struct UWG_Refill_Ammo_Row_C_Update_Params
{
	int*                                               AvailableCredits;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Refill_Ammo_Row.WG_Refill_Ammo_Row_C.UpdateTotalPrice
struct UWG_Refill_Ammo_Row_C_UpdateTotalPrice_Params
{
};

// Function WG_Refill_Ammo_Row.WG_Refill_Ammo_Row_C.OnMouseEnter
struct UWG_Refill_Ammo_Row_C_OnMouseEnter_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WG_Refill_Ammo_Row.WG_Refill_Ammo_Row_C.OnMouseLeave
struct UWG_Refill_Ammo_Row_C_OnMouseLeave_Params
{
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WG_Refill_Ammo_Row.WG_Refill_Ammo_Row_C.OnFocusLost
struct UWG_Refill_Ammo_Row_C_OnFocusLost_Params
{
	struct FFocusEvent*                                InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WG_Refill_Ammo_Row.WG_Refill_Ammo_Row_C.PreConstruct
struct UWG_Refill_Ammo_Row_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Refill_Ammo_Row.WG_Refill_Ammo_Row_C.ChangeAmount
struct UWG_Refill_Ammo_Row_C_ChangeAmount_Params
{
	int*                                               NewAmount;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Refill_Ammo_Row.WG_Refill_Ammo_Row_C.ExecuteUbergraph_WG_Refill_Ammo_Row
struct UWG_Refill_Ammo_Row_C_ExecuteUbergraph_WG_Refill_Ammo_Row_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Refill_Ammo_Row.WG_Refill_Ammo_Row_C.OnSelected__DelegateSignature
struct UWG_Refill_Ammo_Row_C_OnSelected__DelegateSignature_Params
{
	class UWG_Refill_Ammo_Row_C**                      Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WG_Refill_Ammo_Row.WG_Refill_Ammo_Row_C.OnAmountChanged__DelegateSignature
struct UWG_Refill_Ammo_Row_C_OnAmountChanged__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

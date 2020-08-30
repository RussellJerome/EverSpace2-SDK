#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_AmountSelection_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WG_AmountSelection.WG_AmountSelection_C.OnFocusReceived
struct UWG_AmountSelection_C_OnFocusReceived_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FFocusEvent*                                InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WG_AmountSelection.WG_AmountSelection_C.SetupAppearance
struct UWG_AmountSelection_C_SetupAppearance_Params
{
};

// Function WG_AmountSelection.WG_AmountSelection_C.GetCurrentTotalPrice
struct UWG_AmountSelection_C_GetCurrentTotalPrice_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WG_AmountSelection.WG_AmountSelection_C.SetTransactionCosts
struct UWG_AmountSelection_C_SetTransactionCosts_Params
{
};

// Function WG_AmountSelection.WG_AmountSelection_C.InitAmounts
struct UWG_AmountSelection_C_InitAmounts_Params
{
};

// Function WG_AmountSelection.WG_AmountSelection_C.GetAmountAtSlotIndex
struct UWG_AmountSelection_C_GetAmountAtSlotIndex_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Amount;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WG_AmountSelection.WG_AmountSelection_C.SetSlotRatioInformation
struct UWG_AmountSelection_C_SetSlotRatioInformation_Params
{
};

// Function WG_AmountSelection.WG_AmountSelection_C.GetFreeStackAmountForItem
struct UWG_AmountSelection_C_GetFreeStackAmountForItem_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WG_AmountSelection.WG_AmountSelection_C.NeededSlotAmount
struct UWG_AmountSelection_C_NeededSlotAmount_Params
{
	int*                                               Item_Amount;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Free_Stack_Amount;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Max_Stack_Amount;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Slot_Amount;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WG_AmountSelection.WG_AmountSelection_C.CreateSlotIndicators
struct UWG_AmountSelection_C_CreateSlotIndicators_Params
{
};

// Function WG_AmountSelection.WG_AmountSelection_C.OnKeyDown
struct UWG_AmountSelection_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WG_AmountSelection.WG_AmountSelection_C.OnLoaded_D2B6354243D6D2763F6763B9D21E7C4F
struct UWG_AmountSelection_C_OnLoaded_D2B6354243D6D2763F6763B9D21E7C4F_Params
{
	class UObject**                                    Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_AmountSelection.WG_AmountSelection_C.OKPressed
struct UWG_AmountSelection_C_OKPressed_Params
{
	struct FInputActionButtonInfo*                     ActionInfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WG_AmountSelection.WG_AmountSelection_C.CancelPressed
struct UWG_AmountSelection_C_CancelPressed_Params
{
	struct FInputActionButtonInfo*                     ActionInfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WG_AmountSelection.WG_AmountSelection_C.CustomEventYo
struct UWG_AmountSelection_C_CustomEventYo_Params
{
};

// Function WG_AmountSelection.WG_AmountSelection_C.Construct
struct UWG_AmountSelection_C_Construct_Params
{
};

// Function WG_AmountSelection.WG_AmountSelection_C.PreConstruct
struct UWG_AmountSelection_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_AmountSelection.WG_AmountSelection_C.OnAmountChanged
struct UWG_AmountSelection_C_OnAmountChanged_Params
{
	int*                                               NewAmount;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_AmountSelection.WG_AmountSelection_C.ExecuteUbergraph_WG_AmountSelection
struct UWG_AmountSelection_C_ExecuteUbergraph_WG_AmountSelection_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_AmountSelection.WG_AmountSelection_C.OnAlternativePressed__DelegateSignature
struct UWG_AmountSelection_C_OnAlternativePressed__DelegateSignature_Params
{
};

// Function WG_AmountSelection.WG_AmountSelection_C.OnCancelPressed__DelegateSignature
struct UWG_AmountSelection_C_OnCancelPressed__DelegateSignature_Params
{
};

// Function WG_AmountSelection.WG_AmountSelection_C.OnOKPressed__DelegateSignature
struct UWG_AmountSelection_C_OnOKPressed__DelegateSignature_Params
{
	class UWG_Inventory_Slot_C**                       SourceInventorySlot;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWG_Inventory_C**                            CustomTransferInventory;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               TransferAmount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWG_Inventory_Slot_C**                       TargetInventorySlot;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

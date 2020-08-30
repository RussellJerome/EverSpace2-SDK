// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_AmountSelection_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WG_AmountSelection.WG_AmountSelection_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWG_AmountSelection_C::OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_AmountSelection.WG_AmountSelection_C.OnFocusReceived");

	UWG_AmountSelection_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_AmountSelection.WG_AmountSelection_C.SetupAppearance
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWG_AmountSelection_C::SetupAppearance()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_AmountSelection.WG_AmountSelection_C.SetupAppearance");

	UWG_AmountSelection_C_SetupAppearance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_AmountSelection.WG_AmountSelection_C.GetCurrentTotalPrice
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UWG_AmountSelection_C::GetCurrentTotalPrice()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_AmountSelection.WG_AmountSelection_C.GetCurrentTotalPrice");

	UWG_AmountSelection_C_GetCurrentTotalPrice_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_AmountSelection.WG_AmountSelection_C.SetTransactionCosts
// (Public, BlueprintCallable, BlueprintEvent)

void UWG_AmountSelection_C::SetTransactionCosts()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_AmountSelection.WG_AmountSelection_C.SetTransactionCosts");

	UWG_AmountSelection_C_SetTransactionCosts_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_AmountSelection.WG_AmountSelection_C.InitAmounts
// (Public, BlueprintCallable, BlueprintEvent)

void UWG_AmountSelection_C::InitAmounts()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_AmountSelection.WG_AmountSelection_C.InitAmounts");

	UWG_AmountSelection_C_InitAmounts_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_AmountSelection.WG_AmountSelection_C.GetAmountAtSlotIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Amount                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWG_AmountSelection_C::GetAmountAtSlotIndex(int* Index, int* Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_AmountSelection.WG_AmountSelection_C.GetAmountAtSlotIndex");

	UWG_AmountSelection_C_GetAmountAtSlotIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Amount != nullptr)
		*Amount = params.Amount;
}


// Function WG_AmountSelection.WG_AmountSelection_C.SetSlotRatioInformation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWG_AmountSelection_C::SetSlotRatioInformation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_AmountSelection.WG_AmountSelection_C.SetSlotRatioInformation");

	UWG_AmountSelection_C_SetSlotRatioInformation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_AmountSelection.WG_AmountSelection_C.GetFreeStackAmountForItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UWG_AmountSelection_C::GetFreeStackAmountForItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_AmountSelection.WG_AmountSelection_C.GetFreeStackAmountForItem");

	UWG_AmountSelection_C_GetFreeStackAmountForItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_AmountSelection.WG_AmountSelection_C.NeededSlotAmount
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Item_Amount                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           Free_Stack_Amount              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           Max_Stack_Amount               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Slot_Amount                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWG_AmountSelection_C::NeededSlotAmount(int* Item_Amount, int* Free_Stack_Amount, int* Max_Stack_Amount, int* Slot_Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_AmountSelection.WG_AmountSelection_C.NeededSlotAmount");

	UWG_AmountSelection_C_NeededSlotAmount_Params params;
	params.Item_Amount = Item_Amount;
	params.Free_Stack_Amount = Free_Stack_Amount;
	params.Max_Stack_Amount = Max_Stack_Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Slot_Amount != nullptr)
		*Slot_Amount = params.Slot_Amount;
}


// Function WG_AmountSelection.WG_AmountSelection_C.CreateSlotIndicators
// (Public, BlueprintCallable, BlueprintEvent)

void UWG_AmountSelection_C::CreateSlotIndicators()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_AmountSelection.WG_AmountSelection_C.CreateSlotIndicators");

	UWG_AmountSelection_C_CreateSlotIndicators_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_AmountSelection.WG_AmountSelection_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWG_AmountSelection_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_AmountSelection.WG_AmountSelection_C.OnKeyDown");

	UWG_AmountSelection_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_AmountSelection.WG_AmountSelection_C.OnLoaded_D2B6354243D6D2763F6763B9D21E7C4F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject**                Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_AmountSelection_C::OnLoaded_D2B6354243D6D2763F6763B9D21E7C4F(class UObject** Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_AmountSelection.WG_AmountSelection_C.OnLoaded_D2B6354243D6D2763F6763B9D21E7C4F");

	UWG_AmountSelection_C_OnLoaded_D2B6354243D6D2763F6763B9D21E7C4F_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_AmountSelection.WG_AmountSelection_C.OKPressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInputActionButtonInfo* ActionInfo                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UWG_AmountSelection_C::OKPressed(struct FInputActionButtonInfo* ActionInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_AmountSelection.WG_AmountSelection_C.OKPressed");

	UWG_AmountSelection_C_OKPressed_Params params;
	params.ActionInfo = ActionInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_AmountSelection.WG_AmountSelection_C.CancelPressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInputActionButtonInfo* ActionInfo                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UWG_AmountSelection_C::CancelPressed(struct FInputActionButtonInfo* ActionInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_AmountSelection.WG_AmountSelection_C.CancelPressed");

	UWG_AmountSelection_C_CancelPressed_Params params;
	params.ActionInfo = ActionInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_AmountSelection.WG_AmountSelection_C.CustomEventYo
// (BlueprintCallable, BlueprintEvent)

void UWG_AmountSelection_C::CustomEventYo()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_AmountSelection.WG_AmountSelection_C.CustomEventYo");

	UWG_AmountSelection_C_CustomEventYo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_AmountSelection.WG_AmountSelection_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWG_AmountSelection_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_AmountSelection.WG_AmountSelection_C.Construct");

	UWG_AmountSelection_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_AmountSelection.WG_AmountSelection_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_AmountSelection_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_AmountSelection.WG_AmountSelection_C.PreConstruct");

	UWG_AmountSelection_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_AmountSelection.WG_AmountSelection_C.OnAmountChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           NewAmount                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_AmountSelection_C::OnAmountChanged(int* NewAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_AmountSelection.WG_AmountSelection_C.OnAmountChanged");

	UWG_AmountSelection_C_OnAmountChanged_Params params;
	params.NewAmount = NewAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_AmountSelection.WG_AmountSelection_C.ExecuteUbergraph_WG_AmountSelection
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_AmountSelection_C::ExecuteUbergraph_WG_AmountSelection(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_AmountSelection.WG_AmountSelection_C.ExecuteUbergraph_WG_AmountSelection");

	UWG_AmountSelection_C_ExecuteUbergraph_WG_AmountSelection_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_AmountSelection.WG_AmountSelection_C.OnAlternativePressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWG_AmountSelection_C::OnAlternativePressed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_AmountSelection.WG_AmountSelection_C.OnAlternativePressed__DelegateSignature");

	UWG_AmountSelection_C_OnAlternativePressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_AmountSelection.WG_AmountSelection_C.OnCancelPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWG_AmountSelection_C::OnCancelPressed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_AmountSelection.WG_AmountSelection_C.OnCancelPressed__DelegateSignature");

	UWG_AmountSelection_C_OnCancelPressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_AmountSelection.WG_AmountSelection_C.OnOKPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_Inventory_Slot_C**   SourceInventorySlot            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UWG_Inventory_C**        CustomTransferInventory        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int*                           TransferAmount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWG_Inventory_Slot_C**   TargetInventorySlot            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_AmountSelection_C::OnOKPressed__DelegateSignature(class UWG_Inventory_Slot_C** SourceInventorySlot, class UWG_Inventory_C** CustomTransferInventory, int* TransferAmount, class UWG_Inventory_Slot_C** TargetInventorySlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_AmountSelection.WG_AmountSelection_C.OnOKPressed__DelegateSignature");

	UWG_AmountSelection_C_OnOKPressed__DelegateSignature_Params params;
	params.SourceInventorySlot = SourceInventorySlot;
	params.CustomTransferInventory = CustomTransferInventory;
	params.TransferAmount = TransferAmount;
	params.TargetInventorySlot = TargetInventorySlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

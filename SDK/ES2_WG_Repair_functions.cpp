// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_Repair_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WG_Repair.WG_Repair_C.IsRefillAllPossible
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWG_Repair_C::IsRefillAllPossible()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Repair.WG_Repair_C.IsRefillAllPossible");

	UWG_Repair_C_IsRefillAllPossible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_Repair.WG_Repair_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWG_Repair_C::OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Repair.WG_Repair_C.OnFocusReceived");

	UWG_Repair_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_Repair.WG_Repair_C.GetTotalPrice
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            TotalPrice                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWG_Repair_C::GetTotalPrice(int* TotalPrice)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Repair.WG_Repair_C.GetTotalPrice");

	UWG_Repair_C_GetTotalPrice_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TotalPrice != nullptr)
		*TotalPrice = params.TotalPrice;
}


// Function WG_Repair.WG_Repair_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWG_Repair_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Repair.WG_Repair_C.OnKeyDown");

	UWG_Repair_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_Repair.WG_Repair_C.OnKeyUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWG_Repair_C::OnKeyUp(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Repair.WG_Repair_C.OnKeyUp");

	UWG_Repair_C_OnKeyUp_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_Repair.WG_Repair_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Repair_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Repair.WG_Repair_C.PreConstruct");

	UWG_Repair_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Repair.WG_Repair_C.CloseMenu
// (BlueprintCallable, BlueprintEvent)

void UWG_Repair_C::CloseMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Repair.WG_Repair_C.CloseMenu");

	UWG_Repair_C_CloseMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Repair.WG_Repair_C.FillAll
// (BlueprintCallable, BlueprintEvent)

void UWG_Repair_C::FillAll()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Repair.WG_Repair_C.FillAll");

	UWG_Repair_C_FillAll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Repair.WG_Repair_C.UpdateHasEnoughCredits
// (BlueprintCallable, BlueprintEvent)

void UWG_Repair_C::UpdateHasEnoughCredits()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Repair.WG_Repair_C.UpdateHasEnoughCredits");

	UWG_Repair_C_UpdateHasEnoughCredits_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Repair.WG_Repair_C.RowAmountChanged
// (BlueprintCallable, BlueprintEvent)

void UWG_Repair_C::RowAmountChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Repair.WG_Repair_C.RowAmountChanged");

	UWG_Repair_C_RowAmountChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Repair.WG_Repair_C.UpdateTotalPrice
// (BlueprintCallable, BlueprintEvent)

void UWG_Repair_C::UpdateTotalPrice()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Repair.WG_Repair_C.UpdateTotalPrice");

	UWG_Repair_C_UpdateTotalPrice_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Repair.WG_Repair_C.Buy
// (BlueprintCallable, BlueprintEvent)

void UWG_Repair_C::Buy()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Repair.WG_Repair_C.Buy");

	UWG_Repair_C_Buy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Repair.WG_Repair_C.RowSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_Refill_Ammo_Row_C**  Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_Repair_C::RowSelected(class UWG_Refill_Ammo_Row_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Repair.WG_Repair_C.RowSelected");

	UWG_Repair_C_RowSelected_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Repair.WG_Repair_C.UpdateBuyButtonVisibility
// (BlueprintCallable, BlueprintEvent)

void UWG_Repair_C::UpdateBuyButtonVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Repair.WG_Repair_C.UpdateBuyButtonVisibility");

	UWG_Repair_C_UpdateBuyButtonVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Repair.WG_Repair_C.CustomEventYo
// (BlueprintCallable, BlueprintEvent)

void UWG_Repair_C::CustomEventYo()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Repair.WG_Repair_C.CustomEventYo");

	UWG_Repair_C_CustomEventYo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Repair.WG_Repair_C.PurchasedPressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInputActionButtonInfo* ActionInfo                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UWG_Repair_C::PurchasedPressed(struct FInputActionButtonInfo* ActionInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Repair.WG_Repair_C.PurchasedPressed");

	UWG_Repair_C_PurchasedPressed_Params params;
	params.ActionInfo = ActionInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Repair.WG_Repair_C.CancelPressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInputActionButtonInfo* ActionInfo                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UWG_Repair_C::CancelPressed(struct FInputActionButtonInfo* ActionInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Repair.WG_Repair_C.CancelPressed");

	UWG_Repair_C_CancelPressed_Params params;
	params.ActionInfo = ActionInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Repair.WG_Repair_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWG_Repair_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Repair.WG_Repair_C.Construct");

	UWG_Repair_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Repair.WG_Repair_C.RefillAllPressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInputActionButtonInfo* ActionInfo                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UWG_Repair_C::RefillAllPressed(struct FInputActionButtonInfo* ActionInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Repair.WG_Repair_C.RefillAllPressed");

	UWG_Repair_C_RefillAllPressed_Params params;
	params.ActionInfo = ActionInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Repair.WG_Repair_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Repair_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Repair.WG_Repair_C.Tick");

	UWG_Repair_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Repair.WG_Repair_C.UpdateRows
// (BlueprintCallable, BlueprintEvent)

void UWG_Repair_C::UpdateRows()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Repair.WG_Repair_C.UpdateRows");

	UWG_Repair_C_UpdateRows_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Repair.WG_Repair_C.AddRowEntry
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_Refill_Ammo_Row_C**  Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_Repair_C::AddRowEntry(class UWG_Refill_Ammo_Row_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Repair.WG_Repair_C.AddRowEntry");

	UWG_Repair_C_AddRowEntry_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Repair.WG_Repair_C.CloseWidget
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          HasRepaired                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Repair_C::CloseWidget(bool* HasRepaired)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Repair.WG_Repair_C.CloseWidget");

	UWG_Repair_C_CloseWidget_Params params;
	params.HasRepaired = HasRepaired;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Repair.WG_Repair_C.ExecuteUbergraph_WG_Repair
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Repair_C::ExecuteUbergraph_WG_Repair(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Repair.WG_Repair_C.ExecuteUbergraph_WG_Repair");

	UWG_Repair_C_ExecuteUbergraph_WG_Repair_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Repair.WG_Repair_C.OnClose__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          HasRepaired                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Repair_C::OnClose__DelegateSignature(bool* HasRepaired)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Repair.WG_Repair_C.OnClose__DelegateSignature");

	UWG_Repair_C_OnClose__DelegateSignature_Params params;
	params.HasRepaired = HasRepaired;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

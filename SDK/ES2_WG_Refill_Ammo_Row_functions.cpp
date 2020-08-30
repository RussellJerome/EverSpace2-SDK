// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_Refill_Ammo_Row_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WG_Refill_Ammo_Row.WG_Refill_Ammo_Row_C.ToggleHighlight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Refill_Ammo_Row_C::ToggleHighlight(bool* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Refill_Ammo_Row.WG_Refill_Ammo_Row_C.ToggleHighlight");

	UWG_Refill_Ammo_Row_C_ToggleHighlight_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Refill_Ammo_Row.WG_Refill_Ammo_Row_C.IsMaxedOut
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWG_Refill_Ammo_Row_C::IsMaxedOut(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Refill_Ammo_Row.WG_Refill_Ammo_Row_C.IsMaxedOut");

	UWG_Refill_Ammo_Row_C_IsMaxedOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function WG_Refill_Ammo_Row.WG_Refill_Ammo_Row_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWG_Refill_Ammo_Row_C::OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Refill_Ammo_Row.WG_Refill_Ammo_Row_C.OnFocusReceived");

	UWG_Refill_Ammo_Row_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_Refill_Ammo_Row.WG_Refill_Ammo_Row_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWG_Refill_Ammo_Row_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Refill_Ammo_Row.WG_Refill_Ammo_Row_C.OnKeyDown");

	UWG_Refill_Ammo_Row_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_Refill_Ammo_Row.WG_Refill_Ammo_Row_C.GetCurrentAmountText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWG_Refill_Ammo_Row_C::GetCurrentAmountText()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Refill_Ammo_Row.WG_Refill_Ammo_Row_C.GetCurrentAmountText");

	UWG_Refill_Ammo_Row_C_GetCurrentAmountText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_Refill_Ammo_Row.WG_Refill_Ammo_Row_C.TrySetToMax
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           AvailableCredits               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Refill_Ammo_Row_C::TrySetToMax(int* AvailableCredits)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Refill_Ammo_Row.WG_Refill_Ammo_Row_C.TrySetToMax");

	UWG_Refill_Ammo_Row_C_TrySetToMax_Params params;
	params.AvailableCredits = AvailableCredits;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Refill_Ammo_Row.WG_Refill_Ammo_Row_C.Update
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           AvailableCredits               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Refill_Ammo_Row_C::Update(int* AvailableCredits)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Refill_Ammo_Row.WG_Refill_Ammo_Row_C.Update");

	UWG_Refill_Ammo_Row_C_Update_Params params;
	params.AvailableCredits = AvailableCredits;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Refill_Ammo_Row.WG_Refill_Ammo_Row_C.UpdateTotalPrice
// (BlueprintCallable, BlueprintEvent)

void UWG_Refill_Ammo_Row_C::UpdateTotalPrice()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Refill_Ammo_Row.WG_Refill_Ammo_Row_C.UpdateTotalPrice");

	UWG_Refill_Ammo_Row_C_UpdateTotalPrice_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Refill_Ammo_Row.WG_Refill_Ammo_Row_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWG_Refill_Ammo_Row_C::OnMouseEnter(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Refill_Ammo_Row.WG_Refill_Ammo_Row_C.OnMouseEnter");

	UWG_Refill_Ammo_Row_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Refill_Ammo_Row.WG_Refill_Ammo_Row_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWG_Refill_Ammo_Row_C::OnMouseLeave(struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Refill_Ammo_Row.WG_Refill_Ammo_Row_C.OnMouseLeave");

	UWG_Refill_Ammo_Row_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Refill_Ammo_Row.WG_Refill_Ammo_Row_C.OnFocusLost
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UWG_Refill_Ammo_Row_C::OnFocusLost(struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Refill_Ammo_Row.WG_Refill_Ammo_Row_C.OnFocusLost");

	UWG_Refill_Ammo_Row_C_OnFocusLost_Params params;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Refill_Ammo_Row.WG_Refill_Ammo_Row_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Refill_Ammo_Row_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Refill_Ammo_Row.WG_Refill_Ammo_Row_C.PreConstruct");

	UWG_Refill_Ammo_Row_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Refill_Ammo_Row.WG_Refill_Ammo_Row_C.ChangeAmount
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           NewAmount                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Refill_Ammo_Row_C::ChangeAmount(int* NewAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Refill_Ammo_Row.WG_Refill_Ammo_Row_C.ChangeAmount");

	UWG_Refill_Ammo_Row_C_ChangeAmount_Params params;
	params.NewAmount = NewAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Refill_Ammo_Row.WG_Refill_Ammo_Row_C.ExecuteUbergraph_WG_Refill_Ammo_Row
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Refill_Ammo_Row_C::ExecuteUbergraph_WG_Refill_Ammo_Row(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Refill_Ammo_Row.WG_Refill_Ammo_Row_C.ExecuteUbergraph_WG_Refill_Ammo_Row");

	UWG_Refill_Ammo_Row_C_ExecuteUbergraph_WG_Refill_Ammo_Row_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Refill_Ammo_Row.WG_Refill_Ammo_Row_C.OnSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_Refill_Ammo_Row_C**  Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_Refill_Ammo_Row_C::OnSelected__DelegateSignature(class UWG_Refill_Ammo_Row_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Refill_Ammo_Row.WG_Refill_Ammo_Row_C.OnSelected__DelegateSignature");

	UWG_Refill_Ammo_Row_C_OnSelected__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Refill_Ammo_Row.WG_Refill_Ammo_Row_C.OnAmountChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWG_Refill_Ammo_Row_C::OnAmountChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Refill_Ammo_Row.WG_Refill_Ammo_Row_C.OnAmountChanged__DelegateSignature");

	UWG_Refill_Ammo_Row_C_OnAmountChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

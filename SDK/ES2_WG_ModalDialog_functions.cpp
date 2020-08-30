// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_ModalDialog_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WG_ModalDialog.WG_ModalDialog_C.Get_CountdownLabel_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWG_ModalDialog_C::Get_CountdownLabel_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ModalDialog.WG_ModalDialog_C.Get_CountdownLabel_Text_1");

	UWG_ModalDialog_C_Get_CountdownLabel_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_ModalDialog.WG_ModalDialog_C.Get_CountdownBar_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UWG_ModalDialog_C::Get_CountdownBar_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ModalDialog.WG_ModalDialog_C.Get_CountdownBar_Visibility_1");

	UWG_ModalDialog_C_Get_CountdownBar_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_ModalDialog.WG_ModalDialog_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWG_ModalDialog_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ModalDialog.WG_ModalDialog_C.OnKeyDown");

	UWG_ModalDialog_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_ModalDialog.WG_ModalDialog_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_ModalDialog_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ModalDialog.WG_ModalDialog_C.PreConstruct");

	UWG_ModalDialog_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_ModalDialog.WG_ModalDialog_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWG_ModalDialog_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ModalDialog.WG_ModalDialog_C.Construct");

	UWG_ModalDialog_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_ModalDialog.WG_ModalDialog_C.OKPressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInputActionButtonInfo* ActionInfo                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UWG_ModalDialog_C::OKPressed(struct FInputActionButtonInfo* ActionInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ModalDialog.WG_ModalDialog_C.OKPressed");

	UWG_ModalDialog_C_OKPressed_Params params;
	params.ActionInfo = ActionInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_ModalDialog.WG_ModalDialog_C.CancelPressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInputActionButtonInfo* ActionInfo                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UWG_ModalDialog_C::CancelPressed(struct FInputActionButtonInfo* ActionInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ModalDialog.WG_ModalDialog_C.CancelPressed");

	UWG_ModalDialog_C_CancelPressed_Params params;
	params.ActionInfo = ActionInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_ModalDialog.WG_ModalDialog_C.AlternaticePressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInputActionButtonInfo* ActionInfo                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UWG_ModalDialog_C::AlternaticePressed(struct FInputActionButtonInfo* ActionInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ModalDialog.WG_ModalDialog_C.AlternaticePressed");

	UWG_ModalDialog_C_AlternaticePressed_Params params;
	params.ActionInfo = ActionInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_ModalDialog.WG_ModalDialog_C.CustomEventYo
// (BlueprintCallable, BlueprintEvent)

void UWG_ModalDialog_C::CustomEventYo()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ModalDialog.WG_ModalDialog_C.CustomEventYo");

	UWG_ModalDialog_C_CustomEventYo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_ModalDialog.WG_ModalDialog_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_ModalDialog_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ModalDialog.WG_ModalDialog_C.Tick");

	UWG_ModalDialog_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_ModalDialog.WG_ModalDialog_C.ExecuteUbergraph_WG_ModalDialog
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_ModalDialog_C::ExecuteUbergraph_WG_ModalDialog(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ModalDialog.WG_ModalDialog_C.ExecuteUbergraph_WG_ModalDialog");

	UWG_ModalDialog_C_ExecuteUbergraph_WG_ModalDialog_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_ModalDialog.WG_ModalDialog_C.OnAlternativePressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_ModalDialog_C**      WG_ModalDialog                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_ModalDialog_C::OnAlternativePressed__DelegateSignature(class UWG_ModalDialog_C** WG_ModalDialog)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ModalDialog.WG_ModalDialog_C.OnAlternativePressed__DelegateSignature");

	UWG_ModalDialog_C_OnAlternativePressed__DelegateSignature_Params params;
	params.WG_ModalDialog = WG_ModalDialog;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_ModalDialog.WG_ModalDialog_C.OnCancelPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_ModalDialog_C**      WG_ModalDialog                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_ModalDialog_C::OnCancelPressed__DelegateSignature(class UWG_ModalDialog_C** WG_ModalDialog)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ModalDialog.WG_ModalDialog_C.OnCancelPressed__DelegateSignature");

	UWG_ModalDialog_C_OnCancelPressed__DelegateSignature_Params params;
	params.WG_ModalDialog = WG_ModalDialog;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_ModalDialog.WG_ModalDialog_C.OnOKPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_ModalDialog_C**      WG_ModalDialog                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_ModalDialog_C::OnOKPressed__DelegateSignature(class UWG_ModalDialog_C** WG_ModalDialog)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ModalDialog.WG_ModalDialog_C.OnOKPressed__DelegateSignature");

	UWG_ModalDialog_C_OnOKPressed__DelegateSignature_Params params;
	params.WG_ModalDialog = WG_ModalDialog;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

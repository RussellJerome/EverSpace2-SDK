// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_Prompt_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WG_Prompt.WG_Prompt_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWG_Prompt_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Prompt.WG_Prompt_C.OnKeyDown");

	UWG_Prompt_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_Prompt.WG_Prompt_C.BndEvt__ButtonCancel_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FInputActionButtonInfo* ActionInfo                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UWG_Prompt_C::BndEvt__ButtonCancel_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature(struct FInputActionButtonInfo* ActionInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Prompt.WG_Prompt_C.BndEvt__ButtonCancel_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature");

	UWG_Prompt_C_BndEvt__ButtonCancel_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature_Params params;
	params.ActionInfo = ActionInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Prompt.WG_Prompt_C.BndEvt__ButtonOK_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FInputActionButtonInfo* ActionInfo                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UWG_Prompt_C::BndEvt__ButtonOK_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature(struct FInputActionButtonInfo* ActionInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Prompt.WG_Prompt_C.BndEvt__ButtonOK_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature");

	UWG_Prompt_C_BndEvt__ButtonOK_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature_Params params;
	params.ActionInfo = ActionInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Prompt.WG_Prompt_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWG_Prompt_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Prompt.WG_Prompt_C.Construct");

	UWG_Prompt_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Prompt.WG_Prompt_C.PressedConfirm
// (BlueprintCallable, BlueprintEvent)

void UWG_Prompt_C::PressedConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Prompt.WG_Prompt_C.PressedConfirm");

	UWG_Prompt_C_PressedConfirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Prompt.WG_Prompt_C.PressedCancel
// (BlueprintCallable, BlueprintEvent)

void UWG_Prompt_C::PressedCancel()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Prompt.WG_Prompt_C.PressedCancel");

	UWG_Prompt_C_PressedCancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Prompt.WG_Prompt_C.ExecuteUbergraph_WG_Prompt
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Prompt_C::ExecuteUbergraph_WG_Prompt(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Prompt.WG_Prompt_C.ExecuteUbergraph_WG_Prompt");

	UWG_Prompt_C_ExecuteUbergraph_WG_Prompt_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Prompt.WG_Prompt_C.OnCancel__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWG_Prompt_C::OnCancel__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Prompt.WG_Prompt_C.OnCancel__DelegateSignature");

	UWG_Prompt_C_OnCancel__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Prompt.WG_Prompt_C.OnConfirm__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWG_Prompt_C::OnConfirm__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Prompt.WG_Prompt_C.OnConfirm__DelegateSignature");

	UWG_Prompt_C_OnConfirm__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

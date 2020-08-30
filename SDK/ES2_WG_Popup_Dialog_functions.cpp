// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_Popup_Dialog_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WG_Popup_Dialog.WG_Popup_Dialog_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWG_Popup_Dialog_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Popup_Dialog.WG_Popup_Dialog_C.OnKeyDown");

	UWG_Popup_Dialog_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_Popup_Dialog.WG_Popup_Dialog_C.GetBrushColor_BG
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UWG_Popup_Dialog_C::GetBrushColor_BG()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Popup_Dialog.WG_Popup_Dialog_C.GetBrushColor_BG");

	UWG_Popup_Dialog_C_GetBrushColor_BG_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_Popup_Dialog.WG_Popup_Dialog_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWG_Popup_Dialog_C::OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Popup_Dialog.WG_Popup_Dialog_C.OnFocusReceived");

	UWG_Popup_Dialog_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_Popup_Dialog.WG_Popup_Dialog_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWG_Popup_Dialog_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Popup_Dialog.WG_Popup_Dialog_C.Construct");

	UWG_Popup_Dialog_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Popup_Dialog.WG_Popup_Dialog_C.Button1_Pressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInputActionButtonInfo* ActionInfo                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UWG_Popup_Dialog_C::Button1_Pressed(struct FInputActionButtonInfo* ActionInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Popup_Dialog.WG_Popup_Dialog_C.Button1_Pressed");

	UWG_Popup_Dialog_C_Button1_Pressed_Params params;
	params.ActionInfo = ActionInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Popup_Dialog.WG_Popup_Dialog_C.Button2_Pressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInputActionButtonInfo* ActionInfo                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UWG_Popup_Dialog_C::Button2_Pressed(struct FInputActionButtonInfo* ActionInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Popup_Dialog.WG_Popup_Dialog_C.Button2_Pressed");

	UWG_Popup_Dialog_C_Button2_Pressed_Params params;
	params.ActionInfo = ActionInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Popup_Dialog.WG_Popup_Dialog_C.Button3_Pressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInputActionButtonInfo* ActionInfo                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UWG_Popup_Dialog_C::Button3_Pressed(struct FInputActionButtonInfo* ActionInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Popup_Dialog.WG_Popup_Dialog_C.Button3_Pressed");

	UWG_Popup_Dialog_C_Button3_Pressed_Params params;
	params.ActionInfo = ActionInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Popup_Dialog.WG_Popup_Dialog_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Popup_Dialog_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Popup_Dialog.WG_Popup_Dialog_C.PreConstruct");

	UWG_Popup_Dialog_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Popup_Dialog.WG_Popup_Dialog_C.ExecuteUbergraph_WG_Popup_Dialog
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Popup_Dialog_C::ExecuteUbergraph_WG_Popup_Dialog(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Popup_Dialog.WG_Popup_Dialog_C.ExecuteUbergraph_WG_Popup_Dialog");

	UWG_Popup_Dialog_C_ExecuteUbergraph_WG_Popup_Dialog_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Popup_Dialog.WG_Popup_Dialog_C.OnButton3Pressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWG_Popup_Dialog_C::OnButton3Pressed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Popup_Dialog.WG_Popup_Dialog_C.OnButton3Pressed__DelegateSignature");

	UWG_Popup_Dialog_C_OnButton3Pressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Popup_Dialog.WG_Popup_Dialog_C.OnButton2Pressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWG_Popup_Dialog_C::OnButton2Pressed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Popup_Dialog.WG_Popup_Dialog_C.OnButton2Pressed__DelegateSignature");

	UWG_Popup_Dialog_C_OnButton2Pressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Popup_Dialog.WG_Popup_Dialog_C.OnButton1Pressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWG_Popup_Dialog_C::OnButton1Pressed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Popup_Dialog.WG_Popup_Dialog_C.OnButton1Pressed__DelegateSignature");

	UWG_Popup_Dialog_C_OnButton1Pressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

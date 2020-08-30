// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_Menu_Footer_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WG_Menu_Footer.WG_Menu_Footer_C.GetVisibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UWG_Menu_Footer_C::GetVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Menu_Footer.WG_Menu_Footer_C.GetVisibility_1");

	UWG_Menu_Footer_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_Menu_Footer.WG_Menu_Footer_C.HandleKeyUp
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           bHandled                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWG_Menu_Footer_C::HandleKeyUp(struct FKeyEvent* InKeyEvent, bool* bHandled)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Menu_Footer.WG_Menu_Footer_C.HandleKeyUp");

	UWG_Menu_Footer_C_HandleKeyUp_Params params;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bHandled != nullptr)
		*bHandled = params.bHandled;
}


// Function WG_Menu_Footer.WG_Menu_Footer_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWG_Menu_Footer_C::OnMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Menu_Footer.WG_Menu_Footer_C.OnMouseButtonDown");

	UWG_Menu_Footer_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_Menu_Footer.WG_Menu_Footer_C.AddButton
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInputActionButtonInfo* InputActionInfo                (BlueprintVisible, BlueprintReadOnly, Parm)
// class UWG_MenuAction_Button_C* Button                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_Menu_Footer_C::AddButton(struct FInputActionButtonInfo* InputActionInfo, class UWG_MenuAction_Button_C** Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Menu_Footer.WG_Menu_Footer_C.AddButton");

	UWG_Menu_Footer_C_AddButton_Params params;
	params.InputActionInfo = InputActionInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Button != nullptr)
		*Button = params.Button;
}


// Function WG_Menu_Footer.WG_Menu_Footer_C.HandleKeyDown
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           bHandled                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWG_Menu_Footer_C::HandleKeyDown(struct FKeyEvent* InKeyEvent, bool* bHandled)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Menu_Footer.WG_Menu_Footer_C.HandleKeyDown");

	UWG_Menu_Footer_C_HandleKeyDown_Params params;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bHandled != nullptr)
		*bHandled = params.bHandled;
}


// Function WG_Menu_Footer.WG_Menu_Footer_C.ClearButtons
// (BlueprintCallable, BlueprintEvent)

void UWG_Menu_Footer_C::ClearButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Menu_Footer.WG_Menu_Footer_C.ClearButtons");

	UWG_Menu_Footer_C_ClearButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Menu_Footer.WG_Menu_Footer_C.ExecuteUbergraph_WG_Menu_Footer
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Menu_Footer_C::ExecuteUbergraph_WG_Menu_Footer(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Menu_Footer.WG_Menu_Footer_C.ExecuteUbergraph_WG_Menu_Footer");

	UWG_Menu_Footer_C_ExecuteUbergraph_WG_Menu_Footer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

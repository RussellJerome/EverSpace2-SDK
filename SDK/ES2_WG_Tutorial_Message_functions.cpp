// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_Tutorial_Message_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WG_Tutorial_Message.WG_Tutorial_Message_C.GetActionNameFormatArguments
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FFindReplaceTextArgument> Arguments                      (Parm, OutParm, ZeroConstructor)

void UWG_Tutorial_Message_C::GetActionNameFormatArguments(TArray<struct FFindReplaceTextArgument>* Arguments)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Tutorial_Message.WG_Tutorial_Message_C.GetActionNameFormatArguments");

	UWG_Tutorial_Message_C_GetActionNameFormatArguments_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Arguments != nullptr)
		*Arguments = params.Arguments;
}


// Function WG_Tutorial_Message.WG_Tutorial_Message_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWG_Tutorial_Message_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Tutorial_Message.WG_Tutorial_Message_C.OnKeyDown");

	UWG_Tutorial_Message_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_Tutorial_Message.WG_Tutorial_Message_C.CloseMessage
// (BlueprintCallable, BlueprintEvent)

void UWG_Tutorial_Message_C::CloseMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Tutorial_Message.WG_Tutorial_Message_C.CloseMessage");

	UWG_Tutorial_Message_C_CloseMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Tutorial_Message.WG_Tutorial_Message_C.NoEvent
// (BlueprintCallable, BlueprintEvent)

void UWG_Tutorial_Message_C::NoEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Tutorial_Message.WG_Tutorial_Message_C.NoEvent");

	UWG_Tutorial_Message_C_NoEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Tutorial_Message.WG_Tutorial_Message_C.GamepadModeChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bNewGamepadMode                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Tutorial_Message_C::GamepadModeChanged(bool* bNewGamepadMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Tutorial_Message.WG_Tutorial_Message_C.GamepadModeChanged");

	UWG_Tutorial_Message_C_GamepadModeChanged_Params params;
	params.bNewGamepadMode = bNewGamepadMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Tutorial_Message.WG_Tutorial_Message_C.UpdateRichText
// (BlueprintCallable, BlueprintEvent)

void UWG_Tutorial_Message_C::UpdateRichText()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Tutorial_Message.WG_Tutorial_Message_C.UpdateRichText");

	UWG_Tutorial_Message_C_UpdateRichText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Tutorial_Message.WG_Tutorial_Message_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWG_Tutorial_Message_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Tutorial_Message.WG_Tutorial_Message_C.Construct");

	UWG_Tutorial_Message_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Tutorial_Message.WG_Tutorial_Message_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Tutorial_Message_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Tutorial_Message.WG_Tutorial_Message_C.PreConstruct");

	UWG_Tutorial_Message_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Tutorial_Message.WG_Tutorial_Message_C.OnPauseChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bPaused                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Tutorial_Message_C::OnPauseChanged(bool* bPaused)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Tutorial_Message.WG_Tutorial_Message_C.OnPauseChanged");

	UWG_Tutorial_Message_C_OnPauseChanged_Params params;
	params.bPaused = bPaused;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Tutorial_Message.WG_Tutorial_Message_C.ExecuteUbergraph_WG_Tutorial_Message
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Tutorial_Message_C::ExecuteUbergraph_WG_Tutorial_Message(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Tutorial_Message.WG_Tutorial_Message_C.ExecuteUbergraph_WG_Tutorial_Message");

	UWG_Tutorial_Message_C_ExecuteUbergraph_WG_Tutorial_Message_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Tutorial_Message.WG_Tutorial_Message_C.OnClosed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_Tutorial_Message_C** TutorialMessage                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_Tutorial_Message_C::OnClosed__DelegateSignature(class UWG_Tutorial_Message_C** TutorialMessage)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Tutorial_Message.WG_Tutorial_Message_C.OnClosed__DelegateSignature");

	UWG_Tutorial_Message_C_OnClosed__DelegateSignature_Params params;
	params.TutorialMessage = TutorialMessage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

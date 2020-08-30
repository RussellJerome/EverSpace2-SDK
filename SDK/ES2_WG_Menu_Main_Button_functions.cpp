// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_Menu_Main_Button_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WG_Menu_Main_Button.WG_Menu_Main_Button_C.Get_ImgHighlightPattern_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UWG_Menu_Main_Button_C::Get_ImgHighlightPattern_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Menu_Main_Button.WG_Menu_Main_Button_C.Get_ImgHighlightPattern_Visibility_1");

	UWG_Menu_Main_Button_C_Get_ImgHighlightPattern_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_Menu_Main_Button.WG_Menu_Main_Button_C.Get_ImgBackground_ColorAndOpacity_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UWG_Menu_Main_Button_C::Get_ImgBackground_ColorAndOpacity_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Menu_Main_Button.WG_Menu_Main_Button_C.Get_ImgBackground_ColorAndOpacity_1");

	UWG_Menu_Main_Button_C_Get_ImgBackground_ColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_Menu_Main_Button.WG_Menu_Main_Button_C.SetFontSize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Selected                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Menu_Main_Button_C::SetFontSize(bool* Selected)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Menu_Main_Button.WG_Menu_Main_Button_C.SetFontSize");

	UWG_Menu_Main_Button_C_SetFontSize_Params params;
	params.Selected = Selected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Menu_Main_Button.WG_Menu_Main_Button_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWG_Menu_Main_Button_C::OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Menu_Main_Button.WG_Menu_Main_Button_C.OnFocusReceived");

	UWG_Menu_Main_Button_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_Menu_Main_Button.WG_Menu_Main_Button_C.SetText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  Text                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UWG_Menu_Main_Button_C::SetText(struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Menu_Main_Button.WG_Menu_Main_Button_C.SetText");

	UWG_Menu_Main_Button_C_SetText_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Menu_Main_Button.WG_Menu_Main_Button_C.BndEvt__ESButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UWG_Menu_Main_Button_C::BndEvt__ESButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Menu_Main_Button.WG_Menu_Main_Button_C.BndEvt__ESButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature");

	UWG_Menu_Main_Button_C_BndEvt__ESButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Menu_Main_Button.WG_Menu_Main_Button_C.BndEvt__ESButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UWG_Menu_Main_Button_C::BndEvt__ESButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Menu_Main_Button.WG_Menu_Main_Button_C.BndEvt__ESButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature");

	UWG_Menu_Main_Button_C_BndEvt__ESButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Menu_Main_Button.WG_Menu_Main_Button_C.BndEvt__ESButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWG_Menu_Main_Button_C::BndEvt__ESButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Menu_Main_Button.WG_Menu_Main_Button_C.BndEvt__ESButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");

	UWG_Menu_Main_Button_C_BndEvt__ESButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Menu_Main_Button.WG_Menu_Main_Button_C.BndEvt__ESButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWG_Menu_Main_Button_C::BndEvt__ESButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Menu_Main_Button.WG_Menu_Main_Button_C.BndEvt__ESButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature");

	UWG_Menu_Main_Button_C_BndEvt__ESButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Menu_Main_Button.WG_Menu_Main_Button_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Menu_Main_Button_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Menu_Main_Button.WG_Menu_Main_Button_C.Tick");

	UWG_Menu_Main_Button_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Menu_Main_Button.WG_Menu_Main_Button_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Menu_Main_Button_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Menu_Main_Button.WG_Menu_Main_Button_C.PreConstruct");

	UWG_Menu_Main_Button_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Menu_Main_Button.WG_Menu_Main_Button_C.BndEvt__ESButton_K2Node_ComponentBoundEvent_70_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWG_Menu_Main_Button_C::BndEvt__ESButton_K2Node_ComponentBoundEvent_70_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Menu_Main_Button.WG_Menu_Main_Button_C.BndEvt__ESButton_K2Node_ComponentBoundEvent_70_OnButtonClickedEvent__DelegateSignature");

	UWG_Menu_Main_Button_C_BndEvt__ESButton_K2Node_ComponentBoundEvent_70_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Menu_Main_Button.WG_Menu_Main_Button_C.ExecuteUbergraph_WG_Menu_Main_Button
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Menu_Main_Button_C::ExecuteUbergraph_WG_Menu_Main_Button(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Menu_Main_Button.WG_Menu_Main_Button_C.ExecuteUbergraph_WG_Menu_Main_Button");

	UWG_Menu_Main_Button_C_ExecuteUbergraph_WG_Menu_Main_Button_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Menu_Main_Button.WG_Menu_Main_Button_C.OnButtonLoseFocus__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWG_Menu_Main_Button_C::OnButtonLoseFocus__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Menu_Main_Button.WG_Menu_Main_Button_C.OnButtonLoseFocus__DelegateSignature");

	UWG_Menu_Main_Button_C_OnButtonLoseFocus__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Menu_Main_Button.WG_Menu_Main_Button_C.OnButtonReceiveFocus__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWG_Menu_Main_Button_C::OnButtonReceiveFocus__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Menu_Main_Button.WG_Menu_Main_Button_C.OnButtonReceiveFocus__DelegateSignature");

	UWG_Menu_Main_Button_C_OnButtonReceiveFocus__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Menu_Main_Button.WG_Menu_Main_Button_C.OnButtonClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInputActionButtonInfo* ActionInfo                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UWG_Menu_Main_Button_C::OnButtonClicked__DelegateSignature(struct FInputActionButtonInfo* ActionInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Menu_Main_Button.WG_Menu_Main_Button_C.OnButtonClicked__DelegateSignature");

	UWG_Menu_Main_Button_C_OnButtonClicked__DelegateSignature_Params params;
	params.ActionInfo = ActionInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

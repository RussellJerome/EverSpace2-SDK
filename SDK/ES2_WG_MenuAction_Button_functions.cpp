// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_MenuAction_Button_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WG_MenuAction_Button.WG_MenuAction_Button_C.UpdateButtonStyle
// (Public, BlueprintCallable, BlueprintEvent)

void UWG_MenuAction_Button_C::UpdateButtonStyle()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_MenuAction_Button.WG_MenuAction_Button_C.UpdateButtonStyle");

	UWG_MenuAction_Button_C_UpdateButtonStyle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_MenuAction_Button.WG_MenuAction_Button_C.SetText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  Text                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UWG_MenuAction_Button_C::SetText(struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_MenuAction_Button.WG_MenuAction_Button_C.SetText");

	UWG_MenuAction_Button_C_SetText_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_MenuAction_Button.WG_MenuAction_Button_C.UpdateButtonColor
// (BlueprintCallable, BlueprintEvent)

void UWG_MenuAction_Button_C::UpdateButtonColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_MenuAction_Button.WG_MenuAction_Button_C.UpdateButtonColor");

	UWG_MenuAction_Button_C_UpdateButtonColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_MenuAction_Button.WG_MenuAction_Button_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_MenuAction_Button_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_MenuAction_Button.WG_MenuAction_Button_C.Tick");

	UWG_MenuAction_Button_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_MenuAction_Button.WG_MenuAction_Button_C.SetNewActionInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInputActionButtonInfo* NewActionInfo                  (BlueprintVisible, BlueprintReadOnly, Parm)

void UWG_MenuAction_Button_C::SetNewActionInfo(struct FInputActionButtonInfo* NewActionInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_MenuAction_Button.WG_MenuAction_Button_C.SetNewActionInfo");

	UWG_MenuAction_Button_C_SetNewActionInfo_Params params;
	params.NewActionInfo = NewActionInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_MenuAction_Button.WG_MenuAction_Button_C.BndEvt__ESButton_K2Node_ComponentBoundEvent_70_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWG_MenuAction_Button_C::BndEvt__ESButton_K2Node_ComponentBoundEvent_70_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_MenuAction_Button.WG_MenuAction_Button_C.BndEvt__ESButton_K2Node_ComponentBoundEvent_70_OnButtonClickedEvent__DelegateSignature");

	UWG_MenuAction_Button_C_BndEvt__ESButton_K2Node_ComponentBoundEvent_70_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_MenuAction_Button.WG_MenuAction_Button_C.BndEvt__ESButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UWG_MenuAction_Button_C::BndEvt__ESButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_MenuAction_Button.WG_MenuAction_Button_C.BndEvt__ESButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature");

	UWG_MenuAction_Button_C_BndEvt__ESButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_MenuAction_Button.WG_MenuAction_Button_C.BndEvt__ESButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UWG_MenuAction_Button_C::BndEvt__ESButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_MenuAction_Button.WG_MenuAction_Button_C.BndEvt__ESButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature");

	UWG_MenuAction_Button_C_BndEvt__ESButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_MenuAction_Button.WG_MenuAction_Button_C.HandleKeyDown
// (BlueprintCallable, BlueprintEvent)

void UWG_MenuAction_Button_C::HandleKeyDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_MenuAction_Button.WG_MenuAction_Button_C.HandleKeyDown");

	UWG_MenuAction_Button_C_HandleKeyDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_MenuAction_Button.WG_MenuAction_Button_C.HandlePressed
// (BlueprintCallable, BlueprintEvent)

void UWG_MenuAction_Button_C::HandlePressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_MenuAction_Button.WG_MenuAction_Button_C.HandlePressed");

	UWG_MenuAction_Button_C_HandlePressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_MenuAction_Button.WG_MenuAction_Button_C.HandleReleased
// (BlueprintCallable, BlueprintEvent)

void UWG_MenuAction_Button_C::HandleReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_MenuAction_Button.WG_MenuAction_Button_C.HandleReleased");

	UWG_MenuAction_Button_C_HandleReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_MenuAction_Button.WG_MenuAction_Button_C.HandleKeyUp
// (BlueprintCallable, BlueprintEvent)

void UWG_MenuAction_Button_C::HandleKeyUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_MenuAction_Button.WG_MenuAction_Button_C.HandleKeyUp");

	UWG_MenuAction_Button_C_HandleKeyUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_MenuAction_Button.WG_MenuAction_Button_C.BndEvt__ESButton_K2Node_ComponentBoundEvent_85_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWG_MenuAction_Button_C::BndEvt__ESButton_K2Node_ComponentBoundEvent_85_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_MenuAction_Button.WG_MenuAction_Button_C.BndEvt__ESButton_K2Node_ComponentBoundEvent_85_OnButtonHoverEvent__DelegateSignature");

	UWG_MenuAction_Button_C_BndEvt__ESButton_K2Node_ComponentBoundEvent_85_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_MenuAction_Button.WG_MenuAction_Button_C.BndEvt__ESButton_K2Node_ComponentBoundEvent_99_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWG_MenuAction_Button_C::BndEvt__ESButton_K2Node_ComponentBoundEvent_99_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_MenuAction_Button.WG_MenuAction_Button_C.BndEvt__ESButton_K2Node_ComponentBoundEvent_99_OnButtonHoverEvent__DelegateSignature");

	UWG_MenuAction_Button_C_BndEvt__ESButton_K2Node_ComponentBoundEvent_99_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_MenuAction_Button.WG_MenuAction_Button_C.OverrideHoldProgress
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         ProgressIn                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_MenuAction_Button_C::OverrideHoldProgress(float* ProgressIn)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_MenuAction_Button.WG_MenuAction_Button_C.OverrideHoldProgress");

	UWG_MenuAction_Button_C_OverrideHoldProgress_Params params;
	params.ProgressIn = ProgressIn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_MenuAction_Button.WG_MenuAction_Button_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_MenuAction_Button_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_MenuAction_Button.WG_MenuAction_Button_C.PreConstruct");

	UWG_MenuAction_Button_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_MenuAction_Button.WG_MenuAction_Button_C.ExecuteUbergraph_WG_MenuAction_Button
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_MenuAction_Button_C::ExecuteUbergraph_WG_MenuAction_Button(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_MenuAction_Button.WG_MenuAction_Button_C.ExecuteUbergraph_WG_MenuAction_Button");

	UWG_MenuAction_Button_C_ExecuteUbergraph_WG_MenuAction_Button_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_MenuAction_Button.WG_MenuAction_Button_C.OnButtonHoldFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWG_MenuAction_Button_C::OnButtonHoldFinished__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_MenuAction_Button.WG_MenuAction_Button_C.OnButtonHoldFinished__DelegateSignature");

	UWG_MenuAction_Button_C_OnButtonHoldFinished__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_MenuAction_Button.WG_MenuAction_Button_C.OnButtonClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInputActionButtonInfo* ActionInfo                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UWG_MenuAction_Button_C::OnButtonClicked__DelegateSignature(struct FInputActionButtonInfo* ActionInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_MenuAction_Button.WG_MenuAction_Button_C.OnButtonClicked__DelegateSignature");

	UWG_MenuAction_Button_C_OnButtonClicked__DelegateSignature_Params params;
	params.ActionInfo = ActionInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

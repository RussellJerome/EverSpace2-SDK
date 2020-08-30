// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_Menu_Main_Startscreen_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WG_Menu_Main_Startscreen.WG_Menu_Main_Startscreen_C.Get_PrototypeHintOverlay_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UWG_Menu_Main_Startscreen_C::Get_PrototypeHintOverlay_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Menu_Main_Startscreen.WG_Menu_Main_Startscreen_C.Get_PrototypeHintOverlay_Visibility_1");

	UWG_Menu_Main_Startscreen_C_Get_PrototypeHintOverlay_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_Menu_Main_Startscreen.WG_Menu_Main_Startscreen_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWG_Menu_Main_Startscreen_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Menu_Main_Startscreen.WG_Menu_Main_Startscreen_C.OnKeyDown");

	UWG_Menu_Main_Startscreen_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_Menu_Main_Startscreen.WG_Menu_Main_Startscreen_C.SelectMenuButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           ButtonIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Menu_Main_Startscreen_C::SelectMenuButton(int* ButtonIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Menu_Main_Startscreen.WG_Menu_Main_Startscreen_C.SelectMenuButton");

	UWG_Menu_Main_Startscreen_C_SelectMenuButton_Params params;
	params.ButtonIndex = ButtonIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Menu_Main_Startscreen.WG_Menu_Main_Startscreen_C.Get_SkipTutorialButton_Visibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UWG_Menu_Main_Startscreen_C::Get_SkipTutorialButton_Visibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Menu_Main_Startscreen.WG_Menu_Main_Startscreen_C.Get_SkipTutorialButton_Visibility");

	UWG_Menu_Main_Startscreen_C_Get_SkipTutorialButton_Visibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_Menu_Main_Startscreen.WG_Menu_Main_Startscreen_C.IsTutorialMission
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Mission                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWG_Menu_Main_Startscreen_C::IsTutorialMission(class AActor** Mission, bool* res)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Menu_Main_Startscreen.WG_Menu_Main_Startscreen_C.IsTutorialMission");

	UWG_Menu_Main_Startscreen_C_IsTutorialMission_Params params;
	params.Mission = Mission;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function WG_Menu_Main_Startscreen.WG_Menu_Main_Startscreen_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWG_Menu_Main_Startscreen_C::OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Menu_Main_Startscreen.WG_Menu_Main_Startscreen_C.OnFocusReceived");

	UWG_Menu_Main_Startscreen_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_Menu_Main_Startscreen.WG_Menu_Main_Startscreen_C.Get_ActionFreezeButton_Visibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UWG_Menu_Main_Startscreen_C::Get_ActionFreezeButton_Visibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Menu_Main_Startscreen.WG_Menu_Main_Startscreen_C.Get_ActionFreezeButton_Visibility");

	UWG_Menu_Main_Startscreen_C_Get_ActionFreezeButton_Visibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_Menu_Main_Startscreen.WG_Menu_Main_Startscreen_C.Get_NewGameButton_Visibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UWG_Menu_Main_Startscreen_C::Get_NewGameButton_Visibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Menu_Main_Startscreen.WG_Menu_Main_Startscreen_C.Get_NewGameButton_Visibility");

	UWG_Menu_Main_Startscreen_C_Get_NewGameButton_Visibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_Menu_Main_Startscreen.WG_Menu_Main_Startscreen_C.Get_ContinueGameButton_Visibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UWG_Menu_Main_Startscreen_C::Get_ContinueGameButton_Visibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Menu_Main_Startscreen.WG_Menu_Main_Startscreen_C.Get_ContinueGameButton_Visibility");

	UWG_Menu_Main_Startscreen_C_Get_ContinueGameButton_Visibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_Menu_Main_Startscreen.WG_Menu_Main_Startscreen_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Menu_Main_Startscreen_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Menu_Main_Startscreen.WG_Menu_Main_Startscreen_C.PreConstruct");

	UWG_Menu_Main_Startscreen_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Menu_Main_Startscreen.WG_Menu_Main_Startscreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWG_Menu_Main_Startscreen_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Menu_Main_Startscreen.WG_Menu_Main_Startscreen_C.Construct");

	UWG_Menu_Main_Startscreen_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Menu_Main_Startscreen.WG_Menu_Main_Startscreen_C.PressedConfirmAction
// (BlueprintCallable, BlueprintEvent)

void UWG_Menu_Main_Startscreen_C::PressedConfirmAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Menu_Main_Startscreen.WG_Menu_Main_Startscreen_C.PressedConfirmAction");

	UWG_Menu_Main_Startscreen_C_PressedConfirmAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Menu_Main_Startscreen.WG_Menu_Main_Startscreen_C.RefreshButtons
// (BlueprintCallable, BlueprintEvent)

void UWG_Menu_Main_Startscreen_C::RefreshButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Menu_Main_Startscreen.WG_Menu_Main_Startscreen_C.RefreshButtons");

	UWG_Menu_Main_Startscreen_C_RefreshButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Menu_Main_Startscreen.WG_Menu_Main_Startscreen_C.BndEvt__ContinueGameButtonNew_K2Node_ComponentBoundEvent_2_OnButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FInputActionButtonInfo* ActionInfo                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UWG_Menu_Main_Startscreen_C::BndEvt__ContinueGameButtonNew_K2Node_ComponentBoundEvent_2_OnButtonClicked__DelegateSignature(struct FInputActionButtonInfo* ActionInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Menu_Main_Startscreen.WG_Menu_Main_Startscreen_C.BndEvt__ContinueGameButtonNew_K2Node_ComponentBoundEvent_2_OnButtonClicked__DelegateSignature");

	UWG_Menu_Main_Startscreen_C_BndEvt__ContinueGameButtonNew_K2Node_ComponentBoundEvent_2_OnButtonClicked__DelegateSignature_Params params;
	params.ActionInfo = ActionInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Menu_Main_Startscreen.WG_Menu_Main_Startscreen_C.BndEvt__NewGameButtonNew_K2Node_ComponentBoundEvent_3_OnButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FInputActionButtonInfo* ActionInfo                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UWG_Menu_Main_Startscreen_C::BndEvt__NewGameButtonNew_K2Node_ComponentBoundEvent_3_OnButtonClicked__DelegateSignature(struct FInputActionButtonInfo* ActionInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Menu_Main_Startscreen.WG_Menu_Main_Startscreen_C.BndEvt__NewGameButtonNew_K2Node_ComponentBoundEvent_3_OnButtonClicked__DelegateSignature");

	UWG_Menu_Main_Startscreen_C_BndEvt__NewGameButtonNew_K2Node_ComponentBoundEvent_3_OnButtonClicked__DelegateSignature_Params params;
	params.ActionInfo = ActionInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Menu_Main_Startscreen.WG_Menu_Main_Startscreen_C.BndEvt__SkipTutorialButtonNew_K2Node_ComponentBoundEvent_7_OnButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FInputActionButtonInfo* ActionInfo                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UWG_Menu_Main_Startscreen_C::BndEvt__SkipTutorialButtonNew_K2Node_ComponentBoundEvent_7_OnButtonClicked__DelegateSignature(struct FInputActionButtonInfo* ActionInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Menu_Main_Startscreen.WG_Menu_Main_Startscreen_C.BndEvt__SkipTutorialButtonNew_K2Node_ComponentBoundEvent_7_OnButtonClicked__DelegateSignature");

	UWG_Menu_Main_Startscreen_C_BndEvt__SkipTutorialButtonNew_K2Node_ComponentBoundEvent_7_OnButtonClicked__DelegateSignature_Params params;
	params.ActionInfo = ActionInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Menu_Main_Startscreen.WG_Menu_Main_Startscreen_C.BndEvt__ActionFreezeButtonNew_K2Node_ComponentBoundEvent_8_OnButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FInputActionButtonInfo* ActionInfo                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UWG_Menu_Main_Startscreen_C::BndEvt__ActionFreezeButtonNew_K2Node_ComponentBoundEvent_8_OnButtonClicked__DelegateSignature(struct FInputActionButtonInfo* ActionInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Menu_Main_Startscreen.WG_Menu_Main_Startscreen_C.BndEvt__ActionFreezeButtonNew_K2Node_ComponentBoundEvent_8_OnButtonClicked__DelegateSignature");

	UWG_Menu_Main_Startscreen_C_BndEvt__ActionFreezeButtonNew_K2Node_ComponentBoundEvent_8_OnButtonClicked__DelegateSignature_Params params;
	params.ActionInfo = ActionInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Menu_Main_Startscreen.WG_Menu_Main_Startscreen_C.BndEvt__QuitButtonNew_K2Node_ComponentBoundEvent_9_OnButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FInputActionButtonInfo* ActionInfo                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UWG_Menu_Main_Startscreen_C::BndEvt__QuitButtonNew_K2Node_ComponentBoundEvent_9_OnButtonClicked__DelegateSignature(struct FInputActionButtonInfo* ActionInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Menu_Main_Startscreen.WG_Menu_Main_Startscreen_C.BndEvt__QuitButtonNew_K2Node_ComponentBoundEvent_9_OnButtonClicked__DelegateSignature");

	UWG_Menu_Main_Startscreen_C_BndEvt__QuitButtonNew_K2Node_ComponentBoundEvent_9_OnButtonClicked__DelegateSignature_Params params;
	params.ActionInfo = ActionInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Menu_Main_Startscreen.WG_Menu_Main_Startscreen_C.ContinueGame
// (BlueprintCallable, BlueprintEvent)

void UWG_Menu_Main_Startscreen_C::ContinueGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Menu_Main_Startscreen.WG_Menu_Main_Startscreen_C.ContinueGame");

	UWG_Menu_Main_Startscreen_C_ContinueGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Menu_Main_Startscreen.WG_Menu_Main_Startscreen_C.PressedCancelAction
// (BlueprintCallable, BlueprintEvent)

void UWG_Menu_Main_Startscreen_C::PressedCancelAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Menu_Main_Startscreen.WG_Menu_Main_Startscreen_C.PressedCancelAction");

	UWG_Menu_Main_Startscreen_C_PressedCancelAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Menu_Main_Startscreen.WG_Menu_Main_Startscreen_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Menu_Main_Startscreen_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Menu_Main_Startscreen.WG_Menu_Main_Startscreen_C.Tick");

	UWG_Menu_Main_Startscreen_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Menu_Main_Startscreen.WG_Menu_Main_Startscreen_C.FadedOut
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_Fullscreen_Fade_C**  Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_Menu_Main_Startscreen_C::FadedOut(class UWG_Fullscreen_Fade_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Menu_Main_Startscreen.WG_Menu_Main_Startscreen_C.FadedOut");

	UWG_Menu_Main_Startscreen_C_FadedOut_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Menu_Main_Startscreen.WG_Menu_Main_Startscreen_C.ConfirmQuit
// (BlueprintCallable, BlueprintEvent)

void UWG_Menu_Main_Startscreen_C::ConfirmQuit()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Menu_Main_Startscreen.WG_Menu_Main_Startscreen_C.ConfirmQuit");

	UWG_Menu_Main_Startscreen_C_ConfirmQuit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Menu_Main_Startscreen.WG_Menu_Main_Startscreen_C.InitializeMenu
// (BlueprintCallable, BlueprintEvent)

void UWG_Menu_Main_Startscreen_C::InitializeMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Menu_Main_Startscreen.WG_Menu_Main_Startscreen_C.InitializeMenu");

	UWG_Menu_Main_Startscreen_C_InitializeMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Menu_Main_Startscreen.WG_Menu_Main_Startscreen_C.FadeOutAfterContinuePress
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_Fullscreen_Fade_C**  Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_Menu_Main_Startscreen_C::FadeOutAfterContinuePress(class UWG_Fullscreen_Fade_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Menu_Main_Startscreen.WG_Menu_Main_Startscreen_C.FadeOutAfterContinuePress");

	UWG_Menu_Main_Startscreen_C_FadeOutAfterContinuePress_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Menu_Main_Startscreen.WG_Menu_Main_Startscreen_C.ReturnToMainMenuFade
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_Fullscreen_Fade_C**  Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_Menu_Main_Startscreen_C::ReturnToMainMenuFade(class UWG_Fullscreen_Fade_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Menu_Main_Startscreen.WG_Menu_Main_Startscreen_C.ReturnToMainMenuFade");

	UWG_Menu_Main_Startscreen_C_ReturnToMainMenuFade_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Menu_Main_Startscreen.WG_Menu_Main_Startscreen_C.ExecuteUbergraph_WG_Menu_Main_Startscreen
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Menu_Main_Startscreen_C::ExecuteUbergraph_WG_Menu_Main_Startscreen(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Menu_Main_Startscreen.WG_Menu_Main_Startscreen_C.ExecuteUbergraph_WG_Menu_Main_Startscreen");

	UWG_Menu_Main_Startscreen_C_ExecuteUbergraph_WG_Menu_Main_Startscreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

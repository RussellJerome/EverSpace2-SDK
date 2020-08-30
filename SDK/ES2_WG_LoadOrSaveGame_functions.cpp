// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_LoadOrSaveGame_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WG_LoadOrSaveGame.WG_LoadOrSaveGame_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWG_LoadOrSaveGame_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_LoadOrSaveGame.WG_LoadOrSaveGame_C.OnKeyDown");

	UWG_LoadOrSaveGame_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_LoadOrSaveGame.WG_LoadOrSaveGame_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWG_LoadOrSaveGame_C::OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_LoadOrSaveGame.WG_LoadOrSaveGame_C.OnFocusReceived");

	UWG_LoadOrSaveGame_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_LoadOrSaveGame.WG_LoadOrSaveGame_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_LoadOrSaveGame_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_LoadOrSaveGame.WG_LoadOrSaveGame_C.PreConstruct");

	UWG_LoadOrSaveGame_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_LoadOrSaveGame.WG_LoadOrSaveGame_C.ButrtonClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_SaveGame_Button_C**  Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_LoadOrSaveGame_C::ButrtonClicked(class UWG_SaveGame_Button_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_LoadOrSaveGame.WG_LoadOrSaveGame_C.ButrtonClicked");

	UWG_LoadOrSaveGame_C_ButrtonClicked_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_LoadOrSaveGame.WG_LoadOrSaveGame_C.CreateNewSaveGame
// (BlueprintCallable, BlueprintEvent)

void UWG_LoadOrSaveGame_C::CreateNewSaveGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_LoadOrSaveGame.WG_LoadOrSaveGame_C.CreateNewSaveGame");

	UWG_LoadOrSaveGame_C_CreateNewSaveGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_LoadOrSaveGame.WG_LoadOrSaveGame_C.OverwriteConfirmed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_ModalDialog_C**      WG_ModalDialog                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_LoadOrSaveGame_C::OverwriteConfirmed(class UWG_ModalDialog_C** WG_ModalDialog)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_LoadOrSaveGame.WG_LoadOrSaveGame_C.OverwriteConfirmed");

	UWG_LoadOrSaveGame_C_OverwriteConfirmed_Params params;
	params.WG_ModalDialog = WG_ModalDialog;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_LoadOrSaveGame.WG_LoadOrSaveGame_C.InitializeMenu
// (BlueprintCallable, BlueprintEvent)

void UWG_LoadOrSaveGame_C::InitializeMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_LoadOrSaveGame.WG_LoadOrSaveGame_C.InitializeMenu");

	UWG_LoadOrSaveGame_C_InitializeMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_LoadOrSaveGame.WG_LoadOrSaveGame_C.OnOKPressed_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_ModalDialog_C**      WG_ModalDialog                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_LoadOrSaveGame_C::OnOKPressed_Event_1(class UWG_ModalDialog_C** WG_ModalDialog)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_LoadOrSaveGame.WG_LoadOrSaveGame_C.OnOKPressed_Event_1");

	UWG_LoadOrSaveGame_C_OnOKPressed_Event_1_Params params;
	params.WG_ModalDialog = WG_ModalDialog;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_LoadOrSaveGame.WG_LoadOrSaveGame_C.PressedQuitAction
// (BlueprintCallable, BlueprintEvent)

void UWG_LoadOrSaveGame_C::PressedQuitAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_LoadOrSaveGame.WG_LoadOrSaveGame_C.PressedQuitAction");

	UWG_LoadOrSaveGame_C_PressedQuitAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_LoadOrSaveGame.WG_LoadOrSaveGame_C.ExecuteUbergraph_WG_LoadOrSaveGame
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_LoadOrSaveGame_C::ExecuteUbergraph_WG_LoadOrSaveGame(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_LoadOrSaveGame.WG_LoadOrSaveGame_C.ExecuteUbergraph_WG_LoadOrSaveGame");

	UWG_LoadOrSaveGame_C_ExecuteUbergraph_WG_LoadOrSaveGame_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_LoadOrSaveGame.WG_LoadOrSaveGame_C.OnClosed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWG_LoadOrSaveGame_C::OnClosed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_LoadOrSaveGame.WG_LoadOrSaveGame_C.OnClosed__DelegateSignature");

	UWG_LoadOrSaveGame_C_OnClosed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

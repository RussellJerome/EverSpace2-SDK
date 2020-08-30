// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_Menu_Ingame_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WG_Menu_Ingame.WG_Menu_Ingame_C.GetActiveTabWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UWG_Menu_Ingame_C::GetActiveTabWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Menu_Ingame.WG_Menu_Ingame_C.GetActiveTabWidget");

	UWG_Menu_Ingame_C_GetActiveTabWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_Menu_Ingame.WG_Menu_Ingame_C.SlotNavigationUpdate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_Inventory_Slot_C**   InventorySlot                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_Menu_Ingame_C::SlotNavigationUpdate(class UWG_Inventory_Slot_C** InventorySlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Menu_Ingame.WG_Menu_Ingame_C.SlotNavigationUpdate");

	UWG_Menu_Ingame_C_SlotNavigationUpdate_Params params;
	params.InventorySlot = InventorySlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Menu_Ingame.WG_Menu_Ingame_C.HandleItemInfoWidgets
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_Item_Info_C**        StaticItemInfoWidget           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UWG_Inventory_Slot_C**   SelectedSlot                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool*                          DoNotChangeVisibilityState     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          ForceFadeInAnimation           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Menu_Ingame_C::HandleItemInfoWidgets(class UWG_Item_Info_C** StaticItemInfoWidget, class UWG_Inventory_Slot_C** SelectedSlot, bool* DoNotChangeVisibilityState, bool* ForceFadeInAnimation)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Menu_Ingame.WG_Menu_Ingame_C.HandleItemInfoWidgets");

	UWG_Menu_Ingame_C_HandleItemInfoWidgets_Params params;
	params.StaticItemInfoWidget = StaticItemInfoWidget;
	params.SelectedSlot = SelectedSlot;
	params.DoNotChangeVisibilityState = DoNotChangeVisibilityState;
	params.ForceFadeInAnimation = ForceFadeInAnimation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Menu_Ingame.WG_Menu_Ingame_C.OnPreviewKeyDown
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWG_Menu_Ingame_C::OnPreviewKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Menu_Ingame.WG_Menu_Ingame_C.OnPreviewKeyDown");

	UWG_Menu_Ingame_C_OnPreviewKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_Menu_Ingame.WG_Menu_Ingame_C.OnMouseWheel
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWG_Menu_Ingame_C::OnMouseWheel(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Menu_Ingame.WG_Menu_Ingame_C.OnMouseWheel");

	UWG_Menu_Ingame_C_OnMouseWheel_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_Menu_Ingame.WG_Menu_Ingame_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWG_Menu_Ingame_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Menu_Ingame.WG_Menu_Ingame_C.OnKeyDown");

	UWG_Menu_Ingame_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_Menu_Ingame.WG_Menu_Ingame_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWG_Menu_Ingame_C::OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Menu_Ingame.WG_Menu_Ingame_C.OnFocusReceived");

	UWG_Menu_Ingame_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_Menu_Ingame.WG_Menu_Ingame_C.CloseMenu
// (BlueprintCallable, BlueprintEvent)

void UWG_Menu_Ingame_C::CloseMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Menu_Ingame.WG_Menu_Ingame_C.CloseMenu");

	UWG_Menu_Ingame_C_CloseMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Menu_Ingame.WG_Menu_Ingame_C.OnTabChanged_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMenuTab>*         Tab                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Menu_Ingame_C::OnTabChanged_Event_1(TEnumAsByte<EMenuTab>* Tab)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Menu_Ingame.WG_Menu_Ingame_C.OnTabChanged_Event_1");

	UWG_Menu_Ingame_C_OnTabChanged_Event_1_Params params;
	params.Tab = Tab;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Menu_Ingame.WG_Menu_Ingame_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWG_Menu_Ingame_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Menu_Ingame.WG_Menu_Ingame_C.Construct");

	UWG_Menu_Ingame_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Menu_Ingame.WG_Menu_Ingame_C.BlurInBGIfNeeded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Immediately                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Menu_Ingame_C::BlurInBGIfNeeded(bool* Immediately)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Menu_Ingame.WG_Menu_Ingame_C.BlurInBGIfNeeded");

	UWG_Menu_Ingame_C_BlurInBGIfNeeded_Params params;
	params.Immediately = Immediately;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Menu_Ingame.WG_Menu_Ingame_C.BlurOutBGIfNeeded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Immediately                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Menu_Ingame_C::BlurOutBGIfNeeded(bool* Immediately)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Menu_Ingame.WG_Menu_Ingame_C.BlurOutBGIfNeeded");

	UWG_Menu_Ingame_C_BlurOutBGIfNeeded_Params params;
	params.Immediately = Immediately;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Menu_Ingame.WG_Menu_Ingame_C.HandlePauseOnTabChangeOrMenuClose
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bMenuClose                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Menu_Ingame_C::HandlePauseOnTabChangeOrMenuClose(bool* bMenuClose)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Menu_Ingame.WG_Menu_Ingame_C.HandlePauseOnTabChangeOrMenuClose");

	UWG_Menu_Ingame_C_HandlePauseOnTabChangeOrMenuClose_Params params;
	params.bMenuClose = bMenuClose;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Menu_Ingame.WG_Menu_Ingame_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Menu_Ingame_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Menu_Ingame.WG_Menu_Ingame_C.PreConstruct");

	UWG_Menu_Ingame_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Menu_Ingame.WG_Menu_Ingame_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Menu_Ingame_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Menu_Ingame.WG_Menu_Ingame_C.Tick");

	UWG_Menu_Ingame_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Menu_Ingame.WG_Menu_Ingame_C.OnPlayerCreditsChanged_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           NewCredits                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           CreditsDelta                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Menu_Ingame_C::OnPlayerCreditsChanged_Event(int* NewCredits, int* CreditsDelta)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Menu_Ingame.WG_Menu_Ingame_C.OnPlayerCreditsChanged_Event");

	UWG_Menu_Ingame_C_OnPlayerCreditsChanged_Event_Params params;
	params.NewCredits = NewCredits;
	params.CreditsDelta = CreditsDelta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Menu_Ingame.WG_Menu_Ingame_C.ExecuteUbergraph_WG_Menu_Ingame
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Menu_Ingame_C::ExecuteUbergraph_WG_Menu_Ingame(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Menu_Ingame.WG_Menu_Ingame_C.ExecuteUbergraph_WG_Menu_Ingame");

	UWG_Menu_Ingame_C_ExecuteUbergraph_WG_Menu_Ingame_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Menu_Ingame.WG_Menu_Ingame_C.OnTabOpened__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMenuTab>*         Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Menu_Ingame_C::OnTabOpened__DelegateSignature(TEnumAsByte<EMenuTab>* Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Menu_Ingame.WG_Menu_Ingame_C.OnTabOpened__DelegateSignature");

	UWG_Menu_Ingame_C_OnTabOpened__DelegateSignature_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Menu_Ingame.WG_Menu_Ingame_C.OnClosed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWG_Menu_Ingame_C::OnClosed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Menu_Ingame.WG_Menu_Ingame_C.OnClosed__DelegateSignature");

	UWG_Menu_Ingame_C_OnClosed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

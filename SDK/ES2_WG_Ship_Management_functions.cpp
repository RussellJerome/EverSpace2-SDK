// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_Ship_Management_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WG_Ship_Management.WG_Ship_Management_C.CanItemInfoVisibilityNotBeChanged
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWG_Ship_Management_C::CanItemInfoVisibilityNotBeChanged(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Ship_Management.WG_Ship_Management_C.CanItemInfoVisibilityNotBeChanged");

	UWG_Ship_Management_C_CanItemInfoVisibilityNotBeChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function WG_Ship_Management.WG_Ship_Management_C.GetSelectedSlot
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_Inventory_Slot_C*    Result                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_Ship_Management_C::GetSelectedSlot(class UWG_Inventory_Slot_C** Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Ship_Management.WG_Ship_Management_C.GetSelectedSlot");

	UWG_Ship_Management_C_GetSelectedSlot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function WG_Ship_Management.WG_Ship_Management_C.GetItemInfoWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_Item_Info_C*         ItemInfoWidget                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_Ship_Management_C::GetItemInfoWidget(class UWG_Item_Info_C** ItemInfoWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Ship_Management.WG_Ship_Management_C.GetItemInfoWidget");

	UWG_Ship_Management_C_GetItemInfoWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemInfoWidget != nullptr)
		*ItemInfoWidget = params.ItemInfoWidget;
}


// Function WG_Ship_Management.WG_Ship_Management_C.AddAttributesToBox
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FName>           Array                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UPanelWidget**           Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool*                          IsCompoundAttr                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Ship_Management_C::AddAttributesToBox(class UPanelWidget** Target, bool* IsCompoundAttr, TArray<struct FName>* Array)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Ship_Management.WG_Ship_Management_C.AddAttributesToBox");

	UWG_Ship_Management_C_AddAttributesToBox_Params params;
	params.Target = Target;
	params.IsCompoundAttr = IsCompoundAttr;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;
}


// Function WG_Ship_Management.WG_Ship_Management_C.OnKeyUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWG_Ship_Management_C::OnKeyUp(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Ship_Management.WG_Ship_Management_C.OnKeyUp");

	UWG_Ship_Management_C_OnKeyUp_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_Ship_Management.WG_Ship_Management_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWG_Ship_Management_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Ship_Management.WG_Ship_Management_C.OnKeyDown");

	UWG_Ship_Management_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_Ship_Management.WG_Ship_Management_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWG_Ship_Management_C::OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Ship_Management.WG_Ship_Management_C.OnFocusReceived");

	UWG_Ship_Management_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_Ship_Management.WG_Ship_Management_C.OnGamepadModeChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsGamepadMode                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Ship_Management_C::OnGamepadModeChanged(bool* IsGamepadMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Ship_Management.WG_Ship_Management_C.OnGamepadModeChanged");

	UWG_Ship_Management_C_OnGamepadModeChanged_Params params;
	params.IsGamepadMode = IsGamepadMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Ship_Management.WG_Ship_Management_C.Refresh
// (Public, BlueprintCallable, BlueprintEvent)

void UWG_Ship_Management_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Ship_Management.WG_Ship_Management_C.Refresh");

	UWG_Ship_Management_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Ship_Management.WG_Ship_Management_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Ship_Management_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Ship_Management.WG_Ship_Management_C.PreConstruct");

	UWG_Ship_Management_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Ship_Management.WG_Ship_Management_C.BndEvt__Button_Perks_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWG_Ship_Management_C::BndEvt__Button_Perks_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Ship_Management.WG_Ship_Management_C.BndEvt__Button_Perks_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UWG_Ship_Management_C_BndEvt__Button_Perks_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Ship_Management.WG_Ship_Management_C.FadeInOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsFadeIn                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Ship_Management_C::FadeInOut(bool* IsFadeIn)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Ship_Management.WG_Ship_Management_C.FadeInOut");

	UWG_Ship_Management_C_FadeInOut_Params params;
	params.IsFadeIn = IsFadeIn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Ship_Management.WG_Ship_Management_C.PressedBack
// (BlueprintCallable, BlueprintEvent)

void UWG_Ship_Management_C::PressedBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Ship_Management.WG_Ship_Management_C.PressedBack");

	UWG_Ship_Management_C_PressedBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Ship_Management.WG_Ship_Management_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Ship_Management_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Ship_Management.WG_Ship_Management_C.Tick");

	UWG_Ship_Management_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Ship_Management.WG_Ship_Management_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWG_Ship_Management_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Ship_Management.WG_Ship_Management_C.Construct");

	UWG_Ship_Management_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Ship_Management.WG_Ship_Management_C.NextShipSelected
// (BlueprintCallable, BlueprintEvent)

void UWG_Ship_Management_C::NextShipSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Ship_Management.WG_Ship_Management_C.NextShipSelected");

	UWG_Ship_Management_C_NextShipSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Ship_Management.WG_Ship_Management_C.PreviousShipSelected
// (BlueprintCallable, BlueprintEvent)

void UWG_Ship_Management_C::PreviousShipSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Ship_Management.WG_Ship_Management_C.PreviousShipSelected");

	UWG_Ship_Management_C_PreviousShipSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Ship_Management.WG_Ship_Management_C.ChangeShip
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Previous                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Ship_Management_C::ChangeShip(bool* Previous)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Ship_Management.WG_Ship_Management_C.ChangeShip");

	UWG_Ship_Management_C_ChangeShip_Params params;
	params.Previous = Previous;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Ship_Management.WG_Ship_Management_C.BndEvt__WG_MenuAction_Button_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FInputActionButtonInfo* ActionInfo                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UWG_Ship_Management_C::BndEvt__WG_MenuAction_Button_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature(struct FInputActionButtonInfo* ActionInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Ship_Management.WG_Ship_Management_C.BndEvt__WG_MenuAction_Button_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature");

	UWG_Ship_Management_C_BndEvt__WG_MenuAction_Button_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature_Params params;
	params.ActionInfo = ActionInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Ship_Management.WG_Ship_Management_C.BndEvt__WG_MenuAction_Button_C_0_K2Node_ComponentBoundEvent_2_OnButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FInputActionButtonInfo* ActionInfo                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UWG_Ship_Management_C::BndEvt__WG_MenuAction_Button_C_0_K2Node_ComponentBoundEvent_2_OnButtonClicked__DelegateSignature(struct FInputActionButtonInfo* ActionInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Ship_Management.WG_Ship_Management_C.BndEvt__WG_MenuAction_Button_C_0_K2Node_ComponentBoundEvent_2_OnButtonClicked__DelegateSignature");

	UWG_Ship_Management_C_BndEvt__WG_MenuAction_Button_C_0_K2Node_ComponentBoundEvent_2_OnButtonClicked__DelegateSignature_Params params;
	params.ActionInfo = ActionInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Ship_Management.WG_Ship_Management_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWG_Ship_Management_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Ship_Management.WG_Ship_Management_C.Destruct");

	UWG_Ship_Management_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Ship_Management.WG_Ship_Management_C.InitWithStationID
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  StationID                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWG_Menu_Ingame_C**      MenuIngameRef                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_Ship_Management_C::InitWithStationID(struct FName* StationID, class UWG_Menu_Ingame_C** MenuIngameRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Ship_Management.WG_Ship_Management_C.InitWithStationID");

	UWG_Ship_Management_C_InitWithStationID_Params params;
	params.StationID = StationID;
	params.MenuIngameRef = MenuIngameRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Ship_Management.WG_Ship_Management_C.PressedPauseMenu
// (BlueprintCallable, BlueprintEvent)

void UWG_Ship_Management_C::PressedPauseMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Ship_Management.WG_Ship_Management_C.PressedPauseMenu");

	UWG_Ship_Management_C_PressedPauseMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Ship_Management.WG_Ship_Management_C.ExecuteUbergraph_WG_Ship_Management
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Ship_Management_C::ExecuteUbergraph_WG_Ship_Management(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Ship_Management.WG_Ship_Management_C.ExecuteUbergraph_WG_Ship_Management");

	UWG_Ship_Management_C_ExecuteUbergraph_WG_Ship_Management_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Ship_Management.WG_Ship_Management_C.OnClosed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_LootTransfer_C**     LootTransferWidget             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_Ship_Management_C::OnClosed__DelegateSignature(class UWG_LootTransfer_C** LootTransferWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Ship_Management.WG_Ship_Management_C.OnClosed__DelegateSignature");

	UWG_Ship_Management_C_OnClosed__DelegateSignature_Params params;
	params.LootTransferWidget = LootTransferWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

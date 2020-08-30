// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_Homebase_Hangar_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WG_Homebase_Hangar.WG_Homebase_Hangar_C.CanItemInfoVisibilityNotBeChanged
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWG_Homebase_Hangar_C::CanItemInfoVisibilityNotBeChanged(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Homebase_Hangar.WG_Homebase_Hangar_C.CanItemInfoVisibilityNotBeChanged");

	UWG_Homebase_Hangar_C_CanItemInfoVisibilityNotBeChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function WG_Homebase_Hangar.WG_Homebase_Hangar_C.GetSelectedSlot
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_Inventory_Slot_C*    Result                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_Homebase_Hangar_C::GetSelectedSlot(class UWG_Inventory_Slot_C** Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Homebase_Hangar.WG_Homebase_Hangar_C.GetSelectedSlot");

	UWG_Homebase_Hangar_C_GetSelectedSlot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function WG_Homebase_Hangar.WG_Homebase_Hangar_C.GetItemInfoWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_Item_Info_C*         ItemInfoWidget                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_Homebase_Hangar_C::GetItemInfoWidget(class UWG_Item_Info_C** ItemInfoWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Homebase_Hangar.WG_Homebase_Hangar_C.GetItemInfoWidget");

	UWG_Homebase_Hangar_C_GetItemInfoWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemInfoWidget != nullptr)
		*ItemInfoWidget = params.ItemInfoWidget;
}


// Function WG_Homebase_Hangar.WG_Homebase_Hangar_C.SetShipSelectorVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_Inventory_Slot_C**   SelectedSlot                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_Homebase_Hangar_C::SetShipSelectorVisibility(class UWG_Inventory_Slot_C** SelectedSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Homebase_Hangar.WG_Homebase_Hangar_C.SetShipSelectorVisibility");

	UWG_Homebase_Hangar_C_SetShipSelectorVisibility_Params params;
	params.SelectedSlot = SelectedSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Homebase_Hangar.WG_Homebase_Hangar_C.OnKeyUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWG_Homebase_Hangar_C::OnKeyUp(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Homebase_Hangar.WG_Homebase_Hangar_C.OnKeyUp");

	UWG_Homebase_Hangar_C_OnKeyUp_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_Homebase_Hangar.WG_Homebase_Hangar_C.OnAnalogValueChanged
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FAnalogInputEvent*      InAnalogInputEvent             (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWG_Homebase_Hangar_C::OnAnalogValueChanged(struct FGeometry* MyGeometry, struct FAnalogInputEvent* InAnalogInputEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Homebase_Hangar.WG_Homebase_Hangar_C.OnAnalogValueChanged");

	UWG_Homebase_Hangar_C_OnAnalogValueChanged_Params params;
	params.MyGeometry = MyGeometry;
	params.InAnalogInputEvent = InAnalogInputEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_Homebase_Hangar.WG_Homebase_Hangar_C.OnMouseMove
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWG_Homebase_Hangar_C::OnMouseMove(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Homebase_Hangar.WG_Homebase_Hangar_C.OnMouseMove");

	UWG_Homebase_Hangar_C_OnMouseMove_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_Homebase_Hangar.WG_Homebase_Hangar_C.OnMouseButtonUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWG_Homebase_Hangar_C::OnMouseButtonUp(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Homebase_Hangar.WG_Homebase_Hangar_C.OnMouseButtonUp");

	UWG_Homebase_Hangar_C_OnMouseButtonUp_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_Homebase_Hangar.WG_Homebase_Hangar_C.On_BorderBG_MouseButtonDown_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWG_Homebase_Hangar_C::On_BorderBG_MouseButtonDown_1(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Homebase_Hangar.WG_Homebase_Hangar_C.On_BorderBG_MouseButtonDown_1");

	UWG_Homebase_Hangar_C_On_BorderBG_MouseButtonDown_1_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_Homebase_Hangar.WG_Homebase_Hangar_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWG_Homebase_Hangar_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Homebase_Hangar.WG_Homebase_Hangar_C.OnKeyDown");

	UWG_Homebase_Hangar_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_Homebase_Hangar.WG_Homebase_Hangar_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWG_Homebase_Hangar_C::OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Homebase_Hangar.WG_Homebase_Hangar_C.OnFocusReceived");

	UWG_Homebase_Hangar_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_Homebase_Hangar.WG_Homebase_Hangar_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Homebase_Hangar_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Homebase_Hangar.WG_Homebase_Hangar_C.PreConstruct");

	UWG_Homebase_Hangar_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Homebase_Hangar.WG_Homebase_Hangar_C.BndEvt__Button_Perks_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWG_Homebase_Hangar_C::BndEvt__Button_Perks_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Homebase_Hangar.WG_Homebase_Hangar_C.BndEvt__Button_Perks_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature");

	UWG_Homebase_Hangar_C_BndEvt__Button_Perks_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Homebase_Hangar.WG_Homebase_Hangar_C.NextShipSelected
// (BlueprintCallable, BlueprintEvent)

void UWG_Homebase_Hangar_C::NextShipSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Homebase_Hangar.WG_Homebase_Hangar_C.NextShipSelected");

	UWG_Homebase_Hangar_C_NextShipSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Homebase_Hangar.WG_Homebase_Hangar_C.PreviousShipSelected
// (BlueprintCallable, BlueprintEvent)

void UWG_Homebase_Hangar_C::PreviousShipSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Homebase_Hangar.WG_Homebase_Hangar_C.PreviousShipSelected");

	UWG_Homebase_Hangar_C_PreviousShipSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Homebase_Hangar.WG_Homebase_Hangar_C.ChangeShip
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Previous                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Homebase_Hangar_C::ChangeShip(bool* Previous)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Homebase_Hangar.WG_Homebase_Hangar_C.ChangeShip");

	UWG_Homebase_Hangar_C_ChangeShip_Params params;
	params.Previous = Previous;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Homebase_Hangar.WG_Homebase_Hangar_C.LinkInventoriesWithStorage
// (BlueprintCallable, BlueprintEvent)

void UWG_Homebase_Hangar_C::LinkInventoriesWithStorage()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Homebase_Hangar.WG_Homebase_Hangar_C.LinkInventoriesWithStorage");

	UWG_Homebase_Hangar_C_LinkInventoriesWithStorage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Homebase_Hangar.WG_Homebase_Hangar_C.PressedMove
// (BlueprintCallable, BlueprintEvent)

void UWG_Homebase_Hangar_C::PressedMove()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Homebase_Hangar.WG_Homebase_Hangar_C.PressedMove");

	UWG_Homebase_Hangar_C_PressedMove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Homebase_Hangar.WG_Homebase_Hangar_C.PressedEquip
// (BlueprintCallable, BlueprintEvent)

void UWG_Homebase_Hangar_C::PressedEquip()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Homebase_Hangar.WG_Homebase_Hangar_C.PressedEquip");

	UWG_Homebase_Hangar_C_PressedEquip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Homebase_Hangar.WG_Homebase_Hangar_C.PressedRemove
// (BlueprintCallable, BlueprintEvent)

void UWG_Homebase_Hangar_C::PressedRemove()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Homebase_Hangar.WG_Homebase_Hangar_C.PressedRemove");

	UWG_Homebase_Hangar_C_PressedRemove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Homebase_Hangar.WG_Homebase_Hangar_C.PressedBack
// (BlueprintCallable, BlueprintEvent)

void UWG_Homebase_Hangar_C::PressedBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Homebase_Hangar.WG_Homebase_Hangar_C.PressedBack");

	UWG_Homebase_Hangar_C_PressedBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Homebase_Hangar.WG_Homebase_Hangar_C.SetupInventories
// (BlueprintCallable, BlueprintEvent)

void UWG_Homebase_Hangar_C::SetupInventories()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Homebase_Hangar.WG_Homebase_Hangar_C.SetupInventories");

	UWG_Homebase_Hangar_C_SetupInventories_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Homebase_Hangar.WG_Homebase_Hangar_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWG_Homebase_Hangar_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Homebase_Hangar.WG_Homebase_Hangar_C.Construct");

	UWG_Homebase_Hangar_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Homebase_Hangar.WG_Homebase_Hangar_C.UpdateButtonsInFooter
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_Inventory_Slot_C**   InventorySlotWidget            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_Homebase_Hangar_C::UpdateButtonsInFooter(class UWG_Inventory_Slot_C** InventorySlotWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Homebase_Hangar.WG_Homebase_Hangar_C.UpdateButtonsInFooter");

	UWG_Homebase_Hangar_C_UpdateButtonsInFooter_Params params;
	params.InventorySlotWidget = InventorySlotWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Homebase_Hangar.WG_Homebase_Hangar_C.SlotDeselected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_Inventory_Slot_C**   InventorySlotWidget            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_Homebase_Hangar_C::SlotDeselected(class UWG_Inventory_Slot_C** InventorySlotWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Homebase_Hangar.WG_Homebase_Hangar_C.SlotDeselected");

	UWG_Homebase_Hangar_C_SlotDeselected_Params params;
	params.InventorySlotWidget = InventorySlotWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Homebase_Hangar.WG_Homebase_Hangar_C.OnCargoUnitChanged
// (BlueprintCallable, BlueprintEvent)

void UWG_Homebase_Hangar_C::OnCargoUnitChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Homebase_Hangar.WG_Homebase_Hangar_C.OnCargoUnitChanged");

	UWG_Homebase_Hangar_C_OnCargoUnitChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Homebase_Hangar.WG_Homebase_Hangar_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Homebase_Hangar_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Homebase_Hangar.WG_Homebase_Hangar_C.Tick");

	UWG_Homebase_Hangar_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Homebase_Hangar.WG_Homebase_Hangar_C.PressedChangeCompare
// (BlueprintCallable, BlueprintEvent)

void UWG_Homebase_Hangar_C::PressedChangeCompare()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Homebase_Hangar.WG_Homebase_Hangar_C.PressedChangeCompare");

	UWG_Homebase_Hangar_C_PressedChangeCompare_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Homebase_Hangar.WG_Homebase_Hangar_C.FadeInOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsFadeIn                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Homebase_Hangar_C::FadeInOut(bool* IsFadeIn)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Homebase_Hangar.WG_Homebase_Hangar_C.FadeInOut");

	UWG_Homebase_Hangar_C_FadeInOut_Params params;
	params.IsFadeIn = IsFadeIn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Homebase_Hangar.WG_Homebase_Hangar_C.InitWithStationID
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  StationID                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWG_Menu_Ingame_C**      MenuIngameRef                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_Homebase_Hangar_C::InitWithStationID(struct FName* StationID, class UWG_Menu_Ingame_C** MenuIngameRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Homebase_Hangar.WG_Homebase_Hangar_C.InitWithStationID");

	UWG_Homebase_Hangar_C_InitWithStationID_Params params;
	params.StationID = StationID;
	params.MenuIngameRef = MenuIngameRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Homebase_Hangar.WG_Homebase_Hangar_C.OnGamepadModeChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsGamepadMode                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Homebase_Hangar_C::OnGamepadModeChanged(bool* IsGamepadMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Homebase_Hangar.WG_Homebase_Hangar_C.OnGamepadModeChanged");

	UWG_Homebase_Hangar_C_OnGamepadModeChanged_Params params;
	params.IsGamepadMode = IsGamepadMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Homebase_Hangar.WG_Homebase_Hangar_C.PressedPauseMenu
// (BlueprintCallable, BlueprintEvent)

void UWG_Homebase_Hangar_C::PressedPauseMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Homebase_Hangar.WG_Homebase_Hangar_C.PressedPauseMenu");

	UWG_Homebase_Hangar_C_PressedPauseMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Homebase_Hangar.WG_Homebase_Hangar_C.Refresh
// (Public, BlueprintCallable, BlueprintEvent)

void UWG_Homebase_Hangar_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Homebase_Hangar.WG_Homebase_Hangar_C.Refresh");

	UWG_Homebase_Hangar_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Homebase_Hangar.WG_Homebase_Hangar_C.ExecuteUbergraph_WG_Homebase_Hangar
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Homebase_Hangar_C::ExecuteUbergraph_WG_Homebase_Hangar(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Homebase_Hangar.WG_Homebase_Hangar_C.ExecuteUbergraph_WG_Homebase_Hangar");

	UWG_Homebase_Hangar_C_ExecuteUbergraph_WG_Homebase_Hangar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Homebase_Hangar.WG_Homebase_Hangar_C.OnBlurOutBackground__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Immediately                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Homebase_Hangar_C::OnBlurOutBackground__DelegateSignature(bool* Immediately)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Homebase_Hangar.WG_Homebase_Hangar_C.OnBlurOutBackground__DelegateSignature");

	UWG_Homebase_Hangar_C_OnBlurOutBackground__DelegateSignature_Params params;
	params.Immediately = Immediately;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Homebase_Hangar.WG_Homebase_Hangar_C.OnBlurInBackground__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Immediately                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Homebase_Hangar_C::OnBlurInBackground__DelegateSignature(bool* Immediately)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Homebase_Hangar.WG_Homebase_Hangar_C.OnBlurInBackground__DelegateSignature");

	UWG_Homebase_Hangar_C_OnBlurInBackground__DelegateSignature_Params params;
	params.Immediately = Immediately;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Homebase_Hangar.WG_Homebase_Hangar_C.OnClosed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_LootTransfer_C**     LootTransferWidget             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_Homebase_Hangar_C::OnClosed__DelegateSignature(class UWG_LootTransfer_C** LootTransferWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Homebase_Hangar.WG_Homebase_Hangar_C.OnClosed__DelegateSignature");

	UWG_Homebase_Hangar_C_OnClosed__DelegateSignature_Params params;
	params.LootTransferWidget = LootTransferWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

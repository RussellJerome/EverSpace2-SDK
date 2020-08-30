// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_IngameInventory_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WG_IngameInventory.WG_IngameInventory_C.CanItemInfoVisibilityNotBeChanged
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWG_IngameInventory_C::CanItemInfoVisibilityNotBeChanged(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_IngameInventory.WG_IngameInventory_C.CanItemInfoVisibilityNotBeChanged");

	UWG_IngameInventory_C_CanItemInfoVisibilityNotBeChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function WG_IngameInventory.WG_IngameInventory_C.GetSelectedSlot
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_Inventory_Slot_C*    Result                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_IngameInventory_C::GetSelectedSlot(class UWG_Inventory_Slot_C** Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_IngameInventory.WG_IngameInventory_C.GetSelectedSlot");

	UWG_IngameInventory_C_GetSelectedSlot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function WG_IngameInventory.WG_IngameInventory_C.GetItemInfoWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_Item_Info_C*         ItemInfoWidget                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_IngameInventory_C::GetItemInfoWidget(class UWG_Item_Info_C** ItemInfoWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_IngameInventory.WG_IngameInventory_C.GetItemInfoWidget");

	UWG_IngameInventory_C_GetItemInfoWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemInfoWidget != nullptr)
		*ItemInfoWidget = params.ItemInfoWidget;
}


// Function WG_IngameInventory.WG_IngameInventory_C.DoCustomNavigation_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EUINavigation*                 Navigation                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UWG_IngameInventory_C::DoCustomNavigation_1(EUINavigation* Navigation)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_IngameInventory.WG_IngameInventory_C.DoCustomNavigation_1");

	UWG_IngameInventory_C_DoCustomNavigation_1_Params params;
	params.Navigation = Navigation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_IngameInventory.WG_IngameInventory_C.OnKeyUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWG_IngameInventory_C::OnKeyUp(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_IngameInventory.WG_IngameInventory_C.OnKeyUp");

	UWG_IngameInventory_C_OnKeyUp_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_IngameInventory.WG_IngameInventory_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWG_IngameInventory_C::OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_IngameInventory.WG_IngameInventory_C.OnFocusReceived");

	UWG_IngameInventory_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_IngameInventory.WG_IngameInventory_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWG_IngameInventory_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_IngameInventory.WG_IngameInventory_C.OnKeyDown");

	UWG_IngameInventory_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_IngameInventory.WG_IngameInventory_C.LinkInventories
// (BlueprintCallable, BlueprintEvent)

void UWG_IngameInventory_C::LinkInventories()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_IngameInventory.WG_IngameInventory_C.LinkInventories");

	UWG_IngameInventory_C_LinkInventories_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_IngameInventory.WG_IngameInventory_C.PressedEquip
// (BlueprintCallable, BlueprintEvent)

void UWG_IngameInventory_C::PressedEquip()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_IngameInventory.WG_IngameInventory_C.PressedEquip");

	UWG_IngameInventory_C_PressedEquip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_IngameInventory.WG_IngameInventory_C.PressedRemove
// (BlueprintCallable, BlueprintEvent)

void UWG_IngameInventory_C::PressedRemove()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_IngameInventory.WG_IngameInventory_C.PressedRemove");

	UWG_IngameInventory_C_PressedRemove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_IngameInventory.WG_IngameInventory_C.PressedBack
// (BlueprintCallable, BlueprintEvent)

void UWG_IngameInventory_C::PressedBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_IngameInventory.WG_IngameInventory_C.PressedBack");

	UWG_IngameInventory_C_PressedBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_IngameInventory.WG_IngameInventory_C.SetupInventories
// (BlueprintCallable, BlueprintEvent)

void UWG_IngameInventory_C::SetupInventories()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_IngameInventory.WG_IngameInventory_C.SetupInventories");

	UWG_IngameInventory_C_SetupInventories_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_IngameInventory.WG_IngameInventory_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWG_IngameInventory_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_IngameInventory.WG_IngameInventory_C.Construct");

	UWG_IngameInventory_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_IngameInventory.WG_IngameInventory_C.UpdateButtonsInFooter
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_Inventory_Slot_C**   InventorySlotWidget            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_IngameInventory_C::UpdateButtonsInFooter(class UWG_Inventory_Slot_C** InventorySlotWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_IngameInventory.WG_IngameInventory_C.UpdateButtonsInFooter");

	UWG_IngameInventory_C_UpdateButtonsInFooter_Params params;
	params.InventorySlotWidget = InventorySlotWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_IngameInventory.WG_IngameInventory_C.Refresh
// (Public, BlueprintCallable, BlueprintEvent)

void UWG_IngameInventory_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_IngameInventory.WG_IngameInventory_C.Refresh");

	UWG_IngameInventory_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_IngameInventory.WG_IngameInventory_C.SlotDeselected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_Inventory_Slot_C**   InventorySlotWidget            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_IngameInventory_C::SlotDeselected(class UWG_Inventory_Slot_C** InventorySlotWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_IngameInventory.WG_IngameInventory_C.SlotDeselected");

	UWG_IngameInventory_C_SlotDeselected_Params params;
	params.InventorySlotWidget = InventorySlotWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_IngameInventory.WG_IngameInventory_C.OnGamepadModeChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsGamepadMode                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_IngameInventory_C::OnGamepadModeChanged(bool* IsGamepadMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_IngameInventory.WG_IngameInventory_C.OnGamepadModeChanged");

	UWG_IngameInventory_C_OnGamepadModeChanged_Params params;
	params.IsGamepadMode = IsGamepadMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_IngameInventory.WG_IngameInventory_C.OnCargoUnitChanged
// (BlueprintCallable, BlueprintEvent)

void UWG_IngameInventory_C::OnCargoUnitChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_IngameInventory.WG_IngameInventory_C.OnCargoUnitChanged");

	UWG_IngameInventory_C_OnCargoUnitChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_IngameInventory.WG_IngameInventory_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_IngameInventory_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_IngameInventory.WG_IngameInventory_C.PreConstruct");

	UWG_IngameInventory_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_IngameInventory.WG_IngameInventory_C.PressedMove
// (BlueprintCallable, BlueprintEvent)

void UWG_IngameInventory_C::PressedMove()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_IngameInventory.WG_IngameInventory_C.PressedMove");

	UWG_IngameInventory_C_PressedMove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_IngameInventory.WG_IngameInventory_C.PressedChangeCompare
// (BlueprintCallable, BlueprintEvent)

void UWG_IngameInventory_C::PressedChangeCompare()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_IngameInventory.WG_IngameInventory_C.PressedChangeCompare");

	UWG_IngameInventory_C_PressedChangeCompare_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_IngameInventory.WG_IngameInventory_C.FadeInOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsFadeIn                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_IngameInventory_C::FadeInOut(bool* IsFadeIn)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_IngameInventory.WG_IngameInventory_C.FadeInOut");

	UWG_IngameInventory_C_FadeInOut_Params params;
	params.IsFadeIn = IsFadeIn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_IngameInventory.WG_IngameInventory_C.InitWithStationID
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  StationID                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWG_Menu_Ingame_C**      MenuIngameRef                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_IngameInventory_C::InitWithStationID(struct FName* StationID, class UWG_Menu_Ingame_C** MenuIngameRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_IngameInventory.WG_IngameInventory_C.InitWithStationID");

	UWG_IngameInventory_C_InitWithStationID_Params params;
	params.StationID = StationID;
	params.MenuIngameRef = MenuIngameRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_IngameInventory.WG_IngameInventory_C.PressedPauseMenu
// (BlueprintCallable, BlueprintEvent)

void UWG_IngameInventory_C::PressedPauseMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_IngameInventory.WG_IngameInventory_C.PressedPauseMenu");

	UWG_IngameInventory_C_PressedPauseMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_IngameInventory.WG_IngameInventory_C.ExecuteUbergraph_WG_IngameInventory
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_IngameInventory_C::ExecuteUbergraph_WG_IngameInventory(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_IngameInventory.WG_IngameInventory_C.ExecuteUbergraph_WG_IngameInventory");

	UWG_IngameInventory_C_ExecuteUbergraph_WG_IngameInventory_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

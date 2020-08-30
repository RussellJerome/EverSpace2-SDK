// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_LootTransfer_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WG_LootTransfer.WG_LootTransfer_C.CanItemInfoVisibilityNotBeChanged
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWG_LootTransfer_C::CanItemInfoVisibilityNotBeChanged(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_LootTransfer.WG_LootTransfer_C.CanItemInfoVisibilityNotBeChanged");

	UWG_LootTransfer_C_CanItemInfoVisibilityNotBeChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function WG_LootTransfer.WG_LootTransfer_C.GetSelectedSlot
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_Inventory_Slot_C*    Result                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_LootTransfer_C::GetSelectedSlot(class UWG_Inventory_Slot_C** Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_LootTransfer.WG_LootTransfer_C.GetSelectedSlot");

	UWG_LootTransfer_C_GetSelectedSlot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function WG_LootTransfer.WG_LootTransfer_C.GetItemInfoWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_Item_Info_C*         ItemInfoWidget                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_LootTransfer_C::GetItemInfoWidget(class UWG_Item_Info_C** ItemInfoWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_LootTransfer.WG_LootTransfer_C.GetItemInfoWidget");

	UWG_LootTransfer_C_GetItemInfoWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemInfoWidget != nullptr)
		*ItemInfoWidget = params.ItemInfoWidget;
}


// Function WG_LootTransfer.WG_LootTransfer_C.DoCustomNavigation_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EUINavigation*                 Navigation                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UWG_LootTransfer_C::DoCustomNavigation_1(EUINavigation* Navigation)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_LootTransfer.WG_LootTransfer_C.DoCustomNavigation_1");

	UWG_LootTransfer_C_DoCustomNavigation_1_Params params;
	params.Navigation = Navigation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_LootTransfer.WG_LootTransfer_C.MoveAllWithAutoClose
// (Public, BlueprintCallable, BlueprintEvent)

void UWG_LootTransfer_C::MoveAllWithAutoClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_LootTransfer.WG_LootTransfer_C.MoveAllWithAutoClose");

	UWG_LootTransfer_C_MoveAllWithAutoClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_LootTransfer.WG_LootTransfer_C.ForceNavigationToLootInventory
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EUINavigation*                 Navigation                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UWG_LootTransfer_C::ForceNavigationToLootInventory(EUINavigation* Navigation)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_LootTransfer.WG_LootTransfer_C.ForceNavigationToLootInventory");

	UWG_LootTransfer_C_ForceNavigationToLootInventory_Params params;
	params.Navigation = Navigation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_LootTransfer.WG_LootTransfer_C.IsMoveAllAvailable
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWG_LootTransfer_C::IsMoveAllAvailable(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_LootTransfer.WG_LootTransfer_C.IsMoveAllAvailable");

	UWG_LootTransfer_C_IsMoveAllAvailable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function WG_LootTransfer.WG_LootTransfer_C.ToogleMoveAllAvailability
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsActive                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWG_Inventory_Slot_C*    SelectedSlot                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)

void UWG_LootTransfer_C::ToogleMoveAllAvailability(bool* IsActive, class UWG_Inventory_Slot_C** SelectedSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_LootTransfer.WG_LootTransfer_C.ToogleMoveAllAvailability");

	UWG_LootTransfer_C_ToogleMoveAllAvailability_Params params;
	params.IsActive = IsActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SelectedSlot != nullptr)
		*SelectedSlot = params.SelectedSlot;
}


// Function WG_LootTransfer.WG_LootTransfer_C.OnKeyUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWG_LootTransfer_C::OnKeyUp(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_LootTransfer.WG_LootTransfer_C.OnKeyUp");

	UWG_LootTransfer_C_OnKeyUp_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_LootTransfer.WG_LootTransfer_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWG_LootTransfer_C::OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_LootTransfer.WG_LootTransfer_C.OnFocusReceived");

	UWG_LootTransfer_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_LootTransfer.WG_LootTransfer_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWG_LootTransfer_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_LootTransfer.WG_LootTransfer_C.OnKeyDown");

	UWG_LootTransfer_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_LootTransfer.WG_LootTransfer_C.PressedEquip
// (BlueprintCallable, BlueprintEvent)

void UWG_LootTransfer_C::PressedEquip()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_LootTransfer.WG_LootTransfer_C.PressedEquip");

	UWG_LootTransfer_C_PressedEquip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_LootTransfer.WG_LootTransfer_C.PressedRemove
// (BlueprintCallable, BlueprintEvent)

void UWG_LootTransfer_C::PressedRemove()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_LootTransfer.WG_LootTransfer_C.PressedRemove");

	UWG_LootTransfer_C_PressedRemove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_LootTransfer.WG_LootTransfer_C.PressedBack
// (BlueprintCallable, BlueprintEvent)

void UWG_LootTransfer_C::PressedBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_LootTransfer.WG_LootTransfer_C.PressedBack");

	UWG_LootTransfer_C_PressedBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_LootTransfer.WG_LootTransfer_C.SetupInventories
// (BlueprintCallable, BlueprintEvent)

void UWG_LootTransfer_C::SetupInventories()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_LootTransfer.WG_LootTransfer_C.SetupInventories");

	UWG_LootTransfer_C_SetupInventories_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_LootTransfer.WG_LootTransfer_C.LinkInventoriesWithContainer
// (BlueprintCallable, BlueprintEvent)

void UWG_LootTransfer_C::LinkInventoriesWithContainer()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_LootTransfer.WG_LootTransfer_C.LinkInventoriesWithContainer");

	UWG_LootTransfer_C_LinkInventoriesWithContainer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_LootTransfer.WG_LootTransfer_C.UpdateButtonsInFooter
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_Inventory_Slot_C**   InventorySlotWidget            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_LootTransfer_C::UpdateButtonsInFooter(class UWG_Inventory_Slot_C** InventorySlotWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_LootTransfer.WG_LootTransfer_C.UpdateButtonsInFooter");

	UWG_LootTransfer_C_UpdateButtonsInFooter_Params params;
	params.InventorySlotWidget = InventorySlotWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_LootTransfer.WG_LootTransfer_C.SlotDeselected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_Inventory_Slot_C**   InventorySlotWidget            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_LootTransfer_C::SlotDeselected(class UWG_Inventory_Slot_C** InventorySlotWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_LootTransfer.WG_LootTransfer_C.SlotDeselected");

	UWG_LootTransfer_C_SlotDeselected_Params params;
	params.InventorySlotWidget = InventorySlotWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_LootTransfer.WG_LootTransfer_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_LootTransfer_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_LootTransfer.WG_LootTransfer_C.PreConstruct");

	UWG_LootTransfer_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_LootTransfer.WG_LootTransfer_C.Refresh
// (Public, BlueprintCallable, BlueprintEvent)

void UWG_LootTransfer_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_LootTransfer.WG_LootTransfer_C.Refresh");

	UWG_LootTransfer_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_LootTransfer.WG_LootTransfer_C.OnCargoUnitChanged
// (BlueprintCallable, BlueprintEvent)

void UWG_LootTransfer_C::OnCargoUnitChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_LootTransfer.WG_LootTransfer_C.OnCargoUnitChanged");

	UWG_LootTransfer_C_OnCargoUnitChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_LootTransfer.WG_LootTransfer_C.PressedMove
// (BlueprintCallable, BlueprintEvent)

void UWG_LootTransfer_C::PressedMove()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_LootTransfer.WG_LootTransfer_C.PressedMove");

	UWG_LootTransfer_C_PressedMove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_LootTransfer.WG_LootTransfer_C.PressedChangeCompare
// (BlueprintCallable, BlueprintEvent)

void UWG_LootTransfer_C::PressedChangeCompare()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_LootTransfer.WG_LootTransfer_C.PressedChangeCompare");

	UWG_LootTransfer_C_PressedChangeCompare_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_LootTransfer.WG_LootTransfer_C.FadeInOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsFadeIn                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_LootTransfer_C::FadeInOut(bool* IsFadeIn)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_LootTransfer.WG_LootTransfer_C.FadeInOut");

	UWG_LootTransfer_C_FadeInOut_Params params;
	params.IsFadeIn = IsFadeIn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_LootTransfer.WG_LootTransfer_C.PressedMoveAll
// (BlueprintCallable, BlueprintEvent)

void UWG_LootTransfer_C::PressedMoveAll()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_LootTransfer.WG_LootTransfer_C.PressedMoveAll");

	UWG_LootTransfer_C_PressedMoveAll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_LootTransfer.WG_LootTransfer_C.BndEvt__ButtonMoveAllMouseOnly_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FInputActionButtonInfo* ActionInfo                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UWG_LootTransfer_C::BndEvt__ButtonMoveAllMouseOnly_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature(struct FInputActionButtonInfo* ActionInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_LootTransfer.WG_LootTransfer_C.BndEvt__ButtonMoveAllMouseOnly_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature");

	UWG_LootTransfer_C_BndEvt__ButtonMoveAllMouseOnly_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature_Params params;
	params.ActionInfo = ActionInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_LootTransfer.WG_LootTransfer_C.InitWithInventory
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventory**             InventoryRef                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_LootTransfer_C::InitWithInventory(class UInventory** InventoryRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_LootTransfer.WG_LootTransfer_C.InitWithInventory");

	UWG_LootTransfer_C_InitWithInventory_Params params;
	params.InventoryRef = InventoryRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_LootTransfer.WG_LootTransfer_C.InitWithStationID
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  StationID                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWG_Menu_Ingame_C**      MenuIngameRef                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_LootTransfer_C::InitWithStationID(struct FName* StationID, class UWG_Menu_Ingame_C** MenuIngameRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_LootTransfer.WG_LootTransfer_C.InitWithStationID");

	UWG_LootTransfer_C_InitWithStationID_Params params;
	params.StationID = StationID;
	params.MenuIngameRef = MenuIngameRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_LootTransfer.WG_LootTransfer_C.OnGamepadModeChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsGamepadMode                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_LootTransfer_C::OnGamepadModeChanged(bool* IsGamepadMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_LootTransfer.WG_LootTransfer_C.OnGamepadModeChanged");

	UWG_LootTransfer_C_OnGamepadModeChanged_Params params;
	params.IsGamepadMode = IsGamepadMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_LootTransfer.WG_LootTransfer_C.ExecuteUbergraph_WG_LootTransfer
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_LootTransfer_C::ExecuteUbergraph_WG_LootTransfer(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_LootTransfer.WG_LootTransfer_C.ExecuteUbergraph_WG_LootTransfer");

	UWG_LootTransfer_C_ExecuteUbergraph_WG_LootTransfer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_LootTransfer.WG_LootTransfer_C.OnClosed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_LootTransfer_C**     LootTransferWidget             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_LootTransfer_C::OnClosed__DelegateSignature(class UWG_LootTransfer_C** LootTransferWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_LootTransfer.WG_LootTransfer_C.OnClosed__DelegateSignature");

	UWG_LootTransfer_C_OnClosed__DelegateSignature_Params params;
	params.LootTransferWidget = LootTransferWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

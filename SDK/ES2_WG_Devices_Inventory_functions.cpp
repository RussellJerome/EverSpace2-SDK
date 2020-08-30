// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_Devices_Inventory_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WG_Devices_Inventory.WG_Devices_Inventory_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWG_Devices_Inventory_C::OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Devices_Inventory.WG_Devices_Inventory_C.OnFocusReceived");

	UWG_Devices_Inventory_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_Devices_Inventory.WG_Devices_Inventory_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWG_Devices_Inventory_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Devices_Inventory.WG_Devices_Inventory_C.OnKeyDown");

	UWG_Devices_Inventory_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_Devices_Inventory.WG_Devices_Inventory_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWG_Devices_Inventory_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Devices_Inventory.WG_Devices_Inventory_C.Construct");

	UWG_Devices_Inventory_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Devices_Inventory.WG_Devices_Inventory_C.BndEvt__WG_MenuAction_Button_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FInputActionButtonInfo* ActionInfo                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UWG_Devices_Inventory_C::BndEvt__WG_MenuAction_Button_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature(struct FInputActionButtonInfo* ActionInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Devices_Inventory.WG_Devices_Inventory_C.BndEvt__WG_MenuAction_Button_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature");

	UWG_Devices_Inventory_C_BndEvt__WG_MenuAction_Button_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature_Params params;
	params.ActionInfo = ActionInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Devices_Inventory.WG_Devices_Inventory_C.OnSlotSelected_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_Inventory_Slot_C**   InventorySlotWidget            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_Devices_Inventory_C::OnSlotSelected_Event_1(class UWG_Inventory_Slot_C** InventorySlotWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Devices_Inventory.WG_Devices_Inventory_C.OnSlotSelected_Event_1");

	UWG_Devices_Inventory_C_OnSlotSelected_Event_1_Params params;
	params.InventorySlotWidget = InventorySlotWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Devices_Inventory.WG_Devices_Inventory_C.OnSlotMouseDown_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_Inventory_Slot_C**   Slot                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_Devices_Inventory_C::OnSlotMouseDown_Event_1(class UWG_Inventory_Slot_C** Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Devices_Inventory.WG_Devices_Inventory_C.OnSlotMouseDown_Event_1");

	UWG_Devices_Inventory_C_OnSlotMouseDown_Event_1_Params params;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Devices_Inventory.WG_Devices_Inventory_C.HighlightSelectedDeviceMode
// (BlueprintCallable, BlueprintEvent)

void UWG_Devices_Inventory_C::HighlightSelectedDeviceMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Devices_Inventory.WG_Devices_Inventory_C.HighlightSelectedDeviceMode");

	UWG_Devices_Inventory_C_HighlightSelectedDeviceMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Devices_Inventory.WG_Devices_Inventory_C.ExecuteUbergraph_WG_Devices_Inventory
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Devices_Inventory_C::ExecuteUbergraph_WG_Devices_Inventory(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Devices_Inventory.WG_Devices_Inventory_C.ExecuteUbergraph_WG_Devices_Inventory");

	UWG_Devices_Inventory_C_ExecuteUbergraph_WG_Devices_Inventory_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

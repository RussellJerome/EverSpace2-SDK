// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_Item_Icon_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WG_Item_Icon.WG_Item_Icon_C.FakeAmmoAndConditionValue
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsAmmo                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Colorize                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Item_Icon_C::FakeAmmoAndConditionValue(int* Value, bool* IsAmmo, bool* Colorize)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Item_Icon.WG_Item_Icon_C.FakeAmmoAndConditionValue");

	UWG_Item_Icon_C_FakeAmmoAndConditionValue_Params params;
	params.Value = Value;
	params.IsAmmo = IsAmmo;
	params.Colorize = Colorize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Item_Icon.WG_Item_Icon_C.SetAppearance
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsSelected                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Item_Icon_C::SetAppearance(bool* IsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Item_Icon.WG_Item_Icon_C.SetAppearance");

	UWG_Item_Icon_C_SetAppearance_Params params;
	params.IsSelected = IsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Item_Icon.WG_Item_Icon_C.OnLoaded_8B0EADD14015B180A25263867A077750
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject**                Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Item_Icon_C::OnLoaded_8B0EADD14015B180A25263867A077750(class UObject** Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Item_Icon.WG_Item_Icon_C.OnLoaded_8B0EADD14015B180A25263867A077750");

	UWG_Item_Icon_C_OnLoaded_8B0EADD14015B180A25263867A077750_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Item_Icon.WG_Item_Icon_C.UpdateAmount
// (BlueprintCallable, BlueprintEvent)

void UWG_Item_Icon_C::UpdateAmount()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Item_Icon.WG_Item_Icon_C.UpdateAmount");

	UWG_Item_Icon_C_UpdateAmount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Item_Icon.WG_Item_Icon_C.Init
// (BlueprintCallable, BlueprintEvent)

void UWG_Item_Icon_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Item_Icon.WG_Item_Icon_C.Init");

	UWG_Item_Icon_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Item_Icon.WG_Item_Icon_C.OnDragCancelled
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent*          PointerEvent                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UDragDropOperation**     Operation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Item_Icon_C::OnDragCancelled(struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Item_Icon.WG_Item_Icon_C.OnDragCancelled");

	UWG_Item_Icon_C_OnDragCancelled_Params params;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Item_Icon.WG_Item_Icon_C.PlayItemVanishAnim
// (BlueprintCallable, BlueprintEvent)

void UWG_Item_Icon_C::PlayItemVanishAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Item_Icon.WG_Item_Icon_C.PlayItemVanishAnim");

	UWG_Item_Icon_C_PlayItemVanishAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Item_Icon.WG_Item_Icon_C.VanishAnimFinished
// (BlueprintCallable, BlueprintEvent)

void UWG_Item_Icon_C::VanishAnimFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Item_Icon.WG_Item_Icon_C.VanishAnimFinished");

	UWG_Item_Icon_C_VanishAnimFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Item_Icon.WG_Item_Icon_C.SetDragDropAmount
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Item_Icon_C::SetDragDropAmount(int* Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Item_Icon.WG_Item_Icon_C.SetDragDropAmount");

	UWG_Item_Icon_C_SetDragDropAmount_Params params;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Item_Icon.WG_Item_Icon_C.SetHighlight
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          HighlightOn                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Item_Icon_C::SetHighlight(bool* HighlightOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Item_Icon.WG_Item_Icon_C.SetHighlight");

	UWG_Item_Icon_C_SetHighlight_Params params;
	params.HighlightOn = HighlightOn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Item_Icon.WG_Item_Icon_C.OnSelectionChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsSelected                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Item_Icon_C::OnSelectionChanged(bool* IsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Item_Icon.WG_Item_Icon_C.OnSelectionChanged");

	UWG_Item_Icon_C_OnSelectionChanged_Params params;
	params.IsSelected = IsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Item_Icon.WG_Item_Icon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWG_Item_Icon_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Item_Icon.WG_Item_Icon_C.Construct");

	UWG_Item_Icon_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Item_Icon.WG_Item_Icon_C.ExecuteUbergraph_WG_Item_Icon
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Item_Icon_C::ExecuteUbergraph_WG_Item_Icon(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Item_Icon.WG_Item_Icon_C.ExecuteUbergraph_WG_Item_Icon");

	UWG_Item_Icon_C_ExecuteUbergraph_WG_Item_Icon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Item_Icon.WG_Item_Icon_C.OnVanishAnimFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_Inventory_Slot_C**   InventorySlot                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_Item_Icon_C::OnVanishAnimFinished__DelegateSignature(class UWG_Inventory_Slot_C** InventorySlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Item_Icon.WG_Item_Icon_C.OnVanishAnimFinished__DelegateSignature");

	UWG_Item_Icon_C_OnVanishAnimFinished__DelegateSignature_Params params;
	params.InventorySlot = InventorySlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

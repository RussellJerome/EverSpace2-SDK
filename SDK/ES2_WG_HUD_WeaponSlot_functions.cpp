// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_HUD_WeaponSlot_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WG_HUD_WeaponSlot.WG_HUD_WeaponSlot_C.GetAmmoText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWG_HUD_WeaponSlot_C::GetAmmoText()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_HUD_WeaponSlot.WG_HUD_WeaponSlot_C.GetAmmoText");

	UWG_HUD_WeaponSlot_C_GetAmmoText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_HUD_WeaponSlot.WG_HUD_WeaponSlot_C.OnLoaded_6920190B46B21124A9A431B199E63A32
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject**                Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_HUD_WeaponSlot_C::OnLoaded_6920190B46B21124A9A431B199E63A32(class UObject** Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_HUD_WeaponSlot.WG_HUD_WeaponSlot_C.OnLoaded_6920190B46B21124A9A431B199E63A32");

	UWG_HUD_WeaponSlot_C_OnLoaded_6920190B46B21124A9A431B199E63A32_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_HUD_WeaponSlot.WG_HUD_WeaponSlot_C.SetEquipment
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UItem**                  ItemRef                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AEquipmentBase**         EquipmentRef                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           NumSlots                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           SlotIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_HUD_WeaponSlot_C::SetEquipment(class UItem** ItemRef, class AEquipmentBase** EquipmentRef, int* NumSlots, int* SlotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_HUD_WeaponSlot.WG_HUD_WeaponSlot_C.SetEquipment");

	UWG_HUD_WeaponSlot_C_SetEquipment_Params params;
	params.ItemRef = ItemRef;
	params.EquipmentRef = EquipmentRef;
	params.NumSlots = NumSlots;
	params.SlotIndex = SlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_HUD_WeaponSlot.WG_HUD_WeaponSlot_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_HUD_WeaponSlot_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_HUD_WeaponSlot.WG_HUD_WeaponSlot_C.PreConstruct");

	UWG_HUD_WeaponSlot_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_HUD_WeaponSlot.WG_HUD_WeaponSlot_C.UpdateSlotImages
// (BlueprintCallable, BlueprintEvent)

void UWG_HUD_WeaponSlot_C::UpdateSlotImages()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_HUD_WeaponSlot.WG_HUD_WeaponSlot_C.UpdateSlotImages");

	UWG_HUD_WeaponSlot_C_UpdateSlotImages_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_HUD_WeaponSlot.WG_HUD_WeaponSlot_C.ExecuteUbergraph_WG_HUD_WeaponSlot
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_HUD_WeaponSlot_C::ExecuteUbergraph_WG_HUD_WeaponSlot(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_HUD_WeaponSlot.WG_HUD_WeaponSlot_C.ExecuteUbergraph_WG_HUD_WeaponSlot");

	UWG_HUD_WeaponSlot_C_ExecuteUbergraph_WG_HUD_WeaponSlot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

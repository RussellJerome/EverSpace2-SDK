// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_Equipment_Wheel_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WG_Equipment_Wheel.WG_Equipment_Wheel_C.EmptyEvent
// (BlueprintCallable, BlueprintEvent)

void UWG_Equipment_Wheel_C::EmptyEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Equipment_Wheel.WG_Equipment_Wheel_C.EmptyEvent");

	UWG_Equipment_Wheel_C_EmptyEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Equipment_Wheel.WG_Equipment_Wheel_C.SetEquipment
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UItem*>*          ItemRefs                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool*                          Devices                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          HoldToTrigger                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Equipment_Wheel_C::SetEquipment(TArray<class UItem*>* ItemRefs, bool* Devices, bool* HoldToTrigger)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Equipment_Wheel.WG_Equipment_Wheel_C.SetEquipment");

	UWG_Equipment_Wheel_C_SetEquipment_Params params;
	params.ItemRefs = ItemRefs;
	params.Devices = Devices;
	params.HoldToTrigger = HoldToTrigger;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Equipment_Wheel.WG_Equipment_Wheel_C.SelectEquipment
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Devices                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Equipment_Wheel_C::SelectEquipment(int* Index, bool* Devices)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Equipment_Wheel.WG_Equipment_Wheel_C.SelectEquipment");

	UWG_Equipment_Wheel_C_SelectEquipment_Params params;
	params.Index = Index;
	params.Devices = Devices;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Equipment_Wheel.WG_Equipment_Wheel_C.ExecuteUbergraph_WG_Equipment_Wheel
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Equipment_Wheel_C::ExecuteUbergraph_WG_Equipment_Wheel(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Equipment_Wheel.WG_Equipment_Wheel_C.ExecuteUbergraph_WG_Equipment_Wheel");

	UWG_Equipment_Wheel_C_ExecuteUbergraph_WG_Equipment_Wheel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_Selected_Equipment_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WG_Selected_Equipment.WG_Selected_Equipment_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Selected_Equipment_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Selected_Equipment.WG_Selected_Equipment_C.PreConstruct");

	UWG_Selected_Equipment_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Selected_Equipment.WG_Selected_Equipment_C.SetEquipment
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AEquipmentBase**         EquipmentRef                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UItem**                  ItemRef                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Selected_Equipment_C::SetEquipment(class AEquipmentBase** EquipmentRef, class UItem** ItemRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Selected_Equipment.WG_Selected_Equipment_C.SetEquipment");

	UWG_Selected_Equipment_C_SetEquipment_Params params;
	params.EquipmentRef = EquipmentRef;
	params.ItemRef = ItemRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Selected_Equipment.WG_Selected_Equipment_C.FadeOut
// (BlueprintCallable, BlueprintEvent)

void UWG_Selected_Equipment_C::FadeOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Selected_Equipment.WG_Selected_Equipment_C.FadeOut");

	UWG_Selected_Equipment_C_FadeOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Selected_Equipment.WG_Selected_Equipment_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWG_Selected_Equipment_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Selected_Equipment.WG_Selected_Equipment_C.Construct");

	UWG_Selected_Equipment_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Selected_Equipment.WG_Selected_Equipment_C.ExecuteUbergraph_WG_Selected_Equipment
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Selected_Equipment_C::ExecuteUbergraph_WG_Selected_Equipment(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Selected_Equipment.WG_Selected_Equipment_C.ExecuteUbergraph_WG_Selected_Equipment");

	UWG_Selected_Equipment_C_ExecuteUbergraph_WG_Selected_Equipment_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_Consumable_Energy_Injector_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Consumable_Energy_Injector.BP_Consumable_Energy_Injector_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Consumable_Energy_Injector_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Consumable_Energy_Injector.BP_Consumable_Energy_Injector_C.ReceiveBeginPlay");

	ABP_Consumable_Energy_Injector_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Consumable_Energy_Injector.BP_Consumable_Energy_Injector_C.ExecuteUbergraph_BP_Consumable_Energy_Injector
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Consumable_Energy_Injector_C::ExecuteUbergraph_BP_Consumable_Energy_Injector(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Consumable_Energy_Injector.BP_Consumable_Energy_Injector_C.ExecuteUbergraph_BP_Consumable_Energy_Injector");

	ABP_Consumable_Energy_Injector_C_ExecuteUbergraph_BP_Consumable_Energy_Injector_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_Consumable_Nanobots_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Consumable_Nanobots.BP_Consumable_Nanobots_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Consumable_Nanobots_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Consumable_Nanobots.BP_Consumable_Nanobots_C.ReceiveBeginPlay");

	ABP_Consumable_Nanobots_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Consumable_Nanobots.BP_Consumable_Nanobots_C.ExecuteUbergraph_BP_Consumable_Nanobots
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Consumable_Nanobots_C::ExecuteUbergraph_BP_Consumable_Nanobots(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Consumable_Nanobots.BP_Consumable_Nanobots_C.ExecuteUbergraph_BP_Consumable_Nanobots");

	ABP_Consumable_Nanobots_C_ExecuteUbergraph_BP_Consumable_Nanobots_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

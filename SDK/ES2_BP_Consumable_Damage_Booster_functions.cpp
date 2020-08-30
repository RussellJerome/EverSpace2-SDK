// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_Consumable_Damage_Booster_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Consumable_Damage_Booster.BP_Consumable_Damage_Booster_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Consumable_Damage_Booster_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Consumable_Damage_Booster.BP_Consumable_Damage_Booster_C.ReceiveBeginPlay");

	ABP_Consumable_Damage_Booster_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Consumable_Damage_Booster.BP_Consumable_Damage_Booster_C.ExecuteUbergraph_BP_Consumable_Damage_Booster
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Consumable_Damage_Booster_C::ExecuteUbergraph_BP_Consumable_Damage_Booster(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Consumable_Damage_Booster.BP_Consumable_Damage_Booster_C.ExecuteUbergraph_BP_Consumable_Damage_Booster");

	ABP_Consumable_Damage_Booster_C_ExecuteUbergraph_BP_Consumable_Damage_Booster_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

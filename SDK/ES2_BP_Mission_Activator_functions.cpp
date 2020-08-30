// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_Mission_Activator_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Mission_Activator.BP_Mission_Activator_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Mission_Activator_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Mission_Activator.BP_Mission_Activator_C.ReceiveBeginPlay");

	ABP_Mission_Activator_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Mission_Activator.BP_Mission_Activator_C.SpawnOrActivateMission
// (BlueprintCallable, BlueprintEvent)

void ABP_Mission_Activator_C::SpawnOrActivateMission()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Mission_Activator.BP_Mission_Activator_C.SpawnOrActivateMission");

	ABP_Mission_Activator_C_SpawnOrActivateMission_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Mission_Activator.BP_Mission_Activator_C.ExecuteUbergraph_BP_Mission_Activator
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Mission_Activator_C::ExecuteUbergraph_BP_Mission_Activator(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Mission_Activator.BP_Mission_Activator_C.ExecuteUbergraph_BP_Mission_Activator");

	ABP_Mission_Activator_C_ExecuteUbergraph_BP_Mission_Activator_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

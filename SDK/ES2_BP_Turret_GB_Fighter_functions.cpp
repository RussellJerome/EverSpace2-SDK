// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_Turret_GB_Fighter_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Turret_GB_Fighter.BP_Turret_GB_Fighter_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Turret_GB_Fighter_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Turret_GB_Fighter.BP_Turret_GB_Fighter_C.ReceiveBeginPlay");

	ABP_Turret_GB_Fighter_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Turret_GB_Fighter.BP_Turret_GB_Fighter_C.ExecuteUbergraph_BP_Turret_GB_Fighter
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Turret_GB_Fighter_C::ExecuteUbergraph_BP_Turret_GB_Fighter(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Turret_GB_Fighter.BP_Turret_GB_Fighter_C.ExecuteUbergraph_BP_Turret_GB_Fighter");

	ABP_Turret_GB_Fighter_C_ExecuteUbergraph_BP_Turret_GB_Fighter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

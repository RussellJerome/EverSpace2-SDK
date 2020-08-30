// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_DroneBase_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_DroneBase.BP_DroneBase_C.SpawnExplosion
// (BlueprintCallable, BlueprintEvent)

void ABP_DroneBase_C::SpawnExplosion()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DroneBase.BP_DroneBase_C.SpawnExplosion");

	ABP_DroneBase_C_SpawnExplosion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DroneBase.BP_DroneBase_C.ExecuteUbergraph_BP_DroneBase
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DroneBase_C::ExecuteUbergraph_BP_DroneBase(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DroneBase.BP_DroneBase_C.ExecuteUbergraph_BP_DroneBase");

	ABP_DroneBase_C_ExecuteUbergraph_BP_DroneBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

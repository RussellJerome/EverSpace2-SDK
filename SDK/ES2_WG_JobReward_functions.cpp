// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_JobReward_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WG_JobReward.WG_JobReward_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWG_JobReward_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_JobReward.WG_JobReward_C.Construct");

	UWG_JobReward_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_JobReward.WG_JobReward_C.ExecuteUbergraph_WG_JobReward
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_JobReward_C::ExecuteUbergraph_WG_JobReward(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_JobReward.WG_JobReward_C.ExecuteUbergraph_WG_JobReward");

	UWG_JobReward_C_ExecuteUbergraph_WG_JobReward_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

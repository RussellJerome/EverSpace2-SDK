// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_Outlaw_Madcap_Pod_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Outlaw_Madcap_Pod.BP_Outlaw_Madcap_Pod_C.OnAiFleeFromTurnfight
// (Event, Public, BlueprintEvent)

void ABP_Outlaw_Madcap_Pod_C::OnAiFleeFromTurnfight()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Outlaw_Madcap_Pod.BP_Outlaw_Madcap_Pod_C.OnAiFleeFromTurnfight");

	ABP_Outlaw_Madcap_Pod_C_OnAiFleeFromTurnfight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Outlaw_Madcap_Pod.BP_Outlaw_Madcap_Pod_C.ExecuteUbergraph_BP_Outlaw_Madcap_Pod
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Outlaw_Madcap_Pod_C::ExecuteUbergraph_BP_Outlaw_Madcap_Pod(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Outlaw_Madcap_Pod.BP_Outlaw_Madcap_Pod_C.ExecuteUbergraph_BP_Outlaw_Madcap_Pod");

	ABP_Outlaw_Madcap_Pod_C_ExecuteUbergraph_BP_Outlaw_Madcap_Pod_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

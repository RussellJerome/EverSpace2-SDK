// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_Outlaw_Madcap_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Outlaw_Madcap.BP_Outlaw_Madcap_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Outlaw_Madcap_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Outlaw_Madcap.BP_Outlaw_Madcap_C.UserConstructionScript");

	ABP_Outlaw_Madcap_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Outlaw_Madcap.BP_Outlaw_Madcap_C.OnAiFleeFromTurnfight
// (Event, Public, BlueprintEvent)

void ABP_Outlaw_Madcap_C::OnAiFleeFromTurnfight()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Outlaw_Madcap.BP_Outlaw_Madcap_C.OnAiFleeFromTurnfight");

	ABP_Outlaw_Madcap_C_OnAiFleeFromTurnfight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Outlaw_Madcap.BP_Outlaw_Madcap_C.FinalExplosion
// (BlueprintCallable, BlueprintEvent)

void ABP_Outlaw_Madcap_C::FinalExplosion()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Outlaw_Madcap.BP_Outlaw_Madcap_C.FinalExplosion");

	ABP_Outlaw_Madcap_C_FinalExplosion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Outlaw_Madcap.BP_Outlaw_Madcap_C.Explode
// (BlueprintCallable, BlueprintEvent)

void ABP_Outlaw_Madcap_C::Explode()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Outlaw_Madcap.BP_Outlaw_Madcap_C.Explode");

	ABP_Outlaw_Madcap_C_Explode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Outlaw_Madcap.BP_Outlaw_Madcap_C.ExecuteUbergraph_BP_Outlaw_Madcap
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Outlaw_Madcap_C::ExecuteUbergraph_BP_Outlaw_Madcap(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Outlaw_Madcap.BP_Outlaw_Madcap_C.ExecuteUbergraph_BP_Outlaw_Madcap");

	ABP_Outlaw_Madcap_C_ExecuteUbergraph_BP_Outlaw_Madcap_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

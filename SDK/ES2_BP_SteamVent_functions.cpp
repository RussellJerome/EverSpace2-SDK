// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_SteamVent_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_SteamVent.BP_SteamVent_C.SetEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bEnabled                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SteamVent_C::SetEnabled(bool* bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SteamVent.BP_SteamVent_C.SetEnabled");

	ABP_SteamVent_C_SetEnabled_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SteamVent.BP_SteamVent_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_SteamVent_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SteamVent.BP_SteamVent_C.UserConstructionScript");

	ABP_SteamVent_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

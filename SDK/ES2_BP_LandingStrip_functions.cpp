// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_LandingStrip_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_LandingStrip.BP_LandingStrip_C.CreateLight
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_LandingStrip_C::CreateLight()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LandingStrip.BP_LandingStrip_C.CreateLight");

	ABP_LandingStrip_C_CreateLight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LandingStrip.BP_LandingStrip_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_LandingStrip_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LandingStrip.BP_LandingStrip_C.UserConstructionScript");

	ABP_LandingStrip_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

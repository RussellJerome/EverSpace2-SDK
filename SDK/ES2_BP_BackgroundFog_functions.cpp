// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_BackgroundFog_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_BackgroundFog.BP_BackgroundFog_C.Update
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BackgroundFog_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BackgroundFog.BP_BackgroundFog_C.Update");

	ABP_BackgroundFog_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BackgroundFog.BP_BackgroundFog_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BackgroundFog_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BackgroundFog.BP_BackgroundFog_C.UserConstructionScript");

	ABP_BackgroundFog_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

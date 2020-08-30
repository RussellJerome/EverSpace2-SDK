// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_Skybox_Nebula_Local_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Skybox_Nebula_Local.BP_Skybox_Nebula_Local_C.Update
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Skybox_Nebula_Local_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Skybox_Nebula_Local.BP_Skybox_Nebula_Local_C.Update");

	ABP_Skybox_Nebula_Local_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Skybox_Nebula_Local.BP_Skybox_Nebula_Local_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Skybox_Nebula_Local_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Skybox_Nebula_Local.BP_Skybox_Nebula_Local_C.UserConstructionScript");

	ABP_Skybox_Nebula_Local_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

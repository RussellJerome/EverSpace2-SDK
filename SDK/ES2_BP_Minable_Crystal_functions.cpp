// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_Minable_Crystal_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Minable_Crystal.BP_Minable_Crystal_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Minable_Crystal_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Minable_Crystal.BP_Minable_Crystal_C.UserConstructionScript");

	ABP_Minable_Crystal_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

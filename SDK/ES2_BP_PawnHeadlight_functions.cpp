// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_PawnHeadlight_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_PawnHeadlight.BP_PawnHeadlight_C.SetEnabled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PawnHeadlight_C::SetEnabled(bool* Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PawnHeadlight.BP_PawnHeadlight_C.SetEnabled");

	ABP_PawnHeadlight_C_SetEnabled_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PawnHeadlight.BP_PawnHeadlight_C.ExecuteUbergraph_BP_PawnHeadlight
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PawnHeadlight_C::ExecuteUbergraph_BP_PawnHeadlight(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PawnHeadlight.BP_PawnHeadlight_C.ExecuteUbergraph_BP_PawnHeadlight");

	ABP_PawnHeadlight_C_ExecuteUbergraph_BP_PawnHeadlight_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

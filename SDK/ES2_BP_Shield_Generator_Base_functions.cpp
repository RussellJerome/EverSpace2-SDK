// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_Shield_Generator_Base_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Shield_Generator_Base.BP_Shield_Generator_Base_C.DestroyWeakspot
// (BlueprintCallable, BlueprintEvent)

void ABP_Shield_Generator_Base_C::DestroyWeakspot()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Shield_Generator_Base.BP_Shield_Generator_Base_C.DestroyWeakspot");

	ABP_Shield_Generator_Base_C_DestroyWeakspot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Shield_Generator_Base.BP_Shield_Generator_Base_C.ExecuteUbergraph_BP_Shield_Generator_Base
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Shield_Generator_Base_C::ExecuteUbergraph_BP_Shield_Generator_Base(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Shield_Generator_Base.BP_Shield_Generator_Base_C.ExecuteUbergraph_BP_Shield_Generator_Base");

	ABP_Shield_Generator_Base_C_ExecuteUbergraph_BP_Shield_Generator_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_Outlaw_Scout_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Outlaw_Scout.BP_Outlaw_Scout_C.CanDoBarrelRoll
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_Outlaw_Scout_C::CanDoBarrelRoll()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Outlaw_Scout.BP_Outlaw_Scout_C.CanDoBarrelRoll");

	ABP_Outlaw_Scout_C_CanDoBarrelRoll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BTS_GetJumpTarget_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BTS_GetJumpTarget.BTS_GetJumpTarget_C.ReceiveSearchStart
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor**                 OwnerActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTS_GetJumpTarget_C::ReceiveSearchStart(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTS_GetJumpTarget.BTS_GetJumpTarget_C.ReceiveSearchStart");

	UBTS_GetJumpTarget_C_ReceiveSearchStart_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTS_GetJumpTarget.BTS_GetJumpTarget_C.ExecuteUbergraph_BTS_GetJumpTarget
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTS_GetJumpTarget_C::ExecuteUbergraph_BTS_GetJumpTarget(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTS_GetJumpTarget.BTS_GetJumpTarget_C.ExecuteUbergraph_BTS_GetJumpTarget");

	UBTS_GetJumpTarget_C_ExecuteUbergraph_BTS_GetJumpTarget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

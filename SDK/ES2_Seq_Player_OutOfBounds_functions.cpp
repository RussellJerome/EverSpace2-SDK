// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_Seq_Player_OutOfBounds_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Seq_Player_OutOfBounds.SequenceDirector_C.ResetCameraToPlayer
// (Public, BlueprintCallable, BlueprintEvent)

void USequenceDirector_C::ResetCameraToPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Seq_Player_OutOfBounds.SequenceDirector_C.ResetCameraToPlayer");

	USequenceDirector_C_ResetCameraToPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Seq_Player_OutOfBounds.SequenceDirector_C.ResetBinding
// (Public, BlueprintCallable, BlueprintEvent)

void USequenceDirector_C::ResetBinding()
{
	static auto fn = UObject::FindObject<UFunction>("Function Seq_Player_OutOfBounds.SequenceDirector_C.ResetBinding");

	USequenceDirector_C_ResetBinding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

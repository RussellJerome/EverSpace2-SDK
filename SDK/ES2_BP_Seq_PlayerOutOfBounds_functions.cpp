// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_Seq_PlayerOutOfBounds_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Seq_PlayerOutOfBounds.BP_Seq_PlayerOutOfBounds_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Seq_PlayerOutOfBounds_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Seq_PlayerOutOfBounds.BP_Seq_PlayerOutOfBounds_C.ReceiveBeginPlay");

	ABP_Seq_PlayerOutOfBounds_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Seq_PlayerOutOfBounds.BP_Seq_PlayerOutOfBounds_C.ExecuteUbergraph_BP_Seq_PlayerOutOfBounds
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Seq_PlayerOutOfBounds_C::ExecuteUbergraph_BP_Seq_PlayerOutOfBounds(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Seq_PlayerOutOfBounds.BP_Seq_PlayerOutOfBounds_C.ExecuteUbergraph_BP_Seq_PlayerOutOfBounds");

	ABP_Seq_PlayerOutOfBounds_C_ExecuteUbergraph_BP_Seq_PlayerOutOfBounds_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

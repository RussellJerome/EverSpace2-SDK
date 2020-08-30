// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_Pawn_GameOver_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Pawn_GameOver.BP_Pawn_GameOver_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Pawn_GameOver_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn_GameOver.BP_Pawn_GameOver_C.ReceiveTick");

	ABP_Pawn_GameOver_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn_GameOver.BP_Pawn_GameOver_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Pawn_GameOver_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn_GameOver.BP_Pawn_GameOver_C.ReceiveBeginPlay");

	ABP_Pawn_GameOver_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn_GameOver.BP_Pawn_GameOver_C.OnPawnDestroyedAfterExplostion
// (BlueprintCallable, BlueprintEvent)

void ABP_Pawn_GameOver_C::OnPawnDestroyedAfterExplostion()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn_GameOver.BP_Pawn_GameOver_C.OnPawnDestroyedAfterExplostion");

	ABP_Pawn_GameOver_C_OnPawnDestroyedAfterExplostion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn_GameOver.BP_Pawn_GameOver_C.ExecuteUbergraph_BP_Pawn_GameOver
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Pawn_GameOver_C::ExecuteUbergraph_BP_Pawn_GameOver(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn_GameOver.BP_Pawn_GameOver_C.ExecuteUbergraph_BP_Pawn_GameOver");

	ABP_Pawn_GameOver_C_ExecuteUbergraph_BP_Pawn_GameOver_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

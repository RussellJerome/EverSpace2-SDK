#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_Pawn_GameOver_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Pawn_GameOver.BP_Pawn_GameOver_C.ReceiveTick
struct ABP_Pawn_GameOver_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Pawn_GameOver.BP_Pawn_GameOver_C.ReceiveBeginPlay
struct ABP_Pawn_GameOver_C_ReceiveBeginPlay_Params
{
};

// Function BP_Pawn_GameOver.BP_Pawn_GameOver_C.OnPawnDestroyedAfterExplostion
struct ABP_Pawn_GameOver_C_OnPawnDestroyedAfterExplostion_Params
{
};

// Function BP_Pawn_GameOver.BP_Pawn_GameOver_C.ExecuteUbergraph_BP_Pawn_GameOver
struct ABP_Pawn_GameOver_C_ExecuteUbergraph_BP_Pawn_GameOver_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

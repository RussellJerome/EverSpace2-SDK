#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_Pawn_ActionFreeze_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Pawn_ActionFreeze.BP_Pawn_ActionFreeze_C.InpActEvt_LeftAlt_K2Node_InputKeyEvent_2
struct ABP_Pawn_ActionFreeze_C_InpActEvt_LeftAlt_K2Node_InputKeyEvent_2_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_Pawn_ActionFreeze.BP_Pawn_ActionFreeze_C.InpActEvt_LeftAlt_K2Node_InputKeyEvent_1
struct ABP_Pawn_ActionFreeze_C_InpActEvt_LeftAlt_K2Node_InputKeyEvent_1_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_Pawn_ActionFreeze.BP_Pawn_ActionFreeze_C.ReceiveTick
struct ABP_Pawn_ActionFreeze_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Pawn_ActionFreeze.BP_Pawn_ActionFreeze_C.ReceiveBeginPlay
struct ABP_Pawn_ActionFreeze_C_ReceiveBeginPlay_Params
{
};

// Function BP_Pawn_ActionFreeze.BP_Pawn_ActionFreeze_C.SetTargetPawn
struct ABP_Pawn_ActionFreeze_C_SetTargetPawn_Params
{
	class APawn**                                      Pawn;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Pawn_ActionFreeze.BP_Pawn_ActionFreeze_C.SwitchCamera
struct ABP_Pawn_ActionFreeze_C_SwitchCamera_Params
{
};

// Function BP_Pawn_ActionFreeze.BP_Pawn_ActionFreeze_C.ReceiveEndPlay
struct ABP_Pawn_ActionFreeze_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Pawn_ActionFreeze.BP_Pawn_ActionFreeze_C.ExecuteUbergraph_BP_Pawn_ActionFreeze
struct ABP_Pawn_ActionFreeze_C_ExecuteUbergraph_BP_Pawn_ActionFreeze_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

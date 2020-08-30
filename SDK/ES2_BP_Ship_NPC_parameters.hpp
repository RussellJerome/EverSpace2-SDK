#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_Ship_NPC_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Ship_NPC.BP_Ship_NPC_C.BroadcastInvestigate
struct ABP_Ship_NPC_C_BroadcastInvestigate_Params
{
	class AActor**                                     InstigatorActor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Ship_NPC.BP_Ship_NPC_C.AI_Tick
struct ABP_Ship_NPC_C_AI_Tick_Params
{
};

// Function BP_Ship_NPC.BP_Ship_NPC_C.OnAiBeginAttack
struct ABP_Ship_NPC_C_OnAiBeginAttack_Params
{
};

// Function BP_Ship_NPC.BP_Ship_NPC_C.AI_StopBoosting
struct ABP_Ship_NPC_C_AI_StopBoosting_Params
{
};

// Function BP_Ship_NPC.BP_Ship_NPC_C.OnAiFleeFromTurnfight
struct ABP_Ship_NPC_C_OnAiFleeFromTurnfight_Params
{
};

// Function BP_Ship_NPC.BP_Ship_NPC_C.BndEvt__Health_K2Node_ComponentBoundEvent_0_OnHealthDepletedDelegate__DelegateSignature
struct ABP_Ship_NPC_C_BndEvt__Health_K2Node_ComponentBoundEvent_0_OnHealthDepletedDelegate__DelegateSignature_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                DamageInstigator;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DamageAmount;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Ship_NPC.BP_Ship_NPC_C.ReceiveAnyDamage
struct ABP_Ship_NPC_C_ReceiveAnyDamage_Params
{
	float*                                             Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Ship_NPC.BP_Ship_NPC_C.OnAiBeginBarrelRoll
struct ABP_Ship_NPC_C_OnAiBeginBarrelRoll_Params
{
};

// Function BP_Ship_NPC.BP_Ship_NPC_C.AI_StartBoosting
struct ABP_Ship_NPC_C_AI_StartBoosting_Params
{
	float*                                             DurationMin;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DurationMax;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Roll;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Ship_NPC.BP_Ship_NPC_C.OnAiEndBarrelRoll
struct ABP_Ship_NPC_C_OnAiEndBarrelRoll_Params
{
};

// Function BP_Ship_NPC.BP_Ship_NPC_C.OnAiNoLeader
struct ABP_Ship_NPC_C_OnAiNoLeader_Params
{
};

// Function BP_Ship_NPC.BP_Ship_NPC_C.OnAiBeginIsTailed
struct ABP_Ship_NPC_C_OnAiBeginIsTailed_Params
{
};

// Function BP_Ship_NPC.BP_Ship_NPC_C.OnAiEndIsTailed
struct ABP_Ship_NPC_C_OnAiEndIsTailed_Params
{
};

// Function BP_Ship_NPC.BP_Ship_NPC_C.OnAiEndGainDistance
struct ABP_Ship_NPC_C_OnAiEndGainDistance_Params
{
};

// Function BP_Ship_NPC.BP_Ship_NPC_C.OnNpcJumpIn
struct ABP_Ship_NPC_C_OnNpcJumpIn_Params
{
};

// Function BP_Ship_NPC.BP_Ship_NPC_C.OnAiBeginGainDistance
struct ABP_Ship_NPC_C_OnAiBeginGainDistance_Params
{
};

// Function BP_Ship_NPC.BP_Ship_NPC_C.OnNPCJumpAway
struct ABP_Ship_NPC_C_OnNPCJumpAway_Params
{
	TEnumAsByte<EJumpMethod>*                          JumpMethod;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Ship_NPC.BP_Ship_NPC_C.OnAiEndFlee
struct ABP_Ship_NPC_C_OnAiEndFlee_Params
{
};

// Function BP_Ship_NPC.BP_Ship_NPC_C.OnJumpInCompleted
struct ABP_Ship_NPC_C_OnJumpInCompleted_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Ship_NPC.BP_Ship_NPC_C.OnAiBeginFlee
struct ABP_Ship_NPC_C_OnAiBeginFlee_Params
{
};

// Function BP_Ship_NPC.BP_Ship_NPC_C.ReceiveBeginPlay
struct ABP_Ship_NPC_C_ReceiveBeginPlay_Params
{
};

// Function BP_Ship_NPC.BP_Ship_NPC_C.ReceiveTick
struct ABP_Ship_NPC_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Ship_NPC.BP_Ship_NPC_C.ForwardOnNPCJumpAway
struct ABP_Ship_NPC_C_ForwardOnNPCJumpAway_Params
{
	TEnumAsByte<EJumpMethod>*                          JumpMethod;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Ship_NPC.BP_Ship_NPC_C.ForwardOnJumpInCompleted
struct ABP_Ship_NPC_C_ForwardOnJumpInCompleted_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Ship_NPC.BP_Ship_NPC_C.ExecuteUbergraph_BP_Ship_NPC
struct ABP_Ship_NPC_C_ExecuteUbergraph_BP_Ship_NPC_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Ship_NPC.BP_Ship_NPC_C.JumpInFinished__DelegateSignature
struct ABP_Ship_NPC_C_JumpInFinished__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

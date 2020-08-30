#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_ProximityMine_Base_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_ProximityMine_Base.BP_ProximityMine_Base_C.OffsiteSimulate
struct ABP_ProximityMine_Base_C_OffsiteSimulate_Params
{
	float*                                             TimePassed;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_ProximityMine_Base.BP_ProximityMine_Base_C.RestoreState
struct ABP_ProximityMine_Base_C_RestoreState_Params
{
	TMap<struct FName, struct FGenericSaveDataBuffer>* GenericSaveDataMap;                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_ProximityMine_Base.BP_ProximityMine_Base_C.SaveState
struct ABP_ProximityMine_Base_C_SaveState_Params
{
	TMap<struct FName, struct FGenericSaveDataBuffer>  GenericSaveDataMap;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_ProximityMine_Base.BP_ProximityMine_Base_C.SetArmed
struct ABP_ProximityMine_Base_C_SetArmed_Params
{
	bool*                                              Armed;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ProximityMine_Base.BP_ProximityMine_Base_C.ActorArrayContainsEnemy
struct ABP_ProximityMine_Base_C_ActorArrayContainsEnemy_Params
{
	TArray<class AActor*>                              Actors;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               EnemyFound;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ProximityMine_Base.BP_ProximityMine_Base_C.UserConstructionScript
struct ABP_ProximityMine_Base_C_UserConstructionScript_Params
{
};

// Function BP_ProximityMine_Base.BP_ProximityMine_Base_C.BndEvt__TriggerRadius_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_ProximityMine_Base_C_BndEvt__TriggerRadius_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent**                        OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_ProximityMine_Base.BP_ProximityMine_Base_C.CheckForOverlaps
struct ABP_ProximityMine_Base_C_CheckForOverlaps_Params
{
};

// Function BP_ProximityMine_Base.BP_ProximityMine_Base_C.ReceiveBeginPlay
struct ABP_ProximityMine_Base_C_ReceiveBeginPlay_Params
{
};

// Function BP_ProximityMine_Base.BP_ProximityMine_Base_C.TriggerMineExplosion
struct ABP_ProximityMine_Base_C_TriggerMineExplosion_Params
{
};

// Function BP_ProximityMine_Base.BP_ProximityMine_Base_C.BndEvt__Health_K2Node_ComponentBoundEvent_507_OnHealthDepletedDelegate__DelegateSignature
struct ABP_ProximityMine_Base_C_BndEvt__Health_K2Node_ComponentBoundEvent_507_OnHealthDepletedDelegate__DelegateSignature_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                DamageInstigator;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DamageAmount;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ProximityMine_Base.BP_ProximityMine_Base_C.MinePickedUp
struct ABP_ProximityMine_Base_C_MinePickedUp_Params
{
	class AActor**                                     TheActor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ProximityMine_Base.BP_ProximityMine_Base_C.MineReleased
struct ABP_ProximityMine_Base_C_MineReleased_Params
{
	class AActor**                                     TheActor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ProximityMine_Base.BP_ProximityMine_Base_C.ApplyEMP
struct ABP_ProximityMine_Base_C_ApplyEMP_Params
{
	class AActor**                                     Instigator;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ProximityMine_Base.BP_ProximityMine_Base_C.RemoveEMP
struct ABP_ProximityMine_Base_C_RemoveEMP_Params
{
};

// Function BP_ProximityMine_Base.BP_ProximityMine_Base_C.Explode
struct ABP_ProximityMine_Base_C_Explode_Params
{
};

// Function BP_ProximityMine_Base.BP_ProximityMine_Base_C.ArmDelayed
struct ABP_ProximityMine_Base_C_ArmDelayed_Params
{
	float*                                             Delay;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ProximityMine_Base.BP_ProximityMine_Base_C.ArmAfterDelay
struct ABP_ProximityMine_Base_C_ArmAfterDelay_Params
{
};

// Function BP_ProximityMine_Base.BP_ProximityMine_Base_C.ExecuteUbergraph_BP_ProximityMine_Base
struct ABP_ProximityMine_Base_C_ExecuteUbergraph_BP_ProximityMine_Base_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ProximityMine_Base.BP_ProximityMine_Base_C.MineDestroyed__DelegateSignature
struct ABP_ProximityMine_Base_C_MineDestroyed__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

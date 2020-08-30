#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_Weakspot_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Weakspot.BP_Weakspot_C.OffsiteSimulate
struct ABP_Weakspot_C_OffsiteSimulate_Params
{
	float*                                             TimePassed;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Weakspot.BP_Weakspot_C.RestoreState
struct ABP_Weakspot_C_RestoreState_Params
{
	TMap<struct FName, struct FGenericSaveDataBuffer>* GenericSaveDataMap;                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Weakspot.BP_Weakspot_C.SaveState
struct ABP_Weakspot_C_SaveState_Params
{
	TMap<struct FName, struct FGenericSaveDataBuffer>  GenericSaveDataMap;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Weakspot.BP_Weakspot_C.GetAverageBoundsOrigin
struct ABP_Weakspot_C_GetAverageBoundsOrigin_Params
{
	struct FVector                                     AverageOrigin;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Weakspot.BP_Weakspot_C.SafeGetControlledPawn
struct ABP_Weakspot_C_SafeGetControlledPawn_Params
{
	class AController**                                Controller;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APawn*                                       Pawn;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Weakspot.BP_Weakspot_C.IsDestroyed
struct ABP_Weakspot_C_IsDestroyed_Params
{
	bool                                               Destroyed;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Weakspot.BP_Weakspot_C.UserConstructionScript
struct ABP_Weakspot_C_UserConstructionScript_Params
{
};

// Function BP_Weakspot.BP_Weakspot_C.ReceiveBeginPlay
struct ABP_Weakspot_C_ReceiveBeginPlay_Params
{
};

// Function BP_Weakspot.BP_Weakspot_C.BndEvt__Health_K2Node_ComponentBoundEvent_153_OnHealthDepletedDelegate__DelegateSignature
struct ABP_Weakspot_C_BndEvt__Health_K2Node_ComponentBoundEvent_153_OnHealthDepletedDelegate__DelegateSignature_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                DamageInstigator;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DamageAmount;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Weakspot.BP_Weakspot_C.Explode
struct ABP_Weakspot_C_Explode_Params
{
};

// Function BP_Weakspot.BP_Weakspot_C.ReceivePointDamage
struct ABP_Weakspot_C_ReceivePointDamage_Params
{
	float*                                             Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    HitLocation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    HitNormal;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        HitComponent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName*                                      BoneName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    ShotFromDirection;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 HitInfo;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_Weakspot.BP_Weakspot_C.ReceiveRadialDamage
struct ABP_Weakspot_C_ReceiveRadialDamage_Params
{
	float*                                             DamageReceived;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Origin;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 HitInfo;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Weakspot.BP_Weakspot_C.DestroyWeakspot
struct ABP_Weakspot_C_DestroyWeakspot_Params
{
};

// Function BP_Weakspot.BP_Weakspot_C.SetDestructionDamage
struct ABP_Weakspot_C_SetDestructionDamage_Params
{
	float*                                             DestructionDamage;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Weakspot.BP_Weakspot_C.ExecuteUbergraph_BP_Weakspot
struct ABP_Weakspot_C_ExecuteUbergraph_BP_Weakspot_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Weakspot.BP_Weakspot_C.DestroyedDispatcher__DelegateSignature
struct ABP_Weakspot_C_DestroyedDispatcher__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

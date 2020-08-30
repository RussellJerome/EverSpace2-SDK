#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_CollisionDamageComponent_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_CollisionDamageComponent.BP_CollisionDamageComponent_C.ReceiveBeginPlay
struct UBP_CollisionDamageComponent_C_ReceiveBeginPlay_Params
{
};

// Function BP_CollisionDamageComponent.BP_CollisionDamageComponent_C.CollisionDamageHitEvent
struct UBP_CollisionDamageComponent_C_CollisionDamageHitEvent_Params
{
	class AActor**                                     SelfActor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    NormalImpulse;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_CollisionDamageComponent.BP_CollisionDamageComponent_C.TriggerGracePeriod
struct UBP_CollisionDamageComponent_C_TriggerGracePeriod_Params
{
};

// Function BP_CollisionDamageComponent.BP_CollisionDamageComponent_C.UpdateCollisionSound
struct UBP_CollisionDamageComponent_C_UpdateCollisionSound_Params
{
};

// Function BP_CollisionDamageComponent.BP_CollisionDamageComponent_C.ReceiveEndPlay
struct UBP_CollisionDamageComponent_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CollisionDamageComponent.BP_CollisionDamageComponent_C.ExecuteUbergraph_BP_CollisionDamageComponent
struct UBP_CollisionDamageComponent_C_ExecuteUbergraph_BP_CollisionDamageComponent_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

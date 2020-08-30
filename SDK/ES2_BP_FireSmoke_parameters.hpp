#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_FireSmoke_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_FireSmoke.BP_FireSmoke_C.UpdateParameters
struct ABP_FireSmoke_C_UpdateParameters_Params
{
};

// Function BP_FireSmoke.BP_FireSmoke_C.UserConstructionScript
struct ABP_FireSmoke_C_UserConstructionScript_Params
{
};

// Function BP_FireSmoke.BP_FireSmoke_C.ReceiveTick
struct ABP_FireSmoke_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FireSmoke.BP_FireSmoke_C.ReceiveBeginPlay
struct ABP_FireSmoke_C_ReceiveBeginPlay_Params
{
};

// Function BP_FireSmoke.BP_FireSmoke_C.Destroy
struct ABP_FireSmoke_C_Destroy_Params
{
	class UParticleSystemComponent**                   PSystem;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_FireSmoke.BP_FireSmoke_C.ParentActorDestroyed
struct ABP_FireSmoke_C_ParentActorDestroyed_Params
{
	class AActor**                                     DestroyedActor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FireSmoke.BP_FireSmoke_C.ExecuteUbergraph_BP_FireSmoke
struct ABP_FireSmoke_C_ExecuteUbergraph_BP_FireSmoke_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FireSmoke.BP_FireSmoke_C.Finished__DelegateSignature
struct ABP_FireSmoke_C_Finished__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

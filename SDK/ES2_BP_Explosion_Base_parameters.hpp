#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_Explosion_Base_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Explosion_Base.BP_Explosion_Base_C.UserConstructionScript
struct ABP_Explosion_Base_C_UserConstructionScript_Params
{
};

// Function BP_Explosion_Base.BP_Explosion_Base_C.ReceiveBeginPlay
struct ABP_Explosion_Base_C_ReceiveBeginPlay_Params
{
};

// Function BP_Explosion_Base.BP_Explosion_Base_C.ReceiveTick
struct ABP_Explosion_Base_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Explosion_Base.BP_Explosion_Base_C.FireParticlesFinished
struct ABP_Explosion_Base_C_FireParticlesFinished_Params
{
};

// Function BP_Explosion_Base.BP_Explosion_Base_C.DestroyExplosion
struct ABP_Explosion_Base_C_DestroyExplosion_Params
{
};

// Function BP_Explosion_Base.BP_Explosion_Base_C.ExplosionParticlesFinished
struct ABP_Explosion_Base_C_ExplosionParticlesFinished_Params
{
	class UParticleSystemComponent**                   PSystem;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_Explosion_Base.BP_Explosion_Base_C.ExecuteUbergraph_BP_Explosion_Base
struct ABP_Explosion_Base_C_ExecuteUbergraph_BP_Explosion_Base_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Explosion_Base.BP_Explosion_Base_C.ExplosionFinished__DelegateSignature
struct ABP_Explosion_Base_C_ExplosionFinished__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

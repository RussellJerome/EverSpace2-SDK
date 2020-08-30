#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_Explosion_Volumetric_Base_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Explosion_Volumetric_Base.BP_Explosion_Volumetric_Base_C.GetSubExplosionLocation
struct ABP_Explosion_Volumetric_Base_C_GetSubExplosionLocation_Params
{
	struct FVector                                     Location;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Explosion_Volumetric_Base.BP_Explosion_Volumetric_Base_C.SubExplosion
struct ABP_Explosion_Volumetric_Base_C_SubExplosion_Params
{
	struct FVector*                                    Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Normal;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Explosion_Volumetric_Base.BP_Explosion_Volumetric_Base_C.ReceiveBeginPlay
struct ABP_Explosion_Volumetric_Base_C_ReceiveBeginPlay_Params
{
};

// Function BP_Explosion_Volumetric_Base.BP_Explosion_Volumetric_Base_C.SpawnSubExplosion
struct ABP_Explosion_Volumetric_Base_C_SpawnSubExplosion_Params
{
};

// Function BP_Explosion_Volumetric_Base.BP_Explosion_Volumetric_Base_C.SpawnFinalExplosion
struct ABP_Explosion_Volumetric_Base_C_SpawnFinalExplosion_Params
{
};

// Function BP_Explosion_Volumetric_Base.BP_Explosion_Volumetric_Base_C.ReceiveTick
struct ABP_Explosion_Volumetric_Base_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Explosion_Volumetric_Base.BP_Explosion_Volumetric_Base_C.ExecuteUbergraph_BP_Explosion_Volumetric_Base
struct ABP_Explosion_Volumetric_Base_C_ExecuteUbergraph_BP_Explosion_Volumetric_Base_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Explosion_Volumetric_Base.BP_Explosion_Volumetric_Base_C.FinalExplosion__DelegateSignature
struct ABP_Explosion_Volumetric_Base_C_FinalExplosion__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

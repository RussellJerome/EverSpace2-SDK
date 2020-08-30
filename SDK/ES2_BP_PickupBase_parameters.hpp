#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_PickupBase_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_PickupBase.BP_PickupBase_C.UserConstructionScript
struct ABP_PickupBase_C_UserConstructionScript_Params
{
};

// Function BP_PickupBase.BP_PickupBase_C.PickedUp
struct ABP_PickupBase_C_PickedUp_Params
{
	class APickupBase**                                PickupBaseActor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bPickedUpEntirely;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PickupBase.BP_PickupBase_C.ReceiveBeginPlay
struct ABP_PickupBase_C_ReceiveBeginPlay_Params
{
};

// Function BP_PickupBase.BP_PickupBase_C.InitTractorBeam
struct ABP_PickupBase_C_InitTractorBeam_Params
{
	class APickupBase**                                PickupBaseActor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     ActorThatPulls;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PickupBase.BP_PickupBase_C.UpdateTractorBeam
struct ABP_PickupBase_C_UpdateTractorBeam_Params
{
	class APickupBase**                                PickupBaseActor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     ActorThatPulls;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PickupBase.BP_PickupBase_C.UpdateTractorBeamParticles
struct ABP_PickupBase_C_UpdateTractorBeamParticles_Params
{
};

// Function BP_PickupBase.BP_PickupBase_C.DisableTractorBeam
struct ABP_PickupBase_C_DisableTractorBeam_Params
{
	class APickupBase**                                PickupBaseActor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     ActorThatPulls;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PickupBase.BP_PickupBase_C.InitGlowEffect
struct ABP_PickupBase_C_InitGlowEffect_Params
{
};

// Function BP_PickupBase.BP_PickupBase_C.OnInteracted
struct ABP_PickupBase_C_OnInteracted_Params
{
	class UInteractComponent**                         InteractComponent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PickupBase.BP_PickupBase_C.ExecuteUbergraph_BP_PickupBase
struct ABP_PickupBase_C_ExecuteUbergraph_BP_PickupBase_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

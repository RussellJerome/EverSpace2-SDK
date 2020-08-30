#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_TravelMode_Sun_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_TravelMode_Sun.BP_TravelMode_Sun_C.UpdateDirectionalLight
struct ABP_TravelMode_Sun_C_UpdateDirectionalLight_Params
{
	struct FVector*                                    TargetLocation;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TravelMode_Sun.BP_TravelMode_Sun_C.GetDirectionalIntensity
struct ABP_TravelMode_Sun_C_GetDirectionalIntensity_Params
{
	struct FVector*                                    Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              ShadowTrace;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Intensity;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TravelMode_Sun.BP_TravelMode_Sun_C.UserConstructionScript
struct ABP_TravelMode_Sun_C_UserConstructionScript_Params
{
};

// Function BP_TravelMode_Sun.BP_TravelMode_Sun_C.ReceiveBeginPlay
struct ABP_TravelMode_Sun_C_ReceiveBeginPlay_Params
{
};

// Function BP_TravelMode_Sun.BP_TravelMode_Sun_C.BndEvt__ProximitySphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_TravelMode_Sun_C_BndEvt__ProximitySphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent**                        OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_TravelMode_Sun.BP_TravelMode_Sun_C.BndEvt__ProximitySphere_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature
struct ABP_TravelMode_Sun_C_BndEvt__ProximitySphere_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent**                        OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TravelMode_Sun.BP_TravelMode_Sun_C.ReceiveTick
struct ABP_TravelMode_Sun_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TravelMode_Sun.BP_TravelMode_Sun_C.UpdateMPC
struct ABP_TravelMode_Sun_C_UpdateMPC_Params
{
};

// Function BP_TravelMode_Sun.BP_TravelMode_Sun_C.PreviewLightingAtLocation
struct ABP_TravelMode_Sun_C_PreviewLightingAtLocation_Params
{
	struct FVector*                                    Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TravelMode_Sun.BP_TravelMode_Sun_C.ExecuteUbergraph_BP_TravelMode_Sun
struct ABP_TravelMode_Sun_C_ExecuteUbergraph_BP_TravelMode_Sun_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

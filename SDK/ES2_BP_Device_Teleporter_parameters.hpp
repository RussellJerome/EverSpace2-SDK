#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_Device_Teleporter_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Device_Teleporter.BP_Device_Teleporter_C.OnDeactivate
struct ABP_Device_Teleporter_C_OnDeactivate_Params
{
	class AActor**                                     OwnerOfDevice;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Device_Teleporter.BP_Device_Teleporter_C.OnActivate
struct ABP_Device_Teleporter_C_OnActivate_Params
{
	class AActor**                                     OwnerOfDevice;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Device_Teleporter.BP_Device_Teleporter_C.PostEffectTimeLine__FinishedFunc
struct ABP_Device_Teleporter_C_PostEffectTimeLine__FinishedFunc_Params
{
};

// Function BP_Device_Teleporter.BP_Device_Teleporter_C.PostEffectTimeLine__UpdateFunc
struct ABP_Device_Teleporter_C_PostEffectTimeLine__UpdateFunc_Params
{
};

// Function BP_Device_Teleporter.BP_Device_Teleporter_C.ReceiveBeginPlay
struct ABP_Device_Teleporter_C_ReceiveBeginPlay_Params
{
};

// Function BP_Device_Teleporter.BP_Device_Teleporter_C.PlayVFX
struct ABP_Device_Teleporter_C_PlayVFX_Params
{
	struct FVector*                                    InitialLocation;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    TargetLocations;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Device_Teleporter.BP_Device_Teleporter_C.ExecuteUbergraph_BP_Device_Teleporter
struct ABP_Device_Teleporter_C_ExecuteUbergraph_BP_Device_Teleporter_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

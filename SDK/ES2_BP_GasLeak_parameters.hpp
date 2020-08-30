#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_GasLeak_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_GasLeak.BP_GasLeak_C.OffsiteSimulate
struct ABP_GasLeak_C_OffsiteSimulate_Params
{
	float*                                             TimePassed;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_GasLeak.BP_GasLeak_C.RestoreState
struct ABP_GasLeak_C_RestoreState_Params
{
	TMap<struct FName, struct FGenericSaveDataBuffer>* GenericSaveDataMap;                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_GasLeak.BP_GasLeak_C.SaveState
struct ABP_GasLeak_C_SaveState_Params
{
	TMap<struct FName, struct FGenericSaveDataBuffer>  GenericSaveDataMap;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_GasLeak.BP_GasLeak_C.ReceiveBeginPlay
struct ABP_GasLeak_C_ReceiveBeginPlay_Params
{
};

// Function BP_GasLeak.BP_GasLeak_C.StartLeaking
struct ABP_GasLeak_C_StartLeaking_Params
{
};

// Function BP_GasLeak.BP_GasLeak_C.StopLeaking
struct ABP_GasLeak_C_StopLeaking_Params
{
};

// Function BP_GasLeak.BP_GasLeak_C.CustomEvent
struct ABP_GasLeak_C_CustomEvent_Params
{
	class UInteractComponent**                         InteractComponent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GasLeak.BP_GasLeak_C.ExecuteUbergraph_BP_GasLeak
struct ABP_GasLeak_C_ExecuteUbergraph_BP_GasLeak_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_DistanceCullComponent_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_DistanceCullComponent.BP_DistanceCullComponent_C.MaxCullIndex
struct UBP_DistanceCullComponent_C_MaxCullIndex_Params
{
	int*                                               CullIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               TRUE;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DistanceCullComponent.BP_DistanceCullComponent_C.GetCullSettingsIndexFromDistance
struct UBP_DistanceCullComponent_C_GetCullSettingsIndexFromDistance_Params
{
	int                                                Index;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DistanceCullComponent.BP_DistanceCullComponent_C.SetCulled
struct UBP_DistanceCullComponent_C_SetCulled_Params
{
	bool*                                              Culled;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FSTRCT_DistanceCullSettings*                CullSettings;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DistanceCullComponent.BP_DistanceCullComponent_C.ReceiveBeginPlay
struct UBP_DistanceCullComponent_C_ReceiveBeginPlay_Params
{
};

// Function BP_DistanceCullComponent.BP_DistanceCullComponent_C.CheckCullDistance
struct UBP_DistanceCullComponent_C_CheckCullDistance_Params
{
};

// Function BP_DistanceCullComponent.BP_DistanceCullComponent_C.ExcludeComponent
struct UBP_DistanceCullComponent_C_ExcludeComponent_Params
{
	class UActorComponent**                            TargetComponent;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_DistanceCullComponent.BP_DistanceCullComponent_C.SetEnabled
struct UBP_DistanceCullComponent_C_SetEnabled_Params
{
	bool*                                              Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DistanceCullComponent.BP_DistanceCullComponent_C.SetDrawDistanceCulling
struct UBP_DistanceCullComponent_C_SetDrawDistanceCulling_Params
{
	bool*                                              Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DistanceCullComponent.BP_DistanceCullComponent_C.ExecuteUbergraph_BP_DistanceCullComponent
struct UBP_DistanceCullComponent_C_ExecuteUbergraph_BP_DistanceCullComponent_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_MissionBase_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_MissionBase.BP_MissionBase_C.GetItemContainerContentsFromRewards
struct ABP_MissionBase_C_GetItemContainerContentsFromRewards_Params
{
	TArray<struct FItemContainerContent>               CointainerContents;                                       // (Parm, OutParm, ZeroConstructor)
};

// Function BP_MissionBase.BP_MissionBase_C.ReceiveBeginPlay
struct ABP_MissionBase_C_ReceiveBeginPlay_Params
{
};

// Function BP_MissionBase.BP_MissionBase_C.MissionSuccessSpawnRewards
struct ABP_MissionBase_C_MissionSuccessSpawnRewards_Params
{
};

// Function BP_MissionBase.BP_MissionBase_C.ExecuteUbergraph_BP_MissionBase
struct ABP_MissionBase_C_ExecuteUbergraph_BP_MissionBase_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

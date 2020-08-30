#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_MiniMission_S01L04_GC_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_MiniMission_S01L04_GC.BP_MiniMission_S01L04_GC_C.RepairedLeak
struct ABP_MiniMission_S01L04_GC_C_RepairedLeak_Params
{
};

// Function BP_MiniMission_S01L04_GC.BP_MiniMission_S01L04_GC_C.DestroyedMadcap
struct ABP_MiniMission_S01L04_GC_C_DestroyedMadcap_Params
{
};

// Function BP_MiniMission_S01L04_GC.BP_MiniMission_S01L04_GC_C.KilledLurkers
struct ABP_MiniMission_S01L04_GC_C_KilledLurkers_Params
{
};

// Function BP_MiniMission_S01L04_GC.BP_MiniMission_S01L04_GC_C.OnEnteredStage
struct ABP_MiniMission_S01L04_GC_C_OnEnteredStage_Params
{
	int*                                               NewStage;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniMission_S01L04_GC.BP_MiniMission_S01L04_GC_C.OnLurkerGroupWoken_Event
struct ABP_MiniMission_S01L04_GC_C_OnLurkerGroupWoken_Event_Params
{
	int*                                               LurkerGroupIndex;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniMission_S01L04_GC.BP_MiniMission_S01L04_GC_C.OnTaskProgressed_Event
struct ABP_MiniMission_S01L04_GC_C_OnTaskProgressed_Event_Params
{
	int*                                               Progress;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniMission_S01L04_GC.BP_MiniMission_S01L04_GC_C.RepairedLeaks
struct ABP_MiniMission_S01L04_GC_C_RepairedLeaks_Params
{
};

// Function BP_MiniMission_S01L04_GC.BP_MiniMission_S01L04_GC_C.HeardDialog1
struct ABP_MiniMission_S01L04_GC_C_HeardDialog1_Params
{
	struct FName*                                      DialogID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsMenuDialog;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniMission_S01L04_GC.BP_MiniMission_S01L04_GC_C.HeardDialog3
struct ABP_MiniMission_S01L04_GC_C_HeardDialog3_Params
{
	struct FName*                                      DialogID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsMenuDialog;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniMission_S01L04_GC.BP_MiniMission_S01L04_GC_C.HeardDialog8
struct ABP_MiniMission_S01L04_GC_C_HeardDialog8_Params
{
	struct FName*                                      DialogID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsMenuDialog;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniMission_S01L04_GC.BP_MiniMission_S01L04_GC_C.HeardDialog9
struct ABP_MiniMission_S01L04_GC_C_HeardDialog9_Params
{
	struct FName*                                      DialogID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsMenuDialog;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniMission_S01L04_GC.BP_MiniMission_S01L04_GC_C.OnTaskProgressed_Event_1
struct ABP_MiniMission_S01L04_GC_C_OnTaskProgressed_Event_1_Params
{
	int*                                               Progress;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniMission_S01L04_GC.BP_MiniMission_S01L04_GC_C.ExecuteUbergraph_BP_MiniMission_S01L04_GC
struct ABP_MiniMission_S01L04_GC_C_ExecuteUbergraph_BP_MiniMission_S01L04_GC_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

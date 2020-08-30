#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_SpawnGizmo_Single_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_SpawnGizmo_Single.BP_SpawnGizmo_Single_C.SpawnClass
struct ABP_SpawnGizmo_Single_C_SpawnClass_Params
{
	class UClass**                                     ClassToSpawnOverride;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESpawnGroup>*                          ConcreteSpawnGroup;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FSpawnParameter*                            SpawnParameter;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
	struct FRandomStream                               R;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_SpawnGizmo_Single.BP_SpawnGizmo_Single_C.UserConstructionScript
struct ABP_SpawnGizmo_Single_C_UserConstructionScript_Params
{
};

// Function BP_SpawnGizmo_Single.BP_SpawnGizmo_Single_C.ReceiveBeginPlay
struct ABP_SpawnGizmo_Single_C_ReceiveBeginPlay_Params
{
};

// Function BP_SpawnGizmo_Single.BP_SpawnGizmo_Single_C.ExecuteUbergraph_BP_SpawnGizmo_Single
struct ABP_SpawnGizmo_Single_C_ExecuteUbergraph_BP_SpawnGizmo_Single_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_Turret_Retractable_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Turret_Retractable.BP_Turret_Retractable_C.MoveTurret__FinishedFunc
struct ABP_Turret_Retractable_C_MoveTurret__FinishedFunc_Params
{
};

// Function BP_Turret_Retractable.BP_Turret_Retractable_C.MoveTurret__UpdateFunc
struct ABP_Turret_Retractable_C_MoveTurret__UpdateFunc_Params
{
};

// Function BP_Turret_Retractable.BP_Turret_Retractable_C.ReceiveBeginPlay
struct ABP_Turret_Retractable_C_ReceiveBeginPlay_Params
{
};

// Function BP_Turret_Retractable.BP_Turret_Retractable_C.Retract
struct ABP_Turret_Retractable_C_Retract_Params
{
	bool*                                              Forward;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Turret_Retractable.BP_Turret_Retractable_C.OnHealthChanged
struct ABP_Turret_Retractable_C_OnHealthChanged_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             HitpointDelta;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    HitDirection;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Turret_Retractable.BP_Turret_Retractable_C.OnTurretRepaired
struct ABP_Turret_Retractable_C_OnTurretRepaired_Params
{
};

// Function BP_Turret_Retractable.BP_Turret_Retractable_C.BringOutTurret
struct ABP_Turret_Retractable_C_BringOutTurret_Params
{
};

// Function BP_Turret_Retractable.BP_Turret_Retractable_C.ExecuteUbergraph_BP_Turret_Retractable
struct ABP_Turret_Retractable_C_ExecuteUbergraph_BP_Turret_Retractable_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

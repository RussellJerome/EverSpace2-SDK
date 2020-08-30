#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_WantedLevelManager_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_WantedLevelManager.BP_WantedLevelManager_C.OnIngameWidgetCreated
struct ABP_WantedLevelManager_C_OnIngameWidgetCreated_Params
{
};

// Function BP_WantedLevelManager.BP_WantedLevelManager_C.ReceiveBeginPlay
struct ABP_WantedLevelManager_C_ReceiveBeginPlay_Params
{
};

// Function BP_WantedLevelManager.BP_WantedLevelManager_C.OnHealthDepleted
struct ABP_WantedLevelManager_C_OnHealthDepleted_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                DamageInstigator;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DamageAmount;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WantedLevelManager.BP_WantedLevelManager_C.OnTimeUntilDefenceArrivesEllapsed
struct ABP_WantedLevelManager_C_OnTimeUntilDefenceArrivesEllapsed_Params
{
};

// Function BP_WantedLevelManager.BP_WantedLevelManager_C.OnNeutralsTurnedHostile
struct ABP_WantedLevelManager_C_OnNeutralsTurnedHostile_Params
{
};

// Function BP_WantedLevelManager.BP_WantedLevelManager_C.ReceiveTick
struct ABP_WantedLevelManager_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WantedLevelManager.BP_WantedLevelManager_C.ExecuteUbergraph_BP_WantedLevelManager
struct ABP_WantedLevelManager_C_ExecuteUbergraph_BP_WantedLevelManager_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

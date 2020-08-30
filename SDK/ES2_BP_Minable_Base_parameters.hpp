#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_Minable_Base_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Minable_Base.BP_Minable_Base_C.GetHudMarkerName
struct ABP_Minable_Base_C_GetHudMarkerName_Params
{
	struct FItemTemplate*                              ItemTemplate;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Name;                                                     // (Parm, OutParm)
};

// Function BP_Minable_Base.BP_Minable_Base_C.Init
struct ABP_Minable_Base_C_Init_Params
{
	int*                                               NewSeed;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      ResourceID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Minable_Base.BP_Minable_Base_C.GetMiningWidget
struct ABP_Minable_Base_C_GetMiningWidget_Params
{
	class UWG_Mining_Game_C*                           AsWG_Mining_Game;                                         // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_Minable_Base.BP_Minable_Base_C.GetCurrentYieldFactor
struct ABP_Minable_Base_C_GetCurrentYieldFactor_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
	bool                                               BonusYield;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               SpecialResource;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Minable_Base.BP_Minable_Base_C.UserConstructionScript
struct ABP_Minable_Base_C_UserConstructionScript_Params
{
};

// Function BP_Minable_Base.BP_Minable_Base_C.InpActEvt_AnyKey_K2Node_InputKeyEvent_1
struct ABP_Minable_Base_C_InpActEvt_AnyKey_K2Node_InputKeyEvent_1_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_Minable_Base.BP_Minable_Base_C.ReceiveBeginPlay
struct ABP_Minable_Base_C_ReceiveBeginPlay_Params
{
};

// Function BP_Minable_Base.BP_Minable_Base_C.StartMining
struct ABP_Minable_Base_C_StartMining_Params
{
	class AActor**                                     PawnThatMines;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Minable_Base.BP_Minable_Base_C.DeployCharge
struct ABP_Minable_Base_C_DeployCharge_Params
{
};

// Function BP_Minable_Base.BP_Minable_Base_C.ReceiveTick
struct ABP_Minable_Base_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Minable_Base.BP_Minable_Base_C.OnInteracted
struct ABP_Minable_Base_C_OnInteracted_Params
{
	class UInteractComponent**                         InteractComponent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Minable_Base.BP_Minable_Base_C.OnCollectParticle
struct ABP_Minable_Base_C_OnCollectParticle_Params
{
	struct FName*                                      EventName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             EmitterTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               ParticleTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Velocity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Direction;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Minable_Base.BP_Minable_Base_C.StopMining
struct ABP_Minable_Base_C_StopMining_Params
{
};

// Function BP_Minable_Base.BP_Minable_Base_C.OnWidgetFadedOut
struct ABP_Minable_Base_C_OnWidgetFadedOut_Params
{
};

// Function BP_Minable_Base.BP_Minable_Base_C.ReceiveAnyDamage
struct ABP_Minable_Base_C_ReceiveAnyDamage_Params
{
	float*                                             Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Minable_Base.BP_Minable_Base_C.ExecuteUbergraph_BP_Minable_Base
struct ABP_Minable_Base_C_ExecuteUbergraph_BP_Minable_Base_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

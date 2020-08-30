#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_GameModeBase_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_GameModeBase.BP_GameModeBase_C.ReceiveBeginPlay
struct ABP_GameModeBase_C_ReceiveBeginPlay_Params
{
};

// Function BP_GameModeBase.BP_GameModeBase_C.TriggerFadeIn
struct ABP_GameModeBase_C_TriggerFadeIn_Params
{
	struct FLinearColor*                               Color;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float*                                             Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GameModeBase.BP_GameModeBase_C.TriggerFadeOut
struct ABP_GameModeBase_C_TriggerFadeOut_Params
{
	struct FLinearColor*                               Color;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float*                                             Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GameModeBase.BP_GameModeBase_C.CheckForTutorialMessages
struct ABP_GameModeBase_C_CheckForTutorialMessages_Params
{
};

// Function BP_GameModeBase.BP_GameModeBase_C.ClosedEvent
struct ABP_GameModeBase_C_ClosedEvent_Params
{
	class UWG_Tutorial_Message_C**                     TutorialMessage;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_GameModeBase.BP_GameModeBase_C.OnPlayerHealthDepleted
struct ABP_GameModeBase_C_OnPlayerHealthDepleted_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                DamageInstigator;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DamageAmount;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GameModeBase.BP_GameModeBase_C.HandlePlayerRevive
struct ABP_GameModeBase_C_HandlePlayerRevive_Params
{
};

// Function BP_GameModeBase.BP_GameModeBase_C.ReviveRequest
struct ABP_GameModeBase_C_ReviveRequest_Params
{
};

// Function BP_GameModeBase.BP_GameModeBase_C.LoadCheckpointRequest
struct ABP_GameModeBase_C_LoadCheckpointRequest_Params
{
};

// Function BP_GameModeBase.BP_GameModeBase_C.LoadMainMenuRequest
struct ABP_GameModeBase_C_LoadMainMenuRequest_Params
{
};

// Function BP_GameModeBase.BP_GameModeBase_C.OnPlayerDockedToStation_Event_1
struct ABP_GameModeBase_C_OnPlayerDockedToStation_Event_1_Params
{
	class AActor**                                     DockableStationActor;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GameModeBase.BP_GameModeBase_C.OnPlayerLeftStation_Event_1
struct ABP_GameModeBase_C_OnPlayerLeftStation_Event_1_Params
{
	class AActor**                                     DockableStationActor;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GameModeBase.BP_GameModeBase_C.ShowHowToJumpMessage
struct ABP_GameModeBase_C_ShowHowToJumpMessage_Params
{
};

// Function BP_GameModeBase.BP_GameModeBase_C.JumpDriveMessageShown
struct ABP_GameModeBase_C_JumpDriveMessageShown_Params
{
	class UWG_Tutorial_Message_C**                     TutorialMessage;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_GameModeBase.BP_GameModeBase_C.OnLeftLocationBounds
struct ABP_GameModeBase_C_OnLeftLocationBounds_Params
{
};

// Function BP_GameModeBase.BP_GameModeBase_C.FadedOut
struct ABP_GameModeBase_C_FadedOut_Params
{
	class UWG_Fullscreen_Fade_C**                      Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_GameModeBase.BP_GameModeBase_C.OnSkippableSequenceStarted
struct ABP_GameModeBase_C_OnSkippableSequenceStarted_Params
{
};

// Function BP_GameModeBase.BP_GameModeBase_C.OnSkippableSequenceFinished
struct ABP_GameModeBase_C_OnSkippableSequenceFinished_Params
{
};

// Function BP_GameModeBase.BP_GameModeBase_C.ExecuteUbergraph_BP_GameModeBase
struct ABP_GameModeBase_C_ExecuteUbergraph_BP_GameModeBase_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

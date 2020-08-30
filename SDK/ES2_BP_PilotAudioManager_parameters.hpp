#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_PilotAudioManager_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_PilotAudioManager.BP_PilotAudioManager_C.HasFriendWithinRange
struct ABP_PilotAudioManager_C_HasFriendWithinRange_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              AllOtherActors;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_PilotAudioManager.BP_PilotAudioManager_C.OnLoaded_C56595344E8A525161631BAC2E7FF39D
struct ABP_PilotAudioManager_C_OnLoaded_C56595344E8A525161631BAC2E7FF39D_Params
{
	class UObject**                                    Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PilotAudioManager.BP_PilotAudioManager_C.ReceiveBeginPlay
struct ABP_PilotAudioManager_C_ReceiveBeginPlay_Params
{
};

// Function BP_PilotAudioManager.BP_PilotAudioManager_C.RefreshAudiblePilots
struct ABP_PilotAudioManager_C_RefreshAudiblePilots_Params
{
};

// Function BP_PilotAudioManager.BP_PilotAudioManager_C.PlayPilotDialogue
struct ABP_PilotAudioManager_C_PlayPilotDialogue_Params
{
	class AESPawn**                                    Pawn;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAIEvent>*                             AIEvent;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bDeathSound;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PilotAudioManager.BP_PilotAudioManager_C.RefreshAudiblePilotsAndOpenGate
struct ABP_PilotAudioManager_C_RefreshAudiblePilotsAndOpenGate_Params
{
};

// Function BP_PilotAudioManager.BP_PilotAudioManager_C.IPlayPilotDialogue
struct ABP_PilotAudioManager_C_IPlayPilotDialogue_Params
{
	class AESPawn**                                    Pawn;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAIEvent>*                             AIEvent;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bDeathSound;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PilotAudioManager.BP_PilotAudioManager_C.ExecuteUbergraph_BP_PilotAudioManager
struct ABP_PilotAudioManager_C_ExecuteUbergraph_BP_PilotAudioManager_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

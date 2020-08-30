// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_PilotAudioManager_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_PilotAudioManager.BP_PilotAudioManager_C.HasFriendWithinRange
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AActor*>          AllOtherActors                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_PilotAudioManager_C::HasFriendWithinRange(class AActor** Actor, TArray<class AActor*>* AllOtherActors)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PilotAudioManager.BP_PilotAudioManager_C.HasFriendWithinRange");

	ABP_PilotAudioManager_C_HasFriendWithinRange_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AllOtherActors != nullptr)
		*AllOtherActors = params.AllOtherActors;

	return params.ReturnValue;
}


// Function BP_PilotAudioManager.BP_PilotAudioManager_C.OnLoaded_C56595344E8A525161631BAC2E7FF39D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject**                Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PilotAudioManager_C::OnLoaded_C56595344E8A525161631BAC2E7FF39D(class UObject** Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PilotAudioManager.BP_PilotAudioManager_C.OnLoaded_C56595344E8A525161631BAC2E7FF39D");

	ABP_PilotAudioManager_C_OnLoaded_C56595344E8A525161631BAC2E7FF39D_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PilotAudioManager.BP_PilotAudioManager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PilotAudioManager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PilotAudioManager.BP_PilotAudioManager_C.ReceiveBeginPlay");

	ABP_PilotAudioManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PilotAudioManager.BP_PilotAudioManager_C.RefreshAudiblePilots
// (BlueprintCallable, BlueprintEvent)

void ABP_PilotAudioManager_C::RefreshAudiblePilots()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PilotAudioManager.BP_PilotAudioManager_C.RefreshAudiblePilots");

	ABP_PilotAudioManager_C_RefreshAudiblePilots_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PilotAudioManager.BP_PilotAudioManager_C.PlayPilotDialogue
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AESPawn**                Pawn                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EAIEvent>*         AIEvent                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bDeathSound                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PilotAudioManager_C::PlayPilotDialogue(class AESPawn** Pawn, TEnumAsByte<EAIEvent>* AIEvent, bool* bDeathSound)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PilotAudioManager.BP_PilotAudioManager_C.PlayPilotDialogue");

	ABP_PilotAudioManager_C_PlayPilotDialogue_Params params;
	params.Pawn = Pawn;
	params.AIEvent = AIEvent;
	params.bDeathSound = bDeathSound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PilotAudioManager.BP_PilotAudioManager_C.RefreshAudiblePilotsAndOpenGate
// (BlueprintCallable, BlueprintEvent)

void ABP_PilotAudioManager_C::RefreshAudiblePilotsAndOpenGate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PilotAudioManager.BP_PilotAudioManager_C.RefreshAudiblePilotsAndOpenGate");

	ABP_PilotAudioManager_C_RefreshAudiblePilotsAndOpenGate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PilotAudioManager.BP_PilotAudioManager_C.IPlayPilotDialogue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AESPawn**                Pawn                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EAIEvent>*         AIEvent                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bDeathSound                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PilotAudioManager_C::IPlayPilotDialogue(class AESPawn** Pawn, TEnumAsByte<EAIEvent>* AIEvent, bool* bDeathSound)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PilotAudioManager.BP_PilotAudioManager_C.IPlayPilotDialogue");

	ABP_PilotAudioManager_C_IPlayPilotDialogue_Params params;
	params.Pawn = Pawn;
	params.AIEvent = AIEvent;
	params.bDeathSound = bDeathSound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PilotAudioManager.BP_PilotAudioManager_C.ExecuteUbergraph_BP_PilotAudioManager
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PilotAudioManager_C::ExecuteUbergraph_BP_PilotAudioManager(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PilotAudioManager.BP_PilotAudioManager_C.ExecuteUbergraph_BP_PilotAudioManager");

	ABP_PilotAudioManager_C_ExecuteUbergraph_BP_PilotAudioManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

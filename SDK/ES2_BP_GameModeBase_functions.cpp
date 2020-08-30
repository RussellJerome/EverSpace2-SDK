// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_GameModeBase_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_GameModeBase.BP_GameModeBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_GameModeBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameModeBase.BP_GameModeBase_C.ReceiveBeginPlay");

	ABP_GameModeBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameModeBase.BP_GameModeBase_C.TriggerFadeIn
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FLinearColor*           Color                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float*                         Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_GameModeBase_C::TriggerFadeIn(struct FLinearColor* Color, float* Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameModeBase.BP_GameModeBase_C.TriggerFadeIn");

	ABP_GameModeBase_C_TriggerFadeIn_Params params;
	params.Color = Color;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameModeBase.BP_GameModeBase_C.TriggerFadeOut
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FLinearColor*           Color                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float*                         Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_GameModeBase_C::TriggerFadeOut(struct FLinearColor* Color, float* Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameModeBase.BP_GameModeBase_C.TriggerFadeOut");

	ABP_GameModeBase_C_TriggerFadeOut_Params params;
	params.Color = Color;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameModeBase.BP_GameModeBase_C.CheckForTutorialMessages
// (BlueprintCallable, BlueprintEvent)

void ABP_GameModeBase_C::CheckForTutorialMessages()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameModeBase.BP_GameModeBase_C.CheckForTutorialMessages");

	ABP_GameModeBase_C_CheckForTutorialMessages_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameModeBase.BP_GameModeBase_C.ClosedEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_Tutorial_Message_C** TutorialMessage                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_GameModeBase_C::ClosedEvent(class UWG_Tutorial_Message_C** TutorialMessage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameModeBase.BP_GameModeBase_C.ClosedEvent");

	ABP_GameModeBase_C_ClosedEvent_Params params;
	params.TutorialMessage = TutorialMessage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameModeBase.BP_GameModeBase_C.OnPlayerHealthDepleted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController**            DamageInstigator               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         DamageAmount                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_GameModeBase_C::OnPlayerHealthDepleted(class AActor** Actor, class AActor** DamageCauser, class AController** DamageInstigator, float* DamageAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameModeBase.BP_GameModeBase_C.OnPlayerHealthDepleted");

	ABP_GameModeBase_C_OnPlayerHealthDepleted_Params params;
	params.Actor = Actor;
	params.DamageCauser = DamageCauser;
	params.DamageInstigator = DamageInstigator;
	params.DamageAmount = DamageAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameModeBase.BP_GameModeBase_C.HandlePlayerRevive
// (BlueprintCallable, BlueprintEvent)

void ABP_GameModeBase_C::HandlePlayerRevive()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameModeBase.BP_GameModeBase_C.HandlePlayerRevive");

	ABP_GameModeBase_C_HandlePlayerRevive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameModeBase.BP_GameModeBase_C.ReviveRequest
// (BlueprintCallable, BlueprintEvent)

void ABP_GameModeBase_C::ReviveRequest()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameModeBase.BP_GameModeBase_C.ReviveRequest");

	ABP_GameModeBase_C_ReviveRequest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameModeBase.BP_GameModeBase_C.LoadCheckpointRequest
// (BlueprintCallable, BlueprintEvent)

void ABP_GameModeBase_C::LoadCheckpointRequest()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameModeBase.BP_GameModeBase_C.LoadCheckpointRequest");

	ABP_GameModeBase_C_LoadCheckpointRequest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameModeBase.BP_GameModeBase_C.LoadMainMenuRequest
// (BlueprintCallable, BlueprintEvent)

void ABP_GameModeBase_C::LoadMainMenuRequest()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameModeBase.BP_GameModeBase_C.LoadMainMenuRequest");

	ABP_GameModeBase_C_LoadMainMenuRequest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameModeBase.BP_GameModeBase_C.OnPlayerDockedToStation_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 DockableStationActor           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_GameModeBase_C::OnPlayerDockedToStation_Event_1(class AActor** DockableStationActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameModeBase.BP_GameModeBase_C.OnPlayerDockedToStation_Event_1");

	ABP_GameModeBase_C_OnPlayerDockedToStation_Event_1_Params params;
	params.DockableStationActor = DockableStationActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameModeBase.BP_GameModeBase_C.OnPlayerLeftStation_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 DockableStationActor           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_GameModeBase_C::OnPlayerLeftStation_Event_1(class AActor** DockableStationActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameModeBase.BP_GameModeBase_C.OnPlayerLeftStation_Event_1");

	ABP_GameModeBase_C_OnPlayerLeftStation_Event_1_Params params;
	params.DockableStationActor = DockableStationActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameModeBase.BP_GameModeBase_C.ShowHowToJumpMessage
// (BlueprintCallable, BlueprintEvent)

void ABP_GameModeBase_C::ShowHowToJumpMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameModeBase.BP_GameModeBase_C.ShowHowToJumpMessage");

	ABP_GameModeBase_C_ShowHowToJumpMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameModeBase.BP_GameModeBase_C.JumpDriveMessageShown
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_Tutorial_Message_C** TutorialMessage                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_GameModeBase_C::JumpDriveMessageShown(class UWG_Tutorial_Message_C** TutorialMessage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameModeBase.BP_GameModeBase_C.JumpDriveMessageShown");

	ABP_GameModeBase_C_JumpDriveMessageShown_Params params;
	params.TutorialMessage = TutorialMessage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameModeBase.BP_GameModeBase_C.OnLeftLocationBounds
// (Event, Public, BlueprintEvent)

void ABP_GameModeBase_C::OnLeftLocationBounds()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameModeBase.BP_GameModeBase_C.OnLeftLocationBounds");

	ABP_GameModeBase_C_OnLeftLocationBounds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameModeBase.BP_GameModeBase_C.FadedOut
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_Fullscreen_Fade_C**  Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_GameModeBase_C::FadedOut(class UWG_Fullscreen_Fade_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameModeBase.BP_GameModeBase_C.FadedOut");

	ABP_GameModeBase_C_FadedOut_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameModeBase.BP_GameModeBase_C.OnSkippableSequenceStarted
// (BlueprintCallable, BlueprintEvent)

void ABP_GameModeBase_C::OnSkippableSequenceStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameModeBase.BP_GameModeBase_C.OnSkippableSequenceStarted");

	ABP_GameModeBase_C_OnSkippableSequenceStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameModeBase.BP_GameModeBase_C.OnSkippableSequenceFinished
// (BlueprintCallable, BlueprintEvent)

void ABP_GameModeBase_C::OnSkippableSequenceFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameModeBase.BP_GameModeBase_C.OnSkippableSequenceFinished");

	ABP_GameModeBase_C_OnSkippableSequenceFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameModeBase.BP_GameModeBase_C.ExecuteUbergraph_BP_GameModeBase
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_GameModeBase_C::ExecuteUbergraph_BP_GameModeBase(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameModeBase.BP_GameModeBase_C.ExecuteUbergraph_BP_GameModeBase");

	ABP_GameModeBase_C_ExecuteUbergraph_BP_GameModeBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

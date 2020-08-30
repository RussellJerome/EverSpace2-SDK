// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_ES2_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ES2.ActivityBase.TriggerOrBindEventActivitySucceeded
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate*        Event                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AActivityBase::TriggerOrBindEventActivitySucceeded(struct FScriptDelegate* Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ActivityBase.TriggerOrBindEventActivitySucceeded");

	AActivityBase_TriggerOrBindEventActivitySucceeded_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ActivityBase.TriggerOrBindEventActivityFailed
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate*        Event                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AActivityBase::TriggerOrBindEventActivityFailed(struct FScriptDelegate* Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ActivityBase.TriggerOrBindEventActivityFailed");

	AActivityBase_TriggerOrBindEventActivityFailed_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ActivityBase.TriggerOrBindEventActivityEnded
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate*        Event                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AActivityBase::TriggerOrBindEventActivityEnded(struct FScriptDelegate* Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ActivityBase.TriggerOrBindEventActivityEnded");

	AActivityBase_TriggerOrBindEventActivityEnded_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ActivityBase.TriggerOrBindEventActivityActivated
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate*        Event                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AActivityBase::TriggerOrBindEventActivityActivated(struct FScriptDelegate* Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ActivityBase.TriggerOrBindEventActivityActivated");

	AActivityBase_TriggerOrBindEventActivityActivated_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ActivityBase.SwitchState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EActivityState*                NewState                       (Parm, ZeroConstructor, IsPlainOldData)

void AActivityBase::SwitchState(EActivityState* NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ActivityBase.SwitchState");

	AActivityBase_SwitchState_Params params;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ActivityBase.SetLocation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  NewLocationID                  (Parm, ZeroConstructor, IsPlainOldData)

void AActivityBase::SetLocation(struct FName* NewLocationID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ActivityBase.SetLocation");

	AActivityBase_SetLocation_Params params;
	params.NewLocationID = NewLocationID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ActivityBase.SetAttribute
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  AttributeName                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FESVariant*             AttributeValue                 (Parm)

void AActivityBase::SetAttribute(struct FName* AttributeName, struct FESVariant* AttributeValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ActivityBase.SetAttribute");

	AActivityBase_SetAttribute_Params params;
	params.AttributeName = AttributeName;
	params.AttributeValue = AttributeValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ActivityBase.RestoringState
// (Native, Event, Public, BlueprintEvent)

void AActivityBase::RestoringState()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ActivityBase.RestoringState");

	AActivityBase_RestoringState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ActivityBase.ResetActivities
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bIncludingThis                 (Parm, ZeroConstructor, IsPlainOldData)

void AActivityBase::ResetActivities(bool* bIncludingThis)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ActivityBase.ResetActivities");

	AActivityBase_ResetActivities_Params params;
	params.bIncludingThis = bIncludingThis;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ActivityBase.OnResetActivity
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void AActivityBase::OnResetActivity()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ActivityBase.OnResetActivity");

	AActivityBase_OnResetActivity_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ActivityBase.OnPlayerLeftActivityLocation
// (Final, Native, Public)
// Parameters:
// TEnumAsByte<EJumpMethod>*      JumpMethod                     (Parm, ZeroConstructor, IsPlainOldData)

void AActivityBase::OnPlayerLeftActivityLocation(TEnumAsByte<EJumpMethod>* JumpMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ActivityBase.OnPlayerLeftActivityLocation");

	AActivityBase_OnPlayerLeftActivityLocation_Params params;
	params.JumpMethod = JumpMethod;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ActivityBase.OnDeactivate
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void AActivityBase::OnDeactivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ActivityBase.OnDeactivate");

	AActivityBase_OnDeactivate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ActivityBase.OnAbandonedByPlayer
// (Native, Event, Public, BlueprintEvent)

void AActivityBase::OnAbandonedByPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ActivityBase.OnAbandonedByPlayer");

	AActivityBase_OnAbandonedByPlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ActivityBase.IsPlayerAtActivityLocation
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AActivityBase::IsPlayerAtActivityLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ActivityBase.IsPlayerAtActivityLocation");

	AActivityBase_IsPlayerAtActivityLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.ActivityBase.HasEnded
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AActivityBase::HasEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ActivityBase.HasEnded");

	AActivityBase_HasEnded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.ActivityBase.FindOrCreateAttribute
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName*                  Key                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FESVariant*             InitValue                      (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           bWasNewlyCreated               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FESVariant              ReturnValue                    (Parm, OutParm, ReturnParm)

struct FESVariant AActivityBase::FindOrCreateAttribute(struct FName* Key, struct FESVariant* InitValue, bool* bWasNewlyCreated)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ActivityBase.FindOrCreateAttribute");

	AActivityBase_FindOrCreateAttribute_Params params;
	params.Key = Key;
	params.InitValue = InitValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bWasNewlyCreated != nullptr)
		*bWasNewlyCreated = params.bWasNewlyCreated;

	return params.ReturnValue;
}


// Function ES2.ActivityBase.FindAttribute
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName*                  AttributeName                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FESVariant              AttributeValue_OUT             (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AActivityBase::FindAttribute(struct FName* AttributeName, struct FESVariant* AttributeValue_OUT)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ActivityBase.FindAttribute");

	AActivityBase_FindAttribute_Params params;
	params.AttributeName = AttributeName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AttributeValue_OUT != nullptr)
		*AttributeValue_OUT = params.AttributeValue_OUT;

	return params.ReturnValue;
}


// Function ES2.ActivityBase.FindActivityInPlayerData
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName*                  InActivityID                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FActivitySaveGameData   SavedData                      (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AActivityBase::STATIC_FindActivityInPlayerData(struct FName* InActivityID, struct FActivitySaveGameData* SavedData)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ActivityBase.FindActivityInPlayerData");

	AActivityBase_FindActivityInPlayerData_Params params;
	params.InActivityID = InActivityID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SavedData != nullptr)
		*SavedData = params.SavedData;

	return params.ReturnValue;
}


// Function ES2.ActivityBase.CheckIfPlayerIsNearby
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AActivityBase::CheckIfPlayerIsNearby()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ActivityBase.CheckIfPlayerIsNearby");

	AActivityBase_CheckIfPlayerIsNearby_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.ActivityBase.ActivateActivity
// (Final, Native, Public, BlueprintCallable)

void AActivityBase::ActivateActivity()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ActivityBase.ActivateActivity");

	AActivityBase_ActivateActivity_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ActivityBase.Abort
// (Final, Native, Public, BlueprintCallable)

void AActivityBase::Abort()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ActivityBase.Abort");

	AActivityBase_Abort_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ActorPostEditEvent.PostEdit
// (Event, Public, BlueprintEvent)

void AActorPostEditEvent::PostEdit()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ActorPostEditEvent.PostEdit");

	AActorPostEditEvent_PostEdit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.AiControllerBase.TargetTurnedHostileCallback
// (Final, Native, Private)
// Parameters:
// TEnumAsByte<EFactions>*        HostileFaction                 (Parm, ZeroConstructor, IsPlainOldData)

void AAiControllerBase::TargetTurnedHostileCallback(TEnumAsByte<EFactions>* HostileFaction)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.AiControllerBase.TargetTurnedHostileCallback");

	AAiControllerBase_TargetTurnedHostileCallback_Params params;
	params.HostileFaction = HostileFaction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.AiControllerBase.SetHomeLocation
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void AAiControllerBase::SetHomeLocation(struct FVector* Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.AiControllerBase.SetHomeLocation");

	AAiControllerBase_SetHomeLocation_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.AiControllerBase.RestartBehaviorTree
// (Final, Native, Public, BlueprintCallable)

void AAiControllerBase::RestartBehaviorTree()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.AiControllerBase.RestartBehaviorTree");

	AAiControllerBase_RestartBehaviorTree_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.AiControllerBase.ChangedFactionCallback
// (Final, Native, Private)
// Parameters:
// TEnumAsByte<EFactions>*        NewFaction                     (Parm, ZeroConstructor, IsPlainOldData)

void AAiControllerBase::ChangedFactionCallback(TEnumAsByte<EFactions>* NewFaction)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.AiControllerBase.ChangedFactionCallback");

	AAiControllerBase_ChangedFactionCallback_Params params;
	params.NewFaction = NewFaction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.AreaGate.ReceivePawnLeaving
// (Event, Public, BlueprintEvent)
// Parameters:
// class AESPawn**                Pawn                           (Parm, ZeroConstructor, IsPlainOldData)

void AAreaGate::ReceivePawnLeaving(class AESPawn** Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.AreaGate.ReceivePawnLeaving");

	AAreaGate_ReceivePawnLeaving_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.AreaGate.ReceivePawnEntering
// (Event, Public, BlueprintEvent)
// Parameters:
// class AESPawn**                Pawn                           (Parm, ZeroConstructor, IsPlainOldData)

void AAreaGate::ReceivePawnEntering(class AESPawn** Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.AreaGate.ReceivePawnEntering");

	AAreaGate_ReceivePawnEntering_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.HitpointComponent.SetMaxHitpoints
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         MaxHP                          (Parm, ZeroConstructor, IsPlainOldData)

void UHitpointComponent::SetMaxHitpoints(float* MaxHP)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.HitpointComponent.SetMaxHitpoints");

	UHitpointComponent_SetMaxHitpoints_Params params;
	params.MaxHP = MaxHP;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.HitpointComponent.SetInvulnerable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bNewInvulnerable               (Parm, ZeroConstructor, IsPlainOldData)

void UHitpointComponent::SetInvulnerable(bool* bNewInvulnerable)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.HitpointComponent.SetInvulnerable");

	UHitpointComponent_SetInvulnerable_Params params;
	params.bNewInvulnerable = bNewInvulnerable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.HitpointComponent.SetCurrentHitpointsWithRatio
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         Ratio                          (Parm, ZeroConstructor, IsPlainOldData)

void UHitpointComponent::SetCurrentHitpointsWithRatio(float* Ratio)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.HitpointComponent.SetCurrentHitpointsWithRatio");

	UHitpointComponent_SetCurrentHitpointsWithRatio_Params params;
	params.Ratio = Ratio;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.HitpointComponent.SetCurrentHitpoints
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         Hitpoints                      (Parm, ZeroConstructor, IsPlainOldData)

void UHitpointComponent::SetCurrentHitpoints(float* Hitpoints)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.HitpointComponent.SetCurrentHitpoints");

	UHitpointComponent_SetCurrentHitpoints_Params params;
	params.Hitpoints = Hitpoints;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.HitpointComponent.IsDepleted
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHitpointComponent::IsDepleted()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.HitpointComponent.IsDepleted");

	UHitpointComponent_IsDepleted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.HitpointComponent.IsDamaged
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHitpointComponent::IsDamaged()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.HitpointComponent.IsDamaged");

	UHitpointComponent_IsDamaged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.HitpointComponent.GetRecentDamageRatio
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UHitpointComponent::GetRecentDamageRatio()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.HitpointComponent.GetRecentDamageRatio");

	UHitpointComponent_GetRecentDamageRatio_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.HitpointComponent.GetRatio
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UHitpointComponent::GetRatio()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.HitpointComponent.GetRatio");

	UHitpointComponent_GetRatio_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.HitpointComponent.GetMaxHitpoints
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UHitpointComponent::GetMaxHitpoints()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.HitpointComponent.GetMaxHitpoints");

	UHitpointComponent_GetMaxHitpoints_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.HitpointComponent.GetCurrentHitpoints
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UHitpointComponent::GetCurrentHitpoints()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.HitpointComponent.GetCurrentHitpoints");

	UHitpointComponent_GetCurrentHitpoints_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.HitpointComponent.ChangeHitpoints
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// float*                         HitpointsDelta                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          OUT_DamageAbsorbed             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          OUT_DamageOverkill             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UHitpointComponent::ChangeHitpoints(float* HitpointsDelta, float* OUT_DamageAbsorbed, float* OUT_DamageOverkill)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.HitpointComponent.ChangeHitpoints");

	UHitpointComponent_ChangeHitpoints_Params params;
	params.HitpointsDelta = HitpointsDelta;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OUT_DamageAbsorbed != nullptr)
		*OUT_DamageAbsorbed = params.OUT_DamageAbsorbed;
	if (OUT_DamageOverkill != nullptr)
		*OUT_DamageOverkill = params.OUT_DamageOverkill;
}


// Function ES2.ArmorComponent.TakeDamage
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// float*                         DamageAmount                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsCritical                    (Parm, ZeroConstructor, IsPlainOldData)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent*           DamageEvent                    (ConstParm, Parm, OutParm, ReferenceParm)
// struct FHitResult*             HitResult                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          DamageAbsorbed                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          DamageRemaining                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UArmorComponent::TakeDamage(float* DamageAmount, bool* bIsCritical, class AController** EventInstigator, class AActor** DamageCauser, struct FDamageEvent* DamageEvent, struct FHitResult* HitResult, float* DamageAbsorbed, float* DamageRemaining)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ArmorComponent.TakeDamage");

	UArmorComponent_TakeDamage_Params params;
	params.DamageAmount = DamageAmount;
	params.bIsCritical = bIsCritical;
	params.EventInstigator = EventInstigator;
	params.DamageCauser = DamageCauser;
	params.DamageEvent = DamageEvent;
	params.HitResult = HitResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DamageAbsorbed != nullptr)
		*DamageAbsorbed = params.DamageAbsorbed;
	if (DamageRemaining != nullptr)
		*DamageRemaining = params.DamageRemaining;
}


// Function ES2.BTT_FollowLeader.TryTeleportIntoFormation
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AESPawn**                Follower                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBTT_FollowLeader::STATIC_TryTeleportIntoFormation(class AESPawn** Follower)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.BTT_FollowLeader.TryTeleportIntoFormation");

	UBTT_FollowLeader_TryTeleportIntoFormation_Params params;
	params.Follower = Follower;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.ConditionBaseComponent.RemoveTokensFrom
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor**                 Target                         (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 ConditionType                  (Parm, ZeroConstructor, IsPlainOldData)
// int*                           Amount                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UConditionBaseComponent::STATIC_RemoveTokensFrom(class AActor** Target, class UClass** ConditionType, int* Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ConditionBaseComponent.RemoveTokensFrom");

	UConditionBaseComponent_RemoveTokensFrom_Params params;
	params.Target = Target;
	params.ConditionType = ConditionType;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.ConditionBaseComponent.RemoveTokens
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int*                           Amount                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UConditionBaseComponent::RemoveTokens(int* Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ConditionBaseComponent.RemoveTokens");

	UConditionBaseComponent_RemoveTokens_Params params;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.ConditionBaseComponent.RemoveCondition
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class AActor**                 Target                         (Parm, ZeroConstructor, IsPlainOldData)
// int*                           ID                             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UConditionBaseComponent::STATIC_RemoveCondition(class AActor** Target, int* ID, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ConditionBaseComponent.RemoveCondition");

	UConditionBaseComponent_RemoveCondition_Params params;
	params.Target = Target;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function ES2.ConditionBaseComponent.GetTokenCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UConditionBaseComponent::GetTokenCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ConditionBaseComponent.GetTokenCount");

	UConditionBaseComponent_GetTokenCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.ConditionBaseComponent.GetRemainingDuration
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UConditionBaseComponent::GetRemainingDuration()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ConditionBaseComponent.GetRemainingDuration");

	UConditionBaseComponent_GetRemainingDuration_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.ConditionBaseComponent.CheckPreconditions
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class AActor**                 Candidate                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UConditionBaseComponent::CheckPreconditions(class AActor** Candidate)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ConditionBaseComponent.CheckPreconditions");

	UConditionBaseComponent_CheckPreconditions_Params params;
	params.Candidate = Candidate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.ConditionBaseComponent.AddCondition
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UClass**                 ConditionClass                 (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Target                         (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 InstigatorUnsafe               (Parm, ZeroConstructor, IsPlainOldData)
// int*                           InstigatorLevel                (Parm, ZeroConstructor, IsPlainOldData)
// int                            Handle_out                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            AmountAdded_out                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float*                         Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// int*                           TokenCount                     (Parm, ZeroConstructor, IsPlainOldData)

void UConditionBaseComponent::STATIC_AddCondition(class UClass** ConditionClass, class AActor** Target, class AActor** InstigatorUnsafe, int* InstigatorLevel, float* Duration, int* TokenCount, int* Handle_out, int* AmountAdded_out)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ConditionBaseComponent.AddCondition");

	UConditionBaseComponent_AddCondition_Params params;
	params.ConditionClass = ConditionClass;
	params.Target = Target;
	params.InstigatorUnsafe = InstigatorUnsafe;
	params.InstigatorLevel = InstigatorLevel;
	params.Duration = Duration;
	params.TokenCount = TokenCount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Handle_out != nullptr)
		*Handle_out = params.Handle_out;
	if (AmountAdded_out != nullptr)
		*AmountAdded_out = params.AmountAdded_out;
}


// Function ES2.ConditionInstigatorComponent.RemoveInstigatedConditionsOfClass
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass**                 ConditionClass                 (Parm, ZeroConstructor, IsPlainOldData)

void UConditionInstigatorComponent::RemoveInstigatedConditionsOfClass(class UClass** ConditionClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ConditionInstigatorComponent.RemoveInstigatedConditionsOfClass");

	UConditionInstigatorComponent_RemoveInstigatedConditionsOfClass_Params params;
	params.ConditionClass = ConditionClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ConditionInstigatorComponent.RemoveInstigatedConditionById
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int*                           ID                             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UConditionInstigatorComponent::RemoveInstigatedConditionById(int* ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ConditionInstigatorComponent.RemoveInstigatedConditionById");

	UConditionInstigatorComponent_RemoveInstigatedConditionById_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.ConditionInstigatorComponent.RemoveAllInstigatedConditions
// (Final, Native, Public, BlueprintCallable)

void UConditionInstigatorComponent::RemoveAllInstigatedConditions()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ConditionInstigatorComponent.RemoveAllInstigatedConditions");

	UConditionInstigatorComponent_RemoveAllInstigatedConditions_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ConditionInstigatorComponent.GetInstigatedHandleForTarget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor**                 TargetActor                    (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 ConditionClass                 (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UConditionInstigatorComponent::GetInstigatedHandleForTarget(class AActor** TargetActor, class UClass** ConditionClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ConditionInstigatorComponent.GetInstigatedHandleForTarget");

	UConditionInstigatorComponent_GetInstigatedHandleForTarget_Params params;
	params.TargetActor = TargetActor;
	params.ConditionClass = ConditionClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.IntensityCondition.TickPerInstigator
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 UnsafeInstigator               (Parm, ZeroConstructor, IsPlainOldData)
// float*                         InstigatorIntensity            (Parm, ZeroConstructor, IsPlainOldData)

void UIntensityCondition::TickPerInstigator(float* DeltaSeconds, class AActor** UnsafeInstigator, float* InstigatorIntensity)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.IntensityCondition.TickPerInstigator");

	UIntensityCondition_TickPerInstigator_Params params;
	params.DeltaSeconds = DeltaSeconds;
	params.UnsafeInstigator = UnsafeInstigator;
	params.InstigatorIntensity = InstigatorIntensity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.IntensityCondition.TickIntensityCondition
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CombinedIntensity              (Parm, ZeroConstructor, IsPlainOldData)

void UIntensityCondition::TickIntensityCondition(float* DeltaSeconds, float* CombinedIntensity)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.IntensityCondition.TickIntensityCondition");

	UIntensityCondition_TickIntensityCondition_Params params;
	params.DeltaSeconds = DeltaSeconds;
	params.CombinedIntensity = CombinedIntensity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.IntensityCondition.OnTokenCountChanged
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           TokenCount                     (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CombinedIntensity              (Parm, ZeroConstructor, IsPlainOldData)

void UIntensityCondition::OnTokenCountChanged(int* TokenCount, float* CombinedIntensity)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.IntensityCondition.OnTokenCountChanged");

	UIntensityCondition_OnTokenCountChanged_Params params;
	params.TokenCount = TokenCount;
	params.CombinedIntensity = CombinedIntensity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.IntensityCondition.InitCondition
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Instigator                     (Parm, ZeroConstructor, IsPlainOldData)
// int*                           InstigatorLevel                (Parm, ZeroConstructor, IsPlainOldData)

void UIntensityCondition::InitCondition(class AActor** Instigator, int* InstigatorLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.IntensityCondition.InitCondition");

	UIntensityCondition_InitCondition_Params params;
	params.Instigator = Instigator;
	params.InstigatorLevel = InstigatorLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.IntensityCondition.CalcIntensity
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Instigator                     (Parm, ZeroConstructor, IsPlainOldData)
// int*                           InstigatorLevel                (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UIntensityCondition::CalcIntensity(class AActor** Instigator, int* InstigatorLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.IntensityCondition.CalcIntensity");

	UIntensityCondition_CalcIntensity_Params params;
	params.Instigator = Instigator;
	params.InstigatorLevel = InstigatorLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.DurationCondition.TickDurationCondition
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CurrentIntensity               (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 CurrentUnsafeInstigator        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         RemainingTotalSeconds          (Parm, ZeroConstructor, IsPlainOldData)

void UDurationCondition::TickDurationCondition(float* DeltaSeconds, float* CurrentIntensity, class AActor** CurrentUnsafeInstigator, float* RemainingTotalSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.DurationCondition.TickDurationCondition");

	UDurationCondition_TickDurationCondition_Params params;
	params.DeltaSeconds = DeltaSeconds;
	params.CurrentIntensity = CurrentIntensity;
	params.CurrentUnsafeInstigator = CurrentUnsafeInstigator;
	params.RemainingTotalSeconds = RemainingTotalSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.DurationCondition.OnTokenCountChanged
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           TokenCount                     (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CurrentIntensity               (Parm, ZeroConstructor, IsPlainOldData)
// float*                         RemainingTotalSeconds          (Parm, ZeroConstructor, IsPlainOldData)

void UDurationCondition::OnTokenCountChanged(int* TokenCount, float* CurrentIntensity, float* RemainingTotalSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.DurationCondition.OnTokenCountChanged");

	UDurationCondition_OnTokenCountChanged_Params params;
	params.TokenCount = TokenCount;
	params.CurrentIntensity = CurrentIntensity;
	params.RemainingTotalSeconds = RemainingTotalSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.DurationCondition.InitCondition
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Instigator                     (Parm, ZeroConstructor, IsPlainOldData)
// int*                           InstigatorLevel                (Parm, ZeroConstructor, IsPlainOldData)

void UDurationCondition::InitCondition(class AActor** Instigator, int* InstigatorLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.DurationCondition.InitCondition");

	UDurationCondition_InitCondition_Params params;
	params.Instigator = Instigator;
	params.InstigatorLevel = InstigatorLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.DurationCondition.CalcIntensity
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 UnsafeInstigator               (Parm, ZeroConstructor, IsPlainOldData)
// int*                           InstigatorLevel                (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UDurationCondition::CalcIntensity(class AActor** UnsafeInstigator, int* InstigatorLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.DurationCondition.CalcIntensity");

	UDurationCondition_CalcIntensity_Params params;
	params.UnsafeInstigator = UnsafeInstigator;
	params.InstigatorLevel = InstigatorLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.ConsumableBase.Terminate
// (Native, Event, Public, BlueprintEvent)

void AConsumableBase::Terminate()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ConsumableBase.Terminate");

	AConsumableBase_Terminate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ConsumableBase.CanBeUsed
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor**                 User                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AConsumableBase::CanBeUsed(class AActor** User)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ConsumableBase.CanBeUsed");

	AConsumableBase_CanBeUsed_Params params;
	params.User = User;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.ConsumableBase.ApplyConsumableAttributes
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class UItem**                  ConsumableItemIn               (Parm, ZeroConstructor, IsPlainOldData)

void AConsumableBase::ApplyConsumableAttributes(class UItem** ConsumableItemIn)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ConsumableBase.ApplyConsumableAttributes");

	AConsumableBase_ApplyConsumableAttributes_Params params;
	params.ConsumableItemIn = ConsumableItemIn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ConsumableComponent.UseSelectedConsumable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bConsume                       (Parm, ZeroConstructor, IsPlainOldData)
// class AConsumableBase*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AConsumableBase* UConsumableComponent::UseSelectedConsumable(bool* bConsume)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ConsumableComponent.UseSelectedConsumable");

	UConsumableComponent_UseSelectedConsumable_Params params;
	params.bConsume = bConsume;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.ConsumableComponent.UseConsumableAtIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int*                           Index                          (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bConsume                       (Parm, ZeroConstructor, IsPlainOldData)
// class AConsumableBase*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AConsumableBase* UConsumableComponent::UseConsumableAtIndex(int* Index, bool* bConsume)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ConsumableComponent.UseConsumableAtIndex");

	UConsumableComponent_UseConsumableAtIndex_Params params;
	params.Index = Index;
	params.bConsume = bConsume;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.ConsumableComponent.StopUsingSelectedConsumable
// (Final, Native, Public, BlueprintCallable)

void UConsumableComponent::StopUsingSelectedConsumable()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ConsumableComponent.StopUsingSelectedConsumable");

	UConsumableComponent_StopUsingSelectedConsumable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ConsumableComponent.StartUsingSelectedConsumable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bConsume                       (Parm, ZeroConstructor, IsPlainOldData)

void UConsumableComponent::StartUsingSelectedConsumable(bool* bConsume)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ConsumableComponent.StartUsingSelectedConsumable");

	UConsumableComponent_StartUsingSelectedConsumable_Params params;
	params.bConsume = bConsume;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ConsumableComponent.SetNewConsumableSlots
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FConsumableInfo>* NewConsumables                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UConsumableComponent::SetNewConsumableSlots(TArray<struct FConsumableInfo>* NewConsumables)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ConsumableComponent.SetNewConsumableSlots");

	UConsumableComponent_SetNewConsumableSlots_Params params;
	params.NewConsumables = NewConsumables;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ConsumableComponent.SelectConsumable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AConsumableBase**        Consumable                     (Parm, ZeroConstructor, IsPlainOldData)

void UConsumableComponent::SelectConsumable(class AConsumableBase** Consumable)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ConsumableComponent.SelectConsumable");

	UConsumableComponent_SelectConsumable_Params params;
	params.Consumable = Consumable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ConsumableComponent.HasConsumable
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName*                  ItemTemplateID                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UConsumableComponent::HasConsumable(struct FName* ItemTemplateID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ConsumableComponent.HasConsumable");

	UConsumableComponent_HasConsumable_Params params;
	params.ItemTemplateID = ItemTemplateID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.ConsumableComponent.GetTriggerRatio
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UConsumableComponent::GetTriggerRatio()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ConsumableComponent.GetTriggerRatio");

	UConsumableComponent_GetTriggerRatio_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.ConsumableComponent.GetSelectedConsumableIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UConsumableComponent::GetSelectedConsumableIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ConsumableComponent.GetSelectedConsumableIndex");

	UConsumableComponent_GetSelectedConsumableIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.ConsumableComponent.GetSelectedConsumableAmount
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UConsumableComponent::GetSelectedConsumableAmount()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ConsumableComponent.GetSelectedConsumableAmount");

	UConsumableComponent_GetSelectedConsumableAmount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.ConsumableComponent.GetSelectedConsumable
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FConsumableInfo         ConsumableOut                  (Parm, OutParm)

void UConsumableComponent::GetSelectedConsumable(struct FConsumableInfo* ConsumableOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ConsumableComponent.GetSelectedConsumable");

	UConsumableComponent_GetSelectedConsumable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ConsumableOut != nullptr)
		*ConsumableOut = params.ConsumableOut;
}


// Function ES2.ConsumableComponent.GetSelectableConsumables
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FConsumableInfo> ConsumablesOut                 (Parm, OutParm, ZeroConstructor)

void UConsumableComponent::GetSelectableConsumables(TArray<struct FConsumableInfo>* ConsumablesOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ConsumableComponent.GetSelectableConsumables");

	UConsumableComponent_GetSelectableConsumables_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ConsumablesOut != nullptr)
		*ConsumablesOut = params.ConsumablesOut;
}


// Function ES2.ConsumableComponent.GetRemainingCoolDownRatio
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName*                  ItemTemplateID                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UConsumableComponent::GetRemainingCoolDownRatio(struct FName* ItemTemplateID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ConsumableComponent.GetRemainingCoolDownRatio");

	UConsumableComponent_GetRemainingCoolDownRatio_Params params;
	params.ItemTemplateID = ItemTemplateID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.ConsumableComponent.GetRemainingCoolDownDurationOfActiveConsumable
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UConsumableComponent::GetRemainingCoolDownDurationOfActiveConsumable()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ConsumableComponent.GetRemainingCoolDownDurationOfActiveConsumable");

	UConsumableComponent_GetRemainingCoolDownDurationOfActiveConsumable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.ConsumableComponent.GetRemainingCoolDownDuration
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName*                  ItemTemplateID                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UConsumableComponent::GetRemainingCoolDownDuration(struct FName* ItemTemplateID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ConsumableComponent.GetRemainingCoolDownDuration");

	UConsumableComponent_GetRemainingCoolDownDuration_Params params;
	params.ItemTemplateID = ItemTemplateID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.ConsumableComponent.GetNumEmptySlots
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UConsumableComponent::GetNumEmptySlots()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ConsumableComponent.GetNumEmptySlots");

	UConsumableComponent_GetNumEmptySlots_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.ConsumableComponent.GetEquippedConsumableDefaultObject
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AConsumableBase*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AConsumableBase* UConsumableComponent::GetEquippedConsumableDefaultObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ConsumableComponent.GetEquippedConsumableDefaultObject");

	UConsumableComponent_GetEquippedConsumableDefaultObject_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.ConsumableComponent.GetConsumableAmountOfSlot
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int*                           SlotIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UConsumableComponent::GetConsumableAmountOfSlot(int* SlotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ConsumableComponent.GetConsumableAmountOfSlot");

	UConsumableComponent_GetConsumableAmountOfSlot_Params params;
	params.SlotIndex = SlotIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.ConsumableComponent.GetConsumableAmount
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName*                  ItemTemplateID                 (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UConsumableComponent::GetConsumableAmount(struct FName* ItemTemplateID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ConsumableComponent.GetConsumableAmount");

	UConsumableComponent_GetConsumableAmount_Params params;
	params.ItemTemplateID = ItemTemplateID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.ConsumableComponent.CanConsumableBeAdded
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass**                 ConsumableClass                (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  ItemTemplateID                 (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EEquipmentInstallResult> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<EEquipmentInstallResult> UConsumableComponent::CanConsumableBeAdded(class UClass** ConsumableClass, struct FName* ItemTemplateID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ConsumableComponent.CanConsumableBeAdded");

	UConsumableComponent_CanConsumableBeAdded_Params params;
	params.ConsumableClass = ConsumableClass;
	params.ItemTemplateID = ItemTemplateID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.ConsumableComponent.AddNewConsumable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass**                 ConsumableClass                (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  ItemTemplateID                 (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EEquipmentInstallResult> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<EEquipmentInstallResult> UConsumableComponent::AddNewConsumable(class UClass** ConsumableClass, struct FName* ItemTemplateID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ConsumableComponent.AddNewConsumable");

	UConsumableComponent_AddNewConsumable_Params params;
	params.ConsumableClass = ConsumableClass;
	params.ItemTemplateID = ItemTemplateID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.DamagePart.RepairOverheat
// (Final, Native, Public, BlueprintCallable)

void ADamagePart::RepairOverheat()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.DamagePart.RepairOverheat");

	ADamagePart_RepairOverheat_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.DamagePart.repair
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor**                 PartOwner                      (Parm, ZeroConstructor, IsPlainOldData)

void ADamagePart::repair(class AActor** PartOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.DamagePart.repair");

	ADamagePart_repair_Params params;
	params.PartOwner = PartOwner;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.DamagePart.Overheat
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor**                 PartOwner                      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bPlayAlertSound                (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DurationSeconds                (Parm, ZeroConstructor, IsPlainOldData)

void ADamagePart::Overheat(class AActor** PartOwner, bool* bPlayAlertSound, float* DurationSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.DamagePart.Overheat");

	ADamagePart_Overheat_Params params;
	params.PartOwner = PartOwner;
	params.bPlayAlertSound = bPlayAlertSound;
	params.DurationSeconds = DurationSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.DamagePart.OnRepairOverheat
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 PartOwner                      (Parm, ZeroConstructor, IsPlainOldData)

void ADamagePart::OnRepairOverheat(class AActor** PartOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.DamagePart.OnRepairOverheat");

	ADamagePart_OnRepairOverheat_Params params;
	params.PartOwner = PartOwner;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.DamagePart.OnRepair
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 PartOwner                      (Parm, ZeroConstructor, IsPlainOldData)

void ADamagePart::OnRepair(class AActor** PartOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.DamagePart.OnRepair");

	ADamagePart_OnRepair_Params params;
	params.PartOwner = PartOwner;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.DamagePart.OnOverheat
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 PartOwner                      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bPlayAlertSound                (Parm, ZeroConstructor, IsPlainOldData)

void ADamagePart::OnOverheat(class AActor** PartOwner, bool* bPlayAlertSound)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.DamagePart.OnOverheat");

	ADamagePart_OnOverheat_Params params;
	params.PartOwner = PartOwner;
	params.bPlayAlertSound = bPlayAlertSound;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.DamagePart.OnDamage
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 PartOwner                      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bPlayAlertSound                (Parm, ZeroConstructor, IsPlainOldData)

void ADamagePart::OnDamage(class AActor** PartOwner, bool* bPlayAlertSound)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.DamagePart.OnDamage");

	ADamagePart_OnDamage_Params params;
	params.PartOwner = PartOwner;
	params.bPlayAlertSound = bPlayAlertSound;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.DamagePart.Damage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor**                 PartOwner                      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DamageRatioIn                  (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bPlayAlertSound                (Parm, ZeroConstructor, IsPlainOldData)

void ADamagePart::Damage(class AActor** PartOwner, float* DamageRatioIn, bool* bPlayAlertSound)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.DamagePart.Damage");

	ADamagePart_Damage_Params params;
	params.PartOwner = PartOwner;
	params.DamageRatioIn = DamageRatioIn;
	params.bPlayAlertSound = bPlayAlertSound;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.DebugLib.SpawnJob
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 TaskClass                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  LocationID                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform*             SpawnTransform                 (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AMissionBase*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AMissionBase* UDebugLib::STATIC_SpawnJob(class UObject** WorldContextObject, class UClass** TaskClass, struct FName* LocationID, struct FTransform* SpawnTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.DebugLib.SpawnJob");

	UDebugLib_SpawnJob_Params params;
	params.WorldContextObject = WorldContextObject;
	params.TaskClass = TaskClass;
	params.LocationID = LocationID;
	params.SpawnTransform = SpawnTransform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.DebugLib.GetConsoleCommands
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<class FString>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class FString> UDebugLib::STATIC_GetConsoleCommands()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.DebugLib.GetConsoleCommands");

	UDebugLib_GetConsoleCommands_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.DebugLib.GetAssetsByClass
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UClass**                 AnyClass                       (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UClass*>          OutRetrievedClasses            (Parm, OutParm, ZeroConstructor)

void UDebugLib::STATIC_GetAssetsByClass(class UClass** AnyClass, TArray<class UClass*>* OutRetrievedClasses)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.DebugLib.GetAssetsByClass");

	UDebugLib_GetAssetsByClass_Params params;
	params.AnyClass = AnyClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutRetrievedClasses != nullptr)
		*OutRetrievedClasses = params.OutRetrievedClasses;
}


// Function ES2.DeviceBase.OnDeactivate
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 OwnerOfDevice                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADeviceBase::OnDeactivate(class AActor** OwnerOfDevice)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.DeviceBase.OnDeactivate");

	ADeviceBase_OnDeactivate_Params params;
	params.OwnerOfDevice = OwnerOfDevice;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.DeviceBase.OnActivate
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 OwnerOfDevice                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADeviceBase::OnActivate(class AActor** OwnerOfDevice)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.DeviceBase.OnActivate");

	ADeviceBase_OnActivate_Params params;
	params.OwnerOfDevice = OwnerOfDevice;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.DeviceBase.IsAvailable
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADeviceBase::IsAvailable()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.DeviceBase.IsAvailable");

	ADeviceBase_IsAvailable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.DeviceBase.IsActivated
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor**                 DeviceOwner                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADeviceBase::IsActivated(class AActor** DeviceOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.DeviceBase.IsActivated");

	ADeviceBase_IsActivated_Params params;
	params.DeviceOwner = DeviceOwner;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.DeviceBase.GetRemainingEffectRatio
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ADeviceBase::GetRemainingEffectRatio()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.DeviceBase.GetRemainingEffectRatio");

	ADeviceBase_GetRemainingEffectRatio_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.DeviceBase.GetRemainingEffectDuration
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ADeviceBase::GetRemainingEffectDuration()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.DeviceBase.GetRemainingEffectDuration");

	ADeviceBase_GetRemainingEffectDuration_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.DeviceBase.GetRemainingCoolDownRatio
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ADeviceBase::GetRemainingCoolDownRatio()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.DeviceBase.GetRemainingCoolDownRatio");

	ADeviceBase_GetRemainingCoolDownRatio_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.DeviceBase.GetRemainingCoolDownDuration
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ADeviceBase::GetRemainingCoolDownDuration()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.DeviceBase.GetRemainingCoolDownDuration");

	ADeviceBase_GetRemainingCoolDownDuration_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.DeviceBase.GetRemainingCharges
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ADeviceBase::GetRemainingCharges()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.DeviceBase.GetRemainingCharges");

	ADeviceBase_GetRemainingCharges_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.DeviceBase.Deactivate
// (Native, Public, BlueprintCallable)
// Parameters:
// class AActor**                 OwnerOfDevice                  (Parm, ZeroConstructor, IsPlainOldData)

void ADeviceBase::Deactivate(class AActor** OwnerOfDevice)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.DeviceBase.Deactivate");

	ADeviceBase_Deactivate_Params params;
	params.OwnerOfDevice = OwnerOfDevice;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.DeviceBase.CouldBeActivatedAfterCooldown
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor**                 OwnerOfDevice                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADeviceBase::CouldBeActivatedAfterCooldown(class AActor** OwnerOfDevice)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.DeviceBase.CouldBeActivatedAfterCooldown");

	ADeviceBase_CouldBeActivatedAfterCooldown_Params params;
	params.OwnerOfDevice = OwnerOfDevice;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.DeviceBase.ClearEffectDuration
// (Final, Native, Public, BlueprintCallable)

void ADeviceBase::ClearEffectDuration()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.DeviceBase.ClearEffectDuration");

	ADeviceBase_ClearEffectDuration_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.DeviceBase.ClearCooldowns
// (Final, Native, Public, BlueprintCallable)

void ADeviceBase::ClearCooldowns()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.DeviceBase.ClearCooldowns");

	ADeviceBase_ClearCooldowns_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.DeviceBase.CanBeActivated
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor**                 OwnerOfDevice                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADeviceBase::CanBeActivated(class AActor** OwnerOfDevice)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.DeviceBase.CanBeActivated");

	ADeviceBase_CanBeActivated_Params params;
	params.OwnerOfDevice = OwnerOfDevice;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.DeviceBase.ApplyDeviceAttributes
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class UItem**                  DeviceItemIn                   (Parm, ZeroConstructor, IsPlainOldData)

void ADeviceBase::ApplyDeviceAttributes(class UItem** DeviceItemIn)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.DeviceBase.ApplyDeviceAttributes");

	ADeviceBase_ApplyDeviceAttributes_Params params;
	params.DeviceItemIn = DeviceItemIn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.DeviceBase.Activate
// (Native, Public, BlueprintCallable)
// Parameters:
// class AActor**                 OwnerOfDevice                  (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DeviceCustomValue              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADeviceBase::Activate(class AActor** OwnerOfDevice, float* DeviceCustomValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.DeviceBase.Activate");

	ADeviceBase_Activate_Params params;
	params.OwnerOfDevice = OwnerOfDevice;
	params.DeviceCustomValue = DeviceCustomValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.DeviceComponent.UninstallDevice
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass**                 DeviceClass                    (Parm, ZeroConstructor, IsPlainOldData)

void UDeviceComponent::UninstallDevice(class UClass** DeviceClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.DeviceComponent.UninstallDevice");

	UDeviceComponent_UninstallDevice_Params params;
	params.DeviceClass = DeviceClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.DeviceComponent.ToggleEquippedDevice
// (Final, Native, Public, BlueprintCallable)

void UDeviceComponent::ToggleEquippedDevice()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.DeviceComponent.ToggleEquippedDevice");

	UDeviceComponent_ToggleEquippedDevice_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.DeviceComponent.ToggleDevice
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int*                           DeviceIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void UDeviceComponent::ToggleDevice(int* DeviceIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.DeviceComponent.ToggleDevice");

	UDeviceComponent_ToggleDevice_Params params;
	params.DeviceIndex = DeviceIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.DeviceComponent.SetNewDeviceSlots
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FDeviceInfo>*    NewDeviceSlots                 (Parm, ZeroConstructor)

void UDeviceComponent::SetNewDeviceSlots(TArray<struct FDeviceInfo>* NewDeviceSlots)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.DeviceComponent.SetNewDeviceSlots");

	UDeviceComponent_SetNewDeviceSlots_Params params;
	params.NewDeviceSlots = NewDeviceSlots;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.DeviceComponent.SelectDevice
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ADeviceBase**            Device                         (Parm, ZeroConstructor, IsPlainOldData)

void UDeviceComponent::SelectDevice(class ADeviceBase** Device)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.DeviceComponent.SelectDevice");

	UDeviceComponent_SelectDevice_Params params;
	params.Device = Device;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.DeviceComponent.ResetCooldowns
// (Final, Native, Public, BlueprintCallable)

void UDeviceComponent::ResetCooldowns()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.DeviceComponent.ResetCooldowns");

	UDeviceComponent_ResetCooldowns_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.DeviceComponent.ReInit
// (Final, Native, Public, BlueprintCallable)

void UDeviceComponent::ReInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.DeviceComponent.ReInit");

	UDeviceComponent_ReInit_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.DeviceComponent.OverrideDevices
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FDeviceInfo>*    NewDeviceSlots                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UDeviceComponent::OverrideDevices(TArray<struct FDeviceInfo>* NewDeviceSlots)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.DeviceComponent.OverrideDevices");

	UDeviceComponent_OverrideDevices_Params params;
	params.NewDeviceSlots = NewDeviceSlots;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.DeviceComponent.IsAnyDeviceCoolingDown
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDeviceComponent::IsAnyDeviceCoolingDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.DeviceComponent.IsAnyDeviceCoolingDown");

	UDeviceComponent_IsAnyDeviceCoolingDown_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.DeviceComponent.InstallNewDevice
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FDeviceInfo*            DeviceInfo                     (ConstParm, Parm, OutParm, ReferenceParm)
// TEnumAsByte<EEquipmentInstallResult> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<EEquipmentInstallResult> UDeviceComponent::InstallNewDevice(struct FDeviceInfo* DeviceInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.DeviceComponent.InstallNewDevice");

	UDeviceComponent_InstallNewDevice_Params params;
	params.DeviceInfo = DeviceInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.DeviceComponent.GetTriggerRatio
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UDeviceComponent::GetTriggerRatio()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.DeviceComponent.GetTriggerRatio");

	UDeviceComponent_GetTriggerRatio_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.DeviceComponent.GetSelectedDeviceInstance
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class ADeviceBase*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ADeviceBase* UDeviceComponent::GetSelectedDeviceInstance()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.DeviceComponent.GetSelectedDeviceInstance");

	UDeviceComponent_GetSelectedDeviceInstance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.DeviceComponent.GetSelectedDevice
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FDeviceInfo             DeviceOut                      (Parm, OutParm)

void UDeviceComponent::GetSelectedDevice(struct FDeviceInfo* DeviceOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.DeviceComponent.GetSelectedDevice");

	UDeviceComponent_GetSelectedDevice_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DeviceOut != nullptr)
		*DeviceOut = params.DeviceOut;
}


// Function ES2.DeviceComponent.GetNumEmptySlots
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UDeviceComponent::GetNumEmptySlots()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.DeviceComponent.GetNumEmptySlots");

	UDeviceComponent_GetNumEmptySlots_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.DeviceComponent.GetDeviceInstance
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int*                           SlotIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// class ADeviceBase*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ADeviceBase* UDeviceComponent::GetDeviceInstance(int* SlotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.DeviceComponent.GetDeviceInstance");

	UDeviceComponent_GetDeviceInstance_Params params;
	params.SlotIndex = SlotIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.DeviceComponent.GetDevice
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// int*                           SlotIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FDeviceInfo             DeviceOut                      (Parm, OutParm)

void UDeviceComponent::GetDevice(int* SlotIndex, struct FDeviceInfo* DeviceOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.DeviceComponent.GetDevice");

	UDeviceComponent_GetDevice_Params params;
	params.SlotIndex = SlotIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DeviceOut != nullptr)
		*DeviceOut = params.DeviceOut;
}


// Function ES2.DeviceComponent.DeviceCanBeInstalled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass**                 DeviceClass                    (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EEquipmentInstallResult> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<EEquipmentInstallResult> UDeviceComponent::DeviceCanBeInstalled(class UClass** DeviceClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.DeviceComponent.DeviceCanBeInstalled");

	UDeviceComponent_DeviceCanBeInstalled_Params params;
	params.DeviceClass = DeviceClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.DialogManager.StopCurrentDialog
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDialogManager::StopCurrentDialog()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.DialogManager.StopCurrentDialog");

	UDialogManager_StopCurrentDialog_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.DialogManager.SkipCurrentParagraph
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool*                          MenuDialog                     (Parm, ZeroConstructor, IsPlainOldData)

void UDialogManager::STATIC_SkipCurrentParagraph(bool* MenuDialog)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.DialogManager.SkipCurrentParagraph");

	UDialogManager_SkipCurrentParagraph_Params params;
	params.MenuDialog = MenuDialog;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.DialogManager.SkipCurrentDialog
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool*                          MenuDialog                     (Parm, ZeroConstructor, IsPlainOldData)

void UDialogManager::STATIC_SkipCurrentDialog(bool* MenuDialog)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.DialogManager.SkipCurrentDialog");

	UDialogManager_SkipCurrentDialog_Params params;
	params.MenuDialog = MenuDialog;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.DialogManager.SkipAllDialogs
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool*                          MenuDialog                     (Parm, ZeroConstructor, IsPlainOldData)

void UDialogManager::STATIC_SkipAllDialogs(bool* MenuDialog)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.DialogManager.SkipAllDialogs");

	UDialogManager_SkipAllDialogs_Params params;
	params.MenuDialog = MenuDialog;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.DialogManager.SetPausedCurrentParagraph
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool*                          bPause                         (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          MenuDialog                     (Parm, ZeroConstructor, IsPlainOldData)

void UDialogManager::STATIC_SetPausedCurrentParagraph(bool* bPause, bool* MenuDialog)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.DialogManager.SetPausedCurrentParagraph");

	UDialogManager_SetPausedCurrentParagraph_Params params;
	params.bPause = bPause;
	params.MenuDialog = MenuDialog;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.DialogManager.SetPause
// (Final, Native, Private)
// Parameters:
// bool*                          bIsPaused                      (Parm, ZeroConstructor, IsPlainOldData)

void UDialogManager::SetPause(bool* bIsPaused)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.DialogManager.SetPause");

	UDialogManager_SetPause_Params params;
	params.bIsPaused = bIsPaused;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.DialogManager.IsQueueEmpty
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool*                          MenuDialog                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDialogManager::STATIC_IsQueueEmpty(bool* MenuDialog)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.DialogManager.IsQueueEmpty");

	UDialogManager_IsQueueEmpty_Params params;
	params.MenuDialog = MenuDialog;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.DialogManager.IsMissionDialogPlayingOrEnqueued
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool*                          MenuDialog                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDialogManager::STATIC_IsMissionDialogPlayingOrEnqueued(bool* MenuDialog)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.DialogManager.IsMissionDialogPlayingOrEnqueued");

	UDialogManager_IsMissionDialogPlayingOrEnqueued_Params params;
	params.MenuDialog = MenuDialog;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.DialogManager.IsAnyDialogRunning
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool*                          MenuDialog                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDialogManager::STATIC_IsAnyDialogRunning(bool* MenuDialog)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.DialogManager.IsAnyDialogRunning");

	UDialogManager_IsAnyDialogRunning_Params params;
	params.MenuDialog = MenuDialog;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.DialogManager.GetDialogIDs
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDialogIDs*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UDialogIDs* UDialogManager::STATIC_GetDialogIDs()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.DialogManager.GetDialogIDs");

	UDialogManager_GetDialogIDs_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.DialogManager.GetCurrentSpeaker
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool*                          MenuDialog                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData)

struct FName UDialogManager::STATIC_GetCurrentSpeaker(bool* MenuDialog)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.DialogManager.GetCurrentSpeaker");

	UDialogManager_GetCurrentSpeaker_Params params;
	params.MenuDialog = MenuDialog;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.DialogManager.EnqueueMovieSubtitles
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName*                  DialogID                       (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          MenuDialog                     (Parm, ZeroConstructor, IsPlainOldData)

void UDialogManager::STATIC_EnqueueMovieSubtitles(struct FName* DialogID, bool* MenuDialog)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.DialogManager.EnqueueMovieSubtitles");

	UDialogManager_EnqueueMovieSubtitles_Params params;
	params.DialogID = DialogID;
	params.MenuDialog = MenuDialog;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.DialogManager.EnqueueMissionDialogWithEvent
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName*                  DialogID                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptDelegate*        DialogFinishedEvent            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// float*                         Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          MenuDialog                     (Parm, ZeroConstructor, IsPlainOldData)

void UDialogManager::STATIC_EnqueueMissionDialogWithEvent(struct FName* DialogID, struct FScriptDelegate* DialogFinishedEvent, float* Delay, bool* MenuDialog)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.DialogManager.EnqueueMissionDialogWithEvent");

	UDialogManager_EnqueueMissionDialogWithEvent_Params params;
	params.DialogID = DialogID;
	params.DialogFinishedEvent = DialogFinishedEvent;
	params.Delay = Delay;
	params.MenuDialog = MenuDialog;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.DialogManager.EnqueueMissionDialog
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName*                  DialogID                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          MenuDialog                     (Parm, ZeroConstructor, IsPlainOldData)

void UDialogManager::STATIC_EnqueueMissionDialog(struct FName* DialogID, float* Delay, bool* MenuDialog)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.DialogManager.EnqueueMissionDialog");

	UDialogManager_EnqueueMissionDialog_Params params;
	params.DialogID = DialogID;
	params.Delay = Delay;
	params.MenuDialog = MenuDialog;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.DialogManager.EnqueueDialogWithEvent
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName*                  DialogID                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptDelegate*        DialogFinishedEvent            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// float*                         Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EDialog>*          DialogType                     (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          MenuDialog                     (Parm, ZeroConstructor, IsPlainOldData)

void UDialogManager::STATIC_EnqueueDialogWithEvent(struct FName* DialogID, struct FScriptDelegate* DialogFinishedEvent, float* Delay, TEnumAsByte<EDialog>* DialogType, bool* MenuDialog)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.DialogManager.EnqueueDialogWithEvent");

	UDialogManager_EnqueueDialogWithEvent_Params params;
	params.DialogID = DialogID;
	params.DialogFinishedEvent = DialogFinishedEvent;
	params.Delay = Delay;
	params.DialogType = DialogType;
	params.MenuDialog = MenuDialog;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.DialogManager.EnqueueDialog
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName*                  DialogID                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EDialog>*          DialogType                     (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          MenuDialog                     (Parm, ZeroConstructor, IsPlainOldData)

void UDialogManager::STATIC_EnqueueDialog(struct FName* DialogID, float* Delay, TEnumAsByte<EDialog>* DialogType, bool* MenuDialog)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.DialogManager.EnqueueDialog");

	UDialogManager_EnqueueDialog_Params params;
	params.DialogID = DialogID;
	params.Delay = Delay;
	params.DialogType = DialogType;
	params.MenuDialog = MenuDialog;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.DialogManager.EnqueueDebugParagraphWithEvent
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FText*                  Text                           (Parm)
// struct FName*                  SpeakerID                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptDelegate*        DialogFinishedEvent            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// float*                         Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EDialog>*          DialogType                     (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          MenuDialog                     (Parm, ZeroConstructor, IsPlainOldData)

void UDialogManager::STATIC_EnqueueDebugParagraphWithEvent(struct FText* Text, struct FName* SpeakerID, struct FScriptDelegate* DialogFinishedEvent, float* Delay, TEnumAsByte<EDialog>* DialogType, bool* MenuDialog)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.DialogManager.EnqueueDebugParagraphWithEvent");

	UDialogManager_EnqueueDebugParagraphWithEvent_Params params;
	params.Text = Text;
	params.SpeakerID = SpeakerID;
	params.DialogFinishedEvent = DialogFinishedEvent;
	params.Delay = Delay;
	params.DialogType = DialogType;
	params.MenuDialog = MenuDialog;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.DialogManager.EnqueueDebugParagraph
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FText*                  Text                           (Parm)
// struct FName*                  SpeakerID                      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EDialog>*          DialogType                     (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          MenuDialog                     (Parm, ZeroConstructor, IsPlainOldData)

void UDialogManager::STATIC_EnqueueDebugParagraph(struct FText* Text, struct FName* SpeakerID, float* Delay, TEnumAsByte<EDialog>* DialogType, bool* MenuDialog)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.DialogManager.EnqueueDebugParagraph");

	UDialogManager_EnqueueDebugParagraph_Params params;
	params.Text = Text;
	params.SpeakerID = SpeakerID;
	params.Delay = Delay;
	params.DialogType = DialogType;
	params.MenuDialog = MenuDialog;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.DialogManager.ClearDialogQueue
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool*                          MenuDialog                     (Parm, ZeroConstructor, IsPlainOldData)

void UDialogManager::STATIC_ClearDialogQueue(bool* MenuDialog)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.DialogManager.ClearDialogQueue");

	UDialogManager_ClearDialogQueue_Params params;
	params.MenuDialog = MenuDialog;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.DialogManager.BindSubtitleLineStarted
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate*        Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UDialogManager::STATIC_BindSubtitleLineStarted(struct FScriptDelegate* Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.DialogManager.BindSubtitleLineStarted");

	UDialogManager_BindSubtitleLineStarted_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.DialogManager.BindParagraphStarted
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate*        Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UDialogManager::STATIC_BindParagraphStarted(struct FScriptDelegate* Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.DialogManager.BindParagraphStarted");

	UDialogManager_BindParagraphStarted_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.DialogManager.BindParagraphFinished
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate*        Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UDialogManager::STATIC_BindParagraphFinished(struct FScriptDelegate* Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.DialogManager.BindParagraphFinished");

	UDialogManager_BindParagraphFinished_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.DialogManager.BindDialogStarted
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate*        Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UDialogManager::STATIC_BindDialogStarted(struct FScriptDelegate* Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.DialogManager.BindDialogStarted");

	UDialogManager_BindDialogStarted_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.DialogManager.BindDialogResumed
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate*        Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UDialogManager::STATIC_BindDialogResumed(struct FScriptDelegate* Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.DialogManager.BindDialogResumed");

	UDialogManager_BindDialogResumed_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.DialogManager.BindDialogPaused
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate*        Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UDialogManager::STATIC_BindDialogPaused(struct FScriptDelegate* Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.DialogManager.BindDialogPaused");

	UDialogManager_BindDialogPaused_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.DialogManager.BindDialogFinished
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate*        Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UDialogManager::STATIC_BindDialogFinished(struct FScriptDelegate* Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.DialogManager.BindDialogFinished");

	UDialogManager_BindDialogFinished_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.DockableStation.TriggerUndockAnimation
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void ADockableStation::TriggerUndockAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.DockableStation.TriggerUndockAnimation");

	ADockableStation_TriggerUndockAnimation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.DockableStation.PlayerConfirmDocking
// (Final, Native, Private)
// Parameters:
// class UInteractComponent**     InteractComponent              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 InteractActor                  (Parm, ZeroConstructor, IsPlainOldData)

void ADockableStation::PlayerConfirmDocking(class UInteractComponent** InteractComponent, class AActor** InteractActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.DockableStation.PlayerConfirmDocking");

	ADockableStation_PlayerConfirmDocking_Params params;
	params.InteractComponent = InteractComponent;
	params.InteractActor = InteractActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.DockableStation.OnPlayerBeginDocking
// (Native, Event, Public, BlueprintEvent)

void ADockableStation::OnPlayerBeginDocking()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.DockableStation.OnPlayerBeginDocking");

	ADockableStation_OnPlayerBeginDocking_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.DockableStation.IsHomebase
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADockableStation::IsHomebase()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.DockableStation.IsHomebase");

	ADockableStation_IsHomebase_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.DockableStation.GetShopInventory
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UInventory*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UInventory* ADockableStation::GetShopInventory()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.DockableStation.GetShopInventory");

	ADockableStation_GetShopInventory_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.DockableStation.GetShipsForSale
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FShipData>       Ships                          (Parm, OutParm, ZeroConstructor)

void ADockableStation::GetShipsForSale(TArray<struct FShipData>* Ships)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.DockableStation.GetShipsForSale");

	ADockableStation_GetShipsForSale_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Ships != nullptr)
		*Ships = params.Ships;
}


// Function ES2.DockableStation.GetLootDropWorldTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform ADockableStation::GetLootDropWorldTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.DockableStation.GetLootDropWorldTransform");

	ADockableStation_GetLootDropWorldTransform_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.DockableStation.GetJobOffers
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FTaskSaveGameData> JobOffers                      (Parm, OutParm, ZeroConstructor)

void ADockableStation::GetJobOffers(TArray<struct FTaskSaveGameData>* JobOffers)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.DockableStation.GetJobOffers");

	ADockableStation_GetJobOffers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (JobOffers != nullptr)
		*JobOffers = params.JobOffers;
}


// Function ES2.SpawnGizmoBase.SpawnClass
// (Native, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 ClassToSpawnOverride           (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESpawnGroup>*      ConcreteSpawnGroup             (Parm, ZeroConstructor, IsPlainOldData)
// struct FSpawnParameter*        SpawnParameter                 (ConstParm, Parm)
// struct FRandomStream           R                              (Parm, OutParm, ZeroConstructor, ReferenceParm)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* ASpawnGizmoBase::SpawnClass(class UClass** ClassToSpawnOverride, TEnumAsByte<ESpawnGroup>* ConcreteSpawnGroup, struct FSpawnParameter* SpawnParameter, struct FRandomStream* R)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.SpawnGizmoBase.SpawnClass");

	ASpawnGizmoBase_SpawnClass_Params params;
	params.ClassToSpawnOverride = ClassToSpawnOverride;
	params.ConcreteSpawnGroup = ConcreteSpawnGroup;
	params.SpawnParameter = SpawnParameter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (R != nullptr)
		*R = params.R;

	return params.ReturnValue;
}


// Function ES2.SpawnGizmoBase.PostRestoreActor
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 RestoredActor                  (Parm, ZeroConstructor, IsPlainOldData)

void ASpawnGizmoBase::PostRestoreActor(class AActor** RestoredActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.SpawnGizmoBase.PostRestoreActor");

	ASpawnGizmoBase_PostRestoreActor_Params params;
	params.RestoredActor = RestoredActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.SpawnGizmoBase.GetEmptyGroupProbability
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ESpawnGroup>*      Type                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ASpawnGizmoBase::GetEmptyGroupProbability(TEnumAsByte<ESpawnGroup>* Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.SpawnGizmoBase.GetEmptyGroupProbability");

	ASpawnGizmoBase_GetEmptyGroupProbability_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.DockingGizmo.TouchDownShip
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AESPawn**                ShipToLand                     (Parm, ZeroConstructor, IsPlainOldData)

void ADockingGizmo::TouchDownShip(class AESPawn** ShipToLand)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.DockingGizmo.TouchDownShip");

	ADockingGizmo_TouchDownShip_Params params;
	params.ShipToLand = ShipToLand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.DockingGizmo.OnOverlap
// (Final, Native, Protected, HasOutParms)
// Parameters:
// class UPrimitiveComponent**    OverlappedComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int*                           OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ADockingGizmo::OnOverlap(class UPrimitiveComponent** OverlappedComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex, bool* bFromSweep, struct FHitResult* SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.DockingGizmo.OnOverlap");

	ADockingGizmo_OnOverlap_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.DockingGizmo.LaunchShip
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AESPawn**                ShipToLaunch                   (Parm, ZeroConstructor, IsPlainOldData)

void ADockingGizmo::LaunchShip(class AESPawn** ShipToLaunch)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.DockingGizmo.LaunchShip");

	ADockingGizmo_LaunchShip_Params params;
	params.ShipToLaunch = ShipToLaunch;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.DockingGizmo.LandShip
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AESPawn**                ShipToLand                     (Parm, ZeroConstructor, IsPlainOldData)

void ADockingGizmo::LandShip(class AESPawn** ShipToLand)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.DockingGizmo.LandShip");

	ADockingGizmo_LandShip_Params params;
	params.ShipToLand = ShipToLand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.DockingGizmo.GetAssosiatedDock_Slow
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ADockableStation*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ADockableStation* ADockingGizmo::GetAssosiatedDock_Slow()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.DockingGizmo.GetAssosiatedDock_Slow");

	ADockingGizmo_GetAssosiatedDock_Slow_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.DockingGizmo.GetApproachingLocation
// (Native, Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ADockingGizmo::GetApproachingLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.DockingGizmo.GetApproachingLocation");

	ADockingGizmo_GetApproachingLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.DockingGizmo.CalcLandingTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class AESPawn**                Ship                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform ADockingGizmo::CalcLandingTransform(class AESPawn** Ship)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.DockingGizmo.CalcLandingTransform");

	ADockingGizmo_CalcLandingTransform_Params params;
	params.Ship = Ship;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.EnergyCoreComponent.RemoveAllocation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FEnergyAllocation*      Allocation                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEnergyCoreComponent::RemoveAllocation(struct FEnergyAllocation* Allocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.EnergyCoreComponent.RemoveAllocation");

	UEnergyCoreComponent_RemoveAllocation_Params params;
	params.Allocation = Allocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.EnergyCoreComponent.IsGainingEnergyRegenBonus
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEnergyCoreComponent::IsGainingEnergyRegenBonus()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.EnergyCoreComponent.IsGainingEnergyRegenBonus");

	UEnergyCoreComponent_IsGainingEnergyRegenBonus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.EnergyCoreComponent.HasEnergy
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float*                         TestEnergy                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEnergyCoreComponent::HasEnergy(float* TestEnergy)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.EnergyCoreComponent.HasEnergy");

	UEnergyCoreComponent_HasEnergy_Params params;
	params.TestEnergy = TestEnergy;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.EnergyCoreComponent.GetRatio
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool*                          bRegardNonAllocatedEnergyOnly  (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UEnergyCoreComponent::GetRatio(bool* bRegardNonAllocatedEnergyOnly)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.EnergyCoreComponent.GetRatio");

	UEnergyCoreComponent_GetRatio_Params params;
	params.bRegardNonAllocatedEnergyOnly = bRegardNonAllocatedEnergyOnly;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.EnergyCoreComponent.GetEnergy
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UEnergyCoreComponent::GetEnergy()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.EnergyCoreComponent.GetEnergy");

	UEnergyCoreComponent_GetEnergy_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.EnergyCoreComponent.GetCapacity
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool*                          bRegardNonAllocatedEnergyOnly  (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UEnergyCoreComponent::GetCapacity(bool* bRegardNonAllocatedEnergyOnly)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.EnergyCoreComponent.GetCapacity");

	UEnergyCoreComponent_GetCapacity_Params params;
	params.bRegardNonAllocatedEnergyOnly = bRegardNonAllocatedEnergyOnly;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.EnergyCoreComponent.GetAllocations
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FEnergyAllocation> Allocations                    (Parm, OutParm, ZeroConstructor)

void UEnergyCoreComponent::GetAllocations(TArray<struct FEnergyAllocation>* Allocations)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.EnergyCoreComponent.GetAllocations");

	UEnergyCoreComponent_GetAllocations_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Allocations != nullptr)
		*Allocations = params.Allocations;
}


// Function ES2.EnergyCoreComponent.GetAllocatedEnergyRatio
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UEnergyCoreComponent::GetAllocatedEnergyRatio()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.EnergyCoreComponent.GetAllocatedEnergyRatio");

	UEnergyCoreComponent_GetAllocatedEnergyRatio_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.EnergyCoreComponent.GetAllocatedEnergy
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UEnergyCoreComponent::GetAllocatedEnergy()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.EnergyCoreComponent.GetAllocatedEnergy");

	UEnergyCoreComponent_GetAllocatedEnergy_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.EnergyCoreComponent.ChangeEnergy
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         EnergyDelta                    (Parm, ZeroConstructor, IsPlainOldData)

void UEnergyCoreComponent::ChangeEnergy(float* EnergyDelta)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.EnergyCoreComponent.ChangeEnergy");

	UEnergyCoreComponent_ChangeEnergy_Params params;
	params.EnergyDelta = EnergyDelta;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.EnergyCoreComponent.AddAllocation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FEnergyAllocation*      Allocation                     (Parm)
// bool*                          AllocateEvenIfCurrentEnergyIsLower (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEnergyCoreComponent::AddAllocation(struct FEnergyAllocation* Allocation, bool* AllocateEvenIfCurrentEnergyIsLower)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.EnergyCoreComponent.AddAllocation");

	UEnergyCoreComponent_AddAllocation_Params params;
	params.Allocation = Allocation;
	params.AllocateEvenIfCurrentEnergyIsLower = AllocateEvenIfCurrentEnergyIsLower;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.EngineUtilities.SetResolution
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int*                           InResolutionX                  (Parm, ZeroConstructor, IsPlainOldData)
// int*                           InResolutionY                  (Parm, ZeroConstructor, IsPlainOldData)

void UEngineUtilities::STATIC_SetResolution(int* InResolutionX, int* InResolutionY)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.EngineUtilities.SetResolution");

	UEngineUtilities_SetResolution_Params params;
	params.InResolutionX = InResolutionX;
	params.InResolutionY = InResolutionY;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.EngineUtilities.SetMaxDrawDistanceLight
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class ULightComponent**        LightComponent                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float*                         Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         FadeRange                      (Parm, ZeroConstructor, IsPlainOldData)

void UEngineUtilities::STATIC_SetMaxDrawDistanceLight(class ULightComponent** LightComponent, float* Distance, float* FadeRange)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.EngineUtilities.SetMaxDrawDistanceLight");

	UEngineUtilities_SetMaxDrawDistanceLight_Params params;
	params.LightComponent = LightComponent;
	params.Distance = Distance;
	params.FadeRange = FadeRange;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.EngineUtilities.SetFullScreenMode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EWindowMode>*      WindowMode                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngineUtilities::STATIC_SetFullScreenMode(TEnumAsByte<EWindowMode>* WindowMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.EngineUtilities.SetFullScreenMode");

	UEngineUtilities_SetFullScreenMode_Params params;
	params.WindowMode = WindowMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.EngineUtilities.PrintFocusedWidget
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController**      PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Delay                          (Parm, ZeroConstructor, IsPlainOldData)

void UEngineUtilities::STATIC_PrintFocusedWidget(class APlayerController** PlayerController, float* Delay)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.EngineUtilities.PrintFocusedWidget");

	UEngineUtilities_PrintFocusedWidget_Params params;
	params.PlayerController = PlayerController;
	params.Delay = Delay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.EngineUtilities.LoadTexture
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString*                 Path                           (Parm, ZeroConstructor)
// class FString*                 AssetName                      (Parm, ZeroConstructor)
// class UTexture*                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTexture* UEngineUtilities::STATIC_LoadTexture(class FString* Path, class FString* AssetName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.EngineUtilities.LoadTexture");

	UEngineUtilities_LoadTexture_Params params;
	params.Path = Path;
	params.AssetName = AssetName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.EngineUtilities.LoadLevelInstance
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// TSoftObjectPtr<class UObject>* LevelAsset                     (Parm)
// struct FVector*                Location                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator*               Rotation                       (Parm, ZeroConstructor, IsPlainOldData)
// class ULevelStreamingDynamic*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ULevelStreamingDynamic* UEngineUtilities::STATIC_LoadLevelInstance(class UObject** WorldContextObject, TSoftObjectPtr<class UObject>* LevelAsset, struct FVector* Location, struct FRotator* Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.EngineUtilities.LoadLevelInstance");

	UEngineUtilities_LoadLevelInstance_Params params;
	params.WorldContextObject = WorldContextObject;
	params.LevelAsset = LevelAsset;
	params.Location = Location;
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.EngineUtilities.LoadClassSynchronous
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TSoftObjectPtr<class UClass>*  ClassSoftRef                   (ConstParm, Parm, OutParm, ReferenceParm)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* UEngineUtilities::STATIC_LoadClassSynchronous(TSoftObjectPtr<class UClass>* ClassSoftRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.EngineUtilities.LoadClassSynchronous");

	UEngineUtilities_LoadClassSynchronous_Params params;
	params.ClassSoftRef = ClassSoftRef;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.EngineUtilities.LoadAssetSynchronous
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TSoftObjectPtr<class UObject>* Target                         (ConstParm, Parm, OutParm, ReferenceParm)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UEngineUtilities::STATIC_LoadAssetSynchronous(TSoftObjectPtr<class UObject>* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.EngineUtilities.LoadAssetSynchronous");

	UEngineUtilities_LoadAssetSynchronous_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.EngineUtilities.IsWithEditor
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEngineUtilities::STATIC_IsWithEditor()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.EngineUtilities.IsWithEditor");

	UEngineUtilities_IsWithEditor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.EngineUtilities.IsPlayingAdv
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UAudioComponent**        AudioComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEngineUtilities::STATIC_IsPlayingAdv(class UAudioComponent** AudioComp)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.EngineUtilities.IsPlayingAdv");

	UEngineUtilities_IsPlayingAdv_Params params;
	params.AudioComp = AudioComp;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.EngineUtilities.IsPlatformConsole
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEngineUtilities::STATIC_IsPlatformConsole()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.EngineUtilities.IsPlatformConsole");

	UEngineUtilities_IsPlatformConsole_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.EngineUtilities.GetSupportedResolutionsWithFallback
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TEnumAsByte<EWindowMode>*      WindowMode                     (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FIntPoint>       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FIntPoint> UEngineUtilities::STATIC_GetSupportedResolutionsWithFallback(TEnumAsByte<EWindowMode>* WindowMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.EngineUtilities.GetSupportedResolutionsWithFallback");

	UEngineUtilities_GetSupportedResolutionsWithFallback_Params params;
	params.WindowMode = WindowMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.EngineUtilities.GetSoundCueDuration
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class USoundCue**              SoundCue                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UEngineUtilities::STATIC_GetSoundCueDuration(class USoundCue** SoundCue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.EngineUtilities.GetSoundCueDuration");

	UEngineUtilities_GetSoundCueDuration_Params params;
	params.SoundCue = SoundCue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.EngineUtilities.GetResolution
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FIntPoint               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FIntPoint UEngineUtilities::STATIC_GetResolution()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.EngineUtilities.GetResolution");

	UEngineUtilities_GetResolution_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.EngineUtilities.GetProjectVersion
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UEngineUtilities::STATIC_GetProjectVersion()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.EngineUtilities.GetProjectVersion");

	UEngineUtilities_GetProjectVersion_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.EngineUtilities.GetPlaybackTimeHACK
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAudioComponent**        AudioComponent                 (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FScriptDelegate*        Event                          (ConstParm, Parm, ZeroConstructor)

void UEngineUtilities::STATIC_GetPlaybackTimeHACK(class UAudioComponent** AudioComponent, struct FScriptDelegate* Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.EngineUtilities.GetPlaybackTimeHACK");

	UEngineUtilities_GetPlaybackTimeHACK_Params params;
	params.AudioComponent = AudioComponent;
	params.Event = Event;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.EngineUtilities.GetMassFromComponent
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UPrimitiveComponent**    Comp                           (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UEngineUtilities::STATIC_GetMassFromComponent(class UPrimitiveComponent** Comp)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.EngineUtilities.GetMassFromComponent");

	UEngineUtilities_GetMassFromComponent_Params params;
	params.Comp = Comp;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.EngineUtilities.GetKeyFName
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FKey*                   Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UEngineUtilities::STATIC_GetKeyFName(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.EngineUtilities.GetKeyFName");

	UEngineUtilities_GetKeyFName_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.EngineUtilities.GetFullScreenMode
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TEnumAsByte<EWindowMode>       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<EWindowMode> UEngineUtilities::STATIC_GetFullScreenMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.EngineUtilities.GetFullScreenMode");

	UEngineUtilities_GetFullScreenMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.EngineUtilities.GetDefaultObject
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UClass**                 Class                          (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UEngineUtilities::STATIC_GetDefaultObject(class UClass** Class)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.EngineUtilities.GetDefaultObject");

	UEngineUtilities_GetDefaultObject_Params params;
	params.Class = Class;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.EngineUtilities.GetAllWidgetsOfClass
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UWidget*>         FoundWidgets                   (Parm, OutParm, ZeroConstructor)
// class UClass**                 WidgetClass                    (Parm, ZeroConstructor, IsPlainOldData)

void UEngineUtilities::STATIC_GetAllWidgetsOfClass(class UObject** WorldContextObject, class UClass** WidgetClass, TArray<class UWidget*>* FoundWidgets)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.EngineUtilities.GetAllWidgetsOfClass");

	UEngineUtilities_GetAllWidgetsOfClass_Params params;
	params.WorldContextObject = WorldContextObject;
	params.WidgetClass = WidgetClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FoundWidgets != nullptr)
		*FoundWidgets = params.FoundWidgets;
}


// Function ES2.EngineUtilities.GetAllStreamingLevels
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class ULevelStreaming*> StreamingLevels_OUT            (Parm, OutParm, ZeroConstructor)

void UEngineUtilities::STATIC_GetAllStreamingLevels(class UObject** WorldContextObject, TArray<class ULevelStreaming*>* StreamingLevels_OUT)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.EngineUtilities.GetAllStreamingLevels");

	UEngineUtilities_GetAllStreamingLevels_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StreamingLevels_OUT != nullptr)
		*StreamingLevels_OUT = params.StreamingLevels_OUT;
}


// Function ES2.EngineUtilities.FormatTextWithNamedArguments
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText*                  Text                           (ConstParm, Parm, OutParm, ReferenceParm)
// TArray<struct FFindReplaceTextArgument>* ReplaceArguments               (Parm, ZeroConstructor)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UEngineUtilities::STATIC_FormatTextWithNamedArguments(struct FText* Text, TArray<struct FFindReplaceTextArgument>* ReplaceArguments)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.EngineUtilities.FormatTextWithNamedArguments");

	UEngineUtilities_FormatTextWithNamedArguments_Params params;
	params.Text = Text;
	params.ReplaceArguments = ReplaceArguments;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.EngineUtilities.FindActorWithFName
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject**                WorldContext                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  Name                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UClass**                 Class                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UEngineUtilities::STATIC_FindActorWithFName(class UObject** WorldContext, struct FName* Name, class UClass** Class)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.EngineUtilities.FindActorWithFName");

	UEngineUtilities_FindActorWithFName_Params params;
	params.WorldContext = WorldContext;
	params.Name = Name;
	params.Class = Class;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.EngineUtilities.FindActorOfClassSlow
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 ActorClass                     (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OutActor                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEngineUtilities::STATIC_FindActorOfClassSlow(class UObject** WorldContextObject, class UClass** ActorClass, class AActor** OutActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.EngineUtilities.FindActorOfClassSlow");

	UEngineUtilities_FindActorOfClassSlow_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ActorClass = ActorClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutActor != nullptr)
		*OutActor = params.OutActor;

	return params.ReturnValue;
}


// Function ES2.EngineUtilities.ConfirmSettingVideoMode
// (Final, Native, Static, Public, BlueprintCallable)

void UEngineUtilities::STATIC_ConfirmSettingVideoMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.EngineUtilities.ConfirmSettingVideoMode");

	UEngineUtilities_ConfirmSettingVideoMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.EngineUtilities.BreakPointDummy
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString*                 StringData                     (Parm, ZeroConstructor)
// int*                           IntData                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         FloatData                      (Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                ObjectData1                    (Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                ObjectData2                    (Parm, ZeroConstructor, IsPlainOldData)

void UEngineUtilities::STATIC_BreakPointDummy(class FString* StringData, int* IntData, float* FloatData, class UObject** ObjectData1, class UObject** ObjectData2)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.EngineUtilities.BreakPointDummy");

	UEngineUtilities_BreakPointDummy_Params params;
	params.StringData = StringData;
	params.IntData = IntData;
	params.FloatData = FloatData;
	params.ObjectData1 = ObjectData1;
	params.ObjectData2 = ObjectData2;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.EscapeTarget.StateChanged
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEscapeTargetState>* NewState                       (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EEscapeTargetState>* OldState                       (Parm, ZeroConstructor, IsPlainOldData)

void AEscapeTarget::StateChanged(TEnumAsByte<EEscapeTargetState>* NewState, TEnumAsByte<EEscapeTargetState>* OldState)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.EscapeTarget.StateChanged");

	AEscapeTarget_StateChanged_Params params;
	params.NewState = NewState;
	params.OldState = OldState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.EscapeTarget.Start
// (Final, Native, Public, BlueprintCallable)

void AEscapeTarget::Start()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.EscapeTarget.Start");

	AEscapeTarget_Start_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.EscapeTarget.GetState
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TEnumAsByte<EEscapeTargetState> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<EEscapeTargetState> AEscapeTarget::GetState()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.EscapeTarget.GetState");

	AEscapeTarget_GetState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.ESGameInstance.SetWorldOriginShifting
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          SetOn                          (Parm, ZeroConstructor, IsPlainOldData)

void UESGameInstance::SetWorldOriginShifting(bool* SetOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESGameInstance.SetWorldOriginShifting");

	UESGameInstance_SetWorldOriginShifting_Params params;
	params.SetOn = SetOn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESGameInstance.SetIngameSoundMuted
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bMute                          (Parm, ZeroConstructor, IsPlainOldData)

void UESGameInstance::SetIngameSoundMuted(bool* bMute)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESGameInstance.SetIngameSoundMuted");

	UESGameInstance_SetIngameSoundMuted_Params params;
	params.bMute = bMute;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESGameInstance.PushPause
// (Final, Native, Static, Public, BlueprintCallable)

void UESGameInstance::STATIC_PushPause()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESGameInstance.PushPause");

	UESGameInstance_PushPause_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESGameInstance.PopPause
// (Final, Native, Static, Public, BlueprintCallable)

void UESGameInstance::STATIC_PopPause()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESGameInstance.PopPause");

	UESGameInstance_PopPause_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESGameInstance.IsPaused
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UESGameInstance::STATIC_IsPaused()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESGameInstance.IsPaused");

	UESGameInstance_IsPaused_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.ESGameInstance.GetWorldOriginShifting
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UESGameInstance::GetWorldOriginShifting()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESGameInstance.GetWorldOriginShifting");

	UESGameInstance_GetWorldOriginShifting_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.ESGameInstance.GetSequenceManager
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class USequenceManager*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USequenceManager* UESGameInstance::STATIC_GetSequenceManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESGameInstance.GetSequenceManager");

	UESGameInstance_GetSequenceManager_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.ESGameInstance.AddRecentlyPlayedSong
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int*                           SongIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void UESGameInstance::AddRecentlyPlayedSong(int* SongIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESGameInstance.AddRecentlyPlayedSong");

	UESGameInstance_AddRecentlyPlayedSong_Params params;
	params.SongIndex = SongIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESGameModeBase.TriggerFadeOut
// (Native, Event, Public, HasOutParms, HasDefaults, BlueprintEvent)
// Parameters:
// struct FLinearColor*           Color                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float*                         Duration                       (Parm, ZeroConstructor, IsPlainOldData)

void AESGameModeBase::TriggerFadeOut(struct FLinearColor* Color, float* Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESGameModeBase.TriggerFadeOut");

	AESGameModeBase_TriggerFadeOut_Params params;
	params.Color = Color;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESGameModeBase.TriggerFadeIn
// (Native, Event, Public, HasOutParms, HasDefaults, BlueprintEvent)
// Parameters:
// struct FLinearColor*           Color                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float*                         Duration                       (Parm, ZeroConstructor, IsPlainOldData)

void AESGameModeBase::TriggerFadeIn(struct FLinearColor* Color, float* Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESGameModeBase.TriggerFadeIn");

	AESGameModeBase_TriggerFadeIn_Params params;
	params.Color = Color;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESGameModeBase.RightBeforeBeginPlayIsCalledForAllActors
// (Final, Native, Private)

void AESGameModeBase::RightBeforeBeginPlayIsCalledForAllActors()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESGameModeBase.RightBeforeBeginPlayIsCalledForAllActors");

	AESGameModeBase_RightBeforeBeginPlayIsCalledForAllActors_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESGameModeBase.ReinitPlayerPawn
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class APawn**                  PlayerPawn                     (Parm, ZeroConstructor, IsPlainOldData)

void AESGameModeBase::ReinitPlayerPawn(class APawn** PlayerPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESGameModeBase.ReinitPlayerPawn");

	AESGameModeBase_ReinitPlayerPawn_Params params;
	params.PlayerPawn = PlayerPawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESGameModeBase.PlayerJumpTriggered
// (Final, Native, Private)
// Parameters:
// TEnumAsByte<EJumpMethod>*      JumpMethod                     (Parm, ZeroConstructor, IsPlainOldData)

void AESGameModeBase::PlayerJumpTriggered(TEnumAsByte<EJumpMethod>* JumpMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESGameModeBase.PlayerJumpTriggered");

	AESGameModeBase_PlayerJumpTriggered_Params params;
	params.JumpMethod = JumpMethod;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESGameModeBase.PlayerJumpCompleted
// (Final, Native, Private)
// Parameters:
// TEnumAsByte<EJumpMethod>*      JumpMethod                     (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void AESGameModeBase::PlayerJumpCompleted(TEnumAsByte<EJumpMethod>* JumpMethod, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESGameModeBase.PlayerJumpCompleted");

	AESGameModeBase_PlayerJumpCompleted_Params params;
	params.JumpMethod = JumpMethod;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESGameModeBase.OnLeftLocationBounds
// (Native, Event, Public, BlueprintEvent)

void AESGameModeBase::OnLeftLocationBounds()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESGameModeBase.OnLeftLocationBounds");

	AESGameModeBase_OnLeftLocationBounds_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESGameModeBase.GetOutOfBoundsDistance
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AESGameModeBase::GetOutOfBoundsDistance()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESGameModeBase.GetOutOfBoundsDistance");

	AESGameModeBase_GetOutOfBoundsDistance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.ESGameModeBase.GetMusicManagerActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* AESGameModeBase::GetMusicManagerActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESGameModeBase.GetMusicManagerActor");

	AESGameModeBase_GetMusicManagerActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.ESGameModeBase.EnableInputAndStopBoosting
// (Final, Native, Private)

void AESGameModeBase::EnableInputAndStopBoosting()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESGameModeBase.EnableInputAndStopBoosting");

	AESGameModeBase_EnableInputAndStopBoosting_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESGameModeBase.DelayedUndockPlayerShip
// (Final, Native, Private)

void AESGameModeBase::DelayedUndockPlayerShip()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESGameModeBase.DelayedUndockPlayerShip");

	AESGameModeBase_DelayedUndockPlayerShip_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESGameModeBase.CheckIfOutsideOfLevelBounds
// (Final, Native, Private)

void AESGameModeBase::CheckIfOutsideOfLevelBounds()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESGameModeBase.CheckIfOutsideOfLevelBounds");

	AESGameModeBase_CheckIfOutsideOfLevelBounds_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESGameModeBase.CheckForWorldOriginShifting
// (Final, Native, Private)

void AESGameModeBase::CheckForWorldOriginShifting()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESGameModeBase.CheckForWorldOriginShifting");

	AESGameModeBase_CheckForWorldOriginShifting_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESGameUserSettings.SetSoundVolumeVoice
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         Volume                         (Parm, ZeroConstructor, IsPlainOldData)

void UESGameUserSettings::SetSoundVolumeVoice(float* Volume)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESGameUserSettings.SetSoundVolumeVoice");

	UESGameUserSettings_SetSoundVolumeVoice_Params params;
	params.Volume = Volume;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESGameUserSettings.SetSoundVolumeSFX
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         Volume                         (Parm, ZeroConstructor, IsPlainOldData)

void UESGameUserSettings::SetSoundVolumeSFX(float* Volume)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESGameUserSettings.SetSoundVolumeSFX");

	UESGameUserSettings_SetSoundVolumeSFX_Params params;
	params.Volume = Volume;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESGameUserSettings.SetSoundVolumeMusic
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         Volume                         (Parm, ZeroConstructor, IsPlainOldData)

void UESGameUserSettings::SetSoundVolumeMusic(float* Volume)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESGameUserSettings.SetSoundVolumeMusic");

	UESGameUserSettings_SetSoundVolumeMusic_Params params;
	params.Volume = Volume;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESGameUserSettings.SetSoundVolumeMaster
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         Volume                         (Parm, ZeroConstructor, IsPlainOldData)

void UESGameUserSettings::SetSoundVolumeMaster(float* Volume)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESGameUserSettings.SetSoundVolumeMaster");

	UESGameUserSettings_SetSoundVolumeMaster_Params params;
	params.Volume = Volume;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESGameUserSettings.SetMouseSensitivityFactor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         InFactor                       (Parm, ZeroConstructor, IsPlainOldData)

void UESGameUserSettings::SetMouseSensitivityFactor(float* InFactor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESGameUserSettings.SetMouseSensitivityFactor");

	UESGameUserSettings_SetMouseSensitivityFactor_Params params;
	params.InFactor = InFactor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESGameUserSettings.SetMotionBlurEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void UESGameUserSettings::SetMotionBlurEnabled(bool* bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESGameUserSettings.SetMotionBlurEnabled");

	UESGameUserSettings_SetMotionBlurEnabled_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESGameUserSettings.SetJoystickHUDBehavior
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EJoystickHUDBehavior*          HUDBehavior                    (Parm, ZeroConstructor, IsPlainOldData)

void UESGameUserSettings::SetJoystickHUDBehavior(EJoystickHUDBehavior* HUDBehavior)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESGameUserSettings.SetJoystickHUDBehavior");

	UESGameUserSettings_SetJoystickHUDBehavior_Params params;
	params.HUDBehavior = HUDBehavior;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESGameUserSettings.SetInputPreset
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EInputPreset*                  Preset                         (Parm, ZeroConstructor, IsPlainOldData)

void UESGameUserSettings::SetInputPreset(EInputPreset* Preset)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESGameUserSettings.SetInputPreset");

	UESGameUserSettings_SetInputPreset_Params params;
	params.Preset = Preset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESGameUserSettings.SetGraphicsQuality
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TEnumAsByte<EGraphicsQuality>* InGraphicsQuality              (Parm, ZeroConstructor, IsPlainOldData)
// struct FGraphicsQualityLevels* QualityLevelsIn                (ConstParm, Parm, OutParm, ReferenceParm)

void UESGameUserSettings::SetGraphicsQuality(TEnumAsByte<EGraphicsQuality>* InGraphicsQuality, struct FGraphicsQualityLevels* QualityLevelsIn)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESGameUserSettings.SetGraphicsQuality");

	UESGameUserSettings_SetGraphicsQuality_Params params;
	params.InGraphicsQuality = InGraphicsQuality;
	params.QualityLevelsIn = QualityLevelsIn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESGameUserSettings.SetGamma
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         GammaValue                     (Parm, ZeroConstructor, IsPlainOldData)

void UESGameUserSettings::SetGamma(float* GammaValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESGameUserSettings.SetGamma");

	UESGameUserSettings_SetGamma_Params params;
	params.GammaValue = GammaValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESGameUserSettings.SetGamepadScheme_Gamescom
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int*                           Scheme                         (Parm, ZeroConstructor, IsPlainOldData)

void UESGameUserSettings::SetGamepadScheme_Gamescom(int* Scheme)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESGameUserSettings.SetGamepadScheme_Gamescom");

	UESGameUserSettings_SetGamepadScheme_Gamescom_Params params;
	params.Scheme = Scheme;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESGameUserSettings.SetGamepadInputSmoothingEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void UESGameUserSettings::SetGamepadInputSmoothingEnabled(bool* bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESGameUserSettings.SetGamepadInputSmoothingEnabled");

	UESGameUserSettings_SetGamepadInputSmoothingEnabled_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESGameUserSettings.SetControllerIconStyle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EControllerIconStyle*          IconStyle                      (Parm, ZeroConstructor, IsPlainOldData)

void UESGameUserSettings::SetControllerIconStyle(EControllerIconStyle* IconStyle)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESGameUserSettings.SetControllerIconStyle");

	UESGameUserSettings_SetControllerIconStyle_Params params;
	params.IconStyle = IconStyle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESGameUserSettings.SetChromaticAberrationEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void UESGameUserSettings::SetChromaticAberrationEnabled(bool* bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESGameUserSettings.SetChromaticAberrationEnabled");

	UESGameUserSettings_SetChromaticAberrationEnabled_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESGameUserSettings.SetAutoRollKeyboardEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void UESGameUserSettings::SetAutoRollKeyboardEnabled(bool* bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESGameUserSettings.SetAutoRollKeyboardEnabled");

	UESGameUserSettings_SetAutoRollKeyboardEnabled_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESGameUserSettings.SetAutoRollControllerEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void UESGameUserSettings::SetAutoRollControllerEnabled(bool* bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESGameUserSettings.SetAutoRollControllerEnabled");

	UESGameUserSettings_SetAutoRollControllerEnabled_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESGameUserSettings.SetAutoAimStrength
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         InFactor                       (Parm, ZeroConstructor, IsPlainOldData)

void UESGameUserSettings::SetAutoAimStrength(float* InFactor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESGameUserSettings.SetAutoAimStrength");

	UESGameUserSettings_SetAutoAimStrength_Params params;
	params.InFactor = InFactor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESGameUserSettings.IsMotionBlurEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UESGameUserSettings::IsMotionBlurEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESGameUserSettings.IsMotionBlurEnabled");

	UESGameUserSettings_IsMotionBlurEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.ESGameUserSettings.IsGamepadInputSmoothingEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UESGameUserSettings::IsGamepadInputSmoothingEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESGameUserSettings.IsGamepadInputSmoothingEnabled");

	UESGameUserSettings_IsGamepadInputSmoothingEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.ESGameUserSettings.IsChromaticAberrationEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UESGameUserSettings::IsChromaticAberrationEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESGameUserSettings.IsChromaticAberrationEnabled");

	UESGameUserSettings_IsChromaticAberrationEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.ESGameUserSettings.IsAutoRollKeyboardEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UESGameUserSettings::IsAutoRollKeyboardEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESGameUserSettings.IsAutoRollKeyboardEnabled");

	UESGameUserSettings_IsAutoRollKeyboardEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.ESGameUserSettings.IsAutoRollControllerEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UESGameUserSettings::IsAutoRollControllerEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESGameUserSettings.IsAutoRollControllerEnabled");

	UESGameUserSettings_IsAutoRollControllerEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.ESGameUserSettings.GetSoundVolumeVoice
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UESGameUserSettings::GetSoundVolumeVoice()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESGameUserSettings.GetSoundVolumeVoice");

	UESGameUserSettings_GetSoundVolumeVoice_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.ESGameUserSettings.GetSoundVolumeSFX
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UESGameUserSettings::GetSoundVolumeSFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESGameUserSettings.GetSoundVolumeSFX");

	UESGameUserSettings_GetSoundVolumeSFX_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.ESGameUserSettings.GetSoundVolumeMusic
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UESGameUserSettings::GetSoundVolumeMusic()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESGameUserSettings.GetSoundVolumeMusic");

	UESGameUserSettings_GetSoundVolumeMusic_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.ESGameUserSettings.GetSoundVolumeMaster
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UESGameUserSettings::GetSoundVolumeMaster()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESGameUserSettings.GetSoundVolumeMaster");

	UESGameUserSettings_GetSoundVolumeMaster_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.ESGameUserSettings.GetMouseSensitivityFactorRaw
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UESGameUserSettings::GetMouseSensitivityFactorRaw()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESGameUserSettings.GetMouseSensitivityFactorRaw");

	UESGameUserSettings_GetMouseSensitivityFactorRaw_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.ESGameUserSettings.GetMouseSensitivityFactor
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AESPlayerController**    PC                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UESGameUserSettings::GetMouseSensitivityFactor(class AESPlayerController** PC)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESGameUserSettings.GetMouseSensitivityFactor");

	UESGameUserSettings_GetMouseSensitivityFactor_Params params;
	params.PC = PC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.ESGameUserSettings.GetJoystickHUDBehavior
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// EJoystickHUDBehavior           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EJoystickHUDBehavior UESGameUserSettings::GetJoystickHUDBehavior()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESGameUserSettings.GetJoystickHUDBehavior");

	UESGameUserSettings_GetJoystickHUDBehavior_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.ESGameUserSettings.GetInputPreset
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// EInputPreset                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EInputPreset UESGameUserSettings::GetInputPreset()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESGameUserSettings.GetInputPreset");

	UESGameUserSettings_GetInputPreset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.ESGameUserSettings.GetGraphicsQuality
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<EGraphicsQuality>  GraphicsQualityOut             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FGraphicsQualityLevels  QualityLevelsOut               (Parm, OutParm)
// bool                           bCustomQualityLevelsSetOut     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UESGameUserSettings::GetGraphicsQuality(TEnumAsByte<EGraphicsQuality>* GraphicsQualityOut, struct FGraphicsQualityLevels* QualityLevelsOut, bool* bCustomQualityLevelsSetOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESGameUserSettings.GetGraphicsQuality");

	UESGameUserSettings_GetGraphicsQuality_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GraphicsQualityOut != nullptr)
		*GraphicsQualityOut = params.GraphicsQualityOut;
	if (QualityLevelsOut != nullptr)
		*QualityLevelsOut = params.QualityLevelsOut;
	if (bCustomQualityLevelsSetOut != nullptr)
		*bCustomQualityLevelsSetOut = params.bCustomQualityLevelsSetOut;
}


// Function ES2.ESGameUserSettings.GetGamma
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UESGameUserSettings::GetGamma()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESGameUserSettings.GetGamma");

	UESGameUserSettings_GetGamma_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.ESGameUserSettings.GetGamepadScheme_Gamescom
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UESGameUserSettings::GetGamepadScheme_Gamescom()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESGameUserSettings.GetGamepadScheme_Gamescom");

	UESGameUserSettings_GetGamepadScheme_Gamescom_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.ESGameUserSettings.GetControllerIconStyle
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// EControllerIconStyle           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EControllerIconStyle UESGameUserSettings::GetControllerIconStyle()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESGameUserSettings.GetControllerIconStyle");

	UESGameUserSettings_GetControllerIconStyle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.ESGameUserSettings.GetAutoAimStrength
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UESGameUserSettings::GetAutoAimStrength()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESGameUserSettings.GetAutoAimStrength");

	UESGameUserSettings_GetAutoAimStrength_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.ESGameUserSettings.ApplySoundSettings
// (Final, Native, Public, BlueprintCallable)

void UESGameUserSettings::ApplySoundSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESGameUserSettings.ApplySoundSettings");

	UESGameUserSettings_ApplySoundSettings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESHUD.SortIndicatorArray
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<TEnumAsByte<EIndicator>> IndicatorsInOut                (Parm, OutParm, ZeroConstructor, ReferenceParm)

void AESHUD::STATIC_SortIndicatorArray(TArray<TEnumAsByte<EIndicator>>* IndicatorsInOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESHUD.SortIndicatorArray");

	AESHUD_SortIndicatorArray_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IndicatorsInOut != nullptr)
		*IndicatorsInOut = params.IndicatorsInOut;
}


// Function ES2.ESHUD.ShowXPNumbers
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Victim                         (Parm, ZeroConstructor, IsPlainOldData)
// float*                         XP                             (Parm, ZeroConstructor, IsPlainOldData)

void AESHUD::ShowXPNumbers(class AActor** Victim, float* XP)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESHUD.ShowXPNumbers");

	AESHUD_ShowXPNumbers_Params params;
	params.Victim = Victim;
	params.XP = XP;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESHUD.ShowMissionTaskUpdate
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHUDTaskData*           TaskData                       (ConstParm, Parm, OutParm, ReferenceParm)

void AESHUD::ShowMissionTaskUpdate(struct FHUDTaskData* TaskData)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESHUD.ShowMissionTaskUpdate");

	AESHUD_ShowMissionTaskUpdate_Params params;
	params.TaskData = TaskData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESHUD.ShowHitpointNumbers
// (Native, Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Victim                         (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// float*                         HPShield                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         HPArmor                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         HPHull                         (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsCriticalHit                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                HitLocationWorld               (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          ShowEverySecond                (Parm, ZeroConstructor, IsPlainOldData)

void AESHUD::ShowHitpointNumbers(class AActor** Victim, class AActor** DamageCauser, class AActor** EventInstigator, float* HPShield, float* HPArmor, float* HPHull, bool* IsCriticalHit, struct FVector* HitLocationWorld, bool* ShowEverySecond)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESHUD.ShowHitpointNumbers");

	AESHUD_ShowHitpointNumbers_Params params;
	params.Victim = Victim;
	params.DamageCauser = DamageCauser;
	params.EventInstigator = EventInstigator;
	params.HPShield = HPShield;
	params.HPArmor = HPArmor;
	params.HPHull = HPHull;
	params.IsCriticalHit = IsCriticalHit;
	params.HitLocationWorld = HitLocationWorld;
	params.ShowEverySecond = ShowEverySecond;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESHUD.PushHideTopLayer
// (Final, Native, Public, BlueprintCallable)

void AESHUD::PushHideTopLayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESHUD.PushHideTopLayer");

	AESHUD_PushHideTopLayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESHUD.PushHideMainLayer
// (Final, Native, Public, BlueprintCallable)

void AESHUD::PushHideMainLayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESHUD.PushHideMainLayer");

	AESHUD_PushHideMainLayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESHUD.PopHideTopLayer
// (Final, Native, Public, BlueprintCallable)

void AESHUD::PopHideTopLayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESHUD.PopHideTopLayer");

	AESHUD_PopHideTopLayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESHUD.PopHideMainLayer
// (Final, Native, Public, BlueprintCallable)

void AESHUD::PopHideMainLayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESHUD.PopHideMainLayer");

	AESHUD_PopHideMainLayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESHUD.OnShowInteractWidget
// (Native, Event, Public, HasDefaults, BlueprintEvent)
// Parameters:
// class UInteractComponent**     InteractComponent              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UClass**                 WidgetClass                    (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EInteractWidgetDisplayLocation>* DisplayLocation                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D*              DisplayOffset                  (Parm, ZeroConstructor, IsPlainOldData)

void AESHUD::OnShowInteractWidget(class UInteractComponent** InteractComponent, class UClass** WidgetClass, TEnumAsByte<EInteractWidgetDisplayLocation>* DisplayLocation, struct FVector2D* DisplayOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESHUD.OnShowInteractWidget");

	AESHUD_OnShowInteractWidget_Params params;
	params.InteractComponent = InteractComponent;
	params.WidgetClass = WidgetClass;
	params.DisplayLocation = DisplayLocation;
	params.DisplayOffset = DisplayOffset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESHUD.OnPlayerDealtDamage
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bShieldDamage                  (Parm, ZeroConstructor, IsPlainOldData)

void AESHUD::OnPlayerDealtDamage(bool* bShieldDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESHUD.OnPlayerDealtDamage");

	AESHUD_OnPlayerDealtDamage_Params params;
	params.bShieldDamage = bShieldDamage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESHUD.OnPauseChanged
// (Final, Native, Private)
// Parameters:
// bool*                          bPaused                        (Parm, ZeroConstructor, IsPlainOldData)

void AESHUD::OnPauseChanged(bool* bPaused)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESHUD.OnPauseChanged");

	AESHUD_OnPauseChanged_Params params;
	params.bPaused = bPaused;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESHUD.OnHideTopLayerChanged
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bHide                          (Parm, ZeroConstructor, IsPlainOldData)

void AESHUD::OnHideTopLayerChanged(bool* bHide)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESHUD.OnHideTopLayerChanged");

	AESHUD_OnHideTopLayerChanged_Params params;
	params.bHide = bHide;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESHUD.OnHideMainLayerChanged
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bHide                          (Parm, ZeroConstructor, IsPlainOldData)

void AESHUD::OnHideMainLayerChanged(bool* bHide)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESHUD.OnHideMainLayerChanged");

	AESHUD_OnHideMainLayerChanged_Params params;
	params.bHide = bHide;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESHUD.OnHideInteractWidget
// (Native, Event, Public, BlueprintEvent)

void AESHUD::OnHideInteractWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESHUD.OnHideInteractWidget");

	AESHUD_OnHideInteractWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESHUD.OnEnterOrExitDeviceSelection
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bEnter                         (Parm, ZeroConstructor, IsPlainOldData)

void AESHUD::OnEnterOrExitDeviceSelection(bool* bEnter)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESHUD.OnEnterOrExitDeviceSelection");

	AESHUD_OnEnterOrExitDeviceSelection_Params params;
	params.bEnter = bEnter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESHUD.OnEnterOrExitConsumableSelection
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bEnter                         (Parm, ZeroConstructor, IsPlainOldData)

void AESHUD::OnEnterOrExitConsumableSelection(bool* bEnter)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESHUD.OnEnterOrExitConsumableSelection");

	AESHUD_OnEnterOrExitConsumableSelection_Params params;
	params.bEnter = bEnter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESHUD.OnChangeInteractWidgetVisibility
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bVisible                       (Parm, ZeroConstructor, IsPlainOldData)

void AESHUD::OnChangeInteractWidgetVisibility(bool* bVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESHUD.OnChangeInteractWidgetVisibility");

	AESHUD_OnChangeInteractWidgetVisibility_Params params;
	params.bVisible = bVisible;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESHUD.OnAbortedMission
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  MissionID                      (Parm, ZeroConstructor, IsPlainOldData)

void AESHUD::OnAbortedMission(struct FName* MissionID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESHUD.OnAbortedMission");

	AESHUD_OnAbortedMission_Params params;
	params.MissionID = MissionID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESHUD.IsTopLayerVisible
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AESHUD::IsTopLayerVisible()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESHUD.IsTopLayerVisible");

	AESHUD_IsTopLayerVisible_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.ESHUD.IsMainLayerVisible
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AESHUD::IsMainLayerVisible()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESHUD.IsMainLayerVisible");

	AESHUD_IsMainLayerVisible_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.ESHUD.HideLockedTargetIndicator
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void AESHUD::HideLockedTargetIndicator()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESHUD.HideLockedTargetIndicator");

	AESHUD_HideLockedTargetIndicator_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESHUD.HideAimAssist
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bForHoveredTarget              (Parm, ZeroConstructor, IsPlainOldData)

void AESHUD::HideAimAssist(bool* bForHoveredTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESHUD.HideAimAssist");

	AESHUD_HideAimAssist_Params params;
	params.bForHoveredTarget = bForHoveredTarget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESHUD.GetScaledMarkerWidthFromActorBounds
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor**                 InActor                        (Parm, ZeroConstructor, IsPlainOldData)
// class UHUDMarkerComponent**    HUDMarkerComp                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float*                         CameraFOV                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AESHUD::STATIC_GetScaledMarkerWidthFromActorBounds(class AActor** InActor, class UHUDMarkerComponent** HUDMarkerComp, float* CameraFOV)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESHUD.GetScaledMarkerWidthFromActorBounds");

	AESHUD_GetScaledMarkerWidthFromActorBounds_Params params;
	params.InActor = InActor;
	params.HUDMarkerComp = HUDMarkerComp;
	params.CameraFOV = CameraFOV;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.ESHUD.DrawLockedTargetIndicator
// (Native, Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D*              ScreenPos                      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         RenderAngle                    (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EMarkerRelation>*  Relation                       (Parm, ZeroConstructor, IsPlainOldData)

void AESHUD::DrawLockedTargetIndicator(struct FVector2D* ScreenPos, float* RenderAngle, TEnumAsByte<EMarkerRelation>* Relation)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESHUD.DrawLockedTargetIndicator");

	AESHUD_DrawLockedTargetIndicator_Params params;
	params.ScreenPos = ScreenPos;
	params.RenderAngle = RenderAngle;
	params.Relation = Relation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESHUD.DrawAimAssist
// (Native, Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D*              ScreenPos                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D*              TargetScreenPos                (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EMarkerRelation>*  Relation                       (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bForHoveredTarget              (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bNewLock                       (Parm, ZeroConstructor, IsPlainOldData)

void AESHUD::DrawAimAssist(struct FVector2D* ScreenPos, struct FVector2D* TargetScreenPos, TEnumAsByte<EMarkerRelation>* Relation, bool* bForHoveredTarget, bool* bNewLock)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESHUD.DrawAimAssist");

	AESHUD_DrawAimAssist_Params params;
	params.ScreenPos = ScreenPos;
	params.TargetScreenPos = TargetScreenPos;
	params.Relation = Relation;
	params.bForHoveredTarget = bForHoveredTarget;
	params.bNewLock = bNewLock;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESHUD.AddLogMessage
// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHUDMessage*            MessageInfo                    (ConstParm, Parm, OutParm, ReferenceParm)

void AESHUD::AddLogMessage(struct FHUDMessage* MessageInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESHUD.AddLogMessage");

	AESHUD_AddLogMessage_Params params;
	params.MessageInfo = MessageInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESPawn.UpdateLocalSpaceBounds
// (Final, Native, Public, BlueprintCallable)

void AESPawn::UpdateLocalSpaceBounds()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESPawn.UpdateLocalSpaceBounds");

	AESPawn_UpdateLocalSpaceBounds_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESPawn.TeleportAllFollowersIntoFormation
// (Final, Native, Public, BlueprintCallable)

void AESPawn::TeleportAllFollowersIntoFormation()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESPawn.TeleportAllFollowersIntoFormation");

	AESPawn_TeleportAllFollowersIntoFormation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESPawn.ShouldPossessAiOnSpawn
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AESPawn::ShouldPossessAiOnSpawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESPawn.ShouldPossessAiOnSpawn");

	AESPawn_ShouldPossessAiOnSpawn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.ESPawn.SetLeader
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AESPawn**                NewLeader                      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          TryTeleportFollowerIntoFormation (Parm, ZeroConstructor, IsPlainOldData)

void AESPawn::SetLeader(class AESPawn** NewLeader, bool* TryTeleportFollowerIntoFormation)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESPawn.SetLeader");

	AESPawn_SetLeader_Params params;
	params.NewLeader = NewLeader;
	params.TryTeleportFollowerIntoFormation = TryTeleportFollowerIntoFormation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESPawn.SetInvestigateLocation
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void AESPawn::SetInvestigateLocation(struct FVector* Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESPawn.SetInvestigateLocation");

	AESPawn_SetInvestigateLocation_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESPawn.SetIgnoredByAIDuringCutscene
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bIgnore                        (Parm, ZeroConstructor, IsPlainOldData)

void AESPawn::SetIgnoredByAIDuringCutscene(bool* bIgnore)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESPawn.SetIgnoredByAIDuringCutscene");

	AESPawn_SetIgnoredByAIDuringCutscene_Params params;
	params.bIgnore = bIgnore;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESPawn.SetIgnoredByAI
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bIgnore                        (Parm, ZeroConstructor, IsPlainOldData)

void AESPawn::SetIgnoredByAI(bool* bIgnore)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESPawn.SetIgnoredByAI");

	AESPawn_SetIgnoredByAI_Params params;
	params.bIgnore = bIgnore;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESPawn.SequenceStarted
// (Final, Native, Public)
// Parameters:
// struct FSequenceEventData*     EventData                      (Parm, ZeroConstructor, IsPlainOldData)

void AESPawn::SequenceStarted(struct FSequenceEventData* EventData)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESPawn.SequenceStarted");

	AESPawn_SequenceStarted_Params params;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESPawn.ResignLeadership
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AESPawn*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AESPawn* AESPawn::ResignLeadership()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESPawn.ResignLeadership");

	AESPawn_ResignLeadership_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.ESPawn.RemoveTargetPreferenceList
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<class AActor*>*         Targets                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AESPawn::RemoveTargetPreferenceList(TArray<class AActor*>* Targets)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESPawn.RemoveTargetPreferenceList");

	AESPawn_RemoveTargetPreferenceList_Params params;
	params.Targets = Targets;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.ESPawn.RemoveTargetPreference
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor**                 Target                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AESPawn::RemoveTargetPreference(class AActor** Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESPawn.RemoveTargetPreference");

	AESPawn_RemoveTargetPreference_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.ESPawn.RemoveFollower
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AESPawn**                Follower                       (Parm, ZeroConstructor, IsPlainOldData)

void AESPawn::RemoveFollower(class AESPawn** Follower)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESPawn.RemoveFollower");

	AESPawn_RemoveFollower_Params params;
	params.Follower = Follower;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESPawn.PostProcessInput
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bGamePaused                    (Parm, ZeroConstructor, IsPlainOldData)

void AESPawn::PostProcessInput(float* DeltaTime, bool* bGamePaused)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESPawn.PostProcessInput");

	AESPawn_PostProcessInput_Params params;
	params.DeltaTime = DeltaTime;
	params.bGamePaused = bGamePaused;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESPawn.PlayerLevelUp
// (Final, Native, Private)
// Parameters:
// int*                           NewLevel                       (Parm, ZeroConstructor, IsPlainOldData)

void AESPawn::PlayerLevelUp(int* NewLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESPawn.PlayerLevelUp");

	AESPawn_PlayerLevelUp_Params params;
	params.NewLevel = NewLevel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESPawn.OnUpdateIsCriticalHealthState
// (Final, Native, Public)
// Parameters:
// class AActor**                 Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// class UHitpointComponent**     HitpointComponent              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float*                         DeltaHitpoints                 (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DeltaRatio                     (Parm, ZeroConstructor, IsPlainOldData)
// float*                         PreviousRatio                  (Parm, ZeroConstructor, IsPlainOldData)

void AESPawn::OnUpdateIsCriticalHealthState(class AActor** Actor, class UHitpointComponent** HitpointComponent, float* DeltaHitpoints, float* DeltaRatio, float* PreviousRatio)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESPawn.OnUpdateIsCriticalHealthState");

	AESPawn_OnUpdateIsCriticalHealthState_Params params;
	params.Actor = Actor;
	params.HitpointComponent = HitpointComponent;
	params.DeltaHitpoints = DeltaHitpoints;
	params.DeltaRatio = DeltaRatio;
	params.PreviousRatio = PreviousRatio;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESPawn.OnSequenceFinished
// (Final, Native, Public)

void AESPawn::OnSequenceFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESPawn.OnSequenceFinished");

	AESPawn_OnSequenceFinished_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESPawn.OnReinitShipColors
// (Event, Public, BlueprintEvent)

void AESPawn::OnReinitShipColors()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESPawn.OnReinitShipColors");

	AESPawn_OnReinitShipColors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESPawn.OnReceivedAIEvent
// (Final, Native, Public)
// Parameters:
// TEnumAsByte<EAIEvent>*         EventId                        (Parm, ZeroConstructor, IsPlainOldData)
// class APawn**                  ControlledPawn                 (Parm, ZeroConstructor, IsPlainOldData)

void AESPawn::OnReceivedAIEvent(TEnumAsByte<EAIEvent>* EventId, class APawn** ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESPawn.OnReceivedAIEvent");

	AESPawn_OnReceivedAIEvent_Params params;
	params.EventId = EventId;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESPawn.OnLeftInterior
// (Event, Public, BlueprintEvent)
// Parameters:
// class AAreaGate**              Gate                           (Parm, ZeroConstructor, IsPlainOldData)

void AESPawn::OnLeftInterior(class AAreaGate** Gate)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESPawn.OnLeftInterior");

	AESPawn_OnLeftInterior_Params params;
	params.Gate = Gate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESPawn.OnHealthDepleted
// (Final, Native, Public)
// Parameters:
// class AActor**                 Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// class AController**            DamageInstigator               (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DamageAmount                   (Parm, ZeroConstructor, IsPlainOldData)

void AESPawn::OnHealthDepleted(class AActor** Actor, class AActor** DamageCauser, class AController** DamageInstigator, float* DamageAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESPawn.OnHealthDepleted");

	AESPawn_OnHealthDepleted_Params params;
	params.Actor = Actor;
	params.DamageCauser = DamageCauser;
	params.DamageInstigator = DamageInstigator;
	params.DamageAmount = DamageAmount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESPawn.OnEnteredInterior
// (Event, Public, BlueprintEvent)
// Parameters:
// class AAreaGate**              Gate                           (Parm, ZeroConstructor, IsPlainOldData)

void AESPawn::OnEnteredInterior(class AAreaGate** Gate)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESPawn.OnEnteredInterior");

	AESPawn_OnEnteredInterior_Params params;
	params.Gate = Gate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESPawn.OnChangeEngineOpacity
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         Value                          (Parm, ZeroConstructor, IsPlainOldData)

void AESPawn::OnChangeEngineOpacity(float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESPawn.OnChangeEngineOpacity");

	AESPawn_OnChangeEngineOpacity_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESPawn.OnAiWaypointReached
// (Native, Event, Public, BlueprintEvent)

void AESPawn::OnAiWaypointReached()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESPawn.OnAiWaypointReached");

	AESPawn_OnAiWaypointReached_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESPawn.OnAiTickIdle
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Intervall                      (Parm, ZeroConstructor, IsPlainOldData)

void AESPawn::OnAiTickIdle(float* Intervall)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESPawn.OnAiTickIdle");

	AESPawn_OnAiTickIdle_Params params;
	params.Intervall = Intervall;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESPawn.OnAiTakeoff
// (Native, Event, Public, BlueprintEvent)

void AESPawn::OnAiTakeoff()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESPawn.OnAiTakeoff");

	AESPawn_OnAiTakeoff_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESPawn.OnAiSelfDestruct
// (Native, Event, Public, BlueprintEvent)

void AESPawn::OnAiSelfDestruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESPawn.OnAiSelfDestruct");

	AESPawn_OnAiSelfDestruct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESPawn.OnAiNoLeader
// (Native, Event, Public, BlueprintEvent)

void AESPawn::OnAiNoLeader()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESPawn.OnAiNoLeader");

	AESPawn_OnAiNoLeader_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESPawn.OnAiJump
// (Native, Event, Public, BlueprintEvent)

void AESPawn::OnAiJump()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESPawn.OnAiJump");

	AESPawn_OnAiJump_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESPawn.OnAiFleeFromTurnfight
// (Native, Event, Public, BlueprintEvent)

void AESPawn::OnAiFleeFromTurnfight()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESPawn.OnAiFleeFromTurnfight");

	AESPawn_OnAiFleeFromTurnfight_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESPawn.OnAiEndTravelToTarget
// (Native, Event, Public, BlueprintEvent)

void AESPawn::OnAiEndTravelToTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESPawn.OnAiEndTravelToTarget");

	AESPawn_OnAiEndTravelToTarget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESPawn.OnAiEndSpecialAttack
// (Native, Event, Public, BlueprintEvent)

void AESPawn::OnAiEndSpecialAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESPawn.OnAiEndSpecialAttack");

	AESPawn_OnAiEndSpecialAttack_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESPawn.OnAiEndIsTailed
// (Native, Event, Public, BlueprintEvent)

void AESPawn::OnAiEndIsTailed()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESPawn.OnAiEndIsTailed");

	AESPawn_OnAiEndIsTailed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESPawn.OnAiEndInvestigate
// (Native, Event, Public, BlueprintEvent)

void AESPawn::OnAiEndInvestigate()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESPawn.OnAiEndInvestigate");

	AESPawn_OnAiEndInvestigate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESPawn.OnAiEndIdle
// (Native, Event, Public, BlueprintEvent)

void AESPawn::OnAiEndIdle()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESPawn.OnAiEndIdle");

	AESPawn_OnAiEndIdle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESPawn.OnAiEndGainDistance
// (Native, Event, Public, BlueprintEvent)

void AESPawn::OnAiEndGainDistance()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESPawn.OnAiEndGainDistance");

	AESPawn_OnAiEndGainDistance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESPawn.OnAiEndFlee
// (Native, Event, Public, BlueprintEvent)

void AESPawn::OnAiEndFlee()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESPawn.OnAiEndFlee");

	AESPawn_OnAiEndFlee_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESPawn.OnAiEndCatchUpWithLeader
// (Native, Event, Public, BlueprintEvent)

void AESPawn::OnAiEndCatchUpWithLeader()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESPawn.OnAiEndCatchUpWithLeader");

	AESPawn_OnAiEndCatchUpWithLeader_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESPawn.OnAiEndBarrelRoll
// (Native, Event, Public, BlueprintEvent)

void AESPawn::OnAiEndBarrelRoll()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESPawn.OnAiEndBarrelRoll");

	AESPawn_OnAiEndBarrelRoll_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESPawn.OnAiEndAttack
// (Native, Event, Public, BlueprintEvent)

void AESPawn::OnAiEndAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESPawn.OnAiEndAttack");

	AESPawn_OnAiEndAttack_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESPawn.OnAiBeginTravelToTarget
// (Native, Event, Public, BlueprintEvent)

void AESPawn::OnAiBeginTravelToTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESPawn.OnAiBeginTravelToTarget");

	AESPawn_OnAiBeginTravelToTarget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESPawn.OnAiBeginSpecialAttack
// (Native, Event, Public, BlueprintEvent)

void AESPawn::OnAiBeginSpecialAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESPawn.OnAiBeginSpecialAttack");

	AESPawn_OnAiBeginSpecialAttack_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESPawn.OnAiBeginKamikazeApproach
// (Native, Event, Public, BlueprintEvent)

void AESPawn::OnAiBeginKamikazeApproach()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESPawn.OnAiBeginKamikazeApproach");

	AESPawn_OnAiBeginKamikazeApproach_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESPawn.OnAiBeginIsTailed
// (Native, Event, Public, BlueprintEvent)

void AESPawn::OnAiBeginIsTailed()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESPawn.OnAiBeginIsTailed");

	AESPawn_OnAiBeginIsTailed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESPawn.OnAiBeginInvestigate
// (Native, Event, Public, BlueprintEvent)

void AESPawn::OnAiBeginInvestigate()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESPawn.OnAiBeginInvestigate");

	AESPawn_OnAiBeginInvestigate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESPawn.OnAiBeginIdle
// (Native, Event, Public, BlueprintEvent)

void AESPawn::OnAiBeginIdle()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESPawn.OnAiBeginIdle");

	AESPawn_OnAiBeginIdle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESPawn.OnAiBeginGainDistance
// (Native, Event, Public, BlueprintEvent)

void AESPawn::OnAiBeginGainDistance()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESPawn.OnAiBeginGainDistance");

	AESPawn_OnAiBeginGainDistance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESPawn.OnAiBeginFlee
// (Native, Event, Public, BlueprintEvent)

void AESPawn::OnAiBeginFlee()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESPawn.OnAiBeginFlee");

	AESPawn_OnAiBeginFlee_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESPawn.OnAiBeginCatchUpWithLeader
// (Native, Event, Public, BlueprintEvent)

void AESPawn::OnAiBeginCatchUpWithLeader()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESPawn.OnAiBeginCatchUpWithLeader");

	AESPawn_OnAiBeginCatchUpWithLeader_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESPawn.OnAiBeginBarrelRoll
// (Native, Event, Public, BlueprintEvent)

void AESPawn::OnAiBeginBarrelRoll()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESPawn.OnAiBeginBarrelRoll");

	AESPawn_OnAiBeginBarrelRoll_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESPawn.OnAiBeginAttack
// (Native, Event, Public, BlueprintEvent)

void AESPawn::OnAiBeginAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESPawn.OnAiBeginAttack");

	AESPawn_OnAiBeginAttack_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESPawn.OnAiArrivedAtHangar
// (Native, Event, Public, BlueprintEvent)

void AESPawn::OnAiArrivedAtHangar()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESPawn.OnAiArrivedAtHangar");

	AESPawn_OnAiArrivedAtHangar_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESPawn.LeaveInterior
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AAreaGate**              Gate                           (Parm, ZeroConstructor, IsPlainOldData)

void AESPawn::LeaveInterior(class AAreaGate** Gate)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESPawn.LeaveInterior");

	AESPawn_LeaveInterior_Params params;
	params.Gate = Gate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESPawn.IsLeader
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AESPawn::IsLeader()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESPawn.IsLeader");

	AESPawn_IsLeader_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.ESPawn.GetShipItemInstance
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UItem*                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UItem* AESPawn::GetShipItemInstance()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESPawn.GetShipItemInstance");

	AESPawn_GetShipItemInstance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.ESPawn.GetLeader
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AESPawn*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AESPawn* AESPawn::GetLeader()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESPawn.GetLeader");

	AESPawn_GetLeader_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.ESPawn.GetFollower
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class AESPawn*>         Follower                       (Parm, OutParm, ZeroConstructor)

void AESPawn::GetFollower(TArray<class AESPawn*>* Follower)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESPawn.GetFollower");

	AESPawn_GetFollower_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Follower != nullptr)
		*Follower = params.Follower;
}


// Function ES2.ESPawn.EnterInterior
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AAreaGate**              Gate                           (Parm, ZeroConstructor, IsPlainOldData)

void AESPawn::EnterInterior(class AAreaGate** Gate)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESPawn.EnterInterior");

	AESPawn_EnterInterior_Params params;
	params.Gate = Gate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESPawn.EnableKinematicMode
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bEnablePhysics                 (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Duration                       (Parm, ZeroConstructor, IsPlainOldData)

void AESPawn::EnableKinematicMode(bool* bEnablePhysics, float* Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESPawn.EnableKinematicMode");

	AESPawn_EnableKinematicMode_Params params;
	params.bEnablePhysics = bEnablePhysics;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESPawn.ElectLeaderFromActors
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<class AActor*>*         Group                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool*                          TryTeleportFollowerIntoFormation (Parm, ZeroConstructor, IsPlainOldData)
// class AESPawn*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AESPawn* AESPawn::STATIC_ElectLeaderFromActors(TArray<class AActor*>* Group, bool* TryTeleportFollowerIntoFormation)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESPawn.ElectLeaderFromActors");

	AESPawn_ElectLeaderFromActors_Params params;
	params.Group = Group;
	params.TryTeleportFollowerIntoFormation = TryTeleportFollowerIntoFormation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.ESPawn.ElectLeader
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<class AESPawn*>*        Group                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool*                          TryTeleportFollowerIntoFormation (Parm, ZeroConstructor, IsPlainOldData)
// class AESPawn*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AESPawn* AESPawn::STATIC_ElectLeader(TArray<class AESPawn*>* Group, bool* TryTeleportFollowerIntoFormation)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESPawn.ElectLeader");

	AESPawn_ElectLeader_Params params;
	params.Group = Group;
	params.TryTeleportFollowerIntoFormation = TryTeleportFollowerIntoFormation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.ESPawn.DisableKinematicMode
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void AESPawn::DisableKinematicMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESPawn.DisableKinematicMode");

	AESPawn_DisableKinematicMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESPawn.Die
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class APawn**                  InstigatorPawn                 (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void AESPawn::Die(class AController** EventInstigator, class APawn** InstigatorPawn, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESPawn.Die");

	AESPawn_Die_Params params;
	params.EventInstigator = EventInstigator;
	params.InstigatorPawn = InstigatorPawn;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESPawn.DetermineAreaEnvironment
// (Final, Native, Public, BlueprintCallable)

void AESPawn::DetermineAreaEnvironment()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESPawn.DetermineAreaEnvironment");

	AESPawn_DetermineAreaEnvironment_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESPawn.ClearTargetPreferenceList
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<ETargetPriority>*  Priority                       (Parm, ZeroConstructor, IsPlainOldData)

void AESPawn::ClearTargetPreferenceList(TEnumAsByte<ETargetPriority>* Priority)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESPawn.ClearTargetPreferenceList");

	AESPawn_ClearTargetPreferenceList_Params params;
	params.Priority = Priority;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESPawn.ClearAllTargetPreferenceLists
// (Final, Native, Public, BlueprintCallable)

void AESPawn::ClearAllTargetPreferenceLists()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESPawn.ClearAllTargetPreferenceLists");

	AESPawn_ClearAllTargetPreferenceLists_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESPawn.CanDoBarrelRoll
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AESPawn::CanDoBarrelRoll()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESPawn.CanDoBarrelRoll");

	AESPawn_CanDoBarrelRoll_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.ESPawn.ApplyShipDataShipDecals
// (Final, Native, Public, BlueprintCallable)

void AESPawn::ApplyShipDataShipDecals()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESPawn.ApplyShipDataShipDecals");

	AESPawn_ApplyShipDataShipDecals_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESPawn.ApplyShipDataShipColors
// (Final, Native, Public, BlueprintCallable)

void AESPawn::ApplyShipDataShipColors()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESPawn.ApplyShipDataShipColors");

	AESPawn_ApplyShipDataShipColors_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESPawn.AddTargetPreferenceList
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<class AActor*>*         TargetPreferences              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TEnumAsByte<ETargetPriority>*  Priority                       (Parm, ZeroConstructor, IsPlainOldData)

void AESPawn::AddTargetPreferenceList(TArray<class AActor*>* TargetPreferences, TEnumAsByte<ETargetPriority>* Priority)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESPawn.AddTargetPreferenceList");

	AESPawn_AddTargetPreferenceList_Params params;
	params.TargetPreferences = TargetPreferences;
	params.Priority = Priority;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESPawn.AddTargetPreference
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor**                 TargetPreference               (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ETargetPriority>*  Priority                       (Parm, ZeroConstructor, IsPlainOldData)

void AESPawn::AddTargetPreference(class AActor** TargetPreference, TEnumAsByte<ETargetPriority>* Priority)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESPawn.AddTargetPreference");

	AESPawn_AddTargetPreference_Params params;
	params.TargetPreference = TargetPreference;
	params.Priority = Priority;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESPawn.AddFollower
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AESPawn**                Follower                       (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          TryTeleportFollowerIntoFormation (Parm, ZeroConstructor, IsPlainOldData)

void AESPawn::AddFollower(class AESPawn** Follower, bool* TryTeleportFollowerIntoFormation)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESPawn.AddFollower");

	AESPawn_AddFollower_Params params;
	params.Follower = Follower;
	params.TryTeleportFollowerIntoFormation = TryTeleportFollowerIntoFormation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESPlayerController.TogglePauseMenu_CancelAction
// (Final, Native, Public, BlueprintCallable)

void AESPlayerController::TogglePauseMenu_CancelAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESPlayerController.TogglePauseMenu_CancelAction");

	AESPlayerController_TogglePauseMenu_CancelAction_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESPlayerController.TogglePauseMenu
// (Final, Native, Public, BlueprintCallable)

void AESPlayerController::TogglePauseMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESPlayerController.TogglePauseMenu");

	AESPlayerController_TogglePauseMenu_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESPlayerController.ToggleActionFreeze
// (Final, Native, Public, BlueprintCallable)

void AESPlayerController::ToggleActionFreeze()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESPlayerController.ToggleActionFreeze");

	AESPlayerController_ToggleActionFreeze_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESPlayerController.SignUpToJoystickEvents
// (Final, Native, Public, BlueprintCallable)

void AESPlayerController::SignUpToJoystickEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESPlayerController.SignUpToJoystickEvents");

	AESPlayerController_SignUpToJoystickEvents_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESPlayerController.ShouldShowInteractWidget
// (Final, Native, Private, HasDefaults)
// Parameters:
// class UInteractComponent**     InteractComponent              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UClass**                 WidgetClass                    (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EInteractWidgetDisplayLocation>* DisplayLocation                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D*              DisplayOffset                  (Parm, ZeroConstructor, IsPlainOldData)

void AESPlayerController::ShouldShowInteractWidget(class UInteractComponent** InteractComponent, class UClass** WidgetClass, TEnumAsByte<EInteractWidgetDisplayLocation>* DisplayLocation, struct FVector2D* DisplayOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESPlayerController.ShouldShowInteractWidget");

	AESPlayerController_ShouldShowInteractWidget_Params params;
	params.InteractComponent = InteractComponent;
	params.WidgetClass = WidgetClass;
	params.DisplayLocation = DisplayLocation;
	params.DisplayOffset = DisplayOffset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESPlayerController.ShouldHideInteractWidget
// (Final, Native, Private)
// Parameters:
// class UInteractComponent**     InteractComponent              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AESPlayerController::ShouldHideInteractWidget(class UInteractComponent** InteractComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESPlayerController.ShouldHideInteractWidget");

	AESPlayerController_ShouldHideInteractWidget_Params params;
	params.InteractComponent = InteractComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESPlayerController.SetCrosshairToCenter
// (Final, Native, Public, BlueprintCallable)

void AESPlayerController::SetCrosshairToCenter()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESPlayerController.SetCrosshairToCenter");

	AESPlayerController_SetCrosshairToCenter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESPlayerController.SetAutoPilot
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ALocation**              TargetLocation                 (Parm, ZeroConstructor, IsPlainOldData)

void AESPlayerController::SetAutoPilot(class ALocation** TargetLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESPlayerController.SetAutoPilot");

	AESPlayerController_SetAutoPilot_Params params;
	params.TargetLocation = TargetLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESPlayerController.ReturnToMainMenu
// (Final, Native, Public, BlueprintCallable)

void AESPlayerController::ReturnToMainMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESPlayerController.ReturnToMainMenu");

	AESPlayerController_ReturnToMainMenu_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESPlayerController.PushOrPopHideHUDLayers
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bPush                          (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bMainLayer                     (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bTopLayer                      (Parm, ZeroConstructor, IsPlainOldData)

void AESPlayerController::PushOrPopHideHUDLayers(bool* bPush, bool* bMainLayer, bool* bTopLayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESPlayerController.PushOrPopHideHUDLayers");

	AESPlayerController_PushOrPopHideHUDLayers_Params params;
	params.bPush = bPush;
	params.bMainLayer = bMainLayer;
	params.bTopLayer = bTopLayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESPlayerController.PlayerPawnLookAtTarget
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor**                 Target                         (Parm, ZeroConstructor, IsPlainOldData)

void AESPlayerController::STATIC_PlayerPawnLookAtTarget(class AActor** Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESPlayerController.PlayerPawnLookAtTarget");

	AESPlayerController_PlayerPawnLookAtTarget_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESPlayerController.PlayerConfirmedSettingJoystickPreset
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int*                           DeviceID                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class FString*                 DeviceName                     (Parm, ZeroConstructor)

void AESPlayerController::PlayerConfirmedSettingJoystickPreset(int* DeviceID, class FString* DeviceName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESPlayerController.PlayerConfirmedSettingJoystickPreset");

	AESPlayerController_PlayerConfirmedSettingJoystickPreset_Params params;
	params.DeviceID = DeviceID;
	params.DeviceName = DeviceName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESPlayerController.OpenPauseMenu
// (Final, Native, Public, BlueprintCallable)

void AESPlayerController::OpenPauseMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESPlayerController.OpenPauseMenu");

	AESPlayerController_OpenPauseMenu_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESPlayerController.OnTurnOnAutoPilot
// (Native, Event, Public, BlueprintEvent)

void AESPlayerController::OnTurnOnAutoPilot()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESPlayerController.OnTurnOnAutoPilot");

	AESPlayerController_OnTurnOnAutoPilot_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESPlayerController.OnTurnOffAutoPilot
// (Native, Event, Public, BlueprintEvent)

void AESPlayerController::OnTurnOffAutoPilot()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESPlayerController.OnTurnOffAutoPilot");

	AESPlayerController_OnTurnOffAutoPilot_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESPlayerController.OnToggleHeadLights
// (Native, Event, Public, BlueprintEvent)

void AESPlayerController::OnToggleHeadLights()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESPlayerController.OnToggleHeadLights");

	AESPlayerController_OnToggleHeadLights_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESPlayerController.OnToggleFreeLook
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bEnter                         (Parm, ZeroConstructor, IsPlainOldData)

void AESPlayerController::OnToggleFreeLook(bool* bEnter)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESPlayerController.OnToggleFreeLook");

	AESPlayerController_OnToggleFreeLook_Params params;
	params.bEnter = bEnter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESPlayerController.OnToggleActionFreezeCamera
// (Native, Event, Public, BlueprintEvent)

void AESPlayerController::OnToggleActionFreezeCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESPlayerController.OnToggleActionFreezeCamera");

	AESPlayerController_OnToggleActionFreezeCamera_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESPlayerController.OnSwitchCamera
// (Native, Event, Public, BlueprintEvent)

void AESPlayerController::OnSwitchCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESPlayerController.OnSwitchCamera");

	AESPlayerController_OnSwitchCamera_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESPlayerController.OnShowOrHidePauseMenu
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bShow                          (Parm, ZeroConstructor, IsPlainOldData)

void AESPlayerController::OnShowOrHidePauseMenu(bool* bShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESPlayerController.OnShowOrHidePauseMenu");

	AESPlayerController_OnShowOrHidePauseMenu_Params params;
	params.bShow = bShow;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESPlayerController.OnProcessPlayerInput
// (Native, Event, Public, BlueprintEvent)

void AESPlayerController::OnProcessPlayerInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESPlayerController.OnProcessPlayerInput");

	AESPlayerController_OnProcessPlayerInput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESPlayerController.OnOpenMap
// (Native, Event, Public, BlueprintEvent)

void AESPlayerController::OnOpenMap()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESPlayerController.OnOpenMap");

	AESPlayerController_OnOpenMap_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESPlayerController.OnOpenInventory
// (Native, Event, Public, BlueprintEvent)

void AESPlayerController::OnOpenInventory()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESPlayerController.OnOpenInventory");

	AESPlayerController_OnOpenInventory_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESPlayerController.OnOpenIngameMenu
// (Native, Event, Public, BlueprintEvent)

void AESPlayerController::OnOpenIngameMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESPlayerController.OnOpenIngameMenu");

	AESPlayerController_OnOpenIngameMenu_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESPlayerController.OnJoystickPluggedIn
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// int*                           DeviceID                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class FString*                 DeviceName                     (Parm, ZeroConstructor)

void AESPlayerController::OnJoystickPluggedIn(int* DeviceID, class FString* DeviceName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESPlayerController.OnJoystickPluggedIn");

	AESPlayerController_OnJoystickPluggedIn_Params params;
	params.DeviceID = DeviceID;
	params.DeviceName = DeviceName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESPlayerController.OnHighResScreenshot
// (Native, Event, Public, BlueprintEvent)

void AESPlayerController::OnHighResScreenshot()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESPlayerController.OnHighResScreenshot");

	AESPlayerController_OnHighResScreenshot_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESPlayerController.OnEnterOrExitDeviceSelection
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bEnter                         (Parm, ZeroConstructor, IsPlainOldData)

void AESPlayerController::OnEnterOrExitDeviceSelection(bool* bEnter)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESPlayerController.OnEnterOrExitDeviceSelection");

	AESPlayerController_OnEnterOrExitDeviceSelection_Params params;
	params.bEnter = bEnter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESPlayerController.OnEnterOrExitControlsDisplay
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bEnter                         (Parm, ZeroConstructor, IsPlainOldData)

void AESPlayerController::OnEnterOrExitControlsDisplay(bool* bEnter)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESPlayerController.OnEnterOrExitControlsDisplay");

	AESPlayerController_OnEnterOrExitControlsDisplay_Params params;
	params.bEnter = bEnter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESPlayerController.OnEnterOrExitConsumableSelection
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bEnter                         (Parm, ZeroConstructor, IsPlainOldData)

void AESPlayerController::OnEnterOrExitConsumableSelection(bool* bEnter)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESPlayerController.OnEnterOrExitConsumableSelection");

	AESPlayerController_OnEnterOrExitConsumableSelection_Params params;
	params.bEnter = bEnter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESPlayerController.OnEnterOrExitActionFreeze
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bEnter                         (Parm, ZeroConstructor, IsPlainOldData)

void AESPlayerController::OnEnterOrExitActionFreeze(bool* bEnter)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESPlayerController.OnEnterOrExitActionFreeze");

	AESPlayerController_OnEnterOrExitActionFreeze_Params params;
	params.bEnter = bEnter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESPlayerController.OnCouldNotCollectPickup
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class APickupBase**            Pickup                         (Parm, ZeroConstructor, IsPlainOldData)

void AESPlayerController::OnCouldNotCollectPickup(class APickupBase** Pickup)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESPlayerController.OnCouldNotCollectPickup");

	AESPlayerController_OnCouldNotCollectPickup_Params params;
	params.Pickup = Pickup;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESPlayerController.OnCameraZoom
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// float*                         Zoom                           (Parm, ZeroConstructor, IsPlainOldData)

void AESPlayerController::OnCameraZoom(float* Zoom)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESPlayerController.OnCameraZoom");

	AESPlayerController_OnCameraZoom_Params params;
	params.Zoom = Zoom;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESPlayerController.OnCameraYaw
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// float*                         Yaw                            (Parm, ZeroConstructor, IsPlainOldData)

void AESPlayerController::OnCameraYaw(float* Yaw)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESPlayerController.OnCameraYaw");

	AESPlayerController_OnCameraYaw_Params params;
	params.Yaw = Yaw;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESPlayerController.OnCameraUp
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// float*                         AxisValue                      (Parm, ZeroConstructor, IsPlainOldData)

void AESPlayerController::OnCameraUp(float* AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESPlayerController.OnCameraUp");

	AESPlayerController_OnCameraUp_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESPlayerController.OnCameraRoll
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// float*                         Roll                           (Parm, ZeroConstructor, IsPlainOldData)

void AESPlayerController::OnCameraRoll(float* Roll)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESPlayerController.OnCameraRoll");

	AESPlayerController_OnCameraRoll_Params params;
	params.Roll = Roll;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESPlayerController.OnCameraRight
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// float*                         AxisValue                      (Parm, ZeroConstructor, IsPlainOldData)

void AESPlayerController::OnCameraRight(float* AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESPlayerController.OnCameraRight");

	AESPlayerController_OnCameraRight_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESPlayerController.OnCameraPitch
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// float*                         Pitch                          (Parm, ZeroConstructor, IsPlainOldData)

void AESPlayerController::OnCameraPitch(float* Pitch)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESPlayerController.OnCameraPitch");

	AESPlayerController_OnCameraPitch_Params params;
	params.Pitch = Pitch;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESPlayerController.OnCameraForward
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// float*                         AxisValue                      (Parm, ZeroConstructor, IsPlainOldData)

void AESPlayerController::OnCameraForward(float* AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESPlayerController.OnCameraForward");

	AESPlayerController_OnCameraForward_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction ES2.ESPlayerController.OnAutoPilotSkipTick__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void AESPlayerController::OnAutoPilotSkipTick__DelegateSignature(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction ES2.ESPlayerController.OnAutoPilotSkipTick__DelegateSignature");

	AESPlayerController_OnAutoPilotSkipTick__DelegateSignature_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction ES2.ESPlayerController.OnAutoPilotSkipEnd__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void AESPlayerController::OnAutoPilotSkipEnd__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction ES2.ESPlayerController.OnAutoPilotSkipEnd__DelegateSignature");

	AESPlayerController_OnAutoPilotSkipEnd__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction ES2.ESPlayerController.OnAutoPilotChanged__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// bool*                          bActive                        (Parm, ZeroConstructor, IsPlainOldData)

void AESPlayerController::OnAutoPilotChanged__DelegateSignature(bool* bActive)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction ES2.ESPlayerController.OnAutoPilotChanged__DelegateSignature");

	AESPlayerController_OnAutoPilotChanged__DelegateSignature_Params params;
	params.bActive = bActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESPlayerController.IsAutoPilotActive
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AESPlayerController::IsAutoPilotActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESPlayerController.IsAutoPilotActive");

	AESPlayerController_IsAutoPilotActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.ESPlayerController.HandleJoystickUnplugged
// (Final, Native, Public)
// Parameters:
// int*                           DeviceID                       (Parm, ZeroConstructor, IsPlainOldData)

void AESPlayerController::HandleJoystickUnplugged(int* DeviceID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESPlayerController.HandleJoystickUnplugged");

	AESPlayerController_HandleJoystickUnplugged_Params params;
	params.DeviceID = DeviceID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESPlayerController.HandleJoystickPluggedIn
// (Final, Native, Public)
// Parameters:
// int*                           DeviceID                       (Parm, ZeroConstructor, IsPlainOldData)

void AESPlayerController::HandleJoystickPluggedIn(int* DeviceID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESPlayerController.HandleJoystickPluggedIn");

	AESPlayerController_HandleJoystickPluggedIn_Params params;
	params.DeviceID = DeviceID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESPlayerController.GetCrosshairWorldPosition
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// float*                         FocusDistance                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector AESPlayerController::GetCrosshairWorldPosition(float* FocusDistance)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESPlayerController.GetCrosshairWorldPosition");

	AESPlayerController_GetCrosshairWorldPosition_Params params;
	params.FocusDistance = FocusDistance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.ESPlayerController.GetCrosshairWorldDirection
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector AESPlayerController::GetCrosshairWorldDirection()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESPlayerController.GetCrosshairWorldDirection");

	AESPlayerController_GetCrosshairWorldDirection_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.ESPlayerController.GetCrosshairPosition
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D               CrosshairPosition              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AESPlayerController::GetCrosshairPosition(struct FVector2D* CrosshairPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESPlayerController.GetCrosshairPosition");

	AESPlayerController_GetCrosshairPosition_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CrosshairPosition != nullptr)
		*CrosshairPosition = params.CrosshairPosition;
}


// Function ES2.ESPlayerController.EnableMovement
// (Final, Native, Public, BlueprintCallable)

void AESPlayerController::EnableMovement()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESPlayerController.EnableMovement");

	AESPlayerController_EnableMovement_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESPlayerController.DisableMovement
// (Final, Native, Public, BlueprintCallable)

void AESPlayerController::DisableMovement()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESPlayerController.DisableMovement");

	AESPlayerController_DisableMovement_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ESPlayerController.ClosePauseMenu
// (Final, Native, Public, BlueprintCallable)

void AESPlayerController::ClosePauseMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ESPlayerController.ClosePauseMenu");

	AESPlayerController_ClosePauseMenu_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.VariantLib.ToVector
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FESVariant*             Variant                        (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UVariantLib::STATIC_ToVector(struct FESVariant* Variant)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.VariantLib.ToVector");

	UVariantLib_ToVector_Params params;
	params.Variant = Variant;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.VariantLib.ToString
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FESVariant*             Variant                        (ConstParm, Parm, OutParm, ReferenceParm)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UVariantLib::STATIC_ToString(struct FESVariant* Variant)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.VariantLib.ToString");

	UVariantLib_ToString_Params params;
	params.Variant = Variant;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.VariantLib.ToName
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FESVariant*             Variant                        (ConstParm, Parm, OutParm, ReferenceParm)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UVariantLib::STATIC_ToName(struct FESVariant* Variant)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.VariantLib.ToName");

	UVariantLib_ToName_Params params;
	params.Variant = Variant;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.VariantLib.ToLinearColor
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FESVariant*             Variant                        (ConstParm, Parm, OutParm, ReferenceParm)
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UVariantLib::STATIC_ToLinearColor(struct FESVariant* Variant)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.VariantLib.ToLinearColor");

	UVariantLib_ToLinearColor_Params params;
	params.Variant = Variant;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.VariantLib.ToInt
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FESVariant*             Variant                        (ConstParm, Parm, OutParm, ReferenceParm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UVariantLib::STATIC_ToInt(struct FESVariant* Variant)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.VariantLib.ToInt");

	UVariantLib_ToInt_Params params;
	params.Variant = Variant;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.VariantLib.ToFloat
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FESVariant*             Variant                        (ConstParm, Parm, OutParm, ReferenceParm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UVariantLib::STATIC_ToFloat(struct FESVariant* Variant)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.VariantLib.ToFloat");

	UVariantLib_ToFloat_Params params;
	params.Variant = Variant;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.VariantLib.ToByteArray
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FESVariant*             Variant                        (ConstParm, Parm, OutParm, ReferenceParm)
// TArray<unsigned char>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<unsigned char> UVariantLib::STATIC_ToByteArray(struct FESVariant* Variant)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.VariantLib.ToByteArray");

	UVariantLib_ToByteArray_Params params;
	params.Variant = Variant;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.VariantLib.ToBool
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FESVariant*             Variant                        (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVariantLib::STATIC_ToBool(struct FESVariant* Variant)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.VariantLib.ToBool");

	UVariantLib_ToBool_Params params;
	params.Variant = Variant;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.VariantLib.SetVector
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FESVariant              Variant                        (Parm, OutParm, ReferenceParm)
// struct FVector*                Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UVariantLib::STATIC_SetVector(struct FVector* Value, struct FESVariant* Variant)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.VariantLib.SetVector");

	UVariantLib_SetVector_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Variant != nullptr)
		*Variant = params.Variant;
}


// Function ES2.VariantLib.SetString
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FESVariant              Variant                        (Parm, OutParm, ReferenceParm)
// class FString*                 Value                          (Parm, ZeroConstructor)

void UVariantLib::STATIC_SetString(class FString* Value, struct FESVariant* Variant)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.VariantLib.SetString");

	UVariantLib_SetString_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Variant != nullptr)
		*Variant = params.Variant;
}


// Function ES2.VariantLib.SetName
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FESVariant              Variant                        (Parm, OutParm, ReferenceParm)
// struct FName*                  Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UVariantLib::STATIC_SetName(struct FName* Value, struct FESVariant* Variant)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.VariantLib.SetName");

	UVariantLib_SetName_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Variant != nullptr)
		*Variant = params.Variant;
}


// Function ES2.VariantLib.SetLinearColor
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FESVariant              Variant                        (Parm, OutParm, ReferenceParm)
// struct FLinearColor*           Value                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UVariantLib::STATIC_SetLinearColor(struct FLinearColor* Value, struct FESVariant* Variant)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.VariantLib.SetLinearColor");

	UVariantLib_SetLinearColor_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Variant != nullptr)
		*Variant = params.Variant;
}


// Function ES2.VariantLib.SetInt
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FESVariant              Variant                        (Parm, OutParm, ReferenceParm)
// int*                           Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UVariantLib::STATIC_SetInt(int* Value, struct FESVariant* Variant)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.VariantLib.SetInt");

	UVariantLib_SetInt_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Variant != nullptr)
		*Variant = params.Variant;
}


// Function ES2.VariantLib.SetFloat
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FESVariant              Variant                        (Parm, OutParm, ReferenceParm)
// float*                         Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UVariantLib::STATIC_SetFloat(float* Value, struct FESVariant* Variant)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.VariantLib.SetFloat");

	UVariantLib_SetFloat_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Variant != nullptr)
		*Variant = params.Variant;
}


// Function ES2.VariantLib.SetByteArray
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FESVariant              Variant                        (Parm, OutParm, ReferenceParm)
// TArray<unsigned char>*         Value                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UVariantLib::STATIC_SetByteArray(TArray<unsigned char>* Value, struct FESVariant* Variant)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.VariantLib.SetByteArray");

	UVariantLib_SetByteArray_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Variant != nullptr)
		*Variant = params.Variant;
}


// Function ES2.VariantLib.SetBool
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FESVariant              Variant                        (Parm, OutParm, ReferenceParm)
// bool*                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UVariantLib::STATIC_SetBool(bool* Value, struct FESVariant* Variant)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.VariantLib.SetBool");

	UVariantLib_SetBool_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Variant != nullptr)
		*Variant = params.Variant;
}


// Function ES2.VariantLib.Conv_VectorToESVariant
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector*                Vector                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FESVariant              ReturnValue                    (Parm, OutParm, ReturnParm)

struct FESVariant UVariantLib::STATIC_Conv_VectorToESVariant(struct FVector* Vector)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.VariantLib.Conv_VectorToESVariant");

	UVariantLib_Conv_VectorToESVariant_Params params;
	params.Vector = Vector;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.VariantLib.Conv_StringToESVariant
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString*                 String                         (ConstParm, Parm, ZeroConstructor)
// struct FESVariant              ReturnValue                    (Parm, OutParm, ReturnParm)

struct FESVariant UVariantLib::STATIC_Conv_StringToESVariant(class FString* String)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.VariantLib.Conv_StringToESVariant");

	UVariantLib_Conv_StringToESVariant_Params params;
	params.String = String;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.VariantLib.Conv_NameToESVariant
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName*                  Name                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FESVariant              ReturnValue                    (Parm, OutParm, ReturnParm)

struct FESVariant UVariantLib::STATIC_Conv_NameToESVariant(struct FName* Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.VariantLib.Conv_NameToESVariant");

	UVariantLib_Conv_NameToESVariant_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.VariantLib.Conv_LinearColorToESVariant
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLinearColor*           LinearColor                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FESVariant              ReturnValue                    (Parm, OutParm, ReturnParm)

struct FESVariant UVariantLib::STATIC_Conv_LinearColorToESVariant(struct FLinearColor* LinearColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.VariantLib.Conv_LinearColorToESVariant");

	UVariantLib_Conv_LinearColorToESVariant_Params params;
	params.LinearColor = LinearColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.VariantLib.Conv_IntToESVariant
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int*                           Int                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FESVariant              ReturnValue                    (Parm, OutParm, ReturnParm)

struct FESVariant UVariantLib::STATIC_Conv_IntToESVariant(int* Int)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.VariantLib.Conv_IntToESVariant");

	UVariantLib_Conv_IntToESVariant_Params params;
	params.Int = Int;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.VariantLib.Conv_FloatToESVariant
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float*                         Float                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FESVariant              ReturnValue                    (Parm, OutParm, ReturnParm)

struct FESVariant UVariantLib::STATIC_Conv_FloatToESVariant(float* Float)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.VariantLib.Conv_FloatToESVariant");

	UVariantLib_Conv_FloatToESVariant_Params params;
	params.Float = Float;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.VariantLib.Conv_BoolToESVariant
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool*                          Bool                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FESVariant              ReturnValue                    (Parm, OutParm, ReturnParm)

struct FESVariant UVariantLib::STATIC_Conv_BoolToESVariant(bool* Bool)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.VariantLib.Conv_BoolToESVariant");

	UVariantLib_Conv_BoolToESVariant_Params params;
	params.Bool = Bool;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.FactionComponent.TurnNeutralTowards
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EFactions>*        NeutralTowardsFaction          (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          ResetAggro                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UFactionComponent::TurnNeutralTowards(TEnumAsByte<EFactions>* NeutralTowardsFaction, bool* ResetAggro)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.FactionComponent.TurnNeutralTowards");

	UFactionComponent_TurnNeutralTowards_Params params;
	params.NeutralTowardsFaction = NeutralTowardsFaction;
	params.ResetAggro = ResetAggro;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.FactionComponent.TurnHostileAgainst
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EFactions>*        HostileFaction                 (Parm, ZeroConstructor, IsPlainOldData)
// ENotifyAllies*                 NotifyAllies                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UFactionComponent::TurnHostileAgainst(TEnumAsByte<EFactions>* HostileFaction, ENotifyAllies* NotifyAllies)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.FactionComponent.TurnHostileAgainst");

	UFactionComponent_TurnHostileAgainst_Params params;
	params.HostileFaction = HostileFaction;
	params.NotifyAllies = NotifyAllies;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.FactionComponent.TurnFriendlyTowards
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EFactions>*        FriendlyTowardsFaction         (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          ResetAggro                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UFactionComponent::TurnFriendlyTowards(TEnumAsByte<EFactions>* FriendlyTowardsFaction, bool* ResetAggro)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.FactionComponent.TurnFriendlyTowards");

	UFactionComponent_TurnFriendlyTowards_Params params;
	params.FriendlyTowardsFaction = FriendlyTowardsFaction;
	params.ResetAggro = ResetAggro;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.FactionComponent.ShouldIgnoreDamageDealtByActor
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor**                 DamageDealerActor              (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UFactionComponent::ShouldIgnoreDamageDealtByActor(class AActor** DamageDealerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.FactionComponent.ShouldIgnoreDamageDealtByActor");

	UFactionComponent_ShouldIgnoreDamageDealtByActor_Params params;
	params.DamageDealerActor = DamageDealerActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.FactionComponent.SetFaction
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EFactions>*        NewFaction                     (Parm, ZeroConstructor, IsPlainOldData)

void UFactionComponent::SetFaction(TEnumAsByte<EFactions>* NewFaction)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.FactionComponent.SetFaction");

	UFactionComponent_SetFaction_Params params;
	params.NewFaction = NewFaction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.FactionComponent.OverrideFactionRelation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EFactions>*        FactionToOverride              (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EFactionRelation>* NewRelation                    (Parm, ZeroConstructor, IsPlainOldData)

void UFactionComponent::OverrideFactionRelation(TEnumAsByte<EFactions>* FactionToOverride, TEnumAsByte<EFactionRelation>* NewRelation)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.FactionComponent.OverrideFactionRelation");

	UFactionComponent_OverrideFactionRelation_Params params;
	params.FactionToOverride = FactionToOverride;
	params.NewRelation = NewRelation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.FactionComponent.OnHealthDepleted
// (Final, Native, Public)
// Parameters:
// class AActor**                 Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// class AController**            DamageInstigator               (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DamageAmount                   (Parm, ZeroConstructor, IsPlainOldData)

void UFactionComponent::OnHealthDepleted(class AActor** Actor, class AActor** DamageCauser, class AController** DamageInstigator, float* DamageAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.FactionComponent.OnHealthDepleted");

	UFactionComponent_OnHealthDepleted_Params params;
	params.Actor = Actor;
	params.DamageCauser = DamageCauser;
	params.DamageInstigator = DamageInstigator;
	params.DamageAmount = DamageAmount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.FactionComponent.IsFriendlyFire
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor**                 DamageDealerActor              (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UFactionComponent::IsFriendlyFire(class AActor** DamageDealerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.FactionComponent.IsFriendlyFire");

	UFactionComponent_IsFriendlyFire_Params params;
	params.DamageDealerActor = DamageDealerActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.FactionComponent.IsEnemyFor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor**                 ReferenceActor                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 PotentiallyEnemyActor          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UFactionComponent::STATIC_IsEnemyFor(class AActor** ReferenceActor, class AActor** PotentiallyEnemyActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.FactionComponent.IsEnemyFor");

	UFactionComponent_IsEnemyFor_Params params;
	params.ReferenceActor = ReferenceActor;
	params.PotentiallyEnemyActor = PotentiallyEnemyActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.FactionComponent.GetRelationTo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor**                 Actor                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FFactionEntry           ReturnValue                    (Parm, OutParm, ReturnParm)

struct FFactionEntry UFactionComponent::GetRelationTo(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.FactionComponent.GetRelationTo");

	UFactionComponent_GetRelationTo_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.FactionComponent.GetFactionRelation
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TEnumAsByte<EFactions>*        FactionA                       (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EFactions>*        FactionB                       (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EFactionRelation>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<EFactionRelation> UFactionComponent::STATIC_GetFactionRelation(TEnumAsByte<EFactions>* FactionA, TEnumAsByte<EFactions>* FactionB)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.FactionComponent.GetFactionRelation");

	UFactionComponent_GetFactionRelation_Params params;
	params.FactionA = FactionA;
	params.FactionB = FactionB;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.FactionComponent.GetDamageDealtByFaction
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<EFactions>*        DamageDealingFaction           (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UFactionComponent::GetDamageDealtByFaction(TEnumAsByte<EFactions>* DamageDealingFaction)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.FactionComponent.GetDamageDealtByFaction");

	UFactionComponent_GetDamageDealtByFaction_Params params;
	params.DamageDealingFaction = DamageDealingFaction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.FactionComponent.GetAccumulatedDamage
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor**                 DamageDealerActor              (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UFactionComponent::GetAccumulatedDamage(class AActor** DamageDealerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.FactionComponent.GetAccumulatedDamage");

	UFactionComponent_GetAccumulatedDamage_Params params;
	params.DamageDealerActor = DamageDealerActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.FactionComponent.AddDamage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor**                 DamageDealerActor              (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          EnforceTurningHostile          (Parm, ZeroConstructor, IsPlainOldData)

void UFactionComponent::AddDamage(class AActor** DamageDealerActor, float* Damage, bool* EnforceTurningHostile)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.FactionComponent.AddDamage");

	UFactionComponent_AddDamage_Params params;
	params.DamageDealerActor = DamageDealerActor;
	params.Damage = Damage;
	params.EnforceTurningHostile = EnforceTurningHostile;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.GameData.IsHomebaseUpgradeUnlocked
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName*                  ID                             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameData::STATIC_IsHomebaseUpgradeUnlocked(struct FName* ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.GameData.IsHomebaseUpgradeUnlocked");

	UGameData_IsHomebaseUpgradeUnlocked_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.GameData.GetSystemRegions
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName*                  SystemID                       (Parm, ZeroConstructor, IsPlainOldData)
// TArray<TEnumAsByte<ESystemRegion>> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<TEnumAsByte<ESystemRegion>> UGameData::STATIC_GetSystemRegions(struct FName* SystemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.GameData.GetSystemRegions");

	UGameData_GetSystemRegions_Params params;
	params.SystemID = SystemID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.GameData.GetSpaceObjectName
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName*                  ID                             (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Name_Out                       (Parm, OutParm)
// struct FText                   Subtitle_Out                   (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameData::STATIC_GetSpaceObjectName(struct FName* ID, struct FText* Name_Out, struct FText* Subtitle_Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.GameData.GetSpaceObjectName");

	UGameData_GetSpaceObjectName_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Name_Out != nullptr)
		*Name_Out = params.Name_Out;
	if (Subtitle_Out != nullptr)
		*Subtitle_Out = params.Subtitle_Out;

	return params.ReturnValue;
}


// Function ES2.GameData.GetHomebaseUpgrade
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName*                  ID                             (Parm, ZeroConstructor, IsPlainOldData)
// struct FHomebaseUpgrade        HomebaseUpgrade_Out            (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameData::STATIC_GetHomebaseUpgrade(struct FName* ID, struct FHomebaseUpgrade* HomebaseUpgrade_Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.GameData.GetHomebaseUpgrade");

	UGameData_GetHomebaseUpgrade_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HomebaseUpgrade_Out != nullptr)
		*HomebaseUpgrade_Out = params.HomebaseUpgrade_Out;

	return params.ReturnValue;
}


// Function ES2.GameData.GetDockableStationTemplate
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName*                  ID                             (Parm, ZeroConstructor, IsPlainOldData)
// struct FDockableStationTemplate StationTemplate_Out            (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameData::STATIC_GetDockableStationTemplate(struct FName* ID, struct FDockableStationTemplate* StationTemplate_Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.GameData.GetDockableStationTemplate");

	UGameData_GetDockableStationTemplate_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StationTemplate_Out != nullptr)
		*StationTemplate_Out = params.StationTemplate_Out;

	return params.ReturnValue;
}


// Function ES2.GameData.GetCollectible
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName*                  ID                             (Parm, ZeroConstructor, IsPlainOldData)
// struct FCollectible            ReturnValue                    (Parm, OutParm, ReturnParm)

struct FCollectible UGameData::STATIC_GetCollectible(struct FName* ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.GameData.GetCollectible");

	UGameData_GetCollectible_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.GameData.FoundCollectible
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName*                  ID                             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameData::FoundCollectible(struct FName* ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.GameData.FoundCollectible");

	UGameData_FoundCollectible_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.GameData.FindCollectible
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  ID                             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameData::FindCollectible(struct FName* ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.GameData.FindCollectible");

	UGameData_FindCollectible_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.GameplayLib.TravelModeGenerateSteeringInputForAutoPilot
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class APawn**                  Ship                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                CurrentWaypoint                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector*                Destination                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float*                         OvershootPreventionDistanceKM  (Parm, ZeroConstructor, IsPlainOldData)
// float*                         OversteerPreventionAngle       (Parm, ZeroConstructor, IsPlainOldData)

void UGameplayLib::STATIC_TravelModeGenerateSteeringInputForAutoPilot(class APawn** Ship, struct FVector* CurrentWaypoint, struct FVector* Destination, float* OvershootPreventionDistanceKM, float* OversteerPreventionAngle)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.GameplayLib.TravelModeGenerateSteeringInputForAutoPilot");

	UGameplayLib_TravelModeGenerateSteeringInputForAutoPilot_Params params;
	params.Ship = Ship;
	params.CurrentWaypoint = CurrentWaypoint;
	params.Destination = Destination;
	params.OvershootPreventionDistanceKM = OvershootPreventionDistanceKM;
	params.OversteerPreventionAngle = OversteerPreventionAngle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.GameplayLib.TravelModeFlyAroundPlanet
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor**                 Ship                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Destination                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Planet                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float*                         OrbitRadius                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         HorizonDirOffsetKm             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UGameplayLib::STATIC_TravelModeFlyAroundPlanet(class AActor** Ship, class AActor** Destination, class AActor** Planet, float* OrbitRadius, float* HorizonDirOffsetKm)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.GameplayLib.TravelModeFlyAroundPlanet");

	UGameplayLib_TravelModeFlyAroundPlanet_Params params;
	params.Ship = Ship;
	params.Destination = Destination;
	params.Planet = Planet;
	params.OrbitRadius = OrbitRadius;
	params.HorizonDirOffsetKm = HorizonDirOffsetKm;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.GameplayLib.SpawnPickups
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FPickupEntry>*   PickupsToSpawn                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FVector*                Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FRotator*               Rotation                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// TArray<class APickupBase*>     SpawnedPickups                 (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameplayLib::STATIC_SpawnPickups(class UObject** WorldContextObject, TArray<struct FPickupEntry>* PickupsToSpawn, struct FVector* Location, struct FRotator* Rotation, TArray<class APickupBase*>* SpawnedPickups)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.GameplayLib.SpawnPickups");

	UGameplayLib_SpawnPickups_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PickupsToSpawn = PickupsToSpawn;
	params.Location = Location;
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SpawnedPickups != nullptr)
		*SpawnedPickups = params.SpawnedPickups;

	return params.ReturnValue;
}


// Function ES2.GameplayLib.SpawnPickupFromItem
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UItem**                  Item                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FRotator*               Rotation                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class APickupBase*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class APickupBase* UGameplayLib::STATIC_SpawnPickupFromItem(class UObject** WorldContextObject, class UItem** Item, struct FVector* Location, struct FRotator* Rotation, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.GameplayLib.SpawnPickupFromItem");

	UGameplayLib_SpawnPickupFromItem_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Item = Item;
	params.Location = Location;
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;

	return params.ReturnValue;
}


// Function ES2.GameplayLib.SpawnPawnFromClass
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 PawnClass                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform*             SpawnTransform                 (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AESPawn*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AESPawn* UGameplayLib::STATIC_SpawnPawnFromClass(class UObject** WorldContextObject, class UClass** PawnClass, struct FTransform* SpawnTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.GameplayLib.SpawnPawnFromClass");

	UGameplayLib_SpawnPawnFromClass_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PawnClass = PawnClass;
	params.SpawnTransform = SpawnTransform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.GameplayLib.SpawnNPCPawnWithParams
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 NPCClass                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform*             SpawnTransform                 (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FSpawnParameter*        P                              (ConstParm, Parm, OutParm, ReferenceParm)
// class AESPawn*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AESPawn* UGameplayLib::STATIC_SpawnNPCPawnWithParams(class UObject** WorldContextObject, class UClass** NPCClass, struct FTransform* SpawnTransform, struct FSpawnParameter* P)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.GameplayLib.SpawnNPCPawnWithParams");

	UGameplayLib_SpawnNPCPawnWithParams_Params params;
	params.WorldContextObject = WorldContextObject;
	params.NPCClass = NPCClass;
	params.SpawnTransform = SpawnTransform;
	params.P = P;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.GameplayLib.SpawnNPCPawn
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 NPCClass                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform*             SpawnTransform                 (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// int*                           Level                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           Mark                           (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          JumpIn                         (Parm, ZeroConstructor, IsPlainOldData)
// class AESPawn*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AESPawn* UGameplayLib::STATIC_SpawnNPCPawn(class UObject** WorldContextObject, class UClass** NPCClass, struct FTransform* SpawnTransform, int* Level, int* Mark, bool* JumpIn)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.GameplayLib.SpawnNPCPawn");

	UGameplayLib_SpawnNPCPawn_Params params;
	params.WorldContextObject = WorldContextObject;
	params.NPCClass = NPCClass;
	params.SpawnTransform = SpawnTransform;
	params.Level = Level;
	params.Mark = Mark;
	params.JumpIn = JumpIn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.GameplayLib.SetShipInactiveForPresenting
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool*                          bInactive                      (Parm, ZeroConstructor, IsPlainOldData)

void UGameplayLib::STATIC_SetShipInactiveForPresenting(bool* bInactive)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.GameplayLib.SetShipInactiveForPresenting");

	UGameplayLib_SetShipInactiveForPresenting_Params params;
	params.bInactive = bInactive;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.GameplayLib.SetGraphicsQuality
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EGraphicsQuality>* Quality                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FGraphicsQualityLevels* QualityLevels                  (ConstParm, Parm, OutParm, ReferenceParm)

void UGameplayLib::STATIC_SetGraphicsQuality(class UObject** WorldContextObject, TEnumAsByte<EGraphicsQuality>* Quality, struct FGraphicsQualityLevels* QualityLevels)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.GameplayLib.SetGraphicsQuality");

	UGameplayLib_SetGraphicsQuality_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Quality = Quality;
	params.QualityLevels = QualityLevels;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.GameplayLib.SafeGetControlledPawn
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AController**            Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// class APawn*                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class APawn* UGameplayLib::STATIC_SafeGetControlledPawn(class AController** Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.GameplayLib.SafeGetControlledPawn");

	UGameplayLib_SafeGetControlledPawn_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.GameplayLib.RestartBehaviorTree
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor**                 Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void UGameplayLib::STATIC_RestartBehaviorTree(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.GameplayLib.RestartBehaviorTree");

	UGameplayLib_RestartBehaviorTree_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.GameplayLib.RepairCurrentPlayerShip
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float*                         HitpointsToRepair              (Parm, ZeroConstructor, IsPlainOldData)
// int*                           RepairCostCredits              (Parm, ZeroConstructor, IsPlainOldData)

void UGameplayLib::STATIC_RepairCurrentPlayerShip(class UObject** WorldContextObject, float* HitpointsToRepair, int* RepairCostCredits)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.GameplayLib.RepairCurrentPlayerShip");

	UGameplayLib_RepairCurrentPlayerShip_Params params;
	params.WorldContextObject = WorldContextObject;
	params.HitpointsToRepair = HitpointsToRepair;
	params.RepairCostCredits = RepairCostCredits;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.GameplayLib.RemoveProgressToken
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName*                  TokenID                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameplayLib::STATIC_RemoveProgressToken(struct FName* TokenID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.GameplayLib.RemoveProgressToken");

	UGameplayLib_RemoveProgressToken_Params params;
	params.TokenID = TokenID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.GameplayLib.RemoveIgnoreIfInferiorTag
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor**                 Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void UGameplayLib::STATIC_RemoveIgnoreIfInferiorTag(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.GameplayLib.RemoveIgnoreIfInferiorTag");

	UGameplayLib_RemoveIgnoreIfInferiorTag_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.GameplayLib.ReloadLocationAfterShipChange
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bUndockFromStation             (Parm, ZeroConstructor, IsPlainOldData)

void UGameplayLib::STATIC_ReloadLocationAfterShipChange(class UObject** WorldContextObject, bool* bUndockFromStation)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.GameplayLib.ReloadLocationAfterShipChange");

	UGameplayLib_ReloadLocationAfterShipChange_Params params;
	params.WorldContextObject = WorldContextObject;
	params.bUndockFromStation = bUndockFromStation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.GameplayLib.ReinitNPCLevelingData
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor**                 NPCActor                       (Parm, ZeroConstructor, IsPlainOldData)
// int*                           Level                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           NPCMark                        (Parm, ZeroConstructor, IsPlainOldData)

void UGameplayLib::STATIC_ReinitNPCLevelingData(class AActor** NPCActor, int* Level, int* NPCMark)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.GameplayLib.ReinitNPCLevelingData");

	UGameplayLib_ReinitNPCLevelingData_Params params;
	params.NPCActor = NPCActor;
	params.Level = Level;
	params.NPCMark = NPCMark;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.GameplayLib.RefreshPlayerShipData
// (Final, Native, Static, Public, BlueprintCallable)

void UGameplayLib::STATIC_RefreshPlayerShipData()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.GameplayLib.RefreshPlayerShipData");

	UGameplayLib_RefreshPlayerShipData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.GameplayLib.ReenterLocationAndKeepPosition
// (Final, Native, Static, Public, BlueprintCallable)

void UGameplayLib::STATIC_ReenterLocationAndKeepPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.GameplayLib.ReenterLocationAndKeepPosition");

	UGameplayLib_ReenterLocationAndKeepPosition_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.GameplayLib.PredictPhysicsLocation
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor**                 Actor                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          UseHudMarkerPivot              (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UGameplayLib::STATIC_PredictPhysicsLocation(class AActor** Actor, bool* UseHudMarkerPivot)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.GameplayLib.PredictPhysicsLocation");

	UGameplayLib_PredictPhysicsLocation_Params params;
	params.Actor = Actor;
	params.UseHudMarkerPivot = UseHudMarkerPivot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.GameplayLib.OpenCinematicMap
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int*                           MovieIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bSaveLocationState             (Parm, ZeroConstructor, IsPlainOldData)

void UGameplayLib::STATIC_OpenCinematicMap(class UObject** WorldContextObject, int* MovieIndex, bool* bSaveLocationState)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.GameplayLib.OpenCinematicMap");

	UGameplayLib_OpenCinematicMap_Params params;
	params.WorldContextObject = WorldContextObject;
	params.MovieIndex = MovieIndex;
	params.bSaveLocationState = bSaveLocationState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.GameplayLib.LookAtTarget
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor**                 ActorThatLooksAt               (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 ActorToLookAt                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UGameplayLib::STATIC_LookAtTarget(class AActor** ActorThatLooksAt, class AActor** ActorToLookAt)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.GameplayLib.LookAtTarget");

	UGameplayLib_LookAtTarget_Params params;
	params.ActorThatLooksAt = ActorThatLooksAt;
	params.ActorToLookAt = ActorToLookAt;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.GameplayLib.KillActorSoftly
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor**                 Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void UGameplayLib::STATIC_KillActorSoftly(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.GameplayLib.KillActorSoftly");

	UGameplayLib_KillActorSoftly_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.GameplayLib.IsPlayerPawn
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor**                 PotentialPlayerPawn            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameplayLib::STATIC_IsPlayerPawn(class AActor** PotentialPlayerPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.GameplayLib.IsPlayerPawn");

	UGameplayLib_IsPlayerPawn_Params params;
	params.PotentialPlayerPawn = PotentialPlayerPawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.GameplayLib.IsPlayerDockedToAnyStation
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameplayLib::STATIC_IsPlayerDockedToAnyStation()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.GameplayLib.IsPlayerDockedToAnyStation");

	UGameplayLib_IsPlayerDockedToAnyStation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.GameplayLib.IsPlayerController
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class AController**            PotentialPlayerController      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameplayLib::STATIC_IsPlayerController(class UObject** WorldContextObject, class AController** PotentialPlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.GameplayLib.IsPlayerController");

	UGameplayLib_IsPlayerController_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PotentialPlayerController = PotentialPlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.GameplayLib.IsInTravelMode
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject**                WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameplayLib::STATIC_IsInTravelMode(class UObject** WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.GameplayLib.IsInTravelMode");

	UGameplayLib_IsInTravelMode_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.GameplayLib.IsInterceptionTakingPlace
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameplayLib::STATIC_IsInterceptionTakingPlace()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.GameplayLib.IsInterceptionTakingPlace");

	UGameplayLib_IsInterceptionTakingPlace_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.GameplayLib.IsGamescomBuild
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameplayLib::STATIC_IsGamescomBuild()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.GameplayLib.IsGamescomBuild");

	UGameplayLib_IsGamescomBuild_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.GameplayLib.IsGamepadModeEnabled
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameplayLib::STATIC_IsGamepadModeEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.GameplayLib.IsGamepadModeEnabled");

	UGameplayLib_IsGamepadModeEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.GameplayLib.IsDeadlyNPCForPlayer
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject**                WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameplayLib::STATIC_IsDeadlyNPCForPlayer(class UObject** WorldContextObject, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.GameplayLib.IsDeadlyNPCForPlayer");

	UGameplayLib_IsDeadlyNPCForPlayer_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.GameplayLib.IsAnyEnemyWithinRange
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor**                 Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Range                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameplayLib::IsAnyEnemyWithinRange(class AActor** Actor, float* Range)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.GameplayLib.IsAnyEnemyWithinRange");

	UGameplayLib_IsAnyEnemyWithinRange_Params params;
	params.Actor = Actor;
	params.Range = Range;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.GameplayLib.HideActorSoftly
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor**                 Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void UGameplayLib::STATIC_HideActorSoftly(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.GameplayLib.HideActorSoftly");

	UGameplayLib_HideActorSoftly_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.GameplayLib.HasProgressTokens
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FName>*          TokenIDs                       (ConstParm, Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameplayLib::STATIC_HasProgressTokens(TArray<struct FName>* TokenIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.GameplayLib.HasProgressTokens");

	UGameplayLib_HasProgressTokens_Params params;
	params.TokenIDs = TokenIDs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.GameplayLib.HasProgressToken
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName*                  TokenID                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameplayLib::STATIC_HasProgressToken(struct FName* TokenID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.GameplayLib.HasProgressToken");

	UGameplayLib_HasProgressToken_Params params;
	params.TokenID = TokenID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.GameplayLib.HasIgnoreIfInferiorTag
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor**                 Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameplayLib::STATIC_HasIgnoreIfInferiorTag(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.GameplayLib.HasIgnoreIfInferiorTag");

	UGameplayLib_HasIgnoreIfInferiorTag_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.GameplayLib.HasEnoughCredits
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int*                           QueryAmount                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameplayLib::STATIC_HasEnoughCredits(int* QueryAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.GameplayLib.HasEnoughCredits");

	UGameplayLib_HasEnoughCredits_Params params;
	params.QueryAmount = QueryAmount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.GameplayLib.GetShipTierAtShipLevel
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int*                           ShipLevel                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UGameplayLib::STATIC_GetShipTierAtShipLevel(int* ShipLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.GameplayLib.GetShipTierAtShipLevel");

	UGameplayLib_GetShipTierAtShipLevel_Params params;
	params.ShipLevel = ShipLevel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.GameplayLib.GetRequiredXPForLevel
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int*                           Level                          (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bRelativeToCurrentLevel        (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UGameplayLib::STATIC_GetRequiredXPForLevel(int* Level, bool* bRelativeToCurrentLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.GameplayLib.GetRequiredXPForLevel");

	UGameplayLib_GetRequiredXPForLevel_Params params;
	params.Level = Level;
	params.bRelativeToCurrentLevel = bRelativeToCurrentLevel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.GameplayLib.GetRepairCostAndAvailabilityAtStation
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName*                  StationID                      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         HitpointsToRepair              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bRepairAvailable_Out           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Cost_Out                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameplayLib::STATIC_GetRepairCostAndAvailabilityAtStation(struct FName* StationID, float* HitpointsToRepair, bool* bRepairAvailable_Out, float* Cost_Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.GameplayLib.GetRepairCostAndAvailabilityAtStation");

	UGameplayLib_GetRepairCostAndAvailabilityAtStation_Params params;
	params.StationID = StationID;
	params.HitpointsToRepair = HitpointsToRepair;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bRepairAvailable_Out != nullptr)
		*bRepairAvailable_Out = params.bRepairAvailable_Out;
	if (Cost_Out != nullptr)
		*Cost_Out = params.Cost_Out;

	return params.ReturnValue;
}


// Function ES2.GameplayLib.GetRemainingXPForLevelUp
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UGameplayLib::STATIC_GetRemainingXPForLevelUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.GameplayLib.GetRemainingXPForLevelUp");

	UGameplayLib_GetRemainingXPForLevelUp_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.GameplayLib.GetRelationTo
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor**                 Actor                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 OtherActor                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EFactionRelation>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<EFactionRelation> UGameplayLib::STATIC_GetRelationTo(class AActor** Actor, class AActor** OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.GameplayLib.GetRelationTo");

	UGameplayLib_GetRelationTo_Params params;
	params.Actor = Actor;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.GameplayLib.GetProgressTokens
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UProgressTokenIDs*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UProgressTokenIDs* UGameplayLib::STATIC_GetProgressTokens()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.GameplayLib.GetProgressTokens");

	UGameplayLib_GetProgressTokens_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.GameplayLib.GetPlayerData
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UPlayerData*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UPlayerData* UGameplayLib::STATIC_GetPlayerData()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.GameplayLib.GetPlayerData");

	UGameplayLib_GetPlayerData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.GameplayLib.GetPlayerControllerWithoutContext
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class APlayerController*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class APlayerController* UGameplayLib::STATIC_GetPlayerControllerWithoutContext()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.GameplayLib.GetPlayerControllerWithoutContext");

	UGameplayLib_GetPlayerControllerWithoutContext_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.GameplayLib.GetNumPlayerShipTiers
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UGameplayLib::STATIC_GetNumPlayerShipTiers()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.GameplayLib.GetNumPlayerShipTiers");

	UGameplayLib_GetNumPlayerShipTiers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.GameplayLib.GetNearestEnemyPawn
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class AActor**                 ReferenceActor                 (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bRegardVisibleEnemiesOnly      (Parm, ZeroConstructor, IsPlainOldData)
// float                          DistanceOut                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class AESPawn*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AESPawn* UGameplayLib::STATIC_GetNearestEnemyPawn(class AActor** ReferenceActor, bool* bRegardVisibleEnemiesOnly, float* DistanceOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.GameplayLib.GetNearestEnemyPawn");

	UGameplayLib_GetNearestEnemyPawn_Params params;
	params.ReferenceActor = ReferenceActor;
	params.bRegardVisibleEnemiesOnly = bRegardVisibleEnemiesOnly;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DistanceOut != nullptr)
		*DistanceOut = params.DistanceOut;

	return params.ReturnValue;
}


// Function ES2.GameplayLib.GetMaxPlayerShipLevel
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UGameplayLib::STATIC_GetMaxPlayerShipLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.GameplayLib.GetMaxPlayerShipLevel");

	UGameplayLib_GetMaxPlayerShipLevel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.GameplayLib.GetMaxPlayerLevel
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UGameplayLib::STATIC_GetMaxPlayerLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.GameplayLib.GetMaxPlayerLevel");

	UGameplayLib_GetMaxPlayerLevel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.GameplayLib.GetMaxLevel
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UGameplayLib::STATIC_GetMaxLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.GameplayLib.GetMaxLevel");

	UGameplayLib_GetMaxLevel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.GameplayLib.GetLevelVariation
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FRandomStream           RandomStream                   (Parm, OutParm, ZeroConstructor)
// int*                           LevelIn                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UGameplayLib::STATIC_GetLevelVariation(int* LevelIn, struct FRandomStream* RandomStream)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.GameplayLib.GetLevelVariation");

	UGameplayLib_GetLevelVariation_Params params;
	params.LevelIn = LevelIn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RandomStream != nullptr)
		*RandomStream = params.RandomStream;

	return params.ReturnValue;
}


// Function ES2.GameplayLib.GetLevelUpProgress
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UGameplayLib::STATIC_GetLevelUpProgress()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.GameplayLib.GetLevelUpProgress");

	UGameplayLib_GetLevelUpProgress_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.GameplayLib.GetItemPriceAtStationOrLocation
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UItem**                  Item                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  ItemID                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  StationID                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  LocationID                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FStationItemPriceInfo   PriceInfoOut                   (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameplayLib::STATIC_GetItemPriceAtStationOrLocation(class UItem** Item, struct FName* ItemID, struct FName* StationID, struct FName* LocationID, struct FStationItemPriceInfo* PriceInfoOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.GameplayLib.GetItemPriceAtStationOrLocation");

	UGameplayLib_GetItemPriceAtStationOrLocation_Params params;
	params.Item = Item;
	params.ItemID = ItemID;
	params.StationID = StationID;
	params.LocationID = LocationID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PriceInfoOut != nullptr)
		*PriceInfoOut = params.PriceInfoOut;

	return params.ReturnValue;
}


// Function ES2.GameplayLib.GetItemLevelForLootDrop
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRandomStream           RandomStream                   (Parm, OutParm, ZeroConstructor)
// class AActor**                 Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UGameplayLib::STATIC_GetItemLevelForLootDrop(class AActor** Actor, struct FRandomStream* RandomStream)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.GameplayLib.GetItemLevelForLootDrop");

	UGameplayLib_GetItemLevelForLootDrop_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RandomStream != nullptr)
		*RandomStream = params.RandomStream;

	return params.ReturnValue;
}


// Function ES2.GameplayLib.GetGraphicsQuality
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EGraphicsQuality>  GraphicsQualityOut             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FGraphicsQualityLevels  QualityLevelsOut               (Parm, OutParm)
// bool                           bCustomQualityLevelsSetOut     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGameplayLib::STATIC_GetGraphicsQuality(class UObject** WorldContextObject, TEnumAsByte<EGraphicsQuality>* GraphicsQualityOut, struct FGraphicsQualityLevels* QualityLevelsOut, bool* bCustomQualityLevelsSetOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.GameplayLib.GetGraphicsQuality");

	UGameplayLib_GetGraphicsQuality_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GraphicsQualityOut != nullptr)
		*GraphicsQualityOut = params.GraphicsQualityOut;
	if (QualityLevelsOut != nullptr)
		*QualityLevelsOut = params.QualityLevelsOut;
	if (bCustomQualityLevelsSetOut != nullptr)
		*bCustomQualityLevelsSetOut = params.bCustomQualityLevelsSetOut;
}


// Function ES2.GameplayLib.GetGameData
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UGameData*               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UGameData* UGameplayLib::STATIC_GetGameData()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.GameplayLib.GetGameData");

	UGameplayLib_GetGameData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.GameplayLib.GetESHUD
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class AESHUD*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AESHUD* UGameplayLib::STATIC_GetESHUD(class UObject** WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.GameplayLib.GetESHUD");

	UGameplayLib_GetESHUD_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.GameplayLib.GetESGameInstance
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UESGameInstance*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UESGameInstance* UGameplayLib::STATIC_GetESGameInstance()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.GameplayLib.GetESGameInstance");

	UGameplayLib_GetESGameInstance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.GameplayLib.GetEquippedPlayerItemOfCategory
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName*                  CategoryID                     (Parm, ZeroConstructor, IsPlainOldData)
// class UItem*                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UItem* UGameplayLib::STATIC_GetEquippedPlayerItemOfCategory(struct FName* CategoryID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.GameplayLib.GetEquippedPlayerItemOfCategory");

	UGameplayLib_GetEquippedPlayerItemOfCategory_Params params;
	params.CategoryID = CategoryID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.GameplayLib.GetEnemiesSortedByDistance
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// TEnumAsByte<EFactions>*        QueryFaction                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                QueryLocation                  (Parm, ZeroConstructor, IsPlainOldData)
// TMap<class AActor*, float>     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TMap<class AActor*, float> UGameplayLib::STATIC_GetEnemiesSortedByDistance(TEnumAsByte<EFactions>* QueryFaction, struct FVector* QueryLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.GameplayLib.GetEnemiesSortedByDistance");

	UGameplayLib_GetEnemiesSortedByDistance_Params params;
	params.QueryFaction = QueryFaction;
	params.QueryLocation = QueryLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.GameplayLib.GetDockableStationActor
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName*                  DockableStationID              (Parm, ZeroConstructor, IsPlainOldData)
// class ADockableStation*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ADockableStation* UGameplayLib::STATIC_GetDockableStationActor(struct FName* DockableStationID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.GameplayLib.GetDockableStationActor");

	UGameplayLib_GetDockableStationActor_Params params;
	params.DockableStationID = DockableStationID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.GameplayLib.GetDistanceText
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool*                          bTravelModeScale               (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UGameplayLib::STATIC_GetDistanceText(bool* bTravelModeScale, float* Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.GameplayLib.GetDistanceText");

	UGameplayLib_GetDistanceText_Params params;
	params.bTravelModeScale = bTravelModeScale;
	params.Distance = Distance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.GameplayLib.GetDamageType
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TEnumAsByte<ETypeOfDamage>*    TypeOfDamage                   (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* UGameplayLib::STATIC_GetDamageType(TEnumAsByte<ETypeOfDamage>* TypeOfDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.GameplayLib.GetDamageType");

	UGameplayLib_GetDamageType_Params params;
	params.TypeOfDamage = TypeOfDamage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.GameplayLib.EvaluateBezier
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FVector>*        ControlPoints                  (Parm, ZeroConstructor)
// int*                           NumPoints                      (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FVector>         OutPoints                      (Parm, OutParm, ZeroConstructor)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UGameplayLib::STATIC_EvaluateBezier(TArray<struct FVector>* ControlPoints, int* NumPoints, TArray<struct FVector>* OutPoints)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.GameplayLib.EvaluateBezier");

	UGameplayLib_EvaluateBezier_Params params;
	params.ControlPoints = ControlPoints;
	params.NumPoints = NumPoints;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutPoints != nullptr)
		*OutPoints = params.OutPoints;

	return params.ReturnValue;
}


// Function ES2.GameplayLib.ESOpenLevel
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  LevelName                      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAbsolute                      (Parm, ZeroConstructor, IsPlainOldData)
// class FString*                 Options                        (Parm, ZeroConstructor)

void UGameplayLib::STATIC_ESOpenLevel(class UObject** WorldContextObject, struct FName* LevelName, bool* bAbsolute, class FString* Options)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.GameplayLib.ESOpenLevel");

	UGameplayLib_ESOpenLevel_Params params;
	params.WorldContextObject = WorldContextObject;
	params.LevelName = LevelName;
	params.bAbsolute = bAbsolute;
	params.Options = Options;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.GameplayLib.DoesPlayerHaveItem
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName*                  ItemID                         (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EInventorySearchType>* SearchType                     (Parm, ZeroConstructor, IsPlainOldData)
// int*                           MinAmount                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameplayLib::STATIC_DoesPlayerHaveItem(struct FName* ItemID, TEnumAsByte<EInventorySearchType>* SearchType, int* MinAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.GameplayLib.DoesPlayerHaveItem");

	UGameplayLib_DoesPlayerHaveItem_Params params;
	params.ItemID = ItemID;
	params.SearchType = SearchType;
	params.MinAmount = MinAmount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.GameplayLib.DoesCurrentShipNeedAmmoRefill
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameplayLib::STATIC_DoesCurrentShipNeedAmmoRefill()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.GameplayLib.DoesCurrentShipNeedAmmoRefill");

	UGameplayLib_DoesCurrentShipNeedAmmoRefill_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.GameplayLib.ChangeToStolenOutlawShip
// (Final, Native, Static, Public, BlueprintCallable)

void UGameplayLib::STATIC_ChangeToStolenOutlawShip()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.GameplayLib.ChangeToStolenOutlawShip");

	UGameplayLib_ChangeToStolenOutlawShip_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.GameplayLib.ChangeLocation
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FLocationData*          OldLocation                    (ConstParm, Parm, OutParm, ReferenceParm)
// struct FLocationData*          NewLocation                    (ConstParm, Parm, OutParm, ReferenceParm)
// bool*                          bDontClearDockingPoint         (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bSkipSavingLocationState       (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bDontAutoSave                  (Parm, ZeroConstructor, IsPlainOldData)

void UGameplayLib::STATIC_ChangeLocation(class UObject** WorldContextObject, struct FLocationData* OldLocation, struct FLocationData* NewLocation, bool* bDontClearDockingPoint, bool* bSkipSavingLocationState, bool* bDontAutoSave)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.GameplayLib.ChangeLocation");

	UGameplayLib_ChangeLocation_Params params;
	params.WorldContextObject = WorldContextObject;
	params.OldLocation = OldLocation;
	params.NewLocation = NewLocation;
	params.bDontClearDockingPoint = bDontClearDockingPoint;
	params.bSkipSavingLocationState = bSkipSavingLocationState;
	params.bDontAutoSave = bDontAutoSave;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.GameplayLib.ChangeCredits
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int*                           credits                        (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bWithoutSound                  (Parm, ZeroConstructor, IsPlainOldData)

void UGameplayLib::STATIC_ChangeCredits(int* credits, bool* bWithoutSound)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.GameplayLib.ChangeCredits");

	UGameplayLib_ChangeCredits_Params params;
	params.credits = credits;
	params.bWithoutSound = bWithoutSound;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.GameplayLib.CanRefillAmmoAtStation
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName*                  StationID                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameplayLib::STATIC_CanRefillAmmoAtStation(struct FName* StationID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.GameplayLib.CanRefillAmmoAtStation");

	UGameplayLib_CanRefillAmmoAtStation_Params params;
	params.StationID = StationID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.GameplayLib.ApplyESRadialDamage
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float*                         EnergyDamage                   (Parm, ZeroConstructor, IsPlainOldData)
// float*                         KineticDamage                  (Parm, ZeroConstructor, IsPlainOldData)
// float*                         GenericDamage                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Origin                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float*                         DamageRadius                   (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AActor*>*         IgnoreActors                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool*                          bIsCriticalHit                 (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsShieldPiercing              (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsArmorPiercing               (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bDoFullDamage                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameplayLib::STATIC_ApplyESRadialDamage(class UObject** WorldContextObject, float* EnergyDamage, float* KineticDamage, float* GenericDamage, struct FVector* Origin, float* DamageRadius, TArray<class AActor*>* IgnoreActors, bool* bIsCriticalHit, bool* bIsShieldPiercing, bool* bIsArmorPiercing, class AActor** DamageCauser, class AController** EventInstigator, bool* bDoFullDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.GameplayLib.ApplyESRadialDamage");

	UGameplayLib_ApplyESRadialDamage_Params params;
	params.WorldContextObject = WorldContextObject;
	params.EnergyDamage = EnergyDamage;
	params.KineticDamage = KineticDamage;
	params.GenericDamage = GenericDamage;
	params.Origin = Origin;
	params.DamageRadius = DamageRadius;
	params.IgnoreActors = IgnoreActors;
	params.bIsCriticalHit = bIsCriticalHit;
	params.bIsShieldPiercing = bIsShieldPiercing;
	params.bIsArmorPiercing = bIsArmorPiercing;
	params.DamageCauser = DamageCauser;
	params.EventInstigator = EventInstigator;
	params.bDoFullDamage = bDoFullDamage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.GameplayLib.ApplyESPointDamage
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor**                 DamagedActor                   (Parm, ZeroConstructor, IsPlainOldData)
// float*                         EnergyDamage                   (Parm, ZeroConstructor, IsPlainOldData)
// float*                         KineticDamage                  (Parm, ZeroConstructor, IsPlainOldData)
// float*                         GenericDamage                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                HitFromDirection               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FHitResult*             HitInfo                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsCriticalHit                 (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsShieldPiercing              (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsArmorPiercing               (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UGameplayLib::STATIC_ApplyESPointDamage(class AActor** DamagedActor, float* EnergyDamage, float* KineticDamage, float* GenericDamage, struct FVector* HitFromDirection, struct FHitResult* HitInfo, class AController** EventInstigator, class AActor** DamageCauser, bool* bIsCriticalHit, bool* bIsShieldPiercing, bool* bIsArmorPiercing)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.GameplayLib.ApplyESPointDamage");

	UGameplayLib_ApplyESPointDamage_Params params;
	params.DamagedActor = DamagedActor;
	params.EnergyDamage = EnergyDamage;
	params.KineticDamage = KineticDamage;
	params.GenericDamage = GenericDamage;
	params.HitFromDirection = HitFromDirection;
	params.HitInfo = HitInfo;
	params.EventInstigator = EventInstigator;
	params.DamageCauser = DamageCauser;
	params.bIsCriticalHit = bIsCriticalHit;
	params.bIsShieldPiercing = bIsShieldPiercing;
	params.bIsArmorPiercing = bIsArmorPiercing;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.GameplayLib.ApplyESDamage
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor**                 DamagedActor                   (Parm, ZeroConstructor, IsPlainOldData)
// float*                         EnergyDamage                   (Parm, ZeroConstructor, IsPlainOldData)
// float*                         KineticDamage                  (Parm, ZeroConstructor, IsPlainOldData)
// float*                         GenericDamage                  (Parm, ZeroConstructor, IsPlainOldData)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsCriticalHit                 (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsShieldPiercing              (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsArmorPiercing               (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UGameplayLib::STATIC_ApplyESDamage(class AActor** DamagedActor, float* EnergyDamage, float* KineticDamage, float* GenericDamage, class AController** EventInstigator, class AActor** DamageCauser, bool* bIsCriticalHit, bool* bIsShieldPiercing, bool* bIsArmorPiercing)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.GameplayLib.ApplyESDamage");

	UGameplayLib_ApplyESDamage_Params params;
	params.DamagedActor = DamagedActor;
	params.EnergyDamage = EnergyDamage;
	params.KineticDamage = KineticDamage;
	params.GenericDamage = GenericDamage;
	params.EventInstigator = EventInstigator;
	params.DamageCauser = DamageCauser;
	params.bIsCriticalHit = bIsCriticalHit;
	params.bIsShieldPiercing = bIsShieldPiercing;
	params.bIsArmorPiercing = bIsArmorPiercing;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.GameplayLib.AddXP
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float*                         XP                             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameplayLib::STATIC_AddXP(float* XP)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.GameplayLib.AddXP");

	UGameplayLib_AddXP_Params params;
	params.XP = XP;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.GameplayLib.AddProgressToken
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName*                  TokenID                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameplayLib::STATIC_AddProgressToken(struct FName* TokenID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.GameplayLib.AddProgressToken");

	UGameplayLib_AddProgressToken_Params params;
	params.TokenID = TokenID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.GameplayLib.AddPersistentWingmanWithPawn
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName*                  ID                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int*                           WingmanType                    (Parm, ZeroConstructor, IsPlainOldData)
// class AESPawn**                Pawn                           (Parm, ZeroConstructor, IsPlainOldData)

void UGameplayLib::STATIC_AddPersistentWingmanWithPawn(struct FName* ID, int* WingmanType, class AESPawn** Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.GameplayLib.AddPersistentWingmanWithPawn");

	UGameplayLib_AddPersistentWingmanWithPawn_Params params;
	params.ID = ID;
	params.WingmanType = WingmanType;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.GameplayLib.AddPersistentWingmanWithClassPath
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName*                  ID                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int*                           WingmanType                    (Parm, ZeroConstructor, IsPlainOldData)
// class FString*                 ClassPath                      (Parm, ZeroConstructor)

void UGameplayLib::STATIC_AddPersistentWingmanWithClassPath(struct FName* ID, int* WingmanType, class FString* ClassPath)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.GameplayLib.AddPersistentWingmanWithClassPath");

	UGameplayLib_AddPersistentWingmanWithClassPath_Params params;
	params.ID = ID;
	params.WingmanType = WingmanType;
	params.ClassPath = ClassPath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.GameplayLib.AddIgnoreIfInferiorTag
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor**                 Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void UGameplayLib::STATIC_AddIgnoreIfInferiorTag(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.GameplayLib.AddIgnoreIfInferiorTag");

	UGameplayLib_AddIgnoreIfInferiorTag_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.GameplayLib.AbbreviateNumber
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float*                         Number                         (Parm, ZeroConstructor, IsPlainOldData)
// int*                           precision                      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          UseGrouping                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UGameplayLib::STATIC_AbbreviateNumber(float* Number, int* precision, bool* UseGrouping)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.GameplayLib.AbbreviateNumber");

	UGameplayLib_AbbreviateNumber_Params params;
	params.Number = Number;
	params.precision = precision;
	params.UseGrouping = UseGrouping;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.HealthComponent.TakeDamage
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// float*                         DamageAmount                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsCritical                    (Parm, ZeroConstructor, IsPlainOldData)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent*           DamageEvent                    (ConstParm, Parm, OutParm, ReferenceParm)
// struct FHitResult*             HitResult                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          DamageAbsorbed                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          DamageOverkill                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           IsDead                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UHealthComponent::TakeDamage(float* DamageAmount, bool* bIsCritical, class AController** EventInstigator, class AActor** DamageCauser, struct FDamageEvent* DamageEvent, struct FHitResult* HitResult, float* DamageAbsorbed, float* DamageOverkill, bool* IsDead)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.HealthComponent.TakeDamage");

	UHealthComponent_TakeDamage_Params params;
	params.DamageAmount = DamageAmount;
	params.bIsCritical = bIsCritical;
	params.EventInstigator = EventInstigator;
	params.DamageCauser = DamageCauser;
	params.DamageEvent = DamageEvent;
	params.HitResult = HitResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DamageAbsorbed != nullptr)
		*DamageAbsorbed = params.DamageAbsorbed;
	if (DamageOverkill != nullptr)
		*DamageOverkill = params.DamageOverkill;
	if (IsDead != nullptr)
		*IsDead = params.IsDead;
}


// Function ES2.HealthComponent.SetEmergencyShieldPresent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bPresent                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         ActivationThresholdIn          (Parm, ZeroConstructor, IsPlainOldData)
// float*                         InvincibilityDurationIn        (Parm, ZeroConstructor, IsPlainOldData)

void UHealthComponent::SetEmergencyShieldPresent(bool* bPresent, float* ActivationThresholdIn, float* InvincibilityDurationIn)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.HealthComponent.SetEmergencyShieldPresent");

	UHealthComponent_SetEmergencyShieldPresent_Params params;
	params.bPresent = bPresent;
	params.ActivationThresholdIn = ActivationThresholdIn;
	params.InvincibilityDurationIn = InvincibilityDurationIn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.HealthComponent.OverheatRandomPart
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// float*                         DurationSeconds                (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UClass*>*         ExcludeDamagePartClasses       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UHealthComponent::OverheatRandomPart(float* DurationSeconds, TArray<class UClass*>* ExcludeDamagePartClasses)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.HealthComponent.OverheatRandomPart");

	UHealthComponent_OverheatRandomPart_Params params;
	params.DurationSeconds = DurationSeconds;
	params.ExcludeDamagePartClasses = ExcludeDamagePartClasses;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.HealthComponent.IsDead
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHealthComponent::IsDead()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.HealthComponent.IsDead");

	UHealthComponent_IsDead_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.HealthComponent.IsAnyComponentDamaged
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHealthComponent::IsAnyComponentDamaged()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.HealthComponent.IsAnyComponentDamaged");

	UHealthComponent_IsAnyComponentDamaged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.HealthComponent.InitDamageParts
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FDamagePartInfo>* DamagePartInfo                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UHealthComponent::InitDamageParts(TArray<struct FDamagePartInfo>* DamagePartInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.HealthComponent.InitDamageParts");

	UHealthComponent_InitDamageParts_Params params;
	params.DamagePartInfo = DamagePartInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.HealthComponent.GetScheduledHullRepairHitpoints
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UHealthComponent::GetScheduledHullRepairHitpoints()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.HealthComponent.GetScheduledHullRepairHitpoints");

	UHealthComponent_GetScheduledHullRepairHitpoints_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.HealthComponent.GetDamage
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool*                          bRegardScheduledRepairs        (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UHealthComponent::GetDamage(bool* bRegardScheduledRepairs)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.HealthComponent.GetDamage");

	UHealthComponent_GetDamage_Params params;
	params.bRegardScheduledRepairs = bRegardScheduledRepairs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.HealthComponent.EnqueueHullRepair
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FHullRepair*            HullRepairEntry                (ConstParm, Parm, OutParm, ReferenceParm)

void UHealthComponent::EnqueueHullRepair(struct FHullRepair* HullRepairEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.HealthComponent.EnqueueHullRepair");

	UHealthComponent_EnqueueHullRepair_Params params;
	params.HullRepairEntry = HullRepairEntry;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.HealthComponent.CreateDamagePartInfo
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FDamagePartInfo> DamagePartInfo                 (Parm, OutParm, ZeroConstructor)

void UHealthComponent::CreateDamagePartInfo(TArray<struct FDamagePartInfo>* DamagePartInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.HealthComponent.CreateDamagePartInfo");

	UHealthComponent_CreateDamagePartInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DamagePartInfo != nullptr)
		*DamagePartInfo = params.DamagePartInfo;
}


// Function ES2.HealthComponent.ChangeAllDamageProbabilites
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         Factor                         (Parm, ZeroConstructor, IsPlainOldData)

void UHealthComponent::ChangeAllDamageProbabilites(float* Factor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.HealthComponent.ChangeAllDamageProbabilites");

	UHealthComponent_ChangeAllDamageProbabilites_Params params;
	params.Factor = Factor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.SelfRegisteringComponent.Unregister
// (Final, Native, Public, BlueprintCallable)

void USelfRegisteringComponent::Unregister()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.SelfRegisteringComponent.Unregister");

	USelfRegisteringComponent_Unregister_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.SelfRegisteringComponent.Register
// (Final, Native, Public, BlueprintCallable)

void USelfRegisteringComponent::Register()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.SelfRegisteringComponent.Register");

	USelfRegisteringComponent_Register_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.SelfRegisteringComponent.IsRegistered
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USelfRegisteringComponent::IsRegistered()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.SelfRegisteringComponent.IsRegistered");

	USelfRegisteringComponent_IsRegistered_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.SelfRegisteringComponent.GetAllActorsOfRegistersInRange
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<TEnumAsByte<ERegisterIds>>* RegIds                         (Parm, ZeroConstructor)
// struct FVector*                Origin                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float*                         Range                          (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 IgnoreActor                    (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bOcclusionCheck                (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AActor*>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class AActor*> USelfRegisteringComponent::STATIC_GetAllActorsOfRegistersInRange(class UObject** WorldContextObject, TArray<TEnumAsByte<ERegisterIds>>* RegIds, struct FVector* Origin, float* Range, class AActor** IgnoreActor, bool* bOcclusionCheck)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.SelfRegisteringComponent.GetAllActorsOfRegistersInRange");

	USelfRegisteringComponent_GetAllActorsOfRegistersInRange_Params params;
	params.WorldContextObject = WorldContextObject;
	params.RegIds = RegIds;
	params.Origin = Origin;
	params.Range = Range;
	params.IgnoreActor = IgnoreActor;
	params.bOcclusionCheck = bOcclusionCheck;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.SelfRegisteringComponent.GetAllActorsOfRegisterInRange
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ERegisterIds>*     RegId                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Origin                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float*                         Range                          (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 IgnoreActor                    (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bOcclusionCheck                (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AActor*>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class AActor*> USelfRegisteringComponent::STATIC_GetAllActorsOfRegisterInRange(class UObject** WorldContextObject, TEnumAsByte<ERegisterIds>* RegId, struct FVector* Origin, float* Range, class AActor** IgnoreActor, bool* bOcclusionCheck)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.SelfRegisteringComponent.GetAllActorsOfRegisterInRange");

	USelfRegisteringComponent_GetAllActorsOfRegisterInRange_Params params;
	params.WorldContextObject = WorldContextObject;
	params.RegId = RegId;
	params.Origin = Origin;
	params.Range = Range;
	params.IgnoreActor = IgnoreActor;
	params.bOcclusionCheck = bOcclusionCheck;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.SelfRegisteringComponent.GetAllActorsOfRegister
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<ERegisterIds>*     RegId                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AActor*>          ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

TArray<class AActor*> USelfRegisteringComponent::STATIC_GetAllActorsOfRegister(TEnumAsByte<ERegisterIds>* RegId)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.SelfRegisteringComponent.GetAllActorsOfRegister");

	USelfRegisteringComponent_GetAllActorsOfRegister_Params params;
	params.RegId = RegId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.HUDMarkerComponent.SetHiddenInHUD
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          NewHiddenInHUD                 (Parm, ZeroConstructor, IsPlainOldData)

void UHUDMarkerComponent::SetHiddenInHUD(bool* NewHiddenInHUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.HUDMarkerComponent.SetHiddenInHUD");

	UHUDMarkerComponent_SetHiddenInHUD_Params params;
	params.NewHiddenInHUD = NewHiddenInHUD;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.HUDMarkerComponent.SetCloaked
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          Cloaked                        (Parm, ZeroConstructor, IsPlainOldData)

void UHUDMarkerComponent::SetCloaked(bool* Cloaked)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.HUDMarkerComponent.SetCloaked");

	UHUDMarkerComponent_SetCloaked_Params params;
	params.Cloaked = Cloaked;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.HUDMarkerComponent.RemoveIndicator
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EIndicator>*       Indicator                      (Parm, ZeroConstructor, IsPlainOldData)

void UHUDMarkerComponent::RemoveIndicator(TEnumAsByte<EIndicator>* Indicator)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.HUDMarkerComponent.RemoveIndicator");

	UHUDMarkerComponent_RemoveIndicator_Params params;
	params.Indicator = Indicator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.HUDMarkerComponent.OwnerHealthDepleted
// (Final, Native, Private)
// Parameters:
// class AActor**                 Owner                          (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// class AController**            DamageInstigator               (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DamageAmount                   (Parm, ZeroConstructor, IsPlainOldData)

void UHUDMarkerComponent::OwnerHealthDepleted(class AActor** Owner, class AActor** DamageCauser, class AController** DamageInstigator, float* DamageAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.HUDMarkerComponent.OwnerHealthDepleted");

	UHUDMarkerComponent_OwnerHealthDepleted_Params params;
	params.Owner = Owner;
	params.DamageCauser = DamageCauser;
	params.DamageInstigator = DamageInstigator;
	params.DamageAmount = DamageAmount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.HUDMarkerComponent.IsLockable
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHUDMarkerComponent::IsLockable()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.HUDMarkerComponent.IsLockable");

	UHUDMarkerComponent_IsLockable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.HUDMarkerComponent.IsHiddenInHUD
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHUDMarkerComponent::IsHiddenInHUD()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.HUDMarkerComponent.IsHiddenInHUD");

	UHUDMarkerComponent_IsHiddenInHUD_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.HUDMarkerComponent.IsCloaked
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHUDMarkerComponent::IsCloaked()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.HUDMarkerComponent.IsCloaked");

	UHUDMarkerComponent_IsCloaked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.HUDMarkerComponent.IsAutoAimable
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHUDMarkerComponent::IsAutoAimable()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.HUDMarkerComponent.IsAutoAimable");

	UHUDMarkerComponent_IsAutoAimable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.HUDMarkerComponent.HasIndicator
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TEnumAsByte<EIndicator>*       Indicator                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHUDMarkerComponent::HasIndicator(TEnumAsByte<EIndicator>* Indicator)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.HUDMarkerComponent.HasIndicator");

	UHUDMarkerComponent_HasIndicator_Params params;
	params.Indicator = Indicator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.HUDMarkerComponent.GetScreenNameFromActor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor**                 Actor                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)

struct FText UHUDMarkerComponent::STATIC_GetScreenNameFromActor(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.HUDMarkerComponent.GetScreenNameFromActor");

	UHUDMarkerComponent_GetScreenNameFromActor_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.HUDMarkerComponent.GetMarkerPivotInWorldFromActor
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor**                 Actor                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UHUDMarkerComponent::STATIC_GetMarkerPivotInWorldFromActor(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.HUDMarkerComponent.GetMarkerPivotInWorldFromActor");

	UHUDMarkerComponent_GetMarkerPivotInWorldFromActor_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.HUDMarkerComponent.GetMarkerPivotInWorld
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UHUDMarkerComponent::GetMarkerPivotInWorld()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.HUDMarkerComponent.GetMarkerPivotInWorld");

	UHUDMarkerComponent_GetMarkerPivotInWorld_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.HUDMarkerComponent.GetLastHUDMarkerData
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FHUDMarkerData          ReturnValue                    (Parm, OutParm, ReturnParm)

struct FHUDMarkerData UHUDMarkerComponent::GetLastHUDMarkerData()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.HUDMarkerComponent.GetLastHUDMarkerData");

	UHUDMarkerComponent_GetLastHUDMarkerData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.HUDMarkerComponent.AttachInteractWidgetToMarker
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UInteractComponent**     InteractComponent              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UHUDMarkerComponent::AttachInteractWidgetToMarker(class UInteractComponent** InteractComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.HUDMarkerComponent.AttachInteractWidgetToMarker");

	UHUDMarkerComponent_AttachInteractWidgetToMarker_Params params;
	params.InteractComponent = InteractComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.HUDMarkerComponent.AddOrRemoveIndicator
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EIndicator>*       Indicator                      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAdd                           (Parm, ZeroConstructor, IsPlainOldData)

void UHUDMarkerComponent::AddOrRemoveIndicator(TEnumAsByte<EIndicator>* Indicator, bool* bAdd)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.HUDMarkerComponent.AddOrRemoveIndicator");

	UHUDMarkerComponent_AddOrRemoveIndicator_Params params;
	params.Indicator = Indicator;
	params.bAdd = bAdd;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.HUDMarkerComponent.AddIndicator
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EIndicator>*       Indicator                      (Parm, ZeroConstructor, IsPlainOldData)

void UHUDMarkerComponent::AddIndicator(TEnumAsByte<EIndicator>* Indicator)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.HUDMarkerComponent.AddIndicator");

	UHUDMarkerComponent_AddIndicator_Params params;
	params.Indicator = Indicator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.HUDMarkerWidget.RefreshIndicators
// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<TEnumAsByte<EIndicator>, bool>* NewIndicators                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UHUDMarkerWidget::RefreshIndicators(TMap<TEnumAsByte<EIndicator>, bool>* NewIndicators)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.HUDMarkerWidget.RefreshIndicators");

	UHUDMarkerWidget_RefreshIndicators_Params params;
	params.NewIndicators = NewIndicators;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.HUDMarkerWidget.OnSpottedPlayer
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UHUDMarkerWidget::OnSpottedPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.HUDMarkerWidget.OnSpottedPlayer");

	UHUDMarkerWidget_OnSpottedPlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.HUDMarkerWidget.OnOwningActorSet
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void UHUDMarkerWidget::OnOwningActorSet(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.HUDMarkerWidget.OnOwningActorSet");

	UHUDMarkerWidget_OnOwningActorSet_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.HUDMarkerWidget.OnLockedByPlayer
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UHUDMarkerWidget::OnLockedByPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.HUDMarkerWidget.OnLockedByPlayer");

	UHUDMarkerWidget_OnLockedByPlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.HUDMarkerWidget.OnFirstShown
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UHUDMarkerWidget::OnFirstShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.HUDMarkerWidget.OnFirstShown");

	UHUDMarkerWidget_OnFirstShown_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.HUDMarkerWidget.OnDetachInteractWidget
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UHUDMarkerWidget::OnDetachInteractWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.HUDMarkerWidget.OnDetachInteractWidget");

	UHUDMarkerWidget_OnDetachInteractWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.HUDMarkerWidget.OnAttachInteractWidget
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget**            InteractWidget                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UHUDMarkerWidget::OnAttachInteractWidget(class UUserWidget** InteractWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.HUDMarkerWidget.OnAttachInteractWidget");

	UHUDMarkerWidget_OnAttachInteractWidget_Params params;
	params.InteractWidget = InteractWidget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.HUDMarkerWidget.Init
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UHUDMarkerWidget::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.HUDMarkerWidget.Init");

	UHUDMarkerWidget_Init_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.InputLib.UnbindActionButtonEvent
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FInputActionButtonInfo  ActionButtonInfo               (Parm, OutParm)

void UInputLib::STATIC_UnbindActionButtonEvent(struct FInputActionButtonInfo* ActionButtonInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.InputLib.UnbindActionButtonEvent");

	UInputLib_UnbindActionButtonEvent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ActionButtonInfo != nullptr)
		*ActionButtonInfo = params.ActionButtonInfo;
}


// Function ES2.InputLib.ShouldHandleAction
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EInputActionName>* Action                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UInputLib::STATIC_ShouldHandleAction(class UObject** WorldContextObject, TEnumAsByte<EInputActionName>* Action, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.InputLib.ShouldHandleAction");

	UInputLib_ShouldHandleAction_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Action = Action;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.InputLib.SetInputEnabled
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool*                          bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void UInputLib::STATIC_SetInputEnabled(bool* bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.InputLib.SetInputEnabled");

	UInputLib_SetInputEnabled_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.InputLib.IsPositiveKey
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EInputActionName>* Action                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FKey*                   InKey                          (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UInputLib::STATIC_IsPositiveKey(class UObject** WorldContextObject, TEnumAsByte<EInputActionName>* Action, struct FKey* InKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.InputLib.IsPositiveKey");

	UInputLib_IsPositiveKey_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Action = Action;
	params.InKey = InKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.InputLib.IsModifierPressed
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class APlayerController**      PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EInputActionName>* Action                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FKey*                   Key                            (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UInputLib::STATIC_IsModifierPressed(class APlayerController** PlayerController, TEnumAsByte<EInputActionName>* Action, struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.InputLib.IsModifierPressed");

	UInputLib_IsModifierPressed_Params params;
	params.PlayerController = PlayerController;
	params.Action = Action;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.InputLib.IsKeyForAction
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class APlayerController**      PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (ConstParm, Parm, OutParm, ReferenceParm)
// TEnumAsByte<EInputActionName>* Action                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UInputLib::STATIC_IsKeyForAction(class APlayerController** PlayerController, struct FKeyEvent* InKeyEvent, TEnumAsByte<EInputActionName>* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.InputLib.IsKeyForAction");

	UInputLib_IsKeyForAction_Params params;
	params.PlayerController = PlayerController;
	params.InKeyEvent = InKeyEvent;
	params.Action = Action;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.InputLib.IsKeyAndModifierPressed
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class APlayerController**      PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EInputActionName>* Action                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UInputLib::STATIC_IsKeyAndModifierPressed(class APlayerController** PlayerController, TEnumAsByte<EInputActionName>* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.InputLib.IsKeyAndModifierPressed");

	UInputLib_IsKeyAndModifierPressed_Params params;
	params.PlayerController = PlayerController;
	params.Action = Action;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.InputLib.IsJoystickConnected
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class APlayerController**      PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UInputLib::STATIC_IsJoystickConnected(class APlayerController** PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.InputLib.IsJoystickConnected");

	UInputLib_IsJoystickConnected_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.InputLib.IsAxisAction
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TEnumAsByte<EInputActionName>* Action                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UInputLib::STATIC_IsAxisAction(TEnumAsByte<EInputActionName>* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.InputLib.IsAxisAction");

	UInputLib_IsAxisAction_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.InputLib.IsAnalogInputEventForAction
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class APlayerController**      PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// struct FAnalogInputEvent*      InAnalogInputEvent             (ConstParm, Parm, OutParm, ReferenceParm)
// TEnumAsByte<EInputActionName>* Action                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UInputLib::STATIC_IsAnalogInputEventForAction(class APlayerController** PlayerController, struct FAnalogInputEvent* InAnalogInputEvent, TEnumAsByte<EInputActionName>* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.InputLib.IsAnalogInputEventForAction");

	UInputLib_IsAnalogInputEventForAction_Params params;
	params.PlayerController = PlayerController;
	params.InAnalogInputEvent = InAnalogInputEvent;
	params.Action = Action;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.InputLib.GetModifierFromCell
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// int*                           ModIndex                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FKeybindingCell*        KeybindingCell                 (ConstParm, Parm, OutParm, ReferenceParm)
// struct FKey                    ReturnValue                    (Parm, OutParm, ReturnParm)

struct FKey UInputLib::STATIC_GetModifierFromCell(int* ModIndex, struct FKeybindingCell* KeybindingCell)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.InputLib.GetModifierFromCell");

	UInputLib_GetModifierFromCell_Params params;
	params.ModIndex = ModIndex;
	params.KeybindingCell = KeybindingCell;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.InputLib.GetKeysForAxis
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class APlayerController**      PlayerController               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EInputActionName>* Action                         (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsGamePadMode                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FKey                    KeyCombined                    (Parm, OutParm)
// struct FKey                    KeyPositiveScale               (Parm, OutParm)
// struct FKey                    KeyNegativeScale               (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UInputLib::STATIC_GetKeysForAxis(class APlayerController** PlayerController, TEnumAsByte<EInputActionName>* Action, bool* bIsGamePadMode, struct FKey* KeyCombined, struct FKey* KeyPositiveScale, struct FKey* KeyNegativeScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.InputLib.GetKeysForAxis");

	UInputLib_GetKeysForAxis_Params params;
	params.PlayerController = PlayerController;
	params.Action = Action;
	params.bIsGamePadMode = bIsGamePadMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (KeyCombined != nullptr)
		*KeyCombined = params.KeyCombined;
	if (KeyPositiveScale != nullptr)
		*KeyPositiveScale = params.KeyPositiveScale;
	if (KeyNegativeScale != nullptr)
		*KeyNegativeScale = params.KeyNegativeScale;

	return params.ReturnValue;
}


// Function ES2.InputLib.GetKeysForAction
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class APlayerController**      PlayerController               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EInputActionName>* Action                         (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FKey>            OUT_Modifiers                  (Parm, OutParm, ZeroConstructor)
// bool*                          bIsGamePadMode                 (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIgnoreAxisScale               (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIgnoreGamePadMode             (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FKey>            ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FKey> UInputLib::STATIC_GetKeysForAction(class APlayerController** PlayerController, TEnumAsByte<EInputActionName>* Action, bool* bIsGamePadMode, bool* bIgnoreAxisScale, bool* bIgnoreGamePadMode, TArray<struct FKey>* OUT_Modifiers)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.InputLib.GetKeysForAction");

	UInputLib_GetKeysForAction_Params params;
	params.PlayerController = PlayerController;
	params.Action = Action;
	params.bIsGamePadMode = bIsGamePadMode;
	params.bIgnoreAxisScale = bIgnoreAxisScale;
	params.bIgnoreGamePadMode = bIgnoreGamePadMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OUT_Modifiers != nullptr)
		*OUT_Modifiers = params.OUT_Modifiers;

	return params.ReturnValue;
}


// Function ES2.InputLib.GetKeyFromCell
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// int*                           KeyIndex                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FKeybindingCell*        KeybindingCell                 (ConstParm, Parm, OutParm, ReferenceParm)
// struct FKey                    ReturnValue                    (Parm, OutParm, ReturnParm)

struct FKey UInputLib::STATIC_GetKeyFromCell(int* KeyIndex, struct FKeybindingCell* KeybindingCell)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.InputLib.GetKeyFromCell");

	UInputLib_GetKeyFromCell_Params params;
	params.KeyIndex = KeyIndex;
	params.KeybindingCell = KeybindingCell;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.InputLib.GetKeyForAction
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class APlayerController**      PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EInputActionName>* Action                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FKey                    OUT_Modifier                   (Parm, OutParm)
// bool*                          bIsGamePadMode                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FKey                    ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FKey UInputLib::STATIC_GetKeyForAction(class APlayerController** PlayerController, TEnumAsByte<EInputActionName>* Action, bool* bIsGamePadMode, struct FKey* OUT_Modifier)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.InputLib.GetKeyForAction");

	UInputLib_GetKeyForAction_Params params;
	params.PlayerController = PlayerController;
	params.Action = Action;
	params.bIsGamePadMode = bIsGamePadMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OUT_Modifier != nullptr)
		*OUT_Modifier = params.OUT_Modifier;

	return params.ReturnValue;
}


// Function ES2.InputLib.GetInputPresetNames
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<class FString>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class FString> UInputLib::STATIC_GetInputPresetNames()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.InputLib.GetInputPresetNames");

	UInputLib_GetInputPresetNames_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.InputLib.GetInputPresetBindings
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// EInputPreset*                  Preset                         (Parm, ZeroConstructor, IsPlainOldData)
// int*                           DeviceID                       (Parm, ZeroConstructor, IsPlainOldData)
// class FString*                 DeviceName                     (Parm, ZeroConstructor)
// struct FInputPresetContainer   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FInputPresetContainer UInputLib::STATIC_GetInputPresetBindings(EInputPreset* Preset, int* DeviceID, class FString* DeviceName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.InputLib.GetInputPresetBindings");

	UInputLib_GetInputPresetBindings_Params params;
	params.Preset = Preset;
	params.DeviceID = DeviceID;
	params.DeviceName = DeviceName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.InputLib.GetInputActionName
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TEnumAsByte<EInputActionName>* Action                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UInputLib::STATIC_GetInputActionName(TEnumAsByte<EInputActionName>* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.InputLib.GetInputActionName");

	UInputLib_GetInputActionName_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.InputLib.GetDefaultInputBindings
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FKeybindingConfig> Out_Keybindings                (Parm, OutParm, ZeroConstructor)

void UInputLib::STATIC_GetDefaultInputBindings(TArray<struct FKeybindingConfig>* Out_Keybindings)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.InputLib.GetDefaultInputBindings");

	UInputLib_GetDefaultInputBindings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out_Keybindings != nullptr)
		*Out_Keybindings = params.Out_Keybindings;
}


// Function ES2.InputLib.GetAdjustedCursorDelta
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FPointerEvent*          Input                          (ConstParm, Parm, OutParm, ReferenceParm)
// class AESPlayerController**    PC                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector2D UInputLib::STATIC_GetAdjustedCursorDelta(struct FPointerEvent* Input, class AESPlayerController** PC)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.InputLib.GetAdjustedCursorDelta");

	UInputLib_GetAdjustedCursorDelta_Params params;
	params.Input = Input;
	params.PC = PC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.InputLib.CompareContexts
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TEnumAsByte<EInputActionName>* Action1                        (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EInputActionName>* Action2                        (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bGamepadMode                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UInputLib::STATIC_CompareContexts(TEnumAsByte<EInputActionName>* Action1, TEnumAsByte<EInputActionName>* Action2, bool* bGamepadMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.InputLib.CompareContexts");

	UInputLib_CompareContexts_Params params;
	params.Action1 = Action1;
	params.Action2 = Action2;
	params.bGamepadMode = bGamepadMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.InputLib.CallActionButtonEventIfBound
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FInputActionButtonInfo* ActionButtonInfo               (ConstParm, Parm, OutParm, ReferenceParm)

void UInputLib::STATIC_CallActionButtonEventIfBound(struct FInputActionButtonInfo* ActionButtonInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.InputLib.CallActionButtonEventIfBound");

	UInputLib_CallActionButtonEventIfBound_Params params;
	params.ActionButtonInfo = ActionButtonInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.InteractComponent.SetInteractRadius
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         NewRadius                      (Parm, ZeroConstructor, IsPlainOldData)

void UInteractComponent::SetInteractRadius(float* NewRadius)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.InteractComponent.SetInteractRadius");

	UInteractComponent_SetInteractRadius_Params params;
	params.NewRadius = NewRadius;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.InteractComponent.Reset
// (Final, Native, Public, BlueprintCallable)

void UInteractComponent::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.InteractComponent.Reset");

	UInteractComponent_Reset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.InteractComponent.OnEndOverlapTrigger
// (Final, Native, Protected)
// Parameters:
// class UPrimitiveComponent**    OverlappedComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int*                           OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void UInteractComponent::OnEndOverlapTrigger(class UPrimitiveComponent** OverlappedComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.InteractComponent.OnEndOverlapTrigger");

	UInteractComponent_OnEndOverlapTrigger_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.InteractComponent.OnBeginOverlapTrigger
// (Final, Native, Protected, HasOutParms)
// Parameters:
// class UPrimitiveComponent**    OverlappedComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int*                           OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UInteractComponent::OnBeginOverlapTrigger(class UPrimitiveComponent** OverlappedComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex, bool* bFromSweep, struct FHitResult* SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.InteractComponent.OnBeginOverlapTrigger");

	UInteractComponent_OnBeginOverlapTrigger_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.InteractComponent.IsEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UInteractComponent::IsEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.InteractComponent.IsEnabled");

	UInteractComponent_IsEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.InteractComponent.GetHoldProgress
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UInteractComponent::GetHoldProgress()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.InteractComponent.GetHoldProgress");

	UInteractComponent_GetHoldProgress_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.InteractComponent.GetChargeRatio
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UInteractComponent::GetChargeRatio()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.InteractComponent.GetChargeRatio");

	UInteractComponent_GetChargeRatio_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.InteractComponent.ConfirmInteract
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bIgnoreStateAndForce           (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIgnoreHold                    (Parm, ZeroConstructor, IsPlainOldData)

void UInteractComponent::ConfirmInteract(bool* bIgnoreStateAndForce, bool* bIgnoreHold)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.InteractComponent.ConfirmInteract");

	UInteractComponent_ConfirmInteract_Params params;
	params.bIgnoreStateAndForce = bIgnoreStateAndForce;
	params.bIgnoreHold = bIgnoreHold;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.InteractComponentWidget.TickInteractionWidget
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UInteractComponentWidget::TickInteractionWidget(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.InteractComponentWidget.TickInteractionWidget");

	UInteractComponentWidget_TickInteractionWidget_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.InteractComponentWidget.SetInteractComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UInteractComponent**     InteractComponentIn            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UInteractComponentWidget::SetInteractComponent(class UInteractComponent** InteractComponentIn)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.InteractComponentWidget.SetInteractComponent");

	UInteractComponentWidget_SetInteractComponent_Params params;
	params.InteractComponentIn = InteractComponentIn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.InteractComponentWidget.OnInitWithInteractComponent
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInteractComponent**     NewInteractComponent           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 NewActor                       (Parm, ZeroConstructor, IsPlainOldData)

void UInteractComponentWidget::OnInitWithInteractComponent(class UInteractComponent** NewInteractComponent, class AActor** NewActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.InteractComponentWidget.OnInitWithInteractComponent");

	UInteractComponentWidget_OnInitWithInteractComponent_Params params;
	params.NewInteractComponent = NewInteractComponent;
	params.NewActor = NewActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.InteractComponentWidget.OnDetachedFromMarkerWidget
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UInteractComponentWidget::OnDetachedFromMarkerWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.InteractComponentWidget.OnDetachedFromMarkerWidget");

	UInteractComponentWidget_OnDetachedFromMarkerWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.InteractComponentWidget.OnAttachedToMarkerWidget
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UInteractComponentWidget::OnAttachedToMarkerWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.InteractComponentWidget.OnAttachedToMarkerWidget");

	UInteractComponentWidget_OnAttachedToMarkerWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.Inventory.ToString
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UInventory::ToString()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.Inventory.ToString");

	UInventory_ToString_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.Inventory.SwapItems
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UItem**                  Item1                          (Parm, ZeroConstructor, IsPlainOldData)
// class UItem**                  Item2                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UInventory::SwapItems(class UItem** Item1, class UItem** Item2)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.Inventory.SwapItems");

	UInventory_SwapItems_Params params;
	params.Item1 = Item1;
	params.Item2 = Item2;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.Inventory.Sort
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EInventoryCategory>* Category                       (Parm, ZeroConstructor, IsPlainOldData)

void UInventory::Sort(TEnumAsByte<EInventoryCategory>* Category)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.Inventory.Sort");

	UInventory_Sort_Params params;
	params.Category = Category;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.Inventory.SetFirstCargoItem
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UItem**                  Item                           (Parm, ZeroConstructor, IsPlainOldData)

void UInventory::SetFirstCargoItem(class UItem** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.Inventory.SetFirstCargoItem");

	UInventory_SetFirstCargoItem_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.Inventory.ResizeInventory
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EInventoryCategory>* Category                       (Parm, ZeroConstructor, IsPlainOldData)
// int*                           NewSize                        (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          AllowShrinking                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UInventory::ResizeInventory(TEnumAsByte<EInventoryCategory>* Category, int* NewSize, bool* AllowShrinking)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.Inventory.ResizeInventory");

	UInventory_ResizeInventory_Params params;
	params.Category = Category;
	params.NewSize = NewSize;
	params.AllowShrinking = AllowShrinking;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.Inventory.ReplaceItemAtIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EInventoryCategory>* Category                       (Parm, ZeroConstructor, IsPlainOldData)
// int*                           Index                          (Parm, ZeroConstructor, IsPlainOldData)
// class UItem**                  NewItem                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UInventory::ReplaceItemAtIndex(TEnumAsByte<EInventoryCategory>* Category, int* Index, class UItem** NewItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.Inventory.ReplaceItemAtIndex");

	UInventory_ReplaceItemAtIndex_Params params;
	params.Category = Category;
	params.Index = Index;
	params.NewItem = NewItem;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.Inventory.ReplaceItem
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UItem**                  ItemToReplace                  (Parm, ZeroConstructor, IsPlainOldData)
// class UItem**                  NewItem                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UInventory::ReplaceItem(class UItem** ItemToReplace, class UItem** NewItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.Inventory.ReplaceItem");

	UInventory_ReplaceItem_Params params;
	params.ItemToReplace = ItemToReplace;
	params.NewItem = NewItem;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.Inventory.RemoveItemTypeWithAmount
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  TypeID                         (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EInventoryCategory>* Category                       (Parm, ZeroConstructor, IsPlainOldData)
// int*                           Amount                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UInventory::RemoveItemTypeWithAmount(struct FName* TypeID, TEnumAsByte<EInventoryCategory>* Category, int* Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.Inventory.RemoveItemTypeWithAmount");

	UInventory_RemoveItemTypeWithAmount_Params params;
	params.TypeID = TypeID;
	params.Category = Category;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.Inventory.RemoveItem
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UItem**                  Item                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UInventory::RemoveItem(class UItem** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.Inventory.RemoveItem");

	UInventory_RemoveItem_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.Inventory.IsCargoEmpty
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UInventory::IsCargoEmpty()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.Inventory.IsCargoEmpty");

	UInventory_IsCargoEmpty_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.Inventory.HasSlotsOfCategory
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TEnumAsByte<EInventoryCategory>* Category                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UInventory::HasSlotsOfCategory(TEnumAsByte<EInventoryCategory>* Category)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.Inventory.HasSlotsOfCategory");

	UInventory_HasSlotsOfCategory_Params params;
	params.Category = Category;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.Inventory.HasItemOfType
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName*                  ItemID                         (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EInventoryCategory>* Category                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UInventory::HasItemOfType(struct FName* ItemID, TEnumAsByte<EInventoryCategory>* Category)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.Inventory.HasItemOfType");

	UInventory_HasItemOfType_Params params;
	params.ItemID = ItemID;
	params.Category = Category;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.Inventory.HasItem
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UItem**                  Item                           (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EInventoryCategory>* Category                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UInventory::HasItem(class UItem** Item, TEnumAsByte<EInventoryCategory>* Category)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.Inventory.HasItem");

	UInventory_HasItem_Params params;
	params.Item = Item;
	params.Category = Category;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.Inventory.GetTotalStackSpaceForItem
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UItem**                  Item                           (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EInventoryCategory>* Category                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UInventory::GetTotalStackSpaceForItem(class UItem** Item, TEnumAsByte<EInventoryCategory>* Category)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.Inventory.GetTotalStackSpaceForItem");

	UInventory_GetTotalStackSpaceForItem_Params params;
	params.Item = Item;
	params.Category = Category;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.Inventory.GetTotalCargoSpaceIncreasingAmount
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TEnumAsByte<EInventoryCategory>* Category                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UInventory::GetTotalCargoSpaceIncreasingAmount(TEnumAsByte<EInventoryCategory>* Category)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.Inventory.GetTotalCargoSpaceIncreasingAmount");

	UInventory_GetTotalCargoSpaceIncreasingAmount_Params params;
	params.Category = Category;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.Inventory.GetSlotIndexWithLowestAmountForItemType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  ItemTemplateID                 (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UInventory::GetSlotIndexWithLowestAmountForItemType(struct FName* ItemTemplateID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.Inventory.GetSlotIndexWithLowestAmountForItemType");

	UInventory_GetSlotIndexWithLowestAmountForItemType_Params params;
	params.ItemTemplateID = ItemTemplateID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.Inventory.GetSize
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TEnumAsByte<EInventoryCategory>* Category                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UInventory::GetSize(TEnumAsByte<EInventoryCategory>* Category)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.Inventory.GetSize");

	UInventory_GetSize_Params params;
	params.Category = Category;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.Inventory.GetNumItemsOfCategory
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TEnumAsByte<EInventoryCategory>* Category                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UInventory::GetNumItemsOfCategory(TEnumAsByte<EInventoryCategory>* Category)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.Inventory.GetNumItemsOfCategory");

	UInventory_GetNumItemsOfCategory_Params params;
	params.Category = Category;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.Inventory.GetNumberOfEmptySlots
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TEnumAsByte<EInventoryCategory>* Category                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UInventory::GetNumberOfEmptySlots(TEnumAsByte<EInventoryCategory>* Category)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.Inventory.GetNumberOfEmptySlots");

	UInventory_GetNumberOfEmptySlots_Params params;
	params.Category = Category;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.Inventory.GetItemsOfCategoryAndType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EInventoryCategory>* Category                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  TypeID                         (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UItem*>           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UItem*> UInventory::GetItemsOfCategoryAndType(TEnumAsByte<EInventoryCategory>* Category, struct FName* TypeID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.Inventory.GetItemsOfCategoryAndType");

	UInventory_GetItemsOfCategoryAndType_Params params;
	params.Category = Category;
	params.TypeID = TypeID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.Inventory.GetItemsOfCategory
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EInventoryCategory>* Category                       (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          CullEmpty                      (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UItem*>           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UItem*> UInventory::GetItemsOfCategory(TEnumAsByte<EInventoryCategory>* Category, bool* CullEmpty)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.Inventory.GetItemsOfCategory");

	UInventory_GetItemsOfCategory_Params params;
	params.Category = Category;
	params.CullEmpty = CullEmpty;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.Inventory.GetFreeStackSpaceForItemType
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName*                  ItemTemplateID                 (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EInventoryCategory>* Category                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UInventory::GetFreeStackSpaceForItemType(struct FName* ItemTemplateID, TEnumAsByte<EInventoryCategory>* Category)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.Inventory.GetFreeStackSpaceForItemType");

	UInventory_GetFreeStackSpaceForItemType_Params params;
	params.ItemTemplateID = ItemTemplateID;
	params.Category = Category;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.Inventory.GetFirstValidItemOfCategory
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TEnumAsByte<EInventoryCategory>* Category                       (Parm, ZeroConstructor, IsPlainOldData)
// class UItem*                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UItem* UInventory::GetFirstValidItemOfCategory(TEnumAsByte<EInventoryCategory>* Category)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.Inventory.GetFirstValidItemOfCategory");

	UInventory_GetFirstValidItemOfCategory_Params params;
	params.Category = Category;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.Inventory.GetFirstSlotIndexForStacking
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName*                  ItemTemplateID                 (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EInventoryCategory>* Category                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UInventory::GetFirstSlotIndexForStacking(struct FName* ItemTemplateID, TEnumAsByte<EInventoryCategory>* Category)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.Inventory.GetFirstSlotIndexForStacking");

	UInventory_GetFirstSlotIndexForStacking_Params params;
	params.ItemTemplateID = ItemTemplateID;
	params.Category = Category;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.Inventory.GetFirstEmptySlotIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TEnumAsByte<EInventoryCategory>* Category                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UInventory::GetFirstEmptySlotIndex(TEnumAsByte<EInventoryCategory>* Category)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.Inventory.GetFirstEmptySlotIndex");

	UInventory_GetFirstEmptySlotIndex_Params params;
	params.Category = Category;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.Inventory.GetFirstCargoItem
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UItem*                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UItem* UInventory::GetFirstCargoItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.Inventory.GetFirstCargoItem");

	UInventory_GetFirstCargoItem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.Inventory.GetEquippedItems
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          OnlyModules                    (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UItem*>           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UItem*> UInventory::GetEquippedItems(bool* OnlyModules)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.Inventory.GetEquippedItems");

	UInventory_GetEquippedItems_Params params;
	params.OnlyModules = OnlyModules;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.Inventory.GetCargoItemsOfCategory
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  ItemCategoryID                 (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UItem*>           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UItem*> UInventory::GetCargoItemsOfCategory(struct FName* ItemCategoryID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.Inventory.GetCargoItemsOfCategory");

	UInventory_GetCargoItemsOfCategory_Params params;
	params.ItemCategoryID = ItemCategoryID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.Inventory.GetCargoItemOfCategoryWithHighestAmount
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  ItemTemplateID                 (Parm, ZeroConstructor, IsPlainOldData)
// class UItem*                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UItem* UInventory::GetCargoItemOfCategoryWithHighestAmount(struct FName* ItemTemplateID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.Inventory.GetCargoItemOfCategoryWithHighestAmount");

	UInventory_GetCargoItemOfCategoryWithHighestAmount_Params params;
	params.ItemTemplateID = ItemTemplateID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.Inventory.GetAmountOfItems
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName*                  ItemID                         (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EInventoryCategory>* Category                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UInventory::GetAmountOfItems(struct FName* ItemID, TEnumAsByte<EInventoryCategory>* Category)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.Inventory.GetAmountOfItems");

	UInventory_GetAmountOfItems_Params params;
	params.ItemID = ItemID;
	params.Category = Category;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.Inventory.Consolidate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EInventoryCategory>* Category                       (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          ShrinkToFit                    (Parm, ZeroConstructor, IsPlainOldData)

void UInventory::Consolidate(TEnumAsByte<EInventoryCategory>* Category, bool* ShrinkToFit)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.Inventory.Consolidate");

	UInventory_Consolidate_Params params;
	params.Category = Category;
	params.ShrinkToFit = ShrinkToFit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.Inventory.ChangeItemAmountOfType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UItem**                  ItemAsTemplate                 (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EInventoryCategory>* Category                       (Parm, ZeroConstructor, IsPlainOldData)
// int*                           Change                         (Parm, ZeroConstructor, IsPlainOldData)
// int*                           Index                          (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Consolidate                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UInventory::ChangeItemAmountOfType(class UItem** ItemAsTemplate, TEnumAsByte<EInventoryCategory>* Category, int* Change, int* Index, bool* Consolidate)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.Inventory.ChangeItemAmountOfType");

	UInventory_ChangeItemAmountOfType_Params params;
	params.ItemAsTemplate = ItemAsTemplate;
	params.Category = Category;
	params.Change = Change;
	params.Index = Index;
	params.Consolidate = Consolidate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.Inventory.ChangeAbsoluteItemAmountOfType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UItem**                  ItemAsTemplate                 (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EInventoryCategory>* Category                       (Parm, ZeroConstructor, IsPlainOldData)
// int*                           Amount                         (Parm, ZeroConstructor, IsPlainOldData)
// int*                           Index                          (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Consolidate                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UInventory::ChangeAbsoluteItemAmountOfType(class UItem** ItemAsTemplate, TEnumAsByte<EInventoryCategory>* Category, int* Amount, int* Index, bool* Consolidate)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.Inventory.ChangeAbsoluteItemAmountOfType");

	UInventory_ChangeAbsoluteItemAmountOfType_Params params;
	params.ItemAsTemplate = ItemAsTemplate;
	params.Category = Category;
	params.Amount = Amount;
	params.Index = Index;
	params.Consolidate = Consolidate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.Inventory.AddItemsOfType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UItem**                  ItemAsTemplate                 (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EInventoryCategory>* Category                       (Parm, ZeroConstructor, IsPlainOldData)
// int*                           Amount                         (Parm, ZeroConstructor, IsPlainOldData)
// int*                           Index                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UInventory::AddItemsOfType(class UItem** ItemAsTemplate, TEnumAsByte<EInventoryCategory>* Category, int* Amount, int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.Inventory.AddItemsOfType");

	UInventory_AddItemsOfType_Params params;
	params.ItemAsTemplate = ItemAsTemplate;
	params.Category = Category;
	params.Amount = Amount;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.Inventory.AddItem
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UItem**                  Item                           (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EInventoryCategory>* Category                       (Parm, ZeroConstructor, IsPlainOldData)
// int*                           Index                          (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          EnlargeIfNeeded                (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UInventory::AddItem(class UItem** Item, TEnumAsByte<EInventoryCategory>* Category, int* Index, bool* EnlargeIfNeeded)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.Inventory.AddItem");

	UInventory_AddItem_Params params;
	params.Item = Item;
	params.Category = Category;
	params.Index = Index;
	params.EnlargeIfNeeded = EnlargeIfNeeded;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.InventoryLib.SetShipModulesForShip
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int*                           ShipIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FShipModuleState>* NewShipModules                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UInventoryLib::STATIC_SetShipModulesForShip(int* ShipIndex, TArray<struct FShipModuleState>* NewShipModules)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.InventoryLib.SetShipModulesForShip");

	UInventoryLib_SetShipModulesForShip_Params params;
	params.ShipIndex = ShipIndex;
	params.NewShipModules = NewShipModules;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.InventoryLib.SetShipDecalsForShip
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int*                           ShipIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  NewDecalsID                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UInventoryLib::STATIC_SetShipDecalsForShip(int* ShipIndex, struct FName* NewDecalsID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.InventoryLib.SetShipDecalsForShip");

	UInventoryLib_SetShipDecalsForShip_Params params;
	params.ShipIndex = ShipIndex;
	params.NewDecalsID = NewDecalsID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.InventoryLib.SetShipColorsForShip
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int*                           ShipIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FShipColors*            NewShipColors                  (ConstParm, Parm, OutParm, ReferenceParm)

void UInventoryLib::STATIC_SetShipColorsForShip(int* ShipIndex, struct FShipColors* NewShipColors)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.InventoryLib.SetShipColorsForShip");

	UInventoryLib_SetShipColorsForShip_Params params;
	params.ShipIndex = ShipIndex;
	params.NewShipColors = NewShipColors;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.InventoryLib.SetCurrentShip
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int*                           PlayerShipIndex                (Parm, ZeroConstructor, IsPlainOldData)

void UInventoryLib::STATIC_SetCurrentShip(int* PlayerShipIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.InventoryLib.SetCurrentShip");

	UInventoryLib_SetCurrentShip_Params params;
	params.PlayerShipIndex = PlayerShipIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.InventoryLib.ReplaceShipData
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FShipData*              NewShipData                    (ConstParm, Parm, OutParm, ReferenceParm)
// int*                           ShipIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void UInventoryLib::STATIC_ReplaceShipData(struct FShipData* NewShipData, int* ShipIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.InventoryLib.ReplaceShipData");

	UInventoryLib_ReplaceShipData_Params params;
	params.NewShipData = NewShipData;
	params.ShipIndex = ShipIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.InventoryLib.ReinitShipAfterPotentialChanges
// (Final, Native, Static, Public, BlueprintCallable)

void UInventoryLib::STATIC_ReinitShipAfterPotentialChanges()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.InventoryLib.ReinitShipAfterPotentialChanges");

	UInventoryLib_ReinitShipAfterPotentialChanges_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.InventoryLib.MakeCargoInventoryFromItems
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<class UItem*>*          Items                          (Parm, ZeroConstructor)
// int*                           InventorySize                  (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          CullEmpty                      (Parm, ZeroConstructor, IsPlainOldData)
// class UInventory*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UInventory* UInventoryLib::STATIC_MakeCargoInventoryFromItems(TArray<class UItem*>* Items, int* InventorySize, bool* CullEmpty)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.InventoryLib.MakeCargoInventoryFromItems");

	UInventoryLib_MakeCargoInventoryFromItems_Params params;
	params.Items = Items;
	params.InventorySize = InventorySize;
	params.CullEmpty = CullEmpty;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.InventoryLib.MakeAndInitAttributeAccessFromItem
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FAttributeAccess        InOut_AttributeAccess          (Parm, OutParm, ReferenceParm)
// struct FName*                  AttributeID                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DefaultValue                   (Parm, ZeroConstructor, IsPlainOldData)
// class UItem**                  Item                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UInventoryLib::STATIC_MakeAndInitAttributeAccessFromItem(struct FName* AttributeID, float* DefaultValue, class UItem** Item, struct FAttributeAccess* InOut_AttributeAccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.InventoryLib.MakeAndInitAttributeAccessFromItem");

	UInventoryLib_MakeAndInitAttributeAccessFromItem_Params params;
	params.AttributeID = AttributeID;
	params.DefaultValue = DefaultValue;
	params.Item = Item;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InOut_AttributeAccess != nullptr)
		*InOut_AttributeAccess = params.InOut_AttributeAccess;

	return params.ReturnValue;
}


// Function ES2.InventoryLib.IsItemValidForInventoryCategory
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UItem**                  Item                           (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EInventoryCategory>* InventoryCategory              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UInventoryLib::STATIC_IsItemValidForInventoryCategory(class UItem** Item, TEnumAsByte<EInventoryCategory>* InventoryCategory)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.InventoryLib.IsItemValidForInventoryCategory");

	UInventoryLib_IsItemValidForInventoryCategory_Params params;
	params.Item = Item;
	params.InventoryCategory = InventoryCategory;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.InventoryLib.InitAttributeAccessFromWeaponGlobals
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FAttributeAccess        AttributeAccess                (Parm, OutParm, ReferenceParm)
// bool*                          PrimaryWeapon                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UInventoryLib::STATIC_InitAttributeAccessFromWeaponGlobals(bool* PrimaryWeapon, struct FAttributeAccess* AttributeAccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.InventoryLib.InitAttributeAccessFromWeaponGlobals");

	UInventoryLib_InitAttributeAccessFromWeaponGlobals_Params params;
	params.PrimaryWeapon = PrimaryWeapon;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AttributeAccess != nullptr)
		*AttributeAccess = params.AttributeAccess;

	return params.ReturnValue;
}


// Function ES2.InventoryLib.InitAttributeAccessFromShip
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FAttributeAccess        AttributeAccess                (Parm, OutParm, ReferenceParm)
// struct FShipData*              ShipData                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UInventoryLib::STATIC_InitAttributeAccessFromShip(struct FShipData* ShipData, struct FAttributeAccess* AttributeAccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.InventoryLib.InitAttributeAccessFromShip");

	UInventoryLib_InitAttributeAccessFromShip_Params params;
	params.ShipData = ShipData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AttributeAccess != nullptr)
		*AttributeAccess = params.AttributeAccess;

	return params.ReturnValue;
}


// Function ES2.InventoryLib.InitAttributeAccessFromPlayerGlobals
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FAttributeAccess        AttributeAccess                (Parm, OutParm, ReferenceParm)
// struct FName*                  AttributeID                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UInventoryLib::STATIC_InitAttributeAccessFromPlayerGlobals(struct FName* AttributeID, struct FAttributeAccess* AttributeAccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.InventoryLib.InitAttributeAccessFromPlayerGlobals");

	UInventoryLib_InitAttributeAccessFromPlayerGlobals_Params params;
	params.AttributeID = AttributeID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AttributeAccess != nullptr)
		*AttributeAccess = params.AttributeAccess;

	return params.ReturnValue;
}


// Function ES2.InventoryLib.InitAttributeAccessFromOwner
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FAttributeAccess        AttributeAccess                (Parm, OutParm, ReferenceParm)
// class AActor**                 Owner                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UInventoryLib::STATIC_InitAttributeAccessFromOwner(class AActor** Owner, struct FAttributeAccess* AttributeAccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.InventoryLib.InitAttributeAccessFromOwner");

	UInventoryLib_InitAttributeAccessFromOwner_Params params;
	params.Owner = Owner;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AttributeAccess != nullptr)
		*AttributeAccess = params.AttributeAccess;

	return params.ReturnValue;
}


// Function ES2.InventoryLib.InitAttributeAccessFromItem
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FAttributeAccess        AttributeAccess                (Parm, OutParm, ReferenceParm)
// class UItem**                  Item                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UInventoryLib::STATIC_InitAttributeAccessFromItem(class UItem** Item, struct FAttributeAccess* AttributeAccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.InventoryLib.InitAttributeAccessFromItem");

	UInventoryLib_InitAttributeAccessFromItem_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AttributeAccess != nullptr)
		*AttributeAccess = params.AttributeAccess;

	return params.ReturnValue;
}


// Function ES2.InventoryLib.HasItemOfTypeInCargo
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName*                  ItemID                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UInventoryLib::STATIC_HasItemOfTypeInCargo(struct FName* ItemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.InventoryLib.HasItemOfTypeInCargo");

	UInventoryLib_HasItemOfTypeInCargo_Params params;
	params.ItemID = ItemID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.InventoryLib.GetWeaponAttributes
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// TMap<struct FName, class UItemAttribute*> GlobalAttributes               (Parm, OutParm, ZeroConstructor)
// bool*                          PrimaryWeapon                  (Parm, ZeroConstructor, IsPlainOldData)

void UInventoryLib::STATIC_GetWeaponAttributes(bool* PrimaryWeapon, TMap<struct FName, class UItemAttribute*>* GlobalAttributes)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.InventoryLib.GetWeaponAttributes");

	UInventoryLib_GetWeaponAttributes_Params params;
	params.PrimaryWeapon = PrimaryWeapon;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GlobalAttributes != nullptr)
		*GlobalAttributes = params.GlobalAttributes;
}


// Function ES2.InventoryLib.GetTotalCargoSpaceOfShip
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int*                           ShipIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UInventoryLib::STATIC_GetTotalCargoSpaceOfShip(int* ShipIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.InventoryLib.GetTotalCargoSpaceOfShip");

	UInventoryLib_GetTotalCargoSpaceOfShip_Params params;
	params.ShipIndex = ShipIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.InventoryLib.GetShipPrice
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UItem**                  ShipItem                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            BuyPriceOut                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            TradePriceOut                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UInventoryLib::STATIC_GetShipPrice(class UItem** ShipItem, int* BuyPriceOut, int* TradePriceOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.InventoryLib.GetShipPrice");

	UInventoryLib_GetShipPrice_Params params;
	params.ShipItem = ShipItem;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BuyPriceOut != nullptr)
		*BuyPriceOut = params.BuyPriceOut;
	if (TradePriceOut != nullptr)
		*TradePriceOut = params.TradePriceOut;

	return params.ReturnValue;
}


// Function ES2.InventoryLib.GetResultingStatAttributesForItemSwitch
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UItem**                  CurrentItem                    (Parm, ZeroConstructor, IsPlainOldData)
// class UItem**                  NewItem                        (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UItemAttribute*>  PreviewAttributes              (Parm, OutParm, ZeroConstructor)

void UInventoryLib::STATIC_GetResultingStatAttributesForItemSwitch(class UItem** CurrentItem, class UItem** NewItem, TArray<class UItemAttribute*>* PreviewAttributes)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.InventoryLib.GetResultingStatAttributesForItemSwitch");

	UInventoryLib_GetResultingStatAttributesForItemSwitch_Params params;
	params.CurrentItem = CurrentItem;
	params.NewItem = NewItem;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PreviewAttributes != nullptr)
		*PreviewAttributes = params.PreviewAttributes;
}


// Function ES2.InventoryLib.GetPlayerShip
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int*                           PlayerShipIndex                (Parm, ZeroConstructor, IsPlainOldData)
// struct FShipData               ReturnValue                    (Parm, OutParm, ReturnParm)

struct FShipData UInventoryLib::STATIC_GetPlayerShip(int* PlayerShipIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.InventoryLib.GetPlayerShip");

	UInventoryLib_GetPlayerShip_Params params;
	params.PlayerShipIndex = PlayerShipIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.InventoryLib.GetPlayerAttributes
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// TMap<struct FName, class UItemAttribute*> GlobalAttributes               (Parm, OutParm, ZeroConstructor)

void UInventoryLib::STATIC_GetPlayerAttributes(TMap<struct FName, class UItemAttribute*>* GlobalAttributes)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.InventoryLib.GetPlayerAttributes");

	UInventoryLib_GetPlayerAttributes_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GlobalAttributes != nullptr)
		*GlobalAttributes = params.GlobalAttributes;
}


// Function ES2.InventoryLib.GetPlayerAttribute
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName*                  AttributeID                    (Parm, ZeroConstructor, IsPlainOldData)
// class UItemAttribute*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UItemAttribute* UInventoryLib::STATIC_GetPlayerAttribute(struct FName* AttributeID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.InventoryLib.GetPlayerAttribute");

	UInventoryLib_GetPlayerAttribute_Params params;
	params.AttributeID = AttributeID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.InventoryLib.GetNumShipsOnHomebase
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UInventoryLib::STATIC_GetNumShipsOnHomebase()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.InventoryLib.GetNumShipsOnHomebase");

	UInventoryLib_GetNumShipsOnHomebase_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.InventoryLib.GetNumShipSlotsOnHomebase
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UInventoryLib::STATIC_GetNumShipSlotsOnHomebase()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.InventoryLib.GetNumShipSlotsOnHomebase");

	UInventoryLib_GetNumShipSlotsOnHomebase_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.InventoryLib.GetNumFreeShipSlotsOnHomebase
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UInventoryLib::STATIC_GetNumFreeShipSlotsOnHomebase()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.InventoryLib.GetNumFreeShipSlotsOnHomebase");

	UInventoryLib_GetNumFreeShipSlotsOnHomebase_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.InventoryLib.GetItemCategoryByInventoryCategory
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TEnumAsByte<EInventoryCategory>* Category                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UInventoryLib::STATIC_GetItemCategoryByInventoryCategory(TEnumAsByte<EInventoryCategory>* Category)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.InventoryLib.GetItemCategoryByInventoryCategory");

	UInventoryLib_GetItemCategoryByInventoryCategory_Params params;
	params.Category = Category;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.InventoryLib.GetItemAmountOfTypeInCargo
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName*                  ItemID                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UInventoryLib::STATIC_GetItemAmountOfTypeInCargo(struct FName* ItemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.InventoryLib.GetItemAmountOfTypeInCargo");

	UInventoryLib_GetItemAmountOfTypeInCargo_Params params;
	params.ItemID = ItemID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.InventoryLib.GetInventoryOfShip
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int*                           PlayerShipIndex                (Parm, ZeroConstructor, IsPlainOldData)
// class UInventory*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UInventory* UInventoryLib::STATIC_GetInventoryOfShip(int* PlayerShipIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.InventoryLib.GetInventoryOfShip");

	UInventoryLib_GetInventoryOfShip_Params params;
	params.PlayerShipIndex = PlayerShipIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.InventoryLib.GetInventoryOfCurrentShip
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UInventory*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UInventory* UInventoryLib::STATIC_GetInventoryOfCurrentShip()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.InventoryLib.GetInventoryOfCurrentShip");

	UInventoryLib_GetInventoryOfCurrentShip_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.InventoryLib.GetInventoryCategoryByItemCategory
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName*                  CategoryID                     (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EInventoryCategory> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<EInventoryCategory> UInventoryLib::STATIC_GetInventoryCategoryByItemCategory(struct FName* CategoryID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.InventoryLib.GetInventoryCategoryByItemCategory");

	UInventoryLib_GetInventoryCategoryByItemCategory_Params params;
	params.CategoryID = CategoryID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.InventoryLib.GetCurrentShipIndex
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UInventoryLib::STATIC_GetCurrentShipIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.InventoryLib.GetCurrentShipIndex");

	UInventoryLib_GetCurrentShipIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.InventoryLib.GetCurrentShip
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FShipData               ReturnValue                    (Parm, OutParm, ReturnParm)

struct FShipData UInventoryLib::STATIC_GetCurrentShip()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.InventoryLib.GetCurrentShip");

	UInventoryLib_GetCurrentShip_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.InventoryLib.GetAttributeOfShip
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FShipData               ShipData                       (Parm, OutParm, ReferenceParm)
// struct FName*                  AttributeID                    (Parm, ZeroConstructor, IsPlainOldData)
// class UItemAttribute*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UItemAttribute* UInventoryLib::STATIC_GetAttributeOfShip(struct FName* AttributeID, struct FShipData* ShipData)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.InventoryLib.GetAttributeOfShip");

	UInventoryLib_GetAttributeOfShip_Params params;
	params.AttributeID = AttributeID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ShipData != nullptr)
		*ShipData = params.ShipData;

	return params.ReturnValue;
}


// Function ES2.InventoryLib.GetAttributeOfPlayer
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName*                  AttributeID                    (Parm, ZeroConstructor, IsPlainOldData)
// class UItemAttribute*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UItemAttribute* UInventoryLib::STATIC_GetAttributeOfPlayer(struct FName* AttributeID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.InventoryLib.GetAttributeOfPlayer");

	UInventoryLib_GetAttributeOfPlayer_Params params;
	params.AttributeID = AttributeID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.InventoryLib.CreateShipData
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FShipData               ShipDataIn                     (Parm, OutParm, ReferenceParm)
// class UItem**                  AlreadyExisitingShipItem       (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bCreateNewShipModules          (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bCreateNewShipColors           (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bCreateNewShipDecals           (Parm, ZeroConstructor, IsPlainOldData)
// int*                           ItemLevel                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  ShipTypeID                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FShipData               ReturnValue                    (Parm, OutParm, ReturnParm)

struct FShipData UInventoryLib::STATIC_CreateShipData(class UItem** AlreadyExisitingShipItem, bool* bCreateNewShipModules, bool* bCreateNewShipColors, bool* bCreateNewShipDecals, int* ItemLevel, struct FName* ShipTypeID, struct FShipData* ShipDataIn)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.InventoryLib.CreateShipData");

	UInventoryLib_CreateShipData_Params params;
	params.AlreadyExisitingShipItem = AlreadyExisitingShipItem;
	params.bCreateNewShipModules = bCreateNewShipModules;
	params.bCreateNewShipColors = bCreateNewShipColors;
	params.bCreateNewShipDecals = bCreateNewShipDecals;
	params.ItemLevel = ItemLevel;
	params.ShipTypeID = ShipTypeID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ShipDataIn != nullptr)
		*ShipDataIn = params.ShipDataIn;

	return params.ReturnValue;
}


// Function ES2.InventoryLib.BuyShip
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FShipData*              NewShipData                    (Parm)
// TEnumAsByte<EShipBuyMode>*     BuyMode                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  StationID                      (Parm, ZeroConstructor, IsPlainOldData)
// class AESPawn**                PlayerShip                     (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EShipBuyResult>    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<EShipBuyResult> UInventoryLib::STATIC_BuyShip(struct FShipData* NewShipData, TEnumAsByte<EShipBuyMode>* BuyMode, struct FName* StationID, class AESPawn** PlayerShip)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.InventoryLib.BuyShip");

	UInventoryLib_BuyShip_Params params;
	params.NewShipData = NewShipData;
	params.BuyMode = BuyMode;
	params.StationID = StationID;
	params.PlayerShip = PlayerShip;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.InventoryLib.AttributeAccessToString
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAttributeAccess*       AttributeAccess                (ConstParm, Parm, OutParm, ReferenceParm)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UInventoryLib::STATIC_AttributeAccessToString(struct FAttributeAccess* AttributeAccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.InventoryLib.AttributeAccessToString");

	UInventoryLib_AttributeAccessToString_Params params;
	params.AttributeAccess = AttributeAccess;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.InventoryLib.AttributeAccessToFloat
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAttributeAccess*       AttributeAccess                (ConstParm, Parm, OutParm, ReferenceParm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UInventoryLib::STATIC_AttributeAccessToFloat(struct FAttributeAccess* AttributeAccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.InventoryLib.AttributeAccessToFloat");

	UInventoryLib_AttributeAccessToFloat_Params params;
	params.AttributeAccess = AttributeAccess;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.InventoryLib.AttributeAccessToBuffableFloat
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAttributeAccess*       AttributeAccess                (ConstParm, Parm, OutParm, ReferenceParm)
// struct FBuffableFloat          BuffableFloatOut               (Parm, OutParm)

void UInventoryLib::STATIC_AttributeAccessToBuffableFloat(struct FAttributeAccess* AttributeAccess, struct FBuffableFloat* BuffableFloatOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.InventoryLib.AttributeAccessToBuffableFloat");

	UInventoryLib_AttributeAccessToBuffableFloat_Params params;
	params.AttributeAccess = AttributeAccess;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BuffableFloatOut != nullptr)
		*BuffableFloatOut = params.BuffableFloatOut;
}


// Function ES2.InventoryLib.AreShipDecalsEqual
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FShipDecalTextures*     arg1                           (ConstParm, Parm, OutParm, ReferenceParm)
// struct FShipDecalTextures*     arg2                           (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UInventoryLib::STATIC_AreShipDecalsEqual(struct FShipDecalTextures* arg1, struct FShipDecalTextures* arg2)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.InventoryLib.AreShipDecalsEqual");

	UInventoryLib_AreShipDecalsEqual_Params params;
	params.arg1 = arg1;
	params.arg2 = arg2;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.InventoryLib.AreShipColorsEqual
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FShipColors*            arg1                           (ConstParm, Parm, OutParm, ReferenceParm)
// struct FShipColors*            arg2                           (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UInventoryLib::STATIC_AreShipColorsEqual(struct FShipColors* arg1, struct FShipColors* arg2)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.InventoryLib.AreShipColorsEqual");

	UInventoryLib_AreShipColorsEqual_Params params;
	params.arg1 = arg1;
	params.arg2 = arg2;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.Item.SetCustomData
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName*                  ID                             (Parm, ZeroConstructor, IsPlainOldData)
// struct FESVariant*             NewValue                       (Parm)
// bool                           bWasNewlyCreated               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UItem::SetCustomData(struct FName* ID, struct FESVariant* NewValue, bool* bWasNewlyCreated)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.Item.SetCustomData");

	UItem_SetCustomData_Params params;
	params.ID = ID;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bWasNewlyCreated != nullptr)
		*bWasNewlyCreated = params.bWasNewlyCreated;
}


// Function ES2.Item.SetCondition
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         Value                          (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bUpdatePrice                   (Parm, ZeroConstructor, IsPlainOldData)

void UItem::SetCondition(float* Value, bool* bUpdatePrice)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.Item.SetCondition");

	UItem_SetCondition_Params params;
	params.Value = Value;
	params.bUpdatePrice = bUpdatePrice;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.Item.SetAttribute
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  AttributeID                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         NewValue                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UItem::SetAttribute(struct FName* AttributeID, float* NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.Item.SetAttribute");

	UItem_SetAttribute_Params params;
	params.AttributeID = AttributeID;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.Item.IsStackable
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UItem::IsStackable()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.Item.IsStackable");

	UItem_IsStackable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.Item.IsFullyStacked
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UItem::IsFullyStacked()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.Item.IsFullyStacked");

	UItem_IsFullyStacked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.Item.IsCargoSpaceIncreasingItem
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UItem::IsCargoSpaceIncreasingItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.Item.IsCargoSpaceIncreasingItem");

	UItem_IsCargoSpaceIncreasingItem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.Item.IsCargoSpaceDecreasingItem
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UItem::IsCargoSpaceDecreasingItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.Item.IsCargoSpaceDecreasingItem");

	UItem_IsCargoSpaceDecreasingItem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.Item.IsCargoSpaceChangingItem
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UItem::IsCargoSpaceChangingItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.Item.IsCargoSpaceChangingItem");

	UItem_IsCargoSpaceChangingItem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.Item.GetTemplateName
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UItem::GetTemplateName()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.Item.GetTemplateName");

	UItem_GetTemplateName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.Item.GetSubCategoryName
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UItem::GetSubCategoryName()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.Item.GetSubCategoryName");

	UItem_GetSubCategoryName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.Item.GetSubCategoryID
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UItem::GetSubCategoryID()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.Item.GetSubCategoryID");

	UItem_GetSubCategoryID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.Item.GetMaxStackAmount
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UItem::GetMaxStackAmount()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.Item.GetMaxStackAmount");

	UItem_GetMaxStackAmount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.Item.GetCategoryName
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UItem::GetCategoryName()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.Item.GetCategoryName");

	UItem_GetCategoryName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.Item.GetCategoryID
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UItem::GetCategoryID()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.Item.GetCategoryID");

	UItem_GetCategoryID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.Item.GetCargoSpaceIncreasingAmount
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UItem::GetCargoSpaceIncreasingAmount()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.Item.GetCargoSpaceIncreasingAmount");

	UItem_GetCargoSpaceIncreasingAmount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.Item.GetAttribute
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName*                  AttributeID                    (Parm, ZeroConstructor, IsPlainOldData)
// class UItemAttribute*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UItemAttribute* UItem::GetAttribute(struct FName* AttributeID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.Item.GetAttribute");

	UItem_GetAttribute_Params params;
	params.AttributeID = AttributeID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.Item.FindCustomData
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName*                  ID                             (Parm, ZeroConstructor, IsPlainOldData)
// struct FESVariant              Value_OUT                      (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UItem::FindCustomData(struct FName* ID, struct FESVariant* Value_OUT)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.Item.FindCustomData");

	UItem_FindCustomData_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Value_OUT != nullptr)
		*Value_OUT = params.Value_OUT;

	return params.ReturnValue;
}


// Function ES2.ItemAttribute.SetParentCompoundAttribute
// (Final, Native, Public)
// Parameters:
// class UItemAttribute**         ParentAttribute                (Parm, ZeroConstructor, IsPlainOldData)

void UItemAttribute::SetParentCompoundAttribute(class UItemAttribute** ParentAttribute)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ItemAttribute.SetParentCompoundAttribute");

	UItemAttribute_SetParentCompoundAttribute_Params params;
	params.ParentAttribute = ParentAttribute;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ItemAttribute.SetGlobalBuffAttribute
// (Final, Native, Public)
// Parameters:
// class UItemAttribute**         _BuffAttribute                 (Parm, ZeroConstructor, IsPlainOldData)

void UItemAttribute::SetGlobalBuffAttribute(class UItemAttribute** _BuffAttribute)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ItemAttribute.SetGlobalBuffAttribute");

	UItemAttribute_SetGlobalBuffAttribute_Params params;
	params._BuffAttribute = _BuffAttribute;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ItemAttribute.SetAutomaticTextUpdate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bEnable                        (Parm, ZeroConstructor, IsPlainOldData)

void UItemAttribute::SetAutomaticTextUpdate(bool* bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ItemAttribute.SetAutomaticTextUpdate");

	UItemAttribute_SetAutomaticTextUpdate_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ItemAttribute.GetDescriptionText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          BuffedValue                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UItemAttribute::GetDescriptionText(bool* BuffedValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ItemAttribute.GetDescriptionText");

	UItemAttribute_GetDescriptionText_Params params;
	params.BuffedValue = BuffedValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.ItemContainer.SetEmpty
// (Final, Native, Public, BlueprintCallable)

void AItemContainer::SetEmpty()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ItemContainer.SetEmpty");

	AItemContainer_SetEmpty_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ItemContainer.OnContainerOpened
// (Native, Event, Public, BlueprintEvent)

void AItemContainer::OnContainerOpened()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ItemContainer.OnContainerOpened");

	AItemContainer_OnContainerOpened_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ItemContainer.IsEmpty
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AItemContainer::IsEmpty()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ItemContainer.IsEmpty");

	AItemContainer_IsEmpty_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.ItemContainer.InteractWithContainer
// (Final, Native, Private)
// Parameters:
// class UInteractComponent**     InteractComponent              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 InteractActor                  (Parm, ZeroConstructor, IsPlainOldData)

void AItemContainer::InteractWithContainer(class UInteractComponent** InteractComponent, class AActor** InteractActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ItemContainer.InteractWithContainer");

	AItemContainer_InteractWithContainer_Params params;
	params.InteractComponent = InteractComponent;
	params.InteractActor = InteractActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ItemLib.SetPerks
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FName>*          PerkIDs                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UItemLib::STATIC_SetPerks(TArray<struct FName>* PerkIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ItemLib.SetPerks");

	UItemLib_SetPerks_Params params;
	params.PerkIDs = PerkIDs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ItemLib.SetModeForDevice
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName*                  DeviceItemID                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  DeviceModeItemID               (Parm, ZeroConstructor, IsPlainOldData)

void UItemLib::STATIC_SetModeForDevice(struct FName* DeviceItemID, struct FName* DeviceModeItemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ItemLib.SetModeForDevice");

	UItemLib_SetModeForDevice_Params params;
	params.DeviceItemID = DeviceItemID;
	params.DeviceModeItemID = DeviceModeItemID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ItemLib.SetItemAttributeCustomText
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UItem**                  Item                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  AttributeID                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  FormatText                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FText*                  ValueText                      (ConstParm, Parm, OutParm, ReferenceParm)

void UItemLib::STATIC_SetItemAttributeCustomText(class UItem** Item, struct FName* AttributeID, struct FText* FormatText, struct FText* ValueText)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ItemLib.SetItemAttributeCustomText");

	UItemLib_SetItemAttributeCustomText_Params params;
	params.Item = Item;
	params.AttributeID = AttributeID;
	params.FormatText = FormatText;
	params.ValueText = ValueText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ItemLib.MakeTransientAttributeInstance
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName*                  AttributeID                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Value                          (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsMandatory                   (Parm, ZeroConstructor, IsPlainOldData)
// class UItemAttribute*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UItemAttribute* UItemLib::STATIC_MakeTransientAttributeInstance(struct FName* AttributeID, float* Value, bool* bIsMandatory)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ItemLib.MakeTransientAttributeInstance");

	UItemLib_MakeTransientAttributeInstance_Params params;
	params.AttributeID = AttributeID;
	params.Value = Value;
	params.bIsMandatory = bIsMandatory;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.ItemLib.IsPlayerCompoundAttribute
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName*                  AttributeID                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UItemLib::STATIC_IsPlayerCompoundAttribute(struct FName* AttributeID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ItemLib.IsPlayerCompoundAttribute");

	UItemLib_IsPlayerCompoundAttribute_Params params;
	params.AttributeID = AttributeID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.ItemLib.IsModuleItem
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UItem**                  Item                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UItemLib::STATIC_IsModuleItem(class UItem** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ItemLib.IsModuleItem");

	UItemLib_IsModuleItem_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.ItemLib.IsEquipmentItem
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UItem**                  Item                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UItemLib::STATIC_IsEquipmentItem(class UItem** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ItemLib.IsEquipmentItem");

	UItemLib_IsEquipmentItem_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.ItemLib.GetSubItemIDs
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName*                  CategoryOrSubCategoryID        (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FName>           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FName> UItemLib::STATIC_GetSubItemIDs(struct FName* CategoryOrSubCategoryID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ItemLib.GetSubItemIDs");

	UItemLib_GetSubItemIDs_Params params;
	params.CategoryOrSubCategoryID = CategoryOrSubCategoryID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.ItemLib.GetShipSettings
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName*                  PlayerShipID                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FShipSettingsTableRow   ShipSettingsOut                (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UItemLib::STATIC_GetShipSettings(struct FName* PlayerShipID, struct FShipSettingsTableRow* ShipSettingsOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ItemLib.GetShipSettings");

	UItemLib_GetShipSettings_Params params;
	params.PlayerShipID = PlayerShipID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ShipSettingsOut != nullptr)
		*ShipSettingsOut = params.ShipSettingsOut;

	return params.ReturnValue;
}


// Function ES2.ItemLib.GetShipModule
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName*                  ShipID                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  ModuleID                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FShipModule             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FShipModule UItemLib::STATIC_GetShipModule(struct FName* ShipID, struct FName* ModuleID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ItemLib.GetShipModule");

	UItemLib_GetShipModule_Params params;
	params.ShipID = ShipID;
	params.ModuleID = ModuleID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.ItemLib.GetShipDecalTextures
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName*                  DecalsID                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FShipDecalTextures      ReturnValue                    (Parm, OutParm, ReturnParm)

struct FShipDecalTextures UItemLib::STATIC_GetShipDecalTextures(struct FName* DecalsID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ItemLib.GetShipDecalTextures");

	UItemLib_GetShipDecalTextures_Params params;
	params.DecalsID = DecalsID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.ItemLib.GetRandomResourceAmountForRarity
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// TEnumAsByte<EItemRarity>*      Rarity                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FRandomStream           RandomStream                   (Parm, OutParm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UItemLib::STATIC_GetRandomResourceAmountForRarity(TEnumAsByte<EItemRarity>* Rarity, struct FRandomStream* RandomStream)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ItemLib.GetRandomResourceAmountForRarity");

	UItemLib_GetRandomResourceAmountForRarity_Params params;
	params.Rarity = Rarity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RandomStream != nullptr)
		*RandomStream = params.RandomStream;

	return params.ReturnValue;
}


// Function ES2.ItemLib.GetPickupClassPathForItemCategory
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName*                  ItemCategory                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  ItemSubCategory                (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UItemLib::STATIC_GetPickupClassPathForItemCategory(struct FName* ItemCategory, struct FName* ItemSubCategory)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ItemLib.GetPickupClassPathForItemCategory");

	UItemLib_GetPickupClassPathForItemCategory_Params params;
	params.ItemCategory = ItemCategory;
	params.ItemSubCategory = ItemSubCategory;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.ItemLib.GetPerkIDsForSet
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// int*                           SetNumber                      (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FName>           PerkIDs                        (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UItemLib::STATIC_GetPerkIDsForSet(int* SetNumber, TArray<struct FName>* PerkIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ItemLib.GetPerkIDsForSet");

	UItemLib_GetPerkIDsForSet_Params params;
	params.SetNumber = SetNumber;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PerkIDs != nullptr)
		*PerkIDs = params.PerkIDs;

	return params.ReturnValue;
}


// Function ES2.ItemLib.GetModesForDevice
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName*                  DeviceItemID                   (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UItem*>           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UItem*> UItemLib::STATIC_GetModesForDevice(struct FName* DeviceItemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ItemLib.GetModesForDevice");

	UItemLib_GetModesForDevice_Params params;
	params.DeviceItemID = DeviceItemID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.ItemLib.GetModeForEquippedDevice
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class ADeviceBase**            EquippedDevice                 (Parm, ZeroConstructor, IsPlainOldData)
// class UItem*                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UItem* UItemLib::STATIC_GetModeForEquippedDevice(class ADeviceBase** EquippedDevice)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ItemLib.GetModeForEquippedDevice");

	UItemLib_GetModeForEquippedDevice_Params params;
	params.EquippedDevice = EquippedDevice;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.ItemLib.GetModeForDevice
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName*                  DeviceItemID                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UItemLib::STATIC_GetModeForDevice(struct FName* DeviceItemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ItemLib.GetModeForDevice");

	UItemLib_GetModeForDevice_Params params;
	params.DeviceItemID = DeviceItemID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.ItemLib.GetMaxAmmo
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UItem**                  Item                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UItemLib::STATIC_GetMaxAmmo(class UItem** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ItemLib.GetMaxAmmo");

	UItemLib_GetMaxAmmo_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.ItemLib.GetItemValueRange
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName*                  ItemID                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  AttributeID                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FItemValueRange         Out_Range                      (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UItemLib::STATIC_GetItemValueRange(struct FName* ItemID, struct FName* AttributeID, struct FItemValueRange* Out_Range)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ItemLib.GetItemValueRange");

	UItemLib_GetItemValueRange_Params params;
	params.ItemID = ItemID;
	params.AttributeID = AttributeID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out_Range != nullptr)
		*Out_Range = params.Out_Range;

	return params.ReturnValue;
}


// Function ES2.ItemLib.GetItemTemplates
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FItemTemplate>   ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

TArray<struct FItemTemplate> UItemLib::STATIC_GetItemTemplates()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ItemLib.GetItemTemplates");

	UItemLib_GetItemTemplates_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.ItemLib.GetItemTemplate
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName*                  ID                             (Parm, ZeroConstructor, IsPlainOldData)
// struct FItemTemplate           ReturnValue                    (Parm, OutParm, ReturnParm)

struct FItemTemplate UItemLib::STATIC_GetItemTemplate(struct FName* ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ItemLib.GetItemTemplate");

	UItemLib_GetItemTemplate_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.ItemLib.GetItemPrice
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UItem**                  Item                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UItemLib::STATIC_GetItemPrice(class UItem** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ItemLib.GetItemPrice");

	UItemLib_GetItemPrice_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.ItemLib.GetItemNameByID
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName*                  ID                             (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ResultText                     (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UItemLib::STATIC_GetItemNameByID(struct FName* ID, struct FText* ResultText)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ItemLib.GetItemNameByID");

	UItemLib_GetItemNameByID_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ResultText != nullptr)
		*ResultText = params.ResultText;

	return params.ReturnValue;
}


// Function ES2.ItemLib.GetItemIDs
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UItemIDs*                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UItemIDs* UItemLib::STATIC_GetItemIDs()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ItemLib.GetItemIDs");

	UItemLib_GetItemIDs_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.ItemLib.GetItemAttributes
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UItem**                  Item                           (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UItemAttribute*>  HeroAttributesOut              (Parm, OutParm, ZeroConstructor)
// TArray<class UItemAttribute*>  MandatoryAttributesOut         (Parm, OutParm, ZeroConstructor)
// TArray<class UItemAttribute*>  RandomAttributesOut            (Parm, OutParm, ZeroConstructor)

void UItemLib::STATIC_GetItemAttributes(class UItem** Item, TArray<class UItemAttribute*>* HeroAttributesOut, TArray<class UItemAttribute*>* MandatoryAttributesOut, TArray<class UItemAttribute*>* RandomAttributesOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ItemLib.GetItemAttributes");

	UItemLib_GetItemAttributes_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HeroAttributesOut != nullptr)
		*HeroAttributesOut = params.HeroAttributesOut;
	if (MandatoryAttributesOut != nullptr)
		*MandatoryAttributesOut = params.MandatoryAttributesOut;
	if (RandomAttributesOut != nullptr)
		*RandomAttributesOut = params.RandomAttributesOut;
}


// Function ES2.ItemLib.GetDescriptionWithoutNumbers
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UItemAttribute**         AttributeInstance              (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FText UItemLib::STATIC_GetDescriptionWithoutNumbers(class UItemAttribute** AttributeInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ItemLib.GetDescriptionWithoutNumbers");

	UItemLib_GetDescriptionWithoutNumbers_Params params;
	params.AttributeInstance = AttributeInstance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.ItemLib.GetCurrentAmmo
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UItem**                  Item                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UItemLib::STATIC_GetCurrentAmmo(class UItem** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ItemLib.GetCurrentAmmo");

	UItemLib_GetCurrentAmmo_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.ItemLib.GetChipValueForItem
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UItem**                  Item                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FItemChip*              ItemChip                       (ConstParm, Parm, OutParm, ReferenceParm)
// struct FItemChipValue          ReturnValue                    (Parm, OutParm, ReturnParm)

struct FItemChipValue UItemLib::STATIC_GetChipValueForItem(class UItem** Item, struct FItemChip* ItemChip)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ItemLib.GetChipValueForItem");

	UItemLib_GetChipValueForItem_Params params;
	params.Item = Item;
	params.ItemChip = ItemChip;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.ItemLib.GetChips
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FItemChip>       ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

TArray<struct FItemChip> UItemLib::STATIC_GetChips()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ItemLib.GetChips");

	UItemLib_GetChips_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.ItemLib.GetChip
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName*                  ID                             (Parm, ZeroConstructor, IsPlainOldData)
// struct FItemChip               ReturnValue                    (Parm, OutParm, ReturnParm)

struct FItemChip UItemLib::STATIC_GetChip(struct FName* ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ItemLib.GetChip");

	UItemLib_GetChip_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.ItemLib.GetAttributeTemplates
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FItemAttributeTemplate> ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

TArray<struct FItemAttributeTemplate> UItemLib::STATIC_GetAttributeTemplates()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ItemLib.GetAttributeTemplates");

	UItemLib_GetAttributeTemplates_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.ItemLib.GetAttributeTemplate
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName*                  ID                             (Parm, ZeroConstructor, IsPlainOldData)
// struct FItemAttributeTemplate  ReturnValue                    (Parm, OutParm, ReturnParm)

struct FItemAttributeTemplate UItemLib::STATIC_GetAttributeTemplate(struct FName* ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ItemLib.GetAttributeTemplate");

	UItemLib_GetAttributeTemplate_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.ItemLib.GetAttributesOfCompound
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName*                  AttributeID                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CompoundValueToConvert         (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FCompoundAttributeEntry> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FCompoundAttributeEntry> UItemLib::STATIC_GetAttributesOfCompound(struct FName* AttributeID, float* CompoundValueToConvert)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ItemLib.GetAttributesOfCompound");

	UItemLib_GetAttributesOfCompound_Params params;
	params.AttributeID = AttributeID;
	params.CompoundValueToConvert = CompoundValueToConvert;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.ItemLib.GetAttributeIDs
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UAttributeIDs*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAttributeIDs* UItemLib::STATIC_GetAttributeIDs()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ItemLib.GetAttributeIDs");

	UItemLib_GetAttributeIDs_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.ItemLib.GetAttributeDescription
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UItemAttribute**         AttributeInstance              (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   FormatedValueText              (Parm, OutParm)
// struct FText                   ValueText                      (Parm, OutParm)
// class FString                  ValueString                    (Parm, OutParm, ZeroConstructor)
// bool*                          bUseBuffedValue                (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UItemLib::STATIC_GetAttributeDescription(class UItemAttribute** AttributeInstance, bool* bUseBuffedValue, struct FText* FormatedValueText, struct FText* ValueText, class FString* ValueString)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ItemLib.GetAttributeDescription");

	UItemLib_GetAttributeDescription_Params params;
	params.AttributeInstance = AttributeInstance;
	params.bUseBuffedValue = bUseBuffedValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FormatedValueText != nullptr)
		*FormatedValueText = params.FormatedValueText;
	if (ValueText != nullptr)
		*ValueText = params.ValueText;
	if (ValueString != nullptr)
		*ValueString = params.ValueString;

	return params.ReturnValue;
}


// Function ES2.ItemLib.GetAttributeChangesFromCompoundsAtLevelUp
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<class UItemAttribute*>  PreviewAttributes              (Parm, OutParm, ZeroConstructor)
// int*                           FromLevel                      (Parm, ZeroConstructor, IsPlainOldData)
// int*                           ToLevel                        (Parm, ZeroConstructor, IsPlainOldData)

void UItemLib::STATIC_GetAttributeChangesFromCompoundsAtLevelUp(int* FromLevel, int* ToLevel, TArray<class UItemAttribute*>* PreviewAttributes)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ItemLib.GetAttributeChangesFromCompoundsAtLevelUp");

	UItemLib_GetAttributeChangesFromCompoundsAtLevelUp_Params params;
	params.FromLevel = FromLevel;
	params.ToLevel = ToLevel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PreviewAttributes != nullptr)
		*PreviewAttributes = params.PreviewAttributes;
}


// Function ES2.ItemLib.GetAllLootCategories
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FName>           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FName> UItemLib::STATIC_GetAllLootCategories()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ItemLib.GetAllLootCategories");

	UItemLib_GetAllLootCategories_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.ItemLib.GetAllItemTemplatesOfCategory
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName*                  CategoryOrSubCategoryID        (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FItemTemplate>   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FItemTemplate> UItemLib::STATIC_GetAllItemTemplatesOfCategory(struct FName* CategoryOrSubCategoryID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ItemLib.GetAllItemTemplatesOfCategory");

	UItemLib_GetAllItemTemplatesOfCategory_Params params;
	params.CategoryOrSubCategoryID = CategoryOrSubCategoryID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.ItemLib.GenerateShipPerks
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EShip>*            ShipType                       (Parm, ZeroConstructor, IsPlainOldData)
// int*                           ShipTier                       (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FName>           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FName> UItemLib::STATIC_GenerateShipPerks(TEnumAsByte<EShip>* ShipType, int* ShipTier)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ItemLib.GenerateShipPerks");

	UItemLib_GenerateShipPerks_Params params;
	params.ShipType = ShipType;
	params.ShipTier = ShipTier;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.ItemLib.GenerateShipModulesForShip
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName*                  ShipID                         (Parm, ZeroConstructor, IsPlainOldData)
// int*                           TierMin                        (Parm, ZeroConstructor, IsPlainOldData)
// int*                           TierMax                        (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FShipModuleState> OUT_ShipModules                (Parm, OutParm, ZeroConstructor)

void UItemLib::STATIC_GenerateShipModulesForShip(struct FName* ShipID, int* TierMin, int* TierMax, TArray<struct FShipModuleState>* OUT_ShipModules)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ItemLib.GenerateShipModulesForShip");

	UItemLib_GenerateShipModulesForShip_Params params;
	params.ShipID = ShipID;
	params.TierMin = TierMin;
	params.TierMax = TierMax;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OUT_ShipModules != nullptr)
		*OUT_ShipModules = params.OUT_ShipModules;
}


// Function ES2.ItemLib.GenerateShipDecals
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   DecalsIDOut                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UItemLib::STATIC_GenerateShipDecals(struct FName* DecalsIDOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ItemLib.GenerateShipDecals");

	UItemLib_GenerateShipDecals_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DecalsIDOut != nullptr)
		*DecalsIDOut = params.DecalsIDOut;
}


// Function ES2.ItemLib.GenerateShipColors
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FShipColors             ShipColorsOut                  (Parm, OutParm)
// struct FName*                  DesiredColorsID                (Parm, ZeroConstructor, IsPlainOldData)

void UItemLib::STATIC_GenerateShipColors(struct FName* DesiredColorsID, struct FShipColors* ShipColorsOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ItemLib.GenerateShipColors");

	UItemLib_GenerateShipColors_Params params;
	params.DesiredColorsID = DesiredColorsID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ShipColorsOut != nullptr)
		*ShipColorsOut = params.ShipColorsOut;
}


// Function ES2.ItemLib.GenerateItem
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int*                           ItemLevel                      (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EItemRarity>*      Rarity                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  CategoryID                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  TypeID                         (Parm, ZeroConstructor, IsPlainOldData)
// class UItem*                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UItem* UItemLib::STATIC_GenerateItem(int* ItemLevel, TEnumAsByte<EItemRarity>* Rarity, struct FName* CategoryID, struct FName* TypeID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ItemLib.GenerateItem");

	UItemLib_GenerateItem_Params params;
	params.ItemLevel = ItemLevel;
	params.Rarity = Rarity;
	params.CategoryID = CategoryID;
	params.TypeID = TypeID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.ItemLib.DuplicateItem
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UItem**                  OriginalItem                   (Parm, ZeroConstructor, IsPlainOldData)
// int*                           NewAmount                      (Parm, ZeroConstructor, IsPlainOldData)
// class UItem*                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UItem* UItemLib::STATIC_DuplicateItem(class UItem** OriginalItem, int* NewAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ItemLib.DuplicateItem");

	UItemLib_DuplicateItem_Params params;
	params.OriginalItem = OriginalItem;
	params.NewAmount = NewAmount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.ItemLib.CheatSetShipModules
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class AESPawn**                PlayerPawn                     (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FShipModuleState>* NewShipModules                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UItemLib::STATIC_CheatSetShipModules(class AESPawn** PlayerPawn, TArray<struct FShipModuleState>* NewShipModules)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ItemLib.CheatSetShipModules");

	UItemLib_CheatSetShipModules_Params params;
	params.PlayerPawn = PlayerPawn;
	params.NewShipModules = NewShipModules;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ItemLib.CheatChangeShipModule
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AESPawn**                PlayerPawn                     (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EShipModule>*      ModuleType                     (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bPrevious                      (Parm, ZeroConstructor, IsPlainOldData)

void UItemLib::STATIC_CheatChangeShipModule(class AESPawn** PlayerPawn, TEnumAsByte<EShipModule>* ModuleType, bool* bPrevious)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ItemLib.CheatChangeShipModule");

	UItemLib_CheatChangeShipModule_Params params;
	params.PlayerPawn = PlayerPawn;
	params.ModuleType = ModuleType;
	params.bPrevious = bPrevious;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ItemLib.AddChipToItem
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UItem**                  Item                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FItemChip*              ItemChip                       (ConstParm, Parm, OutParm, ReferenceParm)

void UItemLib::STATIC_AddChipToItem(class UItem** Item, struct FItemChip* ItemChip)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ItemLib.AddChipToItem");

	UItemLib_AddChipToItem_Params params;
	params.Item = Item;
	params.ItemChip = ItemChip;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ItemTemplates.GetSpawnGroupOfFaction
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TEnumAsByte<EFactions>*        Faction                        (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESpawnGroup>       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ESpawnGroup> UItemTemplates::STATIC_GetSpawnGroupOfFaction(TEnumAsByte<EFactions>* Faction)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ItemTemplates.GetSpawnGroupOfFaction");

	UItemTemplates_GetSpawnGroupOfFaction_Params params;
	params.Faction = Faction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.ItemTemplates.GetShipTypeFromShipItemID
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName*                  ShipID                         (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EShip>             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<EShip> UItemTemplates::STATIC_GetShipTypeFromShipItemID(struct FName* ShipID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ItemTemplates.GetShipTypeFromShipItemID");

	UItemTemplates_GetShipTypeFromShipItemID_Params params;
	params.ShipID = ShipID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.ItemTemplates.GetShipItemIDFromShipType
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TEnumAsByte<EShip>*            ShipType                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UItemTemplates::STATIC_GetShipItemIDFromShipType(TEnumAsByte<EShip>* ShipType)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ItemTemplates.GetShipItemIDFromShipType");

	UItemTemplates_GetShipItemIDFromShipType_Params params;
	params.ShipType = ShipType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.ItemTemplates.GetBuiltInDeviceSubCategoryForShip
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TEnumAsByte<EShip>*            ShipType                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UItemTemplates::STATIC_GetBuiltInDeviceSubCategoryForShip(TEnumAsByte<EShip>* ShipType)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ItemTemplates.GetBuiltInDeviceSubCategoryForShip");

	UItemTemplates_GetBuiltInDeviceSubCategoryForShip_Params params;
	params.ShipType = ShipType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.JumpDriveComponent.StartJumpFocus
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          ResumeChargeProgress           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UJumpDriveComponent::StartJumpFocus(bool* ResumeChargeProgress)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.JumpDriveComponent.StartJumpFocus");

	UJumpDriveComponent_StartJumpFocus_Params params;
	params.ResumeChargeProgress = ResumeChargeProgress;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.JumpDriveComponent.SetTargetLocation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  LocationID                     (Parm, ZeroConstructor, IsPlainOldData)

void UJumpDriveComponent::SetTargetLocation(struct FName* LocationID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.JumpDriveComponent.SetTargetLocation");

	UJumpDriveComponent_SetTargetLocation_Params params;
	params.LocationID = LocationID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.JumpDriveComponent.SetOwnerIsChargingJump
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bChargingJump                  (Parm, ZeroConstructor, IsPlainOldData)

void UJumpDriveComponent::SetOwnerIsChargingJump(bool* bChargingJump)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.JumpDriveComponent.SetOwnerIsChargingJump");

	UJumpDriveComponent_SetOwnerIsChargingJump_Params params;
	params.bChargingJump = bChargingJump;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.JumpDriveComponent.SetOwnerIsChargingCruiseMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          IsSpooling                     (Parm, ZeroConstructor, IsPlainOldData)

void UJumpDriveComponent::SetOwnerIsChargingCruiseMode(bool* IsSpooling)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.JumpDriveComponent.SetOwnerIsChargingCruiseMode");

	UJumpDriveComponent_SetOwnerIsChargingCruiseMode_Params params;
	params.IsSpooling = IsSpooling;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.JumpDriveComponent.SetOwnerIsBoosting
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          isBoosting                     (Parm, ZeroConstructor, IsPlainOldData)

void UJumpDriveComponent::SetOwnerIsBoosting(bool* isBoosting)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.JumpDriveComponent.SetOwnerIsBoosting");

	UJumpDriveComponent_SetOwnerIsBoosting_Params params;
	params.isBoosting = isBoosting;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.JumpDriveComponent.SetCruiseMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bEnable                        (Parm, ZeroConstructor, IsPlainOldData)

void UJumpDriveComponent::SetCruiseMode(bool* bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.JumpDriveComponent.SetCruiseMode");

	UJumpDriveComponent_SetCruiseMode_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.JumpDriveComponent.SetChargeCruiseModeToTrue
// (Final, Native, Private)

void UJumpDriveComponent::SetChargeCruiseModeToTrue()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.JumpDriveComponent.SetChargeCruiseModeToTrue");

	UJumpDriveComponent_SetChargeCruiseModeToTrue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.JumpDriveComponent.RemoveSuppressionActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor**                 SuppresionActor                (Parm, ZeroConstructor, IsPlainOldData)

void UJumpDriveComponent::RemoveSuppressionActor(class AActor** SuppresionActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.JumpDriveComponent.RemoveSuppressionActor");

	UJumpDriveComponent_RemoveSuppressionActor_Params params;
	params.SuppresionActor = SuppresionActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.JumpDriveComponent.PostBeginPlay
// (Final, Native, Private)

void UJumpDriveComponent::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.JumpDriveComponent.PostBeginPlay");

	UJumpDriveComponent_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.JumpDriveComponent.OwnerHealthDepleted
// (Final, Native, Private)
// Parameters:
// class AActor**                 Owner                          (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// class AController**            Instigator                     (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DamageAmount                   (Parm, ZeroConstructor, IsPlainOldData)

void UJumpDriveComponent::OwnerHealthDepleted(class AActor** Owner, class AActor** DamageCauser, class AController** Instigator, float* DamageAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.JumpDriveComponent.OwnerHealthDepleted");

	UJumpDriveComponent_OwnerHealthDepleted_Params params;
	params.Owner = Owner;
	params.DamageCauser = DamageCauser;
	params.Instigator = Instigator;
	params.DamageAmount = DamageAmount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.JumpDriveComponent.IsSuppressed
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UJumpDriveComponent::IsSuppressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.JumpDriveComponent.IsSuppressed");

	UJumpDriveComponent_IsSuppressed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.JumpDriveComponent.IsJumping
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UJumpDriveComponent::IsJumping()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.JumpDriveComponent.IsJumping");

	UJumpDriveComponent_IsJumping_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.JumpDriveComponent.IsInJumpFocus
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UJumpDriveComponent::IsInJumpFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.JumpDriveComponent.IsInJumpFocus");

	UJumpDriveComponent_IsInJumpFocus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.JumpDriveComponent.IsInCruiseMode
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UJumpDriveComponent::IsInCruiseMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.JumpDriveComponent.IsInCruiseMode");

	UJumpDriveComponent_IsInCruiseMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.JumpDriveComponent.InterruptJumpFocus
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         Duration                       (Parm, ZeroConstructor, IsPlainOldData)

void UJumpDriveComponent::InterruptJumpFocus(float* Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.JumpDriveComponent.InterruptJumpFocus");

	UJumpDriveComponent_InterruptJumpFocus_Params params;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.JumpDriveComponent.InterruptCruiseMode
// (Final, Native, Public, BlueprintCallable)

void UJumpDriveComponent::InterruptCruiseMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.JumpDriveComponent.InterruptCruiseMode");

	UJumpDriveComponent_InterruptCruiseMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.JumpDriveComponent.HasValidTargetLocation
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UJumpDriveComponent::HasValidTargetLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.JumpDriveComponent.HasValidTargetLocation");

	UJumpDriveComponent_HasValidTargetLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.JumpDriveComponent.GetTargetLocationID
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UJumpDriveComponent::GetTargetLocationID()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.JumpDriveComponent.GetTargetLocationID");

	UJumpDriveComponent_GetTargetLocationID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.JumpDriveComponent.GetSignalStrengths
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<float>                  StrengthsOut                   (Parm, OutParm, ZeroConstructor)

void UJumpDriveComponent::GetSignalStrengths(TArray<float>* StrengthsOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.JumpDriveComponent.GetSignalStrengths");

	UJumpDriveComponent_GetSignalStrengths_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StrengthsOut != nullptr)
		*StrengthsOut = params.StrengthsOut;
}


// Function ES2.JumpDriveComponent.GetCurrentChargePercentage
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UJumpDriveComponent::GetCurrentChargePercentage()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.JumpDriveComponent.GetCurrentChargePercentage");

	UJumpDriveComponent_GetCurrentChargePercentage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.JumpDriveComponent.GetCruiseModeChargeProgess
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UJumpDriveComponent::GetCruiseModeChargeProgess()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.JumpDriveComponent.GetCruiseModeChargeProgess");

	UJumpDriveComponent_GetCruiseModeChargeProgess_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.JumpDriveComponent.GetClosestSuppressionSignalStrength
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UJumpDriveComponent::GetClosestSuppressionSignalStrength()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.JumpDriveComponent.GetClosestSuppressionSignalStrength");

	UJumpDriveComponent_GetClosestSuppressionSignalStrength_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.JumpDriveComponent.ForceImmediateJump
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  LocationID                     (Parm, ZeroConstructor, IsPlainOldData)

void UJumpDriveComponent::ForceImmediateJump(struct FName* LocationID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.JumpDriveComponent.ForceImmediateJump");

	UJumpDriveComponent_ForceImmediateJump_Params params;
	params.LocationID = LocationID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.JumpDriveComponent.CanJumpDriveBeActivated
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UJumpDriveComponent::CanJumpDriveBeActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.JumpDriveComponent.CanJumpDriveBeActivated");

	UJumpDriveComponent_CanJumpDriveBeActivated_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.JumpDriveComponent.CanCruiseModeBeActivated
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UJumpDriveComponent::CanCruiseModeBeActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.JumpDriveComponent.CanCruiseModeBeActivated");

	UJumpDriveComponent_CanCruiseModeBeActivated_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.JumpDriveComponent.CallOnJumpInCompleted
// (Final, Native, Public, BlueprintCallable)

void UJumpDriveComponent::CallOnJumpInCompleted()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.JumpDriveComponent.CallOnJumpInCompleted");

	UJumpDriveComponent_CallOnJumpInCompleted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.JumpDriveComponent.BoostEnergyDepleted
// (Final, Native, Private)

void UJumpDriveComponent::BoostEnergyDepleted()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.JumpDriveComponent.BoostEnergyDepleted");

	UJumpDriveComponent_BoostEnergyDepleted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.JumpDriveComponent.AddSuppressionActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor**                 SuppresionActor                (Parm, ZeroConstructor, IsPlainOldData)

void UJumpDriveComponent::AddSuppressionActor(class AActor** SuppresionActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.JumpDriveComponent.AddSuppressionActor");

	UJumpDriveComponent_AddSuppressionActor_Params params;
	params.SuppresionActor = SuppresionActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.JumpDriveComponent.AbortJumpFocus
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EJumpAbortType>*   AbortType                      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          DecreaseAfterAbort             (Parm, ZeroConstructor, IsPlainOldData)

void UJumpDriveComponent::AbortJumpFocus(TEnumAsByte<EJumpAbortType>* AbortType, bool* DecreaseAfterAbort)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.JumpDriveComponent.AbortJumpFocus");

	UJumpDriveComponent_AbortJumpFocus_Params params;
	params.AbortType = AbortType;
	params.DecreaseAfterAbort = DecreaseAfterAbort;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.JumpSuppressorComponent.SetEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          Enabled                        (Parm, ZeroConstructor, IsPlainOldData)

void UJumpSuppressorComponent::SetEnabled(bool* Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.JumpSuppressorComponent.SetEnabled");

	UJumpSuppressorComponent_SetEnabled_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.JumpSuppressorComponent.OwnerHealthDepletedJumpSuppressor
// (Final, Native, Protected)
// Parameters:
// class AActor**                 Owner                          (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// class AController**            DamageInstigator               (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DamageAmount                   (Parm, ZeroConstructor, IsPlainOldData)

void UJumpSuppressorComponent::OwnerHealthDepletedJumpSuppressor(class AActor** Owner, class AActor** DamageCauser, class AController** DamageInstigator, float* DamageAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.JumpSuppressorComponent.OwnerHealthDepletedJumpSuppressor");

	UJumpSuppressorComponent_OwnerHealthDepletedJumpSuppressor_Params params;
	params.Owner = Owner;
	params.DamageCauser = DamageCauser;
	params.DamageInstigator = DamageInstigator;
	params.DamageAmount = DamageAmount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.JumpSuppressorComponent.IsEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UJumpSuppressorComponent::IsEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.JumpSuppressorComponent.IsEnabled");

	UJumpSuppressorComponent_IsEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.KeyBinder.UpdateActionBindings
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)

void UKeyBinder::UpdateActionBindings(class UObject** WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.KeyBinder.UpdateActionBindings");

	UKeyBinder_UpdateActionBindings_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.KeyBinder.UI_SetKeyBindingInCell
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int*                           GroupIndex                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FKey*                   Key1                           (ConstParm, Parm)
// struct FKey*                   Mod1                           (ConstParm, Parm)
// struct FKey*                   Key2                           (ConstParm, Parm)
// struct FKey*                   Mod2                           (ConstParm, Parm)
// struct FKeybindingCell         REF_KeyBindingCell             (Parm, OutParm, ReferenceParm)

void UKeyBinder::UI_SetKeyBindingInCell(int* GroupIndex, struct FKey* Key1, struct FKey* Mod1, struct FKey* Key2, struct FKey* Mod2, struct FKeybindingCell* REF_KeyBindingCell)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.KeyBinder.UI_SetKeyBindingInCell");

	UKeyBinder_UI_SetKeyBindingInCell_Params params;
	params.GroupIndex = GroupIndex;
	params.Key1 = Key1;
	params.Mod1 = Mod1;
	params.Key2 = Key2;
	params.Mod2 = Mod2;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (REF_KeyBindingCell != nullptr)
		*REF_KeyBindingCell = params.REF_KeyBindingCell;
}


// Function ES2.KeyBinder.ShouldHaveAssignment
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TEnumAsByte<EInputActionName>* Action                         (Parm, ZeroConstructor, IsPlainOldData)
// int*                           GroupIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKeyBinder::ShouldHaveAssignment(TEnumAsByte<EInputActionName>* Action, int* GroupIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.KeyBinder.ShouldHaveAssignment");

	UKeyBinder_ShouldHaveAssignment_Params params;
	params.Action = Action;
	params.GroupIndex = GroupIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.KeyBinder.ResetKeys
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int*                           GroupIndex                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UKeyBinder::ResetKeys(class UObject** WorldContextObject, int* GroupIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.KeyBinder.ResetKeys");

	UKeyBinder_ResetKeys_Params params;
	params.WorldContextObject = WorldContextObject;
	params.GroupIndex = GroupIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.KeyBinder.RemapKeys
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FKeybindingConfig*      KeybindingUI                   (ConstParm, Parm, OutParm, ReferenceParm)
// struct FKey*                   Key1                           (ConstParm, Parm)
// struct FKey*                   Key2                           (ConstParm, Parm)
// struct FKey*                   Modifier1                      (ConstParm, Parm)
// struct FKey*                   Modifier2                      (ConstParm, Parm)
// bool*                          bInvert                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DeadZone                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Sensitivity                    (Parm, ZeroConstructor, IsPlainOldData)

void UKeyBinder::RemapKeys(class UObject** WorldContextObject, struct FKeybindingConfig* KeybindingUI, struct FKey* Key1, struct FKey* Key2, struct FKey* Modifier1, struct FKey* Modifier2, bool* bInvert, float* DeadZone, float* Sensitivity)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.KeyBinder.RemapKeys");

	UKeyBinder_RemapKeys_Params params;
	params.WorldContextObject = WorldContextObject;
	params.KeybindingUI = KeybindingUI;
	params.Key1 = Key1;
	params.Key2 = Key2;
	params.Modifier1 = Modifier1;
	params.Modifier2 = Modifier2;
	params.bInvert = bInvert;
	params.DeadZone = DeadZone;
	params.Sensitivity = Sensitivity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.KeyBinder.OnKeyDown
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FGeometry*              MyGeometry                     (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FKey*                   Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// int*                           CurrentGroupIndex              (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKeyBinder::OnKeyDown(class UObject** WorldContextObject, struct FGeometry* MyGeometry, struct FKey* Key, int* CurrentGroupIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.KeyBinder.OnKeyDown");

	UKeyBinder_OnKeyDown_Params params;
	params.WorldContextObject = WorldContextObject;
	params.MyGeometry = MyGeometry;
	params.Key = Key;
	params.CurrentGroupIndex = CurrentGroupIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.KeyBinder.MustHaveAssignment
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TEnumAsByte<EInputActionName>* Action                         (Parm, ZeroConstructor, IsPlainOldData)
// int*                           GroupIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKeyBinder::MustHaveAssignment(TEnumAsByte<EInputActionName>* Action, int* GroupIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.KeyBinder.MustHaveAssignment");

	UKeyBinder_MustHaveAssignment_Params params;
	params.Action = Action;
	params.GroupIndex = GroupIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.KeyBinder.IsAxisInverted
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName*                  AxisName                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  GroupName                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKeyBinder::IsAxisInverted(struct FName* AxisName, struct FName* GroupName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.KeyBinder.IsAxisInverted");

	UKeyBinder_IsAxisInverted_Params params;
	params.AxisName = AxisName;
	params.GroupName = GroupName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.KeyBinder.IsAssignedAxisInverted
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName*                  AxisName                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  GroupName                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKeyBinder::IsAssignedAxisInverted(struct FName* AxisName, struct FName* GroupName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.KeyBinder.IsAssignedAxisInverted");

	UKeyBinder_IsAssignedAxisInverted_Params params;
	params.AxisName = AxisName;
	params.GroupName = GroupName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.KeyBinder.InvertAxis
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  AxisName                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  GroupName                      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bInvert                        (Parm, ZeroConstructor, IsPlainOldData)

void UKeyBinder::InvertAxis(struct FName* AxisName, struct FName* GroupName, bool* bInvert)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.KeyBinder.InvertAxis");

	UKeyBinder_InvertAxis_Params params;
	params.AxisName = AxisName;
	params.GroupName = GroupName;
	params.bInvert = bInvert;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.KeyBinder.InitializeKeysFromConfig
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)

void UKeyBinder::InitializeKeysFromConfig(class UObject** WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.KeyBinder.InitializeKeysFromConfig");

	UKeyBinder_InitializeKeysFromConfig_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.KeyBinder.GetModifierForAction
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName*                  ActionOrAxisName               (Parm, ZeroConstructor, IsPlainOldData)
// struct FKey*                   PressedKey                     (Parm)
// struct FKey                    ReturnValue                    (Parm, OutParm, ReturnParm)

struct FKey UKeyBinder::GetModifierForAction(struct FName* ActionOrAxisName, struct FKey* PressedKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.KeyBinder.GetModifierForAction");

	UKeyBinder_GetModifierForAction_Params params;
	params.ActionOrAxisName = ActionOrAxisName;
	params.PressedKey = PressedKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.KeyBinder.GetKeyText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FKey*                   Key                            (Parm)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UKeyBinder::GetKeyText(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.KeyBinder.GetKeyText");

	UKeyBinder_GetKeyText_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.KeyBinder.GetKeyBindingsOfCategory
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FKeybindingConfig> KeybindingsKeyboard            (Parm, OutParm, ZeroConstructor)
// TArray<struct FKeybindingConfig> KeybindingsGamepad             (Parm, OutParm, ZeroConstructor)
// TArray<struct FKeybindingConfig> KeybindingsJoystick            (Parm, OutParm, ZeroConstructor)
// int*                           Category                       (Parm, ZeroConstructor, IsPlainOldData)

void UKeyBinder::GetKeyBindingsOfCategory(int* Category, TArray<struct FKeybindingConfig>* KeybindingsKeyboard, TArray<struct FKeybindingConfig>* KeybindingsGamepad, TArray<struct FKeybindingConfig>* KeybindingsJoystick)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.KeyBinder.GetKeyBindingsOfCategory");

	UKeyBinder_GetKeyBindingsOfCategory_Params params;
	params.Category = Category;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (KeybindingsKeyboard != nullptr)
		*KeybindingsKeyboard = params.KeybindingsKeyboard;
	if (KeybindingsGamepad != nullptr)
		*KeybindingsGamepad = params.KeybindingsGamepad;
	if (KeybindingsJoystick != nullptr)
		*KeybindingsJoystick = params.KeybindingsJoystick;
}


// Function ES2.KeyBinder.GetDisplayNameForAction
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName*                  ActionOrAxisName               (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  GroupName                      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Scale                          (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsAxis                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UKeyBinder::GetDisplayNameForAction(struct FName* ActionOrAxisName, struct FName* GroupName, float* Scale, bool* bIsAxis)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.KeyBinder.GetDisplayNameForAction");

	UKeyBinder_GetDisplayNameForAction_Params params;
	params.ActionOrAxisName = ActionOrAxisName;
	params.GroupName = GroupName;
	params.Scale = Scale;
	params.bIsAxis = bIsAxis;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.KeyBinder.GetAssignedSensitivity
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName*                  AxisName                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  GroupName                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UKeyBinder::GetAssignedSensitivity(struct FName* AxisName, struct FName* GroupName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.KeyBinder.GetAssignedSensitivity");

	UKeyBinder_GetAssignedSensitivity_Params params;
	params.AxisName = AxisName;
	params.GroupName = GroupName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.KeyBinder.GetAssignedDeadzone
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName*                  AxisName                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  GroupName                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UKeyBinder::GetAssignedDeadzone(struct FName* AxisName, struct FName* GroupName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.KeyBinder.GetAssignedDeadzone");

	UKeyBinder_GetAssignedDeadzone_Params params;
	params.AxisName = AxisName;
	params.GroupName = GroupName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.KeyBinder.ConfirmChanges
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)

void UKeyBinder::ConfirmChanges(class UObject** WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.KeyBinder.ConfirmChanges");

	UKeyBinder_ConfirmChanges_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.KeyBinder.CompareKeybindings
// (Final, Native, Protected, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FKeybindingConfig*      Config1                        (ConstParm, Parm, OutParm, ReferenceParm)
// struct FKeybindingConfig*      Config2                        (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKeyBinder::CompareKeybindings(struct FKeybindingConfig* Config1, struct FKeybindingConfig* Config2)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.KeyBinder.CompareKeybindings");

	UKeyBinder_CompareKeybindings_Params params;
	params.Config1 = Config1;
	params.Config2 = Config2;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.KeyBinder.CheckForInvertedAxes
// (Final, Native, Public, BlueprintCallable)

void UKeyBinder::CheckForInvertedAxes()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.KeyBinder.CheckForInvertedAxes");

	UKeyBinder_CheckForInvertedAxes_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.KeyBinder.CanDoAssignment
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FKeybindingConfig       Config                         (Parm, OutParm, ReferenceParm)
// struct FKey*                   Key                            (Parm)
// struct FKey*                   Modifier                       (Parm)
// int*                           BindingIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKeyBinder::CanDoAssignment(struct FKey* Key, struct FKey* Modifier, int* BindingIndex, struct FKeybindingConfig* Config)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.KeyBinder.CanDoAssignment");

	UKeyBinder_CanDoAssignment_Params params;
	params.Key = Key;
	params.Modifier = Modifier;
	params.BindingIndex = BindingIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Config != nullptr)
		*Config = params.Config;

	return params.ReturnValue;
}


// Function ES2.LayeredSong.GetLayerTransition
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int*                           From                           (Parm, ZeroConstructor, IsPlainOldData)
// int*                           To                             (Parm, ZeroConstructor, IsPlainOldData)
// struct FLayerTransition        ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FLayerTransition ULayeredSong::GetLayerTransition(int* From, int* To)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.LayeredSong.GetLayerTransition");

	ULayeredSong_GetLayerTransition_Params params;
	params.From = From;
	params.To = To;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.Location.UpdateLocationData
// (Final, Native, Public, BlueprintCallable)

void ALocation::UpdateLocationData()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.Location.UpdateLocationData");

	ALocation_UpdateLocationData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.Location.OnRefreshIndicatorsAndVisibility
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void ALocation::OnRefreshIndicatorsAndVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.Location.OnRefreshIndicatorsAndVisibility");

	ALocation_OnRefreshIndicatorsAndVisibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.Location.HasParentLocation
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ALocation::HasParentLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.Location.HasParentLocation");

	ALocation_HasParentLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.Location.EnterLocation
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void ALocation::EnterLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.Location.EnterLocation");

	ALocation_EnterLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.Location.DelayedEnterLocation
// (Final, Native, Private)

void ALocation::DelayedEnterLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.Location.DelayedEnterLocation");

	ALocation_DelayedEnterLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.LocationLib.SpawnWingmen
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FRandomStream           RandomStream                   (Parm, OutParm, ZeroConstructor, ReferenceParm)

void ULocationLib::STATIC_SpawnWingmen(class UObject** WorldContextObject, struct FRandomStream* RandomStream)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.LocationLib.SpawnWingmen");

	ULocationLib_SpawnWingmen_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RandomStream != nullptr)
		*RandomStream = params.RandomStream;
}


// Function ES2.LocationLib.SaveLocationState
// (Final, Native, Static, Public, BlueprintCallable)

void ULocationLib::STATIC_SaveLocationState()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.LocationLib.SaveLocationState");

	ULocationLib_SaveLocationState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.LocationLib.FindRandomSpawnLocationOnLineSegment
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject**                WorldContext                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FRandomStream           RandomStream                   (Parm, OutParm, ZeroConstructor)
// struct FVector                 Out_Vector                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector*                LineStart                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector*                LineEnd                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float*                         CollisionTestRadius            (Parm, ZeroConstructor, IsPlainOldData)
// int*                           NumFindAttempts                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ULocationLib::STATIC_FindRandomSpawnLocationOnLineSegment(class UObject** WorldContext, struct FVector* LineStart, struct FVector* LineEnd, float* CollisionTestRadius, int* NumFindAttempts, struct FRandomStream* RandomStream, struct FVector* Out_Vector)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.LocationLib.FindRandomSpawnLocationOnLineSegment");

	ULocationLib_FindRandomSpawnLocationOnLineSegment_Params params;
	params.WorldContext = WorldContext;
	params.LineStart = LineStart;
	params.LineEnd = LineEnd;
	params.CollisionTestRadius = CollisionTestRadius;
	params.NumFindAttempts = NumFindAttempts;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RandomStream != nullptr)
		*RandomStream = params.RandomStream;
	if (Out_Vector != nullptr)
		*Out_Vector = params.Out_Vector;

	return params.ReturnValue;
}


// Function ES2.LocationLib.FindRandomSpawnLocationFromLocationInfo
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FRandomStream           RandomStream                   (Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FTransform              Out_Transform                  (Parm, OutParm, IsPlainOldData)
// float*                         CollisionTestRadius            (Parm, ZeroConstructor, IsPlainOldData)
// int*                           NumFindAttempts                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ULocationLib::STATIC_FindRandomSpawnLocationFromLocationInfo(class UObject** WorldContextObject, float* CollisionTestRadius, int* NumFindAttempts, struct FRandomStream* RandomStream, struct FTransform* Out_Transform)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.LocationLib.FindRandomSpawnLocationFromLocationInfo");

	ULocationLib_FindRandomSpawnLocationFromLocationInfo_Params params;
	params.WorldContextObject = WorldContextObject;
	params.CollisionTestRadius = CollisionTestRadius;
	params.NumFindAttempts = NumFindAttempts;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RandomStream != nullptr)
		*RandomStream = params.RandomStream;
	if (Out_Transform != nullptr)
		*Out_Transform = params.Out_Transform;

	return params.ReturnValue;
}


// Function ES2.LocationLib.FindRandomSpawnLocationAroundPosition
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FRandomStream           RandomStream                   (Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FTransform              Out_Transform                  (Parm, OutParm, IsPlainOldData)
// struct FVector*                SearchCenter                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float*                         SearchRadius                   (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CollisionTestRadius            (Parm, ZeroConstructor, IsPlainOldData)
// int*                           NumFindAttempts                (Parm, ZeroConstructor, IsPlainOldData)
// float*                         MinimumRadius                  (Parm, ZeroConstructor, IsPlainOldData)
// float*                         MinMaxZ                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ULocationLib::STATIC_FindRandomSpawnLocationAroundPosition(class UObject** WorldContextObject, struct FVector* SearchCenter, float* SearchRadius, float* CollisionTestRadius, int* NumFindAttempts, float* MinimumRadius, float* MinMaxZ, struct FRandomStream* RandomStream, struct FTransform* Out_Transform)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.LocationLib.FindRandomSpawnLocationAroundPosition");

	ULocationLib_FindRandomSpawnLocationAroundPosition_Params params;
	params.WorldContextObject = WorldContextObject;
	params.SearchCenter = SearchCenter;
	params.SearchRadius = SearchRadius;
	params.CollisionTestRadius = CollisionTestRadius;
	params.NumFindAttempts = NumFindAttempts;
	params.MinimumRadius = MinimumRadius;
	params.MinMaxZ = MinMaxZ;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RandomStream != nullptr)
		*RandomStream = params.RandomStream;
	if (Out_Transform != nullptr)
		*Out_Transform = params.Out_Transform;

	return params.ReturnValue;
}


// Function ES2.LootCollectComponent.SetEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bSetEnabled                    (Parm, ZeroConstructor, IsPlainOldData)

void ULootCollectComponent::SetEnabled(bool* bSetEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.LootCollectComponent.SetEnabled");

	ULootCollectComponent_SetEnabled_Params params;
	params.bSetEnabled = bSetEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.LootCollectComponent.OnEndOverlapCollect
// (Final, Native, Protected)
// Parameters:
// class UPrimitiveComponent**    OverlappedComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int*                           OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void ULootCollectComponent::OnEndOverlapCollect(class UPrimitiveComponent** OverlappedComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.LootCollectComponent.OnEndOverlapCollect");

	ULootCollectComponent_OnEndOverlapCollect_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.LootCollectComponent.OnBeginOverlapCollect
// (Final, Native, Protected, HasOutParms)
// Parameters:
// class UPrimitiveComponent**    OverlappedComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int*                           OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ULootCollectComponent::OnBeginOverlapCollect(class UPrimitiveComponent** OverlappedComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex, bool* bFromSweep, struct FHitResult* SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.LootCollectComponent.OnBeginOverlapCollect");

	ULootCollectComponent_OnBeginOverlapCollect_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.LootDropComponent.OwnerHealthDepleted
// (Final, Native, Private)
// Parameters:
// class AActor**                 Owner                          (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// class AController**            DamageInstigator               (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DamageAmount                   (Parm, ZeroConstructor, IsPlainOldData)

void ULootDropComponent::OwnerHealthDepleted(class AActor** Owner, class AActor** DamageCauser, class AController** DamageInstigator, float* DamageAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.LootDropComponent.OwnerHealthDepleted");

	ULootDropComponent_OwnerHealthDepleted_Params params;
	params.Owner = Owner;
	params.DamageCauser = DamageCauser;
	params.DamageInstigator = DamageInstigator;
	params.DamageAmount = DamageAmount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.LootDropComponent.InitLootDrop
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int*                           ItemLevelOverride              (Parm, ZeroConstructor, IsPlainOldData)

void ULootDropComponent::InitLootDrop(int* ItemLevelOverride)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.LootDropComponent.InitLootDrop");

	ULootDropComponent_InitLootDrop_Params params;
	params.ItemLevelOverride = ItemLevelOverride;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.LootDropComponent.GetTotalLootDropAmount
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ULootDropComponent::GetTotalLootDropAmount()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.LootDropComponent.GetTotalLootDropAmount");

	ULootDropComponent_GetTotalLootDropAmount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.LootDropComponent.EmptyLootToDrop
// (Final, Native, Public, BlueprintCallable)

void ULootDropComponent::EmptyLootToDrop()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.LootDropComponent.EmptyLootToDrop");

	ULootDropComponent_EmptyLootToDrop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.LootDropComponent.DropLoot
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor**                 OwningActor                    (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          AllowSubsequentDrops           (Parm, ZeroConstructor, IsPlainOldData)

void ULootDropComponent::DropLoot(class AActor** OwningActor, bool* AllowSubsequentDrops)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.LootDropComponent.DropLoot");

	ULootDropComponent_DropLoot_Params params;
	params.OwningActor = OwningActor;
	params.AllowSubsequentDrops = AllowSubsequentDrops;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.LootDropComponent.AddLootToDrop
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FPickupEntry*           NewLoot                        (Parm)
// bool*                          ClearOldLoot                   (Parm, ZeroConstructor, IsPlainOldData)

void ULootDropComponent::AddLootToDrop(struct FPickupEntry* NewLoot, bool* ClearOldLoot)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.LootDropComponent.AddLootToDrop");

	ULootDropComponent_AddLootToDrop_Params params;
	params.NewLoot = NewLoot;
	params.ClearOldLoot = ClearOldLoot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.LootDropComponent.AddLootFromItems
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<class UItem*>*          Items                          (Parm, ZeroConstructor)
// bool*                          ClearOldLoot                   (Parm, ZeroConstructor, IsPlainOldData)

void ULootDropComponent::AddLootFromItems(TArray<class UItem*>* Items, bool* ClearOldLoot)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.LootDropComponent.AddLootFromItems");

	ULootDropComponent_AddLootFromItems_Params params;
	params.Items = Items;
	params.ClearOldLoot = ClearOldLoot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.MapLib.WasLocationVisited
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName*                  LocationID                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMapLib::STATIC_WasLocationVisited(struct FName* LocationID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.MapLib.WasLocationVisited");

	UMapLib_WasLocationVisited_Params params;
	params.LocationID = LocationID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.MapLib.SpawnTemporaryLocation
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FLocationData*          TemporaryLocation              (ConstParm, Parm, OutParm, ReferenceParm)
// bool*                          bDontSpawnIfHidden             (Parm, ZeroConstructor, IsPlainOldData)
// class ALocation*               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ALocation* UMapLib::STATIC_SpawnTemporaryLocation(class UObject** WorldContextObject, struct FLocationData* TemporaryLocation, bool* bDontSpawnIfHidden)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.MapLib.SpawnTemporaryLocation");

	UMapLib_SpawnTemporaryLocation_Params params;
	params.WorldContextObject = WorldContextObject;
	params.TemporaryLocation = TemporaryLocation;
	params.bDontSpawnIfHidden = bDontSpawnIfHidden;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.MapLib.SpawnTemporaryEventLocationInFrontOfPlayer
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class ALocation*               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ALocation* UMapLib::STATIC_SpawnTemporaryEventLocationInFrontOfPlayer(class UObject** WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.MapLib.SpawnTemporaryEventLocationInFrontOfPlayer");

	UMapLib_SpawnTemporaryEventLocationInFrontOfPlayer_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.MapLib.SetCustomWaypoint
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName*                  LocationID                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UMapLib::STATIC_SetCustomWaypoint(struct FName* LocationID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.MapLib.SetCustomWaypoint");

	UMapLib_SetCustomWaypoint_Params params;
	params.LocationID = LocationID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.MapLib.RefreshMissionAndWaypointIndicators
// (Final, Native, Static, Public, BlueprintCallable)

void UMapLib::STATIC_RefreshMissionAndWaypointIndicators()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.MapLib.RefreshMissionAndWaypointIndicators");

	UMapLib_RefreshMissionAndWaypointIndicators_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.MapLib.IsSurfaceLocation
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName*                  LocationID                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMapLib::STATIC_IsSurfaceLocation(struct FName* LocationID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.MapLib.IsSurfaceLocation");

	UMapLib_IsSurfaceLocation_Params params;
	params.LocationID = LocationID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.MapLib.IsPlayerAtLocation
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName*                  LocationID                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMapLib::STATIC_IsPlayerAtLocation(struct FName* LocationID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.MapLib.IsPlayerAtLocation");

	UMapLib_IsPlayerAtLocation_Params params;
	params.LocationID = LocationID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.MapLib.IsCurrentLocationDataValid
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject**                WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMapLib::STATIC_IsCurrentLocationDataValid(class UObject** WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.MapLib.IsCurrentLocationDataValid");

	UMapLib_IsCurrentLocationDataValid_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.MapLib.InvalidateTemporaryLocation
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName*                  LocationID                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMapLib::STATIC_InvalidateTemporaryLocation(struct FName* LocationID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.MapLib.InvalidateTemporaryLocation");

	UMapLib_InvalidateTemporaryLocation_Params params;
	params.LocationID = LocationID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.MapLib.HideTemporaryLocation
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName*                  LocationID                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMapLib::STATIC_HideTemporaryLocation(struct FName* LocationID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.MapLib.HideTemporaryLocation");

	UMapLib_HideTemporaryLocation_Params params;
	params.LocationID = LocationID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.MapLib.GetTravelDistance
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName*                  LocationA                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FName*                  LocationB                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UMapLib::STATIC_GetTravelDistance(struct FName* LocationA, struct FName* LocationB)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.MapLib.GetTravelDistance");

	UMapLib_GetTravelDistance_Params params;
	params.LocationA = LocationA;
	params.LocationB = LocationB;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.MapLib.GetSystemRegionSecurity
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TEnumAsByte<ESystemRegion>*    SystemRegion                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UMapLib::STATIC_GetSystemRegionSecurity(TEnumAsByte<ESystemRegion>* SystemRegion)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.MapLib.GetSystemRegionSecurity");

	UMapLib_GetSystemRegionSecurity_Params params;
	params.SystemRegion = SystemRegion;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.MapLib.GetSystemRegionOfLocation
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName*                  LocationID                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// TEnumAsByte<ESystemRegion>     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ESystemRegion> UMapLib::STATIC_GetSystemRegionOfLocation(struct FName* LocationID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.MapLib.GetSystemRegionOfLocation");

	UMapLib_GetSystemRegionOfLocation_Params params;
	params.LocationID = LocationID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.MapLib.GetSystemRegionLevel
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TEnumAsByte<ESystemRegion>*    SystemRegion                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UMapLib::STATIC_GetSystemRegionLevel(TEnumAsByte<ESystemRegion>* SystemRegion)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.MapLib.GetSystemRegionLevel");

	UMapLib_GetSystemRegionLevel_Params params;
	params.SystemRegion = SystemRegion;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.MapLib.GetSystemRegionAtPosition
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName*                  SystemID                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector*                Position                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// TEnumAsByte<ESystemRegion>     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ESystemRegion> UMapLib::STATIC_GetSystemRegionAtPosition(struct FName* SystemID, struct FVector* Position)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.MapLib.GetSystemRegionAtPosition");

	UMapLib_GetSystemRegionAtPosition_Params params;
	params.SystemID = SystemID;
	params.Position = Position;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.MapLib.GetSystemData
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName*                  SystemID                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FSystemData             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSystemData UMapLib::STATIC_GetSystemData(struct FName* SystemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.MapLib.GetSystemData");

	UMapLib_GetSystemData_Params params;
	params.SystemID = SystemID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.MapLib.GetSystemActor
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject**                WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  SystemID                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class ASystem*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ASystem* UMapLib::STATIC_GetSystemActor(class UObject** WorldContextObject, struct FName* SystemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.MapLib.GetSystemActor");

	UMapLib_GetSystemActor_Params params;
	params.WorldContextObject = WorldContextObject;
	params.SystemID = SystemID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.MapLib.GetSurfaceParent
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName*                  LocationID                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FLocationData           ReturnValue                    (Parm, OutParm, ReturnParm)

struct FLocationData UMapLib::STATIC_GetSurfaceParent(struct FName* LocationID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.MapLib.GetSurfaceParent");

	UMapLib_GetSurfaceParent_Params params;
	params.LocationID = LocationID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.MapLib.GetSurfaceNeighbors
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName*                  LocationID                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// TArray<struct FLocationData>   Neighbors_OUT                  (Parm, OutParm, ZeroConstructor)

void UMapLib::STATIC_GetSurfaceNeighbors(struct FName* LocationID, TArray<struct FLocationData>* Neighbors_OUT)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.MapLib.GetSurfaceNeighbors");

	UMapLib_GetSurfaceNeighbors_Params params;
	params.LocationID = LocationID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Neighbors_OUT != nullptr)
		*Neighbors_OUT = params.Neighbors_OUT;
}


// Function ES2.MapLib.GetSurfaceLocations
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName*                  LocationID                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// TArray<struct FLocationData>   SurfaceLocations_OUT           (Parm, OutParm, ZeroConstructor)

void UMapLib::STATIC_GetSurfaceLocations(struct FName* LocationID, TArray<struct FLocationData>* SurfaceLocations_OUT)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.MapLib.GetSurfaceLocations");

	UMapLib_GetSurfaceLocations_Params params;
	params.LocationID = LocationID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SurfaceLocations_OUT != nullptr)
		*SurfaceLocations_OUT = params.SurfaceLocations_OUT;
}


// Function ES2.MapLib.GetStationName
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName*                  StationID                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UMapLib::STATIC_GetStationName(struct FName* StationID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.MapLib.GetStationName");

	UMapLib_GetStationName_Params params;
	params.StationID = StationID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.MapLib.GetStationFaction
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName*                  StationID                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// TEnumAsByte<EFactions>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<EFactions> UMapLib::STATIC_GetStationFaction(struct FName* StationID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.MapLib.GetStationFaction");

	UMapLib_GetStationFaction_Params params;
	params.StationID = StationID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.MapLib.GetSpaceObject
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName*                  ID                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FLocationSpaceObject    ReturnValue                    (Parm, OutParm, ReturnParm)

struct FLocationSpaceObject UMapLib::STATIC_GetSpaceObject(struct FName* ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.MapLib.GetSpaceObject");

	UMapLib_GetSpaceObject_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.MapLib.GetShortestPath
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName*                  StartLocation                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FName*                  EndLocation                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// TArray<struct FName>           Path_OUT                       (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMapLib::STATIC_GetShortestPath(struct FName* StartLocation, struct FName* EndLocation, TArray<struct FName>* Path_OUT)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.MapLib.GetShortestPath");

	UMapLib_GetShortestPath_Params params;
	params.StartLocation = StartLocation;
	params.EndLocation = EndLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Path_OUT != nullptr)
		*Path_OUT = params.Path_OUT;

	return params.ReturnValue;
}


// Function ES2.MapLib.GetRegionCellSize
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName*                  SystemID                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UMapLib::STATIC_GetRegionCellSize(struct FName* SystemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.MapLib.GetRegionCellSize");

	UMapLib_GetRegionCellSize_Params params;
	params.SystemID = SystemID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.MapLib.GetNumSystems
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UMapLib::STATIC_GetNumSystems()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.MapLib.GetNumSystems");

	UMapLib_GetNumSystems_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.MapLib.GetNumRegionCellsPerRow
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName*                  SystemID                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UMapLib::STATIC_GetNumRegionCellsPerRow(struct FName* SystemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.MapLib.GetNumRegionCellsPerRow");

	UMapLib_GetNumRegionCellsPerRow_Params params;
	params.SystemID = SystemID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.MapLib.GetLocationName
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName*                  LocationID                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UMapLib::STATIC_GetLocationName(struct FName* LocationID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.MapLib.GetLocationName");

	UMapLib_GetLocationName_Params params;
	params.LocationID = LocationID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.MapLib.GetLocationIndicators
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName*                  LocationID                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// TMap<TEnumAsByte<EIndicator>, bool> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TMap<TEnumAsByte<EIndicator>, bool> UMapLib::STATIC_GetLocationIndicators(struct FName* LocationID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.MapLib.GetLocationIndicators");

	UMapLib_GetLocationIndicators_Params params;
	params.LocationID = LocationID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.MapLib.GetLocationDataOfSystem
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName*                  SystemID                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// TArray<struct FLocationData>   Locations_OUT                  (Parm, OutParm, ZeroConstructor)
// bool*                          bIncludeTemporaryLocations     (Parm, ZeroConstructor, IsPlainOldData)

void UMapLib::STATIC_GetLocationDataOfSystem(struct FName* SystemID, bool* bIncludeTemporaryLocations, TArray<struct FLocationData>* Locations_OUT)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.MapLib.GetLocationDataOfSystem");

	UMapLib_GetLocationDataOfSystem_Params params;
	params.SystemID = SystemID;
	params.bIncludeTemporaryLocations = bIncludeTemporaryLocations;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Locations_OUT != nullptr)
		*Locations_OUT = params.Locations_OUT;
}


// Function ES2.MapLib.GetLocationData
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName*                  LocationID                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FLocationData           ReturnValue                    (Parm, OutParm, ReturnParm)

struct FLocationData UMapLib::STATIC_GetLocationData(struct FName* LocationID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.MapLib.GetLocationData");

	UMapLib_GetLocationData_Params params;
	params.LocationID = LocationID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.MapLib.GetIngameMissionIndicatorLocations
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName*                  MissionID                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FName*                  PlayerLocationID               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// TArray<struct FName>           LocationIDs_OUT                (Parm, OutParm, ZeroConstructor)

void UMapLib::STATIC_GetIngameMissionIndicatorLocations(struct FName* MissionID, struct FName* PlayerLocationID, TArray<struct FName>* LocationIDs_OUT)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.MapLib.GetIngameMissionIndicatorLocations");

	UMapLib_GetIngameMissionIndicatorLocations_Params params;
	params.MissionID = MissionID;
	params.PlayerLocationID = PlayerLocationID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LocationIDs_OUT != nullptr)
		*LocationIDs_OUT = params.LocationIDs_OUT;
}


// Function ES2.MapLib.GetDockableStationTemplatesAtLocation
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName*                  LocationID                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// TArray<struct FDockableStationTemplate> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FDockableStationTemplate> UMapLib::STATIC_GetDockableStationTemplatesAtLocation(struct FName* LocationID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.MapLib.GetDockableStationTemplatesAtLocation");

	UMapLib_GetDockableStationTemplatesAtLocation_Params params;
	params.LocationID = LocationID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.MapLib.GetDockableStationTemplates
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TEnumAsByte<EFactions>*        Faction                        (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FName>*          FilterSystems                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FDockableStationTemplate> Stations_OUT                   (Parm, OutParm, ZeroConstructor)

void UMapLib::STATIC_GetDockableStationTemplates(TEnumAsByte<EFactions>* Faction, TArray<struct FName>* FilterSystems, TArray<struct FDockableStationTemplate>* Stations_OUT)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.MapLib.GetDockableStationTemplates");

	UMapLib_GetDockableStationTemplates_Params params;
	params.Faction = Faction;
	params.FilterSystems = FilterSystems;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Stations_OUT != nullptr)
		*Stations_OUT = params.Stations_OUT;
}


// Function ES2.MapLib.GetCustomWaypoint
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UMapLib::STATIC_GetCustomWaypoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.MapLib.GetCustomWaypoint");

	UMapLib_GetCustomWaypoint_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.MapLib.GetCurrentSystemRegionSecurity
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject**                WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UMapLib::STATIC_GetCurrentSystemRegionSecurity(class UObject** WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.MapLib.GetCurrentSystemRegionSecurity");

	UMapLib_GetCurrentSystemRegionSecurity_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.MapLib.GetCurrentSystemRegionLevel
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject**                WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UMapLib::STATIC_GetCurrentSystemRegionLevel(class UObject** WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.MapLib.GetCurrentSystemRegionLevel");

	UMapLib_GetCurrentSystemRegionLevel_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.MapLib.GetCurrentSystemRegion
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject**                WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESystemRegion>     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ESystemRegion> UMapLib::STATIC_GetCurrentSystemRegion(class UObject** WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.MapLib.GetCurrentSystemRegion");

	UMapLib_GetCurrentSystemRegion_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.MapLib.GetCurrentSystemActor
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject**                WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class ASystem*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ASystem* UMapLib::STATIC_GetCurrentSystemActor(class UObject** WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.MapLib.GetCurrentSystemActor");

	UMapLib_GetCurrentSystemActor_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.MapLib.GetCurrentLocationLevel
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject**                WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UMapLib::STATIC_GetCurrentLocationLevel(class UObject** WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.MapLib.GetCurrentLocationLevel");

	UMapLib_GetCurrentLocationLevel_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.MapLib.GetCurrentLocationData
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject**                WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FLocationData           ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)

struct FLocationData UMapLib::STATIC_GetCurrentLocationData(class UObject** WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.MapLib.GetCurrentLocationData");

	UMapLib_GetCurrentLocationData_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.MapLib.GetClosestActorOfClass
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor**                 OriginActor                    (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 ClassToSearchFor               (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UMapLib::STATIC_GetClosestActorOfClass(class AActor** OriginActor, class UClass** ClassToSearchFor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.MapLib.GetClosestActorOfClass");

	UMapLib_GetClosestActorOfClass_Params params;
	params.OriginActor = OriginActor;
	params.ClassToSearchFor = ClassToSearchFor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.MapLib.GetAdjacentSystems
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName*                  SystemID                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int*                           SystemJumpDistance             (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FSystemData>     Systems_OUT                    (Parm, OutParm, ZeroConstructor)

void UMapLib::STATIC_GetAdjacentSystems(struct FName* SystemID, int* SystemJumpDistance, TArray<struct FSystemData>* Systems_OUT)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.MapLib.GetAdjacentSystems");

	UMapLib_GetAdjacentSystems_Params params;
	params.SystemID = SystemID;
	params.SystemJumpDistance = SystemJumpDistance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Systems_OUT != nullptr)
		*Systems_OUT = params.Systems_OUT;
}


// Function ES2.MapLib.GetAccessibleLocations
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName*                  LocationID                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool*                          bIncludeJumpGateConnections    (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FLocationData>   Locations_OUT                  (Parm, OutParm, ZeroConstructor)

void UMapLib::STATIC_GetAccessibleLocations(struct FName* LocationID, bool* bIncludeJumpGateConnections, TArray<struct FLocationData>* Locations_OUT)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.MapLib.GetAccessibleLocations");

	UMapLib_GetAccessibleLocations_Params params;
	params.LocationID = LocationID;
	params.bIncludeJumpGateConnections = bIncludeJumpGateConnections;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Locations_OUT != nullptr)
		*Locations_OUT = params.Locations_OUT;
}


// Function ES2.MapLib.EnterInterceptionLocationAtPlayerPosition
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class ALocation*               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ALocation* UMapLib::STATIC_EnterInterceptionLocationAtPlayerPosition(class UObject** WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.MapLib.EnterInterceptionLocationAtPlayerPosition");

	UMapLib_EnterInterceptionLocationAtPlayerPosition_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.MapLib.CreateAndAddTemporaryLocationAtPosition
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FName*                  SystemID                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector*                Position                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// TEnumAsByte<ELocationCategory>* LocationCategory               (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bTemporaryEvent                (Parm, ZeroConstructor, IsPlainOldData)
// struct FRandomStream*          RandomStream                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FLocationData           ReturnValue                    (Parm, OutParm, ReturnParm)

struct FLocationData UMapLib::STATIC_CreateAndAddTemporaryLocationAtPosition(struct FName* SystemID, struct FVector* Position, TEnumAsByte<ELocationCategory>* LocationCategory, bool* bTemporaryEvent, struct FRandomStream* RandomStream)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.MapLib.CreateAndAddTemporaryLocationAtPosition");

	UMapLib_CreateAndAddTemporaryLocationAtPosition_Params params;
	params.SystemID = SystemID;
	params.Position = Position;
	params.LocationCategory = LocationCategory;
	params.bTemporaryEvent = bTemporaryEvent;
	params.RandomStream = RandomStream;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.MapLib.CollectAndWriteSystemActorData
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMapLib::STATIC_CollectAndWriteSystemActorData(class UObject** WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.MapLib.CollectAndWriteSystemActorData");

	UMapLib_CollectAndWriteSystemActorData_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.MapLib.CollectAndWriteLocationActorData
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMapLib::STATIC_CollectAndWriteLocationActorData(class UObject** WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.MapLib.CollectAndWriteLocationActorData");

	UMapLib_CollectAndWriteLocationActorData_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.MapLib.ClearCustomWaypoint
// (Final, Native, Static, Public, BlueprintCallable)

void UMapLib::STATIC_ClearCustomWaypoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.MapLib.ClearCustomWaypoint");

	UMapLib_ClearCustomWaypoint_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.MapLib.CheatSpawnTemporaryLocation
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Position                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class ALocation*               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ALocation* UMapLib::STATIC_CheatSpawnTemporaryLocation(class UObject** WorldContextObject, struct FVector* Position)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.MapLib.CheatSpawnTemporaryLocation");

	UMapLib_CheatSpawnTemporaryLocation_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Position = Position;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.MathLib.RoundToNearestMultiple
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int*                           numToRound                     (Parm, ZeroConstructor, IsPlainOldData)
// int*                           multiple                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UMathLib::STATIC_RoundToNearestMultiple(int* numToRound, int* multiple)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.MathLib.RoundToNearestMultiple");

	UMathLib_RoundToNearestMultiple_Params params;
	params.numToRound = numToRound;
	params.multiple = multiple;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.MathLib.RandomUnitVectorInEllipticalConeInRadiansMinMax
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector*                ConeDir                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         MinYawInRadians                (Parm, ZeroConstructor, IsPlainOldData)
// float*                         MaxYawInRadians                (Parm, ZeroConstructor, IsPlainOldData)
// float*                         MinPitchInRadians              (Parm, ZeroConstructor, IsPlainOldData)
// float*                         MaxPitchInRadians              (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UMathLib::STATIC_RandomUnitVectorInEllipticalConeInRadiansMinMax(struct FVector* ConeDir, float* MinYawInRadians, float* MaxYawInRadians, float* MinPitchInRadians, float* MaxPitchInRadians)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.MathLib.RandomUnitVectorInEllipticalConeInRadiansMinMax");

	UMathLib_RandomUnitVectorInEllipticalConeInRadiansMinMax_Params params;
	params.ConeDir = ConeDir;
	params.MinYawInRadians = MinYawInRadians;
	params.MaxYawInRadians = MaxYawInRadians;
	params.MinPitchInRadians = MinPitchInRadians;
	params.MaxPitchInRadians = MaxPitchInRadians;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.MathLib.RandomUnitVectorInEllipticalConeInDegreesMinMax
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector*                ConeDir                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         MinYawInDegrees                (Parm, ZeroConstructor, IsPlainOldData)
// float*                         MaxYawInDegrees                (Parm, ZeroConstructor, IsPlainOldData)
// float*                         MinPitchInDegrees              (Parm, ZeroConstructor, IsPlainOldData)
// float*                         MaxPitchInDegrees              (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UMathLib::STATIC_RandomUnitVectorInEllipticalConeInDegreesMinMax(struct FVector* ConeDir, float* MinYawInDegrees, float* MaxYawInDegrees, float* MinPitchInDegrees, float* MaxPitchInDegrees)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.MathLib.RandomUnitVectorInEllipticalConeInDegreesMinMax");

	UMathLib_RandomUnitVectorInEllipticalConeInDegreesMinMax_Params params;
	params.ConeDir = ConeDir;
	params.MinYawInDegrees = MinYawInDegrees;
	params.MaxYawInDegrees = MaxYawInDegrees;
	params.MinPitchInDegrees = MinPitchInDegrees;
	params.MaxPitchInDegrees = MaxPitchInDegrees;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.MathLib.RandomPointInSphericalShellFromStream
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FRandomStream           RandomStream                   (Parm, OutParm, ZeroConstructor, ReferenceParm)
// float*                         InnerRadius                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         OuterRadius                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                SphereCenter                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UMathLib::STATIC_RandomPointInSphericalShellFromStream(float* InnerRadius, float* OuterRadius, struct FVector* SphereCenter, struct FRandomStream* RandomStream)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.MathLib.RandomPointInSphericalShellFromStream");

	UMathLib_RandomPointInSphericalShellFromStream_Params params;
	params.InnerRadius = InnerRadius;
	params.OuterRadius = OuterRadius;
	params.SphereCenter = SphereCenter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RandomStream != nullptr)
		*RandomStream = params.RandomStream;

	return params.ReturnValue;
}


// Function ES2.MathLib.RandomPointInSphericalShell
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// float*                         InnerRadius                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         OuterRadius                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                SphereCenter                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UMathLib::STATIC_RandomPointInSphericalShell(float* InnerRadius, float* OuterRadius, struct FVector* SphereCenter)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.MathLib.RandomPointInSphericalShell");

	UMathLib_RandomPointInSphericalShell_Params params;
	params.InnerRadius = InnerRadius;
	params.OuterRadius = OuterRadius;
	params.SphereCenter = SphereCenter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.MathLib.RandomPointInSphereFromStream
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FRandomStream           RandomStream                   (Parm, OutParm, ZeroConstructor, ReferenceParm)
// float*                         Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                SphereCenter                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UMathLib::STATIC_RandomPointInSphereFromStream(float* Radius, struct FVector* SphereCenter, struct FRandomStream* RandomStream)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.MathLib.RandomPointInSphereFromStream");

	UMathLib_RandomPointInSphereFromStream_Params params;
	params.Radius = Radius;
	params.SphereCenter = SphereCenter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RandomStream != nullptr)
		*RandomStream = params.RandomStream;

	return params.ReturnValue;
}


// Function ES2.MathLib.RandomPointInSphere
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// float*                         Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                SphereCenter                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UMathLib::STATIC_RandomPointInSphere(float* Radius, struct FVector* SphereCenter)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.MathLib.RandomPointInSphere");

	UMathLib_RandomPointInSphere_Params params;
	params.Radius = Radius;
	params.SphereCenter = SphereCenter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.MathLib.MetersToUnrealUnits
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float*                         ValueInMeter                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bTravelmModeScale              (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UMathLib::STATIC_MetersToUnrealUnits(float* ValueInMeter, bool* bTravelmModeScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.MathLib.MetersToUnrealUnits");

	UMathLib_MetersToUnrealUnits_Params params;
	params.ValueInMeter = ValueInMeter;
	params.bTravelmModeScale = bTravelmModeScale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.MathLib.InFloatRange
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FFloatRange*            Range                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float*                         Value                          (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          ForceInclusiveBounds           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMathLib::STATIC_InFloatRange(struct FFloatRange* Range, float* Value, bool* ForceInclusiveBounds)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.MathLib.InFloatRange");

	UMathLib_InFloatRange_Params params;
	params.Range = Range;
	params.Value = Value;
	params.ForceInclusiveBounds = ForceInclusiveBounds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.MathLib.GetSphereVolume
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float*                         SphereRadius                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UMathLib::STATIC_GetSphereVolume(float* SphereRadius)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.MathLib.GetSphereVolume");

	UMathLib_GetSphereVolume_Params params;
	params.SphereRadius = SphereRadius;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.MathLib.GetMaxRandomInt
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UMathLib::STATIC_GetMaxRandomInt()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.MathLib.GetMaxRandomInt");

	UMathLib_GetMaxRandomInt_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.MathLib.GetLineSegmentBetween
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor**                 ActorStart                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 ActorEnd                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UMathLib::STATIC_GetLineSegmentBetween(class AActor** ActorStart, class AActor** ActorEnd)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.MathLib.GetLineSegmentBetween");

	UMathLib_GetLineSegmentBetween_Params params;
	params.ActorStart = ActorStart;
	params.ActorEnd = ActorEnd;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.MathLib.Get3DNoise
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// float*                         WaveLength                     (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Amplitude                      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         GlobalTime                     (Parm, ZeroConstructor, IsPlainOldData)
// float*                         PhaseShift                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UMathLib::STATIC_Get3DNoise(float* WaveLength, float* Amplitude, float* GlobalTime, float* PhaseShift)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.MathLib.Get3DNoise");

	UMathLib_Get3DNoise_Params params;
	params.WaveLength = WaveLength;
	params.Amplitude = Amplitude;
	params.GlobalTime = GlobalTime;
	params.PhaseShift = PhaseShift;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.MathLib.Get1DNoise
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float*                         WaveLength                     (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Amplitude                      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         GlobalTime                     (Parm, ZeroConstructor, IsPlainOldData)
// float*                         PhaseShift                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UMathLib::STATIC_Get1DNoise(float* WaveLength, float* Amplitude, float* GlobalTime, float* PhaseShift)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.MathLib.Get1DNoise");

	UMathLib_Get1DNoise_Params params;
	params.WaveLength = WaveLength;
	params.Amplitude = Amplitude;
	params.GlobalTime = GlobalTime;
	params.PhaseShift = PhaseShift;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.MathLib.CreateInstanceTransformsInSphere
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// TArray<struct FTransform>      OutTransforms                  (Parm, OutParm, ZeroConstructor)
// TArray<int>                    OutSelectedMeshIndex           (Parm, OutParm, ZeroConstructor)
// TArray<float>*                 MeshWeightsArray               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FTransform*             SphereTransform                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// TArray<struct FVector>*        ExclusionSphereOrigins         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<float>*                 ExclusionSphereRadii           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<float>*                 ExclusionSphereRadiiInnerFactor (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FRandomStream           RandomStream                   (Parm, OutParm, ZeroConstructor, ReferenceParm)
// float*                         RadiusMeter                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         InnerRadiusFactor              (Parm, ZeroConstructor, IsPlainOldData)
// float*                         SphereFalloffExp               (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DensityPerCubicKilometer       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CapZFactorInner                (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CapZFactorOuter                (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CapZFalloffExp                 (Parm, ZeroConstructor, IsPlainOldData)
// float*                         ScaleMin                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         ScaleMax                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         ScaleDistributionExp           (Parm, ZeroConstructor, IsPlainOldData)

void UMathLib::STATIC_CreateInstanceTransformsInSphere(TArray<float>* MeshWeightsArray, struct FTransform* SphereTransform, TArray<struct FVector>* ExclusionSphereOrigins, TArray<float>* ExclusionSphereRadii, TArray<float>* ExclusionSphereRadiiInnerFactor, float* RadiusMeter, float* InnerRadiusFactor, float* SphereFalloffExp, float* DensityPerCubicKilometer, float* CapZFactorInner, float* CapZFactorOuter, float* CapZFalloffExp, float* ScaleMin, float* ScaleMax, float* ScaleDistributionExp, TArray<struct FTransform>* OutTransforms, TArray<int>* OutSelectedMeshIndex, struct FRandomStream* RandomStream)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.MathLib.CreateInstanceTransformsInSphere");

	UMathLib_CreateInstanceTransformsInSphere_Params params;
	params.MeshWeightsArray = MeshWeightsArray;
	params.SphereTransform = SphereTransform;
	params.ExclusionSphereOrigins = ExclusionSphereOrigins;
	params.ExclusionSphereRadii = ExclusionSphereRadii;
	params.ExclusionSphereRadiiInnerFactor = ExclusionSphereRadiiInnerFactor;
	params.RadiusMeter = RadiusMeter;
	params.InnerRadiusFactor = InnerRadiusFactor;
	params.SphereFalloffExp = SphereFalloffExp;
	params.DensityPerCubicKilometer = DensityPerCubicKilometer;
	params.CapZFactorInner = CapZFactorInner;
	params.CapZFactorOuter = CapZFactorOuter;
	params.CapZFalloffExp = CapZFalloffExp;
	params.ScaleMin = ScaleMin;
	params.ScaleMax = ScaleMax;
	params.ScaleDistributionExp = ScaleDistributionExp;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutTransforms != nullptr)
		*OutTransforms = params.OutTransforms;
	if (OutSelectedMeshIndex != nullptr)
		*OutSelectedMeshIndex = params.OutSelectedMeshIndex;
	if (RandomStream != nullptr)
		*RandomStream = params.RandomStream;
}


// Function ES2.MissionTaskBase.WillFailIfPlayerLeavesLocation
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMissionTaskBase::WillFailIfPlayerLeavesLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.MissionTaskBase.WillFailIfPlayerLeavesLocation");

	AMissionTaskBase_WillFailIfPlayerLeavesLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.MissionTaskBase.TriggerOrBindEventTimeExpired
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate*        Event                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AMissionTaskBase::TriggerOrBindEventTimeExpired(struct FScriptDelegate* Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.MissionTaskBase.TriggerOrBindEventTimeExpired");

	AMissionTaskBase_TriggerOrBindEventTimeExpired_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.MissionTaskBase.TriggerOrBindEventTaskSucceeded
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate*        Event                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AMissionTaskBase::TriggerOrBindEventTaskSucceeded(struct FScriptDelegate* Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.MissionTaskBase.TriggerOrBindEventTaskSucceeded");

	AMissionTaskBase_TriggerOrBindEventTaskSucceeded_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.MissionTaskBase.TriggerOrBindEventTaskFailed
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate*        Event                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AMissionTaskBase::TriggerOrBindEventTaskFailed(struct FScriptDelegate* Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.MissionTaskBase.TriggerOrBindEventTaskFailed");

	AMissionTaskBase_TriggerOrBindEventTaskFailed_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.MissionTaskBase.TriggerOrBindEventTaskEnded
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate*        Event                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AMissionTaskBase::TriggerOrBindEventTaskEnded(struct FScriptDelegate* Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.MissionTaskBase.TriggerOrBindEventTaskEnded");

	AMissionTaskBase_TriggerOrBindEventTaskEnded_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.MissionTaskBase.TriggerOrBindEventTaskActivated
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate*        Event                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AMissionTaskBase::TriggerOrBindEventTaskActivated(struct FScriptDelegate* Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.MissionTaskBase.TriggerOrBindEventTaskActivated");

	AMissionTaskBase_TriggerOrBindEventTaskActivated_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.MissionTaskBase.SwitchState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EMissionTaskState>* NewState                       (Parm, ZeroConstructor, IsPlainOldData)

void AMissionTaskBase::SwitchState(TEnumAsByte<EMissionTaskState>* NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.MissionTaskBase.SwitchState");

	AMissionTaskBase_SwitchState_Params params;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.MissionTaskBase.SpawnOrRestoreMissionPickupFromItem
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UItem**                  Item                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  ID                             (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform*             SpawnTransform                 (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           WasRestored                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class APickupBase*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class APickupBase* AMissionTaskBase::SpawnOrRestoreMissionPickupFromItem(class UItem** Item, struct FName* ID, struct FTransform* SpawnTransform, bool* WasRestored, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.MissionTaskBase.SpawnOrRestoreMissionPickupFromItem");

	AMissionTaskBase_SpawnOrRestoreMissionPickupFromItem_Params params;
	params.Item = Item;
	params.ID = ID;
	params.SpawnTransform = SpawnTransform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WasRestored != nullptr)
		*WasRestored = params.WasRestored;
	if (Success != nullptr)
		*Success = params.Success;

	return params.ReturnValue;
}


// Function ES2.MissionTaskBase.SpawnOrRestoreMissionPawns
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// bool                           bWasRestored                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UClass**                 ClassToSpawn                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  ID                             (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform*             SpawnTransform                 (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// int*                           Count                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           Level                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AESPawn*>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class AESPawn*> AMissionTaskBase::SpawnOrRestoreMissionPawns(class UClass** ClassToSpawn, struct FName* ID, struct FTransform* SpawnTransform, int* Count, int* Level, bool* bWasRestored)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.MissionTaskBase.SpawnOrRestoreMissionPawns");

	AMissionTaskBase_SpawnOrRestoreMissionPawns_Params params;
	params.ClassToSpawn = ClassToSpawn;
	params.ID = ID;
	params.SpawnTransform = SpawnTransform;
	params.Count = Count;
	params.Level = Level;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bWasRestored != nullptr)
		*bWasRestored = params.bWasRestored;

	return params.ReturnValue;
}


// Function ES2.MissionTaskBase.SpawnOrRestoreMissionPawn
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// bool                           bWasRestored                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UClass**                 ClassToSpawn                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  ID                             (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform*             SpawnTransform                 (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// int*                           Level                          (Parm, ZeroConstructor, IsPlainOldData)
// class AESPawn*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AESPawn* AMissionTaskBase::SpawnOrRestoreMissionPawn(class UClass** ClassToSpawn, struct FName* ID, struct FTransform* SpawnTransform, int* Level, bool* bWasRestored)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.MissionTaskBase.SpawnOrRestoreMissionPawn");

	AMissionTaskBase_SpawnOrRestoreMissionPawn_Params params;
	params.ClassToSpawn = ClassToSpawn;
	params.ID = ID;
	params.SpawnTransform = SpawnTransform;
	params.Level = Level;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bWasRestored != nullptr)
		*bWasRestored = params.bWasRestored;

	return params.ReturnValue;
}


// Function ES2.MissionTaskBase.SpawnOrRestoreMissionGroup
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// bool                           bWasRestored                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UObject**                WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform*             SpawnTransform                 (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FName*                  ID                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESpawnGroup>*      GroupType                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FRandomStream           RandomStream                   (Parm, OutParm, ZeroConstructor, ReferenceParm)
// int*                           NPCLevel                       (Parm, ZeroConstructor, IsPlainOldData)
// int*                           NPCCountOverride               (Parm, ZeroConstructor, IsPlainOldData)
// int*                           NPCCountSupportOverride        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         SpawnRadius                    (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AESPawn*>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class AESPawn*> AMissionTaskBase::SpawnOrRestoreMissionGroup(class UObject** WorldContextObject, struct FTransform* SpawnTransform, struct FName* ID, TEnumAsByte<ESpawnGroup>* GroupType, int* NPCLevel, int* NPCCountOverride, int* NPCCountSupportOverride, float* SpawnRadius, bool* bWasRestored, struct FRandomStream* RandomStream)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.MissionTaskBase.SpawnOrRestoreMissionGroup");

	AMissionTaskBase_SpawnOrRestoreMissionGroup_Params params;
	params.WorldContextObject = WorldContextObject;
	params.SpawnTransform = SpawnTransform;
	params.ID = ID;
	params.GroupType = GroupType;
	params.NPCLevel = NPCLevel;
	params.NPCCountOverride = NPCCountOverride;
	params.NPCCountSupportOverride = NPCCountSupportOverride;
	params.SpawnRadius = SpawnRadius;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bWasRestored != nullptr)
		*bWasRestored = params.bWasRestored;
	if (RandomStream != nullptr)
		*RandomStream = params.RandomStream;

	return params.ReturnValue;
}


// Function ES2.MissionTaskBase.SpawnOrRestoreMissionActorsNEW
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// bool                           bWasRestored                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TArray<struct FSpawnAmount>*   ClassesToSpawn                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FName*                  ID                             (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform*             SpawnTransform                 (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// int*                           Level                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AActor*>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class AActor*> AMissionTaskBase::SpawnOrRestoreMissionActorsNEW(TArray<struct FSpawnAmount>* ClassesToSpawn, struct FName* ID, struct FTransform* SpawnTransform, int* Level, bool* bWasRestored)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.MissionTaskBase.SpawnOrRestoreMissionActorsNEW");

	AMissionTaskBase_SpawnOrRestoreMissionActorsNEW_Params params;
	params.ClassesToSpawn = ClassesToSpawn;
	params.ID = ID;
	params.SpawnTransform = SpawnTransform;
	params.Level = Level;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bWasRestored != nullptr)
		*bWasRestored = params.bWasRestored;

	return params.ReturnValue;
}


// Function ES2.MissionTaskBase.SpawnOrRestoreMissionActors
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// bool                           bWasRestored                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UClass**                 ClassToSpawn                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  ID                             (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform*             SpawnTransform                 (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// int*                           Count                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           Level                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AActor*>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class AActor*> AMissionTaskBase::SpawnOrRestoreMissionActors(class UClass** ClassToSpawn, struct FName* ID, struct FTransform* SpawnTransform, int* Count, int* Level, bool* bWasRestored)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.MissionTaskBase.SpawnOrRestoreMissionActors");

	AMissionTaskBase_SpawnOrRestoreMissionActors_Params params;
	params.ClassToSpawn = ClassToSpawn;
	params.ID = ID;
	params.SpawnTransform = SpawnTransform;
	params.Count = Count;
	params.Level = Level;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bWasRestored != nullptr)
		*bWasRestored = params.bWasRestored;

	return params.ReturnValue;
}


// Function ES2.MissionTaskBase.SpawnOrRestoreMissionActor
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// bool                           bWasRestored                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UClass**                 ClassToSpawn                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  ID                             (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform*             SpawnTransform                 (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// int*                           Level                          (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* AMissionTaskBase::SpawnOrRestoreMissionActor(class UClass** ClassToSpawn, struct FName* ID, struct FTransform* SpawnTransform, int* Level, bool* bWasRestored)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.MissionTaskBase.SpawnOrRestoreMissionActor");

	AMissionTaskBase_SpawnOrRestoreMissionActor_Params params;
	params.ClassToSpawn = ClassToSpawn;
	params.ID = ID;
	params.SpawnTransform = SpawnTransform;
	params.Level = Level;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bWasRestored != nullptr)
		*bWasRestored = params.bWasRestored;

	return params.ReturnValue;
}


// Function ES2.MissionTaskBase.SetStation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  NewStationID                   (Parm, ZeroConstructor, IsPlainOldData)

void AMissionTaskBase::SetStation(struct FName* NewStationID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.MissionTaskBase.SetStation");

	AMissionTaskBase_SetStation_Params params;
	params.NewStationID = NewStationID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.MissionTaskBase.SetProgress
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int*                           Progress                       (Parm, ZeroConstructor, IsPlainOldData)

void AMissionTaskBase::SetProgress(int* Progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.MissionTaskBase.SetProgress");

	AMissionTaskBase_SetProgress_Params params;
	params.Progress = Progress;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.MissionTaskBase.SetLocation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  NewLocationID                  (Parm, ZeroConstructor, IsPlainOldData)

void AMissionTaskBase::SetLocation(struct FName* NewLocationID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.MissionTaskBase.SetLocation");

	AMissionTaskBase_SetLocation_Params params;
	params.NewLocationID = NewLocationID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.MissionTaskBase.SetAttribute
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  AttributeName                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FESVariant*             AttributeValue                 (Parm)

void AMissionTaskBase::SetAttribute(struct FName* AttributeName, struct FESVariant* AttributeValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.MissionTaskBase.SetAttribute");

	AMissionTaskBase_SetAttribute_Params params;
	params.AttributeName = AttributeName;
	params.AttributeValue = AttributeValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.MissionTaskBase.PlayerCantLeaveWhileActive
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMissionTaskBase::PlayerCantLeaveWhileActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.MissionTaskBase.PlayerCantLeaveWhileActive");

	AMissionTaskBase_PlayerCantLeaveWhileActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.MissionTaskBase.OnTickWhileActive
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void AMissionTaskBase::OnTickWhileActive(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.MissionTaskBase.OnTickWhileActive");

	AMissionTaskBase_OnTickWhileActive_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.MissionTaskBase.OnPlayerLeftTaskLocation
// (Final, Native, Public)
// Parameters:
// TEnumAsByte<EJumpMethod>*      JumpMethod                     (Parm, ZeroConstructor, IsPlainOldData)

void AMissionTaskBase::OnPlayerLeftTaskLocation(TEnumAsByte<EJumpMethod>* JumpMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.MissionTaskBase.OnPlayerLeftTaskLocation");

	AMissionTaskBase_OnPlayerLeftTaskLocation_Params params;
	params.JumpMethod = JumpMethod;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.MissionTaskBase.OnEnteredStage
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// int*                           NewStage                       (Parm, ZeroConstructor, IsPlainOldData)

void AMissionTaskBase::OnEnteredStage(int* NewStage)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.MissionTaskBase.OnEnteredStage");

	AMissionTaskBase_OnEnteredStage_Params params;
	params.NewStage = NewStage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.MissionTaskBase.OnAbandonedByPlayer
// (Native, Event, Public, BlueprintEvent)

void AMissionTaskBase::OnAbandonedByPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.MissionTaskBase.OnAbandonedByPlayer");

	AMissionTaskBase_OnAbandonedByPlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.MissionTaskBase.IsPlayerAtMissionTaskLocation
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMissionTaskBase::IsPlayerAtMissionTaskLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.MissionTaskBase.IsPlayerAtMissionTaskLocation");

	AMissionTaskBase_IsPlayerAtMissionTaskLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.MissionTaskBase.IsMission
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMissionTaskBase::IsMission()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.MissionTaskBase.IsMission");

	AMissionTaskBase_IsMission_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.MissionTaskBase.IsHidden
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMissionTaskBase::IsHidden()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.MissionTaskBase.IsHidden");

	AMissionTaskBase_IsHidden_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.MissionTaskBase.HasEnded
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMissionTaskBase::HasEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.MissionTaskBase.HasEnded");

	AMissionTaskBase_HasEnded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.MissionTaskBase.GetOwningMissionTitle
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText AMissionTaskBase::GetOwningMissionTitle()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.MissionTaskBase.GetOwningMissionTitle");

	AMissionTaskBase_GetOwningMissionTitle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.MissionTaskBase.GetOwningMissionID
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName AMissionTaskBase::GetOwningMissionID()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.MissionTaskBase.GetOwningMissionID");

	AMissionTaskBase_GetOwningMissionID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.MissionTaskBase.GetOwningMissionFaction
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TEnumAsByte<EFactions>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<EFactions> AMissionTaskBase::GetOwningMissionFaction()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.MissionTaskBase.GetOwningMissionFaction");

	AMissionTaskBase_GetOwningMissionFaction_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.MissionTaskBase.GetOwningMissionEnemyFaction
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TEnumAsByte<EFactions>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<EFactions> AMissionTaskBase::GetOwningMissionEnemyFaction()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.MissionTaskBase.GetOwningMissionEnemyFaction");

	AMissionTaskBase_GetOwningMissionEnemyFaction_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.MissionTaskBase.GetOwningMissionDifficulty
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AMissionTaskBase::GetOwningMissionDifficulty()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.MissionTaskBase.GetOwningMissionDifficulty");

	AMissionTaskBase_GetOwningMissionDifficulty_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.MissionTaskBase.GetOwningMission
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AMissionTaskBase*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AMissionTaskBase* AMissionTaskBase::GetOwningMission()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.MissionTaskBase.GetOwningMission");

	AMissionTaskBase_GetOwningMission_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.MissionTaskBase.GetOwningJobNumber
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AMissionTaskBase::GetOwningJobNumber()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.MissionTaskBase.GetOwningJobNumber");

	AMissionTaskBase_GetOwningJobNumber_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.MissionTaskBase.GetObjectiveDescriptions
// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTaskSaveGameData*      SavedTaskData                  (ConstParm, Parm, OutParm, ReferenceParm)
// TArray<struct FObjectiveDescription> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FObjectiveDescription> AMissionTaskBase::GetObjectiveDescriptions(struct FTaskSaveGameData* SavedTaskData)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.MissionTaskBase.GetObjectiveDescriptions");

	AMissionTaskBase_GetObjectiveDescriptions_Params params;
	params.SavedTaskData = SavedTaskData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.MissionTaskBase.GetObjectiveDescription
// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTaskSaveGameData*      SavedTaskData                  (ConstParm, Parm, OutParm, ReferenceParm)
// struct FObjectiveDescription   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FObjectiveDescription AMissionTaskBase::GetObjectiveDescription(struct FTaskSaveGameData* SavedTaskData)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.MissionTaskBase.GetObjectiveDescription");

	AMissionTaskBase_GetObjectiveDescription_Params params;
	params.SavedTaskData = SavedTaskData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.MissionTaskBase.GetMissionIndicator
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TEnumAsByte<EIndicator>        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<EIndicator> AMissionTaskBase::GetMissionIndicator()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.MissionTaskBase.GetMissionIndicator");

	AMissionTaskBase_GetMissionIndicator_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.MissionTaskBase.GetChildren
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<class AActor*>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class AActor*> AMissionTaskBase::GetChildren()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.MissionTaskBase.GetChildren");

	AMissionTaskBase_GetChildren_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.MissionTaskBase.ForceState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EMissionTaskState>* NewState                       (Parm, ZeroConstructor, IsPlainOldData)

void AMissionTaskBase::ForceState(TEnumAsByte<EMissionTaskState>* NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.MissionTaskBase.ForceState");

	AMissionTaskBase_ForceState_Params params;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.MissionTaskBase.FindOrCreateAttribute
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName*                  Key                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FESVariant*             InitValue                      (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           bWasNewlyCreated               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FESVariant              ReturnValue                    (Parm, OutParm, ReturnParm)

struct FESVariant AMissionTaskBase::FindOrCreateAttribute(struct FName* Key, struct FESVariant* InitValue, bool* bWasNewlyCreated)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.MissionTaskBase.FindOrCreateAttribute");

	AMissionTaskBase_FindOrCreateAttribute_Params params;
	params.Key = Key;
	params.InitValue = InitValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bWasNewlyCreated != nullptr)
		*bWasNewlyCreated = params.bWasNewlyCreated;

	return params.ReturnValue;
}


// Function ES2.MissionTaskBase.FindAttribute
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName*                  AttributeName                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FESVariant              AttributeValue_OUT             (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMissionTaskBase::FindAttribute(struct FName* AttributeName, struct FESVariant* AttributeValue_OUT)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.MissionTaskBase.FindAttribute");

	AMissionTaskBase_FindAttribute_Params params;
	params.AttributeName = AttributeName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AttributeValue_OUT != nullptr)
		*AttributeValue_OUT = params.AttributeValue_OUT;

	return params.ReturnValue;
}


// Function ES2.MissionTaskBase.EnterStage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int*                           Stage                          (Parm, ZeroConstructor, IsPlainOldData)

void AMissionTaskBase::EnterStage(int* Stage)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.MissionTaskBase.EnterStage");

	AMissionTaskBase_EnterStage_Params params;
	params.Stage = Stage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.MissionTaskBase.AddPawnsToMission
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<class AESPawn*>*        Actors                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FName*                  ID                             (Parm, ZeroConstructor, IsPlainOldData)

void AMissionTaskBase::AddPawnsToMission(TArray<class AESPawn*>* Actors, struct FName* ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.MissionTaskBase.AddPawnsToMission");

	AMissionTaskBase_AddPawnsToMission_Params params;
	params.Actors = Actors;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.MissionTaskBase.AddActorsToMission
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<class AActor*>*         Actors                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FName*                  ID                             (Parm, ZeroConstructor, IsPlainOldData)

void AMissionTaskBase::AddActorsToMission(TArray<class AActor*>* Actors, struct FName* ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.MissionTaskBase.AddActorsToMission");

	AMissionTaskBase_AddActorsToMission_Params params;
	params.Actors = Actors;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.MissionTaskBase.Abort
// (Final, Native, Public, BlueprintCallable)

void AMissionTaskBase::Abort()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.MissionTaskBase.Abort");

	AMissionTaskBase_Abort_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.MissionBase.GetMissionLog
// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTaskSaveGameData*      SavedTaskData                  (ConstParm, Parm, OutParm, ReferenceParm)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText AMissionBase::GetMissionLog(struct FTaskSaveGameData* SavedTaskData)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.MissionBase.GetMissionLog");

	AMissionBase_GetMissionLog_Params params;
	params.SavedTaskData = SavedTaskData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.MissionBase.GenerateRewards
// (Native, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FRandomStream           RandomStream                   (Parm, OutParm, ZeroConstructor, ReferenceParm)
// int*                           DifficultyLevelIn              (Parm, ZeroConstructor, IsPlainOldData)
// int*                           LocationDistance               (Parm, ZeroConstructor, IsPlainOldData)
// struct FTaskSaveGameData*      SavedTaskData                  (ConstParm, Parm, OutParm, ReferenceParm)
// TArray<struct FMissionReward>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMissionReward> AMissionBase::GenerateRewards(int* DifficultyLevelIn, int* LocationDistance, struct FTaskSaveGameData* SavedTaskData, struct FRandomStream* RandomStream)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.MissionBase.GenerateRewards");

	AMissionBase_GenerateRewards_Params params;
	params.DifficultyLevelIn = DifficultyLevelIn;
	params.LocationDistance = LocationDistance;
	params.SavedTaskData = SavedTaskData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RandomStream != nullptr)
		*RandomStream = params.RandomStream;

	return params.ReturnValue;
}


// Function ES2.MissionBase.GenerateAttributes
// (Native, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FRandomStream           RandomStream                   (Parm, OutParm, ZeroConstructor, ReferenceParm)
// int*                           DifficultyLevelIn              (Parm, ZeroConstructor, IsPlainOldData)
// float*                         TravelDistance                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FTaskSaveGameData*      SavedTaskData                  (ConstParm, Parm, OutParm, ReferenceParm)
// TMap<struct FName, struct FESVariant> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TMap<struct FName, struct FESVariant> AMissionBase::GenerateAttributes(int* DifficultyLevelIn, float* TravelDistance, struct FTaskSaveGameData* SavedTaskData, struct FRandomStream* RandomStream)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.MissionBase.GenerateAttributes");

	AMissionBase_GenerateAttributes_Params params;
	params.DifficultyLevelIn = DifficultyLevelIn;
	params.TravelDistance = TravelDistance;
	params.SavedTaskData = SavedTaskData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RandomStream != nullptr)
		*RandomStream = params.RandomStream;

	return params.ReturnValue;
}


// Function ES2.MissionLib.WillAnyMissionFailIfPlayerLeavesLocation
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMissionLib::STATIC_WillAnyMissionFailIfPlayerLeavesLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.MissionLib.WillAnyMissionFailIfPlayerLeavesLocation");

	UMissionLib_WillAnyMissionFailIfPlayerLeavesLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.MissionLib.TrackMission
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName*                  MissionID                      (Parm, ZeroConstructor, IsPlainOldData)

void UMissionLib::STATIC_TrackMission(struct FName* MissionID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.MissionLib.TrackMission");

	UMissionLib_TrackMission_Params params;
	params.MissionID = MissionID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.MissionLib.SpawnMissionAtLocation
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 MissionClass                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bOnlySpawnIfNotAlreadyInMissionLog (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bSpawnWithActiveState          (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform*             SpawnTransform                 (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FName*                  LocationID                     (Parm, ZeroConstructor, IsPlainOldData)
// class AMissionBase*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AMissionBase* UMissionLib::STATIC_SpawnMissionAtLocation(class UObject** WorldContextObject, class UClass** MissionClass, bool* bOnlySpawnIfNotAlreadyInMissionLog, bool* bSpawnWithActiveState, struct FTransform* SpawnTransform, struct FName* LocationID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.MissionLib.SpawnMissionAtLocation");

	UMissionLib_SpawnMissionAtLocation_Params params;
	params.WorldContextObject = WorldContextObject;
	params.MissionClass = MissionClass;
	params.bOnlySpawnIfNotAlreadyInMissionLog = bOnlySpawnIfNotAlreadyInMissionLog;
	params.bSpawnWithActiveState = bSpawnWithActiveState;
	params.SpawnTransform = SpawnTransform;
	params.LocationID = LocationID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.MissionLib.SpawnMission
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 MissionClass                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bOnlySpawnIfNotAlreadyInMissionLog (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bSpawnWithActiveState          (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform*             SpawnTransform                 (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AMissionBase*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AMissionBase* UMissionLib::STATIC_SpawnMission(class UObject** WorldContextObject, class UClass** MissionClass, bool* bOnlySpawnIfNotAlreadyInMissionLog, bool* bSpawnWithActiveState, struct FTransform* SpawnTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.MissionLib.SpawnMission");

	UMissionLib_SpawnMission_Params params;
	params.WorldContextObject = WorldContextObject;
	params.MissionClass = MissionClass;
	params.bOnlySpawnIfNotAlreadyInMissionLog = bOnlySpawnIfNotAlreadyInMissionLog;
	params.bSpawnWithActiveState = bSpawnWithActiveState;
	params.SpawnTransform = SpawnTransform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.MissionLib.SpawnJob
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FTaskSaveGameData*      JobData                        (ConstParm, Parm, OutParm, ReferenceParm)
// struct FTransform*             SpawnTransform                 (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AMissionBase*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AMissionBase* UMissionLib::STATIC_SpawnJob(class UObject** WorldContextObject, struct FTaskSaveGameData* JobData, struct FTransform* SpawnTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.MissionLib.SpawnJob");

	UMissionLib_SpawnJob_Params params;
	params.WorldContextObject = WorldContextObject;
	params.JobData = JobData;
	params.SpawnTransform = SpawnTransform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.MissionLib.ShowActiveMissionObjectivesInHUD
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AMissionTaskBase**       AnyTaskOfMission               (Parm, ZeroConstructor, IsPlainOldData)

void UMissionLib::STATIC_ShowActiveMissionObjectivesInHUD(class AMissionTaskBase** AnyTaskOfMission)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.MissionLib.ShowActiveMissionObjectivesInHUD");

	UMissionLib_ShowActiveMissionObjectivesInHUD_Params params;
	params.AnyTaskOfMission = AnyTaskOfMission;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.MissionLib.RemoveTaskFromPlayerData
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName*                  TaskID                         (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAbortedByPlayer               (Parm, ZeroConstructor, IsPlainOldData)

void UMissionLib::STATIC_RemoveTaskFromPlayerData(struct FName* TaskID, bool* bAbortedByPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.MissionLib.RemoveTaskFromPlayerData");

	UMissionLib_RemoveTaskFromPlayerData_Params params;
	params.TaskID = TaskID;
	params.bAbortedByPlayer = bAbortedByPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.MissionLib.RemoveJobOfferFromStation
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FTaskSaveGameData*      JobData                        (ConstParm, Parm, OutParm, ReferenceParm)
// struct FName*                  StationID                      (Parm, ZeroConstructor, IsPlainOldData)

void UMissionLib::STATIC_RemoveJobOfferFromStation(struct FTaskSaveGameData* JobData, struct FName* StationID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.MissionLib.RemoveJobOfferFromStation");

	UMissionLib_RemoveJobOfferFromStation_Params params;
	params.JobData = JobData;
	params.StationID = StationID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.MissionLib.GetMissionLog
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName*                  MissionID                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UMissionLib::STATIC_GetMissionLog(struct FName* MissionID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.MissionLib.GetMissionLog");

	UMissionLib_GetMissionLog_Params params;
	params.MissionID = MissionID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.MissionLib.GetMissionDefaultObject
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName*                  MissionID                      (Parm, ZeroConstructor, IsPlainOldData)
// class AMissionBase*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AMissionBase* UMissionLib::STATIC_GetMissionDefaultObject(struct FName* MissionID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.MissionLib.GetMissionDefaultObject");

	UMissionLib_GetMissionDefaultObject_Params params;
	params.MissionID = MissionID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.MissionLib.GetJobTypesOfFactionGroup
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TEnumAsByte<EFactionGroup>*    FactionGroup                   (Parm, ZeroConstructor, IsPlainOldData)
// TArray<TEnumAsByte<EJobType>>  ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<TEnumAsByte<EJobType>> UMissionLib::STATIC_GetJobTypesOfFactionGroup(TEnumAsByte<EFactionGroup>* FactionGroup)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.MissionLib.GetJobTypesOfFactionGroup");

	UMissionLib_GetJobTypesOfFactionGroup_Params params;
	params.FactionGroup = FactionGroup;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.MissionLib.GetGroupsOfFaction
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TEnumAsByte<EFactions>*        Faction                        (Parm, ZeroConstructor, IsPlainOldData)
// TArray<TEnumAsByte<EFactionGroup>> ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<TEnumAsByte<EFactionGroup>> UMissionLib::STATIC_GetGroupsOfFaction(TEnumAsByte<EFactions>* Faction)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.MissionLib.GetGroupsOfFaction");

	UMissionLib_GetGroupsOfFaction_Params params;
	params.Faction = Faction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.MissionLib.GetFactionInfo
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TEnumAsByte<EFactions>*        Faction                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FFaction                ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FFaction UMissionLib::STATIC_GetFactionInfo(TEnumAsByte<EFactions>* Faction)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.MissionLib.GetFactionInfo");

	UMissionLib_GetFactionInfo_Params params;
	params.Faction = Faction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.MissionLib.GetCurrentObjectivesForMissionLog
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName*                  TaskID                         (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bActiveOnly                    (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bNonPermanentDisplayOnly       (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FObjectiveDescription> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FObjectiveDescription> UMissionLib::STATIC_GetCurrentObjectivesForMissionLog(struct FName* TaskID, bool* bActiveOnly, bool* bNonPermanentDisplayOnly)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.MissionLib.GetCurrentObjectivesForMissionLog");

	UMissionLib_GetCurrentObjectivesForMissionLog_Params params;
	params.TaskID = TaskID;
	params.bActiveOnly = bActiveOnly;
	params.bNonPermanentDisplayOnly = bNonPermanentDisplayOnly;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.MissionLib.GetAllMissionsInPlayerData
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool*                          bActiveOnly                    (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EMissionType>*     MissionType                    (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FTaskSaveGameData> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FTaskSaveGameData> UMissionLib::STATIC_GetAllMissionsInPlayerData(bool* bActiveOnly, TEnumAsByte<EMissionType>* MissionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.MissionLib.GetAllMissionsInPlayerData");

	UMissionLib_GetAllMissionsInPlayerData_Params params;
	params.bActiveOnly = bActiveOnly;
	params.MissionType = MissionType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.MissionLib.GetActiveTasksLocations
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName*                  MissionID                      (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FName>           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FName> UMissionLib::STATIC_GetActiveTasksLocations(struct FName* MissionID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.MissionLib.GetActiveTasksLocations");

	UMissionLib_GetActiveTasksLocations_Params params;
	params.MissionID = MissionID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.MissionLib.FindTaskInPlayerData
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName*                  TaskID                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FTaskSaveGameData       SavedData                      (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMissionLib::STATIC_FindTaskInPlayerData(struct FName* TaskID, struct FTaskSaveGameData* SavedData)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.MissionLib.FindTaskInPlayerData");

	UMissionLib_FindTaskInPlayerData_Params params;
	params.TaskID = TaskID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SavedData != nullptr)
		*SavedData = params.SavedData;

	return params.ReturnValue;
}


// Function ES2.MissionLib.CreateJobOffers
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FRandomStream           RandomStream                   (Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FName*                  LocationID                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  StationID                      (Parm, ZeroConstructor, IsPlainOldData)
// TArray<TSoftObjectPtr<class UClass>>* JobCandidates                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FTaskSaveGameData>* AlreadyExistingOffers          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int*                           NumOffersMin                   (Parm, ZeroConstructor, IsPlainOldData)
// int*                           NumOffersMax                   (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FTaskSaveGameData> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FTaskSaveGameData> UMissionLib::STATIC_CreateJobOffers(class UObject** WorldContextObject, struct FName* LocationID, struct FName* StationID, TArray<TSoftObjectPtr<class UClass>>* JobCandidates, TArray<struct FTaskSaveGameData>* AlreadyExistingOffers, int* NumOffersMin, int* NumOffersMax, struct FRandomStream* RandomStream)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.MissionLib.CreateJobOffers");

	UMissionLib_CreateJobOffers_Params params;
	params.WorldContextObject = WorldContextObject;
	params.LocationID = LocationID;
	params.StationID = StationID;
	params.JobCandidates = JobCandidates;
	params.AlreadyExistingOffers = AlreadyExistingOffers;
	params.NumOffersMin = NumOffersMin;
	params.NumOffersMax = NumOffersMax;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RandomStream != nullptr)
		*RandomStream = params.RandomStream;

	return params.ReturnValue;
}


// Function ES2.MissionLib.CantLeaveLocation
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMissionLib::STATIC_CantLeaveLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.MissionLib.CantLeaveLocation");

	UMissionLib_CantLeaveLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.ModifierLib.ToString
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FModifierHandle*        ModifierHandle                 (ConstParm, Parm, OutParm, ReferenceParm)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UModifierLib::STATIC_ToString(struct FModifierHandle* ModifierHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ModifierLib.ToString");

	UModifierLib_ToString_Params params;
	params.ModifierHandle = ModifierHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.ModifierLib.SetModifierValueInAttributeAccess
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FAttributeAccess        AttributeAccess                (Parm, OutParm, ReferenceParm)
// struct FModifierHandle*        ModifierHandle                 (ConstParm, Parm, OutParm, ReferenceParm)
// float*                         NewValue                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UModifierLib::STATIC_SetModifierValueInAttributeAccess(struct FModifierHandle* ModifierHandle, float* NewValue, struct FAttributeAccess* AttributeAccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ModifierLib.SetModifierValueInAttributeAccess");

	UModifierLib_SetModifierValueInAttributeAccess_Params params;
	params.ModifierHandle = ModifierHandle;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AttributeAccess != nullptr)
		*AttributeAccess = params.AttributeAccess;

	return params.ReturnValue;
}


// Function ES2.ModifierLib.SetModifierValueForItemAttribute
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UItemAttribute**         ItemAttribute                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FModifierHandle*        ModifierHandle                 (ConstParm, Parm, OutParm, ReferenceParm)
// float*                         NewValue                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UModifierLib::STATIC_SetModifierValueForItemAttribute(class UItemAttribute** ItemAttribute, struct FModifierHandle* ModifierHandle, float* NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ModifierLib.SetModifierValueForItemAttribute");

	UModifierLib_SetModifierValueForItemAttribute_Params params;
	params.ItemAttribute = ItemAttribute;
	params.ModifierHandle = ModifierHandle;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.ModifierLib.SetModifierValue
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FBuffableFloat          BuffableFloat                  (Parm, OutParm, ReferenceParm)
// struct FModifierHandle*        ModifierHandle                 (ConstParm, Parm, OutParm, ReferenceParm)
// float*                         NewValue                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UModifierLib::STATIC_SetModifierValue(struct FModifierHandle* ModifierHandle, float* NewValue, struct FBuffableFloat* BuffableFloat)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ModifierLib.SetModifierValue");

	UModifierLib_SetModifierValue_Params params;
	params.ModifierHandle = ModifierHandle;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BuffableFloat != nullptr)
		*BuffableFloat = params.BuffableFloat;

	return params.ReturnValue;
}


// Function ES2.ModifierLib.RemoveModifierRot
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FBuffableRotator        BuffableRotator                (Parm, OutParm, ReferenceParm)
// struct FModifierHandle*        ModifierHandle                 (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UModifierLib::STATIC_RemoveModifierRot(struct FModifierHandle* ModifierHandle, struct FBuffableRotator* BuffableRotator)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ModifierLib.RemoveModifierRot");

	UModifierLib_RemoveModifierRot_Params params;
	params.ModifierHandle = ModifierHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BuffableRotator != nullptr)
		*BuffableRotator = params.BuffableRotator;

	return params.ReturnValue;
}


// Function ES2.ModifierLib.RemoveModifierFromAttributeAccess
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FAttributeAccess        AttributeAccess                (Parm, OutParm, ReferenceParm)
// struct FModifierHandle*        ModifierHandle                 (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UModifierLib::STATIC_RemoveModifierFromAttributeAccess(struct FModifierHandle* ModifierHandle, struct FAttributeAccess* AttributeAccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ModifierLib.RemoveModifierFromAttributeAccess");

	UModifierLib_RemoveModifierFromAttributeAccess_Params params;
	params.ModifierHandle = ModifierHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AttributeAccess != nullptr)
		*AttributeAccess = params.AttributeAccess;

	return params.ReturnValue;
}


// Function ES2.ModifierLib.RemoveModifierFromAttribute
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UItemAttribute**         ItemAttribute                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FModifierHandle*        ModifierHandle                 (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UModifierLib::STATIC_RemoveModifierFromAttribute(class UItemAttribute** ItemAttribute, struct FModifierHandle* ModifierHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ModifierLib.RemoveModifierFromAttribute");

	UModifierLib_RemoveModifierFromAttribute_Params params;
	params.ItemAttribute = ItemAttribute;
	params.ModifierHandle = ModifierHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.ModifierLib.RemoveModifier
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FBuffableFloat          BuffableFloat                  (Parm, OutParm, ReferenceParm)
// struct FModifierHandle*        ModifierHandle                 (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UModifierLib::STATIC_RemoveModifier(struct FModifierHandle* ModifierHandle, struct FBuffableFloat* BuffableFloat)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ModifierLib.RemoveModifier");

	UModifierLib_RemoveModifier_Params params;
	params.ModifierHandle = ModifierHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BuffableFloat != nullptr)
		*BuffableFloat = params.BuffableFloat;

	return params.ReturnValue;
}


// Function ES2.ModifierLib.GetModifierValue
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FBuffableFloat          BuffableFloat                  (Parm, OutParm, ReferenceParm)
// struct FModifierHandle*        ModifierHandle                 (ConstParm, Parm, OutParm, ReferenceParm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UModifierLib::STATIC_GetModifierValue(struct FModifierHandle* ModifierHandle, struct FBuffableFloat* BuffableFloat)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ModifierLib.GetModifierValue");

	UModifierLib_GetModifierValue_Params params;
	params.ModifierHandle = ModifierHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BuffableFloat != nullptr)
		*BuffableFloat = params.BuffableFloat;

	return params.ReturnValue;
}


// Function ES2.ModifierLib.GetBuffableRotatorValue
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBuffableRotator*       BuffableRotator                (ConstParm, Parm, OutParm, ReferenceParm)
// struct FRotator                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FRotator UModifierLib::STATIC_GetBuffableRotatorValue(struct FBuffableRotator* BuffableRotator)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ModifierLib.GetBuffableRotatorValue");

	UModifierLib_GetBuffableRotatorValue_Params params;
	params.BuffableRotator = BuffableRotator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.ModifierLib.GetBuffableFloatValue
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBuffableFloat*         BuffableFloat                  (ConstParm, Parm, OutParm, ReferenceParm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UModifierLib::STATIC_GetBuffableFloatValue(struct FBuffableFloat* BuffableFloat)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ModifierLib.GetBuffableFloatValue");

	UModifierLib_GetBuffableFloatValue_Params params;
	params.BuffableFloat = BuffableFloat;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.ModifierLib.AddModifierToAttributeAccess
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FAttributeAccess        AttributeAccess                (Parm, OutParm, ReferenceParm)
// struct FModifier*              Mod                            (Parm)
// struct FModifierHandle         ReturnValue                    (Parm, OutParm, ReturnParm)

struct FModifierHandle UModifierLib::STATIC_AddModifierToAttributeAccess(struct FModifier* Mod, struct FAttributeAccess* AttributeAccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ModifierLib.AddModifierToAttributeAccess");

	UModifierLib_AddModifierToAttributeAccess_Params params;
	params.Mod = Mod;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AttributeAccess != nullptr)
		*AttributeAccess = params.AttributeAccess;

	return params.ReturnValue;
}


// Function ES2.ModifierLib.AddModifierToAttribute
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UItemAttribute**         ItemAttribute                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FModifier*              Mod                            (Parm)
// struct FModifierHandle         ReturnValue                    (Parm, OutParm, ReturnParm)

struct FModifierHandle UModifierLib::STATIC_AddModifierToAttribute(class UItemAttribute** ItemAttribute, struct FModifier* Mod)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ModifierLib.AddModifierToAttribute");

	UModifierLib_AddModifierToAttribute_Params params;
	params.ItemAttribute = ItemAttribute;
	params.Mod = Mod;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.ModifierLib.AddModifierRot
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FBuffableRotator        BuffableRotator                (Parm, OutParm, ReferenceParm)
// struct FModifier*              Mod                            (Parm)
// struct FModifierHandle         ReturnValue                    (Parm, OutParm, ReturnParm)

struct FModifierHandle UModifierLib::STATIC_AddModifierRot(struct FModifier* Mod, struct FBuffableRotator* BuffableRotator)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ModifierLib.AddModifierRot");

	UModifierLib_AddModifierRot_Params params;
	params.Mod = Mod;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BuffableRotator != nullptr)
		*BuffableRotator = params.BuffableRotator;

	return params.ReturnValue;
}


// Function ES2.ModifierLib.AddModifier
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FBuffableFloat          BuffableFloat                  (Parm, OutParm, ReferenceParm)
// struct FModifier*              Mod                            (Parm)
// struct FModifierHandle         ReturnValue                    (Parm, OutParm, ReturnParm)

struct FModifierHandle UModifierLib::STATIC_AddModifier(struct FModifier* Mod, struct FBuffableFloat* BuffableFloat)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ModifierLib.AddModifier");

	UModifierLib_AddModifier_Params params;
	params.Mod = Mod;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BuffableFloat != nullptr)
		*BuffableFloat = params.BuffableFloat;

	return params.ReturnValue;
}


// Function ES2.ShipMovementComponent.StopBoosting
// (Final, Native, Public, BlueprintCallable)

void UShipMovementComponent::StopBoosting()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ShipMovementComponent.StopBoosting");

	UShipMovementComponent_StopBoosting_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ShipMovementComponent.StartBoosting
// (Final, Native, Public, BlueprintCallable)

void UShipMovementComponent::StartBoosting()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ShipMovementComponent.StartBoosting");

	UShipMovementComponent_StartBoosting_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ShipMovementComponent.ResetBanking
// (Final, Native, Public, BlueprintCallable)

void UShipMovementComponent::ResetBanking()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ShipMovementComponent.ResetBanking");

	UShipMovementComponent_ResetBanking_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ShipMovementComponent.RemoveSpeedModifier
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FModifierHandle*        ModifierHandle                 (Parm)

void UShipMovementComponent::RemoveSpeedModifier(struct FModifierHandle* ModifierHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ShipMovementComponent.RemoveSpeedModifier");

	UShipMovementComponent_RemoveSpeedModifier_Params params;
	params.ModifierHandle = ModifierHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ShipMovementComponent.RemoveAccelerationModifier
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FModifierHandle*        ModifierHandle                 (Parm)

void UShipMovementComponent::RemoveAccelerationModifier(struct FModifierHandle* ModifierHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ShipMovementComponent.RemoveAccelerationModifier");

	UShipMovementComponent_RemoveAccelerationModifier_Params params;
	params.ModifierHandle = ModifierHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ShipMovementComponent.MeasureVelocityWithoutInput
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UShipMovementComponent::MeasureVelocityWithoutInput(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ShipMovementComponent.MeasureVelocityWithoutInput");

	UShipMovementComponent_MeasureVelocityWithoutInput_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.ShipMovementComponent.GetVelocityAtPoint
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector*                PointWorld                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UShipMovementComponent::GetVelocityAtPoint(struct FVector* PointWorld)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ShipMovementComponent.GetVelocityAtPoint");

	UShipMovementComponent_GetVelocityAtPoint_Params params;
	params.PointWorld = PointWorld;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.ShipMovementComponent.GetTargetVelocityFromInput
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector*                InputVectorLocal               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UShipMovementComponent::GetTargetVelocityFromInput(struct FVector* InputVectorLocal)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ShipMovementComponent.GetTargetVelocityFromInput");

	UShipMovementComponent_GetTargetVelocityFromInput_Params params;
	params.InputVectorLocal = InputVectorLocal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.ShipMovementComponent.GetStoppingDistance
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UShipMovementComponent::GetStoppingDistance()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ShipMovementComponent.GetStoppingDistance");

	UShipMovementComponent_GetStoppingDistance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.ShipMovementComponent.GetPendingInputRotator
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRotator                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FRotator UShipMovementComponent::GetPendingInputRotator()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ShipMovementComponent.GetPendingInputRotator");

	UShipMovementComponent_GetPendingInputRotator_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.ShipMovementComponent.GetMaxStrafeSpeedWithoutBoost
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UShipMovementComponent::GetMaxStrafeSpeedWithoutBoost()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ShipMovementComponent.GetMaxStrafeSpeedWithoutBoost");

	UShipMovementComponent_GetMaxStrafeSpeedWithoutBoost_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.ShipMovementComponent.GetMaxStoppingDistance
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UShipMovementComponent::GetMaxStoppingDistance()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ShipMovementComponent.GetMaxStoppingDistance");

	UShipMovementComponent_GetMaxStoppingDistance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.ShipMovementComponent.GetMaxForwardSpeedWithoutBoost
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UShipMovementComponent::GetMaxForwardSpeedWithoutBoost()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ShipMovementComponent.GetMaxForwardSpeedWithoutBoost");

	UShipMovementComponent_GetMaxForwardSpeedWithoutBoost_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.ShipMovementComponent.GetLastPendingInputRotator
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRotator                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FRotator UShipMovementComponent::GetLastPendingInputRotator()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ShipMovementComponent.GetLastPendingInputRotator");

	UShipMovementComponent_GetLastPendingInputRotator_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.ShipMovementComponent.GetCurrentInputDelta
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UShipMovementComponent::GetCurrentInputDelta()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ShipMovementComponent.GetCurrentInputDelta");

	UShipMovementComponent_GetCurrentInputDelta_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.ShipMovementComponent.GetCurrentBoostDurationPercentage
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UShipMovementComponent::GetCurrentBoostDurationPercentage()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ShipMovementComponent.GetCurrentBoostDurationPercentage");

	UShipMovementComponent_GetCurrentBoostDurationPercentage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.ShipMovementComponent.EnableRecharge
// (Final, Native, Protected)

void UShipMovementComponent::EnableRecharge()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ShipMovementComponent.EnableRecharge");

	UShipMovementComponent_EnableRecharge_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ShipMovementComponent.ConsumeInputRotator
// (Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRotator                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FRotator UShipMovementComponent::ConsumeInputRotator()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ShipMovementComponent.ConsumeInputRotator");

	UShipMovementComponent_ConsumeInputRotator_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.ShipMovementComponent.AddYawInput
// (Native, Public, BlueprintCallable)
// Parameters:
// float*                         Val                            (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bForce                         (Parm, ZeroConstructor, IsPlainOldData)

void UShipMovementComponent::AddYawInput(float* Val, bool* bForce)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ShipMovementComponent.AddYawInput");

	UShipMovementComponent_AddYawInput_Params params;
	params.Val = Val;
	params.bForce = bForce;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ShipMovementComponent.AddSpeedModifier
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FModifier*              Modifier                       (Parm)
// struct FModifierHandle         ReturnValue                    (Parm, OutParm, ReturnParm)

struct FModifierHandle UShipMovementComponent::AddSpeedModifier(struct FModifier* Modifier)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ShipMovementComponent.AddSpeedModifier");

	UShipMovementComponent_AddSpeedModifier_Params params;
	params.Modifier = Modifier;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.ShipMovementComponent.AddRollInput
// (Native, Public, BlueprintCallable)
// Parameters:
// float*                         Val                            (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bForce                         (Parm, ZeroConstructor, IsPlainOldData)

void UShipMovementComponent::AddRollInput(float* Val, bool* bForce)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ShipMovementComponent.AddRollInput");

	UShipMovementComponent_AddRollInput_Params params;
	params.Val = Val;
	params.bForce = bForce;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ShipMovementComponent.AddRadialForce
// (Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                Origin                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float*                         Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Strength                       (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ERadialImpulseFalloff>* Falloff                        (Parm, ZeroConstructor, IsPlainOldData)

void UShipMovementComponent::AddRadialForce(struct FVector* Origin, float* Radius, float* Strength, TEnumAsByte<ERadialImpulseFalloff>* Falloff)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ShipMovementComponent.AddRadialForce");

	UShipMovementComponent_AddRadialForce_Params params;
	params.Origin = Origin;
	params.Radius = Radius;
	params.Strength = Strength;
	params.Falloff = Falloff;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ShipMovementComponent.AddRadialAcceleration
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                Origin                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float*                         Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Strength                       (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ERadialImpulseFalloff>* Falloff                        (Parm, ZeroConstructor, IsPlainOldData)

void UShipMovementComponent::AddRadialAcceleration(struct FVector* Origin, float* Radius, float* Strength, TEnumAsByte<ERadialImpulseFalloff>* Falloff)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ShipMovementComponent.AddRadialAcceleration");

	UShipMovementComponent_AddRadialAcceleration_Params params;
	params.Origin = Origin;
	params.Radius = Radius;
	params.Strength = Strength;
	params.Falloff = Falloff;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ShipMovementComponent.AddPitchInput
// (Native, Public, BlueprintCallable)
// Parameters:
// float*                         Val                            (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bForce                         (Parm, ZeroConstructor, IsPlainOldData)

void UShipMovementComponent::AddPitchInput(float* Val, bool* bForce)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ShipMovementComponent.AddPitchInput");

	UShipMovementComponent_AddPitchInput_Params params;
	params.Val = Val;
	params.bForce = bForce;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ShipMovementComponent.AddImpulse
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                Impulse                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool*                          bVelocityChange                (Parm, ZeroConstructor, IsPlainOldData)

void UShipMovementComponent::AddImpulse(struct FVector* Impulse, bool* bVelocityChange)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ShipMovementComponent.AddImpulse");

	UShipMovementComponent_AddImpulse_Params params;
	params.Impulse = Impulse;
	params.bVelocityChange = bVelocityChange;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ShipMovementComponent.AddForceAtLocationLocal
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                ForceLocal                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector*                LocationLocal                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UShipMovementComponent::AddForceAtLocationLocal(struct FVector* ForceLocal, struct FVector* LocationLocal)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ShipMovementComponent.AddForceAtLocationLocal");

	UShipMovementComponent_AddForceAtLocationLocal_Params params;
	params.ForceLocal = ForceLocal;
	params.LocationLocal = LocationLocal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ShipMovementComponent.AddForceAtLocation
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                Force                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector*                LocationWorld                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UShipMovementComponent::AddForceAtLocation(struct FVector* Force, struct FVector* LocationWorld)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ShipMovementComponent.AddForceAtLocation");

	UShipMovementComponent_AddForceAtLocation_Params params;
	params.Force = Force;
	params.LocationWorld = LocationWorld;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ShipMovementComponent.AddForce
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                Force                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool*                          bAccelChange                   (Parm, ZeroConstructor, IsPlainOldData)

void UShipMovementComponent::AddForce(struct FVector* Force, bool* bAccelChange)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ShipMovementComponent.AddForce");

	UShipMovementComponent_AddForce_Params params;
	params.Force = Force;
	params.bAccelChange = bAccelChange;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ShipMovementComponent.AddAngularImpulseRadians
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                AngularImpulseRadWorld         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool*                          bVelocityChange                (Parm, ZeroConstructor, IsPlainOldData)

void UShipMovementComponent::AddAngularImpulseRadians(struct FVector* AngularImpulseRadWorld, bool* bVelocityChange)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ShipMovementComponent.AddAngularImpulseRadians");

	UShipMovementComponent_AddAngularImpulseRadians_Params params;
	params.AngularImpulseRadWorld = AngularImpulseRadWorld;
	params.bVelocityChange = bVelocityChange;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ShipMovementComponent.AddAngularImpulseDegree
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                AngularImpulseDegWorld         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool*                          bVelocityChange                (Parm, ZeroConstructor, IsPlainOldData)

void UShipMovementComponent::AddAngularImpulseDegree(struct FVector* AngularImpulseDegWorld, bool* bVelocityChange)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ShipMovementComponent.AddAngularImpulseDegree");

	UShipMovementComponent_AddAngularImpulseDegree_Params params;
	params.AngularImpulseDegWorld = AngularImpulseDegWorld;
	params.bVelocityChange = bVelocityChange;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ShipMovementComponent.AddAngularForceRadians
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                AngularForceRadWorld           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UShipMovementComponent::AddAngularForceRadians(struct FVector* AngularForceRadWorld)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ShipMovementComponent.AddAngularForceRadians");

	UShipMovementComponent_AddAngularForceRadians_Params params;
	params.AngularForceRadWorld = AngularForceRadWorld;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ShipMovementComponent.AddAngularForceDegreeLocal
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                AngularForceDegLocal           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UShipMovementComponent::AddAngularForceDegreeLocal(struct FVector* AngularForceDegLocal)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ShipMovementComponent.AddAngularForceDegreeLocal");

	UShipMovementComponent_AddAngularForceDegreeLocal_Params params;
	params.AngularForceDegLocal = AngularForceDegLocal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ShipMovementComponent.AddAngularForceDegree
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                AngularForceDegWorld           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UShipMovementComponent::AddAngularForceDegree(struct FVector* AngularForceDegWorld)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ShipMovementComponent.AddAngularForceDegree");

	UShipMovementComponent_AddAngularForceDegree_Params params;
	params.AngularForceDegWorld = AngularForceDegWorld;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ShipMovementComponent.AddAccelerationModifier
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FModifier*              Modifier                       (Parm)
// bool*                          AffectOnlyForwardAcceleration  (Parm, ZeroConstructor, IsPlainOldData)
// struct FModifierHandle         ReturnValue                    (Parm, OutParm, ReturnParm)

struct FModifierHandle UShipMovementComponent::AddAccelerationModifier(struct FModifier* Modifier, bool* AffectOnlyForwardAcceleration)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ShipMovementComponent.AddAccelerationModifier");

	UShipMovementComponent_AddAccelerationModifier_Params params;
	params.Modifier = Modifier;
	params.AffectOnlyForwardAcceleration = AffectOnlyForwardAcceleration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.MovementRootComponent.RebuildCollision
// (Final, Native, Public, BlueprintCallable)

void UMovementRootComponent::RebuildCollision()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.MovementRootComponent.RebuildCollision");

	UMovementRootComponent_RebuildCollision_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.NavNode.UpdateConnectionArrows
// (Final, Native, Public, BlueprintCallable)

void ANavNode::UpdateConnectionArrows()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.NavNode.UpdateConnectionArrows");

	ANavNode_UpdateConnectionArrows_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.NavNode.UpdateAutoConnections
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          AlsoUpdateNeighbors            (Parm, ZeroConstructor, IsPlainOldData)

void ANavNode::UpdateAutoConnections(bool* AlsoUpdateNeighbors)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.NavNode.UpdateAutoConnections");

	ANavNode_UpdateAutoConnections_Params params;
	params.AlsoUpdateNeighbors = AlsoUpdateNeighbors;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.PhysicsScale.UUnitsToMeters
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float*                         UnrealUnits                    (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bTravelModeScale               (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UPhysicsScale::STATIC_UUnitsToMeters(float* UnrealUnits, bool* bTravelModeScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.PhysicsScale.UUnitsToMeters");

	UPhysicsScale_UUnitsToMeters_Params params;
	params.UnrealUnits = UnrealUnits;
	params.bTravelModeScale = bTravelModeScale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.PhysicsScale.UUnitsToLightseconds
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float*                         UnrealUnits                    (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bTravelModeScale               (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UPhysicsScale::STATIC_UUnitsToLightseconds(float* UnrealUnits, bool* bTravelModeScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.PhysicsScale.UUnitsToLightseconds");

	UPhysicsScale_UUnitsToLightseconds_Params params;
	params.UnrealUnits = UnrealUnits;
	params.bTravelModeScale = bTravelModeScale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.PhysicsScale.UUnitsToKilometers
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float*                         UnrealUnits                    (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bTravelModeScale               (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UPhysicsScale::STATIC_UUnitsToKilometers(float* UnrealUnits, bool* bTravelModeScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.PhysicsScale.UUnitsToKilometers");

	UPhysicsScale_UUnitsToKilometers_Params params;
	params.UnrealUnits = UnrealUnits;
	params.bTravelModeScale = bTravelModeScale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.PhysicsScale.UUnitsToCentimeters
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float*                         UnrealUnits                    (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bTravelModeScale               (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UPhysicsScale::STATIC_UUnitsToCentimeters(float* UnrealUnits, bool* bTravelModeScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.PhysicsScale.UUnitsToCentimeters");

	UPhysicsScale_UUnitsToCentimeters_Params params;
	params.UnrealUnits = UnrealUnits;
	params.bTravelModeScale = bTravelModeScale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.PhysicsScale.UUnitspsToKmh
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float*                         UnrealUnitsPerSecond           (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UPhysicsScale::STATIC_UUnitspsToKmh(float* UnrealUnitsPerSecond)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.PhysicsScale.UUnitspsToKmh");

	UPhysicsScale_UUnitspsToKmh_Params params;
	params.UnrealUnitsPerSecond = UnrealUnitsPerSecond;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.PhysicsScale.UUnitsPerMeter
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool*                          bTravelModeScale               (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UPhysicsScale::STATIC_UUnitsPerMeter(bool* bTravelModeScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.PhysicsScale.UUnitsPerMeter");

	UPhysicsScale_UUnitsPerMeter_Params params;
	params.bTravelModeScale = bTravelModeScale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.PhysicsScale.MpsToKmh
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float*                         MetersPerSecond                (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UPhysicsScale::STATIC_MpsToKmh(float* MetersPerSecond)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.PhysicsScale.MpsToKmh");

	UPhysicsScale_MpsToKmh_Params params;
	params.MetersPerSecond = MetersPerSecond;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.PhysicsScale.MetersToUUnits
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float*                         Meters                         (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bTravelModeScale               (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UPhysicsScale::STATIC_MetersToUUnits(float* Meters, bool* bTravelModeScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.PhysicsScale.MetersToUUnits");

	UPhysicsScale_MetersToUUnits_Params params;
	params.Meters = Meters;
	params.bTravelModeScale = bTravelModeScale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.PhysicsScale.LocationsOnMapUnitsToSystemUnits
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UPhysicsScale::STATIC_LocationsOnMapUnitsToSystemUnits()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.PhysicsScale.LocationsOnMapUnitsToSystemUnits");

	UPhysicsScale_LocationsOnMapUnitsToSystemUnits_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.PhysicsScale.LightsecondsToUUnits
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float*                         Lightseconds                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bTravelModeScale               (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UPhysicsScale::STATIC_LightsecondsToUUnits(float* Lightseconds, bool* bTravelModeScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.PhysicsScale.LightsecondsToUUnits");

	UPhysicsScale_LightsecondsToUUnits_Params params;
	params.Lightseconds = Lightseconds;
	params.bTravelModeScale = bTravelModeScale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.PhysicsScale.KmhToUUnitsps
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float*                         KilometersPerHour              (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UPhysicsScale::STATIC_KmhToUUnitsps(float* KilometersPerHour)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.PhysicsScale.KmhToUUnitsps");

	UPhysicsScale_KmhToUUnitsps_Params params;
	params.KilometersPerHour = KilometersPerHour;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.PhysicsScale.KmhToMps
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float*                         KilometersPerHour              (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UPhysicsScale::STATIC_KmhToMps(float* KilometersPerHour)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.PhysicsScale.KmhToMps");

	UPhysicsScale_KmhToMps_Params params;
	params.KilometersPerHour = KilometersPerHour;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.PhysicsScale.KilometersToUUnits
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float*                         Kilometers                     (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bTravelModeScale               (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UPhysicsScale::STATIC_KilometersToUUnits(float* Kilometers, bool* bTravelModeScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.PhysicsScale.KilometersToUUnits");

	UPhysicsScale_KilometersToUUnits_Params params;
	params.Kilometers = Kilometers;
	params.bTravelModeScale = bTravelModeScale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.PhysicsScale.CentimetersToUUnits
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float*                         Centimeters                    (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bTravelModeScale               (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UPhysicsScale::STATIC_CentimetersToUUnits(float* Centimeters, bool* bTravelModeScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.PhysicsScale.CentimetersToUUnits");

	UPhysicsScale_CentimetersToUUnits_Params params;
	params.Centimeters = Centimeters;
	params.bTravelModeScale = bTravelModeScale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.PickupBase.UpdatePullRangeFromTractorBeam
// (Final, Native, Private)

void APickupBase::UpdatePullRangeFromTractorBeam()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.PickupBase.UpdatePullRangeFromTractorBeam");

	APickupBase_UpdatePullRangeFromTractorBeam_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.PickupBase.RefreshHUDInfo
// (Native, Public, BlueprintCallable)

void APickupBase::RefreshHUDInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.PickupBase.RefreshHUDInfo");

	APickupBase_RefreshHUDInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.PickupBase.RecreatePickupsAfterGroupPull
// (Final, Native, Public, BlueprintCallable)

void APickupBase::RecreatePickupsAfterGroupPull()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.PickupBase.RecreatePickupsAfterGroupPull");

	APickupBase_RecreatePickupsAfterGroupPull_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.PickupBase.PlayCollectSound
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor**                 CollectingActor                (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bWithoutUserFeedback           (Parm, ZeroConstructor, IsPlainOldData)
// int*                           AmountCollected                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APickupBase::PlayCollectSound(class AActor** CollectingActor, bool* bWithoutUserFeedback, int* AmountCollected)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.PickupBase.PlayCollectSound");

	APickupBase_PlayCollectSound_Params params;
	params.CollectingActor = CollectingActor;
	params.bWithoutUserFeedback = bWithoutUserFeedback;
	params.AmountCollected = AmountCollected;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.PickupBase.OnCollect
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 CollectingActor                (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bWithoutUserFeedback           (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int APickupBase::OnCollect(class AActor** CollectingActor, bool* bWithoutUserFeedback)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.PickupBase.OnCollect");

	APickupBase_OnCollect_Params params;
	params.CollectingActor = CollectingActor;
	params.bWithoutUserFeedback = bWithoutUserFeedback;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.PickupBase.IsInTractorBeamRange
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor**                 ActorWithTractorBeam           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APickupBase::IsInTractorBeamRange(class AActor** ActorWithTractorBeam)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.PickupBase.IsInTractorBeamRange");

	APickupBase_IsInTractorBeamRange_Params params;
	params.ActorWithTractorBeam = ActorWithTractorBeam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.PickupBase.InteractPullItem
// (Final, Native, Private)
// Parameters:
// class UInteractComponent**     InteractComponent              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 InteractActor                  (Parm, ZeroConstructor, IsPlainOldData)

void APickupBase::InteractPullItem(class UInteractComponent** InteractComponent, class AActor** InteractActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.PickupBase.InteractPullItem");

	APickupBase_InteractPullItem_Params params;
	params.InteractComponent = InteractComponent;
	params.InteractActor = InteractActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.PickupBase.InteractPullAllItems
// (Final, Native, Private)
// Parameters:
// class UInteractComponent**     InteractComponent              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 InteractActor                  (Parm, ZeroConstructor, IsPlainOldData)

void APickupBase::InteractPullAllItems(class UInteractComponent** InteractComponent, class AActor** InteractActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.PickupBase.InteractPullAllItems");

	APickupBase_InteractPullAllItems_Params params;
	params.InteractComponent = InteractComponent;
	params.InteractActor = InteractActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.PickupBase.InteractCollect
// (Final, Native, Private)
// Parameters:
// class UInteractComponent**     InteractComponent              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 InteractActor                  (Parm, ZeroConstructor, IsPlainOldData)

void APickupBase::InteractCollect(class UInteractComponent** InteractComponent, class AActor** InteractActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.PickupBase.InteractCollect");

	APickupBase_InteractCollect_Params params;
	params.InteractComponent = InteractComponent;
	params.InteractActor = InteractActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.PickupBase.GetRarity
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TEnumAsByte<EItemRarity>       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<EItemRarity> APickupBase::GetRarity()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.PickupBase.GetRarity");

	APickupBase_GetRarity_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.PickupBase.GetPickupName
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText APickupBase::GetPickupName()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.PickupBase.GetPickupName");

	APickupBase_GetPickupName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.PickupBase.GetPickupHUDInfo
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FPickupHUDInfo>  HUDInfoOut                     (Parm, OutParm, ZeroConstructor)

void APickupBase::GetPickupHUDInfo(TArray<struct FPickupHUDInfo>* HUDInfoOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.PickupBase.GetPickupHUDInfo");

	APickupBase_GetPickupHUDInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HUDInfoOut != nullptr)
		*HUDInfoOut = params.HUDInfoOut;
}


// Function ES2.PickupBase.GetItem
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UItem*                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UItem* APickupBase::GetItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.PickupBase.GetItem");

	APickupBase_GetItem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.PickupBase.GetAmount
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int APickupBase::GetAmount()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.PickupBase.GetAmount");

	APickupBase_GetAmount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.POIBase.OnLevelShown
// (Final, Native, Protected)

void APOIBase::OnLevelShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.POIBase.OnLevelShown");

	APOIBase_OnLevelShown_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.POIBase.OnLevelLoadedWriteSeedInLevelData
// (Final, Native, Protected)

void APOIBase::OnLevelLoadedWriteSeedInLevelData()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.POIBase.OnLevelLoadedWriteSeedInLevelData");

	APOIBase_OnLevelLoadedWriteSeedInLevelData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.PoolableActor.SetPoolAndDeactivate
// (Native, Public)
// Parameters:
// class UActorPool**             Pool                           (Parm, ZeroConstructor, IsPlainOldData)

void UPoolableActor::SetPoolAndDeactivate(class UActorPool** Pool)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.PoolableActor.SetPoolAndDeactivate");

	UPoolableActor_SetPoolAndDeactivate_Params params;
	params.Pool = Pool;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.PoolableActor.OnBecomeInactive
// (Event, Public, BlueprintEvent)

void UPoolableActor::OnBecomeInactive()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.PoolableActor.OnBecomeInactive");

	UPoolableActor_OnBecomeInactive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.PoolableActor.OnBecomeActive
// (Event, Public, BlueprintEvent)

void UPoolableActor::OnBecomeActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.PoolableActor.OnBecomeActive");

	UPoolableActor_OnBecomeActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.PortableComponent.SetEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void UPortableComponent::SetEnabled(bool* bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.PortableComponent.SetEnabled");

	UPortableComponent_SetEnabled_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.PortableComponent.SetAllowFlinging
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// bool*                          bAllow                         (Parm, ZeroConstructor, IsPlainOldData)

void UPortableComponent::SetAllowFlinging(bool* bAllow)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.PortableComponent.SetAllowFlinging");

	UPortableComponent_SetAllowFlinging_Params params;
	params.bAllow = bAllow;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.PortableComponent.InteractHold_Internal
// (Final, Native, Private)
// Parameters:
// class UInteractComponent**     InteractComponent              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 InteractActor                  (Parm, ZeroConstructor, IsPlainOldData)

void UPortableComponent::InteractHold_Internal(class UInteractComponent** InteractComponent, class AActor** InteractActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.PortableComponent.InteractHold_Internal");

	UPortableComponent_InteractHold_Internal_Params params;
	params.InteractComponent = InteractComponent;
	params.InteractActor = InteractActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.PortableComponent.Interact_Internal
// (Final, Native, Private)
// Parameters:
// class UInteractComponent**     InteractComponent              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 InteractActor                  (Parm, ZeroConstructor, IsPlainOldData)

void UPortableComponent::Interact_Internal(class UInteractComponent** InteractComponent, class AActor** InteractActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.PortableComponent.Interact_Internal");

	UPortableComponent_Interact_Internal_Params params;
	params.InteractComponent = InteractComponent;
	params.InteractActor = InteractActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.PortableComponent.Interact
// (Final, Native, Protected)
// Parameters:
// class UInteractComponent**     InteractComponent              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 InteractActor                  (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bFling                         (Parm, ZeroConstructor, IsPlainOldData)

void UPortableComponent::Interact(class UInteractComponent** InteractComponent, class AActor** InteractActor, bool* bFling)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.PortableComponent.Interact");

	UPortableComponent_Interact_Params params;
	params.InteractComponent = InteractComponent;
	params.InteractActor = InteractActor;
	params.bFling = bFling;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.PortableComponent.Detach
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bFling                         (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bKeepMomentum                  (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bSetUnusable                   (Parm, ZeroConstructor, IsPlainOldData)

void UPortableComponent::Detach(bool* bFling, bool* bKeepMomentum, bool* bSetUnusable)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.PortableComponent.Detach");

	UPortableComponent_Detach_Params params;
	params.bFling = bFling;
	params.bKeepMomentum = bKeepMomentum;
	params.bSetUnusable = bSetUnusable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ProjectileBase.SetTargetActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor**                 Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void AProjectileBase::SetTargetActor(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ProjectileBase.SetTargetActor");

	AProjectileBase_SetTargetActor_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ProjectileBase.OverrideHoming
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          HomingEnabled                  (Parm, ZeroConstructor, IsPlainOldData)

void AProjectileBase::OverrideHoming(bool* HomingEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ProjectileBase.OverrideHoming");

	AProjectileBase_OverrideHoming_Params params;
	params.HomingEnabled = HomingEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ProjectileBase.OnSpawnImpact
// (Native, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform*             SpawnTransform                 (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FHitResult*             HitInfo                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// EWeaponImpact*                 ImpactType                     (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bCriticalHit                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                ShotDirection                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class AActor**                 InstigatorActor                (Parm, ZeroConstructor, IsPlainOldData)

void AProjectileBase::OnSpawnImpact(struct FTransform* SpawnTransform, struct FHitResult* HitInfo, EWeaponImpact* ImpactType, bool* bCriticalHit, struct FVector* ShotDirection, class AActor** InstigatorActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ProjectileBase.OnSpawnImpact");

	AProjectileBase_OnSpawnImpact_Params params;
	params.SpawnTransform = SpawnTransform;
	params.HitInfo = HitInfo;
	params.ImpactType = ImpactType;
	params.bCriticalHit = bCriticalHit;
	params.ShotDirection = ShotDirection;
	params.InstigatorActor = InstigatorActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ProjectileBase.OnProjectileDestroyed
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bLifeTimeExpired               (Parm, ZeroConstructor, IsPlainOldData)

void AProjectileBase::OnProjectileDestroyed(bool* bLifeTimeExpired)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ProjectileBase.OnProjectileDestroyed");

	AProjectileBase_OnProjectileDestroyed_Params params;
	params.bLifeTimeExpired = bLifeTimeExpired;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ProjectileBase.OnMissileMissed
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void AProjectileBase::OnMissileMissed()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ProjectileBase.OnMissileMissed");

	AProjectileBase_OnMissileMissed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ProjectileBase.OnImpact
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FHitResult*             HitResult                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AProjectileBase::OnImpact(struct FHitResult* HitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ProjectileBase.OnImpact");

	AProjectileBase_OnImpact_Params params;
	params.HitResult = HitResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ProjectileBase.ManualImpact
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                HitPoint                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector*                HitNormal                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class AActor**                 HitActor                       (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    HitComponent                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AProjectileBase::ManualImpact(struct FVector* HitPoint, struct FVector* HitNormal, class AActor** HitActor, class UPrimitiveComponent** HitComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ProjectileBase.ManualImpact");

	AProjectileBase_ManualImpact_Params params;
	params.HitPoint = HitPoint;
	params.HitNormal = HitNormal;
	params.HitActor = HitActor;
	params.HitComponent = HitComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ProjectileBase.IsProjectileDestroyed
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AProjectileBase::IsProjectileDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ProjectileBase.IsProjectileDestroyed");

	AProjectileBase_IsProjectileDestroyed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.ProjectileBase.IsPooled
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AProjectileBase::IsPooled()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ProjectileBase.IsPooled");

	AProjectileBase_IsPooled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.ProjectileBase.GetWeaponSeed
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AProjectileBase::GetWeaponSeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ProjectileBase.GetWeaponSeed");

	AProjectileBase_GetWeaponSeed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.ProjectileBase.GetWeaponItem
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UItem*                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UItem* AProjectileBase::GetWeaponItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ProjectileBase.GetWeaponItem");

	AProjectileBase_GetWeaponItem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.ProjectileBase.GetTargetActor
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* AProjectileBase::GetTargetActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ProjectileBase.GetTargetActor");

	AProjectileBase_GetTargetActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.RailTurretMovementComponent.SnapTurretOntoSpline
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         DistanceThreshold              (Parm, ZeroConstructor, IsPlainOldData)

void URailTurretMovementComponent::SnapTurretOntoSpline(float* DistanceThreshold)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.RailTurretMovementComponent.SnapTurretOntoSpline");

	URailTurretMovementComponent_SnapTurretOntoSpline_Params params;
	params.DistanceThreshold = DistanceThreshold;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.RailTurretMovementComponent.AddTorqueImpulse
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                TorqueImpulse                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void URailTurretMovementComponent::AddTorqueImpulse(struct FVector* TorqueImpulse)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.RailTurretMovementComponent.AddTorqueImpulse");

	URailTurretMovementComponent_AddTorqueImpulse_Params params;
	params.TorqueImpulse = TorqueImpulse;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.RailTurretMovementComponent.AddTorqueForce
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                TurretMovement                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void URailTurretMovementComponent::AddTorqueForce(struct FVector* TurretMovement)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.RailTurretMovementComponent.AddTorqueForce");

	URailTurretMovementComponent_AddTorqueForce_Params params;
	params.TurretMovement = TurretMovement;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.RailTurretMovementComponent.AddImpulse
// (Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                Impulse                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool*                          bVelocityChange                (Parm, ZeroConstructor, IsPlainOldData)

void URailTurretMovementComponent::AddImpulse(struct FVector* Impulse, bool* bVelocityChange)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.RailTurretMovementComponent.AddImpulse");

	URailTurretMovementComponent_AddImpulse_Params params;
	params.Impulse = Impulse;
	params.bVelocityChange = bVelocityChange;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.RailTurretMovementComponent.AddForce
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                Force                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool*                          bAccelChange                   (Parm, ZeroConstructor, IsPlainOldData)

void URailTurretMovementComponent::AddForce(struct FVector* Force, bool* bAccelChange)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.RailTurretMovementComponent.AddForce");

	URailTurretMovementComponent_AddForce_Params params;
	params.Force = Force;
	params.bAccelChange = bAccelChange;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.SavableInterface.SaveState
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// TMap<struct FName, struct FGenericSaveDataBuffer> GenericSaveDataMap             (Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USavableInterface::SaveState(TMap<struct FName, struct FGenericSaveDataBuffer>* GenericSaveDataMap)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.SavableInterface.SaveState");

	USavableInterface_SaveState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GenericSaveDataMap != nullptr)
		*GenericSaveDataMap = params.GenericSaveDataMap;

	return params.ReturnValue;
}


// Function ES2.SavableInterface.RestoreState
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// TMap<struct FName, struct FGenericSaveDataBuffer>* GenericSaveDataMap             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USavableInterface::RestoreState(TMap<struct FName, struct FGenericSaveDataBuffer>* GenericSaveDataMap)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.SavableInterface.RestoreState");

	USavableInterface_RestoreState_Params params;
	params.GenericSaveDataMap = GenericSaveDataMap;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.SavableInterface.OffsiteSimulate
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// float*                         TimePassed                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USavableInterface::OffsiteSimulate(float* TimePassed)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.SavableInterface.OffsiteSimulate");

	USavableInterface_OffsiteSimulate_Params params;
	params.TimePassed = TimePassed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.SensorComponent.GetSensorRangeForType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<ERegisterIds>*     RegisteredType                 (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsTrurret                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float USensorComponent::GetSensorRangeForType(TEnumAsByte<ERegisterIds>* RegisteredType, bool* bIsTrurret)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.SensorComponent.GetSensorRangeForType");

	USensorComponent_GetSensorRangeForType_Params params;
	params.RegisteredType = RegisteredType;
	params.bIsTrurret = bIsTrurret;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.SequenceBase.TogglePause
// (Final, Native, Private)
// Parameters:
// bool*                          bIsPaused                      (Parm, ZeroConstructor, IsPlainOldData)

void ASequenceBase::TogglePause(bool* bIsPaused)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.SequenceBase.TogglePause");

	ASequenceBase_TogglePause_Params params;
	params.bIsPaused = bIsPaused;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.SequenceBase.StopSmoothCameraShake
// (Final, Native, Public, BlueprintCallable)

void ASequenceBase::StopSmoothCameraShake()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.SequenceBase.StopSmoothCameraShake");

	ASequenceBase_StopSmoothCameraShake_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.SequenceBase.Started
// (Final, Native, Public)

void ASequenceBase::Started()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.SequenceBase.Started");

	ASequenceBase_Started_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.SequenceBase.SpawnSequence
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UClass**                 SequenceBP                     (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AActor*>*         ActorsToBind                   (Parm, ZeroConstructor)
// TMap<struct FMovieSceneObjectBindingID, class AActor*>* ManuallyBoundActors            (Parm, ZeroConstructor)
// class ASequenceBase*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ASequenceBase* ASequenceBase::STATIC_SpawnSequence(class UClass** SequenceBP, TArray<class AActor*>* ActorsToBind, TMap<struct FMovieSceneObjectBindingID, class AActor*>* ManuallyBoundActors)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.SequenceBase.SpawnSequence");

	ASequenceBase_SpawnSequence_Params params;
	params.SequenceBP = SequenceBP;
	params.ActorsToBind = ActorsToBind;
	params.ManuallyBoundActors = ManuallyBoundActors;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.SequenceBase.SkipDialogLine
// (Final, Native, Private)

void ASequenceBase::SkipDialogLine()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.SequenceBase.SkipDialogLine");

	ASequenceBase_SkipDialogLine_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.SequenceBase.SetPlayerPawnBinding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMovieSceneObjectBindingID* Binding                        (Parm)

void ASequenceBase::SetPlayerPawnBinding(struct FMovieSceneObjectBindingID* Binding)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.SequenceBase.SetPlayerPawnBinding");

	ASequenceBase_SetPlayerPawnBinding_Params params;
	params.Binding = Binding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.SequenceBase.SetPlayerLookAtBinding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMovieSceneObjectBindingID* Binding                        (Parm)

void ASequenceBase::SetPlayerLookAtBinding(struct FMovieSceneObjectBindingID* Binding)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.SequenceBase.SetPlayerLookAtBinding");

	ASequenceBase_SetPlayerLookAtBinding_Params params;
	params.Binding = Binding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.SequenceBase.SetBlendToTargetBinding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMovieSceneObjectBindingID* Binding                        (Parm)

void ASequenceBase::SetBlendToTargetBinding(struct FMovieSceneObjectBindingID* Binding)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.SequenceBase.SetBlendToTargetBinding");

	ASequenceBase_SetBlendToTargetBinding_Params params;
	params.Binding = Binding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.SequenceBase.ResumeSequenceByID
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName*                  InSequenceID                   (Parm, ZeroConstructor, IsPlainOldData)

void ASequenceBase::STATIC_ResumeSequenceByID(struct FName* InSequenceID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.SequenceBase.ResumeSequenceByID");

	ASequenceBase_ResumeSequenceByID_Params params;
	params.InSequenceID = InSequenceID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.SequenceBase.ResumeSequence
// (Final, Native, Public, BlueprintCallable)

void ASequenceBase::ResumeSequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.SequenceBase.ResumeSequence");

	ASequenceBase_ResumeSequence_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.SequenceBase.ResetGenericSequenceChanges
// (Final, Native, Private)

void ASequenceBase::ResetGenericSequenceChanges()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.SequenceBase.ResetGenericSequenceChanges");

	ASequenceBase_ResetGenericSequenceChanges_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.SequenceBase.ResetCameraToPlayer
// (Final, Native, Static, Public, BlueprintCallable)

void ASequenceBase::STATIC_ResetCameraToPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.SequenceBase.ResetCameraToPlayer");

	ASequenceBase_ResetCameraToPlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.SequenceBase.ResetBindings
// (Final, Native, Static, Public, BlueprintCallable)

void ASequenceBase::STATIC_ResetBindings()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.SequenceBase.ResetBindings");

	ASequenceBase_ResetBindings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.SequenceBase.PostBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// class ALevelSequenceActor**    InLevelSequenceActor           (Parm, ZeroConstructor, IsPlainOldData)

void ASequenceBase::PostBeginPlay(class ALevelSequenceActor** InLevelSequenceActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.SequenceBase.PostBeginPlay");

	ASequenceBase_PostBeginPlay_Params params;
	params.InLevelSequenceActor = InLevelSequenceActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.SequenceBase.PlaySmoothCameraShake
// (Final, Native, Static, Public, BlueprintCallable)

void ASequenceBase::STATIC_PlaySmoothCameraShake()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.SequenceBase.PlaySmoothCameraShake");

	ASequenceBase_PlaySmoothCameraShake_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.SequenceBase.PauseSequence
// (Final, Native, Public, BlueprintCallable)

void ASequenceBase::PauseSequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.SequenceBase.PauseSequence");

	ASequenceBase_PauseSequence_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.SequenceBase.Finished
// (Final, Native, Public)

void ASequenceBase::Finished()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.SequenceBase.Finished");

	ASequenceBase_Finished_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.SequenceBase.DockingStarted
// (Final, Native, Public)

void ASequenceBase::DockingStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.SequenceBase.DockingStarted");

	ASequenceBase_DockingStarted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.SequenceBase.Cancel
// (Final, Native, Public)

void ASequenceBase::Cancel()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.SequenceBase.Cancel");

	ASequenceBase_Cancel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.SequenceManager.TranslateActorToTransform
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor**                 ActorToRail                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform*             TransformToTranslate           (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class UCurveFloat**            Curve                          (Parm, ZeroConstructor, IsPlainOldData)
// EEngineOpacityControlledBy*    EngineOpacityControlledBy      (Parm, ZeroConstructor, IsPlainOldData)
// class UCurveFloat**            EngineOpacityCurve             (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ELerpInterpolationMode>* LerpMode                       (Parm, ZeroConstructor, IsPlainOldData)
// int*                           PointIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// class UTranslateActorToTransformComponent* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTranslateActorToTransformComponent* USequenceManager::STATIC_TranslateActorToTransform(class AActor** ActorToRail, struct FTransform* TransformToTranslate, class UCurveFloat** Curve, EEngineOpacityControlledBy* EngineOpacityControlledBy, class UCurveFloat** EngineOpacityCurve, TEnumAsByte<ELerpInterpolationMode>* LerpMode, int* PointIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.SequenceManager.TranslateActorToTransform");

	USequenceManager_TranslateActorToTransform_Params params;
	params.ActorToRail = ActorToRail;
	params.TransformToTranslate = TransformToTranslate;
	params.Curve = Curve;
	params.EngineOpacityControlledBy = EngineOpacityControlledBy;
	params.EngineOpacityCurve = EngineOpacityCurve;
	params.LerpMode = LerpMode;
	params.PointIndex = PointIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.SequenceManager.Started
// (Final, Native, Private)

void USequenceManager::Started()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.SequenceManager.Started");

	USequenceManager_Started_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.SequenceManager.IsSkippableSequenceActive
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USequenceManager::STATIC_IsSkippableSequenceActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.SequenceManager.IsSkippableSequenceActive");

	USequenceManager_IsSkippableSequenceActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.SequenceManager.GetSplineComponent
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class ACameraRig_Rail**        CameraRigRail                  (Parm, ZeroConstructor, IsPlainOldData)
// class USplineComponent*        ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class USplineComponent* USequenceManager::STATIC_GetSplineComponent(class ACameraRig_Rail** CameraRigRail)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.SequenceManager.GetSplineComponent");

	USequenceManager_GetSplineComponent_Params params;
	params.CameraRigRail = CameraRigRail;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.SequenceManager.GetCurrentLevelSequenceActor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class ALevelSequenceActor*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ALevelSequenceActor* USequenceManager::STATIC_GetCurrentLevelSequenceActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.SequenceManager.GetCurrentLevelSequenceActor");

	USequenceManager_GetCurrentLevelSequenceActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.SequenceManager.Finished
// (Final, Native, Private)

void USequenceManager::Finished()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.SequenceManager.Finished");

	USequenceManager_Finished_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.SequenceManager.CreateSpline
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor**                 AttachToThis                   (Parm, ZeroConstructor, IsPlainOldData)

void USequenceManager::CreateSpline(class AActor** AttachToThis)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.SequenceManager.CreateSpline");

	USequenceManager_CreateSpline_Params params;
	params.AttachToThis = AttachToThis;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.SerializationLib.WriteTransformArray
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TMap<struct FName, struct FGenericSaveDataBuffer> GenericSaveDataMap             (Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FName*                  BufferKey                      (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FTransform>      Transform                      (Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool*                          bAppend                        (Parm, ZeroConstructor, IsPlainOldData)

void USerializationLib::STATIC_WriteTransformArray(struct FName* BufferKey, bool* bAppend, TMap<struct FName, struct FGenericSaveDataBuffer>* GenericSaveDataMap, TArray<struct FTransform>* Transform)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.SerializationLib.WriteTransformArray");

	USerializationLib_WriteTransformArray_Params params;
	params.BufferKey = BufferKey;
	params.bAppend = bAppend;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GenericSaveDataMap != nullptr)
		*GenericSaveDataMap = params.GenericSaveDataMap;
	if (Transform != nullptr)
		*Transform = params.Transform;
}


// Function ES2.SerializationLib.WriteFloat
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TMap<struct FName, struct FGenericSaveDataBuffer> GenericSaveDataMap             (Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FName*                  BufferKey                      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Float                          (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAppend                        (Parm, ZeroConstructor, IsPlainOldData)

void USerializationLib::STATIC_WriteFloat(struct FName* BufferKey, float* Float, bool* bAppend, TMap<struct FName, struct FGenericSaveDataBuffer>* GenericSaveDataMap)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.SerializationLib.WriteFloat");

	USerializationLib_WriteFloat_Params params;
	params.BufferKey = BufferKey;
	params.Float = Float;
	params.bAppend = bAppend;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GenericSaveDataMap != nullptr)
		*GenericSaveDataMap = params.GenericSaveDataMap;
}


// Function ES2.SerializationLib.WriteESVariantMap
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TMap<struct FName, struct FGenericSaveDataBuffer> GenericSaveDataMap             (Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FName*                  BufferKey                      (Parm, ZeroConstructor, IsPlainOldData)
// TMap<struct FName, struct FESVariant> Map                            (Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool*                          bAppend                        (Parm, ZeroConstructor, IsPlainOldData)

void USerializationLib::STATIC_WriteESVariantMap(struct FName* BufferKey, bool* bAppend, TMap<struct FName, struct FGenericSaveDataBuffer>* GenericSaveDataMap, TMap<struct FName, struct FESVariant>* Map)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.SerializationLib.WriteESVariantMap");

	USerializationLib_WriteESVariantMap_Params params;
	params.BufferKey = BufferKey;
	params.bAppend = bAppend;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GenericSaveDataMap != nullptr)
		*GenericSaveDataMap = params.GenericSaveDataMap;
	if (Map != nullptr)
		*Map = params.Map;
}


// Function ES2.SerializationLib.ReadTransformArray
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TMap<struct FName, struct FGenericSaveDataBuffer>* GenericSaveDataMap             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FName*                  BufferKey                      (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FTransform>      DataOut                        (Parm, OutParm, ZeroConstructor)
// int                            OffsetOut                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int*                           OffsetIn                       (Parm, ZeroConstructor, IsPlainOldData)

void USerializationLib::STATIC_ReadTransformArray(TMap<struct FName, struct FGenericSaveDataBuffer>* GenericSaveDataMap, struct FName* BufferKey, int* OffsetIn, TArray<struct FTransform>* DataOut, int* OffsetOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.SerializationLib.ReadTransformArray");

	USerializationLib_ReadTransformArray_Params params;
	params.GenericSaveDataMap = GenericSaveDataMap;
	params.BufferKey = BufferKey;
	params.OffsetIn = OffsetIn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DataOut != nullptr)
		*DataOut = params.DataOut;
	if (OffsetOut != nullptr)
		*OffsetOut = params.OffsetOut;
}


// Function ES2.SerializationLib.ReadFloat
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TMap<struct FName, struct FGenericSaveDataBuffer>* GenericSaveDataMap             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FName*                  BufferKey                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          DataOut                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            OffsetOut                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int*                           OffsetIn                       (Parm, ZeroConstructor, IsPlainOldData)

void USerializationLib::STATIC_ReadFloat(TMap<struct FName, struct FGenericSaveDataBuffer>* GenericSaveDataMap, struct FName* BufferKey, int* OffsetIn, float* DataOut, int* OffsetOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.SerializationLib.ReadFloat");

	USerializationLib_ReadFloat_Params params;
	params.GenericSaveDataMap = GenericSaveDataMap;
	params.BufferKey = BufferKey;
	params.OffsetIn = OffsetIn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DataOut != nullptr)
		*DataOut = params.DataOut;
	if (OffsetOut != nullptr)
		*OffsetOut = params.OffsetOut;
}


// Function ES2.SerializationLib.ReadESVariantMap
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TMap<struct FName, struct FGenericSaveDataBuffer>* GenericSaveDataMap             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FName*                  BufferKey                      (Parm, ZeroConstructor, IsPlainOldData)
// TMap<struct FName, struct FESVariant> DataOut                        (Parm, OutParm, ZeroConstructor)
// int                            OffsetOut                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int*                           OffsetIn                       (Parm, ZeroConstructor, IsPlainOldData)

void USerializationLib::STATIC_ReadESVariantMap(TMap<struct FName, struct FGenericSaveDataBuffer>* GenericSaveDataMap, struct FName* BufferKey, int* OffsetIn, TMap<struct FName, struct FESVariant>* DataOut, int* OffsetOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.SerializationLib.ReadESVariantMap");

	USerializationLib_ReadESVariantMap_Params params;
	params.GenericSaveDataMap = GenericSaveDataMap;
	params.BufferKey = BufferKey;
	params.OffsetIn = OffsetIn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DataOut != nullptr)
		*DataOut = params.DataOut;
	if (OffsetOut != nullptr)
		*OffsetOut = params.OffsetOut;
}


// Function ES2.ShieldComponent.TakeDamage
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// float*                         DamageAmount                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsCritical                    (Parm, ZeroConstructor, IsPlainOldData)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent*           DamageEvent                    (ConstParm, Parm, OutParm, ReferenceParm)
// struct FHitResult*             HitResult                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          DamageAbsorbed                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          DamageRemaining                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UShieldComponent::TakeDamage(float* DamageAmount, bool* bIsCritical, class AController** EventInstigator, class AActor** DamageCauser, struct FDamageEvent* DamageEvent, struct FHitResult* HitResult, float* DamageAbsorbed, float* DamageRemaining)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ShieldComponent.TakeDamage");

	UShieldComponent_TakeDamage_Params params;
	params.DamageAmount = DamageAmount;
	params.bIsCritical = bIsCritical;
	params.EventInstigator = EventInstigator;
	params.DamageCauser = DamageCauser;
	params.DamageEvent = DamageEvent;
	params.HitResult = HitResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DamageAbsorbed != nullptr)
		*DamageAbsorbed = params.DamageAbsorbed;
	if (DamageRemaining != nullptr)
		*DamageRemaining = params.DamageRemaining;
}


// Function ES2.ShieldComponent.ShutDown
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          permanent                      (Parm, ZeroConstructor, IsPlainOldData)

void UShieldComponent::ShutDown(bool* permanent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ShieldComponent.ShutDown");

	UShieldComponent_ShutDown_Params params;
	params.permanent = permanent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.ShieldComponent.IsDisrupted
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UShieldComponent::IsDisrupted()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ShieldComponent.IsDisrupted");

	UShieldComponent_IsDisrupted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.ShieldComponent.GetNeedsRecharge
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UShieldComponent::GetNeedsRecharge()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ShieldComponent.GetNeedsRecharge");

	UShieldComponent_GetNeedsRecharge_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.ShieldComponent.Disrupt
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UShieldComponent::Disrupt(float* Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.ShieldComponent.Disrupt");

	UShieldComponent_Disrupt_Params params;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.TestLib.FindPath
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class ANavNode**               From                           (Parm, ZeroConstructor, IsPlainOldData)
// class ANavNode**               To                             (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class ANavNode*>        Result                         (Parm, OutParm, ZeroConstructor)

void UTestLib::STATIC_FindPath(class ANavNode** From, class ANavNode** To, TArray<class ANavNode*>* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.TestLib.FindPath");

	UTestLib_FindPath_Params params;
	params.From = From;
	params.To = To;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function ES2.TranslateActorToTransformComponent.TogglePause
// (Final, Native, Private)
// Parameters:
// bool*                          IsPaused                       (Parm, ZeroConstructor, IsPlainOldData)

void UTranslateActorToTransformComponent::TogglePause(bool* IsPaused)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.TranslateActorToTransformComponent.TogglePause");

	UTranslateActorToTransformComponent_TogglePause_Params params;
	params.IsPaused = IsPaused;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.TranslateActorToTransformComponent.TimelineFinishedCallback
// (Final, Native, Private)

void UTranslateActorToTransformComponent::TimelineFinishedCallback()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.TranslateActorToTransformComponent.TimelineFinishedCallback");

	UTranslateActorToTransformComponent_TimelineFinishedCallback_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.TranslateActorToTransformComponent.TimelineEngineOpacityCallback
// (Final, Native, Private)
// Parameters:
// float*                         CurveValue                     (Parm, ZeroConstructor, IsPlainOldData)

void UTranslateActorToTransformComponent::TimelineEngineOpacityCallback(float* CurveValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.TranslateActorToTransformComponent.TimelineEngineOpacityCallback");

	UTranslateActorToTransformComponent_TimelineEngineOpacityCallback_Params params;
	params.CurveValue = CurveValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.TranslateActorToTransformComponent.TimelineCallback
// (Final, Native, Private)
// Parameters:
// float*                         Val                            (Parm, ZeroConstructor, IsPlainOldData)

void UTranslateActorToTransformComponent::TimelineCallback(float* Val)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.TranslateActorToTransformComponent.TimelineCallback");

	UTranslateActorToTransformComponent_TimelineCallback_Params params;
	params.Val = Val;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.UiLib.UpdateSlateNavigation
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)

void UUiLib::STATIC_UpdateSlateNavigation(class UObject** WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.UiLib.UpdateSlateNavigation");

	UUiLib_UpdateSlateNavigation_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.UiLib.SetFocusWidget
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UWidget**                Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUiLib::STATIC_SetFocusWidget(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.UiLib.SetFocusWidget");

	UUiLib_SetFocusWidget_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.UiLib.RescueCurrentFocus
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)

void UUiLib::STATIC_RescueCurrentFocus(class UObject** WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.UiLib.RescueCurrentFocus");

	UUiLib_RescueCurrentFocus_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.UiLib.PushWidget
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUserWidget**            Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// EWidgetStackType*              Type                           (Parm, ZeroConstructor, IsPlainOldData)
// EWidgetPauseMode*              PauseMode                      (Parm, ZeroConstructor, IsPlainOldData)

void UUiLib::STATIC_PushWidget(class UUserWidget** Widget, EWidgetStackType* Type, EWidgetPauseMode* PauseMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.UiLib.PushWidget");

	UUiLib_PushWidget_Params params;
	params.Widget = Widget;
	params.Type = Type;
	params.PauseMode = PauseMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.UiLib.PopWidget
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UWidget**                Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUiLib::STATIC_PopWidget(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.UiLib.PopWidget");

	UUiLib_PopWidget_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.UiLib.GetZOrderOfLayer
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// EWidgetStackType*              StackType                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UUiLib::STATIC_GetZOrderOfLayer(EWidgetStackType* StackType)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.UiLib.GetZOrderOfLayer");

	UUiLib_GetZOrderOfLayer_Params params;
	params.StackType = StackType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.UiLib.GetRichTextByRarity
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText*                  Text                           (ConstParm, Parm, OutParm, ReferenceParm)
// TEnumAsByte<EItemRarity>*      Rarity                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUiLib::STATIC_GetRichTextByRarity(struct FText* Text, TEnumAsByte<EItemRarity>* Rarity)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.UiLib.GetRichTextByRarity");

	UUiLib_GetRichTextByRarity_Params params;
	params.Text = Text;
	params.Rarity = Rarity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.UiLib.GetColoredText
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText*                  Text                           (ConstParm, Parm, OutParm, ReferenceParm)
// struct FLinearColor*           LinearColor                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUiLib::STATIC_GetColoredText(struct FText* Text, struct FLinearColor* LinearColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.UiLib.GetColoredText");

	UUiLib_GetColoredText_Params params;
	params.Text = Text;
	params.LinearColor = LinearColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.UiLib.ConvertToShortKeyText
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FText*                  Text                           (Parm)
// int*                           MaxBlanks                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUiLib::STATIC_ConvertToShortKeyText(struct FText* Text, int* MaxBlanks)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.UiLib.ConvertToShortKeyText");

	UUiLib_ConvertToShortKeyText_Params params;
	params.Text = Text;
	params.MaxBlanks = MaxBlanks;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.UiLib.ClearWidgetStacks
// (Final, Native, Static, Public, BlueprintCallable)

void UUiLib::STATIC_ClearWidgetStacks()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.UiLib.ClearWidgetStacks");

	UUiLib_ClearWidgetStacks_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.UserFunctionsLib.StartNewGame
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int*                           UserIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void UUserFunctionsLib::STATIC_StartNewGame(int* UserIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.UserFunctionsLib.StartNewGame");

	UUserFunctionsLib_StartNewGame_Params params;
	params.UserIndex = UserIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.UserFunctionsLib.SaveGame
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool*                          bIsAutoSave                    (Parm, ZeroConstructor, IsPlainOldData)
// class FString*                 ReplacePreviewSaveFileName     (Parm, ZeroConstructor)
// int*                           UserIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUserFunctionsLib::STATIC_SaveGame(bool* bIsAutoSave, class FString* ReplacePreviewSaveFileName, int* UserIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.UserFunctionsLib.SaveGame");

	UUserFunctionsLib_SaveGame_Params params;
	params.bIsAutoSave = bIsAutoSave;
	params.ReplacePreviewSaveFileName = ReplacePreviewSaveFileName;
	params.UserIndex = UserIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.UserFunctionsLib.LoadGame
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString*                 SaveGameName                   (Parm, ZeroConstructor)
// int*                           UserIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUserFunctionsLib::STATIC_LoadGame(class FString* SaveGameName, int* UserIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.UserFunctionsLib.LoadGame");

	UUserFunctionsLib_LoadGame_Params params;
	params.SaveGameName = SaveGameName;
	params.UserIndex = UserIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.UserFunctionsLib.GetSaveGamePreviews
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<class USaveGamePreview*> SaveGamePreviews               (Parm, OutParm, ZeroConstructor)
// bool*                          SortByDate                     (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAutoSavesOnly                 (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bExcludeAutoSaves              (Parm, ZeroConstructor, IsPlainOldData)
// int*                           UserIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void UUserFunctionsLib::STATIC_GetSaveGamePreviews(bool* SortByDate, bool* bAutoSavesOnly, bool* bExcludeAutoSaves, int* UserIndex, TArray<class USaveGamePreview*>* SaveGamePreviews)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.UserFunctionsLib.GetSaveGamePreviews");

	UUserFunctionsLib_GetSaveGamePreviews_Params params;
	params.SortByDate = SortByDate;
	params.bAutoSavesOnly = bAutoSavesOnly;
	params.bExcludeAutoSaves = bExcludeAutoSaves;
	params.UserIndex = UserIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SaveGamePreviews != nullptr)
		*SaveGamePreviews = params.SaveGamePreviews;
}


// Function ES2.UserFunctionsLib.GetESGameUserSettings
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UESGameUserSettings*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UESGameUserSettings* UUserFunctionsLib::STATIC_GetESGameUserSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.UserFunctionsLib.GetESGameUserSettings");

	UUserFunctionsLib_GetESGameUserSettings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.UserFunctionsLib.AddBindingByName
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class ALevelSequenceActor**    Target                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class ULevelSequence**         InSequence                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class FString*                 Name                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class AActor**                 Actor                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUserFunctionsLib::STATIC_AddBindingByName(class ALevelSequenceActor** Target, class ULevelSequence** InSequence, class FString* Name, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.UserFunctionsLib.AddBindingByName");

	UUserFunctionsLib_AddBindingByName_Params params;
	params.Target = Target;
	params.InSequence = InSequence;
	params.Name = Name;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.WantedLevelManager.SpawnGroupByThreat
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<ESpawnGroup>*      SpawnGroupType                 (Parm, ZeroConstructor, IsPlainOldData)

void AWantedLevelManager::SpawnGroupByThreat(TEnumAsByte<ESpawnGroup>* SpawnGroupType)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.WantedLevelManager.SpawnGroupByThreat");

	AWantedLevelManager_SpawnGroupByThreat_Params params;
	params.SpawnGroupType = SpawnGroupType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.WantedLevelManager.OnNeutralsTurnedHostile
// (Native, Event, Public, BlueprintEvent)

void AWantedLevelManager::OnNeutralsTurnedHostile()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.WantedLevelManager.OnNeutralsTurnedHostile");

	AWantedLevelManager_OnNeutralsTurnedHostile_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.WantedLevelManager.OnHealthDepleted
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// class AController**            DamageInstigator               (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DamageAmount                   (Parm, ZeroConstructor, IsPlainOldData)

void AWantedLevelManager::OnHealthDepleted(class AActor** Actor, class AActor** DamageCauser, class AController** DamageInstigator, float* DamageAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.WantedLevelManager.OnHealthDepleted");

	AWantedLevelManager_OnHealthDepleted_Params params;
	params.Actor = Actor;
	params.DamageCauser = DamageCauser;
	params.DamageInstigator = DamageInstigator;
	params.DamageAmount = DamageAmount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.WeaponBase.WeaponTrace
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                TraceFrom                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector*                TraceTo                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class AActor**                 InstigatorActor                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AWeaponBase**            Weapon                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FHitResult AWeaponBase::STATIC_WeaponTrace(struct FVector* TraceFrom, struct FVector* TraceTo, class AActor** InstigatorActor, class AWeaponBase** Weapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.WeaponBase.WeaponTrace");

	AWeaponBase_WeaponTrace_Params params;
	params.TraceFrom = TraceFrom;
	params.TraceTo = TraceTo;
	params.InstigatorActor = InstigatorActor;
	params.Weapon = Weapon;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.WeaponBase.RequiresAmmo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AWeaponBase::RequiresAmmo()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.WeaponBase.RequiresAmmo");

	AWeaponBase_RequiresAmmo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.WeaponBase.OnStopFire
// (Native, Event, Public, BlueprintEvent)

void AWeaponBase::OnStopFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.WeaponBase.OnStopFire");

	AWeaponBase_OnStopFire_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.WeaponBase.OnStartFire
// (Native, Event, Public, HasDefaults, BlueprintEvent)
// Parameters:
// struct FVector*                StartPosition                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                EndPosition                    (Parm, ZeroConstructor, IsPlainOldData)

void AWeaponBase::OnStartFire(struct FVector* StartPosition, struct FVector* EndPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.WeaponBase.OnStartFire");

	AWeaponBase_OnStartFire_Params params;
	params.StartPosition = StartPosition;
	params.EndPosition = EndPosition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.WeaponBase.OnSpawnImpact
// (Native, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform*             SpawnTransform                 (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FHitResult*             HitInfo                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// EWeaponImpact*                 ImpactType                     (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bCriticalHit                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                ShotDirection                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class AActor**                 InstigatorActor                (Parm, ZeroConstructor, IsPlainOldData)

void AWeaponBase::OnSpawnImpact(struct FTransform* SpawnTransform, struct FHitResult* HitInfo, EWeaponImpact* ImpactType, bool* bCriticalHit, struct FVector* ShotDirection, class AActor** InstigatorActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.WeaponBase.OnSpawnImpact");

	AWeaponBase_OnSpawnImpact_Params params;
	params.SpawnTransform = SpawnTransform;
	params.HitInfo = HitInfo;
	params.ImpactType = ImpactType;
	params.bCriticalHit = bCriticalHit;
	params.ShotDirection = ShotDirection;
	params.InstigatorActor = InstigatorActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.WeaponBase.OnProjectileFired
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class AProjectileBase**        Projectile                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeaponBase::OnProjectileFired(class AProjectileBase** Projectile)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.WeaponBase.OnProjectileFired");

	AWeaponBase_OnProjectileFired_Params params;
	params.Projectile = Projectile;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.WeaponBase.OnBurstStarted
// (Native, Event, Public, BlueprintEvent)

void AWeaponBase::OnBurstStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.WeaponBase.OnBurstStarted");

	AWeaponBase_OnBurstStarted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.WeaponBase.OnBurstEnded
// (Native, Event, Public, BlueprintEvent)

void AWeaponBase::OnBurstEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.WeaponBase.OnBurstEnded");

	AWeaponBase_OnBurstEnded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.WeaponBase.IsUsingProjectilePool
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AWeaponBase::IsUsingProjectilePool()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.WeaponBase.IsUsingProjectilePool");

	AWeaponBase_IsUsingProjectilePool_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.WeaponBase.IsInstantHitWeapon
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AWeaponBase::IsInstantHitWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.WeaponBase.IsInstantHitWeapon");

	AWeaponBase_IsInstantHitWeapon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.WeaponBase.IsConstantBeamWeapon
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AWeaponBase::IsConstantBeamWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.WeaponBase.IsConstantBeamWeapon");

	AWeaponBase_IsConstantBeamWeapon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.WeaponBase.IsChargeWeapon
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AWeaponBase::IsChargeWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.WeaponBase.IsChargeWeapon");

	AWeaponBase_IsChargeWeapon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.WeaponBase.GetWeaponSeed
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AWeaponBase::GetWeaponSeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.WeaponBase.GetWeaponSeed");

	AWeaponBase_GetWeaponSeed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.WeaponBase.GetWeaponRange
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AWeaponBase::GetWeaponRange()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.WeaponBase.GetWeaponRange");

	AWeaponBase_GetWeaponRange_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.WeaponBase.GetWeaponItem
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UItem*                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UItem* AWeaponBase::GetWeaponItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.WeaponBase.GetWeaponItem");

	AWeaponBase_GetWeaponItem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.WeaponBase.GetShieldDPS
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AWeaponBase::GetShieldDPS()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.WeaponBase.GetShieldDPS");

	AWeaponBase_GetShieldDPS_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.WeaponBase.GetRampUpRatio
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AWeaponBase::GetRampUpRatio()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.WeaponBase.GetRampUpRatio");

	AWeaponBase_GetRampUpRatio_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.WeaponBase.GetOwningActor
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* AWeaponBase::GetOwningActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.WeaponBase.GetOwningActor");

	AWeaponBase_GetOwningActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.WeaponBase.GetMuzzleLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector AWeaponBase::GetMuzzleLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.WeaponBase.GetMuzzleLocation");

	AWeaponBase_GetMuzzleLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.WeaponBase.GetHullDPS
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AWeaponBase::GetHullDPS()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.WeaponBase.GetHullDPS");

	AWeaponBase_GetHullDPS_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.WeaponBase.GetCurrentAmmo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AWeaponBase::GetCurrentAmmo()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.WeaponBase.GetCurrentAmmo");

	AWeaponBase_GetCurrentAmmo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.WeaponBase.GetChargeRatio
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AWeaponBase::GetChargeRatio()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.WeaponBase.GetChargeRatio");

	AWeaponBase_GetChargeRatio_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.WeaponBase.Firing
// (Native, Event, Public, HasDefaults, BlueprintEvent)
// Parameters:
// struct FVector*                StartPosition                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                EndPosition                    (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 HitActor                       (Parm, ZeroConstructor, IsPlainOldData)

void AWeaponBase::Firing(struct FVector* StartPosition, struct FVector* EndPosition, class AActor** HitActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.WeaponBase.Firing");

	AWeaponBase_Firing_Params params;
	params.StartPosition = StartPosition;
	params.EndPosition = EndPosition;
	params.HitActor = HitActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.WeaponComponent.WillTargetBeHit
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWeaponComponent::WillTargetBeHit()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.WeaponComponent.WillTargetBeHit");

	UWeaponComponent_WillTargetBeHit_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.WeaponComponent.StopFire
// (Final, Native, Public, BlueprintCallable)

void UWeaponComponent::StopFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.WeaponComponent.StopFire");

	UWeaponComponent_StopFire_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.WeaponComponent.StartFire
// (Final, Native, Public, BlueprintCallable)

void UWeaponComponent::StartFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.WeaponComponent.StartFire");

	UWeaponComponent_StartFire_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.WeaponComponent.SetWeaponsHiddenInGame
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bNewHidden                     (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bApplyToEquippedWeaponsOnly    (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponComponent::SetWeaponsHiddenInGame(bool* bNewHidden, bool* bApplyToEquippedWeaponsOnly)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.WeaponComponent.SetWeaponsHiddenInGame");

	UWeaponComponent_SetWeaponsHiddenInGame_Params params;
	params.bNewHidden = bNewHidden;
	params.bApplyToEquippedWeaponsOnly = bApplyToEquippedWeaponsOnly;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.WeaponComponent.SetNewWeaponSlots
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FWeaponInfo>*    NewWeaponSlots                 (Parm, ZeroConstructor)

void UWeaponComponent::SetNewWeaponSlots(TArray<struct FWeaponInfo>* NewWeaponSlots)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.WeaponComponent.SetNewWeaponSlots");

	UWeaponComponent_SetNewWeaponSlots_Params params;
	params.NewWeaponSlots = NewWeaponSlots;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.WeaponComponent.SetLockedTarget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor**                 TargetToLock                   (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponComponent::SetLockedTarget(class AActor** TargetToLock)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.WeaponComponent.SetLockedTarget");

	UWeaponComponent_SetLockedTarget_Params params;
	params.TargetToLock = TargetToLock;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.WeaponComponent.SetAllowFire
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bAllow                         (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponComponent::SetAllowFire(bool* bAllow)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.WeaponComponent.SetAllowFire");

	UWeaponComponent_SetAllowFire_Params params;
	params.bAllow = bAllow;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.WeaponComponent.SelectWeapon
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass**                 WeaponClass                    (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponComponent::SelectWeapon(class UClass** WeaponClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.WeaponComponent.SelectWeapon");

	UWeaponComponent_SelectWeapon_Params params;
	params.WeaponClass = WeaponClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.WeaponComponent.SearchTargetToLock
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// TEnumAsByte<ETargetSearchStrategy>* Strategy                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                CameraLocation                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector*                CrosshairVector                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UWeaponComponent::SearchTargetToLock(TEnumAsByte<ETargetSearchStrategy>* Strategy, struct FVector* CameraLocation, struct FVector* CrosshairVector)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.WeaponComponent.SearchTargetToLock");

	UWeaponComponent_SearchTargetToLock_Params params;
	params.Strategy = Strategy;
	params.CameraLocation = CameraLocation;
	params.CrosshairVector = CrosshairVector;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.WeaponComponent.RemoveWeaponFromSlot
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int*                           SlotIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponComponent::RemoveWeaponFromSlot(int* SlotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.WeaponComponent.RemoveWeaponFromSlot");

	UWeaponComponent_RemoveWeaponFromSlot_Params params;
	params.SlotIndex = SlotIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.WeaponComponent.PreviousWeapon
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWeaponComponent::PreviousWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.WeaponComponent.PreviousWeapon");

	UWeaponComponent_PreviousWeapon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.WeaponComponent.OnLockedTargetDied
// (Final, Native, Private)
// Parameters:
// class AActor**                 DeadTarget                     (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// class AController**            DamageInstigator               (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DamageAmount                   (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponComponent::OnLockedTargetDied(class AActor** DeadTarget, class AActor** DamageCauser, class AController** DamageInstigator, float* DamageAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.WeaponComponent.OnLockedTargetDied");

	UWeaponComponent_OnLockedTargetDied_Params params;
	params.DeadTarget = DeadTarget;
	params.DamageCauser = DamageCauser;
	params.DamageInstigator = DamageInstigator;
	params.DamageAmount = DamageAmount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.WeaponComponent.NextWeapon
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWeaponComponent::NextWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.WeaponComponent.NextWeapon");

	UWeaponComponent_NextWeapon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.WeaponComponent.IsAnyWeaponSpawned
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWeaponComponent::IsAnyWeaponSpawned()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.WeaponComponent.IsAnyWeaponSpawned");

	UWeaponComponent_IsAnyWeaponSpawned_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.WeaponComponent.InstallNewWeapon
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FWeaponInfo*            Weapon                         (Parm)
// TEnumAsByte<EEquipmentInstallResult> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<EEquipmentInstallResult> UWeaponComponent::InstallNewWeapon(struct FWeaponInfo* Weapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.WeaponComponent.InstallNewWeapon");

	UWeaponComponent_InstallNewWeapon_Params params;
	params.Weapon = Weapon;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.WeaponComponent.HasRampUpTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWeaponComponent::HasRampUpTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.WeaponComponent.HasRampUpTime");

	UWeaponComponent_HasRampUpTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.WeaponComponent.HasChargeTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWeaponComponent::HasChargeTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.WeaponComponent.HasChargeTime");

	UWeaponComponent_HasChargeTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.WeaponComponent.GetRampUpRatio
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UWeaponComponent::GetRampUpRatio()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.WeaponComponent.GetRampUpRatio");

	UWeaponComponent_GetRampUpRatio_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.WeaponComponent.GetNumEmptySlots
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UWeaponComponent::GetNumEmptySlots()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.WeaponComponent.GetNumEmptySlots");

	UWeaponComponent_GetNumEmptySlots_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.WeaponComponent.GetLockedTargetLeadingReticulePosition
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UWeaponComponent::GetLockedTargetLeadingReticulePosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.WeaponComponent.GetLockedTargetLeadingReticulePosition");

	UWeaponComponent_GetLockedTargetLeadingReticulePosition_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.WeaponComponent.GetLockedTarget
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UWeaponComponent::GetLockedTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.WeaponComponent.GetLockedTarget");

	UWeaponComponent_GetLockedTarget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.WeaponComponent.GetFocusLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UWeaponComponent::GetFocusLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.WeaponComponent.GetFocusLocation");

	UWeaponComponent_GetFocusLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.WeaponComponent.GetFirstWeaponInstanceOfClass
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass**                 WeaponClass                    (Parm, ZeroConstructor, IsPlainOldData)
// class AWeaponBase*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AWeaponBase* UWeaponComponent::GetFirstWeaponInstanceOfClass(class UClass** WeaponClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.WeaponComponent.GetFirstWeaponInstanceOfClass");

	UWeaponComponent_GetFirstWeaponInstanceOfClass_Params params;
	params.WeaponClass = WeaponClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.WeaponComponent.GetFirstEquippedWeaponInstance
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AWeaponBase*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AWeaponBase* UWeaponComponent::GetFirstEquippedWeaponInstance()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.WeaponComponent.GetFirstEquippedWeaponInstance");

	UWeaponComponent_GetFirstEquippedWeaponInstance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.WeaponComponent.GetEquippedWeaponIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UWeaponComponent::GetEquippedWeaponIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.WeaponComponent.GetEquippedWeaponIndex");

	UWeaponComponent_GetEquippedWeaponIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.WeaponComponent.GetEquippedWeapon
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FWeaponInfo             WeaponOut                      (Parm, OutParm)

void UWeaponComponent::GetEquippedWeapon(struct FWeaponInfo* WeaponOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.WeaponComponent.GetEquippedWeapon");

	UWeaponComponent_GetEquippedWeapon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WeaponOut != nullptr)
		*WeaponOut = params.WeaponOut;
}


// Function ES2.WeaponComponent.GetEquippableWeapons
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<class AWeaponBase*>     WeaponsOut                     (Parm, OutParm, ZeroConstructor)

void UWeaponComponent::GetEquippableWeapons(TArray<class AWeaponBase*>* WeaponsOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.WeaponComponent.GetEquippableWeapons");

	UWeaponComponent_GetEquippableWeapons_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WeaponsOut != nullptr)
		*WeaponsOut = params.WeaponsOut;
}


// Function ES2.WeaponComponent.GetChargeRatio
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UWeaponComponent::GetChargeRatio()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.WeaponComponent.GetChargeRatio");

	UWeaponComponent_GetChargeRatio_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.WeaponComponent.GetAmmoOfSlot
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int*                           SlotIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UWeaponComponent::GetAmmoOfSlot(int* SlotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.WeaponComponent.GetAmmoOfSlot");

	UWeaponComponent_GetAmmoOfSlot_Params params;
	params.SlotIndex = SlotIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.WeaponComponent.GetAmmo
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UItem**                  WeaponItem                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UWeaponComponent::GetAmmo(class UItem** WeaponItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.WeaponComponent.GetAmmo");

	UWeaponComponent_GetAmmo_Params params;
	params.WeaponItem = WeaponItem;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.WeaponComponent.EquipWeapon
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int*                           SlotIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bForceEquip                    (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponComponent::EquipWeapon(int* SlotIndex, bool* bForceEquip)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.WeaponComponent.EquipWeapon");

	UWeaponComponent_EquipWeapon_Params params;
	params.SlotIndex = SlotIndex;
	params.bForceEquip = bForceEquip;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.WeaponComponent.CreateWeaponInfoFromItem
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UItem**                  WeaponItem                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FWeaponInfo             WeaponInfo                     (Parm, OutParm)

void UWeaponComponent::STATIC_CreateWeaponInfoFromItem(class UItem** WeaponItem, struct FWeaponInfo* WeaponInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.WeaponComponent.CreateWeaponInfoFromItem");

	UWeaponComponent_CreateWeaponInfoFromItem_Params params;
	params.WeaponItem = WeaponItem;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WeaponInfo != nullptr)
		*WeaponInfo = params.WeaponInfo;
}


// Function ES2.WeaponComponent.CanWeaponBeInstalled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FWeaponInfo*            Weapon                         (Parm)
// TEnumAsByte<EEquipmentInstallResult> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<EEquipmentInstallResult> UWeaponComponent::CanWeaponBeInstalled(struct FWeaponInfo* Weapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.WeaponComponent.CanWeaponBeInstalled");

	UWeaponComponent_CanWeaponBeInstalled_Params params;
	params.Weapon = Weapon;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.WeaponComponent.AreAllSlotsEmpty
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWeaponComponent::AreAllSlotsEmpty()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.WeaponComponent.AreAllSlotsEmpty");

	UWeaponComponent_AreAllSlotsEmpty_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.WreckComponent.ShowWreckHideRest
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          SkipHideExceptMesh             (Parm, ZeroConstructor, IsPlainOldData)

void UWreckComponent::ShowWreckHideRest(bool* SkipHideExceptMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.WreckComponent.ShowWreckHideRest");

	UWreckComponent_ShowWreckHideRest_Params params;
	params.SkipHideExceptMesh = SkipHideExceptMesh;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ES2.WreckComponent.HasValidWreckMesh
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWreckComponent::HasValidWreckMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.WreckComponent.HasValidWreckMesh");

	UWreckComponent_HasValidWreckMesh_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ES2.XPComponent.OwnerHealthDepleted
// (Final, Native, Public)
// Parameters:
// class AActor**                 Owner                          (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// class AController**            DamageInstigator               (Parm, ZeroConstructor, IsPlainOldData)

void UXPComponent::OwnerHealthDepleted(class AActor** Owner, class AActor** DamageCauser, class AController** DamageInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function ES2.XPComponent.OwnerHealthDepleted");

	UXPComponent_OwnerHealthDepleted_Params params;
	params.Owner = Owner;
	params.DamageCauser = DamageCauser;
	params.DamageInstigator = DamageInstigator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

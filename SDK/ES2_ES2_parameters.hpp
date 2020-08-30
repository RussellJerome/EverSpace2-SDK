#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_ES2_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ES2.ActivityBase.TriggerOrBindEventActivitySucceeded
struct AActivityBase_TriggerOrBindEventActivitySucceeded_Params
{
	struct FScriptDelegate*                            Event;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function ES2.ActivityBase.TriggerOrBindEventActivityFailed
struct AActivityBase_TriggerOrBindEventActivityFailed_Params
{
	struct FScriptDelegate*                            Event;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function ES2.ActivityBase.TriggerOrBindEventActivityEnded
struct AActivityBase_TriggerOrBindEventActivityEnded_Params
{
	struct FScriptDelegate*                            Event;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function ES2.ActivityBase.TriggerOrBindEventActivityActivated
struct AActivityBase_TriggerOrBindEventActivityActivated_Params
{
	struct FScriptDelegate*                            Event;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function ES2.ActivityBase.SwitchState
struct AActivityBase_SwitchState_Params
{
	EActivityState*                                    NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.ActivityBase.SetLocation
struct AActivityBase_SetLocation_Params
{
	struct FName*                                      NewLocationID;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.ActivityBase.SetAttribute
struct AActivityBase_SetAttribute_Params
{
	struct FName*                                      AttributeName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FESVariant*                                 AttributeValue;                                           // (Parm)
};

// Function ES2.ActivityBase.RestoringState
struct AActivityBase_RestoringState_Params
{
};

// Function ES2.ActivityBase.ResetActivities
struct AActivityBase_ResetActivities_Params
{
	bool*                                              bIncludingThis;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.ActivityBase.OnResetActivity
struct AActivityBase_OnResetActivity_Params
{
};

// Function ES2.ActivityBase.OnPlayerLeftActivityLocation
struct AActivityBase_OnPlayerLeftActivityLocation_Params
{
	TEnumAsByte<EJumpMethod>*                          JumpMethod;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.ActivityBase.OnDeactivate
struct AActivityBase_OnDeactivate_Params
{
};

// Function ES2.ActivityBase.OnAbandonedByPlayer
struct AActivityBase_OnAbandonedByPlayer_Params
{
};

// Function ES2.ActivityBase.IsPlayerAtActivityLocation
struct AActivityBase_IsPlayerAtActivityLocation_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.ActivityBase.HasEnded
struct AActivityBase_HasEnded_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.ActivityBase.FindOrCreateAttribute
struct AActivityBase_FindOrCreateAttribute_Params
{
	struct FName*                                      Key;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FESVariant*                                 InitValue;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               bWasNewlyCreated;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FESVariant                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ES2.ActivityBase.FindAttribute
struct AActivityBase_FindAttribute_Params
{
	struct FName*                                      AttributeName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FESVariant                                  AttributeValue_OUT;                                       // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.ActivityBase.FindActivityInPlayerData
struct AActivityBase_FindActivityInPlayerData_Params
{
	struct FName*                                      InActivityID;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FActivitySaveGameData                       SavedData;                                                // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.ActivityBase.CheckIfPlayerIsNearby
struct AActivityBase_CheckIfPlayerIsNearby_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.ActivityBase.ActivateActivity
struct AActivityBase_ActivateActivity_Params
{
};

// Function ES2.ActivityBase.Abort
struct AActivityBase_Abort_Params
{
};

// Function ES2.ActorPostEditEvent.PostEdit
struct AActorPostEditEvent_PostEdit_Params
{
};

// Function ES2.AiControllerBase.TargetTurnedHostileCallback
struct AAiControllerBase_TargetTurnedHostileCallback_Params
{
	TEnumAsByte<EFactions>*                            HostileFaction;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.AiControllerBase.SetHomeLocation
struct AAiControllerBase_SetHomeLocation_Params
{
	struct FVector*                                    Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function ES2.AiControllerBase.RestartBehaviorTree
struct AAiControllerBase_RestartBehaviorTree_Params
{
};

// Function ES2.AiControllerBase.ChangedFactionCallback
struct AAiControllerBase_ChangedFactionCallback_Params
{
	TEnumAsByte<EFactions>*                            NewFaction;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.AreaGate.ReceivePawnLeaving
struct AAreaGate_ReceivePawnLeaving_Params
{
	class AESPawn**                                    Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.AreaGate.ReceivePawnEntering
struct AAreaGate_ReceivePawnEntering_Params
{
	class AESPawn**                                    Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.HitpointComponent.SetMaxHitpoints
struct UHitpointComponent_SetMaxHitpoints_Params
{
	float*                                             MaxHP;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.HitpointComponent.SetInvulnerable
struct UHitpointComponent_SetInvulnerable_Params
{
	bool*                                              bNewInvulnerable;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.HitpointComponent.SetCurrentHitpointsWithRatio
struct UHitpointComponent_SetCurrentHitpointsWithRatio_Params
{
	float*                                             Ratio;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.HitpointComponent.SetCurrentHitpoints
struct UHitpointComponent_SetCurrentHitpoints_Params
{
	float*                                             Hitpoints;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.HitpointComponent.IsDepleted
struct UHitpointComponent_IsDepleted_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.HitpointComponent.IsDamaged
struct UHitpointComponent_IsDamaged_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.HitpointComponent.GetRecentDamageRatio
struct UHitpointComponent_GetRecentDamageRatio_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.HitpointComponent.GetRatio
struct UHitpointComponent_GetRatio_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.HitpointComponent.GetMaxHitpoints
struct UHitpointComponent_GetMaxHitpoints_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.HitpointComponent.GetCurrentHitpoints
struct UHitpointComponent_GetCurrentHitpoints_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.HitpointComponent.ChangeHitpoints
struct UHitpointComponent_ChangeHitpoints_Params
{
	float*                                             HitpointsDelta;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              OUT_DamageAbsorbed;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              OUT_DamageOverkill;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.ArmorComponent.TakeDamage
struct UArmorComponent_TakeDamage_Params
{
	float*                                             DamageAmount;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsCritical;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent*                               DamageEvent;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FHitResult*                                 HitResult;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              DamageAbsorbed;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              DamageRemaining;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.BTT_FollowLeader.TryTeleportIntoFormation
struct UBTT_FollowLeader_TryTeleportIntoFormation_Params
{
	class AESPawn**                                    Follower;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.ConditionBaseComponent.RemoveTokensFrom
struct UConditionBaseComponent_RemoveTokensFrom_Params
{
	class AActor**                                     Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     ConditionType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.ConditionBaseComponent.RemoveTokens
struct UConditionBaseComponent_RemoveTokens_Params
{
	int*                                               Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.ConditionBaseComponent.RemoveCondition
struct UConditionBaseComponent_RemoveCondition_Params
{
	class AActor**                                     Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.ConditionBaseComponent.GetTokenCount
struct UConditionBaseComponent_GetTokenCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.ConditionBaseComponent.GetRemainingDuration
struct UConditionBaseComponent_GetRemainingDuration_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.ConditionBaseComponent.CheckPreconditions
struct UConditionBaseComponent_CheckPreconditions_Params
{
	class AActor**                                     Candidate;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.ConditionBaseComponent.AddCondition
struct UConditionBaseComponent_AddCondition_Params
{
	class UClass**                                     ConditionClass;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     InstigatorUnsafe;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               InstigatorLevel;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Handle_out;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                AmountAdded_out;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float*                                             Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               TokenCount;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.ConditionInstigatorComponent.RemoveInstigatedConditionsOfClass
struct UConditionInstigatorComponent_RemoveInstigatedConditionsOfClass_Params
{
	class UClass**                                     ConditionClass;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.ConditionInstigatorComponent.RemoveInstigatedConditionById
struct UConditionInstigatorComponent_RemoveInstigatedConditionById_Params
{
	int*                                               ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.ConditionInstigatorComponent.RemoveAllInstigatedConditions
struct UConditionInstigatorComponent_RemoveAllInstigatedConditions_Params
{
};

// Function ES2.ConditionInstigatorComponent.GetInstigatedHandleForTarget
struct UConditionInstigatorComponent_GetInstigatedHandleForTarget_Params
{
	class AActor**                                     TargetActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     ConditionClass;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.IntensityCondition.TickPerInstigator
struct UIntensityCondition_TickPerInstigator_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     UnsafeInstigator;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             InstigatorIntensity;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.IntensityCondition.TickIntensityCondition
struct UIntensityCondition_TickIntensityCondition_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CombinedIntensity;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.IntensityCondition.OnTokenCountChanged
struct UIntensityCondition_OnTokenCountChanged_Params
{
	int*                                               TokenCount;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CombinedIntensity;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.IntensityCondition.InitCondition
struct UIntensityCondition_InitCondition_Params
{
	class AActor**                                     Instigator;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               InstigatorLevel;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.IntensityCondition.CalcIntensity
struct UIntensityCondition_CalcIntensity_Params
{
	class AActor**                                     Instigator;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               InstigatorLevel;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.DurationCondition.TickDurationCondition
struct UDurationCondition_TickDurationCondition_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CurrentIntensity;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     CurrentUnsafeInstigator;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             RemainingTotalSeconds;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.DurationCondition.OnTokenCountChanged
struct UDurationCondition_OnTokenCountChanged_Params
{
	int*                                               TokenCount;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CurrentIntensity;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             RemainingTotalSeconds;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.DurationCondition.InitCondition
struct UDurationCondition_InitCondition_Params
{
	class AActor**                                     Instigator;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               InstigatorLevel;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.DurationCondition.CalcIntensity
struct UDurationCondition_CalcIntensity_Params
{
	class AActor**                                     UnsafeInstigator;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               InstigatorLevel;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.ConsumableBase.Terminate
struct AConsumableBase_Terminate_Params
{
};

// Function ES2.ConsumableBase.CanBeUsed
struct AConsumableBase_CanBeUsed_Params
{
	class AActor**                                     User;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.ConsumableBase.ApplyConsumableAttributes
struct AConsumableBase_ApplyConsumableAttributes_Params
{
	class UItem**                                      ConsumableItemIn;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.ConsumableComponent.UseSelectedConsumable
struct UConsumableComponent_UseSelectedConsumable_Params
{
	bool*                                              bConsume;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class AConsumableBase*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.ConsumableComponent.UseConsumableAtIndex
struct UConsumableComponent_UseConsumableAtIndex_Params
{
	int*                                               Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bConsume;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class AConsumableBase*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.ConsumableComponent.StopUsingSelectedConsumable
struct UConsumableComponent_StopUsingSelectedConsumable_Params
{
};

// Function ES2.ConsumableComponent.StartUsingSelectedConsumable
struct UConsumableComponent_StartUsingSelectedConsumable_Params
{
	bool*                                              bConsume;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.ConsumableComponent.SetNewConsumableSlots
struct UConsumableComponent_SetNewConsumableSlots_Params
{
	TArray<struct FConsumableInfo>*                    NewConsumables;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function ES2.ConsumableComponent.SelectConsumable
struct UConsumableComponent_SelectConsumable_Params
{
	class AConsumableBase**                            Consumable;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.ConsumableComponent.HasConsumable
struct UConsumableComponent_HasConsumable_Params
{
	struct FName*                                      ItemTemplateID;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.ConsumableComponent.GetTriggerRatio
struct UConsumableComponent_GetTriggerRatio_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.ConsumableComponent.GetSelectedConsumableIndex
struct UConsumableComponent_GetSelectedConsumableIndex_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.ConsumableComponent.GetSelectedConsumableAmount
struct UConsumableComponent_GetSelectedConsumableAmount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.ConsumableComponent.GetSelectedConsumable
struct UConsumableComponent_GetSelectedConsumable_Params
{
	struct FConsumableInfo                             ConsumableOut;                                            // (Parm, OutParm)
};

// Function ES2.ConsumableComponent.GetSelectableConsumables
struct UConsumableComponent_GetSelectableConsumables_Params
{
	TArray<struct FConsumableInfo>                     ConsumablesOut;                                           // (Parm, OutParm, ZeroConstructor)
};

// Function ES2.ConsumableComponent.GetRemainingCoolDownRatio
struct UConsumableComponent_GetRemainingCoolDownRatio_Params
{
	struct FName*                                      ItemTemplateID;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.ConsumableComponent.GetRemainingCoolDownDurationOfActiveConsumable
struct UConsumableComponent_GetRemainingCoolDownDurationOfActiveConsumable_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.ConsumableComponent.GetRemainingCoolDownDuration
struct UConsumableComponent_GetRemainingCoolDownDuration_Params
{
	struct FName*                                      ItemTemplateID;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.ConsumableComponent.GetNumEmptySlots
struct UConsumableComponent_GetNumEmptySlots_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.ConsumableComponent.GetEquippedConsumableDefaultObject
struct UConsumableComponent_GetEquippedConsumableDefaultObject_Params
{
	class AConsumableBase*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.ConsumableComponent.GetConsumableAmountOfSlot
struct UConsumableComponent_GetConsumableAmountOfSlot_Params
{
	int*                                               SlotIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.ConsumableComponent.GetConsumableAmount
struct UConsumableComponent_GetConsumableAmount_Params
{
	struct FName*                                      ItemTemplateID;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.ConsumableComponent.CanConsumableBeAdded
struct UConsumableComponent_CanConsumableBeAdded_Params
{
	class UClass**                                     ConsumableClass;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      ItemTemplateID;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EEquipmentInstallResult>               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.ConsumableComponent.AddNewConsumable
struct UConsumableComponent_AddNewConsumable_Params
{
	class UClass**                                     ConsumableClass;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      ItemTemplateID;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EEquipmentInstallResult>               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.DamagePart.RepairOverheat
struct ADamagePart_RepairOverheat_Params
{
};

// Function ES2.DamagePart.repair
struct ADamagePart_repair_Params
{
	class AActor**                                     PartOwner;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.DamagePart.Overheat
struct ADamagePart_Overheat_Params
{
	class AActor**                                     PartOwner;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bPlayAlertSound;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DurationSeconds;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.DamagePart.OnRepairOverheat
struct ADamagePart_OnRepairOverheat_Params
{
	class AActor**                                     PartOwner;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.DamagePart.OnRepair
struct ADamagePart_OnRepair_Params
{
	class AActor**                                     PartOwner;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.DamagePart.OnOverheat
struct ADamagePart_OnOverheat_Params
{
	class AActor**                                     PartOwner;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bPlayAlertSound;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.DamagePart.OnDamage
struct ADamagePart_OnDamage_Params
{
	class AActor**                                     PartOwner;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bPlayAlertSound;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.DamagePart.Damage
struct ADamagePart_Damage_Params
{
	class AActor**                                     PartOwner;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DamageRatioIn;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bPlayAlertSound;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.DebugLib.SpawnJob
struct UDebugLib_SpawnJob_Params
{
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     TaskClass;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      LocationID;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform*                                 SpawnTransform;                                           // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AMissionBase*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.DebugLib.GetConsoleCommands
struct UDebugLib_GetConsoleCommands_Params
{
	TArray<class FString>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ES2.DebugLib.GetAssetsByClass
struct UDebugLib_GetAssetsByClass_Params
{
	class UClass**                                     AnyClass;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              OutRetrievedClasses;                                      // (Parm, OutParm, ZeroConstructor)
};

// Function ES2.DeviceBase.OnDeactivate
struct ADeviceBase_OnDeactivate_Params
{
	class AActor**                                     OwnerOfDevice;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.DeviceBase.OnActivate
struct ADeviceBase_OnActivate_Params
{
	class AActor**                                     OwnerOfDevice;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.DeviceBase.IsAvailable
struct ADeviceBase_IsAvailable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.DeviceBase.IsActivated
struct ADeviceBase_IsActivated_Params
{
	class AActor**                                     DeviceOwner;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.DeviceBase.GetRemainingEffectRatio
struct ADeviceBase_GetRemainingEffectRatio_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.DeviceBase.GetRemainingEffectDuration
struct ADeviceBase_GetRemainingEffectDuration_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.DeviceBase.GetRemainingCoolDownRatio
struct ADeviceBase_GetRemainingCoolDownRatio_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.DeviceBase.GetRemainingCoolDownDuration
struct ADeviceBase_GetRemainingCoolDownDuration_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.DeviceBase.GetRemainingCharges
struct ADeviceBase_GetRemainingCharges_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.DeviceBase.Deactivate
struct ADeviceBase_Deactivate_Params
{
	class AActor**                                     OwnerOfDevice;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.DeviceBase.CouldBeActivatedAfterCooldown
struct ADeviceBase_CouldBeActivatedAfterCooldown_Params
{
	class AActor**                                     OwnerOfDevice;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.DeviceBase.ClearEffectDuration
struct ADeviceBase_ClearEffectDuration_Params
{
};

// Function ES2.DeviceBase.ClearCooldowns
struct ADeviceBase_ClearCooldowns_Params
{
};

// Function ES2.DeviceBase.CanBeActivated
struct ADeviceBase_CanBeActivated_Params
{
	class AActor**                                     OwnerOfDevice;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.DeviceBase.ApplyDeviceAttributes
struct ADeviceBase_ApplyDeviceAttributes_Params
{
	class UItem**                                      DeviceItemIn;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.DeviceBase.Activate
struct ADeviceBase_Activate_Params
{
	class AActor**                                     OwnerOfDevice;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DeviceCustomValue;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.DeviceComponent.UninstallDevice
struct UDeviceComponent_UninstallDevice_Params
{
	class UClass**                                     DeviceClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.DeviceComponent.ToggleEquippedDevice
struct UDeviceComponent_ToggleEquippedDevice_Params
{
};

// Function ES2.DeviceComponent.ToggleDevice
struct UDeviceComponent_ToggleDevice_Params
{
	int*                                               DeviceIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.DeviceComponent.SetNewDeviceSlots
struct UDeviceComponent_SetNewDeviceSlots_Params
{
	TArray<struct FDeviceInfo>*                        NewDeviceSlots;                                           // (Parm, ZeroConstructor)
};

// Function ES2.DeviceComponent.SelectDevice
struct UDeviceComponent_SelectDevice_Params
{
	class ADeviceBase**                                Device;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.DeviceComponent.ResetCooldowns
struct UDeviceComponent_ResetCooldowns_Params
{
};

// Function ES2.DeviceComponent.ReInit
struct UDeviceComponent_ReInit_Params
{
};

// Function ES2.DeviceComponent.OverrideDevices
struct UDeviceComponent_OverrideDevices_Params
{
	TArray<struct FDeviceInfo>*                        NewDeviceSlots;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function ES2.DeviceComponent.IsAnyDeviceCoolingDown
struct UDeviceComponent_IsAnyDeviceCoolingDown_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.DeviceComponent.InstallNewDevice
struct UDeviceComponent_InstallNewDevice_Params
{
	struct FDeviceInfo*                                DeviceInfo;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	TEnumAsByte<EEquipmentInstallResult>               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.DeviceComponent.GetTriggerRatio
struct UDeviceComponent_GetTriggerRatio_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.DeviceComponent.GetSelectedDeviceInstance
struct UDeviceComponent_GetSelectedDeviceInstance_Params
{
	class ADeviceBase*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.DeviceComponent.GetSelectedDevice
struct UDeviceComponent_GetSelectedDevice_Params
{
	struct FDeviceInfo                                 DeviceOut;                                                // (Parm, OutParm)
};

// Function ES2.DeviceComponent.GetNumEmptySlots
struct UDeviceComponent_GetNumEmptySlots_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.DeviceComponent.GetDeviceInstance
struct UDeviceComponent_GetDeviceInstance_Params
{
	int*                                               SlotIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class ADeviceBase*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.DeviceComponent.GetDevice
struct UDeviceComponent_GetDevice_Params
{
	int*                                               SlotIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDeviceInfo                                 DeviceOut;                                                // (Parm, OutParm)
};

// Function ES2.DeviceComponent.DeviceCanBeInstalled
struct UDeviceComponent_DeviceCanBeInstalled_Params
{
	class UClass**                                     DeviceClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EEquipmentInstallResult>               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.DialogManager.StopCurrentDialog
struct UDialogManager_StopCurrentDialog_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.DialogManager.SkipCurrentParagraph
struct UDialogManager_SkipCurrentParagraph_Params
{
	bool*                                              MenuDialog;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.DialogManager.SkipCurrentDialog
struct UDialogManager_SkipCurrentDialog_Params
{
	bool*                                              MenuDialog;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.DialogManager.SkipAllDialogs
struct UDialogManager_SkipAllDialogs_Params
{
	bool*                                              MenuDialog;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.DialogManager.SetPausedCurrentParagraph
struct UDialogManager_SetPausedCurrentParagraph_Params
{
	bool*                                              bPause;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              MenuDialog;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.DialogManager.SetPause
struct UDialogManager_SetPause_Params
{
	bool*                                              bIsPaused;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.DialogManager.IsQueueEmpty
struct UDialogManager_IsQueueEmpty_Params
{
	bool*                                              MenuDialog;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.DialogManager.IsMissionDialogPlayingOrEnqueued
struct UDialogManager_IsMissionDialogPlayingOrEnqueued_Params
{
	bool*                                              MenuDialog;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.DialogManager.IsAnyDialogRunning
struct UDialogManager_IsAnyDialogRunning_Params
{
	bool*                                              MenuDialog;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.DialogManager.GetDialogIDs
struct UDialogManager_GetDialogIDs_Params
{
	class UDialogIDs*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.DialogManager.GetCurrentSpeaker
struct UDialogManager_GetCurrentSpeaker_Params
{
	bool*                                              MenuDialog;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData)
};

// Function ES2.DialogManager.EnqueueMovieSubtitles
struct UDialogManager_EnqueueMovieSubtitles_Params
{
	struct FName*                                      DialogID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              MenuDialog;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.DialogManager.EnqueueMissionDialogWithEvent
struct UDialogManager_EnqueueMissionDialogWithEvent_Params
{
	struct FName*                                      DialogID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate*                            DialogFinishedEvent;                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	float*                                             Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              MenuDialog;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.DialogManager.EnqueueMissionDialog
struct UDialogManager_EnqueueMissionDialog_Params
{
	struct FName*                                      DialogID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              MenuDialog;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.DialogManager.EnqueueDialogWithEvent
struct UDialogManager_EnqueueDialogWithEvent_Params
{
	struct FName*                                      DialogID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate*                            DialogFinishedEvent;                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	float*                                             Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDialog>*                              DialogType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              MenuDialog;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.DialogManager.EnqueueDialog
struct UDialogManager_EnqueueDialog_Params
{
	struct FName*                                      DialogID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDialog>*                              DialogType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              MenuDialog;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.DialogManager.EnqueueDebugParagraphWithEvent
struct UDialogManager_EnqueueDebugParagraphWithEvent_Params
{
	struct FText*                                      Text;                                                     // (Parm)
	struct FName*                                      SpeakerID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate*                            DialogFinishedEvent;                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	float*                                             Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDialog>*                              DialogType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              MenuDialog;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.DialogManager.EnqueueDebugParagraph
struct UDialogManager_EnqueueDebugParagraph_Params
{
	struct FText*                                      Text;                                                     // (Parm)
	struct FName*                                      SpeakerID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDialog>*                              DialogType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              MenuDialog;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.DialogManager.ClearDialogQueue
struct UDialogManager_ClearDialogQueue_Params
{
	bool*                                              MenuDialog;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.DialogManager.BindSubtitleLineStarted
struct UDialogManager_BindSubtitleLineStarted_Params
{
	struct FScriptDelegate*                            Delegate;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function ES2.DialogManager.BindParagraphStarted
struct UDialogManager_BindParagraphStarted_Params
{
	struct FScriptDelegate*                            Delegate;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function ES2.DialogManager.BindParagraphFinished
struct UDialogManager_BindParagraphFinished_Params
{
	struct FScriptDelegate*                            Delegate;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function ES2.DialogManager.BindDialogStarted
struct UDialogManager_BindDialogStarted_Params
{
	struct FScriptDelegate*                            Delegate;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function ES2.DialogManager.BindDialogResumed
struct UDialogManager_BindDialogResumed_Params
{
	struct FScriptDelegate*                            Delegate;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function ES2.DialogManager.BindDialogPaused
struct UDialogManager_BindDialogPaused_Params
{
	struct FScriptDelegate*                            Delegate;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function ES2.DialogManager.BindDialogFinished
struct UDialogManager_BindDialogFinished_Params
{
	struct FScriptDelegate*                            Delegate;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function ES2.DockableStation.TriggerUndockAnimation
struct ADockableStation_TriggerUndockAnimation_Params
{
};

// Function ES2.DockableStation.PlayerConfirmDocking
struct ADockableStation_PlayerConfirmDocking_Params
{
	class UInteractComponent**                         InteractComponent;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     InteractActor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.DockableStation.OnPlayerBeginDocking
struct ADockableStation_OnPlayerBeginDocking_Params
{
};

// Function ES2.DockableStation.IsHomebase
struct ADockableStation_IsHomebase_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.DockableStation.GetShopInventory
struct ADockableStation_GetShopInventory_Params
{
	class UInventory*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.DockableStation.GetShipsForSale
struct ADockableStation_GetShipsForSale_Params
{
	TArray<struct FShipData>                           Ships;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function ES2.DockableStation.GetLootDropWorldTransform
struct ADockableStation_GetLootDropWorldTransform_Params
{
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function ES2.DockableStation.GetJobOffers
struct ADockableStation_GetJobOffers_Params
{
	TArray<struct FTaskSaveGameData>                   JobOffers;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function ES2.SpawnGizmoBase.SpawnClass
struct ASpawnGizmoBase_SpawnClass_Params
{
	class UClass**                                     ClassToSpawnOverride;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESpawnGroup>*                          ConcreteSpawnGroup;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSpawnParameter*                            SpawnParameter;                                           // (ConstParm, Parm)
	struct FRandomStream                               R;                                                        // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.SpawnGizmoBase.PostRestoreActor
struct ASpawnGizmoBase_PostRestoreActor_Params
{
	class AActor**                                     RestoredActor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.SpawnGizmoBase.GetEmptyGroupProbability
struct ASpawnGizmoBase_GetEmptyGroupProbability_Params
{
	TEnumAsByte<ESpawnGroup>*                          Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.DockingGizmo.TouchDownShip
struct ADockingGizmo_TouchDownShip_Params
{
	class AESPawn**                                    ShipToLand;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.DockingGizmo.OnOverlap
struct ADockingGizmo_OnOverlap_Params
{
	class UPrimitiveComponent**                        OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function ES2.DockingGizmo.LaunchShip
struct ADockingGizmo_LaunchShip_Params
{
	class AESPawn**                                    ShipToLaunch;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.DockingGizmo.LandShip
struct ADockingGizmo_LandShip_Params
{
	class AESPawn**                                    ShipToLand;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.DockingGizmo.GetAssosiatedDock_Slow
struct ADockingGizmo_GetAssosiatedDock_Slow_Params
{
	class ADockableStation*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.DockingGizmo.GetApproachingLocation
struct ADockingGizmo_GetApproachingLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.DockingGizmo.CalcLandingTransform
struct ADockingGizmo_CalcLandingTransform_Params
{
	class AESPawn**                                    Ship;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function ES2.EnergyCoreComponent.RemoveAllocation
struct UEnergyCoreComponent_RemoveAllocation_Params
{
	struct FEnergyAllocation*                          Allocation;                                               // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.EnergyCoreComponent.IsGainingEnergyRegenBonus
struct UEnergyCoreComponent_IsGainingEnergyRegenBonus_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.EnergyCoreComponent.HasEnergy
struct UEnergyCoreComponent_HasEnergy_Params
{
	float*                                             TestEnergy;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.EnergyCoreComponent.GetRatio
struct UEnergyCoreComponent_GetRatio_Params
{
	bool*                                              bRegardNonAllocatedEnergyOnly;                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.EnergyCoreComponent.GetEnergy
struct UEnergyCoreComponent_GetEnergy_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.EnergyCoreComponent.GetCapacity
struct UEnergyCoreComponent_GetCapacity_Params
{
	bool*                                              bRegardNonAllocatedEnergyOnly;                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.EnergyCoreComponent.GetAllocations
struct UEnergyCoreComponent_GetAllocations_Params
{
	TArray<struct FEnergyAllocation>                   Allocations;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function ES2.EnergyCoreComponent.GetAllocatedEnergyRatio
struct UEnergyCoreComponent_GetAllocatedEnergyRatio_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.EnergyCoreComponent.GetAllocatedEnergy
struct UEnergyCoreComponent_GetAllocatedEnergy_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.EnergyCoreComponent.ChangeEnergy
struct UEnergyCoreComponent_ChangeEnergy_Params
{
	float*                                             EnergyDelta;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.EnergyCoreComponent.AddAllocation
struct UEnergyCoreComponent_AddAllocation_Params
{
	struct FEnergyAllocation*                          Allocation;                                               // (Parm)
	bool*                                              AllocateEvenIfCurrentEnergyIsLower;                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.EngineUtilities.SetResolution
struct UEngineUtilities_SetResolution_Params
{
	int*                                               InResolutionX;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               InResolutionY;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.EngineUtilities.SetMaxDrawDistanceLight
struct UEngineUtilities_SetMaxDrawDistanceLight_Params
{
	class ULightComponent**                            LightComponent;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float*                                             Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             FadeRange;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.EngineUtilities.SetFullScreenMode
struct UEngineUtilities_SetFullScreenMode_Params
{
	TEnumAsByte<EWindowMode>*                          WindowMode;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.EngineUtilities.PrintFocusedWidget
struct UEngineUtilities_PrintFocusedWidget_Params
{
	class APlayerController**                          PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.EngineUtilities.LoadTexture
struct UEngineUtilities_LoadTexture_Params
{
	class FString*                                     Path;                                                     // (Parm, ZeroConstructor)
	class FString*                                     AssetName;                                                // (Parm, ZeroConstructor)
	class UTexture*                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.EngineUtilities.LoadLevelInstance
struct UEngineUtilities_LoadLevelInstance_Params
{
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TSoftObjectPtr<class UObject>*                     LevelAsset;                                               // (Parm)
	struct FVector*                                    Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator*                                   Rotation;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class ULevelStreamingDynamic*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.EngineUtilities.LoadClassSynchronous
struct UEngineUtilities_LoadClassSynchronous_Params
{
	TSoftObjectPtr<class UClass>*                      ClassSoftRef;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.EngineUtilities.LoadAssetSynchronous
struct UEngineUtilities_LoadAssetSynchronous_Params
{
	TSoftObjectPtr<class UObject>*                     Target;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.EngineUtilities.IsWithEditor
struct UEngineUtilities_IsWithEditor_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.EngineUtilities.IsPlayingAdv
struct UEngineUtilities_IsPlayingAdv_Params
{
	class UAudioComponent**                            AudioComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.EngineUtilities.IsPlatformConsole
struct UEngineUtilities_IsPlatformConsole_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.EngineUtilities.GetSupportedResolutionsWithFallback
struct UEngineUtilities_GetSupportedResolutionsWithFallback_Params
{
	TEnumAsByte<EWindowMode>*                          WindowMode;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FIntPoint>                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ES2.EngineUtilities.GetSoundCueDuration
struct UEngineUtilities_GetSoundCueDuration_Params
{
	class USoundCue**                                  SoundCue;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.EngineUtilities.GetResolution
struct UEngineUtilities_GetResolution_Params
{
	struct FIntPoint                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.EngineUtilities.GetProjectVersion
struct UEngineUtilities_GetProjectVersion_Params
{
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ES2.EngineUtilities.GetPlaybackTimeHACK
struct UEngineUtilities_GetPlaybackTimeHACK_Params
{
	class UAudioComponent**                            AudioComponent;                                           // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FScriptDelegate*                            Event;                                                    // (ConstParm, Parm, ZeroConstructor)
};

// Function ES2.EngineUtilities.GetMassFromComponent
struct UEngineUtilities_GetMassFromComponent_Params
{
	class UPrimitiveComponent**                        Comp;                                                     // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.EngineUtilities.GetKeyFName
struct UEngineUtilities_GetKeyFName_Params
{
	struct FKey*                                       Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.EngineUtilities.GetFullScreenMode
struct UEngineUtilities_GetFullScreenMode_Params
{
	TEnumAsByte<EWindowMode>                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.EngineUtilities.GetDefaultObject
struct UEngineUtilities_GetDefaultObject_Params
{
	class UClass**                                     Class;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.EngineUtilities.GetAllWidgetsOfClass
struct UEngineUtilities_GetAllWidgetsOfClass_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UWidget*>                             FoundWidgets;                                             // (Parm, OutParm, ZeroConstructor)
	class UClass**                                     WidgetClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.EngineUtilities.GetAllStreamingLevels
struct UEngineUtilities_GetAllStreamingLevels_Params
{
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class ULevelStreaming*>                     StreamingLevels_OUT;                                      // (Parm, OutParm, ZeroConstructor)
};

// Function ES2.EngineUtilities.FormatTextWithNamedArguments
struct UEngineUtilities_FormatTextWithNamedArguments_Params
{
	struct FText*                                      Text;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	TArray<struct FFindReplaceTextArgument>*           ReplaceArguments;                                         // (Parm, ZeroConstructor)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ES2.EngineUtilities.FindActorWithFName
struct UEngineUtilities_FindActorWithFName_Params
{
	class UObject**                                    WorldContext;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      Name;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UClass**                                     Class;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.EngineUtilities.FindActorOfClassSlow
struct UEngineUtilities_FindActorOfClassSlow_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     ActorClass;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OutActor;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.EngineUtilities.ConfirmSettingVideoMode
struct UEngineUtilities_ConfirmSettingVideoMode_Params
{
};

// Function ES2.EngineUtilities.BreakPointDummy
struct UEngineUtilities_BreakPointDummy_Params
{
	class FString*                                     StringData;                                               // (Parm, ZeroConstructor)
	int*                                               IntData;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             FloatData;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    ObjectData1;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    ObjectData2;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.EscapeTarget.StateChanged
struct AEscapeTarget_StateChanged_Params
{
	TEnumAsByte<EEscapeTargetState>*                   NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EEscapeTargetState>*                   OldState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.EscapeTarget.Start
struct AEscapeTarget_Start_Params
{
};

// Function ES2.EscapeTarget.GetState
struct AEscapeTarget_GetState_Params
{
	TEnumAsByte<EEscapeTargetState>                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.ESGameInstance.SetWorldOriginShifting
struct UESGameInstance_SetWorldOriginShifting_Params
{
	bool*                                              SetOn;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.ESGameInstance.SetIngameSoundMuted
struct UESGameInstance_SetIngameSoundMuted_Params
{
	bool*                                              bMute;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.ESGameInstance.PushPause
struct UESGameInstance_PushPause_Params
{
};

// Function ES2.ESGameInstance.PopPause
struct UESGameInstance_PopPause_Params
{
};

// Function ES2.ESGameInstance.IsPaused
struct UESGameInstance_IsPaused_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.ESGameInstance.GetWorldOriginShifting
struct UESGameInstance_GetWorldOriginShifting_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.ESGameInstance.GetSequenceManager
struct UESGameInstance_GetSequenceManager_Params
{
	class USequenceManager*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.ESGameInstance.AddRecentlyPlayedSong
struct UESGameInstance_AddRecentlyPlayedSong_Params
{
	int*                                               SongIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.ESGameModeBase.TriggerFadeOut
struct AESGameModeBase_TriggerFadeOut_Params
{
	struct FLinearColor*                               Color;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float*                                             Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.ESGameModeBase.TriggerFadeIn
struct AESGameModeBase_TriggerFadeIn_Params
{
	struct FLinearColor*                               Color;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float*                                             Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.ESGameModeBase.RightBeforeBeginPlayIsCalledForAllActors
struct AESGameModeBase_RightBeforeBeginPlayIsCalledForAllActors_Params
{
};

// Function ES2.ESGameModeBase.ReinitPlayerPawn
struct AESGameModeBase_ReinitPlayerPawn_Params
{
	class APawn**                                      PlayerPawn;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.ESGameModeBase.PlayerJumpTriggered
struct AESGameModeBase_PlayerJumpTriggered_Params
{
	TEnumAsByte<EJumpMethod>*                          JumpMethod;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.ESGameModeBase.PlayerJumpCompleted
struct AESGameModeBase_PlayerJumpCompleted_Params
{
	TEnumAsByte<EJumpMethod>*                          JumpMethod;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.ESGameModeBase.OnLeftLocationBounds
struct AESGameModeBase_OnLeftLocationBounds_Params
{
};

// Function ES2.ESGameModeBase.GetOutOfBoundsDistance
struct AESGameModeBase_GetOutOfBoundsDistance_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.ESGameModeBase.GetMusicManagerActor
struct AESGameModeBase_GetMusicManagerActor_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.ESGameModeBase.EnableInputAndStopBoosting
struct AESGameModeBase_EnableInputAndStopBoosting_Params
{
};

// Function ES2.ESGameModeBase.DelayedUndockPlayerShip
struct AESGameModeBase_DelayedUndockPlayerShip_Params
{
};

// Function ES2.ESGameModeBase.CheckIfOutsideOfLevelBounds
struct AESGameModeBase_CheckIfOutsideOfLevelBounds_Params
{
};

// Function ES2.ESGameModeBase.CheckForWorldOriginShifting
struct AESGameModeBase_CheckForWorldOriginShifting_Params
{
};

// Function ES2.ESGameUserSettings.SetSoundVolumeVoice
struct UESGameUserSettings_SetSoundVolumeVoice_Params
{
	float*                                             Volume;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.ESGameUserSettings.SetSoundVolumeSFX
struct UESGameUserSettings_SetSoundVolumeSFX_Params
{
	float*                                             Volume;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.ESGameUserSettings.SetSoundVolumeMusic
struct UESGameUserSettings_SetSoundVolumeMusic_Params
{
	float*                                             Volume;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.ESGameUserSettings.SetSoundVolumeMaster
struct UESGameUserSettings_SetSoundVolumeMaster_Params
{
	float*                                             Volume;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.ESGameUserSettings.SetMouseSensitivityFactor
struct UESGameUserSettings_SetMouseSensitivityFactor_Params
{
	float*                                             InFactor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.ESGameUserSettings.SetMotionBlurEnabled
struct UESGameUserSettings_SetMotionBlurEnabled_Params
{
	bool*                                              bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.ESGameUserSettings.SetJoystickHUDBehavior
struct UESGameUserSettings_SetJoystickHUDBehavior_Params
{
	EJoystickHUDBehavior*                              HUDBehavior;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.ESGameUserSettings.SetInputPreset
struct UESGameUserSettings_SetInputPreset_Params
{
	EInputPreset*                                      Preset;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.ESGameUserSettings.SetGraphicsQuality
struct UESGameUserSettings_SetGraphicsQuality_Params
{
	TEnumAsByte<EGraphicsQuality>*                     InGraphicsQuality;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGraphicsQualityLevels*                     QualityLevelsIn;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function ES2.ESGameUserSettings.SetGamma
struct UESGameUserSettings_SetGamma_Params
{
	float*                                             GammaValue;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.ESGameUserSettings.SetGamepadScheme_Gamescom
struct UESGameUserSettings_SetGamepadScheme_Gamescom_Params
{
	int*                                               Scheme;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.ESGameUserSettings.SetGamepadInputSmoothingEnabled
struct UESGameUserSettings_SetGamepadInputSmoothingEnabled_Params
{
	bool*                                              bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.ESGameUserSettings.SetControllerIconStyle
struct UESGameUserSettings_SetControllerIconStyle_Params
{
	EControllerIconStyle*                              IconStyle;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.ESGameUserSettings.SetChromaticAberrationEnabled
struct UESGameUserSettings_SetChromaticAberrationEnabled_Params
{
	bool*                                              bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.ESGameUserSettings.SetAutoRollKeyboardEnabled
struct UESGameUserSettings_SetAutoRollKeyboardEnabled_Params
{
	bool*                                              bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.ESGameUserSettings.SetAutoRollControllerEnabled
struct UESGameUserSettings_SetAutoRollControllerEnabled_Params
{
	bool*                                              bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.ESGameUserSettings.SetAutoAimStrength
struct UESGameUserSettings_SetAutoAimStrength_Params
{
	float*                                             InFactor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.ESGameUserSettings.IsMotionBlurEnabled
struct UESGameUserSettings_IsMotionBlurEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.ESGameUserSettings.IsGamepadInputSmoothingEnabled
struct UESGameUserSettings_IsGamepadInputSmoothingEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.ESGameUserSettings.IsChromaticAberrationEnabled
struct UESGameUserSettings_IsChromaticAberrationEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.ESGameUserSettings.IsAutoRollKeyboardEnabled
struct UESGameUserSettings_IsAutoRollKeyboardEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.ESGameUserSettings.IsAutoRollControllerEnabled
struct UESGameUserSettings_IsAutoRollControllerEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.ESGameUserSettings.GetSoundVolumeVoice
struct UESGameUserSettings_GetSoundVolumeVoice_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.ESGameUserSettings.GetSoundVolumeSFX
struct UESGameUserSettings_GetSoundVolumeSFX_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.ESGameUserSettings.GetSoundVolumeMusic
struct UESGameUserSettings_GetSoundVolumeMusic_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.ESGameUserSettings.GetSoundVolumeMaster
struct UESGameUserSettings_GetSoundVolumeMaster_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.ESGameUserSettings.GetMouseSensitivityFactorRaw
struct UESGameUserSettings_GetMouseSensitivityFactorRaw_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.ESGameUserSettings.GetMouseSensitivityFactor
struct UESGameUserSettings_GetMouseSensitivityFactor_Params
{
	class AESPlayerController**                        PC;                                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.ESGameUserSettings.GetJoystickHUDBehavior
struct UESGameUserSettings_GetJoystickHUDBehavior_Params
{
	EJoystickHUDBehavior                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.ESGameUserSettings.GetInputPreset
struct UESGameUserSettings_GetInputPreset_Params
{
	EInputPreset                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.ESGameUserSettings.GetGraphicsQuality
struct UESGameUserSettings_GetGraphicsQuality_Params
{
	TEnumAsByte<EGraphicsQuality>                      GraphicsQualityOut;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FGraphicsQualityLevels                      QualityLevelsOut;                                         // (Parm, OutParm)
	bool                                               bCustomQualityLevelsSetOut;                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.ESGameUserSettings.GetGamma
struct UESGameUserSettings_GetGamma_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.ESGameUserSettings.GetGamepadScheme_Gamescom
struct UESGameUserSettings_GetGamepadScheme_Gamescom_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.ESGameUserSettings.GetControllerIconStyle
struct UESGameUserSettings_GetControllerIconStyle_Params
{
	EControllerIconStyle                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.ESGameUserSettings.GetAutoAimStrength
struct UESGameUserSettings_GetAutoAimStrength_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.ESGameUserSettings.ApplySoundSettings
struct UESGameUserSettings_ApplySoundSettings_Params
{
};

// Function ES2.ESHUD.SortIndicatorArray
struct AESHUD_SortIndicatorArray_Params
{
	TArray<TEnumAsByte<EIndicator>>                    IndicatorsInOut;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function ES2.ESHUD.ShowXPNumbers
struct AESHUD_ShowXPNumbers_Params
{
	class AActor**                                     Victim;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             XP;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.ESHUD.ShowMissionTaskUpdate
struct AESHUD_ShowMissionTaskUpdate_Params
{
	struct FHUDTaskData*                               TaskData;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function ES2.ESHUD.ShowHitpointNumbers
struct AESHUD_ShowHitpointNumbers_Params
{
	class AActor**                                     Victim;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             HPShield;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             HPArmor;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             HPHull;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsCriticalHit;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    HitLocationWorld;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              ShowEverySecond;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.ESHUD.PushHideTopLayer
struct AESHUD_PushHideTopLayer_Params
{
};

// Function ES2.ESHUD.PushHideMainLayer
struct AESHUD_PushHideMainLayer_Params
{
};

// Function ES2.ESHUD.PopHideTopLayer
struct AESHUD_PopHideTopLayer_Params
{
};

// Function ES2.ESHUD.PopHideMainLayer
struct AESHUD_PopHideMainLayer_Params
{
};

// Function ES2.ESHUD.OnShowInteractWidget
struct AESHUD_OnShowInteractWidget_Params
{
	class UInteractComponent**                         InteractComponent;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UClass**                                     WidgetClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInteractWidgetDisplayLocation>*       DisplayLocation;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D*                                  DisplayOffset;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.ESHUD.OnPlayerDealtDamage
struct AESHUD_OnPlayerDealtDamage_Params
{
	bool*                                              bShieldDamage;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.ESHUD.OnPauseChanged
struct AESHUD_OnPauseChanged_Params
{
	bool*                                              bPaused;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.ESHUD.OnHideTopLayerChanged
struct AESHUD_OnHideTopLayerChanged_Params
{
	bool*                                              bHide;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.ESHUD.OnHideMainLayerChanged
struct AESHUD_OnHideMainLayerChanged_Params
{
	bool*                                              bHide;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.ESHUD.OnHideInteractWidget
struct AESHUD_OnHideInteractWidget_Params
{
};

// Function ES2.ESHUD.OnEnterOrExitDeviceSelection
struct AESHUD_OnEnterOrExitDeviceSelection_Params
{
	bool*                                              bEnter;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.ESHUD.OnEnterOrExitConsumableSelection
struct AESHUD_OnEnterOrExitConsumableSelection_Params
{
	bool*                                              bEnter;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.ESHUD.OnChangeInteractWidgetVisibility
struct AESHUD_OnChangeInteractWidgetVisibility_Params
{
	bool*                                              bVisible;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.ESHUD.OnAbortedMission
struct AESHUD_OnAbortedMission_Params
{
	struct FName*                                      MissionID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.ESHUD.IsTopLayerVisible
struct AESHUD_IsTopLayerVisible_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.ESHUD.IsMainLayerVisible
struct AESHUD_IsMainLayerVisible_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.ESHUD.HideLockedTargetIndicator
struct AESHUD_HideLockedTargetIndicator_Params
{
};

// Function ES2.ESHUD.HideAimAssist
struct AESHUD_HideAimAssist_Params
{
	bool*                                              bForHoveredTarget;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.ESHUD.GetScaledMarkerWidthFromActorBounds
struct AESHUD_GetScaledMarkerWidthFromActorBounds_Params
{
	class AActor**                                     InActor;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UHUDMarkerComponent**                        HUDMarkerComp;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float*                                             CameraFOV;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.ESHUD.DrawLockedTargetIndicator
struct AESHUD_DrawLockedTargetIndicator_Params
{
	struct FVector2D*                                  ScreenPos;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             RenderAngle;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMarkerRelation>*                      Relation;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.ESHUD.DrawAimAssist
struct AESHUD_DrawAimAssist_Params
{
	struct FVector2D*                                  ScreenPos;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D*                                  TargetScreenPos;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMarkerRelation>*                      Relation;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bForHoveredTarget;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bNewLock;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.ESHUD.AddLogMessage
struct AESHUD_AddLogMessage_Params
{
	struct FHUDMessage*                                MessageInfo;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function ES2.ESPawn.UpdateLocalSpaceBounds
struct AESPawn_UpdateLocalSpaceBounds_Params
{
};

// Function ES2.ESPawn.TeleportAllFollowersIntoFormation
struct AESPawn_TeleportAllFollowersIntoFormation_Params
{
};

// Function ES2.ESPawn.ShouldPossessAiOnSpawn
struct AESPawn_ShouldPossessAiOnSpawn_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.ESPawn.SetLeader
struct AESPawn_SetLeader_Params
{
	class AESPawn**                                    NewLeader;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              TryTeleportFollowerIntoFormation;                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.ESPawn.SetInvestigateLocation
struct AESPawn_SetInvestigateLocation_Params
{
	struct FVector*                                    Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function ES2.ESPawn.SetIgnoredByAIDuringCutscene
struct AESPawn_SetIgnoredByAIDuringCutscene_Params
{
	bool*                                              bIgnore;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.ESPawn.SetIgnoredByAI
struct AESPawn_SetIgnoredByAI_Params
{
	bool*                                              bIgnore;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.ESPawn.SequenceStarted
struct AESPawn_SequenceStarted_Params
{
	struct FSequenceEventData*                         EventData;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.ESPawn.ResignLeadership
struct AESPawn_ResignLeadership_Params
{
	class AESPawn*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.ESPawn.RemoveTargetPreferenceList
struct AESPawn_RemoveTargetPreferenceList_Params
{
	TArray<class AActor*>*                             Targets;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.ESPawn.RemoveTargetPreference
struct AESPawn_RemoveTargetPreference_Params
{
	class AActor**                                     Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.ESPawn.RemoveFollower
struct AESPawn_RemoveFollower_Params
{
	class AESPawn**                                    Follower;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.ESPawn.PostProcessInput
struct AESPawn_PostProcessInput_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bGamePaused;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.ESPawn.PlayerLevelUp
struct AESPawn_PlayerLevelUp_Params
{
	int*                                               NewLevel;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.ESPawn.OnUpdateIsCriticalHealthState
struct AESPawn_OnUpdateIsCriticalHealthState_Params
{
	class AActor**                                     Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UHitpointComponent**                         HitpointComponent;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float*                                             DeltaHitpoints;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DeltaRatio;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             PreviousRatio;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.ESPawn.OnSequenceFinished
struct AESPawn_OnSequenceFinished_Params
{
};

// Function ES2.ESPawn.OnReinitShipColors
struct AESPawn_OnReinitShipColors_Params
{
};

// Function ES2.ESPawn.OnReceivedAIEvent
struct AESPawn_OnReceivedAIEvent_Params
{
	TEnumAsByte<EAIEvent>*                             EventId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class APawn**                                      ControlledPawn;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.ESPawn.OnLeftInterior
struct AESPawn_OnLeftInterior_Params
{
	class AAreaGate**                                  Gate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.ESPawn.OnHealthDepleted
struct AESPawn_OnHealthDepleted_Params
{
	class AActor**                                     Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                DamageInstigator;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DamageAmount;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.ESPawn.OnEnteredInterior
struct AESPawn_OnEnteredInterior_Params
{
	class AAreaGate**                                  Gate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.ESPawn.OnChangeEngineOpacity
struct AESPawn_OnChangeEngineOpacity_Params
{
	float*                                             Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.ESPawn.OnAiWaypointReached
struct AESPawn_OnAiWaypointReached_Params
{
};

// Function ES2.ESPawn.OnAiTickIdle
struct AESPawn_OnAiTickIdle_Params
{
	float*                                             Intervall;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.ESPawn.OnAiTakeoff
struct AESPawn_OnAiTakeoff_Params
{
};

// Function ES2.ESPawn.OnAiSelfDestruct
struct AESPawn_OnAiSelfDestruct_Params
{
};

// Function ES2.ESPawn.OnAiNoLeader
struct AESPawn_OnAiNoLeader_Params
{
};

// Function ES2.ESPawn.OnAiJump
struct AESPawn_OnAiJump_Params
{
};

// Function ES2.ESPawn.OnAiFleeFromTurnfight
struct AESPawn_OnAiFleeFromTurnfight_Params
{
};

// Function ES2.ESPawn.OnAiEndTravelToTarget
struct AESPawn_OnAiEndTravelToTarget_Params
{
};

// Function ES2.ESPawn.OnAiEndSpecialAttack
struct AESPawn_OnAiEndSpecialAttack_Params
{
};

// Function ES2.ESPawn.OnAiEndIsTailed
struct AESPawn_OnAiEndIsTailed_Params
{
};

// Function ES2.ESPawn.OnAiEndInvestigate
struct AESPawn_OnAiEndInvestigate_Params
{
};

// Function ES2.ESPawn.OnAiEndIdle
struct AESPawn_OnAiEndIdle_Params
{
};

// Function ES2.ESPawn.OnAiEndGainDistance
struct AESPawn_OnAiEndGainDistance_Params
{
};

// Function ES2.ESPawn.OnAiEndFlee
struct AESPawn_OnAiEndFlee_Params
{
};

// Function ES2.ESPawn.OnAiEndCatchUpWithLeader
struct AESPawn_OnAiEndCatchUpWithLeader_Params
{
};

// Function ES2.ESPawn.OnAiEndBarrelRoll
struct AESPawn_OnAiEndBarrelRoll_Params
{
};

// Function ES2.ESPawn.OnAiEndAttack
struct AESPawn_OnAiEndAttack_Params
{
};

// Function ES2.ESPawn.OnAiBeginTravelToTarget
struct AESPawn_OnAiBeginTravelToTarget_Params
{
};

// Function ES2.ESPawn.OnAiBeginSpecialAttack
struct AESPawn_OnAiBeginSpecialAttack_Params
{
};

// Function ES2.ESPawn.OnAiBeginKamikazeApproach
struct AESPawn_OnAiBeginKamikazeApproach_Params
{
};

// Function ES2.ESPawn.OnAiBeginIsTailed
struct AESPawn_OnAiBeginIsTailed_Params
{
};

// Function ES2.ESPawn.OnAiBeginInvestigate
struct AESPawn_OnAiBeginInvestigate_Params
{
};

// Function ES2.ESPawn.OnAiBeginIdle
struct AESPawn_OnAiBeginIdle_Params
{
};

// Function ES2.ESPawn.OnAiBeginGainDistance
struct AESPawn_OnAiBeginGainDistance_Params
{
};

// Function ES2.ESPawn.OnAiBeginFlee
struct AESPawn_OnAiBeginFlee_Params
{
};

// Function ES2.ESPawn.OnAiBeginCatchUpWithLeader
struct AESPawn_OnAiBeginCatchUpWithLeader_Params
{
};

// Function ES2.ESPawn.OnAiBeginBarrelRoll
struct AESPawn_OnAiBeginBarrelRoll_Params
{
};

// Function ES2.ESPawn.OnAiBeginAttack
struct AESPawn_OnAiBeginAttack_Params
{
};

// Function ES2.ESPawn.OnAiArrivedAtHangar
struct AESPawn_OnAiArrivedAtHangar_Params
{
};

// Function ES2.ESPawn.LeaveInterior
struct AESPawn_LeaveInterior_Params
{
	class AAreaGate**                                  Gate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.ESPawn.IsLeader
struct AESPawn_IsLeader_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.ESPawn.GetShipItemInstance
struct AESPawn_GetShipItemInstance_Params
{
	class UItem*                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.ESPawn.GetLeader
struct AESPawn_GetLeader_Params
{
	class AESPawn*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.ESPawn.GetFollower
struct AESPawn_GetFollower_Params
{
	TArray<class AESPawn*>                             Follower;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function ES2.ESPawn.EnterInterior
struct AESPawn_EnterInterior_Params
{
	class AAreaGate**                                  Gate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.ESPawn.EnableKinematicMode
struct AESPawn_EnableKinematicMode_Params
{
	bool*                                              bEnablePhysics;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.ESPawn.ElectLeaderFromActors
struct AESPawn_ElectLeaderFromActors_Params
{
	TArray<class AActor*>*                             Group;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool*                                              TryTeleportFollowerIntoFormation;                         // (Parm, ZeroConstructor, IsPlainOldData)
	class AESPawn*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.ESPawn.ElectLeader
struct AESPawn_ElectLeader_Params
{
	TArray<class AESPawn*>*                            Group;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool*                                              TryTeleportFollowerIntoFormation;                         // (Parm, ZeroConstructor, IsPlainOldData)
	class AESPawn*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.ESPawn.DisableKinematicMode
struct AESPawn_DisableKinematicMode_Params
{
};

// Function ES2.ESPawn.Die
struct AESPawn_Die_Params
{
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class APawn**                                      InstigatorPawn;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.ESPawn.DetermineAreaEnvironment
struct AESPawn_DetermineAreaEnvironment_Params
{
};

// Function ES2.ESPawn.ClearTargetPreferenceList
struct AESPawn_ClearTargetPreferenceList_Params
{
	TEnumAsByte<ETargetPriority>*                      Priority;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.ESPawn.ClearAllTargetPreferenceLists
struct AESPawn_ClearAllTargetPreferenceLists_Params
{
};

// Function ES2.ESPawn.CanDoBarrelRoll
struct AESPawn_CanDoBarrelRoll_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.ESPawn.ApplyShipDataShipDecals
struct AESPawn_ApplyShipDataShipDecals_Params
{
};

// Function ES2.ESPawn.ApplyShipDataShipColors
struct AESPawn_ApplyShipDataShipColors_Params
{
};

// Function ES2.ESPawn.AddTargetPreferenceList
struct AESPawn_AddTargetPreferenceList_Params
{
	TArray<class AActor*>*                             TargetPreferences;                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TEnumAsByte<ETargetPriority>*                      Priority;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.ESPawn.AddTargetPreference
struct AESPawn_AddTargetPreference_Params
{
	class AActor**                                     TargetPreference;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETargetPriority>*                      Priority;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.ESPawn.AddFollower
struct AESPawn_AddFollower_Params
{
	class AESPawn**                                    Follower;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              TryTeleportFollowerIntoFormation;                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.ESPlayerController.TogglePauseMenu_CancelAction
struct AESPlayerController_TogglePauseMenu_CancelAction_Params
{
};

// Function ES2.ESPlayerController.TogglePauseMenu
struct AESPlayerController_TogglePauseMenu_Params
{
};

// Function ES2.ESPlayerController.ToggleActionFreeze
struct AESPlayerController_ToggleActionFreeze_Params
{
};

// Function ES2.ESPlayerController.SignUpToJoystickEvents
struct AESPlayerController_SignUpToJoystickEvents_Params
{
};

// Function ES2.ESPlayerController.ShouldShowInteractWidget
struct AESPlayerController_ShouldShowInteractWidget_Params
{
	class UInteractComponent**                         InteractComponent;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UClass**                                     WidgetClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInteractWidgetDisplayLocation>*       DisplayLocation;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D*                                  DisplayOffset;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.ESPlayerController.ShouldHideInteractWidget
struct AESPlayerController_ShouldHideInteractWidget_Params
{
	class UInteractComponent**                         InteractComponent;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ES2.ESPlayerController.SetCrosshairToCenter
struct AESPlayerController_SetCrosshairToCenter_Params
{
};

// Function ES2.ESPlayerController.SetAutoPilot
struct AESPlayerController_SetAutoPilot_Params
{
	class ALocation**                                  TargetLocation;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.ESPlayerController.ReturnToMainMenu
struct AESPlayerController_ReturnToMainMenu_Params
{
};

// Function ES2.ESPlayerController.PushOrPopHideHUDLayers
struct AESPlayerController_PushOrPopHideHUDLayers_Params
{
	bool*                                              bPush;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bMainLayer;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bTopLayer;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.ESPlayerController.PlayerPawnLookAtTarget
struct AESPlayerController_PlayerPawnLookAtTarget_Params
{
	class AActor**                                     Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.ESPlayerController.PlayerConfirmedSettingJoystickPreset
struct AESPlayerController_PlayerConfirmedSettingJoystickPreset_Params
{
	int*                                               DeviceID;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class FString*                                     DeviceName;                                               // (Parm, ZeroConstructor)
};

// Function ES2.ESPlayerController.OpenPauseMenu
struct AESPlayerController_OpenPauseMenu_Params
{
};

// Function ES2.ESPlayerController.OnTurnOnAutoPilot
struct AESPlayerController_OnTurnOnAutoPilot_Params
{
};

// Function ES2.ESPlayerController.OnTurnOffAutoPilot
struct AESPlayerController_OnTurnOffAutoPilot_Params
{
};

// Function ES2.ESPlayerController.OnToggleHeadLights
struct AESPlayerController_OnToggleHeadLights_Params
{
};

// Function ES2.ESPlayerController.OnToggleFreeLook
struct AESPlayerController_OnToggleFreeLook_Params
{
	bool*                                              bEnter;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.ESPlayerController.OnToggleActionFreezeCamera
struct AESPlayerController_OnToggleActionFreezeCamera_Params
{
};

// Function ES2.ESPlayerController.OnSwitchCamera
struct AESPlayerController_OnSwitchCamera_Params
{
};

// Function ES2.ESPlayerController.OnShowOrHidePauseMenu
struct AESPlayerController_OnShowOrHidePauseMenu_Params
{
	bool*                                              bShow;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.ESPlayerController.OnProcessPlayerInput
struct AESPlayerController_OnProcessPlayerInput_Params
{
};

// Function ES2.ESPlayerController.OnOpenMap
struct AESPlayerController_OnOpenMap_Params
{
};

// Function ES2.ESPlayerController.OnOpenInventory
struct AESPlayerController_OnOpenInventory_Params
{
};

// Function ES2.ESPlayerController.OnOpenIngameMenu
struct AESPlayerController_OnOpenIngameMenu_Params
{
};

// Function ES2.ESPlayerController.OnJoystickPluggedIn
struct AESPlayerController_OnJoystickPluggedIn_Params
{
	int*                                               DeviceID;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class FString*                                     DeviceName;                                               // (Parm, ZeroConstructor)
};

// Function ES2.ESPlayerController.OnHighResScreenshot
struct AESPlayerController_OnHighResScreenshot_Params
{
};

// Function ES2.ESPlayerController.OnEnterOrExitDeviceSelection
struct AESPlayerController_OnEnterOrExitDeviceSelection_Params
{
	bool*                                              bEnter;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.ESPlayerController.OnEnterOrExitControlsDisplay
struct AESPlayerController_OnEnterOrExitControlsDisplay_Params
{
	bool*                                              bEnter;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.ESPlayerController.OnEnterOrExitConsumableSelection
struct AESPlayerController_OnEnterOrExitConsumableSelection_Params
{
	bool*                                              bEnter;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.ESPlayerController.OnEnterOrExitActionFreeze
struct AESPlayerController_OnEnterOrExitActionFreeze_Params
{
	bool*                                              bEnter;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.ESPlayerController.OnCouldNotCollectPickup
struct AESPlayerController_OnCouldNotCollectPickup_Params
{
	class APickupBase**                                Pickup;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.ESPlayerController.OnCameraZoom
struct AESPlayerController_OnCameraZoom_Params
{
	float*                                             Zoom;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.ESPlayerController.OnCameraYaw
struct AESPlayerController_OnCameraYaw_Params
{
	float*                                             Yaw;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.ESPlayerController.OnCameraUp
struct AESPlayerController_OnCameraUp_Params
{
	float*                                             AxisValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.ESPlayerController.OnCameraRoll
struct AESPlayerController_OnCameraRoll_Params
{
	float*                                             Roll;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.ESPlayerController.OnCameraRight
struct AESPlayerController_OnCameraRight_Params
{
	float*                                             AxisValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.ESPlayerController.OnCameraPitch
struct AESPlayerController_OnCameraPitch_Params
{
	float*                                             Pitch;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.ESPlayerController.OnCameraForward
struct AESPlayerController_OnCameraForward_Params
{
	float*                                             AxisValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction ES2.ESPlayerController.OnAutoPilotSkipTick__DelegateSignature
struct AESPlayerController_OnAutoPilotSkipTick__DelegateSignature_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction ES2.ESPlayerController.OnAutoPilotSkipEnd__DelegateSignature
struct AESPlayerController_OnAutoPilotSkipEnd__DelegateSignature_Params
{
};

// DelegateFunction ES2.ESPlayerController.OnAutoPilotChanged__DelegateSignature
struct AESPlayerController_OnAutoPilotChanged__DelegateSignature_Params
{
	bool*                                              bActive;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.ESPlayerController.IsAutoPilotActive
struct AESPlayerController_IsAutoPilotActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.ESPlayerController.HandleJoystickUnplugged
struct AESPlayerController_HandleJoystickUnplugged_Params
{
	int*                                               DeviceID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.ESPlayerController.HandleJoystickPluggedIn
struct AESPlayerController_HandleJoystickPluggedIn_Params
{
	int*                                               DeviceID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.ESPlayerController.GetCrosshairWorldPosition
struct AESPlayerController_GetCrosshairWorldPosition_Params
{
	float*                                             FocusDistance;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.ESPlayerController.GetCrosshairWorldDirection
struct AESPlayerController_GetCrosshairWorldDirection_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.ESPlayerController.GetCrosshairPosition
struct AESPlayerController_GetCrosshairPosition_Params
{
	struct FVector2D                                   CrosshairPosition;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.ESPlayerController.EnableMovement
struct AESPlayerController_EnableMovement_Params
{
};

// Function ES2.ESPlayerController.DisableMovement
struct AESPlayerController_DisableMovement_Params
{
};

// Function ES2.ESPlayerController.ClosePauseMenu
struct AESPlayerController_ClosePauseMenu_Params
{
};

// Function ES2.VariantLib.ToVector
struct UVariantLib_ToVector_Params
{
	struct FESVariant*                                 Variant;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.VariantLib.ToString
struct UVariantLib_ToString_Params
{
	struct FESVariant*                                 Variant;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ES2.VariantLib.ToName
struct UVariantLib_ToName_Params
{
	struct FESVariant*                                 Variant;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.VariantLib.ToLinearColor
struct UVariantLib_ToLinearColor_Params
{
	struct FESVariant*                                 Variant;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.VariantLib.ToInt
struct UVariantLib_ToInt_Params
{
	struct FESVariant*                                 Variant;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.VariantLib.ToFloat
struct UVariantLib_ToFloat_Params
{
	struct FESVariant*                                 Variant;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.VariantLib.ToByteArray
struct UVariantLib_ToByteArray_Params
{
	struct FESVariant*                                 Variant;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	TArray<unsigned char>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ES2.VariantLib.ToBool
struct UVariantLib_ToBool_Params
{
	struct FESVariant*                                 Variant;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.VariantLib.SetVector
struct UVariantLib_SetVector_Params
{
	struct FESVariant                                  Variant;                                                  // (Parm, OutParm, ReferenceParm)
	struct FVector*                                    Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.VariantLib.SetString
struct UVariantLib_SetString_Params
{
	struct FESVariant                                  Variant;                                                  // (Parm, OutParm, ReferenceParm)
	class FString*                                     Value;                                                    // (Parm, ZeroConstructor)
};

// Function ES2.VariantLib.SetName
struct UVariantLib_SetName_Params
{
	struct FESVariant                                  Variant;                                                  // (Parm, OutParm, ReferenceParm)
	struct FName*                                      Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.VariantLib.SetLinearColor
struct UVariantLib_SetLinearColor_Params
{
	struct FESVariant                                  Variant;                                                  // (Parm, OutParm, ReferenceParm)
	struct FLinearColor*                               Value;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function ES2.VariantLib.SetInt
struct UVariantLib_SetInt_Params
{
	struct FESVariant                                  Variant;                                                  // (Parm, OutParm, ReferenceParm)
	int*                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.VariantLib.SetFloat
struct UVariantLib_SetFloat_Params
{
	struct FESVariant                                  Variant;                                                  // (Parm, OutParm, ReferenceParm)
	float*                                             Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.VariantLib.SetByteArray
struct UVariantLib_SetByteArray_Params
{
	struct FESVariant                                  Variant;                                                  // (Parm, OutParm, ReferenceParm)
	TArray<unsigned char>*                             Value;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function ES2.VariantLib.SetBool
struct UVariantLib_SetBool_Params
{
	struct FESVariant                                  Variant;                                                  // (Parm, OutParm, ReferenceParm)
	bool*                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.VariantLib.Conv_VectorToESVariant
struct UVariantLib_Conv_VectorToESVariant_Params
{
	struct FVector*                                    Vector;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FESVariant                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ES2.VariantLib.Conv_StringToESVariant
struct UVariantLib_Conv_StringToESVariant_Params
{
	class FString*                                     String;                                                   // (ConstParm, Parm, ZeroConstructor)
	struct FESVariant                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ES2.VariantLib.Conv_NameToESVariant
struct UVariantLib_Conv_NameToESVariant_Params
{
	struct FName*                                      Name;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FESVariant                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ES2.VariantLib.Conv_LinearColorToESVariant
struct UVariantLib_Conv_LinearColorToESVariant_Params
{
	struct FLinearColor*                               LinearColor;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FESVariant                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ES2.VariantLib.Conv_IntToESVariant
struct UVariantLib_Conv_IntToESVariant_Params
{
	int*                                               Int;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FESVariant                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ES2.VariantLib.Conv_FloatToESVariant
struct UVariantLib_Conv_FloatToESVariant_Params
{
	float*                                             Float;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FESVariant                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ES2.VariantLib.Conv_BoolToESVariant
struct UVariantLib_Conv_BoolToESVariant_Params
{
	bool*                                              Bool;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FESVariant                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ES2.FactionComponent.TurnNeutralTowards
struct UFactionComponent_TurnNeutralTowards_Params
{
	TEnumAsByte<EFactions>*                            NeutralTowardsFaction;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              ResetAggro;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.FactionComponent.TurnHostileAgainst
struct UFactionComponent_TurnHostileAgainst_Params
{
	TEnumAsByte<EFactions>*                            HostileFaction;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	ENotifyAllies*                                     NotifyAllies;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.FactionComponent.TurnFriendlyTowards
struct UFactionComponent_TurnFriendlyTowards_Params
{
	TEnumAsByte<EFactions>*                            FriendlyTowardsFaction;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              ResetAggro;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.FactionComponent.ShouldIgnoreDamageDealtByActor
struct UFactionComponent_ShouldIgnoreDamageDealtByActor_Params
{
	class AActor**                                     DamageDealerActor;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.FactionComponent.SetFaction
struct UFactionComponent_SetFaction_Params
{
	TEnumAsByte<EFactions>*                            NewFaction;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.FactionComponent.OverrideFactionRelation
struct UFactionComponent_OverrideFactionRelation_Params
{
	TEnumAsByte<EFactions>*                            FactionToOverride;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFactionRelation>*                     NewRelation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.FactionComponent.OnHealthDepleted
struct UFactionComponent_OnHealthDepleted_Params
{
	class AActor**                                     Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                DamageInstigator;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DamageAmount;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.FactionComponent.IsFriendlyFire
struct UFactionComponent_IsFriendlyFire_Params
{
	class AActor**                                     DamageDealerActor;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.FactionComponent.IsEnemyFor
struct UFactionComponent_IsEnemyFor_Params
{
	class AActor**                                     ReferenceActor;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     PotentiallyEnemyActor;                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.FactionComponent.GetRelationTo
struct UFactionComponent_GetRelationTo_Params
{
	class AActor**                                     Actor;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FFactionEntry                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ES2.FactionComponent.GetFactionRelation
struct UFactionComponent_GetFactionRelation_Params
{
	TEnumAsByte<EFactions>*                            FactionA;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFactions>*                            FactionB;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFactionRelation>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.FactionComponent.GetDamageDealtByFaction
struct UFactionComponent_GetDamageDealtByFaction_Params
{
	TEnumAsByte<EFactions>*                            DamageDealingFaction;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.FactionComponent.GetAccumulatedDamage
struct UFactionComponent_GetAccumulatedDamage_Params
{
	class AActor**                                     DamageDealerActor;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.FactionComponent.AddDamage
struct UFactionComponent_AddDamage_Params
{
	class AActor**                                     DamageDealerActor;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              EnforceTurningHostile;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.GameData.IsHomebaseUpgradeUnlocked
struct UGameData_IsHomebaseUpgradeUnlocked_Params
{
	struct FName*                                      ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.GameData.GetSystemRegions
struct UGameData_GetSystemRegions_Params
{
	struct FName*                                      SystemID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<TEnumAsByte<ESystemRegion>>                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ES2.GameData.GetSpaceObjectName
struct UGameData_GetSpaceObjectName_Params
{
	struct FName*                                      ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Name_Out;                                                 // (Parm, OutParm)
	struct FText                                       Subtitle_Out;                                             // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.GameData.GetHomebaseUpgrade
struct UGameData_GetHomebaseUpgrade_Params
{
	struct FName*                                      ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHomebaseUpgrade                            HomebaseUpgrade_Out;                                      // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.GameData.GetDockableStationTemplate
struct UGameData_GetDockableStationTemplate_Params
{
	struct FName*                                      ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDockableStationTemplate                    StationTemplate_Out;                                      // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.GameData.GetCollectible
struct UGameData_GetCollectible_Params
{
	struct FName*                                      ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FCollectible                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ES2.GameData.FoundCollectible
struct UGameData_FoundCollectible_Params
{
	struct FName*                                      ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.GameData.FindCollectible
struct UGameData_FindCollectible_Params
{
	struct FName*                                      ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.GameplayLib.TravelModeGenerateSteeringInputForAutoPilot
struct UGameplayLib_TravelModeGenerateSteeringInputForAutoPilot_Params
{
	class APawn**                                      Ship;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    CurrentWaypoint;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector*                                    Destination;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float*                                             OvershootPreventionDistanceKM;                            // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             OversteerPreventionAngle;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.GameplayLib.TravelModeFlyAroundPlanet
struct UGameplayLib_TravelModeFlyAroundPlanet_Params
{
	class AActor**                                     Ship;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Destination;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Planet;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             OrbitRadius;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             HorizonDirOffsetKm;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.GameplayLib.SpawnPickups
struct UGameplayLib_SpawnPickups_Params
{
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FPickupEntry>*                       PickupsToSpawn;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FVector*                                    Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FRotator*                                   Rotation;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	TArray<class APickupBase*>                         SpawnedPickups;                                           // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.GameplayLib.SpawnPickupFromItem
struct UGameplayLib_SpawnPickupFromItem_Params
{
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UItem**                                      Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FRotator*                                   Rotation;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class APickupBase*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.GameplayLib.SpawnPawnFromClass
struct UGameplayLib_SpawnPawnFromClass_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     PawnClass;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform*                                 SpawnTransform;                                           // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AESPawn*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.GameplayLib.SpawnNPCPawnWithParams
struct UGameplayLib_SpawnNPCPawnWithParams_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     NPCClass;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform*                                 SpawnTransform;                                           // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FSpawnParameter*                            P;                                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	class AESPawn*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.GameplayLib.SpawnNPCPawn
struct UGameplayLib_SpawnNPCPawn_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     NPCClass;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform*                                 SpawnTransform;                                           // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	int*                                               Level;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Mark;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              JumpIn;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AESPawn*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.GameplayLib.SetShipInactiveForPresenting
struct UGameplayLib_SetShipInactiveForPresenting_Params
{
	bool*                                              bInactive;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.GameplayLib.SetGraphicsQuality
struct UGameplayLib_SetGraphicsQuality_Params
{
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGraphicsQuality>*                     Quality;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGraphicsQualityLevels*                     QualityLevels;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function ES2.GameplayLib.SafeGetControlledPawn
struct UGameplayLib_SafeGetControlledPawn_Params
{
	class AController**                                Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class APawn*                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.GameplayLib.RestartBehaviorTree
struct UGameplayLib_RestartBehaviorTree_Params
{
	class AActor**                                     Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.GameplayLib.RepairCurrentPlayerShip
struct UGameplayLib_RepairCurrentPlayerShip_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             HitpointsToRepair;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               RepairCostCredits;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.GameplayLib.RemoveProgressToken
struct UGameplayLib_RemoveProgressToken_Params
{
	struct FName*                                      TokenID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.GameplayLib.RemoveIgnoreIfInferiorTag
struct UGameplayLib_RemoveIgnoreIfInferiorTag_Params
{
	class AActor**                                     Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.GameplayLib.ReloadLocationAfterShipChange
struct UGameplayLib_ReloadLocationAfterShipChange_Params
{
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bUndockFromStation;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.GameplayLib.ReinitNPCLevelingData
struct UGameplayLib_ReinitNPCLevelingData_Params
{
	class AActor**                                     NPCActor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Level;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               NPCMark;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.GameplayLib.RefreshPlayerShipData
struct UGameplayLib_RefreshPlayerShipData_Params
{
};

// Function ES2.GameplayLib.ReenterLocationAndKeepPosition
struct UGameplayLib_ReenterLocationAndKeepPosition_Params
{
};

// Function ES2.GameplayLib.PredictPhysicsLocation
struct UGameplayLib_PredictPhysicsLocation_Params
{
	class AActor**                                     Actor;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              UseHudMarkerPivot;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.GameplayLib.OpenCinematicMap
struct UGameplayLib_OpenCinematicMap_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               MovieIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSaveLocationState;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.GameplayLib.LookAtTarget
struct UGameplayLib_LookAtTarget_Params
{
	class AActor**                                     ActorThatLooksAt;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     ActorToLookAt;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.GameplayLib.KillActorSoftly
struct UGameplayLib_KillActorSoftly_Params
{
	class AActor**                                     Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.GameplayLib.IsPlayerPawn
struct UGameplayLib_IsPlayerPawn_Params
{
	class AActor**                                     PotentialPlayerPawn;                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.GameplayLib.IsPlayerDockedToAnyStation
struct UGameplayLib_IsPlayerDockedToAnyStation_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.GameplayLib.IsPlayerController
struct UGameplayLib_IsPlayerController_Params
{
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                PotentialPlayerController;                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.GameplayLib.IsInTravelMode
struct UGameplayLib_IsInTravelMode_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.GameplayLib.IsInterceptionTakingPlace
struct UGameplayLib_IsInterceptionTakingPlace_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.GameplayLib.IsGamescomBuild
struct UGameplayLib_IsGamescomBuild_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.GameplayLib.IsGamepadModeEnabled
struct UGameplayLib_IsGamepadModeEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.GameplayLib.IsDeadlyNPCForPlayer
struct UGameplayLib_IsDeadlyNPCForPlayer_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.GameplayLib.IsAnyEnemyWithinRange
struct UGameplayLib_IsAnyEnemyWithinRange_Params
{
	class AActor**                                     Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Range;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.GameplayLib.HideActorSoftly
struct UGameplayLib_HideActorSoftly_Params
{
	class AActor**                                     Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.GameplayLib.HasProgressTokens
struct UGameplayLib_HasProgressTokens_Params
{
	TArray<struct FName>*                              TokenIDs;                                                 // (ConstParm, Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.GameplayLib.HasProgressToken
struct UGameplayLib_HasProgressToken_Params
{
	struct FName*                                      TokenID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.GameplayLib.HasIgnoreIfInferiorTag
struct UGameplayLib_HasIgnoreIfInferiorTag_Params
{
	class AActor**                                     Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.GameplayLib.HasEnoughCredits
struct UGameplayLib_HasEnoughCredits_Params
{
	int*                                               QueryAmount;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.GameplayLib.GetShipTierAtShipLevel
struct UGameplayLib_GetShipTierAtShipLevel_Params
{
	int*                                               ShipLevel;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.GameplayLib.GetRequiredXPForLevel
struct UGameplayLib_GetRequiredXPForLevel_Params
{
	int*                                               Level;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bRelativeToCurrentLevel;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.GameplayLib.GetRepairCostAndAvailabilityAtStation
struct UGameplayLib_GetRepairCostAndAvailabilityAtStation_Params
{
	struct FName*                                      StationID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             HitpointsToRepair;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRepairAvailable_Out;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Cost_Out;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.GameplayLib.GetRemainingXPForLevelUp
struct UGameplayLib_GetRemainingXPForLevelUp_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.GameplayLib.GetRelationTo
struct UGameplayLib_GetRelationTo_Params
{
	class AActor**                                     Actor;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFactionRelation>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.GameplayLib.GetProgressTokens
struct UGameplayLib_GetProgressTokens_Params
{
	class UProgressTokenIDs*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.GameplayLib.GetPlayerData
struct UGameplayLib_GetPlayerData_Params
{
	class UPlayerData*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.GameplayLib.GetPlayerControllerWithoutContext
struct UGameplayLib_GetPlayerControllerWithoutContext_Params
{
	class APlayerController*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.GameplayLib.GetNumPlayerShipTiers
struct UGameplayLib_GetNumPlayerShipTiers_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.GameplayLib.GetNearestEnemyPawn
struct UGameplayLib_GetNearestEnemyPawn_Params
{
	class AActor**                                     ReferenceActor;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bRegardVisibleEnemiesOnly;                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DistanceOut;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class AESPawn*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.GameplayLib.GetMaxPlayerShipLevel
struct UGameplayLib_GetMaxPlayerShipLevel_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.GameplayLib.GetMaxPlayerLevel
struct UGameplayLib_GetMaxPlayerLevel_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.GameplayLib.GetMaxLevel
struct UGameplayLib_GetMaxLevel_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.GameplayLib.GetLevelVariation
struct UGameplayLib_GetLevelVariation_Params
{
	struct FRandomStream                               RandomStream;                                             // (Parm, OutParm, ZeroConstructor)
	int*                                               LevelIn;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.GameplayLib.GetLevelUpProgress
struct UGameplayLib_GetLevelUpProgress_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.GameplayLib.GetItemPriceAtStationOrLocation
struct UGameplayLib_GetItemPriceAtStationOrLocation_Params
{
	class UItem**                                      Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      ItemID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      StationID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      LocationID;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FStationItemPriceInfo                       PriceInfoOut;                                             // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.GameplayLib.GetItemLevelForLootDrop
struct UGameplayLib_GetItemLevelForLootDrop_Params
{
	struct FRandomStream                               RandomStream;                                             // (Parm, OutParm, ZeroConstructor)
	class AActor**                                     Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.GameplayLib.GetGraphicsQuality
struct UGameplayLib_GetGraphicsQuality_Params
{
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGraphicsQuality>                      GraphicsQualityOut;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FGraphicsQualityLevels                      QualityLevelsOut;                                         // (Parm, OutParm)
	bool                                               bCustomQualityLevelsSetOut;                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.GameplayLib.GetGameData
struct UGameplayLib_GetGameData_Params
{
	class UGameData*                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.GameplayLib.GetESHUD
struct UGameplayLib_GetESHUD_Params
{
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class AESHUD*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.GameplayLib.GetESGameInstance
struct UGameplayLib_GetESGameInstance_Params
{
	class UESGameInstance*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.GameplayLib.GetEquippedPlayerItemOfCategory
struct UGameplayLib_GetEquippedPlayerItemOfCategory_Params
{
	struct FName*                                      CategoryID;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UItem*                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.GameplayLib.GetEnemiesSortedByDistance
struct UGameplayLib_GetEnemiesSortedByDistance_Params
{
	TEnumAsByte<EFactions>*                            QueryFaction;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    QueryLocation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TMap<class AActor*, float>                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ES2.GameplayLib.GetDockableStationActor
struct UGameplayLib_GetDockableStationActor_Params
{
	struct FName*                                      DockableStationID;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class ADockableStation*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.GameplayLib.GetDistanceText
struct UGameplayLib_GetDistanceText_Params
{
	bool*                                              bTravelModeScale;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ES2.GameplayLib.GetDamageType
struct UGameplayLib_GetDamageType_Params
{
	TEnumAsByte<ETypeOfDamage>*                        TypeOfDamage;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.GameplayLib.EvaluateBezier
struct UGameplayLib_EvaluateBezier_Params
{
	TArray<struct FVector>*                            ControlPoints;                                            // (Parm, ZeroConstructor)
	int*                                               NumPoints;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             OutPoints;                                                // (Parm, OutParm, ZeroConstructor)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.GameplayLib.ESOpenLevel
struct UGameplayLib_ESOpenLevel_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      LevelName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bAbsolute;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class FString*                                     Options;                                                  // (Parm, ZeroConstructor)
};

// Function ES2.GameplayLib.DoesPlayerHaveItem
struct UGameplayLib_DoesPlayerHaveItem_Params
{
	struct FName*                                      ItemID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInventorySearchType>*                 SearchType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               MinAmount;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.GameplayLib.DoesCurrentShipNeedAmmoRefill
struct UGameplayLib_DoesCurrentShipNeedAmmoRefill_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.GameplayLib.ChangeToStolenOutlawShip
struct UGameplayLib_ChangeToStolenOutlawShip_Params
{
};

// Function ES2.GameplayLib.ChangeLocation
struct UGameplayLib_ChangeLocation_Params
{
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLocationData*                              OldLocation;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FLocationData*                              NewLocation;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	bool*                                              bDontClearDockingPoint;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSkipSavingLocationState;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bDontAutoSave;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.GameplayLib.ChangeCredits
struct UGameplayLib_ChangeCredits_Params
{
	int*                                               credits;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bWithoutSound;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.GameplayLib.CanRefillAmmoAtStation
struct UGameplayLib_CanRefillAmmoAtStation_Params
{
	struct FName*                                      StationID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.GameplayLib.ApplyESRadialDamage
struct UGameplayLib_ApplyESRadialDamage_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             EnergyDamage;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             KineticDamage;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             GenericDamage;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Origin;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float*                                             DamageRadius;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>*                             IgnoreActors;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool*                                              bIsCriticalHit;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsShieldPiercing;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsArmorPiercing;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bDoFullDamage;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.GameplayLib.ApplyESPointDamage
struct UGameplayLib_ApplyESPointDamage_Params
{
	class AActor**                                     DamagedActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             EnergyDamage;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             KineticDamage;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             GenericDamage;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    HitFromDirection;                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FHitResult*                                 HitInfo;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsCriticalHit;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsShieldPiercing;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsArmorPiercing;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.GameplayLib.ApplyESDamage
struct UGameplayLib_ApplyESDamage_Params
{
	class AActor**                                     DamagedActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             EnergyDamage;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             KineticDamage;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             GenericDamage;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsCriticalHit;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsShieldPiercing;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsArmorPiercing;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.GameplayLib.AddXP
struct UGameplayLib_AddXP_Params
{
	float*                                             XP;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.GameplayLib.AddProgressToken
struct UGameplayLib_AddProgressToken_Params
{
	struct FName*                                      TokenID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.GameplayLib.AddPersistentWingmanWithPawn
struct UGameplayLib_AddPersistentWingmanWithPawn_Params
{
	struct FName*                                      ID;                                                       // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int*                                               WingmanType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class AESPawn**                                    Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.GameplayLib.AddPersistentWingmanWithClassPath
struct UGameplayLib_AddPersistentWingmanWithClassPath_Params
{
	struct FName*                                      ID;                                                       // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int*                                               WingmanType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class FString*                                     ClassPath;                                                // (Parm, ZeroConstructor)
};

// Function ES2.GameplayLib.AddIgnoreIfInferiorTag
struct UGameplayLib_AddIgnoreIfInferiorTag_Params
{
	class AActor**                                     Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.GameplayLib.AbbreviateNumber
struct UGameplayLib_AbbreviateNumber_Params
{
	float*                                             Number;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               precision;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              UseGrouping;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ES2.HealthComponent.TakeDamage
struct UHealthComponent_TakeDamage_Params
{
	float*                                             DamageAmount;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsCritical;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent*                               DamageEvent;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FHitResult*                                 HitResult;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              DamageAbsorbed;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              DamageOverkill;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               IsDead;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.HealthComponent.SetEmergencyShieldPresent
struct UHealthComponent_SetEmergencyShieldPresent_Params
{
	bool*                                              bPresent;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             ActivationThresholdIn;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             InvincibilityDurationIn;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.HealthComponent.OverheatRandomPart
struct UHealthComponent_OverheatRandomPart_Params
{
	float*                                             DurationSeconds;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>*                             ExcludeDamagePartClasses;                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function ES2.HealthComponent.IsDead
struct UHealthComponent_IsDead_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.HealthComponent.IsAnyComponentDamaged
struct UHealthComponent_IsAnyComponentDamaged_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.HealthComponent.InitDamageParts
struct UHealthComponent_InitDamageParts_Params
{
	TArray<struct FDamagePartInfo>*                    DamagePartInfo;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function ES2.HealthComponent.GetScheduledHullRepairHitpoints
struct UHealthComponent_GetScheduledHullRepairHitpoints_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.HealthComponent.GetDamage
struct UHealthComponent_GetDamage_Params
{
	bool*                                              bRegardScheduledRepairs;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.HealthComponent.EnqueueHullRepair
struct UHealthComponent_EnqueueHullRepair_Params
{
	struct FHullRepair*                                HullRepairEntry;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function ES2.HealthComponent.CreateDamagePartInfo
struct UHealthComponent_CreateDamagePartInfo_Params
{
	TArray<struct FDamagePartInfo>                     DamagePartInfo;                                           // (Parm, OutParm, ZeroConstructor)
};

// Function ES2.HealthComponent.ChangeAllDamageProbabilites
struct UHealthComponent_ChangeAllDamageProbabilites_Params
{
	float*                                             Factor;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.SelfRegisteringComponent.Unregister
struct USelfRegisteringComponent_Unregister_Params
{
};

// Function ES2.SelfRegisteringComponent.Register
struct USelfRegisteringComponent_Register_Params
{
};

// Function ES2.SelfRegisteringComponent.IsRegistered
struct USelfRegisteringComponent_IsRegistered_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.SelfRegisteringComponent.GetAllActorsOfRegistersInRange
struct USelfRegisteringComponent_GetAllActorsOfRegistersInRange_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<TEnumAsByte<ERegisterIds>>*                 RegIds;                                                   // (Parm, ZeroConstructor)
	struct FVector*                                    Origin;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float*                                             Range;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     IgnoreActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bOcclusionCheck;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ES2.SelfRegisteringComponent.GetAllActorsOfRegisterInRange
struct USelfRegisteringComponent_GetAllActorsOfRegisterInRange_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ERegisterIds>*                         RegId;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Origin;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float*                                             Range;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     IgnoreActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bOcclusionCheck;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ES2.SelfRegisteringComponent.GetAllActorsOfRegister
struct USelfRegisteringComponent_GetAllActorsOfRegister_Params
{
	TEnumAsByte<ERegisterIds>*                         RegId;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function ES2.HUDMarkerComponent.SetHiddenInHUD
struct UHUDMarkerComponent_SetHiddenInHUD_Params
{
	bool*                                              NewHiddenInHUD;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.HUDMarkerComponent.SetCloaked
struct UHUDMarkerComponent_SetCloaked_Params
{
	bool*                                              Cloaked;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.HUDMarkerComponent.RemoveIndicator
struct UHUDMarkerComponent_RemoveIndicator_Params
{
	TEnumAsByte<EIndicator>*                           Indicator;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.HUDMarkerComponent.OwnerHealthDepleted
struct UHUDMarkerComponent_OwnerHealthDepleted_Params
{
	class AActor**                                     Owner;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                DamageInstigator;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DamageAmount;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.HUDMarkerComponent.IsLockable
struct UHUDMarkerComponent_IsLockable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.HUDMarkerComponent.IsHiddenInHUD
struct UHUDMarkerComponent_IsHiddenInHUD_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.HUDMarkerComponent.IsCloaked
struct UHUDMarkerComponent_IsCloaked_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.HUDMarkerComponent.IsAutoAimable
struct UHUDMarkerComponent_IsAutoAimable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.HUDMarkerComponent.HasIndicator
struct UHUDMarkerComponent_HasIndicator_Params
{
	TEnumAsByte<EIndicator>*                           Indicator;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.HUDMarkerComponent.GetScreenNameFromActor
struct UHUDMarkerComponent_GetScreenNameFromActor_Params
{
	class AActor**                                     Actor;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)
};

// Function ES2.HUDMarkerComponent.GetMarkerPivotInWorldFromActor
struct UHUDMarkerComponent_GetMarkerPivotInWorldFromActor_Params
{
	class AActor**                                     Actor;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.HUDMarkerComponent.GetMarkerPivotInWorld
struct UHUDMarkerComponent_GetMarkerPivotInWorld_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.HUDMarkerComponent.GetLastHUDMarkerData
struct UHUDMarkerComponent_GetLastHUDMarkerData_Params
{
	struct FHUDMarkerData                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ES2.HUDMarkerComponent.AttachInteractWidgetToMarker
struct UHUDMarkerComponent_AttachInteractWidgetToMarker_Params
{
	class UInteractComponent**                         InteractComponent;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ES2.HUDMarkerComponent.AddOrRemoveIndicator
struct UHUDMarkerComponent_AddOrRemoveIndicator_Params
{
	TEnumAsByte<EIndicator>*                           Indicator;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bAdd;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.HUDMarkerComponent.AddIndicator
struct UHUDMarkerComponent_AddIndicator_Params
{
	TEnumAsByte<EIndicator>*                           Indicator;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.HUDMarkerWidget.RefreshIndicators
struct UHUDMarkerWidget_RefreshIndicators_Params
{
	TMap<TEnumAsByte<EIndicator>, bool>*               NewIndicators;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function ES2.HUDMarkerWidget.OnSpottedPlayer
struct UHUDMarkerWidget_OnSpottedPlayer_Params
{
};

// Function ES2.HUDMarkerWidget.OnOwningActorSet
struct UHUDMarkerWidget_OnOwningActorSet_Params
{
	class AActor**                                     Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.HUDMarkerWidget.OnLockedByPlayer
struct UHUDMarkerWidget_OnLockedByPlayer_Params
{
};

// Function ES2.HUDMarkerWidget.OnFirstShown
struct UHUDMarkerWidget_OnFirstShown_Params
{
};

// Function ES2.HUDMarkerWidget.OnDetachInteractWidget
struct UHUDMarkerWidget_OnDetachInteractWidget_Params
{
};

// Function ES2.HUDMarkerWidget.OnAttachInteractWidget
struct UHUDMarkerWidget_OnAttachInteractWidget_Params
{
	class UUserWidget**                                InteractWidget;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ES2.HUDMarkerWidget.Init
struct UHUDMarkerWidget_Init_Params
{
};

// Function ES2.InputLib.UnbindActionButtonEvent
struct UInputLib_UnbindActionButtonEvent_Params
{
	struct FInputActionButtonInfo                      ActionButtonInfo;                                         // (Parm, OutParm)
};

// Function ES2.InputLib.ShouldHandleAction
struct UInputLib_ShouldHandleAction_Params
{
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInputActionName>*                     Action;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.InputLib.SetInputEnabled
struct UInputLib_SetInputEnabled_Params
{
	bool*                                              bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.InputLib.IsPositiveKey
struct UInputLib_IsPositiveKey_Params
{
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInputActionName>*                     Action;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FKey*                                       InKey;                                                    // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.InputLib.IsModifierPressed
struct UInputLib_IsModifierPressed_Params
{
	class APlayerController**                          PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInputActionName>*                     Action;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FKey*                                       Key;                                                      // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.InputLib.IsKeyForAction
struct UInputLib_IsKeyForAction_Params
{
	class APlayerController**                          PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	TEnumAsByte<EInputActionName>*                     Action;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.InputLib.IsKeyAndModifierPressed
struct UInputLib_IsKeyAndModifierPressed_Params
{
	class APlayerController**                          PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInputActionName>*                     Action;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.InputLib.IsJoystickConnected
struct UInputLib_IsJoystickConnected_Params
{
	class APlayerController**                          PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.InputLib.IsAxisAction
struct UInputLib_IsAxisAction_Params
{
	TEnumAsByte<EInputActionName>*                     Action;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.InputLib.IsAnalogInputEventForAction
struct UInputLib_IsAnalogInputEventForAction_Params
{
	class APlayerController**                          PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FAnalogInputEvent*                          InAnalogInputEvent;                                       // (ConstParm, Parm, OutParm, ReferenceParm)
	TEnumAsByte<EInputActionName>*                     Action;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.InputLib.GetModifierFromCell
struct UInputLib_GetModifierFromCell_Params
{
	int*                                               ModIndex;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FKeybindingCell*                            KeybindingCell;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FKey                                        ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ES2.InputLib.GetKeysForAxis
struct UInputLib_GetKeysForAxis_Params
{
	class APlayerController**                          PlayerController;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInputActionName>*                     Action;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsGamePadMode;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FKey                                        KeyCombined;                                              // (Parm, OutParm)
	struct FKey                                        KeyPositiveScale;                                         // (Parm, OutParm)
	struct FKey                                        KeyNegativeScale;                                         // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.InputLib.GetKeysForAction
struct UInputLib_GetKeysForAction_Params
{
	class APlayerController**                          PlayerController;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInputActionName>*                     Action;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FKey>                                OUT_Modifiers;                                            // (Parm, OutParm, ZeroConstructor)
	bool*                                              bIsGamePadMode;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIgnoreAxisScale;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIgnoreGamePadMode;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FKey>                                ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ES2.InputLib.GetKeyFromCell
struct UInputLib_GetKeyFromCell_Params
{
	int*                                               KeyIndex;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FKeybindingCell*                            KeybindingCell;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FKey                                        ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ES2.InputLib.GetKeyForAction
struct UInputLib_GetKeyForAction_Params
{
	class APlayerController**                          PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInputActionName>*                     Action;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FKey                                        OUT_Modifier;                                             // (Parm, OutParm)
	bool*                                              bIsGamePadMode;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FKey                                        ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function ES2.InputLib.GetInputPresetNames
struct UInputLib_GetInputPresetNames_Params
{
	TArray<class FString>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ES2.InputLib.GetInputPresetBindings
struct UInputLib_GetInputPresetBindings_Params
{
	EInputPreset*                                      Preset;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               DeviceID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class FString*                                     DeviceName;                                               // (Parm, ZeroConstructor)
	struct FInputPresetContainer                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ES2.InputLib.GetInputActionName
struct UInputLib_GetInputActionName_Params
{
	TEnumAsByte<EInputActionName>*                     Action;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.InputLib.GetDefaultInputBindings
struct UInputLib_GetDefaultInputBindings_Params
{
	TArray<struct FKeybindingConfig>                   Out_Keybindings;                                          // (Parm, OutParm, ZeroConstructor)
};

// Function ES2.InputLib.GetAdjustedCursorDelta
struct UInputLib_GetAdjustedCursorDelta_Params
{
	struct FPointerEvent*                              Input;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	class AESPlayerController**                        PC;                                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.InputLib.CompareContexts
struct UInputLib_CompareContexts_Params
{
	TEnumAsByte<EInputActionName>*                     Action1;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInputActionName>*                     Action2;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bGamepadMode;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.InputLib.CallActionButtonEventIfBound
struct UInputLib_CallActionButtonEventIfBound_Params
{
	struct FInputActionButtonInfo*                     ActionButtonInfo;                                         // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function ES2.InteractComponent.SetInteractRadius
struct UInteractComponent_SetInteractRadius_Params
{
	float*                                             NewRadius;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.InteractComponent.Reset
struct UInteractComponent_Reset_Params
{
};

// Function ES2.InteractComponent.OnEndOverlapTrigger
struct UInteractComponent_OnEndOverlapTrigger_Params
{
	class UPrimitiveComponent**                        OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.InteractComponent.OnBeginOverlapTrigger
struct UInteractComponent_OnBeginOverlapTrigger_Params
{
	class UPrimitiveComponent**                        OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function ES2.InteractComponent.IsEnabled
struct UInteractComponent_IsEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.InteractComponent.GetHoldProgress
struct UInteractComponent_GetHoldProgress_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.InteractComponent.GetChargeRatio
struct UInteractComponent_GetChargeRatio_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.InteractComponent.ConfirmInteract
struct UInteractComponent_ConfirmInteract_Params
{
	bool*                                              bIgnoreStateAndForce;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIgnoreHold;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.InteractComponentWidget.TickInteractionWidget
struct UInteractComponentWidget_TickInteractionWidget_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.InteractComponentWidget.SetInteractComponent
struct UInteractComponentWidget_SetInteractComponent_Params
{
	class UInteractComponent**                         InteractComponentIn;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ES2.InteractComponentWidget.OnInitWithInteractComponent
struct UInteractComponentWidget_OnInitWithInteractComponent_Params
{
	class UInteractComponent**                         NewInteractComponent;                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     NewActor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.InteractComponentWidget.OnDetachedFromMarkerWidget
struct UInteractComponentWidget_OnDetachedFromMarkerWidget_Params
{
};

// Function ES2.InteractComponentWidget.OnAttachedToMarkerWidget
struct UInteractComponentWidget_OnAttachedToMarkerWidget_Params
{
};

// Function ES2.Inventory.ToString
struct UInventory_ToString_Params
{
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ES2.Inventory.SwapItems
struct UInventory_SwapItems_Params
{
	class UItem**                                      Item1;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UItem**                                      Item2;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.Inventory.Sort
struct UInventory_Sort_Params
{
	TEnumAsByte<EInventoryCategory>*                   Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.Inventory.SetFirstCargoItem
struct UInventory_SetFirstCargoItem_Params
{
	class UItem**                                      Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.Inventory.ResizeInventory
struct UInventory_ResizeInventory_Params
{
	TEnumAsByte<EInventoryCategory>*                   Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               NewSize;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              AllowShrinking;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.Inventory.ReplaceItemAtIndex
struct UInventory_ReplaceItemAtIndex_Params
{
	TEnumAsByte<EInventoryCategory>*                   Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UItem**                                      NewItem;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.Inventory.ReplaceItem
struct UInventory_ReplaceItem_Params
{
	class UItem**                                      ItemToReplace;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UItem**                                      NewItem;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.Inventory.RemoveItemTypeWithAmount
struct UInventory_RemoveItemTypeWithAmount_Params
{
	struct FName*                                      TypeID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInventoryCategory>*                   Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.Inventory.RemoveItem
struct UInventory_RemoveItem_Params
{
	class UItem**                                      Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.Inventory.IsCargoEmpty
struct UInventory_IsCargoEmpty_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.Inventory.HasSlotsOfCategory
struct UInventory_HasSlotsOfCategory_Params
{
	TEnumAsByte<EInventoryCategory>*                   Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.Inventory.HasItemOfType
struct UInventory_HasItemOfType_Params
{
	struct FName*                                      ItemID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInventoryCategory>*                   Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.Inventory.HasItem
struct UInventory_HasItem_Params
{
	class UItem**                                      Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInventoryCategory>*                   Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.Inventory.GetTotalStackSpaceForItem
struct UInventory_GetTotalStackSpaceForItem_Params
{
	class UItem**                                      Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInventoryCategory>*                   Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.Inventory.GetTotalCargoSpaceIncreasingAmount
struct UInventory_GetTotalCargoSpaceIncreasingAmount_Params
{
	TEnumAsByte<EInventoryCategory>*                   Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.Inventory.GetSlotIndexWithLowestAmountForItemType
struct UInventory_GetSlotIndexWithLowestAmountForItemType_Params
{
	struct FName*                                      ItemTemplateID;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.Inventory.GetSize
struct UInventory_GetSize_Params
{
	TEnumAsByte<EInventoryCategory>*                   Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.Inventory.GetNumItemsOfCategory
struct UInventory_GetNumItemsOfCategory_Params
{
	TEnumAsByte<EInventoryCategory>*                   Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.Inventory.GetNumberOfEmptySlots
struct UInventory_GetNumberOfEmptySlots_Params
{
	TEnumAsByte<EInventoryCategory>*                   Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.Inventory.GetItemsOfCategoryAndType
struct UInventory_GetItemsOfCategoryAndType_Params
{
	TEnumAsByte<EInventoryCategory>*                   Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      TypeID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UItem*>                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ES2.Inventory.GetItemsOfCategory
struct UInventory_GetItemsOfCategory_Params
{
	TEnumAsByte<EInventoryCategory>*                   Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              CullEmpty;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UItem*>                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ES2.Inventory.GetFreeStackSpaceForItemType
struct UInventory_GetFreeStackSpaceForItemType_Params
{
	struct FName*                                      ItemTemplateID;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInventoryCategory>*                   Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.Inventory.GetFirstValidItemOfCategory
struct UInventory_GetFirstValidItemOfCategory_Params
{
	TEnumAsByte<EInventoryCategory>*                   Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UItem*                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.Inventory.GetFirstSlotIndexForStacking
struct UInventory_GetFirstSlotIndexForStacking_Params
{
	struct FName*                                      ItemTemplateID;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInventoryCategory>*                   Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.Inventory.GetFirstEmptySlotIndex
struct UInventory_GetFirstEmptySlotIndex_Params
{
	TEnumAsByte<EInventoryCategory>*                   Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.Inventory.GetFirstCargoItem
struct UInventory_GetFirstCargoItem_Params
{
	class UItem*                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.Inventory.GetEquippedItems
struct UInventory_GetEquippedItems_Params
{
	bool*                                              OnlyModules;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UItem*>                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ES2.Inventory.GetCargoItemsOfCategory
struct UInventory_GetCargoItemsOfCategory_Params
{
	struct FName*                                      ItemCategoryID;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UItem*>                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ES2.Inventory.GetCargoItemOfCategoryWithHighestAmount
struct UInventory_GetCargoItemOfCategoryWithHighestAmount_Params
{
	struct FName*                                      ItemTemplateID;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UItem*                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.Inventory.GetAmountOfItems
struct UInventory_GetAmountOfItems_Params
{
	struct FName*                                      ItemID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInventoryCategory>*                   Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.Inventory.Consolidate
struct UInventory_Consolidate_Params
{
	TEnumAsByte<EInventoryCategory>*                   Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              ShrinkToFit;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.Inventory.ChangeItemAmountOfType
struct UInventory_ChangeItemAmountOfType_Params
{
	class UItem**                                      ItemAsTemplate;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInventoryCategory>*                   Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Change;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Consolidate;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.Inventory.ChangeAbsoluteItemAmountOfType
struct UInventory_ChangeAbsoluteItemAmountOfType_Params
{
	class UItem**                                      ItemAsTemplate;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInventoryCategory>*                   Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Consolidate;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.Inventory.AddItemsOfType
struct UInventory_AddItemsOfType_Params
{
	class UItem**                                      ItemAsTemplate;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInventoryCategory>*                   Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.Inventory.AddItem
struct UInventory_AddItem_Params
{
	class UItem**                                      Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInventoryCategory>*                   Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              EnlargeIfNeeded;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.InventoryLib.SetShipModulesForShip
struct UInventoryLib_SetShipModulesForShip_Params
{
	int*                                               ShipIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FShipModuleState>*                   NewShipModules;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function ES2.InventoryLib.SetShipDecalsForShip
struct UInventoryLib_SetShipDecalsForShip_Params
{
	int*                                               ShipIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      NewDecalsID;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function ES2.InventoryLib.SetShipColorsForShip
struct UInventoryLib_SetShipColorsForShip_Params
{
	int*                                               ShipIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FShipColors*                                NewShipColors;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function ES2.InventoryLib.SetCurrentShip
struct UInventoryLib_SetCurrentShip_Params
{
	int*                                               PlayerShipIndex;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.InventoryLib.ReplaceShipData
struct UInventoryLib_ReplaceShipData_Params
{
	struct FShipData*                                  NewShipData;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	int*                                               ShipIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.InventoryLib.ReinitShipAfterPotentialChanges
struct UInventoryLib_ReinitShipAfterPotentialChanges_Params
{
};

// Function ES2.InventoryLib.MakeCargoInventoryFromItems
struct UInventoryLib_MakeCargoInventoryFromItems_Params
{
	TArray<class UItem*>*                              Items;                                                    // (Parm, ZeroConstructor)
	int*                                               InventorySize;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              CullEmpty;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UInventory*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.InventoryLib.MakeAndInitAttributeAccessFromItem
struct UInventoryLib_MakeAndInitAttributeAccessFromItem_Params
{
	struct FAttributeAccess                            InOut_AttributeAccess;                                    // (Parm, OutParm, ReferenceParm)
	struct FName*                                      AttributeID;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DefaultValue;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UItem**                                      Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.InventoryLib.IsItemValidForInventoryCategory
struct UInventoryLib_IsItemValidForInventoryCategory_Params
{
	class UItem**                                      Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInventoryCategory>*                   InventoryCategory;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.InventoryLib.InitAttributeAccessFromWeaponGlobals
struct UInventoryLib_InitAttributeAccessFromWeaponGlobals_Params
{
	struct FAttributeAccess                            AttributeAccess;                                          // (Parm, OutParm, ReferenceParm)
	bool*                                              PrimaryWeapon;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.InventoryLib.InitAttributeAccessFromShip
struct UInventoryLib_InitAttributeAccessFromShip_Params
{
	struct FAttributeAccess                            AttributeAccess;                                          // (Parm, OutParm, ReferenceParm)
	struct FShipData*                                  ShipData;                                                 // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.InventoryLib.InitAttributeAccessFromPlayerGlobals
struct UInventoryLib_InitAttributeAccessFromPlayerGlobals_Params
{
	struct FAttributeAccess                            AttributeAccess;                                          // (Parm, OutParm, ReferenceParm)
	struct FName*                                      AttributeID;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.InventoryLib.InitAttributeAccessFromOwner
struct UInventoryLib_InitAttributeAccessFromOwner_Params
{
	struct FAttributeAccess                            AttributeAccess;                                          // (Parm, OutParm, ReferenceParm)
	class AActor**                                     Owner;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.InventoryLib.InitAttributeAccessFromItem
struct UInventoryLib_InitAttributeAccessFromItem_Params
{
	struct FAttributeAccess                            AttributeAccess;                                          // (Parm, OutParm, ReferenceParm)
	class UItem**                                      Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.InventoryLib.HasItemOfTypeInCargo
struct UInventoryLib_HasItemOfTypeInCargo_Params
{
	struct FName*                                      ItemID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.InventoryLib.GetWeaponAttributes
struct UInventoryLib_GetWeaponAttributes_Params
{
	TMap<struct FName, class UItemAttribute*>          GlobalAttributes;                                         // (Parm, OutParm, ZeroConstructor)
	bool*                                              PrimaryWeapon;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.InventoryLib.GetTotalCargoSpaceOfShip
struct UInventoryLib_GetTotalCargoSpaceOfShip_Params
{
	int*                                               ShipIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.InventoryLib.GetShipPrice
struct UInventoryLib_GetShipPrice_Params
{
	class UItem**                                      ShipItem;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                BuyPriceOut;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                TradePriceOut;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.InventoryLib.GetResultingStatAttributesForItemSwitch
struct UInventoryLib_GetResultingStatAttributesForItemSwitch_Params
{
	class UItem**                                      CurrentItem;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UItem**                                      NewItem;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UItemAttribute*>                      PreviewAttributes;                                        // (Parm, OutParm, ZeroConstructor)
};

// Function ES2.InventoryLib.GetPlayerShip
struct UInventoryLib_GetPlayerShip_Params
{
	int*                                               PlayerShipIndex;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FShipData                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ES2.InventoryLib.GetPlayerAttributes
struct UInventoryLib_GetPlayerAttributes_Params
{
	TMap<struct FName, class UItemAttribute*>          GlobalAttributes;                                         // (Parm, OutParm, ZeroConstructor)
};

// Function ES2.InventoryLib.GetPlayerAttribute
struct UInventoryLib_GetPlayerAttribute_Params
{
	struct FName*                                      AttributeID;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UItemAttribute*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.InventoryLib.GetNumShipsOnHomebase
struct UInventoryLib_GetNumShipsOnHomebase_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.InventoryLib.GetNumShipSlotsOnHomebase
struct UInventoryLib_GetNumShipSlotsOnHomebase_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.InventoryLib.GetNumFreeShipSlotsOnHomebase
struct UInventoryLib_GetNumFreeShipSlotsOnHomebase_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.InventoryLib.GetItemCategoryByInventoryCategory
struct UInventoryLib_GetItemCategoryByInventoryCategory_Params
{
	TEnumAsByte<EInventoryCategory>*                   Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.InventoryLib.GetItemAmountOfTypeInCargo
struct UInventoryLib_GetItemAmountOfTypeInCargo_Params
{
	struct FName*                                      ItemID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.InventoryLib.GetInventoryOfShip
struct UInventoryLib_GetInventoryOfShip_Params
{
	int*                                               PlayerShipIndex;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class UInventory*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.InventoryLib.GetInventoryOfCurrentShip
struct UInventoryLib_GetInventoryOfCurrentShip_Params
{
	class UInventory*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.InventoryLib.GetInventoryCategoryByItemCategory
struct UInventoryLib_GetInventoryCategoryByItemCategory_Params
{
	struct FName*                                      CategoryID;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInventoryCategory>                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.InventoryLib.GetCurrentShipIndex
struct UInventoryLib_GetCurrentShipIndex_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.InventoryLib.GetCurrentShip
struct UInventoryLib_GetCurrentShip_Params
{
	struct FShipData                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ES2.InventoryLib.GetAttributeOfShip
struct UInventoryLib_GetAttributeOfShip_Params
{
	struct FShipData                                   ShipData;                                                 // (Parm, OutParm, ReferenceParm)
	struct FName*                                      AttributeID;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UItemAttribute*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.InventoryLib.GetAttributeOfPlayer
struct UInventoryLib_GetAttributeOfPlayer_Params
{
	struct FName*                                      AttributeID;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UItemAttribute*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.InventoryLib.CreateShipData
struct UInventoryLib_CreateShipData_Params
{
	struct FShipData                                   ShipDataIn;                                               // (Parm, OutParm, ReferenceParm)
	class UItem**                                      AlreadyExisitingShipItem;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bCreateNewShipModules;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bCreateNewShipColors;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bCreateNewShipDecals;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               ItemLevel;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      ShipTypeID;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FShipData                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ES2.InventoryLib.BuyShip
struct UInventoryLib_BuyShip_Params
{
	struct FShipData*                                  NewShipData;                                              // (Parm)
	TEnumAsByte<EShipBuyMode>*                         BuyMode;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      StationID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AESPawn**                                    PlayerShip;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EShipBuyResult>                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.InventoryLib.AttributeAccessToString
struct UInventoryLib_AttributeAccessToString_Params
{
	struct FAttributeAccess*                           AttributeAccess;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ES2.InventoryLib.AttributeAccessToFloat
struct UInventoryLib_AttributeAccessToFloat_Params
{
	struct FAttributeAccess*                           AttributeAccess;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.InventoryLib.AttributeAccessToBuffableFloat
struct UInventoryLib_AttributeAccessToBuffableFloat_Params
{
	struct FAttributeAccess*                           AttributeAccess;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FBuffableFloat                              BuffableFloatOut;                                         // (Parm, OutParm)
};

// Function ES2.InventoryLib.AreShipDecalsEqual
struct UInventoryLib_AreShipDecalsEqual_Params
{
	struct FShipDecalTextures*                         arg1;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FShipDecalTextures*                         arg2;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.InventoryLib.AreShipColorsEqual
struct UInventoryLib_AreShipColorsEqual_Params
{
	struct FShipColors*                                arg1;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FShipColors*                                arg2;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.Item.SetCustomData
struct UItem_SetCustomData_Params
{
	struct FName*                                      ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FESVariant*                                 NewValue;                                                 // (Parm)
	bool                                               bWasNewlyCreated;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.Item.SetCondition
struct UItem_SetCondition_Params
{
	float*                                             Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bUpdatePrice;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.Item.SetAttribute
struct UItem_SetAttribute_Params
{
	struct FName*                                      AttributeID;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             NewValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.Item.IsStackable
struct UItem_IsStackable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.Item.IsFullyStacked
struct UItem_IsFullyStacked_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.Item.IsCargoSpaceIncreasingItem
struct UItem_IsCargoSpaceIncreasingItem_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.Item.IsCargoSpaceDecreasingItem
struct UItem_IsCargoSpaceDecreasingItem_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.Item.IsCargoSpaceChangingItem
struct UItem_IsCargoSpaceChangingItem_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.Item.GetTemplateName
struct UItem_GetTemplateName_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ES2.Item.GetSubCategoryName
struct UItem_GetSubCategoryName_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ES2.Item.GetSubCategoryID
struct UItem_GetSubCategoryID_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.Item.GetMaxStackAmount
struct UItem_GetMaxStackAmount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.Item.GetCategoryName
struct UItem_GetCategoryName_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ES2.Item.GetCategoryID
struct UItem_GetCategoryID_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.Item.GetCargoSpaceIncreasingAmount
struct UItem_GetCargoSpaceIncreasingAmount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.Item.GetAttribute
struct UItem_GetAttribute_Params
{
	struct FName*                                      AttributeID;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UItemAttribute*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.Item.FindCustomData
struct UItem_FindCustomData_Params
{
	struct FName*                                      ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FESVariant                                  Value_OUT;                                                // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.ItemAttribute.SetParentCompoundAttribute
struct UItemAttribute_SetParentCompoundAttribute_Params
{
	class UItemAttribute**                             ParentAttribute;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.ItemAttribute.SetGlobalBuffAttribute
struct UItemAttribute_SetGlobalBuffAttribute_Params
{
	class UItemAttribute**                             _BuffAttribute;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.ItemAttribute.SetAutomaticTextUpdate
struct UItemAttribute_SetAutomaticTextUpdate_Params
{
	bool*                                              bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.ItemAttribute.GetDescriptionText
struct UItemAttribute_GetDescriptionText_Params
{
	bool*                                              BuffedValue;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ES2.ItemContainer.SetEmpty
struct AItemContainer_SetEmpty_Params
{
};

// Function ES2.ItemContainer.OnContainerOpened
struct AItemContainer_OnContainerOpened_Params
{
};

// Function ES2.ItemContainer.IsEmpty
struct AItemContainer_IsEmpty_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.ItemContainer.InteractWithContainer
struct AItemContainer_InteractWithContainer_Params
{
	class UInteractComponent**                         InteractComponent;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     InteractActor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.ItemLib.SetPerks
struct UItemLib_SetPerks_Params
{
	TArray<struct FName>*                              PerkIDs;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function ES2.ItemLib.SetModeForDevice
struct UItemLib_SetModeForDevice_Params
{
	struct FName*                                      DeviceItemID;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      DeviceModeItemID;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.ItemLib.SetItemAttributeCustomText
struct UItemLib_SetItemAttributeCustomText_Params
{
	class UItem**                                      Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      AttributeID;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText*                                      FormatText;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FText*                                      ValueText;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function ES2.ItemLib.MakeTransientAttributeInstance
struct UItemLib_MakeTransientAttributeInstance_Params
{
	struct FName*                                      AttributeID;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsMandatory;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UItemAttribute*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.ItemLib.IsPlayerCompoundAttribute
struct UItemLib_IsPlayerCompoundAttribute_Params
{
	struct FName*                                      AttributeID;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.ItemLib.IsModuleItem
struct UItemLib_IsModuleItem_Params
{
	class UItem**                                      Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.ItemLib.IsEquipmentItem
struct UItemLib_IsEquipmentItem_Params
{
	class UItem**                                      Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.ItemLib.GetSubItemIDs
struct UItemLib_GetSubItemIDs_Params
{
	struct FName*                                      CategoryOrSubCategoryID;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ES2.ItemLib.GetShipSettings
struct UItemLib_GetShipSettings_Params
{
	struct FName*                                      PlayerShipID;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FShipSettingsTableRow                       ShipSettingsOut;                                          // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.ItemLib.GetShipModule
struct UItemLib_GetShipModule_Params
{
	struct FName*                                      ShipID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      ModuleID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FShipModule                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ES2.ItemLib.GetShipDecalTextures
struct UItemLib_GetShipDecalTextures_Params
{
	struct FName*                                      DecalsID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FShipDecalTextures                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ES2.ItemLib.GetRandomResourceAmountForRarity
struct UItemLib_GetRandomResourceAmountForRarity_Params
{
	TEnumAsByte<EItemRarity>*                          Rarity;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRandomStream                               RandomStream;                                             // (Parm, OutParm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.ItemLib.GetPickupClassPathForItemCategory
struct UItemLib_GetPickupClassPathForItemCategory_Params
{
	struct FName*                                      ItemCategory;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      ItemSubCategory;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ES2.ItemLib.GetPerkIDsForSet
struct UItemLib_GetPerkIDsForSet_Params
{
	int*                                               SetNumber;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               PerkIDs;                                                  // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.ItemLib.GetModesForDevice
struct UItemLib_GetModesForDevice_Params
{
	struct FName*                                      DeviceItemID;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UItem*>                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ES2.ItemLib.GetModeForEquippedDevice
struct UItemLib_GetModeForEquippedDevice_Params
{
	class ADeviceBase**                                EquippedDevice;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UItem*                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.ItemLib.GetModeForDevice
struct UItemLib_GetModeForDevice_Params
{
	struct FName*                                      DeviceItemID;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.ItemLib.GetMaxAmmo
struct UItemLib_GetMaxAmmo_Params
{
	class UItem**                                      Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.ItemLib.GetItemValueRange
struct UItemLib_GetItemValueRange_Params
{
	struct FName*                                      ItemID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      AttributeID;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FItemValueRange                             Out_Range;                                                // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.ItemLib.GetItemTemplates
struct UItemLib_GetItemTemplates_Params
{
	TArray<struct FItemTemplate>                       ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function ES2.ItemLib.GetItemTemplate
struct UItemLib_GetItemTemplate_Params
{
	struct FName*                                      ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FItemTemplate                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ES2.ItemLib.GetItemPrice
struct UItemLib_GetItemPrice_Params
{
	class UItem**                                      Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.ItemLib.GetItemNameByID
struct UItemLib_GetItemNameByID_Params
{
	struct FName*                                      ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ResultText;                                               // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.ItemLib.GetItemIDs
struct UItemLib_GetItemIDs_Params
{
	class UItemIDs*                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.ItemLib.GetItemAttributes
struct UItemLib_GetItemAttributes_Params
{
	class UItem**                                      Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UItemAttribute*>                      HeroAttributesOut;                                        // (Parm, OutParm, ZeroConstructor)
	TArray<class UItemAttribute*>                      MandatoryAttributesOut;                                   // (Parm, OutParm, ZeroConstructor)
	TArray<class UItemAttribute*>                      RandomAttributesOut;                                      // (Parm, OutParm, ZeroConstructor)
};

// Function ES2.ItemLib.GetDescriptionWithoutNumbers
struct UItemLib_GetDescriptionWithoutNumbers_Params
{
	class UItemAttribute**                             AttributeInstance;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function ES2.ItemLib.GetCurrentAmmo
struct UItemLib_GetCurrentAmmo_Params
{
	class UItem**                                      Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.ItemLib.GetChipValueForItem
struct UItemLib_GetChipValueForItem_Params
{
	class UItem**                                      Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FItemChip*                                  ItemChip;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FItemChipValue                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ES2.ItemLib.GetChips
struct UItemLib_GetChips_Params
{
	TArray<struct FItemChip>                           ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function ES2.ItemLib.GetChip
struct UItemLib_GetChip_Params
{
	struct FName*                                      ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FItemChip                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ES2.ItemLib.GetAttributeTemplates
struct UItemLib_GetAttributeTemplates_Params
{
	TArray<struct FItemAttributeTemplate>              ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function ES2.ItemLib.GetAttributeTemplate
struct UItemLib_GetAttributeTemplate_Params
{
	struct FName*                                      ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FItemAttributeTemplate                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ES2.ItemLib.GetAttributesOfCompound
struct UItemLib_GetAttributesOfCompound_Params
{
	struct FName*                                      AttributeID;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CompoundValueToConvert;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FCompoundAttributeEntry>             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ES2.ItemLib.GetAttributeIDs
struct UItemLib_GetAttributeIDs_Params
{
	class UAttributeIDs*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.ItemLib.GetAttributeDescription
struct UItemLib_GetAttributeDescription_Params
{
	class UItemAttribute**                             AttributeInstance;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       FormatedValueText;                                        // (Parm, OutParm)
	struct FText                                       ValueText;                                                // (Parm, OutParm)
	class FString                                      ValueString;                                              // (Parm, OutParm, ZeroConstructor)
	bool*                                              bUseBuffedValue;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ES2.ItemLib.GetAttributeChangesFromCompoundsAtLevelUp
struct UItemLib_GetAttributeChangesFromCompoundsAtLevelUp_Params
{
	TArray<class UItemAttribute*>                      PreviewAttributes;                                        // (Parm, OutParm, ZeroConstructor)
	int*                                               FromLevel;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               ToLevel;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.ItemLib.GetAllLootCategories
struct UItemLib_GetAllLootCategories_Params
{
	TArray<struct FName>                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ES2.ItemLib.GetAllItemTemplatesOfCategory
struct UItemLib_GetAllItemTemplatesOfCategory_Params
{
	struct FName*                                      CategoryOrSubCategoryID;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FItemTemplate>                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ES2.ItemLib.GenerateShipPerks
struct UItemLib_GenerateShipPerks_Params
{
	TEnumAsByte<EShip>*                                ShipType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               ShipTier;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ES2.ItemLib.GenerateShipModulesForShip
struct UItemLib_GenerateShipModulesForShip_Params
{
	struct FName*                                      ShipID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               TierMin;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               TierMax;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FShipModuleState>                    OUT_ShipModules;                                          // (Parm, OutParm, ZeroConstructor)
};

// Function ES2.ItemLib.GenerateShipDecals
struct UItemLib_GenerateShipDecals_Params
{
	struct FName                                       DecalsIDOut;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.ItemLib.GenerateShipColors
struct UItemLib_GenerateShipColors_Params
{
	struct FShipColors                                 ShipColorsOut;                                            // (Parm, OutParm)
	struct FName*                                      DesiredColorsID;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.ItemLib.GenerateItem
struct UItemLib_GenerateItem_Params
{
	int*                                               ItemLevel;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EItemRarity>*                          Rarity;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      CategoryID;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      TypeID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UItem*                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.ItemLib.DuplicateItem
struct UItemLib_DuplicateItem_Params
{
	class UItem**                                      OriginalItem;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               NewAmount;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UItem*                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.ItemLib.CheatSetShipModules
struct UItemLib_CheatSetShipModules_Params
{
	class AESPawn**                                    PlayerPawn;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FShipModuleState>*                   NewShipModules;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function ES2.ItemLib.CheatChangeShipModule
struct UItemLib_CheatChangeShipModule_Params
{
	class AESPawn**                                    PlayerPawn;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EShipModule>*                          ModuleType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bPrevious;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.ItemLib.AddChipToItem
struct UItemLib_AddChipToItem_Params
{
	class UItem**                                      Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FItemChip*                                  ItemChip;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function ES2.ItemTemplates.GetSpawnGroupOfFaction
struct UItemTemplates_GetSpawnGroupOfFaction_Params
{
	TEnumAsByte<EFactions>*                            Faction;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESpawnGroup>                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.ItemTemplates.GetShipTypeFromShipItemID
struct UItemTemplates_GetShipTypeFromShipItemID_Params
{
	struct FName*                                      ShipID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EShip>                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.ItemTemplates.GetShipItemIDFromShipType
struct UItemTemplates_GetShipItemIDFromShipType_Params
{
	TEnumAsByte<EShip>*                                ShipType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.ItemTemplates.GetBuiltInDeviceSubCategoryForShip
struct UItemTemplates_GetBuiltInDeviceSubCategoryForShip_Params
{
	TEnumAsByte<EShip>*                                ShipType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.JumpDriveComponent.StartJumpFocus
struct UJumpDriveComponent_StartJumpFocus_Params
{
	bool*                                              ResumeChargeProgress;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.JumpDriveComponent.SetTargetLocation
struct UJumpDriveComponent_SetTargetLocation_Params
{
	struct FName*                                      LocationID;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.JumpDriveComponent.SetOwnerIsChargingJump
struct UJumpDriveComponent_SetOwnerIsChargingJump_Params
{
	bool*                                              bChargingJump;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.JumpDriveComponent.SetOwnerIsChargingCruiseMode
struct UJumpDriveComponent_SetOwnerIsChargingCruiseMode_Params
{
	bool*                                              IsSpooling;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.JumpDriveComponent.SetOwnerIsBoosting
struct UJumpDriveComponent_SetOwnerIsBoosting_Params
{
	bool*                                              isBoosting;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.JumpDriveComponent.SetCruiseMode
struct UJumpDriveComponent_SetCruiseMode_Params
{
	bool*                                              bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.JumpDriveComponent.SetChargeCruiseModeToTrue
struct UJumpDriveComponent_SetChargeCruiseModeToTrue_Params
{
};

// Function ES2.JumpDriveComponent.RemoveSuppressionActor
struct UJumpDriveComponent_RemoveSuppressionActor_Params
{
	class AActor**                                     SuppresionActor;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.JumpDriveComponent.PostBeginPlay
struct UJumpDriveComponent_PostBeginPlay_Params
{
};

// Function ES2.JumpDriveComponent.OwnerHealthDepleted
struct UJumpDriveComponent_OwnerHealthDepleted_Params
{
	class AActor**                                     Owner;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                Instigator;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DamageAmount;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.JumpDriveComponent.IsSuppressed
struct UJumpDriveComponent_IsSuppressed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.JumpDriveComponent.IsJumping
struct UJumpDriveComponent_IsJumping_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.JumpDriveComponent.IsInJumpFocus
struct UJumpDriveComponent_IsInJumpFocus_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.JumpDriveComponent.IsInCruiseMode
struct UJumpDriveComponent_IsInCruiseMode_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.JumpDriveComponent.InterruptJumpFocus
struct UJumpDriveComponent_InterruptJumpFocus_Params
{
	float*                                             Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.JumpDriveComponent.InterruptCruiseMode
struct UJumpDriveComponent_InterruptCruiseMode_Params
{
};

// Function ES2.JumpDriveComponent.HasValidTargetLocation
struct UJumpDriveComponent_HasValidTargetLocation_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.JumpDriveComponent.GetTargetLocationID
struct UJumpDriveComponent_GetTargetLocationID_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.JumpDriveComponent.GetSignalStrengths
struct UJumpDriveComponent_GetSignalStrengths_Params
{
	TArray<float>                                      StrengthsOut;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function ES2.JumpDriveComponent.GetCurrentChargePercentage
struct UJumpDriveComponent_GetCurrentChargePercentage_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.JumpDriveComponent.GetCruiseModeChargeProgess
struct UJumpDriveComponent_GetCruiseModeChargeProgess_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.JumpDriveComponent.GetClosestSuppressionSignalStrength
struct UJumpDriveComponent_GetClosestSuppressionSignalStrength_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.JumpDriveComponent.ForceImmediateJump
struct UJumpDriveComponent_ForceImmediateJump_Params
{
	struct FName*                                      LocationID;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.JumpDriveComponent.CanJumpDriveBeActivated
struct UJumpDriveComponent_CanJumpDriveBeActivated_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.JumpDriveComponent.CanCruiseModeBeActivated
struct UJumpDriveComponent_CanCruiseModeBeActivated_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.JumpDriveComponent.CallOnJumpInCompleted
struct UJumpDriveComponent_CallOnJumpInCompleted_Params
{
};

// Function ES2.JumpDriveComponent.BoostEnergyDepleted
struct UJumpDriveComponent_BoostEnergyDepleted_Params
{
};

// Function ES2.JumpDriveComponent.AddSuppressionActor
struct UJumpDriveComponent_AddSuppressionActor_Params
{
	class AActor**                                     SuppresionActor;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.JumpDriveComponent.AbortJumpFocus
struct UJumpDriveComponent_AbortJumpFocus_Params
{
	TEnumAsByte<EJumpAbortType>*                       AbortType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              DecreaseAfterAbort;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.JumpSuppressorComponent.SetEnabled
struct UJumpSuppressorComponent_SetEnabled_Params
{
	bool*                                              Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.JumpSuppressorComponent.OwnerHealthDepletedJumpSuppressor
struct UJumpSuppressorComponent_OwnerHealthDepletedJumpSuppressor_Params
{
	class AActor**                                     Owner;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                DamageInstigator;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DamageAmount;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.JumpSuppressorComponent.IsEnabled
struct UJumpSuppressorComponent_IsEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.KeyBinder.UpdateActionBindings
struct UKeyBinder_UpdateActionBindings_Params
{
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.KeyBinder.UI_SetKeyBindingInCell
struct UKeyBinder_UI_SetKeyBindingInCell_Params
{
	int*                                               GroupIndex;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FKey*                                       Key1;                                                     // (ConstParm, Parm)
	struct FKey*                                       Mod1;                                                     // (ConstParm, Parm)
	struct FKey*                                       Key2;                                                     // (ConstParm, Parm)
	struct FKey*                                       Mod2;                                                     // (ConstParm, Parm)
	struct FKeybindingCell                             REF_KeyBindingCell;                                       // (Parm, OutParm, ReferenceParm)
};

// Function ES2.KeyBinder.ShouldHaveAssignment
struct UKeyBinder_ShouldHaveAssignment_Params
{
	TEnumAsByte<EInputActionName>*                     Action;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               GroupIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.KeyBinder.ResetKeys
struct UKeyBinder_ResetKeys_Params
{
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               GroupIndex;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.KeyBinder.RemapKeys
struct UKeyBinder_RemapKeys_Params
{
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FKeybindingConfig*                          KeybindingUI;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FKey*                                       Key1;                                                     // (ConstParm, Parm)
	struct FKey*                                       Key2;                                                     // (ConstParm, Parm)
	struct FKey*                                       Modifier1;                                                // (ConstParm, Parm)
	struct FKey*                                       Modifier2;                                                // (ConstParm, Parm)
	bool*                                              bInvert;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DeadZone;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Sensitivity;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.KeyBinder.OnKeyDown
struct UKeyBinder_OnKeyDown_Params
{
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGeometry*                                  MyGeometry;                                               // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FKey*                                       Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	int*                                               CurrentGroupIndex;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.KeyBinder.MustHaveAssignment
struct UKeyBinder_MustHaveAssignment_Params
{
	TEnumAsByte<EInputActionName>*                     Action;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               GroupIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.KeyBinder.IsAxisInverted
struct UKeyBinder_IsAxisInverted_Params
{
	struct FName*                                      AxisName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      GroupName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.KeyBinder.IsAssignedAxisInverted
struct UKeyBinder_IsAssignedAxisInverted_Params
{
	struct FName*                                      AxisName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      GroupName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.KeyBinder.InvertAxis
struct UKeyBinder_InvertAxis_Params
{
	struct FName*                                      AxisName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      GroupName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bInvert;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.KeyBinder.InitializeKeysFromConfig
struct UKeyBinder_InitializeKeysFromConfig_Params
{
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.KeyBinder.GetModifierForAction
struct UKeyBinder_GetModifierForAction_Params
{
	struct FName*                                      ActionOrAxisName;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FKey*                                       PressedKey;                                               // (Parm)
	struct FKey                                        ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ES2.KeyBinder.GetKeyText
struct UKeyBinder_GetKeyText_Params
{
	struct FKey*                                       Key;                                                      // (Parm)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ES2.KeyBinder.GetKeyBindingsOfCategory
struct UKeyBinder_GetKeyBindingsOfCategory_Params
{
	TArray<struct FKeybindingConfig>                   KeybindingsKeyboard;                                      // (Parm, OutParm, ZeroConstructor)
	TArray<struct FKeybindingConfig>                   KeybindingsGamepad;                                       // (Parm, OutParm, ZeroConstructor)
	TArray<struct FKeybindingConfig>                   KeybindingsJoystick;                                      // (Parm, OutParm, ZeroConstructor)
	int*                                               Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.KeyBinder.GetDisplayNameForAction
struct UKeyBinder_GetDisplayNameForAction_Params
{
	struct FName*                                      ActionOrAxisName;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      GroupName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsAxis;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ES2.KeyBinder.GetAssignedSensitivity
struct UKeyBinder_GetAssignedSensitivity_Params
{
	struct FName*                                      AxisName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      GroupName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.KeyBinder.GetAssignedDeadzone
struct UKeyBinder_GetAssignedDeadzone_Params
{
	struct FName*                                      AxisName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      GroupName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.KeyBinder.ConfirmChanges
struct UKeyBinder_ConfirmChanges_Params
{
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.KeyBinder.CompareKeybindings
struct UKeyBinder_CompareKeybindings_Params
{
	struct FKeybindingConfig*                          Config1;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FKeybindingConfig*                          Config2;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.KeyBinder.CheckForInvertedAxes
struct UKeyBinder_CheckForInvertedAxes_Params
{
};

// Function ES2.KeyBinder.CanDoAssignment
struct UKeyBinder_CanDoAssignment_Params
{
	struct FKeybindingConfig                           Config;                                                   // (Parm, OutParm, ReferenceParm)
	struct FKey*                                       Key;                                                      // (Parm)
	struct FKey*                                       Modifier;                                                 // (Parm)
	int*                                               BindingIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.LayeredSong.GetLayerTransition
struct ULayeredSong_GetLayerTransition_Params
{
	int*                                               From;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               To;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLayerTransition                            ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function ES2.Location.UpdateLocationData
struct ALocation_UpdateLocationData_Params
{
};

// Function ES2.Location.OnRefreshIndicatorsAndVisibility
struct ALocation_OnRefreshIndicatorsAndVisibility_Params
{
};

// Function ES2.Location.HasParentLocation
struct ALocation_HasParentLocation_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.Location.EnterLocation
struct ALocation_EnterLocation_Params
{
};

// Function ES2.Location.DelayedEnterLocation
struct ALocation_DelayedEnterLocation_Params
{
};

// Function ES2.LocationLib.SpawnWingmen
struct ULocationLib_SpawnWingmen_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FRandomStream                               RandomStream;                                             // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function ES2.LocationLib.SaveLocationState
struct ULocationLib_SaveLocationState_Params
{
};

// Function ES2.LocationLib.FindRandomSpawnLocationOnLineSegment
struct ULocationLib_FindRandomSpawnLocationOnLineSegment_Params
{
	class UObject**                                    WorldContext;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FRandomStream                               RandomStream;                                             // (Parm, OutParm, ZeroConstructor)
	struct FVector                                     Out_Vector;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    LineStart;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector*                                    LineEnd;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float*                                             CollisionTestRadius;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               NumFindAttempts;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.LocationLib.FindRandomSpawnLocationFromLocationInfo
struct ULocationLib_FindRandomSpawnLocationFromLocationInfo_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FRandomStream                               RandomStream;                                             // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FTransform                                  Out_Transform;                                            // (Parm, OutParm, IsPlainOldData)
	float*                                             CollisionTestRadius;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               NumFindAttempts;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.LocationLib.FindRandomSpawnLocationAroundPosition
struct ULocationLib_FindRandomSpawnLocationAroundPosition_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FRandomStream                               RandomStream;                                             // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FTransform                                  Out_Transform;                                            // (Parm, OutParm, IsPlainOldData)
	struct FVector*                                    SearchCenter;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float*                                             SearchRadius;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CollisionTestRadius;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               NumFindAttempts;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             MinimumRadius;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             MinMaxZ;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.LootCollectComponent.SetEnabled
struct ULootCollectComponent_SetEnabled_Params
{
	bool*                                              bSetEnabled;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.LootCollectComponent.OnEndOverlapCollect
struct ULootCollectComponent_OnEndOverlapCollect_Params
{
	class UPrimitiveComponent**                        OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.LootCollectComponent.OnBeginOverlapCollect
struct ULootCollectComponent_OnBeginOverlapCollect_Params
{
	class UPrimitiveComponent**                        OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function ES2.LootDropComponent.OwnerHealthDepleted
struct ULootDropComponent_OwnerHealthDepleted_Params
{
	class AActor**                                     Owner;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                DamageInstigator;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DamageAmount;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.LootDropComponent.InitLootDrop
struct ULootDropComponent_InitLootDrop_Params
{
	int*                                               ItemLevelOverride;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.LootDropComponent.GetTotalLootDropAmount
struct ULootDropComponent_GetTotalLootDropAmount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.LootDropComponent.EmptyLootToDrop
struct ULootDropComponent_EmptyLootToDrop_Params
{
};

// Function ES2.LootDropComponent.DropLoot
struct ULootDropComponent_DropLoot_Params
{
	class AActor**                                     OwningActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              AllowSubsequentDrops;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.LootDropComponent.AddLootToDrop
struct ULootDropComponent_AddLootToDrop_Params
{
	struct FPickupEntry*                               NewLoot;                                                  // (Parm)
	bool*                                              ClearOldLoot;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.LootDropComponent.AddLootFromItems
struct ULootDropComponent_AddLootFromItems_Params
{
	TArray<class UItem*>*                              Items;                                                    // (Parm, ZeroConstructor)
	bool*                                              ClearOldLoot;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.MapLib.WasLocationVisited
struct UMapLib_WasLocationVisited_Params
{
	struct FName*                                      LocationID;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.MapLib.SpawnTemporaryLocation
struct UMapLib_SpawnTemporaryLocation_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FLocationData*                              TemporaryLocation;                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	bool*                                              bDontSpawnIfHidden;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class ALocation*                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.MapLib.SpawnTemporaryEventLocationInFrontOfPlayer
struct UMapLib_SpawnTemporaryEventLocationInFrontOfPlayer_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class ALocation*                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.MapLib.SetCustomWaypoint
struct UMapLib_SetCustomWaypoint_Params
{
	struct FName*                                      LocationID;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function ES2.MapLib.RefreshMissionAndWaypointIndicators
struct UMapLib_RefreshMissionAndWaypointIndicators_Params
{
};

// Function ES2.MapLib.IsSurfaceLocation
struct UMapLib_IsSurfaceLocation_Params
{
	struct FName*                                      LocationID;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.MapLib.IsPlayerAtLocation
struct UMapLib_IsPlayerAtLocation_Params
{
	struct FName*                                      LocationID;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.MapLib.IsCurrentLocationDataValid
struct UMapLib_IsCurrentLocationDataValid_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.MapLib.InvalidateTemporaryLocation
struct UMapLib_InvalidateTemporaryLocation_Params
{
	struct FName*                                      LocationID;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.MapLib.HideTemporaryLocation
struct UMapLib_HideTemporaryLocation_Params
{
	struct FName*                                      LocationID;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.MapLib.GetTravelDistance
struct UMapLib_GetTravelDistance_Params
{
	struct FName*                                      LocationA;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FName*                                      LocationB;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.MapLib.GetSystemRegionSecurity
struct UMapLib_GetSystemRegionSecurity_Params
{
	TEnumAsByte<ESystemRegion>*                        SystemRegion;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.MapLib.GetSystemRegionOfLocation
struct UMapLib_GetSystemRegionOfLocation_Params
{
	struct FName*                                      LocationID;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	TEnumAsByte<ESystemRegion>                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.MapLib.GetSystemRegionLevel
struct UMapLib_GetSystemRegionLevel_Params
{
	TEnumAsByte<ESystemRegion>*                        SystemRegion;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.MapLib.GetSystemRegionAtPosition
struct UMapLib_GetSystemRegionAtPosition_Params
{
	struct FName*                                      SystemID;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector*                                    Position;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	TEnumAsByte<ESystemRegion>                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.MapLib.GetSystemData
struct UMapLib_GetSystemData_Params
{
	struct FName*                                      SystemID;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FSystemData                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ES2.MapLib.GetSystemActor
struct UMapLib_GetSystemActor_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      SystemID;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class ASystem*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.MapLib.GetSurfaceParent
struct UMapLib_GetSurfaceParent_Params
{
	struct FName*                                      LocationID;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FLocationData                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ES2.MapLib.GetSurfaceNeighbors
struct UMapLib_GetSurfaceNeighbors_Params
{
	struct FName*                                      LocationID;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	TArray<struct FLocationData>                       Neighbors_OUT;                                            // (Parm, OutParm, ZeroConstructor)
};

// Function ES2.MapLib.GetSurfaceLocations
struct UMapLib_GetSurfaceLocations_Params
{
	struct FName*                                      LocationID;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	TArray<struct FLocationData>                       SurfaceLocations_OUT;                                     // (Parm, OutParm, ZeroConstructor)
};

// Function ES2.MapLib.GetStationName
struct UMapLib_GetStationName_Params
{
	struct FName*                                      StationID;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ES2.MapLib.GetStationFaction
struct UMapLib_GetStationFaction_Params
{
	struct FName*                                      StationID;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	TEnumAsByte<EFactions>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.MapLib.GetSpaceObject
struct UMapLib_GetSpaceObject_Params
{
	struct FName*                                      ID;                                                       // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FLocationSpaceObject                        ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ES2.MapLib.GetShortestPath
struct UMapLib_GetShortestPath_Params
{
	struct FName*                                      StartLocation;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FName*                                      EndLocation;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	TArray<struct FName>                               Path_OUT;                                                 // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.MapLib.GetRegionCellSize
struct UMapLib_GetRegionCellSize_Params
{
	struct FName*                                      SystemID;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.MapLib.GetNumSystems
struct UMapLib_GetNumSystems_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.MapLib.GetNumRegionCellsPerRow
struct UMapLib_GetNumRegionCellsPerRow_Params
{
	struct FName*                                      SystemID;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.MapLib.GetLocationName
struct UMapLib_GetLocationName_Params
{
	struct FName*                                      LocationID;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ES2.MapLib.GetLocationIndicators
struct UMapLib_GetLocationIndicators_Params
{
	struct FName*                                      LocationID;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	TMap<TEnumAsByte<EIndicator>, bool>                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ES2.MapLib.GetLocationDataOfSystem
struct UMapLib_GetLocationDataOfSystem_Params
{
	struct FName*                                      SystemID;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	TArray<struct FLocationData>                       Locations_OUT;                                            // (Parm, OutParm, ZeroConstructor)
	bool*                                              bIncludeTemporaryLocations;                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.MapLib.GetLocationData
struct UMapLib_GetLocationData_Params
{
	struct FName*                                      LocationID;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FLocationData                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ES2.MapLib.GetIngameMissionIndicatorLocations
struct UMapLib_GetIngameMissionIndicatorLocations_Params
{
	struct FName*                                      MissionID;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FName*                                      PlayerLocationID;                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	TArray<struct FName>                               LocationIDs_OUT;                                          // (Parm, OutParm, ZeroConstructor)
};

// Function ES2.MapLib.GetDockableStationTemplatesAtLocation
struct UMapLib_GetDockableStationTemplatesAtLocation_Params
{
	struct FName*                                      LocationID;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	TArray<struct FDockableStationTemplate>            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ES2.MapLib.GetDockableStationTemplates
struct UMapLib_GetDockableStationTemplates_Params
{
	TEnumAsByte<EFactions>*                            Faction;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>*                              FilterSystems;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FDockableStationTemplate>            Stations_OUT;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function ES2.MapLib.GetCustomWaypoint
struct UMapLib_GetCustomWaypoint_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.MapLib.GetCurrentSystemRegionSecurity
struct UMapLib_GetCurrentSystemRegionSecurity_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.MapLib.GetCurrentSystemRegionLevel
struct UMapLib_GetCurrentSystemRegionLevel_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.MapLib.GetCurrentSystemRegion
struct UMapLib_GetCurrentSystemRegion_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESystemRegion>                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.MapLib.GetCurrentSystemActor
struct UMapLib_GetCurrentSystemActor_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class ASystem*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.MapLib.GetCurrentLocationLevel
struct UMapLib_GetCurrentLocationLevel_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.MapLib.GetCurrentLocationData
struct UMapLib_GetCurrentLocationData_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FLocationData                               ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)
};

// Function ES2.MapLib.GetClosestActorOfClass
struct UMapLib_GetClosestActorOfClass_Params
{
	class AActor**                                     OriginActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     ClassToSearchFor;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.MapLib.GetAdjacentSystems
struct UMapLib_GetAdjacentSystems_Params
{
	struct FName*                                      SystemID;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int*                                               SystemJumpDistance;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FSystemData>                         Systems_OUT;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function ES2.MapLib.GetAccessibleLocations
struct UMapLib_GetAccessibleLocations_Params
{
	struct FName*                                      LocationID;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool*                                              bIncludeJumpGateConnections;                              // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FLocationData>                       Locations_OUT;                                            // (Parm, OutParm, ZeroConstructor)
};

// Function ES2.MapLib.EnterInterceptionLocationAtPlayerPosition
struct UMapLib_EnterInterceptionLocationAtPlayerPosition_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class ALocation*                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.MapLib.CreateAndAddTemporaryLocationAtPosition
struct UMapLib_CreateAndAddTemporaryLocationAtPosition_Params
{
	struct FName*                                      SystemID;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector*                                    Position;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	TEnumAsByte<ELocationCategory>*                    LocationCategory;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bTemporaryEvent;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRandomStream*                              RandomStream;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FLocationData                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ES2.MapLib.CollectAndWriteSystemActorData
struct UMapLib_CollectAndWriteSystemActorData_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.MapLib.CollectAndWriteLocationActorData
struct UMapLib_CollectAndWriteLocationActorData_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.MapLib.ClearCustomWaypoint
struct UMapLib_ClearCustomWaypoint_Params
{
};

// Function ES2.MapLib.CheatSpawnTemporaryLocation
struct UMapLib_CheatSpawnTemporaryLocation_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Position;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class ALocation*                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.MathLib.RoundToNearestMultiple
struct UMathLib_RoundToNearestMultiple_Params
{
	int*                                               numToRound;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               multiple;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.MathLib.RandomUnitVectorInEllipticalConeInRadiansMinMax
struct UMathLib_RandomUnitVectorInEllipticalConeInRadiansMinMax_Params
{
	struct FVector*                                    ConeDir;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             MinYawInRadians;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             MaxYawInRadians;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             MinPitchInRadians;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             MaxPitchInRadians;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.MathLib.RandomUnitVectorInEllipticalConeInDegreesMinMax
struct UMathLib_RandomUnitVectorInEllipticalConeInDegreesMinMax_Params
{
	struct FVector*                                    ConeDir;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             MinYawInDegrees;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             MaxYawInDegrees;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             MinPitchInDegrees;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             MaxPitchInDegrees;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.MathLib.RandomPointInSphericalShellFromStream
struct UMathLib_RandomPointInSphericalShellFromStream_Params
{
	struct FRandomStream                               RandomStream;                                             // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	float*                                             InnerRadius;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             OuterRadius;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    SphereCenter;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.MathLib.RandomPointInSphericalShell
struct UMathLib_RandomPointInSphericalShell_Params
{
	float*                                             InnerRadius;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             OuterRadius;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    SphereCenter;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.MathLib.RandomPointInSphereFromStream
struct UMathLib_RandomPointInSphereFromStream_Params
{
	struct FRandomStream                               RandomStream;                                             // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	float*                                             Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    SphereCenter;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.MathLib.RandomPointInSphere
struct UMathLib_RandomPointInSphere_Params
{
	float*                                             Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    SphereCenter;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.MathLib.MetersToUnrealUnits
struct UMathLib_MetersToUnrealUnits_Params
{
	float*                                             ValueInMeter;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bTravelmModeScale;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.MathLib.InFloatRange
struct UMathLib_InFloatRange_Params
{
	struct FFloatRange*                                Range;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float*                                             Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              ForceInclusiveBounds;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.MathLib.GetSphereVolume
struct UMathLib_GetSphereVolume_Params
{
	float*                                             SphereRadius;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.MathLib.GetMaxRandomInt
struct UMathLib_GetMaxRandomInt_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.MathLib.GetLineSegmentBetween
struct UMathLib_GetLineSegmentBetween_Params
{
	class AActor**                                     ActorStart;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     ActorEnd;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.MathLib.Get3DNoise
struct UMathLib_Get3DNoise_Params
{
	float*                                             WaveLength;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Amplitude;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             GlobalTime;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             PhaseShift;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.MathLib.Get1DNoise
struct UMathLib_Get1DNoise_Params
{
	float*                                             WaveLength;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Amplitude;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             GlobalTime;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             PhaseShift;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.MathLib.CreateInstanceTransformsInSphere
struct UMathLib_CreateInstanceTransformsInSphere_Params
{
	TArray<struct FTransform>                          OutTransforms;                                            // (Parm, OutParm, ZeroConstructor)
	TArray<int>                                        OutSelectedMeshIndex;                                     // (Parm, OutParm, ZeroConstructor)
	TArray<float>*                                     MeshWeightsArray;                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FTransform*                                 SphereTransform;                                          // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	TArray<struct FVector>*                            ExclusionSphereOrigins;                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<float>*                                     ExclusionSphereRadii;                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<float>*                                     ExclusionSphereRadiiInnerFactor;                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FRandomStream                               RandomStream;                                             // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	float*                                             RadiusMeter;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             InnerRadiusFactor;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             SphereFalloffExp;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DensityPerCubicKilometer;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CapZFactorInner;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CapZFactorOuter;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CapZFalloffExp;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             ScaleMin;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             ScaleMax;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             ScaleDistributionExp;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.MissionTaskBase.WillFailIfPlayerLeavesLocation
struct AMissionTaskBase_WillFailIfPlayerLeavesLocation_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.MissionTaskBase.TriggerOrBindEventTimeExpired
struct AMissionTaskBase_TriggerOrBindEventTimeExpired_Params
{
	struct FScriptDelegate*                            Event;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function ES2.MissionTaskBase.TriggerOrBindEventTaskSucceeded
struct AMissionTaskBase_TriggerOrBindEventTaskSucceeded_Params
{
	struct FScriptDelegate*                            Event;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function ES2.MissionTaskBase.TriggerOrBindEventTaskFailed
struct AMissionTaskBase_TriggerOrBindEventTaskFailed_Params
{
	struct FScriptDelegate*                            Event;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function ES2.MissionTaskBase.TriggerOrBindEventTaskEnded
struct AMissionTaskBase_TriggerOrBindEventTaskEnded_Params
{
	struct FScriptDelegate*                            Event;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function ES2.MissionTaskBase.TriggerOrBindEventTaskActivated
struct AMissionTaskBase_TriggerOrBindEventTaskActivated_Params
{
	struct FScriptDelegate*                            Event;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function ES2.MissionTaskBase.SwitchState
struct AMissionTaskBase_SwitchState_Params
{
	TEnumAsByte<EMissionTaskState>*                    NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.MissionTaskBase.SpawnOrRestoreMissionPickupFromItem
struct AMissionTaskBase_SpawnOrRestoreMissionPickupFromItem_Params
{
	class UItem**                                      Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform*                                 SpawnTransform;                                           // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               WasRestored;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class APickupBase*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.MissionTaskBase.SpawnOrRestoreMissionPawns
struct AMissionTaskBase_SpawnOrRestoreMissionPawns_Params
{
	bool                                               bWasRestored;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     ClassToSpawn;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform*                                 SpawnTransform;                                           // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	int*                                               Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Level;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AESPawn*>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ES2.MissionTaskBase.SpawnOrRestoreMissionPawn
struct AMissionTaskBase_SpawnOrRestoreMissionPawn_Params
{
	bool                                               bWasRestored;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     ClassToSpawn;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform*                                 SpawnTransform;                                           // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	int*                                               Level;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class AESPawn*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.MissionTaskBase.SpawnOrRestoreMissionGroup
struct AMissionTaskBase_SpawnOrRestoreMissionGroup_Params
{
	bool                                               bWasRestored;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform*                                 SpawnTransform;                                           // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FName*                                      ID;                                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESpawnGroup>*                          GroupType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRandomStream                               RandomStream;                                             // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	int*                                               NPCLevel;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               NPCCountOverride;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               NPCCountSupportOverride;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             SpawnRadius;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AESPawn*>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ES2.MissionTaskBase.SpawnOrRestoreMissionActorsNEW
struct AMissionTaskBase_SpawnOrRestoreMissionActorsNEW_Params
{
	bool                                               bWasRestored;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<struct FSpawnAmount>*                       ClassesToSpawn;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FName*                                      ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform*                                 SpawnTransform;                                           // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	int*                                               Level;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ES2.MissionTaskBase.SpawnOrRestoreMissionActors
struct AMissionTaskBase_SpawnOrRestoreMissionActors_Params
{
	bool                                               bWasRestored;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     ClassToSpawn;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform*                                 SpawnTransform;                                           // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	int*                                               Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Level;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ES2.MissionTaskBase.SpawnOrRestoreMissionActor
struct AMissionTaskBase_SpawnOrRestoreMissionActor_Params
{
	bool                                               bWasRestored;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     ClassToSpawn;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform*                                 SpawnTransform;                                           // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	int*                                               Level;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.MissionTaskBase.SetStation
struct AMissionTaskBase_SetStation_Params
{
	struct FName*                                      NewStationID;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.MissionTaskBase.SetProgress
struct AMissionTaskBase_SetProgress_Params
{
	int*                                               Progress;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.MissionTaskBase.SetLocation
struct AMissionTaskBase_SetLocation_Params
{
	struct FName*                                      NewLocationID;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.MissionTaskBase.SetAttribute
struct AMissionTaskBase_SetAttribute_Params
{
	struct FName*                                      AttributeName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FESVariant*                                 AttributeValue;                                           // (Parm)
};

// Function ES2.MissionTaskBase.PlayerCantLeaveWhileActive
struct AMissionTaskBase_PlayerCantLeaveWhileActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.MissionTaskBase.OnTickWhileActive
struct AMissionTaskBase_OnTickWhileActive_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.MissionTaskBase.OnPlayerLeftTaskLocation
struct AMissionTaskBase_OnPlayerLeftTaskLocation_Params
{
	TEnumAsByte<EJumpMethod>*                          JumpMethod;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.MissionTaskBase.OnEnteredStage
struct AMissionTaskBase_OnEnteredStage_Params
{
	int*                                               NewStage;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.MissionTaskBase.OnAbandonedByPlayer
struct AMissionTaskBase_OnAbandonedByPlayer_Params
{
};

// Function ES2.MissionTaskBase.IsPlayerAtMissionTaskLocation
struct AMissionTaskBase_IsPlayerAtMissionTaskLocation_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.MissionTaskBase.IsMission
struct AMissionTaskBase_IsMission_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.MissionTaskBase.IsHidden
struct AMissionTaskBase_IsHidden_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.MissionTaskBase.HasEnded
struct AMissionTaskBase_HasEnded_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.MissionTaskBase.GetOwningMissionTitle
struct AMissionTaskBase_GetOwningMissionTitle_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ES2.MissionTaskBase.GetOwningMissionID
struct AMissionTaskBase_GetOwningMissionID_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.MissionTaskBase.GetOwningMissionFaction
struct AMissionTaskBase_GetOwningMissionFaction_Params
{
	TEnumAsByte<EFactions>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.MissionTaskBase.GetOwningMissionEnemyFaction
struct AMissionTaskBase_GetOwningMissionEnemyFaction_Params
{
	TEnumAsByte<EFactions>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.MissionTaskBase.GetOwningMissionDifficulty
struct AMissionTaskBase_GetOwningMissionDifficulty_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.MissionTaskBase.GetOwningMission
struct AMissionTaskBase_GetOwningMission_Params
{
	class AMissionTaskBase*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.MissionTaskBase.GetOwningJobNumber
struct AMissionTaskBase_GetOwningJobNumber_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.MissionTaskBase.GetObjectiveDescriptions
struct AMissionTaskBase_GetObjectiveDescriptions_Params
{
	struct FTaskSaveGameData*                          SavedTaskData;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
	TArray<struct FObjectiveDescription>               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ES2.MissionTaskBase.GetObjectiveDescription
struct AMissionTaskBase_GetObjectiveDescription_Params
{
	struct FTaskSaveGameData*                          SavedTaskData;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FObjectiveDescription                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ES2.MissionTaskBase.GetMissionIndicator
struct AMissionTaskBase_GetMissionIndicator_Params
{
	TEnumAsByte<EIndicator>                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.MissionTaskBase.GetChildren
struct AMissionTaskBase_GetChildren_Params
{
	TArray<class AActor*>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ES2.MissionTaskBase.ForceState
struct AMissionTaskBase_ForceState_Params
{
	TEnumAsByte<EMissionTaskState>*                    NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.MissionTaskBase.FindOrCreateAttribute
struct AMissionTaskBase_FindOrCreateAttribute_Params
{
	struct FName*                                      Key;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FESVariant*                                 InitValue;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               bWasNewlyCreated;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FESVariant                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ES2.MissionTaskBase.FindAttribute
struct AMissionTaskBase_FindAttribute_Params
{
	struct FName*                                      AttributeName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FESVariant                                  AttributeValue_OUT;                                       // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.MissionTaskBase.EnterStage
struct AMissionTaskBase_EnterStage_Params
{
	int*                                               Stage;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.MissionTaskBase.AddPawnsToMission
struct AMissionTaskBase_AddPawnsToMission_Params
{
	TArray<class AESPawn*>*                            Actors;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FName*                                      ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.MissionTaskBase.AddActorsToMission
struct AMissionTaskBase_AddActorsToMission_Params
{
	TArray<class AActor*>*                             Actors;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FName*                                      ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.MissionTaskBase.Abort
struct AMissionTaskBase_Abort_Params
{
};

// Function ES2.MissionBase.GetMissionLog
struct AMissionBase_GetMissionLog_Params
{
	struct FTaskSaveGameData*                          SavedTaskData;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ES2.MissionBase.GenerateRewards
struct AMissionBase_GenerateRewards_Params
{
	struct FRandomStream                               RandomStream;                                             // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	int*                                               DifficultyLevelIn;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               LocationDistance;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTaskSaveGameData*                          SavedTaskData;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
	TArray<struct FMissionReward>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ES2.MissionBase.GenerateAttributes
struct AMissionBase_GenerateAttributes_Params
{
	struct FRandomStream                               RandomStream;                                             // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	int*                                               DifficultyLevelIn;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             TravelDistance;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTaskSaveGameData*                          SavedTaskData;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
	TMap<struct FName, struct FESVariant>              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ES2.MissionLib.WillAnyMissionFailIfPlayerLeavesLocation
struct UMissionLib_WillAnyMissionFailIfPlayerLeavesLocation_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.MissionLib.TrackMission
struct UMissionLib_TrackMission_Params
{
	struct FName*                                      MissionID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.MissionLib.SpawnMissionAtLocation
struct UMissionLib_SpawnMissionAtLocation_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     MissionClass;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bOnlySpawnIfNotAlreadyInMissionLog;                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSpawnWithActiveState;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform*                                 SpawnTransform;                                           // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FName*                                      LocationID;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AMissionBase*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.MissionLib.SpawnMission
struct UMissionLib_SpawnMission_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     MissionClass;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bOnlySpawnIfNotAlreadyInMissionLog;                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSpawnWithActiveState;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform*                                 SpawnTransform;                                           // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AMissionBase*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.MissionLib.SpawnJob
struct UMissionLib_SpawnJob_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FTaskSaveGameData*                          JobData;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FTransform*                                 SpawnTransform;                                           // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AMissionBase*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.MissionLib.ShowActiveMissionObjectivesInHUD
struct UMissionLib_ShowActiveMissionObjectivesInHUD_Params
{
	class AMissionTaskBase**                           AnyTaskOfMission;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.MissionLib.RemoveTaskFromPlayerData
struct UMissionLib_RemoveTaskFromPlayerData_Params
{
	struct FName*                                      TaskID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bAbortedByPlayer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.MissionLib.RemoveJobOfferFromStation
struct UMissionLib_RemoveJobOfferFromStation_Params
{
	struct FTaskSaveGameData*                          JobData;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FName*                                      StationID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.MissionLib.GetMissionLog
struct UMissionLib_GetMissionLog_Params
{
	struct FName*                                      MissionID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ES2.MissionLib.GetMissionDefaultObject
struct UMissionLib_GetMissionDefaultObject_Params
{
	struct FName*                                      MissionID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AMissionBase*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.MissionLib.GetJobTypesOfFactionGroup
struct UMissionLib_GetJobTypesOfFactionGroup_Params
{
	TEnumAsByte<EFactionGroup>*                        FactionGroup;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<TEnumAsByte<EJobType>>                      ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ES2.MissionLib.GetGroupsOfFaction
struct UMissionLib_GetGroupsOfFaction_Params
{
	TEnumAsByte<EFactions>*                            Faction;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<TEnumAsByte<EFactionGroup>>                 ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ES2.MissionLib.GetFactionInfo
struct UMissionLib_GetFactionInfo_Params
{
	TEnumAsByte<EFactions>*                            Faction;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FFaction                                    ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function ES2.MissionLib.GetCurrentObjectivesForMissionLog
struct UMissionLib_GetCurrentObjectivesForMissionLog_Params
{
	struct FName*                                      TaskID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bActiveOnly;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bNonPermanentDisplayOnly;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FObjectiveDescription>               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ES2.MissionLib.GetAllMissionsInPlayerData
struct UMissionLib_GetAllMissionsInPlayerData_Params
{
	bool*                                              bActiveOnly;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMissionType>*                         MissionType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FTaskSaveGameData>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ES2.MissionLib.GetActiveTasksLocations
struct UMissionLib_GetActiveTasksLocations_Params
{
	struct FName*                                      MissionID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ES2.MissionLib.FindTaskInPlayerData
struct UMissionLib_FindTaskInPlayerData_Params
{
	struct FName*                                      TaskID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTaskSaveGameData                           SavedData;                                                // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.MissionLib.CreateJobOffers
struct UMissionLib_CreateJobOffers_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FRandomStream                               RandomStream;                                             // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FName*                                      LocationID;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      StationID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<TSoftObjectPtr<class UClass>>*              JobCandidates;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FTaskSaveGameData>*                  AlreadyExistingOffers;                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int*                                               NumOffersMin;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               NumOffersMax;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FTaskSaveGameData>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ES2.MissionLib.CantLeaveLocation
struct UMissionLib_CantLeaveLocation_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.ModifierLib.ToString
struct UModifierLib_ToString_Params
{
	struct FModifierHandle*                            ModifierHandle;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ES2.ModifierLib.SetModifierValueInAttributeAccess
struct UModifierLib_SetModifierValueInAttributeAccess_Params
{
	struct FAttributeAccess                            AttributeAccess;                                          // (Parm, OutParm, ReferenceParm)
	struct FModifierHandle*                            ModifierHandle;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
	float*                                             NewValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.ModifierLib.SetModifierValueForItemAttribute
struct UModifierLib_SetModifierValueForItemAttribute_Params
{
	class UItemAttribute**                             ItemAttribute;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FModifierHandle*                            ModifierHandle;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
	float*                                             NewValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.ModifierLib.SetModifierValue
struct UModifierLib_SetModifierValue_Params
{
	struct FBuffableFloat                              BuffableFloat;                                            // (Parm, OutParm, ReferenceParm)
	struct FModifierHandle*                            ModifierHandle;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
	float*                                             NewValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.ModifierLib.RemoveModifierRot
struct UModifierLib_RemoveModifierRot_Params
{
	struct FBuffableRotator                            BuffableRotator;                                          // (Parm, OutParm, ReferenceParm)
	struct FModifierHandle*                            ModifierHandle;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.ModifierLib.RemoveModifierFromAttributeAccess
struct UModifierLib_RemoveModifierFromAttributeAccess_Params
{
	struct FAttributeAccess                            AttributeAccess;                                          // (Parm, OutParm, ReferenceParm)
	struct FModifierHandle*                            ModifierHandle;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.ModifierLib.RemoveModifierFromAttribute
struct UModifierLib_RemoveModifierFromAttribute_Params
{
	class UItemAttribute**                             ItemAttribute;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FModifierHandle*                            ModifierHandle;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.ModifierLib.RemoveModifier
struct UModifierLib_RemoveModifier_Params
{
	struct FBuffableFloat                              BuffableFloat;                                            // (Parm, OutParm, ReferenceParm)
	struct FModifierHandle*                            ModifierHandle;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.ModifierLib.GetModifierValue
struct UModifierLib_GetModifierValue_Params
{
	struct FBuffableFloat                              BuffableFloat;                                            // (Parm, OutParm, ReferenceParm)
	struct FModifierHandle*                            ModifierHandle;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.ModifierLib.GetBuffableRotatorValue
struct UModifierLib_GetBuffableRotatorValue_Params
{
	struct FBuffableRotator*                           BuffableRotator;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.ModifierLib.GetBuffableFloatValue
struct UModifierLib_GetBuffableFloatValue_Params
{
	struct FBuffableFloat*                             BuffableFloat;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.ModifierLib.AddModifierToAttributeAccess
struct UModifierLib_AddModifierToAttributeAccess_Params
{
	struct FAttributeAccess                            AttributeAccess;                                          // (Parm, OutParm, ReferenceParm)
	struct FModifier*                                  Mod;                                                      // (Parm)
	struct FModifierHandle                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ES2.ModifierLib.AddModifierToAttribute
struct UModifierLib_AddModifierToAttribute_Params
{
	class UItemAttribute**                             ItemAttribute;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FModifier*                                  Mod;                                                      // (Parm)
	struct FModifierHandle                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ES2.ModifierLib.AddModifierRot
struct UModifierLib_AddModifierRot_Params
{
	struct FBuffableRotator                            BuffableRotator;                                          // (Parm, OutParm, ReferenceParm)
	struct FModifier*                                  Mod;                                                      // (Parm)
	struct FModifierHandle                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ES2.ModifierLib.AddModifier
struct UModifierLib_AddModifier_Params
{
	struct FBuffableFloat                              BuffableFloat;                                            // (Parm, OutParm, ReferenceParm)
	struct FModifier*                                  Mod;                                                      // (Parm)
	struct FModifierHandle                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ES2.ShipMovementComponent.StopBoosting
struct UShipMovementComponent_StopBoosting_Params
{
};

// Function ES2.ShipMovementComponent.StartBoosting
struct UShipMovementComponent_StartBoosting_Params
{
};

// Function ES2.ShipMovementComponent.ResetBanking
struct UShipMovementComponent_ResetBanking_Params
{
};

// Function ES2.ShipMovementComponent.RemoveSpeedModifier
struct UShipMovementComponent_RemoveSpeedModifier_Params
{
	struct FModifierHandle*                            ModifierHandle;                                           // (Parm)
};

// Function ES2.ShipMovementComponent.RemoveAccelerationModifier
struct UShipMovementComponent_RemoveAccelerationModifier_Params
{
	struct FModifierHandle*                            ModifierHandle;                                           // (Parm)
};

// Function ES2.ShipMovementComponent.MeasureVelocityWithoutInput
struct UShipMovementComponent_MeasureVelocityWithoutInput_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.ShipMovementComponent.GetVelocityAtPoint
struct UShipMovementComponent_GetVelocityAtPoint_Params
{
	struct FVector*                                    PointWorld;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.ShipMovementComponent.GetTargetVelocityFromInput
struct UShipMovementComponent_GetTargetVelocityFromInput_Params
{
	struct FVector*                                    InputVectorLocal;                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.ShipMovementComponent.GetStoppingDistance
struct UShipMovementComponent_GetStoppingDistance_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.ShipMovementComponent.GetPendingInputRotator
struct UShipMovementComponent_GetPendingInputRotator_Params
{
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.ShipMovementComponent.GetMaxStrafeSpeedWithoutBoost
struct UShipMovementComponent_GetMaxStrafeSpeedWithoutBoost_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.ShipMovementComponent.GetMaxStoppingDistance
struct UShipMovementComponent_GetMaxStoppingDistance_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.ShipMovementComponent.GetMaxForwardSpeedWithoutBoost
struct UShipMovementComponent_GetMaxForwardSpeedWithoutBoost_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.ShipMovementComponent.GetLastPendingInputRotator
struct UShipMovementComponent_GetLastPendingInputRotator_Params
{
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.ShipMovementComponent.GetCurrentInputDelta
struct UShipMovementComponent_GetCurrentInputDelta_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.ShipMovementComponent.GetCurrentBoostDurationPercentage
struct UShipMovementComponent_GetCurrentBoostDurationPercentage_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.ShipMovementComponent.EnableRecharge
struct UShipMovementComponent_EnableRecharge_Params
{
};

// Function ES2.ShipMovementComponent.ConsumeInputRotator
struct UShipMovementComponent_ConsumeInputRotator_Params
{
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.ShipMovementComponent.AddYawInput
struct UShipMovementComponent_AddYawInput_Params
{
	float*                                             Val;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bForce;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.ShipMovementComponent.AddSpeedModifier
struct UShipMovementComponent_AddSpeedModifier_Params
{
	struct FModifier*                                  Modifier;                                                 // (Parm)
	struct FModifierHandle                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ES2.ShipMovementComponent.AddRollInput
struct UShipMovementComponent_AddRollInput_Params
{
	float*                                             Val;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bForce;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.ShipMovementComponent.AddRadialForce
struct UShipMovementComponent_AddRadialForce_Params
{
	struct FVector*                                    Origin;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float*                                             Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Strength;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ERadialImpulseFalloff>*                Falloff;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.ShipMovementComponent.AddRadialAcceleration
struct UShipMovementComponent_AddRadialAcceleration_Params
{
	struct FVector*                                    Origin;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float*                                             Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Strength;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ERadialImpulseFalloff>*                Falloff;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.ShipMovementComponent.AddPitchInput
struct UShipMovementComponent_AddPitchInput_Params
{
	float*                                             Val;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bForce;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.ShipMovementComponent.AddImpulse
struct UShipMovementComponent_AddImpulse_Params
{
	struct FVector*                                    Impulse;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool*                                              bVelocityChange;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.ShipMovementComponent.AddForceAtLocationLocal
struct UShipMovementComponent_AddForceAtLocationLocal_Params
{
	struct FVector*                                    ForceLocal;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector*                                    LocationLocal;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function ES2.ShipMovementComponent.AddForceAtLocation
struct UShipMovementComponent_AddForceAtLocation_Params
{
	struct FVector*                                    Force;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector*                                    LocationWorld;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function ES2.ShipMovementComponent.AddForce
struct UShipMovementComponent_AddForce_Params
{
	struct FVector*                                    Force;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool*                                              bAccelChange;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.ShipMovementComponent.AddAngularImpulseRadians
struct UShipMovementComponent_AddAngularImpulseRadians_Params
{
	struct FVector*                                    AngularImpulseRadWorld;                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool*                                              bVelocityChange;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.ShipMovementComponent.AddAngularImpulseDegree
struct UShipMovementComponent_AddAngularImpulseDegree_Params
{
	struct FVector*                                    AngularImpulseDegWorld;                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool*                                              bVelocityChange;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.ShipMovementComponent.AddAngularForceRadians
struct UShipMovementComponent_AddAngularForceRadians_Params
{
	struct FVector*                                    AngularForceRadWorld;                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function ES2.ShipMovementComponent.AddAngularForceDegreeLocal
struct UShipMovementComponent_AddAngularForceDegreeLocal_Params
{
	struct FVector*                                    AngularForceDegLocal;                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function ES2.ShipMovementComponent.AddAngularForceDegree
struct UShipMovementComponent_AddAngularForceDegree_Params
{
	struct FVector*                                    AngularForceDegWorld;                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function ES2.ShipMovementComponent.AddAccelerationModifier
struct UShipMovementComponent_AddAccelerationModifier_Params
{
	struct FModifier*                                  Modifier;                                                 // (Parm)
	bool*                                              AffectOnlyForwardAcceleration;                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FModifierHandle                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ES2.MovementRootComponent.RebuildCollision
struct UMovementRootComponent_RebuildCollision_Params
{
};

// Function ES2.NavNode.UpdateConnectionArrows
struct ANavNode_UpdateConnectionArrows_Params
{
};

// Function ES2.NavNode.UpdateAutoConnections
struct ANavNode_UpdateAutoConnections_Params
{
	bool*                                              AlsoUpdateNeighbors;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.PhysicsScale.UUnitsToMeters
struct UPhysicsScale_UUnitsToMeters_Params
{
	float*                                             UnrealUnits;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bTravelModeScale;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.PhysicsScale.UUnitsToLightseconds
struct UPhysicsScale_UUnitsToLightseconds_Params
{
	float*                                             UnrealUnits;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bTravelModeScale;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.PhysicsScale.UUnitsToKilometers
struct UPhysicsScale_UUnitsToKilometers_Params
{
	float*                                             UnrealUnits;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bTravelModeScale;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.PhysicsScale.UUnitsToCentimeters
struct UPhysicsScale_UUnitsToCentimeters_Params
{
	float*                                             UnrealUnits;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bTravelModeScale;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.PhysicsScale.UUnitspsToKmh
struct UPhysicsScale_UUnitspsToKmh_Params
{
	float*                                             UnrealUnitsPerSecond;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.PhysicsScale.UUnitsPerMeter
struct UPhysicsScale_UUnitsPerMeter_Params
{
	bool*                                              bTravelModeScale;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.PhysicsScale.MpsToKmh
struct UPhysicsScale_MpsToKmh_Params
{
	float*                                             MetersPerSecond;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.PhysicsScale.MetersToUUnits
struct UPhysicsScale_MetersToUUnits_Params
{
	float*                                             Meters;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bTravelModeScale;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.PhysicsScale.LocationsOnMapUnitsToSystemUnits
struct UPhysicsScale_LocationsOnMapUnitsToSystemUnits_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.PhysicsScale.LightsecondsToUUnits
struct UPhysicsScale_LightsecondsToUUnits_Params
{
	float*                                             Lightseconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bTravelModeScale;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.PhysicsScale.KmhToUUnitsps
struct UPhysicsScale_KmhToUUnitsps_Params
{
	float*                                             KilometersPerHour;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.PhysicsScale.KmhToMps
struct UPhysicsScale_KmhToMps_Params
{
	float*                                             KilometersPerHour;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.PhysicsScale.KilometersToUUnits
struct UPhysicsScale_KilometersToUUnits_Params
{
	float*                                             Kilometers;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bTravelModeScale;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.PhysicsScale.CentimetersToUUnits
struct UPhysicsScale_CentimetersToUUnits_Params
{
	float*                                             Centimeters;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bTravelModeScale;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.PickupBase.UpdatePullRangeFromTractorBeam
struct APickupBase_UpdatePullRangeFromTractorBeam_Params
{
};

// Function ES2.PickupBase.RefreshHUDInfo
struct APickupBase_RefreshHUDInfo_Params
{
};

// Function ES2.PickupBase.RecreatePickupsAfterGroupPull
struct APickupBase_RecreatePickupsAfterGroupPull_Params
{
};

// Function ES2.PickupBase.PlayCollectSound
struct APickupBase_PlayCollectSound_Params
{
	class AActor**                                     CollectingActor;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bWithoutUserFeedback;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               AmountCollected;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.PickupBase.OnCollect
struct APickupBase_OnCollect_Params
{
	class AActor**                                     CollectingActor;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bWithoutUserFeedback;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.PickupBase.IsInTractorBeamRange
struct APickupBase_IsInTractorBeamRange_Params
{
	class AActor**                                     ActorWithTractorBeam;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.PickupBase.InteractPullItem
struct APickupBase_InteractPullItem_Params
{
	class UInteractComponent**                         InteractComponent;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     InteractActor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.PickupBase.InteractPullAllItems
struct APickupBase_InteractPullAllItems_Params
{
	class UInteractComponent**                         InteractComponent;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     InteractActor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.PickupBase.InteractCollect
struct APickupBase_InteractCollect_Params
{
	class UInteractComponent**                         InteractComponent;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     InteractActor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.PickupBase.GetRarity
struct APickupBase_GetRarity_Params
{
	TEnumAsByte<EItemRarity>                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.PickupBase.GetPickupName
struct APickupBase_GetPickupName_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ES2.PickupBase.GetPickupHUDInfo
struct APickupBase_GetPickupHUDInfo_Params
{
	TArray<struct FPickupHUDInfo>                      HUDInfoOut;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function ES2.PickupBase.GetItem
struct APickupBase_GetItem_Params
{
	class UItem*                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.PickupBase.GetAmount
struct APickupBase_GetAmount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.POIBase.OnLevelShown
struct APOIBase_OnLevelShown_Params
{
};

// Function ES2.POIBase.OnLevelLoadedWriteSeedInLevelData
struct APOIBase_OnLevelLoadedWriteSeedInLevelData_Params
{
};

// Function ES2.PoolableActor.SetPoolAndDeactivate
struct UPoolableActor_SetPoolAndDeactivate_Params
{
	class UActorPool**                                 Pool;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.PoolableActor.OnBecomeInactive
struct UPoolableActor_OnBecomeInactive_Params
{
};

// Function ES2.PoolableActor.OnBecomeActive
struct UPoolableActor_OnBecomeActive_Params
{
};

// Function ES2.PortableComponent.SetEnabled
struct UPortableComponent_SetEnabled_Params
{
	bool*                                              bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.PortableComponent.SetAllowFlinging
struct UPortableComponent_SetAllowFlinging_Params
{
	bool*                                              bAllow;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.PortableComponent.InteractHold_Internal
struct UPortableComponent_InteractHold_Internal_Params
{
	class UInteractComponent**                         InteractComponent;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     InteractActor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.PortableComponent.Interact_Internal
struct UPortableComponent_Interact_Internal_Params
{
	class UInteractComponent**                         InteractComponent;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     InteractActor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.PortableComponent.Interact
struct UPortableComponent_Interact_Params
{
	class UInteractComponent**                         InteractComponent;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     InteractActor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bFling;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.PortableComponent.Detach
struct UPortableComponent_Detach_Params
{
	bool*                                              bFling;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bKeepMomentum;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSetUnusable;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.ProjectileBase.SetTargetActor
struct AProjectileBase_SetTargetActor_Params
{
	class AActor**                                     Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.ProjectileBase.OverrideHoming
struct AProjectileBase_OverrideHoming_Params
{
	bool*                                              HomingEnabled;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.ProjectileBase.OnSpawnImpact
struct AProjectileBase_OnSpawnImpact_Params
{
	struct FTransform*                                 SpawnTransform;                                           // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FHitResult*                                 HitInfo;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	EWeaponImpact*                                     ImpactType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bCriticalHit;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    ShotDirection;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class AActor**                                     InstigatorActor;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.ProjectileBase.OnProjectileDestroyed
struct AProjectileBase_OnProjectileDestroyed_Params
{
	bool*                                              bLifeTimeExpired;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.ProjectileBase.OnMissileMissed
struct AProjectileBase_OnMissileMissed_Params
{
};

// Function ES2.ProjectileBase.OnImpact
struct AProjectileBase_OnImpact_Params
{
	struct FHitResult*                                 HitResult;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function ES2.ProjectileBase.ManualImpact
struct AProjectileBase_ManualImpact_Params
{
	struct FVector*                                    HitPoint;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector*                                    HitNormal;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class AActor**                                     HitActor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        HitComponent;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ES2.ProjectileBase.IsProjectileDestroyed
struct AProjectileBase_IsProjectileDestroyed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.ProjectileBase.IsPooled
struct AProjectileBase_IsPooled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.ProjectileBase.GetWeaponSeed
struct AProjectileBase_GetWeaponSeed_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.ProjectileBase.GetWeaponItem
struct AProjectileBase_GetWeaponItem_Params
{
	class UItem*                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.ProjectileBase.GetTargetActor
struct AProjectileBase_GetTargetActor_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.RailTurretMovementComponent.SnapTurretOntoSpline
struct URailTurretMovementComponent_SnapTurretOntoSpline_Params
{
	float*                                             DistanceThreshold;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.RailTurretMovementComponent.AddTorqueImpulse
struct URailTurretMovementComponent_AddTorqueImpulse_Params
{
	struct FVector*                                    TorqueImpulse;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function ES2.RailTurretMovementComponent.AddTorqueForce
struct URailTurretMovementComponent_AddTorqueForce_Params
{
	struct FVector*                                    TurretMovement;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function ES2.RailTurretMovementComponent.AddImpulse
struct URailTurretMovementComponent_AddImpulse_Params
{
	struct FVector*                                    Impulse;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool*                                              bVelocityChange;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.RailTurretMovementComponent.AddForce
struct URailTurretMovementComponent_AddForce_Params
{
	struct FVector*                                    Force;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool*                                              bAccelChange;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.SavableInterface.SaveState
struct USavableInterface_SaveState_Params
{
	TMap<struct FName, struct FGenericSaveDataBuffer>  GenericSaveDataMap;                                       // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.SavableInterface.RestoreState
struct USavableInterface_RestoreState_Params
{
	TMap<struct FName, struct FGenericSaveDataBuffer>* GenericSaveDataMap;                                       // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.SavableInterface.OffsiteSimulate
struct USavableInterface_OffsiteSimulate_Params
{
	float*                                             TimePassed;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.SensorComponent.GetSensorRangeForType
struct USensorComponent_GetSensorRangeForType_Params
{
	TEnumAsByte<ERegisterIds>*                         RegisteredType;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsTrurret;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.SequenceBase.TogglePause
struct ASequenceBase_TogglePause_Params
{
	bool*                                              bIsPaused;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.SequenceBase.StopSmoothCameraShake
struct ASequenceBase_StopSmoothCameraShake_Params
{
};

// Function ES2.SequenceBase.Started
struct ASequenceBase_Started_Params
{
};

// Function ES2.SequenceBase.SpawnSequence
struct ASequenceBase_SpawnSequence_Params
{
	class UClass**                                     SequenceBP;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>*                             ActorsToBind;                                             // (Parm, ZeroConstructor)
	TMap<struct FMovieSceneObjectBindingID, class AActor*>* ManuallyBoundActors;                                      // (Parm, ZeroConstructor)
	class ASequenceBase*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.SequenceBase.SkipDialogLine
struct ASequenceBase_SkipDialogLine_Params
{
};

// Function ES2.SequenceBase.SetPlayerPawnBinding
struct ASequenceBase_SetPlayerPawnBinding_Params
{
	struct FMovieSceneObjectBindingID*                 Binding;                                                  // (Parm)
};

// Function ES2.SequenceBase.SetPlayerLookAtBinding
struct ASequenceBase_SetPlayerLookAtBinding_Params
{
	struct FMovieSceneObjectBindingID*                 Binding;                                                  // (Parm)
};

// Function ES2.SequenceBase.SetBlendToTargetBinding
struct ASequenceBase_SetBlendToTargetBinding_Params
{
	struct FMovieSceneObjectBindingID*                 Binding;                                                  // (Parm)
};

// Function ES2.SequenceBase.ResumeSequenceByID
struct ASequenceBase_ResumeSequenceByID_Params
{
	struct FName*                                      InSequenceID;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.SequenceBase.ResumeSequence
struct ASequenceBase_ResumeSequence_Params
{
};

// Function ES2.SequenceBase.ResetGenericSequenceChanges
struct ASequenceBase_ResetGenericSequenceChanges_Params
{
};

// Function ES2.SequenceBase.ResetCameraToPlayer
struct ASequenceBase_ResetCameraToPlayer_Params
{
};

// Function ES2.SequenceBase.ResetBindings
struct ASequenceBase_ResetBindings_Params
{
};

// Function ES2.SequenceBase.PostBeginPlay
struct ASequenceBase_PostBeginPlay_Params
{
	class ALevelSequenceActor**                        InLevelSequenceActor;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.SequenceBase.PlaySmoothCameraShake
struct ASequenceBase_PlaySmoothCameraShake_Params
{
};

// Function ES2.SequenceBase.PauseSequence
struct ASequenceBase_PauseSequence_Params
{
};

// Function ES2.SequenceBase.Finished
struct ASequenceBase_Finished_Params
{
};

// Function ES2.SequenceBase.DockingStarted
struct ASequenceBase_DockingStarted_Params
{
};

// Function ES2.SequenceBase.Cancel
struct ASequenceBase_Cancel_Params
{
};

// Function ES2.SequenceManager.TranslateActorToTransform
struct USequenceManager_TranslateActorToTransform_Params
{
	class AActor**                                     ActorToRail;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform*                                 TransformToTranslate;                                     // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class UCurveFloat**                                Curve;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	EEngineOpacityControlledBy*                        EngineOpacityControlledBy;                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UCurveFloat**                                EngineOpacityCurve;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ELerpInterpolationMode>*               LerpMode;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               PointIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UTranslateActorToTransformComponent*         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.SequenceManager.Started
struct USequenceManager_Started_Params
{
};

// Function ES2.SequenceManager.IsSkippableSequenceActive
struct USequenceManager_IsSkippableSequenceActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.SequenceManager.GetSplineComponent
struct USequenceManager_GetSplineComponent_Params
{
	class ACameraRig_Rail**                            CameraRigRail;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class USplineComponent*                            ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function ES2.SequenceManager.GetCurrentLevelSequenceActor
struct USequenceManager_GetCurrentLevelSequenceActor_Params
{
	class ALevelSequenceActor*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.SequenceManager.Finished
struct USequenceManager_Finished_Params
{
};

// Function ES2.SequenceManager.CreateSpline
struct USequenceManager_CreateSpline_Params
{
	class AActor**                                     AttachToThis;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.SerializationLib.WriteTransformArray
struct USerializationLib_WriteTransformArray_Params
{
	TMap<struct FName, struct FGenericSaveDataBuffer>  GenericSaveDataMap;                                       // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FName*                                      BufferKey;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FTransform>                          Transform;                                                // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool*                                              bAppend;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.SerializationLib.WriteFloat
struct USerializationLib_WriteFloat_Params
{
	TMap<struct FName, struct FGenericSaveDataBuffer>  GenericSaveDataMap;                                       // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FName*                                      BufferKey;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Float;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bAppend;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.SerializationLib.WriteESVariantMap
struct USerializationLib_WriteESVariantMap_Params
{
	TMap<struct FName, struct FGenericSaveDataBuffer>  GenericSaveDataMap;                                       // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FName*                                      BufferKey;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TMap<struct FName, struct FESVariant>              Map;                                                      // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool*                                              bAppend;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.SerializationLib.ReadTransformArray
struct USerializationLib_ReadTransformArray_Params
{
	TMap<struct FName, struct FGenericSaveDataBuffer>* GenericSaveDataMap;                                       // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FName*                                      BufferKey;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FTransform>                          DataOut;                                                  // (Parm, OutParm, ZeroConstructor)
	int                                                OffsetOut;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int*                                               OffsetIn;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.SerializationLib.ReadFloat
struct USerializationLib_ReadFloat_Params
{
	TMap<struct FName, struct FGenericSaveDataBuffer>* GenericSaveDataMap;                                       // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FName*                                      BufferKey;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DataOut;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                OffsetOut;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int*                                               OffsetIn;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.SerializationLib.ReadESVariantMap
struct USerializationLib_ReadESVariantMap_Params
{
	TMap<struct FName, struct FGenericSaveDataBuffer>* GenericSaveDataMap;                                       // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FName*                                      BufferKey;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TMap<struct FName, struct FESVariant>              DataOut;                                                  // (Parm, OutParm, ZeroConstructor)
	int                                                OffsetOut;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int*                                               OffsetIn;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.ShieldComponent.TakeDamage
struct UShieldComponent_TakeDamage_Params
{
	float*                                             DamageAmount;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsCritical;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent*                               DamageEvent;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FHitResult*                                 HitResult;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              DamageAbsorbed;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              DamageRemaining;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.ShieldComponent.ShutDown
struct UShieldComponent_ShutDown_Params
{
	bool*                                              permanent;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.ShieldComponent.IsDisrupted
struct UShieldComponent_IsDisrupted_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.ShieldComponent.GetNeedsRecharge
struct UShieldComponent_GetNeedsRecharge_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.ShieldComponent.Disrupt
struct UShieldComponent_Disrupt_Params
{
	float*                                             Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.TestLib.FindPath
struct UTestLib_FindPath_Params
{
	class ANavNode**                                   From;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class ANavNode**                                   To;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class ANavNode*>                            Result;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function ES2.TranslateActorToTransformComponent.TogglePause
struct UTranslateActorToTransformComponent_TogglePause_Params
{
	bool*                                              IsPaused;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.TranslateActorToTransformComponent.TimelineFinishedCallback
struct UTranslateActorToTransformComponent_TimelineFinishedCallback_Params
{
};

// Function ES2.TranslateActorToTransformComponent.TimelineEngineOpacityCallback
struct UTranslateActorToTransformComponent_TimelineEngineOpacityCallback_Params
{
	float*                                             CurveValue;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.TranslateActorToTransformComponent.TimelineCallback
struct UTranslateActorToTransformComponent_TimelineCallback_Params
{
	float*                                             Val;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.UiLib.UpdateSlateNavigation
struct UUiLib_UpdateSlateNavigation_Params
{
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.UiLib.SetFocusWidget
struct UUiLib_SetFocusWidget_Params
{
	class UWidget**                                    Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ES2.UiLib.RescueCurrentFocus
struct UUiLib_RescueCurrentFocus_Params
{
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.UiLib.PushWidget
struct UUiLib_PushWidget_Params
{
	class UUserWidget**                                Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	EWidgetStackType*                                  Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	EWidgetPauseMode*                                  PauseMode;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.UiLib.PopWidget
struct UUiLib_PopWidget_Params
{
	class UWidget**                                    Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ES2.UiLib.GetZOrderOfLayer
struct UUiLib_GetZOrderOfLayer_Params
{
	EWidgetStackType*                                  StackType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.UiLib.GetRichTextByRarity
struct UUiLib_GetRichTextByRarity_Params
{
	struct FText*                                      Text;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	TEnumAsByte<EItemRarity>*                          Rarity;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ES2.UiLib.GetColoredText
struct UUiLib_GetColoredText_Params
{
	struct FText*                                      Text;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FLinearColor*                               LinearColor;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ES2.UiLib.ConvertToShortKeyText
struct UUiLib_ConvertToShortKeyText_Params
{
	struct FText*                                      Text;                                                     // (Parm)
	int*                                               MaxBlanks;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ES2.UiLib.ClearWidgetStacks
struct UUiLib_ClearWidgetStacks_Params
{
};

// Function ES2.UserFunctionsLib.StartNewGame
struct UUserFunctionsLib_StartNewGame_Params
{
	int*                                               UserIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.UserFunctionsLib.SaveGame
struct UUserFunctionsLib_SaveGame_Params
{
	bool*                                              bIsAutoSave;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class FString*                                     ReplacePreviewSaveFileName;                               // (Parm, ZeroConstructor)
	int*                                               UserIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.UserFunctionsLib.LoadGame
struct UUserFunctionsLib_LoadGame_Params
{
	class FString*                                     SaveGameName;                                             // (Parm, ZeroConstructor)
	int*                                               UserIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.UserFunctionsLib.GetSaveGamePreviews
struct UUserFunctionsLib_GetSaveGamePreviews_Params
{
	TArray<class USaveGamePreview*>                    SaveGamePreviews;                                         // (Parm, OutParm, ZeroConstructor)
	bool*                                              SortByDate;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bAutoSavesOnly;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bExcludeAutoSaves;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               UserIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.UserFunctionsLib.GetESGameUserSettings
struct UUserFunctionsLib_GetESGameUserSettings_Params
{
	class UESGameUserSettings*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.UserFunctionsLib.AddBindingByName
struct UUserFunctionsLib_AddBindingByName_Params
{
	class ALevelSequenceActor**                        Target;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class ULevelSequence**                             InSequence;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class FString*                                     Name;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class AActor**                                     Actor;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.WantedLevelManager.SpawnGroupByThreat
struct AWantedLevelManager_SpawnGroupByThreat_Params
{
	TEnumAsByte<ESpawnGroup>*                          SpawnGroupType;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.WantedLevelManager.OnNeutralsTurnedHostile
struct AWantedLevelManager_OnNeutralsTurnedHostile_Params
{
};

// Function ES2.WantedLevelManager.OnHealthDepleted
struct AWantedLevelManager_OnHealthDepleted_Params
{
	class AActor**                                     Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                DamageInstigator;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DamageAmount;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.WeaponBase.WeaponTrace
struct AWeaponBase_WeaponTrace_Params
{
	struct FVector*                                    TraceFrom;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector*                                    TraceTo;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class AActor**                                     InstigatorActor;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AWeaponBase**                                Weapon;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function ES2.WeaponBase.RequiresAmmo
struct AWeaponBase_RequiresAmmo_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.WeaponBase.OnStopFire
struct AWeaponBase_OnStopFire_Params
{
};

// Function ES2.WeaponBase.OnStartFire
struct AWeaponBase_OnStartFire_Params
{
	struct FVector*                                    StartPosition;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    EndPosition;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.WeaponBase.OnSpawnImpact
struct AWeaponBase_OnSpawnImpact_Params
{
	struct FTransform*                                 SpawnTransform;                                           // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FHitResult*                                 HitInfo;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	EWeaponImpact*                                     ImpactType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bCriticalHit;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    ShotDirection;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class AActor**                                     InstigatorActor;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.WeaponBase.OnProjectileFired
struct AWeaponBase_OnProjectileFired_Params
{
	class AProjectileBase**                            Projectile;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.WeaponBase.OnBurstStarted
struct AWeaponBase_OnBurstStarted_Params
{
};

// Function ES2.WeaponBase.OnBurstEnded
struct AWeaponBase_OnBurstEnded_Params
{
};

// Function ES2.WeaponBase.IsUsingProjectilePool
struct AWeaponBase_IsUsingProjectilePool_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.WeaponBase.IsInstantHitWeapon
struct AWeaponBase_IsInstantHitWeapon_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.WeaponBase.IsConstantBeamWeapon
struct AWeaponBase_IsConstantBeamWeapon_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.WeaponBase.IsChargeWeapon
struct AWeaponBase_IsChargeWeapon_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.WeaponBase.GetWeaponSeed
struct AWeaponBase_GetWeaponSeed_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.WeaponBase.GetWeaponRange
struct AWeaponBase_GetWeaponRange_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.WeaponBase.GetWeaponItem
struct AWeaponBase_GetWeaponItem_Params
{
	class UItem*                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.WeaponBase.GetShieldDPS
struct AWeaponBase_GetShieldDPS_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.WeaponBase.GetRampUpRatio
struct AWeaponBase_GetRampUpRatio_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.WeaponBase.GetOwningActor
struct AWeaponBase_GetOwningActor_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.WeaponBase.GetMuzzleLocation
struct AWeaponBase_GetMuzzleLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.WeaponBase.GetHullDPS
struct AWeaponBase_GetHullDPS_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.WeaponBase.GetCurrentAmmo
struct AWeaponBase_GetCurrentAmmo_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.WeaponBase.GetChargeRatio
struct AWeaponBase_GetChargeRatio_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.WeaponBase.Firing
struct AWeaponBase_Firing_Params
{
	struct FVector*                                    StartPosition;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    EndPosition;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     HitActor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.WeaponComponent.WillTargetBeHit
struct UWeaponComponent_WillTargetBeHit_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.WeaponComponent.StopFire
struct UWeaponComponent_StopFire_Params
{
};

// Function ES2.WeaponComponent.StartFire
struct UWeaponComponent_StartFire_Params
{
};

// Function ES2.WeaponComponent.SetWeaponsHiddenInGame
struct UWeaponComponent_SetWeaponsHiddenInGame_Params
{
	bool*                                              bNewHidden;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bApplyToEquippedWeaponsOnly;                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.WeaponComponent.SetNewWeaponSlots
struct UWeaponComponent_SetNewWeaponSlots_Params
{
	TArray<struct FWeaponInfo>*                        NewWeaponSlots;                                           // (Parm, ZeroConstructor)
};

// Function ES2.WeaponComponent.SetLockedTarget
struct UWeaponComponent_SetLockedTarget_Params
{
	class AActor**                                     TargetToLock;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.WeaponComponent.SetAllowFire
struct UWeaponComponent_SetAllowFire_Params
{
	bool*                                              bAllow;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.WeaponComponent.SelectWeapon
struct UWeaponComponent_SelectWeapon_Params
{
	class UClass**                                     WeaponClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.WeaponComponent.SearchTargetToLock
struct UWeaponComponent_SearchTargetToLock_Params
{
	TEnumAsByte<ETargetSearchStrategy>*                Strategy;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    CameraLocation;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector*                                    CrosshairVector;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.WeaponComponent.RemoveWeaponFromSlot
struct UWeaponComponent_RemoveWeaponFromSlot_Params
{
	int*                                               SlotIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.WeaponComponent.PreviousWeapon
struct UWeaponComponent_PreviousWeapon_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.WeaponComponent.OnLockedTargetDied
struct UWeaponComponent_OnLockedTargetDied_Params
{
	class AActor**                                     DeadTarget;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                DamageInstigator;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DamageAmount;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.WeaponComponent.NextWeapon
struct UWeaponComponent_NextWeapon_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.WeaponComponent.IsAnyWeaponSpawned
struct UWeaponComponent_IsAnyWeaponSpawned_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.WeaponComponent.InstallNewWeapon
struct UWeaponComponent_InstallNewWeapon_Params
{
	struct FWeaponInfo*                                Weapon;                                                   // (Parm)
	TEnumAsByte<EEquipmentInstallResult>               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.WeaponComponent.HasRampUpTime
struct UWeaponComponent_HasRampUpTime_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.WeaponComponent.HasChargeTime
struct UWeaponComponent_HasChargeTime_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.WeaponComponent.GetRampUpRatio
struct UWeaponComponent_GetRampUpRatio_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.WeaponComponent.GetNumEmptySlots
struct UWeaponComponent_GetNumEmptySlots_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.WeaponComponent.GetLockedTargetLeadingReticulePosition
struct UWeaponComponent_GetLockedTargetLeadingReticulePosition_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.WeaponComponent.GetLockedTarget
struct UWeaponComponent_GetLockedTarget_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.WeaponComponent.GetFocusLocation
struct UWeaponComponent_GetFocusLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.WeaponComponent.GetFirstWeaponInstanceOfClass
struct UWeaponComponent_GetFirstWeaponInstanceOfClass_Params
{
	class UClass**                                     WeaponClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class AWeaponBase*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.WeaponComponent.GetFirstEquippedWeaponInstance
struct UWeaponComponent_GetFirstEquippedWeaponInstance_Params
{
	class AWeaponBase*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.WeaponComponent.GetEquippedWeaponIndex
struct UWeaponComponent_GetEquippedWeaponIndex_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.WeaponComponent.GetEquippedWeapon
struct UWeaponComponent_GetEquippedWeapon_Params
{
	struct FWeaponInfo                                 WeaponOut;                                                // (Parm, OutParm)
};

// Function ES2.WeaponComponent.GetEquippableWeapons
struct UWeaponComponent_GetEquippableWeapons_Params
{
	TArray<class AWeaponBase*>                         WeaponsOut;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function ES2.WeaponComponent.GetChargeRatio
struct UWeaponComponent_GetChargeRatio_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.WeaponComponent.GetAmmoOfSlot
struct UWeaponComponent_GetAmmoOfSlot_Params
{
	int*                                               SlotIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.WeaponComponent.GetAmmo
struct UWeaponComponent_GetAmmo_Params
{
	class UItem**                                      WeaponItem;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.WeaponComponent.EquipWeapon
struct UWeaponComponent_EquipWeapon_Params
{
	int*                                               SlotIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bForceEquip;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.WeaponComponent.CreateWeaponInfoFromItem
struct UWeaponComponent_CreateWeaponInfoFromItem_Params
{
	class UItem**                                      WeaponItem;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FWeaponInfo                                 WeaponInfo;                                               // (Parm, OutParm)
};

// Function ES2.WeaponComponent.CanWeaponBeInstalled
struct UWeaponComponent_CanWeaponBeInstalled_Params
{
	struct FWeaponInfo*                                Weapon;                                                   // (Parm)
	TEnumAsByte<EEquipmentInstallResult>               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.WeaponComponent.AreAllSlotsEmpty
struct UWeaponComponent_AreAllSlotsEmpty_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.WreckComponent.ShowWreckHideRest
struct UWreckComponent_ShowWreckHideRest_Params
{
	bool*                                              SkipHideExceptMesh;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ES2.WreckComponent.HasValidWreckMesh
struct UWreckComponent_HasValidWreckMesh_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ES2.XPComponent.OwnerHealthDepleted
struct UXPComponent_OwnerHealthDepleted_Params
{
	class AActor**                                     Owner;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                DamageInstigator;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

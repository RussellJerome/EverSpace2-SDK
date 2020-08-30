#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_ES2_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class ES2.ActivityBase
// 0x00E8 (0x0418 - 0x0330)
class AActivityBase : public AActor
{
public:
	struct FName                                       ActivityID;                                               // 0x0330(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	struct FName                                       LocationID;                                               // 0x0338(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	EActivityState                                     State;                                                    // 0x0340(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EActivityType                                      ActivityType;                                             // 0x0341(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0342(0x0006) MISSED OFFSET
	TMap<struct FName, struct FESVariant>              Attributes;                                               // 0x0348(0x0050) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FScriptMulticastDelegate                    OnActivityActivated;                                      // 0x0398(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    OnActivitySucceeded;                                      // 0x03A8(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    OnActivityFailed;                                         // 0x03B8(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    OnActivityEnded;                                          // 0x03C8(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    OnTimeExpired;                                            // 0x03D8(0x0010) (ZeroConstructor, InstancedReference)
	float                                              DistanceToPlayerThreshold;                                // 0x03E8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x03EC(0x000C) MISSED OFFSET
	struct FVector                                     LastActivityPOILocation;                                  // 0x03F8(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0404(0x0004) MISSED OFFSET
	class USelfRegisteringComponent*                   SelfRegistering;                                          // 0x0408(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0410(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.ActivityBase");
		return ptr;
	}


	void TriggerOrBindEventActivitySucceeded(struct FScriptDelegate* Event);
	void TriggerOrBindEventActivityFailed(struct FScriptDelegate* Event);
	void TriggerOrBindEventActivityEnded(struct FScriptDelegate* Event);
	void TriggerOrBindEventActivityActivated(struct FScriptDelegate* Event);
	void SwitchState(EActivityState* NewState);
	void SetLocation(struct FName* NewLocationID);
	void SetAttribute(struct FName* AttributeName, struct FESVariant* AttributeValue);
	void RestoringState();
	void ResetActivities(bool* bIncludingThis);
	void OnResetActivity();
	void OnPlayerLeftActivityLocation(TEnumAsByte<EJumpMethod>* JumpMethod);
	void OnDeactivate();
	void OnAbandonedByPlayer();
	bool IsPlayerAtActivityLocation();
	bool HasEnded();
	struct FESVariant FindOrCreateAttribute(struct FName* Key, struct FESVariant* InitValue, bool* bWasNewlyCreated);
	bool FindAttribute(struct FName* AttributeName, struct FESVariant* AttributeValue_OUT);
	bool STATIC_FindActivityInPlayerData(struct FName* InActivityID, struct FActivitySaveGameData* SavedData);
	bool CheckIfPlayerIsNearby();
	void ActivateActivity();
	void Abort();
};


// Class ES2.ActivityComponent
// 0x0000 (0x00F8 - 0x00F8)
class UActivityComponent : public UActorComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.ActivityComponent");
		return ptr;
	}

};


// Class ES2.ActorPool
// 0x0088 (0x00B0 - 0x0028)
class UActorPool : public UObject
{
public:
	TArray<class AActor*>                              AvailableActors;                                          // 0x0028(0x0010) (ZeroConstructor, Transient)
	TArray<class AActor*>                              UsedActors;                                               // 0x0038(0x0010) (ZeroConstructor, Transient)
	class AActor*                                      MyOwner;                                                  // 0x0048(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class APawn*                                       MyInstigator;                                             // 0x0050(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UClass*                                      ActorClass;                                               // 0x0058(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0060(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.ActorPool");
		return ptr;
	}

};


// Class ES2.ActorPostEditEvent
// 0x0000 (0x0330 - 0x0330)
class AActorPostEditEvent : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.ActorPostEditEvent");
		return ptr;
	}


	void PostEdit();
};


// Class ES2.AiControllerBase
// 0x0038 (0x0470 - 0x0438)
class AAiControllerBase : public AAIController
{
public:
	class UMovementPredictionComponent*                ShipMovementPrediction;                                   // 0x0438(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	struct FVector                                     HomeLocation;                                             // 0x0440(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x044C(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    AIEventDispatcher;                                        // 0x0450(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	bool                                               IsExecutingCriticalSequence;                              // 0x0460(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0461(0x0007) MISSED OFFSET
	class UBlackboardData*                             BlackboardData;                                           // 0x0468(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.AiControllerBase");
		return ptr;
	}


	void TargetTurnedHostileCallback(TEnumAsByte<EFactions>* HostileFaction);
	void SetHomeLocation(struct FVector* Location);
	void RestartBehaviorTree();
	void ChangedFactionCallback(TEnumAsByte<EFactions>* NewFaction);
};


// Class ES2.AreaGate
// 0x0008 (0x0338 - 0x0330)
class AAreaGate : public AActor
{
public:
	class USelfRegisteringComponent*                   SelfRegistering;                                          // 0x0330(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.AreaGate");
		return ptr;
	}


	void ReceivePawnLeaving(class AESPawn** Pawn);
	void ReceivePawnEntering(class AESPawn** Pawn);
};


// Class ES2.HitpointComponent
// 0x0098 (0x0190 - 0x00F8)
class UHitpointComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00F8(0x0010) MISSED OFFSET
	float                                              HitpointRatio;                                            // 0x0108(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsInvulnerable;                                          // 0x010C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x010D(0x0003) MISSED OFFSET
	struct FAttributeAccess                            MaxHitpoints;                                             // 0x0110(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	unsigned char                                      UnknownData02[0x20];                                      // 0x0160(0x0020) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnHitpointsChanged;                                       // 0x0180(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.HitpointComponent");
		return ptr;
	}


	void SetMaxHitpoints(float* MaxHP);
	void SetInvulnerable(bool* bNewInvulnerable);
	void SetCurrentHitpointsWithRatio(float* Ratio);
	void SetCurrentHitpoints(float* Hitpoints);
	bool IsDepleted();
	bool IsDamaged();
	float GetRecentDamageRatio();
	float GetRatio();
	float GetMaxHitpoints();
	float GetCurrentHitpoints();
	void ChangeHitpoints(float* HitpointsDelta, float* OUT_DamageAbsorbed, float* OUT_DamageOverkill);
};


// Class ES2.ArmorComponent
// 0x0028 (0x01B8 - 0x0190)
class UArmorComponent : public UHitpointComponent
{
public:
	struct FScriptMulticastDelegate                    OnArmorChanged;                                           // 0x0190(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnArmorDepleted;                                          // 0x01A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	float                                              DamageLimit;                                              // 0x01B0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x01B4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.ArmorComponent");
		return ptr;
	}


	void TakeDamage(float* DamageAmount, bool* bIsCritical, class AController** EventInstigator, class AActor** DamageCauser, struct FDamageEvent* DamageEvent, struct FHitResult* HitResult, float* DamageAbsorbed, float* DamageRemaining);
};


// Class ES2.AttributeIDs
// 0x0508 (0x0530 - 0x0028)
class UAttributeIDs : public UObject
{
public:
	struct FName                                       ID_ENERGY_CORE_CAPACITY;                                  // 0x0028(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ENERGY_CORE_CAPACITY_BUFF;                             // 0x0030(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ENERGY_CORE_REGEN;                                     // 0x0038(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ENERGY_CORE_REGEN_BUFF;                                // 0x0040(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ENERGY_CORE_STAND_BONUS;                               // 0x0048(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ENERGY_CORE_STAND_BONUS_BUFF;                          // 0x0050(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ENERGY_CORE_REGEN_DELAY;                               // 0x0058(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ENERGY_CORE_REGEN_DELAY_BUFF;                          // 0x0060(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_SHIELD_CAPACITY;                                       // 0x0068(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_SHIELD_CAPACITY_BUFF;                                  // 0x0070(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_SHIELD_RECHARGE;                                       // 0x0078(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_SHIELD_RECHARGE_BUFF;                                  // 0x0080(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_SHIELD_RECHARGE_DELAY;                                 // 0x0088(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_SHIELD_RECHARGE_DELAY_BUFF;                            // 0x0090(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_SHIELD_SHUTDOWN_DURATION;                              // 0x0098(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_SHIELD_SHUTDOWN_DURATION_BUFF;                         // 0x00A0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_HULL_HITPOINTS;                                        // 0x00A8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_HULL_HITPOINTS_BUFF;                                   // 0x00B0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ARMOR;                                                 // 0x00B8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ARMOR_BUFF;                                            // 0x00C0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_STRUCTURE;                                             // 0x00C8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_RESISTANCE;                                            // 0x00D0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_REPAIR;                                                // 0x00D8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_PRECISION;                                             // 0x00E0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_UTILITY;                                               // 0x00E8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_FIREPOWER;                                             // 0x00F0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_CRUISE_SPEED;                                          // 0x00F8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_CRUISE_SPEED_BUFF;                                     // 0x0100(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_BOOST_SPEED;                                           // 0x0108(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_BOOST_SPEED_BUFF;                                      // 0x0110(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_BOOST_ACCELERATION;                                    // 0x0118(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_BOOST_ACCELERATION_BUFF;                               // 0x0120(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_BOOST_DURATION;                                        // 0x0128(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_BOOST_DURATION_BUFF;                                   // 0x0130(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_BOOST_RECHARGE_DURATION;                               // 0x0138(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_BOOST_RECHARGE_DURATION_BUFF;                          // 0x0140(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_BOOST_RECHARGE_DELAY;                                  // 0x0148(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_BOOST_REGEN_DELAY_BUFF;                                // 0x0150(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_HANDLING;                                              // 0x0158(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_HANDLING_BUFF;                                         // 0x0160(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_WEAPON_SLOTS;                                          // 0x0168(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_LAUNCHER_SLOTS;                                        // 0x0170(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_DEVICE_SLOTS;                                          // 0x0178(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_CONSUMABLE_SLOTS;                                      // 0x0180(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_CARGO_SLOTS;                                           // 0x0188(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_CARGO_SLOTS_BUFF;                                      // 0x0190(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_WEAPON_HULL_DAMAGE;                                    // 0x0198(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_WEAPON_HULL_DAMAGE_BUFF;                               // 0x01A0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_WEAPON_SHIELD_DAMAGE;                                  // 0x01A8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_WEAPON_SHIELD_DAMAGE_BUFF;                             // 0x01B0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_WEAPON_RANGE;                                          // 0x01B8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_WEAPON_RANGE_BUFF;                                     // 0x01C0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_WEAPON_DAMAGE_RADIUS;                                  // 0x01C8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_WEAPON_DAMAGE_RADIUS_BUFF;                             // 0x01D0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_WEAPON_FIRE_RATE;                                      // 0x01D8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_WEAPON_FIRE_RATE_BUFF;                                 // 0x01E0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_WEAPON_CHARGE_DURATION;                                // 0x01E8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_WEAPON_CHARGE_DURATION_BUFF;                           // 0x01F0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_WEAPON_CHARGE_DAMAGE_INCREASE;                         // 0x01F8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_WEAPON_CHARGE_DAMAGE_INCREASE_BUFF;                    // 0x0200(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_WEAPON_CHARGE_PROJECTILE_INCREASE;                     // 0x0208(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_WEAPON_CHARGE_PROJECTILE_INCREASE_BUFF;                // 0x0210(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_WEAPON_CHARGE_BURST_INCREASE;                          // 0x0218(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_WEAPON_CHARGE_BURST_INCREASE_BUFF;                     // 0x0220(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_WEAPON_RAMP_UP_DURATION;                               // 0x0228(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_WEAPON_RAMP_UP_DURATION_BUFF;                          // 0x0230(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_WEAPON_VELOCITY;                                       // 0x0238(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_WEAPON_VELOCITY_BUFF;                                  // 0x0240(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_WEAPON_SPREAD;                                         // 0x0248(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_WEAPON_SPREAD_BUFF;                                    // 0x0250(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_WEAPON_ENERGY_CONSUMPTION;                             // 0x0258(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_WEAPON_ENERGY_CONSUMPTION_BUFF;                        // 0x0260(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_DEVICE_COOLDOWN;                                       // 0x0268(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_DEVICE_COOLDOWN_BUFF;                                  // 0x0270(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_DEVICE_ENERGY_CONSUMPTION;                             // 0x0278(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_DEVICE_ENERGY_CONSUMPTION_BUFF;                        // 0x0280(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_DEVICE_EFFECT_DURATION;                                // 0x0288(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_DEVICE_EFFECT_DURATION_BUFF;                           // 0x0290(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_DEVICE_EFFECT;                                         // 0x0298(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_DEVICE_EFFECT_BUFF;                                    // 0x02A0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_DEVICE_EFFECT_3;                                       // 0x02A8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_DEVICE_EFFECT_2_BUFF;                                  // 0x02B0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_DEVICE_RANGE;                                          // 0x02B8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_DEVICE_RANGE_BUFF;                                     // 0x02C0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_DEVICE_EMP_STUN_DURATION;                              // 0x02C8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_PERK_EFFECT;                                           // 0x02D0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_PERK_EFFECT_3;                                         // 0x02D8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_PERK_COUNT;                                            // 0x02E0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_PERK_TIME;                                             // 0x02E8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_PERK_TIME_3;                                           // 0x02F0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_CONSUMABLE_EFFECT;                                     // 0x02F8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_CONSUMABLE_EFFECT_NUMBER;                              // 0x0300(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_CONSUMABLE_DURATION;                                   // 0x0308(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_SECONDARY_MAX_AMMO;                                    // 0x0310(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_PRICE;                                            // 0x0318(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_STACK_AMOUNT;                                     // 0x0320(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_CONTENT;                                          // 0x0328(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_MISSION_ID;                                       // 0x0330(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_SENSOR_RANGE;                                          // 0x0338(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_SENSOR_RANGE_BUFF;                                     // 0x0340(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_TRACTOR_BEAM_RANGE;                                    // 0x0348(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_TRACTOR_BEAM_RANGE_BUFF;                               // 0x0350(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_COLLISION_DAMAGE;                                      // 0x0358(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_COLLISION_DAMAGE_BUFF;                                 // 0x0360(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_SOCKETS;                                               // 0x0368(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_WEAPON_SHIELD_DPS;                                     // 0x0370(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_WEAPON_HULL_DPS;                                       // 0x0378(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_MODULE_DAMAGE_RESISTANCE;                              // 0x0380(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_NANO_BOT_REPAIR_AMOUNT;                                // 0x0388(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_NANO_BOT_REPAIR_SPEED;                                 // 0x0390(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_CRITICAL_HIT_DAMAGE;                                   // 0x0398(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_CRITICAL_HIT_CHANCE;                                   // 0x03A0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_CONDITION_RESISTANCE;                                  // 0x03A8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ELEMENTAL_RESISTANCE;                                  // 0x03B0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_DIRECT_HULL_DAMAGE_RESISTANCE;                         // 0x03B8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_MAX_BANKING_ANGLE_YAW;                                 // 0x03C0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_MAX_BANKING_ANGLE_STRAFE;                              // 0x03C8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_BANKING_SPEED;                                         // 0x03D0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ACCELERATION_FORWARD;                                  // 0x03D8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ACCELERATION_BACKWARD;                                 // 0x03E0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ACCELERATION_STRAFE;                                   // 0x03E8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ACCELERATION_HOVER;                                    // 0x03F0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ROTATION_SPEED;                                        // 0x03F8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ROTATION_ACCELERATION;                                 // 0x0400(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_SHIELD_PIERCING;                                       // 0x0408(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ARMOR_PIERCING;                                        // 0x0410(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ANTI_ARMOR;                                            // 0x0418(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_FORK;                                                  // 0x0420(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_LEECH;                                                 // 0x0428(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_HEAL_ON_HIT;                                           // 0x0430(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_HEAL_ON_KILL;                                          // 0x0438(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_JAMMING;                                               // 0x0440(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_REFLECT_SHOT;                                          // 0x0448(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_SLOW;                                                  // 0x0450(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_CORROSION;                                             // 0x0458(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_DOUBLE_SHOT;                                           // 0x0460(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ENERGY_PLUS;                                           // 0x0468(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_CREDITS_DROP;                                          // 0x0470(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_EXPLOSIVE_SHOT;                                        // 0x0478(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_DESTABILIZER;                                          // 0x0480(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_CRITICAL_HIT_CHAIN;                                    // 0x0488(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_EMP_POWERED_DEATH_BLOW;                                // 0x0490(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_FINAL_HELP;                                            // 0x0498(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_FULL_STOP;                                             // 0x04A0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ANCIENT_DAMAGE;                                        // 0x04A8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ENERGY_BUBBLE;                                         // 0x04B0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ENERGY_DEPENDENCE;                                     // 0x04B8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_SHIELD_DISRUPT;                                        // 0x04C0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_SHIELD_LEECH;                                          // 0x04C8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_SHIELD_REFLECT;                                        // 0x04D0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_SHUTDOWN_EMP;                                          // 0x04D8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_EMERGENCY_SHIELD;                                      // 0x04E0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_EXPERIENCE_PER_KILL;                                   // 0x04E8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ELITE_DAMAGE;                                          // 0x04F0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_CREDITS_LOOT_BONUS;                                    // 0x04F8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_LOOT_EXPLOSION;                                        // 0x0500(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_INSTANT_SCRAP_PROCESSING;                              // 0x0508(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_CONTAINER_CLOAK;                                       // 0x0510(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_EMP_ENERGY_LEECH;                                      // 0x0518(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_FULL_AUTO;                                             // 0x0520(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_SYNERGY;                                               // 0x0528(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.AttributeIDs");
		return ptr;
	}

};


// Class ES2.BaseProjectileMovementComponent
// 0x0000 (0x0200 - 0x0200)
class UBaseProjectileMovementComponent : public UProjectileMovementComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.BaseProjectileMovementComponent");
		return ptr;
	}

};


// Class ES2.BTD_CompareBBEntriesArithmetic
// 0x0058 (0x00C0 - 0x0068)
class UBTD_CompareBBEntriesArithmetic : public UBTDecorator
{
public:
	TEnumAsByte<EArithmeticKeyOperation>               Operator;                                                 // 0x0068(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0069(0x0007) MISSED OFFSET
	struct FBlackboardKeySelector                      BlackboardKeyA;                                           // 0x0070(0x0028) (Edit)
	struct FBlackboardKeySelector                      BlackboardKeyB;                                           // 0x0098(0x0028) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.BTD_CompareBBEntriesArithmetic");
		return ptr;
	}

};


// Class ES2.BTD_TimeLimitFromWaypoint
// 0x0028 (0x0090 - 0x0068)
class UBTD_TimeLimitFromWaypoint : public UBTDecorator
{
public:
	struct FBlackboardKeySelector                      WaypointKey;                                              // 0x0068(0x0028) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.BTD_TimeLimitFromWaypoint");
		return ptr;
	}

};


// Class ES2.BTD_TimeLimitVariance
// 0x0008 (0x0078 - 0x0070)
class UBTD_TimeLimitVariance : public UBTDecorator_TimeLimit
{
public:
	float                                              VariancePercent;                                          // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0074(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.BTD_TimeLimitVariance");
		return ptr;
	}

};


// Class ES2.BTS_CheckIfUnderAttack
// 0x0038 (0x00A8 - 0x0070)
class UBTS_CheckIfUnderAttack : public UBTService
{
public:
	struct FBlackboardKeySelector                      UnderAttackKey;                                           // 0x0070(0x0028) (Edit)
	float                                              FailCheckDistToTargetAimLocation;                         // 0x0098(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FailCheckAttackTimeThreshold;                             // 0x009C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FailCheckMinDistToTarget;                                 // 0x00A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FailCheckMaxDistToTarget;                                 // 0x00A4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.BTS_CheckIfUnderAttack");
		return ptr;
	}

};


// Class ES2.BTS_DetectNearestEnemyNative
// 0x0030 (0x00A0 - 0x0070)
class UBTS_DetectNearestEnemyNative : public UBTService
{
public:
	struct FBlackboardKeySelector                      TargetKey;                                                // 0x0070(0x0028) (Edit)
	TEnumAsByte<EFactionRelation>                      SearchForRelation;                                        // 0x0098(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               SearchForDamagedHull;                                     // 0x0099(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               SearchForDamagedArmor;                                    // 0x009A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               SearchForDamagedShield;                                   // 0x009B(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               ConsiderWeaponCone;                                       // 0x009C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               ConsiderTurretCone;                                       // 0x009D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               PreferOldTarget;                                          // 0x009E(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x009F(0x0001) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.BTS_DetectNearestEnemyNative");
		return ptr;
	}

};


// Class ES2.BTS_DetectTargetMissile
// 0x0028 (0x0098 - 0x0070)
class UBTS_DetectTargetMissile : public UBTService
{
public:
	struct FBlackboardKeySelector                      TargetKey;                                                // 0x0070(0x0028) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.BTS_DetectTargetMissile");
		return ptr;
	}

};


// Class ES2.BTT_FlyToAvoidCollision
// 0x0038 (0x00D0 - 0x0098)
class UBTT_FlyToAvoidCollision : public UBTTask_BlackboardBase
{
public:
	float                                              AcceptableRadiusDestination;                              // 0x0098(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AcceptableRadiusSubWaypoint;                              // 0x009C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ForceUpdateTime;                                          // 0x00A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ForceUpdateTimeInterior;                                  // 0x00A4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                TestDirectionCount;                                       // 0x00A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SpeedReductionFactor;                                     // 0x00AC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AgilityReductionFactor;                                   // 0x00B0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StrafeFactor;                                             // 0x00B4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              OversteerPreventionAngle;                                 // 0x00B8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              OvershootPreventionDistance;                              // 0x00BC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MovementPredictionTime;                                   // 0x00C0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TraceSamplingStepsPerSecond;                              // 0x00C4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               OrientLikeTargetIfNear;                                   // 0x00C8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bFailIfPassedTarget;                                      // 0x00C9(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAIEvent>                              EventOnExecute;                                           // 0x00CA(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAIEvent>                              EventOnFinished;                                          // 0x00CB(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00CC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.BTT_FlyToAvoidCollision");
		return ptr;
	}

};


// Class ES2.BTT_Attack
// 0x0010 (0x00E0 - 0x00D0)
class UBTT_Attack : public UBTT_FlyToAvoidCollision
{
public:
	bool                                               bFlyToOffsetLocation;                                     // 0x00D0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00D1(0x0003) MISSED OFFSET
	float                                              MinFlyToOffset;                                           // 0x00D4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxFlyToOffset;                                           // 0x00D8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00DC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.BTT_Attack");
		return ptr;
	}

};


// Class ES2.BTT_BarrelRollEvasiveMove
// 0x0010 (0x00E0 - 0x00D0)
class UBTT_BarrelRollEvasiveMove : public UBTT_FlyToAvoidCollision
{
public:
	float                                              RollFactor;                                               // 0x00D0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StrafeMultiplier;                                         // 0x00D4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TimeLimitSeconds;                                         // 0x00D8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00DC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.BTT_BarrelRollEvasiveMove");
		return ptr;
	}

};


// Class ES2.BTT_CalcIdleLocation
// 0x0060 (0x00F8 - 0x0098)
class UBTT_CalcIdleLocation : public UBTTask_BlackboardBase
{
public:
	float                                              IdleRadius;                                               // 0x0098(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EIdleType>                             IdleType;                                                 // 0x009C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x009D(0x0003) MISSED OFFSET
	float                                              MaxRadiusAroundTarget;                                    // 0x00A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00A4(0x0004) MISSED OFFSET
	struct FBlackboardKeySelector                      TargetKey;                                                // 0x00A8(0x0028) (Edit)
	struct FBlackboardKeySelector                      CurrentIdleTypeKey;                                       // 0x00D0(0x0028) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.BTT_CalcIdleLocation");
		return ptr;
	}

};


// Class ES2.BTT_CalcRailTurretPatrolLocation
// 0x0008 (0x00A0 - 0x0098)
class UBTT_CalcRailTurretPatrolLocation : public UBTTask_BlackboardBase
{
public:
	float                                              AcceptableRadiusDestination;                              // 0x0098(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x009C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.BTT_CalcRailTurretPatrolLocation");
		return ptr;
	}

};


// Class ES2.BTT_ChromagoreFlyTo
// 0x0028 (0x00F8 - 0x00D0)
class UBTT_ChromagoreFlyTo : public UBTT_FlyToAvoidCollision
{
public:
	struct FBlackboardKeySelector                      ArrivedAtTargetKey;                                       // 0x00D0(0x0028) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.BTT_ChromagoreFlyTo");
		return ptr;
	}

};


// Class ES2.BTT_DebugMessage
// 0x0018 (0x0088 - 0x0070)
class UBTT_DebugMessage : public UBTTaskNode
{
public:
	class FString                                      DebugText;                                                // 0x0070(0x0010) (Edit, ZeroConstructor)
	TEnumAsByte<EBTNodeResult>                         NodeResult;                                               // 0x0080(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0081(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.BTT_DebugMessage");
		return ptr;
	}

};


// Class ES2.BTT_FlyAwayFrom
// 0x0020 (0x0100 - 0x00E0)
class UBTT_FlyAwayFrom : public UBTT_Attack
{
public:
	float                                              FlyByDistanceThreshold;                                   // 0x00E0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FlyBySafetyDistance;                                      // 0x00E4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFloatRange                                 ZigZagSegmentLength;                                      // 0x00E8(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ZigZagMaxDeviationAngle;                                  // 0x00F8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00FC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.BTT_FlyAwayFrom");
		return ptr;
	}

};


// Class ES2.BTT_FollowLeader
// 0x0020 (0x00F0 - 0x00D0)
class UBTT_FollowLeader : public UBTT_FlyToAvoidCollision
{
public:
	float                                              FormationPosOvershootPreventionDist;                      // 0x00D0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFloatRange                                 CatchUpAiEventsThreshold;                                 // 0x00D4(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CollisionSensingDistanceInFormation;                      // 0x00E4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              WaypointUpdateIntervalIndoors;                            // 0x00E8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00EC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.BTT_FollowLeader");
		return ptr;
	}


	bool STATIC_TryTeleportIntoFormation(class AESPawn** Follower);
};


// Class ES2.BTT_FormationAttack
// 0x0028 (0x0118 - 0x00F0)
class UBTT_FormationAttack : public UBTT_FollowLeader
{
public:
	struct FBlackboardKeySelector                      LeadersTarget;                                            // 0x00F0(0x0028) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.BTT_FormationAttack");
		return ptr;
	}

};


// Class ES2.BTT_NotifyWaypoint
// 0x0030 (0x00A0 - 0x0070)
class UBTT_NotifyWaypoint : public UBTTaskNode
{
public:
	struct FBlackboardKeySelector                      WaypointKey;                                              // 0x0070(0x0028) (Edit)
	TEnumAsByte<EAIEvent>                              EventId;                                                  // 0x0098(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0099(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.BTT_NotifyWaypoint");
		return ptr;
	}

};


// Class ES2.BTT_OrbitAttack
// 0x0020 (0x0100 - 0x00E0)
class UBTT_OrbitAttack : public UBTT_Attack
{
public:
	TEnumAsByte<EOrbitType>                            OrbitType;                                                // 0x00E0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00E1(0x0003) MISSED OFFSET
	float                                              SphereCapAngle;                                           // 0x00E4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               OrientToTarget;                                           // 0x00E8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00E9(0x0003) MISSED OFFSET
	float                                              AcceptableRadiusToOrbitLocation;                          // 0x00EC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TimeToSpendAtOrbitDest;                                   // 0x00F0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               OnlyFireIfAtDestInOrbit;                                  // 0x00F4(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00F5(0x0003) MISSED OFFSET
	int                                                AmountLocationsToChoose;                                  // 0x00F8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x00FC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.BTT_OrbitAttack");
		return ptr;
	}

};


// Class ES2.BTT_RailTurretMoveTo
// 0x0020 (0x00B8 - 0x0098)
class UBTT_RailTurretMoveTo : public UBTTask_BlackboardBase
{
public:
	bool                                               bFocusOnTarget;                                           // 0x0098(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0099(0x0003) MISSED OFFSET
	float                                              AcceptableRadiusDestination;                              // 0x009C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SpeedReductionFactor;                                     // 0x00A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              OvershootPreventionDistance;                              // 0x00A4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAIEvent>                              EventOnExecute;                                           // 0x00A8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAIEvent>                              EventOnFinished;                                          // 0x00A9(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x00AA(0x0002) MISSED OFFSET
	struct FSteeringNoiseParametersStruct              TargetPositionNoise;                                      // 0x00AC(0x0008) (Edit)
	unsigned char                                      UnknownData02[0x4];                                       // 0x00B4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.BTT_RailTurretMoveTo");
		return ptr;
	}

};


// Class ES2.BTT_RailTurretMoveAndAttack
// 0x0000 (0x00B8 - 0x00B8)
class UBTT_RailTurretMoveAndAttack : public UBTT_RailTurretMoveTo
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.BTT_RailTurretMoveAndAttack");
		return ptr;
	}

};


// Class ES2.BTT_Stop
// 0x0000 (0x0070 - 0x0070)
class UBTT_Stop : public UBTTaskNode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.BTT_Stop");
		return ptr;
	}

};


// Class ES2.BTT_TriggerEvent
// 0x0008 (0x0078 - 0x0070)
class UBTT_TriggerEvent : public UBTTaskNode
{
public:
	TEnumAsByte<EAIEvent>                              EventId;                                                  // 0x0070(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0071(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.BTT_TriggerEvent");
		return ptr;
	}

};


// Class ES2.BTT_TriggerOnFinishedEvent
// 0x0008 (0x00A0 - 0x0098)
class UBTT_TriggerOnFinishedEvent : public UBTTask_BlackboardBase
{
public:
	TEnumAsByte<EAIEvent>                              EventOnFinished;                                          // 0x0098(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAIEvent>                              EventOnAbort;                                             // 0x0099(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x009A(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.BTT_TriggerOnFinishedEvent");
		return ptr;
	}

};


// Class ES2.BTT_TurretAttack
// 0x0028 (0x0098 - 0x0070)
class UBTT_TurretAttack : public UBTTaskNode
{
public:
	struct FBlackboardKeySelector                      TargetKey;                                                // 0x0070(0x0028) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.BTT_TurretAttack");
		return ptr;
	}

};


// Class ES2.ColorDataAsset
// 0x0010 (0x0040 - 0x0030)
class UColorDataAsset : public UDataAsset
{
public:
	struct FLinearColor                                Color;                                                    // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.ColorDataAsset");
		return ptr;
	}

};


// Class ES2.ConditionBaseComponent
// 0x0070 (0x0168 - 0x00F8)
class UConditionBaseComponent : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    OnConditionAdded;                                         // 0x00F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnConditionRemoved;                                       // 0x0108(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnConditionTick;                                          // 0x0118(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	int                                                TokenLimit;                                               // 0x0128(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x012C(0x0004) MISSED OFFSET
	class USoundBase*                                  BuffAddedSound;                                           // 0x0130(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  DebuffAddedSound;                                         // 0x0138(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  ConditionRemovedSound;                                    // 0x0140(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  ConditionLoopSound;                                       // 0x0148(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0150(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.ConditionBaseComponent");
		return ptr;
	}


	int STATIC_RemoveTokensFrom(class AActor** Target, class UClass** ConditionType, int* Amount);
	int RemoveTokens(int* Amount);
	void STATIC_RemoveCondition(class AActor** Target, int* ID, bool* Success);
	int GetTokenCount();
	float GetRemainingDuration();
	bool CheckPreconditions(class AActor** Candidate);
	void STATIC_AddCondition(class UClass** ConditionClass, class AActor** Target, class AActor** InstigatorUnsafe, int* InstigatorLevel, float* Duration, int* TokenCount, int* Handle_out, int* AmountAdded_out);
};


// Class ES2.ConditionInstigatorComponent
// 0x0010 (0x0108 - 0x00F8)
class UConditionInstigatorComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00F8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.ConditionInstigatorComponent");
		return ptr;
	}


	void RemoveInstigatedConditionsOfClass(class UClass** ConditionClass);
	bool RemoveInstigatedConditionById(int* ID);
	void RemoveAllInstigatedConditions();
	int GetInstigatedHandleForTarget(class AActor** TargetActor, class UClass** ConditionClass);
};


// Class ES2.IntensityCondition
// 0x0000 (0x0028 - 0x0028)
class UIntensityCondition : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.IntensityCondition");
		return ptr;
	}


	void TickPerInstigator(float* DeltaSeconds, class AActor** UnsafeInstigator, float* InstigatorIntensity);
	void TickIntensityCondition(float* DeltaSeconds, float* CombinedIntensity);
	void OnTokenCountChanged(int* TokenCount, float* CombinedIntensity);
	void InitCondition(class AActor** Instigator, int* InstigatorLevel);
	float CalcIntensity(class AActor** Instigator, int* InstigatorLevel);
};


// Class ES2.DurationCondition
// 0x0000 (0x0028 - 0x0028)
class UDurationCondition : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.DurationCondition");
		return ptr;
	}


	void TickDurationCondition(float* DeltaSeconds, float* CurrentIntensity, class AActor** CurrentUnsafeInstigator, float* RemainingTotalSeconds);
	void OnTokenCountChanged(int* TokenCount, float* CurrentIntensity, float* RemainingTotalSeconds);
	void InitCondition(class AActor** Instigator, int* InstigatorLevel);
	float CalcIntensity(class AActor** UnsafeInstigator, int* InstigatorLevel);
};


// Class ES2.EquipmentBase
// 0x0040 (0x0370 - 0x0330)
class AEquipmentBase : public AActor
{
public:
	TEnumAsByte<EEquipmentType>                        EquipmentType;                                            // 0x0330(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0331(0x0007) MISSED OFFSET
	struct FText                                       EquipmentName;                                            // 0x0338(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FText                                       EquipmentDescription;                                     // 0x0350(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	class UTexture2D*                                  EquipmentIcon;                                            // 0x0368(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.EquipmentBase");
		return ptr;
	}

};


// Class ES2.ConsumableBase
// 0x0168 (0x04D8 - 0x0370)
class AConsumableBase : public AEquipmentBase
{
public:
	struct FAttributeAccess                            MaxAmountPerSlot;                                         // 0x0370(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x8];                                       // 0x03C0(0x0008) MISSED OFFSET
	struct FAttributeAccess                            EffectDuration;                                           // 0x03C8(0x0050) (Edit, BlueprintVisible)
	struct FAttributeAccess                            EffectValue;                                              // 0x0418(0x0050) (Edit, BlueprintVisible)
	struct FAttributeAccess                            EffectPercent;                                            // 0x0468(0x0050) (Edit, BlueprintVisible)
	class USoundBase*                                  ActivationSound;                                          // 0x04B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      ConsumableUser;                                           // 0x04C0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UItem*                                       ConsumableItem;                                           // 0x04C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x04D0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.ConsumableBase");
		return ptr;
	}


	void Terminate();
	bool CanBeUsed(class AActor** User);
	void ApplyConsumableAttributes(class UItem** ConsumableItemIn);
};


// Class ES2.ConsumableComponent
// 0x00B8 (0x01B0 - 0x00F8)
class UConsumableComponent : public UActorComponent
{
public:
	TArray<struct FConsumableInfo>                     ConsumableSlots;                                          // 0x00F8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	int                                                SelectedConsumableIndex;                                  // 0x0108(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x010C(0x0004) MISSED OFFSET
	class USoundBase*                                  ActivationNotPossibleSound;                               // 0x0110(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  HoldTriggerSound;                                         // 0x0118(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       SpawnSocketName;                                          // 0x0120(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnCouldNotInstallConsumable;                              // 0x0128(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnConsumableUsed;                                         // 0x0138(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnConsumableCouldNotBeUsed;                               // 0x0148(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnStartedUsingConsumable;                                 // 0x0158(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCanceledConsumableUsage;                                // 0x0168(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	float                                              HoldToUseDuration;                                        // 0x0178(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HoldToUseDurationGamepad;                                 // 0x017C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0180(0x0018) MISSED OFFSET
	class UAudioComponent*                             HoldTriggerAudioComp;                                     // 0x0198(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FConsumableCooldown>                 CurrentCooldowns;                                         // 0x01A0(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.ConsumableComponent");
		return ptr;
	}


	class AConsumableBase* UseSelectedConsumable(bool* bConsume);
	class AConsumableBase* UseConsumableAtIndex(int* Index, bool* bConsume);
	void StopUsingSelectedConsumable();
	void StartUsingSelectedConsumable(bool* bConsume);
	void SetNewConsumableSlots(TArray<struct FConsumableInfo>* NewConsumables);
	void SelectConsumable(class AConsumableBase** Consumable);
	bool HasConsumable(struct FName* ItemTemplateID);
	float GetTriggerRatio();
	int GetSelectedConsumableIndex();
	int GetSelectedConsumableAmount();
	void GetSelectedConsumable(struct FConsumableInfo* ConsumableOut);
	void GetSelectableConsumables(TArray<struct FConsumableInfo>* ConsumablesOut);
	float GetRemainingCoolDownRatio(struct FName* ItemTemplateID);
	float GetRemainingCoolDownDurationOfActiveConsumable();
	float GetRemainingCoolDownDuration(struct FName* ItemTemplateID);
	int GetNumEmptySlots();
	class AConsumableBase* GetEquippedConsumableDefaultObject();
	int GetConsumableAmountOfSlot(int* SlotIndex);
	int GetConsumableAmount(struct FName* ItemTemplateID);
	TEnumAsByte<EEquipmentInstallResult> CanConsumableBeAdded(class UClass** ConsumableClass, struct FName* ItemTemplateID);
	TEnumAsByte<EEquipmentInstallResult> AddNewConsumable(class UClass** ConsumableClass, struct FName* ItemTemplateID);
};


// Class ES2.CustomPlayerInput
// 0x0010 (0x03B8 - 0x03A8)
class UCustomPlayerInput : public UPlayerInput
{
public:
	TArray<struct FKeybindingConfig>                   KeybindingsConfig;                                        // 0x03A8(0x0010) (ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.CustomPlayerInput");
		return ptr;
	}

};


// Class ES2.DamagePart
// 0x00A0 (0x03D0 - 0x0330)
class ADamagePart : public AActor
{
public:
	struct FText                                       Name;                                                     // 0x0330(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	class UTexture2D*                                  Icon;                                                     // 0x0348(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTexture2D*                                  IconNotDamaged;                                           // 0x0350(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTexture2D*                                  IconOverHeated;                                           // 0x0358(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTexture2D*                                  IconOverHeatedAndDamaged;                                 // 0x0360(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnDamagePartDamaged;                                      // 0x0368(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDamagePartRepaired;                                     // 0x0378(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDamagePartOverheated;                                   // 0x0388(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDamagePartOverheatRepaired;                             // 0x0398(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	bool                                               IsDamaged;                                                // 0x03A8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IsOverheated;                                             // 0x03A9(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x03AA(0x0002) MISSED OFFSET
	float                                              DamageRatio;                                              // 0x03AC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FDamagePartEffectText>               EffectTexts;                                              // 0x03B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData01[0x10];                                      // 0x03C0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.DamagePart");
		return ptr;
	}


	void RepairOverheat();
	void repair(class AActor** PartOwner);
	void Overheat(class AActor** PartOwner, bool* bPlayAlertSound, float* DurationSeconds);
	void OnRepairOverheat(class AActor** PartOwner);
	void OnRepair(class AActor** PartOwner);
	void OnOverheat(class AActor** PartOwner, bool* bPlayAlertSound);
	void OnDamage(class AActor** PartOwner, bool* bPlayAlertSound);
	void Damage(class AActor** PartOwner, float* DamageRatioIn, bool* bPlayAlertSound);
};


// Class ES2.DamageTypeBase
// 0x0000 (0x0040 - 0x0040)
class UDamageTypeBase : public UDamageType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.DamageTypeBase");
		return ptr;
	}

};


// Class ES2.DamageTypeEnergy
// 0x0000 (0x0040 - 0x0040)
class UDamageTypeEnergy : public UDamageTypeBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.DamageTypeEnergy");
		return ptr;
	}

};


// Class ES2.DamageTypeGeneric
// 0x0000 (0x0040 - 0x0040)
class UDamageTypeGeneric : public UDamageTypeBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.DamageTypeGeneric");
		return ptr;
	}

};


// Class ES2.DamageTypeKinetic
// 0x0000 (0x0040 - 0x0040)
class UDamageTypeKinetic : public UDamageTypeBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.DamageTypeKinetic");
		return ptr;
	}

};


// Class ES2.DebugLib
// 0x0000 (0x0028 - 0x0028)
class UDebugLib : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.DebugLib");
		return ptr;
	}


	class AMissionBase* STATIC_SpawnJob(class UObject** WorldContextObject, class UClass** TaskClass, struct FName* LocationID, struct FTransform* SpawnTransform);
	TArray<class FString> STATIC_GetConsoleCommands();
	void STATIC_GetAssetsByClass(class UClass** AnyClass, TArray<class UClass*>* OutRetrievedClasses);
};


// Class ES2.DeviceBase
// 0x0138 (0x04A8 - 0x0370)
class ADeviceBase : public AEquipmentBase
{
public:
	TEnumAsByte<EDeviceType>                           DeviceType;                                               // 0x0370(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0371(0x0007) MISSED OFFSET
	struct FAttributeAccess                            CoolDownDuration;                                         // 0x0378(0x0050) (Edit, BlueprintVisible)
	struct FAttributeAccess                            EffectDuration;                                           // 0x03C8(0x0050) (Edit, BlueprintVisible)
	struct FAttributeAccess                            EnergyConsumption;                                        // 0x0418(0x0050) (Edit, BlueprintVisible)
	int                                                NumCharges;                                               // 0x0468(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAllowOtherDevicesOfSameCategory;                         // 0x046C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x046D(0x0003) MISSED OFFSET
	class USoundBase*                                  ActivationSound;                                          // 0x0470(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      DeviceOwner;                                              // 0x0478(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UItem*                                       DeviceItem;                                               // 0x0480(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x20];                                      // 0x0488(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.DeviceBase");
		return ptr;
	}


	bool OnDeactivate(class AActor** OwnerOfDevice);
	bool OnActivate(class AActor** OwnerOfDevice);
	bool IsAvailable();
	bool IsActivated(class AActor** DeviceOwner);
	float GetRemainingEffectRatio();
	float GetRemainingEffectDuration();
	float GetRemainingCoolDownRatio();
	float GetRemainingCoolDownDuration();
	int GetRemainingCharges();
	void Deactivate(class AActor** OwnerOfDevice);
	bool CouldBeActivatedAfterCooldown(class AActor** OwnerOfDevice);
	void ClearEffectDuration();
	void ClearCooldowns();
	bool CanBeActivated(class AActor** OwnerOfDevice);
	void ApplyDeviceAttributes(class UItem** DeviceItemIn);
	bool Activate(class AActor** OwnerOfDevice, float* DeviceCustomValue);
};


// Class ES2.DeviceComponent
// 0x00A0 (0x0198 - 0x00F8)
class UDeviceComponent : public UActorComponent
{
public:
	TArray<struct FDeviceInfo>                         DeviceSlots;                                              // 0x00F8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	int                                                SelectedDeviceIndex;                                      // 0x0108(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x010C(0x0004) MISSED OFFSET
	class USoundBase*                                  ActivationNotPossibleSound;                               // 0x0110(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIgnoreDeviceCooldowns;                                   // 0x0118(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0119(0x0003) MISSED OFFSET
	float                                              HoldToUseDuration;                                        // 0x011C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  HoldTriggerSound;                                         // 0x0120(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnCouldNotInstallDevice;                                  // 0x0128(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnStartActivatingDevice;                                  // 0x0138(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCanceledDeviceActivation;                               // 0x0148(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDeviceActivated;                                        // 0x0158(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDeviceCouldNotBeActivated;                              // 0x0168(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData02[0x18];                                      // 0x0178(0x0018) MISSED OFFSET
	class UAudioComponent*                             HoldTriggerAudioComp;                                     // 0x0190(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.DeviceComponent");
		return ptr;
	}


	void UninstallDevice(class UClass** DeviceClass);
	void ToggleEquippedDevice();
	void ToggleDevice(int* DeviceIndex);
	void SetNewDeviceSlots(TArray<struct FDeviceInfo>* NewDeviceSlots);
	void SelectDevice(class ADeviceBase** Device);
	void ResetCooldowns();
	void ReInit();
	void OverrideDevices(TArray<struct FDeviceInfo>* NewDeviceSlots);
	bool IsAnyDeviceCoolingDown();
	TEnumAsByte<EEquipmentInstallResult> InstallNewDevice(struct FDeviceInfo* DeviceInfo);
	float GetTriggerRatio();
	class ADeviceBase* GetSelectedDeviceInstance();
	void GetSelectedDevice(struct FDeviceInfo* DeviceOut);
	int GetNumEmptySlots();
	class ADeviceBase* GetDeviceInstance(int* SlotIndex);
	void GetDevice(int* SlotIndex, struct FDeviceInfo* DeviceOut);
	TEnumAsByte<EEquipmentInstallResult> DeviceCanBeInstalled(class UClass** DeviceClass);
};


// Class ES2.DialogIDs
// 0x2498 (0x24C0 - 0x0028)
class UDialogIDs : public UObject
{
public:
	struct FName                                       MISSION_TEST_1_DLG_2;                                     // 0x0028(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_TEST_1_DLG_3;                                     // 0x0030(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_TEST_1_DLG_3_DRONES;                              // 0x0038(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_TEST_1_DLG_3_ALDA;                                // 0x0040(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_TEST_1_DLG_3_ALDA_WAYPOINT;                       // 0x0048(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_TEST_1_DLG_5;                                     // 0x0050(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_TEST_1_DLG_6;                                     // 0x0058(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       JOB_DISTRESS_CALL_DLG_1_SPEAKER_2;                        // 0x0060(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       JOB_DISTRESS_CALL_DLG_1_SPEAKER_3;                        // 0x0068(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       JOB_DISTRESS_CALL_DLG_1_SPEAKER_4;                        // 0x0070(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       JOB_DISTRESS_CALL_DLG_1_SPEAKER_5;                        // 0x0078(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       JOB_DISTRESS_CALL_DLG_1_SPEAKER_6;                        // 0x0080(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       JOB_DISTRESS_CALL_DLG_2_SPEAKER_2;                        // 0x0088(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       JOB_DISTRESS_CALL_DLG_2_SPEAKER_3;                        // 0x0090(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       JOB_DISTRESS_CALL_DLG_2_SPEAKER_4;                        // 0x0098(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       JOB_DISTRESS_CALL_DLG_2_SPEAKER_5;                        // 0x00A0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       JOB_DISTRESS_CALL_DLG_2_SPEAKER_6;                        // 0x00A8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       JOB_DISTRESS_CALL_DLG_3_SPEAKER_2;                        // 0x00B0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       JOB_DISTRESS_CALL_DLG_3_SPEAKER_3;                        // 0x00B8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       JOB_DISTRESS_CALL_DLG_3_SPEAKER_4;                        // 0x00C0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       JOB_DISTRESS_CALL_DLG_3_SPEAKER_5;                        // 0x00C8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       JOB_DISTRESS_CALL_DLG_3_SPEAKER_6;                        // 0x00D0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M01_EMPTY;                                                // 0x00D8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       Seq_M001_CS01_01;                                         // 0x00E0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       Seq_M001_CS01_02;                                         // 0x00E8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       Seq_M001_CS01_03;                                         // 0x00F0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       Seq_M001_CS01_04;                                         // 0x00F8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       Seq_M001_CS01_05;                                         // 0x0100(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       Seq_M001_CS01_06;                                         // 0x0108(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       Seq_M001_CS01_07;                                         // 0x0110(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       Seq_M001_CS01_08;                                         // 0x0118(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       Seq_M001_CS01_09;                                         // 0x0120(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       Seq_M001_CS01_11;                                         // 0x0128(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       Seq_M001_CS01_12;                                         // 0x0130(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       Seq_M001_CS01_13;                                         // 0x0138(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       Seq_M001_CS01_14;                                         // 0x0140(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       Seq_M001_CS01_15;                                         // 0x0148(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       Seq_M001_CS01_16;                                         // 0x0150(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M01_T01_D01;                                              // 0x0158(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M01_T01_D02;                                              // 0x0160(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M01_T01_D03;                                              // 0x0168(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M01_T01_D04a;                                             // 0x0170(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M01_T01_D04b;                                             // 0x0178(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M01_T01_D05;                                              // 0x0180(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M01_T01_D06;                                              // 0x0188(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M01_T01_D07;                                              // 0x0190(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       Seq_M001_CS02_01;                                         // 0x0198(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       Seq_M001_CS02_02;                                         // 0x01A0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       Seq_M001_CS02_03;                                         // 0x01A8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       Seq_M001_CS02_04;                                         // 0x01B0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       Seq_M001_CS02_06;                                         // 0x01B8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       Seq_M001_CS02_07;                                         // 0x01C0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M01_T02_D01;                                              // 0x01C8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M01_T02_D02;                                              // 0x01D0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M01_T02_D03;                                              // 0x01D8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M01_T02_D04;                                              // 0x01E0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M01_T02_D05;                                              // 0x01E8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       Seq_M001_CS03_01;                                         // 0x01F0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       Seq_M001_CS03_02;                                         // 0x01F8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       Seq_M001_CS03_03;                                         // 0x0200(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       Seq_M001_CS03_04;                                         // 0x0208(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       Seq_M001_CS03_05;                                         // 0x0210(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       Seq_M001_CS03_06;                                         // 0x0218(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M01_T03_D01;                                              // 0x0220(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       Seq_M001_CS04;                                            // 0x0228(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M01_T03_D02;                                              // 0x0230(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M01_T03_D03;                                              // 0x0238(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M01_T03_D04;                                              // 0x0240(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M01_T03_D06;                                              // 0x0248(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M01_T03_D07;                                              // 0x0250(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M01_T03_D08;                                              // 0x0258(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       Seq_M001_CS03b_01;                                        // 0x0260(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       Seq_M001_CS03b_02;                                        // 0x0268(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M01_T03_D09;                                              // 0x0270(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M01_T03_D10;                                              // 0x0278(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       Seq_M001_CS05_01;                                         // 0x0280(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       Seq_M001_CS05_02;                                         // 0x0288(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       Seq_M001_CS05_03;                                         // 0x0290(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       Seq_M001_CS05_05;                                         // 0x0298(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       Seq_M001_CS05_06;                                         // 0x02A0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       Seq_M001_CS05_07;                                         // 0x02A8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       Seq_M001_CS05_08;                                         // 0x02B0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       Seq_M001_CS05_09;                                         // 0x02B8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       Seq_M001_CS05_11;                                         // 0x02C0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       Seq_M001_CS05_12;                                         // 0x02C8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M01_T04_D01;                                              // 0x02D0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M01_T04_D02;                                              // 0x02D8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M01_T04_D03;                                              // 0x02E0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M01_T04_D04;                                              // 0x02E8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M01_T04_D05;                                              // 0x02F0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M01_T04_D06;                                              // 0x02F8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M01_T04_D07;                                              // 0x0300(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M01_T04_D08;                                              // 0x0308(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M01_T04_D09;                                              // 0x0310(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M01_T04_D10;                                              // 0x0318(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       Seq_M001_CS06_01;                                         // 0x0320(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       Seq_M001_CS06_02;                                         // 0x0328(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       Seq_M001_CS06_04;                                         // 0x0330(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M02_EMPTY;                                                // 0x0338(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M02_CS01_01;                                              // 0x0340(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M02_CS01_02;                                              // 0x0348(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M02_CS01_03;                                              // 0x0350(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M02_CS01_04;                                              // 0x0358(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M02_CS01_05;                                              // 0x0360(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M02_CS01_06;                                              // 0x0368(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M02_CS01_07;                                              // 0x0370(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M02_T01_D01;                                              // 0x0378(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M02_T01_D01b;                                             // 0x0380(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M02_T01_D02;                                              // 0x0388(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M02_T01_D02b;                                             // 0x0390(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M02_T01_D02c;                                             // 0x0398(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M02_T01_D02d;                                             // 0x03A0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M02_T01_D02e;                                             // 0x03A8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M02_T01_D03;                                              // 0x03B0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M02_T01_D03b;                                             // 0x03B8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M02_T01_D04;                                              // 0x03C0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M02_T01_D05;                                              // 0x03C8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M02_T01_D05b;                                             // 0x03D0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M02_T02_D01a;                                             // 0x03D8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M02_T02_D01b;                                             // 0x03E0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M02_T02_D01c;                                             // 0x03E8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M02_T03_D01;                                              // 0x03F0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M02_CS03_01;                                              // 0x03F8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M02_CS03_01a;                                             // 0x0400(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M02_CS03_01b;                                             // 0x0408(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M02_CS03_01c;                                             // 0x0410(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M02_CS03_02;                                              // 0x0418(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M02_CS03_03;                                              // 0x0420(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M02_CS03_04;                                              // 0x0428(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M02_CS03_05;                                              // 0x0430(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M02_CS03_06;                                              // 0x0438(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M02_CS03_07;                                              // 0x0440(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M02_CS03_08;                                              // 0x0448(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M02_CS03_09;                                              // 0x0450(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M02_CS03_11;                                              // 0x0458(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M02_CS03_12;                                              // 0x0460(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M02_CS03_13;                                              // 0x0468(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M02_CS03_14;                                              // 0x0470(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M02_CS03_15;                                              // 0x0478(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M02_T03_D02;                                              // 0x0480(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M02_T03_D02b;                                             // 0x0488(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M02_T03_D02c;                                             // 0x0490(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M02_T03_D04;                                              // 0x0498(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M02_T03_D05;                                              // 0x04A0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M02_T03_D06;                                              // 0x04A8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M02_T03_D07;                                              // 0x04B0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M02_T03_D08;                                              // 0x04B8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M02_T04_D01;                                              // 0x04C0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M02_T04_D01b;                                             // 0x04C8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M02_T04_D02;                                              // 0x04D0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M02_T04_D03;                                              // 0x04D8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M02_T04_Roam01;                                           // 0x04E0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M02_T04_Roam02;                                           // 0x04E8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M03_EMPTY;                                                // 0x04F0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M03_T01_D01;                                              // 0x04F8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M03_T01_D01b;                                             // 0x0500(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M03_T01_D01c;                                             // 0x0508(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M03_T01_D01d;                                             // 0x0510(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M03_T01_D02;                                              // 0x0518(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M03_T01_D02b;                                             // 0x0520(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M03_T01_D02c;                                             // 0x0528(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M03_T01_D02d;                                             // 0x0530(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M03_T01_D02e;                                             // 0x0538(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M03_T01_D02f;                                             // 0x0540(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M03_T01_D02g;                                             // 0x0548(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M03_T01_D02h;                                             // 0x0550(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M03_T01_D02i;                                             // 0x0558(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M03_T01_D03;                                              // 0x0560(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M03_T01_D03b;                                             // 0x0568(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M03_T01_D04;                                              // 0x0570(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M03_T01_D04b;                                             // 0x0578(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M03_T01_D04c;                                             // 0x0580(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M03_T01_D05;                                              // 0x0588(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M03_CS01_01;                                              // 0x0590(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M03_CS01_02;                                              // 0x0598(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M03_CS01_03;                                              // 0x05A0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M03_CS01_04;                                              // 0x05A8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M04_EMPTY;                                                // 0x05B0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M04_T01_D01;                                              // 0x05B8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M04_T01_D01b;                                             // 0x05C0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M04_T01_D01c;                                             // 0x05C8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M04_T01_D01d;                                             // 0x05D0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M04_T01_D02;                                              // 0x05D8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M04_T01_D02b;                                             // 0x05E0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M04_T02a_D01;                                             // 0x05E8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M04_T02a_D02;                                             // 0x05F0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M04_T02a_D02b;                                            // 0x05F8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M04_T02a_D03;                                             // 0x0600(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M04_T02a_D03b;                                            // 0x0608(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M04_T02a_D03c;                                            // 0x0610(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M04_T02a_D03d;                                            // 0x0618(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M04_T02a_D04;                                             // 0x0620(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M04_T02a_D05;                                             // 0x0628(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M04_T02a_D06;                                             // 0x0630(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M04_T02a_D07;                                             // 0x0638(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M04_T02a_D08;                                             // 0x0640(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M04_T02b_D01;                                             // 0x0648(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M04_T02b_D01c;                                            // 0x0650(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M04_T02b_D02;                                             // 0x0658(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M04_T02b_D04;                                             // 0x0660(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M04_T02b_D04b;                                            // 0x0668(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M04_T02b_D05;                                             // 0x0670(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M04_T02b_D06;                                             // 0x0678(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M04_T02b_D03;                                             // 0x0680(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M04_T02b_D03_INFESTATION_ACTIVE;                          // 0x0688(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M04_T02b_D03_INFESTATION_GONE;                            // 0x0690(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M04_T02c_D01;                                             // 0x0698(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M04_T02c_D02;                                             // 0x06A0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M04_T02c_D02b;                                            // 0x06A8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M04_T02c_D02c;                                            // 0x06B0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M04_T02c_D03;                                             // 0x06B8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M04_T02c_D04;                                             // 0x06C0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M04_T02c_D04b;                                            // 0x06C8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M04_T02c_D04c;                                            // 0x06D0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M04_T02c_D04d;                                            // 0x06D8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M04_T02c_D04e;                                            // 0x06E0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M04_T02c_D04f;                                            // 0x06E8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M04_T02c_D04g;                                            // 0x06F0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M04_T02c_D05;                                             // 0x06F8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M04_T02x_D02;                                             // 0x0700(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M04_T02x_D02b;                                            // 0x0708(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M04_T02x_D02c;                                            // 0x0710(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M04_T02x_D03;                                             // 0x0718(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M04_T02x_D06;                                             // 0x0720(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M04_T02x_D09;                                             // 0x0728(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M04_T02x_D09b;                                            // 0x0730(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M04_T02x_D04;                                             // 0x0738(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M04_T02x_D07;                                             // 0x0740(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M05_Empty;                                                // 0x0748(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M05_T01_INTRO;                                            // 0x0750(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       S01_Empty;                                                // 0x0758(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       S01_T01_INTRO;                                            // 0x0760(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       S01M02_Empty;                                             // 0x0768(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       S01M02_T01_D01;                                           // 0x0770(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       S01M02_T01_D02;                                           // 0x0778(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       S01M02_T01_D03;                                           // 0x0780(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       S01M02_T01_D04;                                           // 0x0788(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       S01M02_T01_D05;                                           // 0x0790(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       S01M02_T02_D00;                                           // 0x0798(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       S01M02_T02_D01;                                           // 0x07A0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       S01M02_T02_D01b;                                          // 0x07A8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       Seq_S01M02_CS02_01;                                       // 0x07B0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       Seq_S01M02_CS02_02;                                       // 0x07B8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       Seq_S01M02_CS02_03;                                       // 0x07C0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       Seq_S01M02_CS02_04;                                       // 0x07C8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       Seq_S01M02_CS02_05;                                       // 0x07D0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       Seq_S01M02_CS02_06;                                       // 0x07D8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       S01M02_T02_pod1_2;                                        // 0x07E0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       S01M02_T02_pod1_3;                                        // 0x07E8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       S01M02_T02_pod1_fling;                                    // 0x07F0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       S01M02_T02_pod2_2;                                        // 0x07F8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       S01M02_T02_pod2_3;                                        // 0x0800(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       S01M02_T02_pod2_fling;                                    // 0x0808(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       S01M02_T02_pod3_2;                                        // 0x0810(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       S01M02_T02_pod3_3;                                        // 0x0818(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       S01M02_T02_pod3_fling;                                    // 0x0820(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       S01M02_T02_pod4_2;                                        // 0x0828(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       S01M02_T02_pod4_3;                                        // 0x0830(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       S01M02_T02_pod4_fling;                                    // 0x0838(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       S01M02_T02_pod5_2;                                        // 0x0840(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       S01M02_T02_pod5_3;                                        // 0x0848(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       S01M02_T02_pod5_fling;                                    // 0x0850(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       S01M02_T02_pod6_2;                                        // 0x0858(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       S01M02_T02_pod6_3;                                        // 0x0860(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       S01M02_T02_pod6_fling;                                    // 0x0868(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       S01M02_T02_pod7_2;                                        // 0x0870(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       S01M02_T02_pod7_3;                                        // 0x0878(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       S01M02_T02_pod7_fling;                                    // 0x0880(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       S01M02_T02_D03;                                           // 0x0888(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       S01M02_T02_D04;                                           // 0x0890(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       S01M02_T02_D04b;                                          // 0x0898(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       S01M02_T03_D01;                                           // 0x08A0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       S01M02_T03_D02;                                           // 0x08A8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       S01M02_T03_D03;                                           // 0x08B0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       S01M02_T03_D04;                                           // 0x08B8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       S01M04_T01_D01;                                           // 0x08C0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       Seq_S01M04_T01_CS01_01;                                   // 0x08C8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       S01M04_T02_D01;                                           // 0x08D0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       S01M04_T02_D02;                                           // 0x08D8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       S01M04_T03_D01;                                           // 0x08E0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       S01L02_GC_EMPTY;                                          // 0x08E8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       S01L02_GC_D01;                                            // 0x08F0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       S01L02_GC_D02;                                            // 0x08F8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       S01L02_GC_D03;                                            // 0x0900(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       S01L03_GC_EMPTY;                                          // 0x0908(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       S01L03_GC_D01;                                            // 0x0910(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       S01L03_GC_D02;                                            // 0x0918(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       S01L03_GC_D03;                                            // 0x0920(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       S01L03_GC_D04;                                            // 0x0928(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       S01L03_GC_D05;                                            // 0x0930(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       S01L03_GC_D06;                                            // 0x0938(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       S01L04_GC_EMPTY;                                          // 0x0940(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       S01L04_GC_D01;                                            // 0x0948(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       S01L04_GC_D02;                                            // 0x0950(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       S01L04_GC_D03;                                            // 0x0958(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       S01L04_GC_D04;                                            // 0x0960(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       S01L04_GC_D05;                                            // 0x0968(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       S01L04_GC_D06;                                            // 0x0970(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       S01L04_GC_D07;                                            // 0x0978(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       S01L04_GC_D08;                                            // 0x0980(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       S01L04_GC_D09;                                            // 0x0988(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       WE_S01L03_GC_EMPTY;                                       // 0x0990(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       WE_S01L03_GC_Intro_2;                                     // 0x0998(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       WE_S01L03_GC_Intro_3;                                     // 0x09A0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       WE_S01L03_GC_Intro_4;                                     // 0x09A8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       WE_S01L03_GC_fail;                                        // 0x09B0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       WE_S01L03_GC_fail_3;                                      // 0x09B8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       WE_S01L03_GC_success;                                     // 0x09C0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       WE_S01L04_GC_EMPTY;                                       // 0x09C8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       WE_S01L04_GC_Intro;                                       // 0x09D0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       WE_S01L04_GC_FirstHit_2;                                  // 0x09D8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       WE_S01L04_GC_FirstHit_3;                                  // 0x09E0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       WE_S01L04_GC_FirstHit_4;                                  // 0x09E8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       WE_S01L04_GC_FirstExplosion;                              // 0x09F0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       WE_S01L04_GC_KilledFlying;                                // 0x09F8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       WE_S01L04_GC_ReachedCave;                                 // 0x0A00(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       WE_S01L04_GC_CaveOpens;                                   // 0x0A08(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       WE_S01L04_GC_KilledAllDrones;                             // 0x0A10(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_TRADER_1_DLG_2;                                   // 0x0A18(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_TRADER_1_DLG_2_SHOT_TRADER;                       // 0x0A20(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_TRADER_1_DLG_2_HELPED;                            // 0x0A28(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_TRADER_1_DLG_2_DIDNT_HELP;                        // 0x0A30(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_TRADER_1_DLG_3;                                   // 0x0A38(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_TRADER_1_DLG_4;                                   // 0x0A40(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_TRADER_1_QUEST_1_FINISHED;                        // 0x0A48(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_TRADER_1_QUEST_2_FINISHED;                        // 0x0A50(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_TRADER_1_QUEST_3_FINISHED;                        // 0x0A58(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_TRADER_1_QUEST_4_FINISHED;                        // 0x0A60(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_TRADER_1_QUEST_5_FINISHED;                        // 0x0A68(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_TRADER_1_QUEST_6_FINISHED;                        // 0x0A70(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_TRADER_1_QUEST_7_FINISHED;                        // 0x0A78(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_TRADER_1_QUEST_8_FINISHED;                        // 0x0A80(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_TRADER_1_QUEST_9_FINISHED;                        // 0x0A88(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_TRADER_1_QUEST_10_FINISHED;                       // 0x0A90(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_TRADER_ENCOUNTER_2;                               // 0x0A98(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_TRADER_ENCOUNTER_3;                               // 0x0AA0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_TRADER_ENCOUNTER_4;                               // 0x0AA8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_TRADER_ENCOUNTER_5;                               // 0x0AB0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_TRADER_ENCOUNTER_6;                               // 0x0AB8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_TRADER_SUMMONED_2;                                // 0x0AC0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_TRADER_SUMMONED_3;                                // 0x0AC8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_TRADER_SUMMONED_4;                                // 0x0AD0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_TRADER_SUMMONED_5;                                // 0x0AD8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_TRADER_SUMMONED_6;                                // 0x0AE0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SCIENTIST_1_2;                                    // 0x0AE8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SCIENTIST_2_2;                                    // 0x0AF0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SCIENTIST_3_2;                                    // 0x0AF8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SCIENTIST_4_2;                                    // 0x0B00(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SCIENTIST_7_2;                                    // 0x0B08(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SCIENTIST_9_2;                                    // 0x0B10(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SCIENTIST_10_2;                                   // 0x0B18(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SCIENTIST_11_2;                                   // 0x0B20(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SCIENTIST_12_2;                                   // 0x0B28(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SCIENTIST_SUMMONED_2;                             // 0x0B30(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SCIENTIST_SUMMONED_3;                             // 0x0B38(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SCIENTIST_SUMMONED_4;                             // 0x0B40(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SCIENTIST_SUMMONED_5;                             // 0x0B48(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SCIENTIST_SUMMONED_6;                             // 0x0B50(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_BOUNTYHUNTER_1_2;                                 // 0x0B58(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_BOUNTYHUNTER_1_3;                                 // 0x0B60(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_BOUNTYHUNTER_1_4;                                 // 0x0B68(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_BOUNTYHUNTER_2_2;                                 // 0x0B70(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_BOUNTYHUNTER_2_3;                                 // 0x0B78(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_BOUNTYHUNTER_2_4;                                 // 0x0B80(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_BOUNTYHUNTER_3_2;                                 // 0x0B88(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_BOUNTYHUNTER_3_3;                                 // 0x0B90(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_BOUNTYHUNTER_3_2_TELEPORTED;                      // 0x0B98(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_BOUNTYHUNTER_3_2_FOUND;                           // 0x0BA0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_BOUNTYHUNTER_3_4;                                 // 0x0BA8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_BOUNTYHUNTER_4_2;                                 // 0x0BB0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_BOUNTYHUNTER_GEN_ENCOUNTER_1_2;                   // 0x0BB8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_BOUNTYHUNTER_GEN_ENCOUNTER_1_3;                   // 0x0BC0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_BOUNTYHUNTER_GEN_ENCOUNTER_1_4;                   // 0x0BC8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_BOUNTYHUNTER_GEN_ENCOUNTER_1_5;                   // 0x0BD0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_BOUNTYHUNTER_GEN_ENCOUNTER_1_6;                   // 0x0BD8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_BOUNTYHUNTER_GEN_ENCOUNTER_1_7;                   // 0x0BE0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_BOUNTYHUNTER_GEN_ENCOUNTER_1_8;                   // 0x0BE8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_BOUNTYHUNTER_GEN_ENCOUNTER_1_9;                   // 0x0BF0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_BOUNTYHUNTER_GEN_ENCOUNTER_1_10;                  // 0x0BF8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_BOUNTYHUNTER_GEN_ENCOUNTER_1_11;                  // 0x0C00(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_BOUNTYHUNTER_GEN_KILLED_2;                        // 0x0C08(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_BOUNTYHUNTER_GEN_KILLED_3;                        // 0x0C10(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_BOUNTYHUNTER_GEN_KILLED_4;                        // 0x0C18(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_BOUNTYHUNTER_GEN_KILLED_5;                        // 0x0C20(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_BOUNTYHUNTER_GEN_KILLED_6;                        // 0x0C28(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_BOUNTYHUNTER_GEN_KILLED_7;                        // 0x0C30(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_BOUNTYHUNTER_GEN_KILLED_8;                        // 0x0C38(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_BOUNTYHUNTER_GEN_KILLED_9;                        // 0x0C40(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_BOUNTYHUNTER_GEN_KILLED_10;                       // 0x0C48(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_BOUNTYHUNTER_GEN_KILLED_11;                       // 0x0C50(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_BOUNTYHUNTER_GEN_REWARD_2;                        // 0x0C58(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_BOUNTYHUNTER_GEN_REWARD_3;                        // 0x0C60(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_BOUNTYHUNTER_GEN_REWARD_4;                        // 0x0C68(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_BOUNTYHUNTER_GEN_REWARD_5;                        // 0x0C70(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_BOUNTYHUNTER_GEN_REWARD_6;                        // 0x0C78(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_BOUNTYHUNTER_GEN_REWARD_7;                        // 0x0C80(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_BOUNTYHUNTER_GEN_REWARD_8;                        // 0x0C88(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_BOUNTYHUNTER_GEN_REWARD_9;                        // 0x0C90(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_BOUNTYHUNTER_GEN_REWARD_10;                       // 0x0C98(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_BOUNTYHUNTER_GEN_REWARD_11;                       // 0x0CA0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_BOUNTYHUNTER_GEN_TASK_2;                          // 0x0CA8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_BOUNTYHUNTER_GEN_TASK_3;                          // 0x0CB0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_BOUNTYHUNTER_GEN_TASK_4;                          // 0x0CB8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_BOUNTYHUNTER_GEN_TASK_5;                          // 0x0CC0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_BOUNTYHUNTER_GEN_TASK_6;                          // 0x0CC8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_BOUNTYHUNTER_GEN_TASK_7;                          // 0x0CD0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_BOUNTYHUNTER_GEN_TASK_8;                          // 0x0CD8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_BOUNTYHUNTER_GEN_TASK_9;                          // 0x0CE0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_BOUNTYHUNTER_GEN_TASK_10;                         // 0x0CE8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_BOUNTYHUNTER_GEN_TASK_11;                         // 0x0CF0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_BOUNTYHUNTER_GEN_CRIMINAL_2;                      // 0x0CF8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_BOUNTYHUNTER_GEN_CRIMINAL_3;                      // 0x0D00(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_BOUNTYHUNTER_GEN_CRIMINAL_4;                      // 0x0D08(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_BOUNTYHUNTER_GEN_CRIMINAL_5;                      // 0x0D10(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_BOUNTYHUNTER_GEN_CRIMINAL_6;                      // 0x0D18(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_BOUNTYHUNTER_GEN_CRIMINAL_7;                      // 0x0D20(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_BOUNTYHUNTER_GEN_CRIMINAL_8;                      // 0x0D28(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_BOUNTYHUNTER_GEN_CRIMINAL_9;                      // 0x0D30(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_BOUNTYHUNTER_GEN_CRIMINAL_10;                     // 0x0D38(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_BOUNTYHUNTER_GEN_CRIMINAL_11;                     // 0x0D40(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_BOUNTYHUNTER_GEN_ACCEPT_2;                        // 0x0D48(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_BOUNTYHUNTER_GEN_ACCEPT_3;                        // 0x0D50(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_BOUNTYHUNTER_GEN_ACCEPT_4;                        // 0x0D58(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_BOUNTYHUNTER_GEN_ACCEPT_5;                        // 0x0D60(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_BOUNTYHUNTER_GEN_ACCEPT_6;                        // 0x0D68(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_BOUNTYHUNTER_GEN_ACCEPT_7;                        // 0x0D70(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_BOUNTYHUNTER_GEN_ACCEPT_8;                        // 0x0D78(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_BOUNTYHUNTER_GEN_ACCEPT_9;                        // 0x0D80(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_BOUNTYHUNTER_GEN_ACCEPT_10;                       // 0x0D88(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_BOUNTYHUNTER_GEN_ACCEPT_11;                       // 0x0D90(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SEDUCER_1_2;                                      // 0x0D98(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SEDUCER_1_3;                                      // 0x0DA0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SEDUCER_1_4;                                      // 0x0DA8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SEDUCER_1_FORCEFIELD_DOWN;                        // 0x0DB0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SEDUCER_1_5;                                      // 0x0DB8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SEDUCER_1_6;                                      // 0x0DC0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SEDUCER_2_2;                                      // 0x0DC8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SEDUCER_2_3;                                      // 0x0DD0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SEDUCER_2_2_AGAIN;                                // 0x0DD8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SEDUCER_2_4;                                      // 0x0DE0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SEDUCER_2_3_SUCCESS;                              // 0x0DE8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SEDUCER_2_3_FAILED;                               // 0x0DF0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SEDUCER_2_3_UNITS_LEFT;                           // 0x0DF8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SEDUCER_2_3_NEXT;                                 // 0x0E00(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SEDUCER_2_5;                                      // 0x0E08(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SEDUCER_2_4_SUCCESS;                              // 0x0E10(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SEDUCER_2_4_FAILED;                               // 0x0E18(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SEDUCER_2_4_UNITS_LEFT;                           // 0x0E20(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SEDUCER_2_4_NEXT;                                 // 0x0E28(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SEDUCER_2_6;                                      // 0x0E30(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SEDUCER_2_5_SUCCESS;                              // 0x0E38(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SEDUCER_2_5_FAILED;                               // 0x0E40(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SEDUCER_2_5_UNITS_LEFT;                           // 0x0E48(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SEDUCER_2_7;                                      // 0x0E50(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SEDUCER_2_7_SUCCESS_ALL;                          // 0x0E58(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SEDUCER_2_7_SUCCESS_SOME;                         // 0x0E60(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SEDUCER_2_7_SUCCESS_JUMP;                         // 0x0E68(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SEDUCER_2_7_FAILED;                               // 0x0E70(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SEDUCER_3_2;                                      // 0x0E78(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SEDUCER_3_3;                                      // 0x0E80(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SEDUCER_3_4;                                      // 0x0E88(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SEDUCER_3_5;                                      // 0x0E90(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SEDUCER_3_6;                                      // 0x0E98(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SEDUCER_4_2;                                      // 0x0EA0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SEDUCER_4_3;                                      // 0x0EA8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SEDUCER_4_2_AGAIN;                                // 0x0EB0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SEDUCER_4_4;                                      // 0x0EB8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SEDUCER_4_5;                                      // 0x0EC0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SEDUCER_4_6;                                      // 0x0EC8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SEDUCER_4_7;                                      // 0x0ED0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SEDUCER_4_8;                                      // 0x0ED8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SEDUCER_4_CHIEF_KILLED;                           // 0x0EE0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SEDUCER_4_OUTLAWS_LEFT;                           // 0x0EE8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SEDUCER_4_ALL_OUTLAWS_DEAD;                       // 0x0EF0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SEDUCER_4_SPOTTED;                                // 0x0EF8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SEDUCER_5_2;                                      // 0x0F00(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SEDUCER_5_3;                                      // 0x0F08(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SEDUCER_5_2_AGAIN;                                // 0x0F10(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SEDUCER_5_4;                                      // 0x0F18(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SEDUCER_5_5;                                      // 0x0F20(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SEDUCER_5_6;                                      // 0x0F28(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SEDUCER_5_ALL_DESTROYED;                          // 0x0F30(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SEDUCER_SUMMONDED_2;                              // 0x0F38(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SEDUCER_SUMMONDED_3;                              // 0x0F40(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SEDUCER_SUMMONDED_4;                              // 0x0F48(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SEDUCER_SUMMONDED_5;                              // 0x0F50(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SEDUCER_SUMMONDED_6;                              // 0x0F58(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SEDUCER_SUMMONDED_7;                              // 0x0F60(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SEDUCER_SUMMONDED_8;                              // 0x0F68(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SEDUCER_IDLE_2;                                   // 0x0F70(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SEDUCER_IDLE_3;                                   // 0x0F78(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SEDUCER_IDLE_4;                                   // 0x0F80(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SEDUCER_IDLE_5;                                   // 0x0F88(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SEDUCER_IDLE_6;                                   // 0x0F90(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SEDUCER_IDLE_7;                                   // 0x0F98(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SEDUCER_IDLE_8;                                   // 0x0FA0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SEDUCER_FIGHT_2;                                  // 0x0FA8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SEDUCER_FIGHT_3;                                  // 0x0FB0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SEDUCER_FIGHT_4;                                  // 0x0FB8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SEDUCER_FIGHT_5;                                  // 0x0FC0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SEDUCER_FIGHT_6;                                  // 0x0FC8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SEDUCER_FIGHT_7;                                  // 0x0FD0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SEDUCER_FIGHT_8;                                  // 0x0FD8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SEDUCER_KILL_2;                                   // 0x0FE0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SEDUCER_KILL_3;                                   // 0x0FE8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SEDUCER_KILL_4;                                   // 0x0FF0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SEDUCER_KILL_5;                                   // 0x0FF8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SEDUCER_KILL_6;                                   // 0x1000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SEDUCER_KILL_7;                                   // 0x1008(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SEDUCER_KILL_8;                                   // 0x1010(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SEDUCER_FLEE_2;                                   // 0x1018(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SEDUCER_FLEE_3;                                   // 0x1020(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SEDUCER_FLEE_4;                                   // 0x1028(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SEDUCER_FLEE_5;                                   // 0x1030(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SEDUCER_FLEE_6;                                   // 0x1038(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SEDUCER_FLEE_7;                                   // 0x1040(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SEDUCER_FLEE_8;                                   // 0x1048(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SHIFTER_1_2;                                      // 0x1050(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SHIFTER_1_3;                                      // 0x1058(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SHIFTER_1_4;                                      // 0x1060(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SHIFTER_2_2;                                      // 0x1068(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SHIFTER_2_1_AGAIN;                                // 0x1070(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SHIFTER_2_TOO_FAST_2;                             // 0x1078(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SHIFTER_2_TOO_FAST_3;                             // 0x1080(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SHIFTER_2_TOO_FAST_4;                             // 0x1088(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SHIFTER_2_4;                                      // 0x1090(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SHIFTER_2_5;                                      // 0x1098(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SHIFTER_2_4_AGAIN;                                // 0x10A0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SHIFTER_2_6;                                      // 0x10A8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SHIFTER_2_7;                                      // 0x10B0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SHIFTER_2_8;                                      // 0x10B8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SHIFTER_2_7_AGAIN;                                // 0x10C0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SHIFTER_2_9;                                      // 0x10C8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SHIFTER_2_10;                                     // 0x10D0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SHIFTER_2_11;                                     // 0x10D8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SHIFTER_2_12;                                     // 0x10E0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SHIFTER_3_2;                                      // 0x10E8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SHIFTER_3_3;                                      // 0x10F0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SHIFTER_3_4;                                      // 0x10F8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SHIFTER_4_2;                                      // 0x1100(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SHIFTER_4_1_AGAIN;                                // 0x1108(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SHIFTER_4_DRONE_1_CLOSE;                          // 0x1110(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SHIFTER_4_DRONE_1_ACTIVATING;                     // 0x1118(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SHIFTER_4_DRONE_1_ACTIVATED;                      // 0x1120(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SHIFTER_4_DRONE_2_CLOSE;                          // 0x1128(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SHIFTER_4_DRONE_3_ACTIVATING;                     // 0x1130(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SHIFTER_4_DRONE_4_ACTIVATED;                      // 0x1138(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SHIFTER_5_2;                                      // 0x1140(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SHIFTER_5_3;                                      // 0x1148(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SHIFTER_6_2;                                      // 0x1150(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SHIFTER_6_3;                                      // 0x1158(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SHIFTER_7_2;                                      // 0x1160(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SHIFTER_7_1_AGAIN;                                // 0x1168(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_NEAR_ENERGY_CRYSTAL;                               // 0x1170(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_DESTROYED_ENERGY_CRYSTAL;                          // 0x1178(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SHIFTER_7_DRONE_1_ACTIVATED;                      // 0x1180(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SHIFTER_7_DRONE_2_ACTIVATION;                     // 0x1188(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SHIFTER_7_OKKAR_INCOMING;                         // 0x1190(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SHIFTER_7_DRONE_3_ACTIVATION;                     // 0x1198(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SHIFTER_7_DRONE_4_ACTIVATED;                      // 0x11A0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SHIFTER_7_DRONE_5_ACTIVATED;                      // 0x11A8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SHIFTER_8_2;                                      // 0x11B0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SHIFTER_8_3;                                      // 0x11B8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SHIFTER_9_2;                                      // 0x11C0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SHIFTER_10_2;                                     // 0x11C8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SHIFTER_10_3;                                     // 0x11D0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SHIFTER_10_4;                                     // 0x11D8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SHIFTER_10_AFTER_EXPLOSION;                       // 0x11E0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SHIFTER_11_2;                                     // 0x11E8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SHIFTER_11_3;                                     // 0x11F0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SHIFTER_11_ATTACK;                                // 0x11F8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SHIFTER_11_DEAD;                                  // 0x1200(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SHIFTER_11_JUMPING;                               // 0x1208(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SCIENTIST_1_OPEN_SHOP;                            // 0x1210(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SCIENTIST_ENCOUNTER_2;                            // 0x1218(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SCIENTIST_ENCOUNTER_3;                            // 0x1220(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SCIENTIST_ENCOUNTER_4;                            // 0x1228(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SCIENTIST_ENCOUNTER_5;                            // 0x1230(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SCIENTIST_ENCOUNTER_6;                            // 0x1238(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SHIFTER_MININGCORP_ALREADY_HOSTILE;               // 0x1240(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_SHIFTER_MININGCORP_TURNED_HOSTILE;                // 0x1248(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_TRADER_DOWN_PAYMENT_2;                            // 0x1250(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_TRADER_DOWN_PAYMENT_3;                            // 0x1258(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_TRADER_DOWN_PAYMENT_4;                            // 0x1260(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_TRADER_DOWN_PAYMENT_5;                            // 0x1268(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_TRADER_DOWN_PAYMENT_6;                            // 0x1270(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_HIVE_1_DLG_2;                                     // 0x1278(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_HIVE_1_DLG_3;                                     // 0x1280(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_HIVE_1_DLG_4;                                     // 0x1288(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_HIVE_1_DLG_5;                                     // 0x1290(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_HIVE_1_DLG_6;                                     // 0x1298(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_HIVE_2_DLG_2;                                     // 0x12A0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_HIVE_2_DLG_3;                                     // 0x12A8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_HIVE_2_DLG_4;                                     // 0x12B0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_HIVE_2_DLG_5;                                     // 0x12B8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_HIVE_2_DLG_6;                                     // 0x12C0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_HIVE_2_DLG_BETWEEN_4_AND_6;                       // 0x12C8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_GEN_BOUNTY_2;                                     // 0x12D0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_GEN_BOUNTY_3;                                     // 0x12D8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_GEN_BOUNTY_4;                                     // 0x12E0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_GEN_DELIVERY_2;                                   // 0x12E8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_GEN_DELIVERY_3;                                   // 0x12F0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_GEN_DELIVERY_4;                                   // 0x12F8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_GEN_DELIVERY_COORDINATES_2;                       // 0x1300(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_GEN_DELIVERY_COORDINATES_3;                       // 0x1308(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_GEN_DELIVERY_COORDINATES_4;                       // 0x1310(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_GEN_LOCATE_2;                                     // 0x1318(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_GEN_LOCATE_3;                                     // 0x1320(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_GEN_LOCATE_4;                                     // 0x1328(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_GEN_MINEFIELD_2;                                  // 0x1330(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_GEN_MINEFIELD_3;                                  // 0x1338(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_GEN_MINEFIELD_4;                                  // 0x1340(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_GEN_REPAIR_2;                                     // 0x1348(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_GEN_REPAIR_3;                                     // 0x1350(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_GEN_REPAIR_4;                                     // 0x1358(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_GEN_REPAIR_REWARD_2;                              // 0x1360(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_GEN_REPAIR_REWARD_3;                              // 0x1368(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_GEN_REPAIR_REWARD_4;                              // 0x1370(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_GEN_RESCUE_2;                                     // 0x1378(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_GEN_RESCUE_3;                                     // 0x1380(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_GEN_RESCUE_4;                                     // 0x1388(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_GEN_KILL_OUTLAWS_2;                               // 0x1390(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_GEN_KILL_OUTLAWS_3;                               // 0x1398(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_GEN_KILL_OUTLAWS_4;                               // 0x13A0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_GEN_REWARD_2;                                     // 0x13A8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_GEN_REWARD_3;                                     // 0x13B0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_GEN_REWARD_4;                                     // 0x13B8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_DEBRIS_FIELD;                                      // 0x13C0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_OUTLAW_BASE;                                       // 0x13C8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_MINING_FACILITY;                                   // 0x13D0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_SHIP_WRECK;                                        // 0x13D8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_STATION_WRECK;                                     // 0x13E0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_OKKAR_TALK;                                        // 0x13E8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_OUTLAW_TALK;                                       // 0x13F0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_MINING_TALK;                                       // 0x13F8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_COL_WARSHIPS_FIRST;                                // 0x1400(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_GAME_WORLD;                                        // 0x1408(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_ZONE;                                              // 0x1410(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_OKKAR_HOMEWORLD;                                   // 0x1418(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_ANCIENT_STRUCTURE;                                 // 0x1420(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_ANCIENT_STRUCTURE_INSIDE_FIRST;                    // 0x1428(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_ANCIENT_KILLED_FIRST;                              // 0x1430(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_ANCIENT_STRUCTURE_INSIDE;                          // 0x1438(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_ANCIENT_TELEPORTER_USED;                           // 0x1440(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_ANCIENT_ENCOUNTER;                                 // 0x1448(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_COLONIAL_STATION_WRECK;                            // 0x1450(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_JUMPGATE;                                          // 0x1458(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_BLACK_HOLE;                                        // 0x1460(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_PLASMA_FIELD;                                      // 0x1468(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_MINING_ASTEROID;                                   // 0x1470(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_SERVICE_STATION;                                   // 0x1478(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_ELITE_NPC;                                         // 0x1480(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_COL_FREIGHTER;                                     // 0x1488(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_OKKAR_INTERCEPTORS;                                // 0x1490(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_GREY_GOO;                                          // 0x1498(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_COL_WARSHIPS_2;                                    // 0x14A0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_COL_WARSHIPS_3;                                    // 0x14A8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_COL_WARSHIPS_4;                                    // 0x14B0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_COL_WARSHIPS_5;                                    // 0x14B8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_COL_WARSHIPS_6;                                    // 0x14C0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_OKKAR_FRIGATE;                                     // 0x14C8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_OKKAR_GUNSHIP;                                     // 0x14D0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_OUTLAW_DRONE_CARRIER;                              // 0x14D8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_OUTLAW_SNIPER_FIRST;                               // 0x14E0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_OUTLAW_SNIPER_SPOTTED;                             // 0x14E8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_OUTLAW_SNIPER_KILLED;                              // 0x14F0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_CLOAK;                                             // 0x14F8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_ENERGY_DISCHARGER;                                 // 0x1500(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_HULL_ENHANCER;                                     // 0x1508(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_MAINFRAME_OVERRIDE;                                // 0x1510(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_TIME_EXTENDER;                                     // 0x1518(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_WEAPON_OVERDRIVE;                                  // 0x1520(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_ARC9000_FINDING;                                   // 0x1528(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_ARC9000_SHOOTING;                                  // 0x1530(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_DRONE_DEPLOYED;                                    // 0x1538(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_DRONE_LIMIT_REACHED;                               // 0x1540(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_LEAVING_LOCATION_DESTROYED;                        // 0x1548(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_DEVICE_COOLDOWN_2;                                 // 0x1550(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_DEVICE_COOLDOWN_3;                                 // 0x1558(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_DEVICE_COOLDOWN_4;                                 // 0x1560(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_DEVICE_COOLDOWN_5;                                 // 0x1568(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_DEVICE_COOLDOWN_6;                                 // 0x1570(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_COMM_HUB;                                          // 0x1578(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_MINING_FACILITY_ATTACKED;                          // 0x1580(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_DYING_BY_WARSHIP;                                  // 0x1588(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_DYING_BY_GUNSHIP;                                  // 0x1590(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_DYING_BY_FRIGATE;                                  // 0x1598(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_DYING_BY_GREYGOO;                                  // 0x15A0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_DYING_BY_MINE;                                     // 0x15A8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_DYING_BY_CRASHING;                                 // 0x15B0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_DYING_BY_LIFESUPPORT;                              // 0x15B8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_SHIP_PART_DAMAGE;                                  // 0x15C0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_JUMPING_SUPPRESSED;                                // 0x15C8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_DNA_IN_LOCATION;                                   // 0x15D0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_CLONE_SPOTTED_FIRST_TIME;                          // 0x15D8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_CLONE_FIRST_ENCOUNTER;                             // 0x15E0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_CLONE_KILLED_2;                                    // 0x15E8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_CLONE_KILLED_3;                                    // 0x15F0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_CLONE_KILLED_4;                                    // 0x15F8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_CLONE_KILLED_5;                                    // 0x1600(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_CLONE_KILLED_6;                                    // 0x1608(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_CLONE_KILLED_7;                                    // 0x1610(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_CLONE_KILLED_8;                                    // 0x1618(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_CLONE_KILLED_9;                                    // 0x1620(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_CLONE_KILLED_10;                                   // 0x1628(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_CLONE_KILLED_11;                                   // 0x1630(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_CLONE_KILLED_LAST;                                 // 0x1638(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_CLONE_HOSTILE_ATTACK_2;                            // 0x1640(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_CLONE_HOSTILE_ATTACK_3;                            // 0x1648(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_CLONE_HOSTILE_ATTACK_4;                            // 0x1650(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_CLONE_HOSTILE_ATTACK_5;                            // 0x1658(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_CLONE_HOSTILE_ATTACK_6;                            // 0x1660(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_CLONE_HOSTILE_ATTACK_7;                            // 0x1668(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_CLONE_HOSTILE_ATTACK_8;                            // 0x1670(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_CLONE_HOSTILE_ATTACK_9;                            // 0x1678(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_CLONE_HOSTILE_ATTACK_10;                           // 0x1680(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_CLONE_HOSTILE_ATTACK_11;                           // 0x1688(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_CLONE_HOSTILE_ATTACK_12;                           // 0x1690(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_CLONE_HOSTILE_ATTACK_13;                           // 0x1698(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_CLONE_HOSTILE_ATTACK_14;                           // 0x16A0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_CLONE_HOSTILE_ATTACK_15;                           // 0x16A8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_CLONE_HOSTILE_ATTACK_LAST;                         // 0x16B0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_LIFESUPPORT_2;                                     // 0x16B8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_LIFESUPPORT_3;                                     // 0x16C0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_LIFESUPPORT_4;                                     // 0x16C8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_LIFESUPPORT_5;                                     // 0x16D0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_LIFESUPPORT_6;                                     // 0x16D8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_LIFESUPPORT_7;                                     // 0x16E0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_LIFESUPPORT_8;                                     // 0x16E8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_AFTER_FIGHTING_AND_SURVIVING_2;                    // 0x16F0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_AFTER_FIGHTING_AND_SURVIVING_3;                    // 0x16F8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_AFTER_FIGHTING_AND_SURVIVING_4;                    // 0x1700(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_AFTER_FIGHTING_AND_SURVIVING_5;                    // 0x1708(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_AFTER_FIGHTING_AND_SURVIVING_6;                    // 0x1710(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_AFTER_FIGHTING_AND_SURVIVING_7;                    // 0x1718(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_AFTER_FIGHTING_AND_SURVIVING_8;                    // 0x1720(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_AFTER_FIGHTING_AND_SURVIVING_9;                    // 0x1728(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_AFTER_FIGHTING_AND_SURVIVING_10;                   // 0x1730(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_AFTER_FIGHTING_AND_SURVIVING_11;                   // 0x1738(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_DURING_A_FIGHT_2;                                  // 0x1740(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_DURING_A_FIGHT_3;                                  // 0x1748(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_DURING_A_FIGHT_4;                                  // 0x1750(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_DURING_A_FIGHT_5;                                  // 0x1758(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_DURING_A_FIGHT_6;                                  // 0x1760(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_DURING_A_FIGHT_7;                                  // 0x1768(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_DURING_A_FIGHT_8;                                  // 0x1770(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_DURING_A_FIGHT_9;                                  // 0x1778(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_DURING_A_FIGHT_10;                                 // 0x1780(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_DURING_A_FIGHT_11;                                 // 0x1788(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_DURING_A_FIGHT_12;                                 // 0x1790(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_DURING_A_FIGHT_13;                                 // 0x1798(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_DURING_A_FIGHT_14;                                 // 0x17A0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_DURING_A_FIGHT_15;                                 // 0x17A8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_DURING_A_FIGHT_16;                                 // 0x17B0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_DURING_A_FIGHT_17;                                 // 0x17B8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_DURING_A_FIGHT_18;                                 // 0x17C0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_DURING_A_FIGHT_19;                                 // 0x17C8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_DURING_A_FIGHT_20;                                 // 0x17D0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_KILLING_LAST_ENEMY_2;                              // 0x17D8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_KILLING_LAST_ENEMY_3;                              // 0x17E0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_KILLING_LAST_ENEMY_4;                              // 0x17E8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_KILLING_LAST_ENEMY_5;                              // 0x17F0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_KILLING_LAST_ENEMY_6;                              // 0x17F8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_KILLING_LAST_ENEMY_7;                              // 0x1800(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_KILLING_LAST_ENEMY_8;                              // 0x1808(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_KILLING_LAST_ENEMY_9;                              // 0x1810(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_KILLING_LAST_ENEMY_10;                             // 0x1818(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_KILLING_LAST_ENEMY_11;                             // 0x1820(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_KILLING_LAST_ENEMY_12;                             // 0x1828(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_KILLING_LAST_ENEMY_13;                             // 0x1830(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_KILLING_LAST_ENEMY_14;                             // 0x1838(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_KILLING_LAST_ENEMY_15;                             // 0x1840(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_KILLING_LAST_ENEMY_16;                             // 0x1848(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_KILLING_NPC_2;                                     // 0x1850(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_KILLING_NPC_3;                                     // 0x1858(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_KILLING_NPC_4;                                     // 0x1860(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_KILLING_NPC_5;                                     // 0x1868(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_KILLING_NPC_6;                                     // 0x1870(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_KILLING_NPC_7;                                     // 0x1878(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_KILLING_NPC_8;                                     // 0x1880(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_KILLING_NPC_9;                                     // 0x1888(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_KILLING_NPC_10;                                    // 0x1890(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_KILLING_NPC_11;                                    // 0x1898(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_KILLING_NPC_12;                                    // 0x18A0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_KILLING_NPC_13;                                    // 0x18A8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_KILLING_NPC_14;                                    // 0x18B0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_KILLING_NPC_15;                                    // 0x18B8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_KILLING_NPC_16;                                    // 0x18C0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_KILLING_NPC_17;                                    // 0x18C8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_KILLING_NPC_18;                                    // 0x18D0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_KILLING_NPC_19;                                    // 0x18D8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_KILLING_NPC_20;                                    // 0x18E0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_KILLING_NPC_21;                                    // 0x18E8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_LOSING_HEALTH_2;                                   // 0x18F0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_LOSING_HEALTH_3;                                   // 0x18F8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_LOSING_HEALTH_4;                                   // 0x1900(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_LOSING_HEALTH_5;                                   // 0x1908(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_LOSING_HEALTH_6;                                   // 0x1910(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_LOSING_HEALTH_7;                                   // 0x1918(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_LOSING_HEALTH_8;                                   // 0x1920(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_LOSING_HEALTH_9;                                   // 0x1928(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_LOSING_HEALTH_10;                                  // 0x1930(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_LOSING_HEALTH_11;                                  // 0x1938(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_LOSING_HEALTH_12;                                  // 0x1940(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_LOSING_HEALTH_13;                                  // 0x1948(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_LOSING_HEALTH_14;                                  // 0x1950(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_LOSING_HEALTH_15;                                  // 0x1958(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_LOSING_HEALTH_16;                                  // 0x1960(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_LOSING_HEALTH_17;                                  // 0x1968(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_LOSING_HEALTH_18;                                  // 0x1970(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_LOSING_HEALTH_19;                                  // 0x1978(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_LOSING_HEALTH_20;                                  // 0x1980(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_LOSING_HEALTH_21;                                  // 0x1988(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_GUNSHIP_KILLED_2;                                  // 0x1990(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_GUNSHIP_KILLED_3;                                  // 0x1998(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_GUNSHIP_KILLED_4;                                  // 0x19A0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_GUNSHIP_KILLED_5;                                  // 0x19A8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_GUNSHIP_KILLED_6;                                  // 0x19B0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_FRIGATE_KILLED_2;                                  // 0x19B8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_FRIGATE_KILLED_3;                                  // 0x19C0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_FRIGATE_KILLED_4;                                  // 0x19C8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_FRIGATE_KILLED_5;                                  // 0x19D0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_FRIGATE_KILLED_6;                                  // 0x19D8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_HAZARD_CLOUDS_FIRST;                               // 0x19E0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_HAZARD_CLOUDS_2;                                   // 0x19E8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_HAZARD_CLOUDS_3;                                   // 0x19F0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_HAZARD_CLOUDS_4;                                   // 0x19F8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_HAZARD_CLOUDS_5;                                   // 0x1A00(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_HAZARD_CLOUDS_6;                                   // 0x1A08(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_HAZARD_CLOUDS_7;                                   // 0x1A10(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_HAZARD_CLOUDS_8;                                   // 0x1A18(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_FLARES_APPEAR_1ST;                                 // 0x1A20(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_FLARES_APPEAR_2;                                   // 0x1A28(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_FLARES_APPEAR_3;                                   // 0x1A30(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_FLARES_APPEAR_4;                                   // 0x1A38(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_FLARES_APPEAR_5;                                   // 0x1A40(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_FLARES_APPEAR_6;                                   // 0x1A48(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_FLARES_APPEAR_7;                                   // 0x1A50(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_LIGHTNING_FIRST;                                   // 0x1A58(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_LIGHTNING_2;                                       // 0x1A60(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_LIGHTNING_3;                                       // 0x1A68(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_LIGHTNING_4;                                       // 0x1A70(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_LIGHTNING_5;                                       // 0x1A78(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_LIGHTNING_6;                                       // 0x1A80(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_LIGHTNING_7;                                       // 0x1A88(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_HAZARD_DARK_FIRST;                                 // 0x1A90(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_HAZARD_DARK_2;                                     // 0x1A98(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_HAZARD_DARK_3;                                     // 0x1AA0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_HAZARD_DARK_4;                                     // 0x1AA8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_HAZARD_DARK_5;                                     // 0x1AB0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_HAZARD_DARK_6;                                     // 0x1AB8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_HAZARD_DARK_7;                                     // 0x1AC0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_HAZARD_SOLAR_FIRST;                                // 0x1AC8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_HAZARD_SOLAR_2;                                    // 0x1AD0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_HAZARD_SOLAR_3;                                    // 0x1AD8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_HAZARD_SOLAR_4;                                    // 0x1AE0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_HAZARD_SOLAR_5;                                    // 0x1AE8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_HAZARD_SOLAR_6;                                    // 0x1AF0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_GB_EMERGENCY_CALL;                                 // 0x1AF8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_GB_HOSTILE_IN_NEW_LOCATION;                        // 0x1B00(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_GB_SUPPORT_2;                                      // 0x1B08(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_GB_SUPPORT_3;                                      // 0x1B10(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_GB_SUPPORT_4;                                      // 0x1B18(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_GB_SUPPORT_5;                                      // 0x1B20(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_GB_SUPPORT_6;                                      // 0x1B28(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_GB_SUPPORT_7;                                      // 0x1B30(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_GB_SUPPORT_8;                                      // 0x1B38(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_SHIP_SCOUT_1ST_TIME;                               // 0x1B40(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_SHIP_GUNSHIP_1ST_TIME;                             // 0x1B48(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_SHIP_SCOUT_OFTEN;                                  // 0x1B50(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_SHIP_GUNSHIP_OFTEN;                                // 0x1B58(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_ICE_MONOLITHS_2;                                   // 0x1B60(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_ICE_MONOLITHS_3;                                   // 0x1B68(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_ICE_MONOLITHS_4;                                   // 0x1B70(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_SALVAGE_WRECK_2;                                   // 0x1B78(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_SALVAGE_WRECK_3;                                   // 0x1B80(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_SHOOTING_CONTAINERS_2;                             // 0x1B88(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_SHOOTING_CONTAINERS_3;                             // 0x1B90(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_SHOOTING_CONTAINERS_4;                             // 0x1B98(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_SHOOTING_CONTAINERS_5;                             // 0x1BA0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_SHOOTING_CONTAINERS_6;                             // 0x1BA8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_SHOOTING_CONTAINERS_7;                             // 0x1BB0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_SHOOTING_CONTAINERS_8;                             // 0x1BB8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_SHOOTING_CONTAINERS_9;                             // 0x1BC0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_SHOOTING_CONTAINERS_10;                            // 0x1BC8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_SHOOTING_CONTAINERS_11;                            // 0x1BD0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_SHOOTING_CONTAINERS_12;                            // 0x1BD8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_SHOOTING_CONTAINERS_13;                            // 0x1BE0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_SHOOTING_CONTAINERS_14;                            // 0x1BE8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_SHOOTING_CONTAINERS_15;                            // 0x1BF0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_SHOOTING_CONTAINERS_16;                            // 0x1BF8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_SHOOTING_CONTAINERS_17;                            // 0x1C00(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_SHOOTING_CONTAINERS_18;                            // 0x1C08(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_SHOOTING_CONTAINERS_19;                            // 0x1C10(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_SHOOTING_CONTAINERS_20;                            // 0x1C18(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_SHOOTING_CONTAINERS_21;                            // 0x1C20(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_SECTOR_3;                                          // 0x1C28(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_SECTOR_4;                                          // 0x1C30(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_SECTOR_5;                                          // 0x1C38(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_SECTOR_6;                                          // 0x1C40(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_SECTOR_7;                                          // 0x1C48(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_SECTOR_ENTER_NEW_2;                                // 0x1C50(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_SECTOR_ENTER_NEW_3;                                // 0x1C58(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_SECTOR_ENTER_NEW_4;                                // 0x1C60(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_SECTOR_ENTER_NEW_5;                                // 0x1C68(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_SECTOR_ENTER_NEW_6;                                // 0x1C70(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_SECTOR_ENTER_NEW_7;                                // 0x1C78(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_SECTOR_ENTER_NEW_8;                                // 0x1C80(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_SECTOR_ENTER_NEW_9;                                // 0x1C88(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_SECTOR_ENTER_NEW_10;                               // 0x1C90(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_SECTOR_ENTER_NEW_11;                               // 0x1C98(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_HIGH_RISK_2;                                       // 0x1CA0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_HIGH_RISK_3;                                       // 0x1CA8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_HIGH_RISK_4;                                       // 0x1CB0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_HIGH_RISK_5;                                       // 0x1CB8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_HIGH_RISK_6;                                       // 0x1CC0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_NEW_RUN_2;                                         // 0x1CC8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_NEW_RUN_3;                                         // 0x1CD0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_NEW_RUN_4;                                         // 0x1CD8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_NEW_RUN_5;                                         // 0x1CE0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_NEW_RUN_6;                                         // 0x1CE8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_NEW_RUN_7;                                         // 0x1CF0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_NEW_RUN_8;                                         // 0x1CF8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_NEW_RUN_9;                                         // 0x1D00(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_NEW_RUN_10;                                        // 0x1D08(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_NEW_RUN_11;                                        // 0x1D10(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_NEW_RUN_12;                                        // 0x1D18(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_NEW_RUN_13;                                        // 0x1D20(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_NEW_RUN_14;                                        // 0x1D28(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_NEW_RUN_15;                                        // 0x1D30(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_NEW_RUN_16;                                        // 0x1D38(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_NEW_RUN_17;                                        // 0x1D40(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_NEW_RUN_18;                                        // 0x1D48(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_NEW_RUN_19;                                        // 0x1D50(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_NEW_RUN_20;                                        // 0x1D58(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_NEW_RUN_21;                                        // 0x1D60(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_SPOTTED_2;                                         // 0x1D68(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_SPOTTED_3;                                         // 0x1D70(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_SPOTTED_4;                                         // 0x1D78(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_SPOTTED_5;                                         // 0x1D80(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_SPOTTED_6;                                         // 0x1D88(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_SPOTTED_7;                                         // 0x1D90(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_SPOTTED_8;                                         // 0x1D98(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_SPOTTED_9;                                         // 0x1DA0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_SPOTTED_10;                                        // 0x1DA8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_SPOTTED_11;                                        // 0x1DB0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_SPOTTED_12;                                        // 0x1DB8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_SPOTTED_13;                                        // 0x1DC0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_SPOTTED_14;                                        // 0x1DC8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_SPOTTED_15;                                        // 0x1DD0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_SPOTTED_16;                                        // 0x1DD8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_SCAN_SIGNAL_TRACED_2;                              // 0x1DE0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_SCAN_SIGNAL_TRACED_3;                              // 0x1DE8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_SCAN_SIGNAL_TRACED_4;                              // 0x1DF0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_SCAN_SIGNAL_TRACED_5;                              // 0x1DF8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_SCAN_SIGNAL_TRACED_6;                              // 0x1E00(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_SCAN_SIGNAL_TRACED_7;                              // 0x1E08(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_SCAN_SIGNAL_TRACED_8;                              // 0x1E10(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_SCAN_SIGNAL_TRACED_9;                              // 0x1E18(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_SCAN_SIGNAL_TRACED_10;                             // 0x1E20(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_SCAN_SIGNAL_TRACED_11;                             // 0x1E28(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_CREDITS_PICKED_UP_2;                               // 0x1E30(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_CREDITS_PICKED_UP_3;                               // 0x1E38(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_CREDITS_PICKED_UP_4;                               // 0x1E40(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_CREDITS_PICKED_UP_5;                               // 0x1E48(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_CREDITS_PICKED_UP_6;                               // 0x1E50(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_CREDITS_PICKED_UP_7;                               // 0x1E58(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_CREDITS_PICKED_UP_8;                               // 0x1E60(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_CREDITS_PICKED_UP_9;                               // 0x1E68(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_CREDITS_PICKED_UP_10;                              // 0x1E70(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_CREDITS_PICKED_UP_11;                              // 0x1E78(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_UNDER_DRONE_FIRE_2;                                // 0x1E80(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_UNDER_DRONE_FIRE_3;                                // 0x1E88(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_UNDER_DRONE_FIRE_4;                                // 0x1E90(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_UNDER_DRONE_FIRE_5;                                // 0x1E98(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_UNDER_DRONE_FIRE_6;                                // 0x1EA0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_NANOBOTS_PICKED_UP_2;                              // 0x1EA8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_NANOBOTS_PICKED_UP_3;                              // 0x1EB0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_NANOBOTS_PICKED_UP_4;                              // 0x1EB8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_NANOBOTS_PICKED_UP_5;                              // 0x1EC0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_NANOBOTS_PICKED_UP_6;                              // 0x1EC8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_NANOBOTS_PICKED_UP_7;                              // 0x1ED0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_NANOBOTS_PICKED_UP_8;                              // 0x1ED8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_NO_FUEL_FOR_JUMP_2;                                // 0x1EE0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_NO_FUEL_FOR_JUMP_3;                                // 0x1EE8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_NO_FUEL_FOR_JUMP_4;                                // 0x1EF0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_NO_FUEL_FOR_JUMP_5;                                // 0x1EF8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_NO_FUEL_FOR_JUMP_6;                                // 0x1F00(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_ENCOUNTER_TRADER;                                  // 0x1F08(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_SECTOR_BOSS_1ST;                                   // 0x1F10(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_SECTOR_BOSS;                                       // 0x1F18(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_SECTOR_BOSS_NEAR_CORE;                             // 0x1F20(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_SECTOR_BOSS_GOT_CORE_2;                            // 0x1F28(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_SECTOR_BOSS_GOT_CORE_3;                            // 0x1F30(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_SECTOR_BOSS_GOT_CORE_4;                            // 0x1F38(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_SECTOR_BOSS_LAST_CORE;                             // 0x1F40(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_SECTOR_BOSS_FINISHED_2;                            // 0x1F48(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_SECTOR_BOSS_FINISHED_3;                            // 0x1F50(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_SECTOR_BOSS_FINISHED_4;                            // 0x1F58(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_FOE_1_DLG_2;                                      // 0x1F60(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_FOE_1_DLG_3;                                      // 0x1F68(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_FOE_1_DLG_3_FOE_FLEES;                            // 0x1F70(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_FOE_1_DLG_3_PLAYER_DIES;                          // 0x1F78(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_MISSION_FOE_1_AFTERMATH_DLG_2;                     // 0x1F80(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_FOE_2_DLG_2;                                      // 0x1F88(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_FOE_2_DLG_2_FOE_KILLED_PLAYER;                    // 0x1F90(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_FOE_2_DLG_2_PLAYER_ESCAPED;                       // 0x1F98(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_FOE_2_DLG_4;                                      // 0x1FA0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_FOE_2_DLG_5;                                      // 0x1FA8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_FOE_3_DLG_2;                                      // 0x1FB0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_FOE_3_DLG_3;                                      // 0x1FB8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_FOE_3_DLG_4;                                      // 0x1FC0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_FOE_3_DLG_5;                                      // 0x1FC8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_FOE_3_DLG_6;                                      // 0x1FD0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_FOE_3_WAVE_1_FINISHED;                            // 0x1FD8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_FOE_3_WAVE_2_FINISHED_HINT;                       // 0x1FE0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_FOE_3_WAVE_2_FINISHED;                            // 0x1FE8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_FOE_3_WAVE_3_FINISHED;                            // 0x1FF0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_FOE_3_WAVE_4_FINISHED;                            // 0x1FF8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_FOE_3_WAVE_5_FINISHED;                            // 0x2000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_FOE_3_ALL_DESTROYED;                              // 0x2008(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_FOE_3_DLG_1_REPEATED;                             // 0x2010(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_LAB_SCAVENGERS_FIRST_2;                           // 0x2018(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_LAB_SCAVENGERS_FIRST_2_NO_DNA;                    // 0x2020(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_LAB_SCAVENGERS_FIRST_2_HAS_DNA;                   // 0x2028(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_LAB_SCAVENGERS_FIRST_DESTROYED;                   // 0x2030(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_LAB_SCAVENGERS_REPEATED_2;                        // 0x2038(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_LAB_SCAVENGERS_REPEATED_3;                        // 0x2040(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_LAB_SCAVENGERS_REPEATED_4;                        // 0x2048(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_LAB_SCAVENGERS_REPEATED_5;                        // 0x2050(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_LAB_SCAVENGERS_REPEATED_6;                        // 0x2058(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_LAB_SCAVENGERS_REPEATED_DESTROYED_2;              // 0x2060(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_LAB_SCAVENGERS_REPEATED_DESTROYED_3;              // 0x2068(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_LAB_SCAVENGERS_REPEATED_DESTROYED_4;              // 0x2070(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_LAB_SCAVENGERS_REPEATED_DESTROYED_5;              // 0x2078(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_LAB_SCAVENGERS_REPEATED_DESTROYED_6;              // 0x2080(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_LAB_SCAVENGERS_ALL_DNA;                           // 0x2088(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_LAB_SCAVENGERS_ALL_DNA_DESTROYED;                 // 0x2090(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_ADMIRAL_DLG_2;                                    // 0x2098(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_ADMIRAL_DLG_3;                                    // 0x20A0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_ADMIRAL_DLG_3_TAUNT;                              // 0x20A8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_ADMIRAL_DLG_5;                                    // 0x20B0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_ADMIRAL_DLG_4_COVER;                              // 0x20B8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_ADMIRAL_DLG_4_NO_POWER;                           // 0x20C0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_ADMIRAL_DLG_4_CORE;                               // 0x20C8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_ADMIRAL_DLG_4_CORE_EXTRACTED;                     // 0x20D0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_ADMIRAL_DLG_5_TAUNT;                              // 0x20D8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_ADMIRAL_DLG_7;                                    // 0x20E0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_ADMIRAL_DLG_8;                                    // 0x20E8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_ADMIRAL_DLG_9;                                    // 0x20F0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_ADMIRAL_DLG_10;                                   // 0x20F8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_ADMIRAL_DLG_11;                                   // 0x2100(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_ADMIRAL_DLG_12;                                   // 0x2108(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_ADMIRAL_DLG_13;                                   // 0x2110(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_ADMIRAL_DLG_13_TAUNT;                             // 0x2118(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_ADMIRAL_DLG_15;                                   // 0x2120(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_ADMIRAL_DLG_16;                                   // 0x2128(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_ADMIRAL_DLG_17;                                   // 0x2130(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_ADMIRAL_HIT_2;                                    // 0x2138(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_ADMIRAL_HIT_3;                                    // 0x2140(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_ADMIRAL_HIT_4;                                    // 0x2148(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_ADMIRAL_HIT_5;                                    // 0x2150(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_ADMIRAL_TAUNT_2;                                  // 0x2158(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_ADMIRAL_TAUNT_3;                                  // 0x2160(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_ADMIRAL_TAUNT_4;                                  // 0x2168(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_ADMIRAL_TAUNT_5;                                  // 0x2170(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_ADMIRAL_TAUNT_6;                                  // 0x2178(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_ADMIRAL_TAUNT_7;                                  // 0x2180(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_ADMIRAL_TAUNT_8;                                  // 0x2188(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_ADMIRAL_HIDE_2;                                   // 0x2190(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_ADMIRAL_HIDE_3;                                   // 0x2198(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_ADMIRAL_HIDE_4;                                   // 0x21A0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_ADMIRAL_HIDE_5;                                   // 0x21A8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_ADMIRAL_STRIKE_2;                                 // 0x21B0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_ADMIRAL_STRIKE_3;                                 // 0x21B8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_ADMIRAL_STRIKE_4;                                 // 0x21C0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_ADMIRAL_STRIKE_5;                                 // 0x21C8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_ADMIRAL_REENTER_2;                                // 0x21D0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_ADMIRAL_REENTER_3;                                // 0x21D8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_ADMIRAL_REENTER_4;                                // 0x21E0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_ADMIRAL_REENTER_5;                                // 0x21E8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_ADMIRAL_REENTER_6;                                // 0x21F0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_AFTER_ADMIRAL_RUN_2;                              // 0x21F8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_AFTER_ADMIRAL_RUN_3;                              // 0x2200(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_AFTER_ADMIRAL_RUN_3_NOT_DEFEATED;                 // 0x2208(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_AFTER_ADMIRAL_RUN_5;                              // 0x2210(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_LAB_DESTROYED_FIRST;                              // 0x2218(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_LAB_DESTROYED_2;                                  // 0x2220(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_LAB_DESTROYED_3;                                  // 0x2228(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_LAB_DESTROYED_4;                                  // 0x2230(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_LAB_DESTROYED_5;                                  // 0x2238(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_LAB_DESTROYED_6;                                  // 0x2240(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_LAB_DESTROYED_7;                                  // 0x2248(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_LAB_DESTROYED_8;                                  // 0x2250(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_LAB_DESTROYED_9;                                  // 0x2258(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_LAB_DESTROYED_10;                                 // 0x2260(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_LAB_DESTROYED_11;                                 // 0x2268(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_FRIEND_1_DLG_2;                                   // 0x2270(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_FRIEND_1_DLG_3;                                   // 0x2278(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DIALOG_MISSION_FRIEND_1_AFTERMATH_DLG_2;                  // 0x2280(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_FRIEND_2_FUEL_2;                                  // 0x2288(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_FRIEND_2_FUEL_3;                                  // 0x2290(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_FRIEND_2_FUEL_4;                                  // 0x2298(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_FRIEND_2_NANOBOTS_2;                              // 0x22A0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_FRIEND_2_NANOBOTS_3;                              // 0x22A8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_FRIEND_2_NANOBOTS_4;                              // 0x22B0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_FRIEND_2_SUPPLIES_2;                              // 0x22B8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_FRIEND_2_SUPPLIES_3;                              // 0x22C0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_FRIEND_2_SUPPLIES_4;                              // 0x22C8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_FRIEND_2_SUPPORT_2;                               // 0x22D0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_FRIEND_2_SUPPORT_3;                               // 0x22D8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_FRIEND_2_SUPPORT_4;                               // 0x22E0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_FRIEND_2_ARRIVE_2;                                // 0x22E8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_FRIEND_2_ARRIVE_3;                                // 0x22F0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_FRIEND_2_ARRIVE_4;                                // 0x22F8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_FRIEND_2_ARRIVE_5;                                // 0x2300(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_FRIEND_2_ARRIVE_6;                                // 0x2308(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_FRIEND_2_ARRIVE_7;                                // 0x2310(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_FRIEND_2_ARRIVE_8;                                // 0x2318(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_FRIEND_2_ARRIVE_9;                                // 0x2320(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_FRIEND_2_ARRIVE_10;                               // 0x2328(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_FRIEND_2_ARRIVE_11;                               // 0x2330(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_FRIEND_2_SUPPORT_IDLE_2;                          // 0x2338(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_FRIEND_2_SUPPORT_IDLE_3;                          // 0x2340(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_FRIEND_2_SUPPORT_IDLE_4;                          // 0x2348(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_FRIEND_2_SUPPORT_IDLE_5;                          // 0x2350(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_FRIEND_2_SUPPORT_IDLE_6;                          // 0x2358(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_FRIEND_2_SUPPORT_IDLE_7;                          // 0x2360(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_FRIEND_2_SUPPORT_IDLE_8;                          // 0x2368(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_FRIEND_2_SUPPORT_IDLE_9;                          // 0x2370(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_FRIEND_2_SUPPORT_IDLE_10;                         // 0x2378(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_FRIEND_2_SUPPORT_IDLE_11;                         // 0x2380(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_FRIEND_2_SUPPORT_FIGHT_2;                         // 0x2388(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_FRIEND_2_SUPPORT_FIGHT_3;                         // 0x2390(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_FRIEND_2_SUPPORT_FIGHT_4;                         // 0x2398(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_FRIEND_2_SUPPORT_FIGHT_5;                         // 0x23A0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_FRIEND_2_SUPPORT_FIGHT_6;                         // 0x23A8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_FRIEND_2_SUPPORT_FIGHT_7;                         // 0x23B0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_FRIEND_2_SUPPORT_FIGHT_8;                         // 0x23B8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_FRIEND_2_SUPPORT_KILL_2;                          // 0x23C0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_FRIEND_2_SUPPORT_KILL_3;                          // 0x23C8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_FRIEND_2_SUPPORT_KILL_4;                          // 0x23D0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_FRIEND_2_SUPPORT_KILL_5;                          // 0x23D8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_FRIEND_2_SUPPORT_KILL_6;                          // 0x23E0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_FRIEND_2_SUPPORT_KILL_7;                          // 0x23E8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_FRIEND_2_SUPPORT_KILL_8;                          // 0x23F0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_FRIEND_2_SUPPORT_FLEE_2;                          // 0x23F8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_FRIEND_2_SUPPORT_FLEE_3;                          // 0x2400(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_FRIEND_2_SUPPORT_FLEE_4;                          // 0x2408(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_FRIEND_2_SUPPORT_FLEE_5;                          // 0x2410(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_FRIEND_2_SUPPORT_FLEE_6;                          // 0x2418(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_FRIEND_2_SUPPORT_FLEE_7;                          // 0x2420(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MISSION_FRIEND_2_SUPPORT_FLEE_8;                          // 0x2428(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       FLASHBACK_3;                                              // 0x2430(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       FLASHBACK_4;                                              // 0x2438(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       FLASHBACK_6;                                              // 0x2440(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       FLASHBACK_7;                                              // 0x2448(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       FLASHBACK_8;                                              // 0x2450(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       FLASHBACK_9;                                              // 0x2458(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       FLASHBACK_10;                                             // 0x2460(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       FLASHBACK_12;                                             // 0x2468(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MOVIE_2;                                                  // 0x2470(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MOVIE_3;                                                  // 0x2478(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MOVIE_4;                                                  // 0x2480(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MOVIE_6;                                                  // 0x2488(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MOVIE_7;                                                  // 0x2490(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MOVIE_8;                                                  // 0x2498(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MOVIE_9;                                                  // 0x24A0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MOVIE_10;                                                 // 0x24A8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MOVIE_11;                                                 // 0x24B0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MOVIE_12;                                                 // 0x24B8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.DialogIDs");
		return ptr;
	}

};


// Class ES2.DialogManager
// 0x0268 (0x0290 - 0x0028)
class UDialogManager : public UObject
{
public:
	class UDialogIDs*                                  DialogIDs;                                                // 0x0028(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               DebugDialogNullDuration;                                  // 0x0030(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1E7];                                     // 0x0031(0x01E7) MISSED OFFSET
	struct FScriptMulticastDelegate                    DialogStarted;                                            // 0x0218(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    DialogFinished;                                           // 0x0228(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    ParagraphStarted;                                         // 0x0238(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    ParagraphFinished;                                        // 0x0248(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    SubtitleLineStarted;                                      // 0x0258(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    SubtitleLinePaused;                                       // 0x0268(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    SubtitleLineResumed;                                      // 0x0278(0x0010) (ZeroConstructor, InstancedReference)
	class UAudioComponent*                             CurrentAudioComp;                                         // 0x0288(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.DialogManager");
		return ptr;
	}


	bool StopCurrentDialog();
	void STATIC_SkipCurrentParagraph(bool* MenuDialog);
	void STATIC_SkipCurrentDialog(bool* MenuDialog);
	void STATIC_SkipAllDialogs(bool* MenuDialog);
	void STATIC_SetPausedCurrentParagraph(bool* bPause, bool* MenuDialog);
	void SetPause(bool* bIsPaused);
	bool STATIC_IsQueueEmpty(bool* MenuDialog);
	bool STATIC_IsMissionDialogPlayingOrEnqueued(bool* MenuDialog);
	bool STATIC_IsAnyDialogRunning(bool* MenuDialog);
	class UDialogIDs* STATIC_GetDialogIDs();
	struct FName STATIC_GetCurrentSpeaker(bool* MenuDialog);
	void STATIC_EnqueueMovieSubtitles(struct FName* DialogID, bool* MenuDialog);
	void STATIC_EnqueueMissionDialogWithEvent(struct FName* DialogID, struct FScriptDelegate* DialogFinishedEvent, float* Delay, bool* MenuDialog);
	void STATIC_EnqueueMissionDialog(struct FName* DialogID, float* Delay, bool* MenuDialog);
	void STATIC_EnqueueDialogWithEvent(struct FName* DialogID, struct FScriptDelegate* DialogFinishedEvent, float* Delay, TEnumAsByte<EDialog>* DialogType, bool* MenuDialog);
	void STATIC_EnqueueDialog(struct FName* DialogID, float* Delay, TEnumAsByte<EDialog>* DialogType, bool* MenuDialog);
	void STATIC_EnqueueDebugParagraphWithEvent(struct FText* Text, struct FName* SpeakerID, struct FScriptDelegate* DialogFinishedEvent, float* Delay, TEnumAsByte<EDialog>* DialogType, bool* MenuDialog);
	void STATIC_EnqueueDebugParagraph(struct FText* Text, struct FName* SpeakerID, float* Delay, TEnumAsByte<EDialog>* DialogType, bool* MenuDialog);
	void STATIC_ClearDialogQueue(bool* MenuDialog);
	void STATIC_BindSubtitleLineStarted(struct FScriptDelegate* Delegate);
	void STATIC_BindParagraphStarted(struct FScriptDelegate* Delegate);
	void STATIC_BindParagraphFinished(struct FScriptDelegate* Delegate);
	void STATIC_BindDialogStarted(struct FScriptDelegate* Delegate);
	void STATIC_BindDialogResumed(struct FScriptDelegate* Delegate);
	void STATIC_BindDialogPaused(struct FScriptDelegate* Delegate);
	void STATIC_BindDialogFinished(struct FScriptDelegate* Delegate);
};


// Class ES2.DockableStation
// 0x01A0 (0x04D0 - 0x0330)
class ADockableStation : public AActor
{
public:
	class USceneComponent*                             SceneRoot;                                                // 0x0330(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class USelfRegisteringComponent*                   SelfRegistering;                                          // 0x0338(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UHUDMarkerComponent*                         HUDMarkerComponent;                                       // 0x0340(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UInteractComponent*                          Interact;                                                 // 0x0348(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	struct FDockableStationTemplate                    DockableStationTemplate;                                  // 0x0350(0x0070) (BlueprintVisible, BlueprintReadOnly)
	struct FName                                       StationID;                                                // 0x03C0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBusyness>                             Busyness;                                                 // 0x03C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x03C9(0x0007) MISSED OFFSET
	TArray<float>                                      EmptyPadProbabilities;                                    // 0x03D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<int>                                        AverageLaunchInterval;                                    // 0x03E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FTransform                                  DockingTransform;                                         // 0x03F0(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	struct FTransform                                  ShipsForSaleTransform;                                    // 0x0420(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	struct FTransform                                  LootDropTransform;                                        // 0x0450(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	TArray<class ADockingGizmo*>                       DockingLocations;                                         // 0x0480(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	class UClass*                                      ShipsOnStationClass;                                      // 0x0490(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class APawn*>                               SpawnedShipsForSale;                                      // 0x0498(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<class APawn*>                               PlayerShips;                                              // 0x04A8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class USoundBase*                                  DockSound;                                                // 0x04B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  UndockSound;                                              // 0x04C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x04C8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.DockableStation");
		return ptr;
	}


	void TriggerUndockAnimation();
	void PlayerConfirmDocking(class UInteractComponent** InteractComponent, class AActor** InteractActor);
	void OnPlayerBeginDocking();
	bool IsHomebase();
	class UInventory* GetShopInventory();
	void GetShipsForSale(TArray<struct FShipData>* Ships);
	struct FTransform GetLootDropWorldTransform();
	void GetJobOffers(TArray<struct FTaskSaveGameData>* JobOffers);
};


// Class ES2.SpawnGizmoBase
// 0x0078 (0x03A8 - 0x0330)
class ASpawnGizmoBase : public AActor
{
public:
	class USphereComponent*                            SpawnSphere;                                              // 0x0330(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USelfRegisteringComponent*                   SelfRegistering;                                          // 0x0338(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0340(0x0050) UNKNOWN PROPERTY: SetProperty ES2.SpawnGizmoBase.AllowedSpawnTypes
	bool                                               bIsLocationBusyness;                                      // 0x0390(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0391(0x0003) MISSED OFFSET
	float                                              Radius;                                                   // 0x0394(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxSpawnCount;                                            // 0x0398(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WeightMultiplier;                                         // 0x039C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EmptyGroupProbabilitySmall;                               // 0x03A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EmptyGroupProbabilityCapital;                             // 0x03A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.SpawnGizmoBase");
		return ptr;
	}


	class AActor* SpawnClass(class UClass** ClassToSpawnOverride, TEnumAsByte<ESpawnGroup>* ConcreteSpawnGroup, struct FSpawnParameter* SpawnParameter, struct FRandomStream* R);
	void PostRestoreActor(class AActor** RestoredActor);
	float GetEmptyGroupProbability(TEnumAsByte<ESpawnGroup>* Type);
};


// Class ES2.DockingGizmo
// 0x0038 (0x03E0 - 0x03A8)
class ADockingGizmo : public ASpawnGizmoBase
{
public:
	float                                              OrientationNoise;                                         // 0x03A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03AC(0x0004) MISSED OFFSET
	class UBoxComponent*                               BoxTriggerVolume;                                         // 0x03B0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UChildActorComponent*                        Waypoint;                                                 // 0x03B8(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FFloatRange                                 JumpLocationDistanceMeter;                                // 0x03C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AESPawn*                                     Ship;                                                     // 0x03D0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	TEnumAsByte<EDockingState>                         DockingState;                                             // 0x03D8(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsSpawningShips;                                         // 0x03D9(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bDrawGizmos;                                              // 0x03DA(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x03DB(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.DockingGizmo");
		return ptr;
	}


	void TouchDownShip(class AESPawn** ShipToLand);
	void OnOverlap(class UPrimitiveComponent** OverlappedComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex, bool* bFromSweep, struct FHitResult* SweepResult);
	void LaunchShip(class AESPawn** ShipToLaunch);
	void LandShip(class AESPawn** ShipToLand);
	class ADockableStation* GetAssosiatedDock_Slow();
	struct FVector GetApproachingLocation();
	struct FTransform CalcLandingTransform(class AESPawn** Ship);
};


// Class ES2.EnergyCoreComponent
// 0x0198 (0x0290 - 0x00F8)
class UEnergyCoreComponent : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    OnEnergyChanged;                                          // 0x00F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FAttributeAccess                            EnergyOutputPerSecond;                                    // 0x0108(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	float                                              MinOutputPerSecond;                                       // 0x0158(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x015C(0x0004) MISSED OFFSET
	struct FAttributeAccess                            EnergyCapacity;                                           // 0x0160(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	float                                              MinCapacity;                                              // 0x01B0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x01B4(0x0004) MISSED OFFSET
	struct FAttributeAccess                            OutputBonusFactorWhenStandingStill;                       // 0x01B8(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FAttributeAccess                            EnergyRegenDelay;                                         // 0x0208(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              OutputBonusSpeedThreshold;                                // 0x0258(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OutputBonusDelay;                                         // 0x025C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUnlimitedEnergySupply;                                   // 0x0260(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2F];                                      // 0x0261(0x002F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.EnergyCoreComponent");
		return ptr;
	}


	bool RemoveAllocation(struct FEnergyAllocation* Allocation);
	bool IsGainingEnergyRegenBonus();
	bool HasEnergy(float* TestEnergy);
	float GetRatio(bool* bRegardNonAllocatedEnergyOnly);
	float GetEnergy();
	float GetCapacity(bool* bRegardNonAllocatedEnergyOnly);
	void GetAllocations(TArray<struct FEnergyAllocation>* Allocations);
	float GetAllocatedEnergyRatio();
	float GetAllocatedEnergy();
	void ChangeEnergy(float* EnergyDelta);
	bool AddAllocation(struct FEnergyAllocation* Allocation, bool* AllocateEvenIfCurrentEnergyIsLower);
};


// Class ES2.EngineUtilities
// 0x0000 (0x0028 - 0x0028)
class UEngineUtilities : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.EngineUtilities");
		return ptr;
	}


	void STATIC_SetResolution(int* InResolutionX, int* InResolutionY);
	void STATIC_SetMaxDrawDistanceLight(class ULightComponent** LightComponent, float* Distance, float* FadeRange);
	void STATIC_SetFullScreenMode(TEnumAsByte<EWindowMode>* WindowMode);
	void STATIC_PrintFocusedWidget(class APlayerController** PlayerController, float* Delay);
	class UTexture* STATIC_LoadTexture(class FString* Path, class FString* AssetName);
	class ULevelStreamingDynamic* STATIC_LoadLevelInstance(class UObject** WorldContextObject, TSoftObjectPtr<class UObject>* LevelAsset, struct FVector* Location, struct FRotator* Rotation);
	class UClass* STATIC_LoadClassSynchronous(TSoftObjectPtr<class UClass>* ClassSoftRef);
	class UObject* STATIC_LoadAssetSynchronous(TSoftObjectPtr<class UObject>* Target);
	bool STATIC_IsWithEditor();
	bool STATIC_IsPlayingAdv(class UAudioComponent** AudioComp);
	bool STATIC_IsPlatformConsole();
	TArray<struct FIntPoint> STATIC_GetSupportedResolutionsWithFallback(TEnumAsByte<EWindowMode>* WindowMode);
	float STATIC_GetSoundCueDuration(class USoundCue** SoundCue);
	struct FIntPoint STATIC_GetResolution();
	class FString STATIC_GetProjectVersion();
	void STATIC_GetPlaybackTimeHACK(class UAudioComponent** AudioComponent, struct FScriptDelegate* Event);
	float STATIC_GetMassFromComponent(class UPrimitiveComponent** Comp);
	struct FName STATIC_GetKeyFName(struct FKey* Key);
	TEnumAsByte<EWindowMode> STATIC_GetFullScreenMode();
	class UObject* STATIC_GetDefaultObject(class UClass** Class);
	void STATIC_GetAllWidgetsOfClass(class UObject** WorldContextObject, class UClass** WidgetClass, TArray<class UWidget*>* FoundWidgets);
	void STATIC_GetAllStreamingLevels(class UObject** WorldContextObject, TArray<class ULevelStreaming*>* StreamingLevels_OUT);
	struct FText STATIC_FormatTextWithNamedArguments(struct FText* Text, TArray<struct FFindReplaceTextArgument>* ReplaceArguments);
	class AActor* STATIC_FindActorWithFName(class UObject** WorldContext, struct FName* Name, class UClass** Class);
	bool STATIC_FindActorOfClassSlow(class UObject** WorldContextObject, class UClass** ActorClass, class AActor** OutActor);
	void STATIC_ConfirmSettingVideoMode();
	void STATIC_BreakPointDummy(class FString* StringData, int* IntData, float* FloatData, class UObject** ObjectData1, class UObject** ObjectData2);
};


// Class ES2.ESButton
// 0x0000 (0x0428 - 0x0428)
class UESButton : public UButton
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.ESButton");
		return ptr;
	}

};


// Class ES2.EscapeTarget
// 0x0068 (0x0398 - 0x0330)
class AEscapeTarget : public AActor
{
public:
	class USceneComponent*                             SceneRoot;                                                // 0x0330(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UHUDMarkerComponent*                         HUDMarkerComponent;                                       // 0x0338(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class USelfRegisteringComponent*                   SelfRegistering;                                          // 0x0340(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	float                                              Difficulty;                                               // 0x0348(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsReticuleClose;                                         // 0x034C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x034D(0x0003) MISSED OFFSET
	float                                              TimeUntilEscape;                                          // 0x0350(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DecreaseDuration;                                         // 0x0354(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IncreaseDuration;                                         // 0x0358(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StartRatio;                                               // 0x035C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentRatio;                                             // 0x0360(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              RadiusMouse;                                              // 0x0364(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RadiusGamepad;                                            // 0x0368(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RemainingTime;                                            // 0x036C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             EscapePath;                                               // 0x0370(0x0010) (BlueprintVisible, ZeroConstructor)
	struct FScriptMulticastDelegate                    OnStateChanged;                                           // 0x0380(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0390(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.EscapeTarget");
		return ptr;
	}


	void StateChanged(TEnumAsByte<EEscapeTargetState>* NewState, TEnumAsByte<EEscapeTargetState>* OldState);
	void Start();
	TEnumAsByte<EEscapeTargetState> GetState();
};


// Class ES2.ESGameInstance
// 0x0260 (0x03C8 - 0x0168)
class UESGameInstance : public UGameInstance
{
public:
	class UPlayerData*                                 PlayerData;                                               // 0x0168(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               SuppressSpawning;                                         // 0x0170(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDebugShowShipSpeed;                                      // 0x0171(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCheatSimulateGamescomBuild;                              // 0x0172(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCheatsEnabled;                                           // 0x0173(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseWorldOriginShifting;                                  // 0x0174(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0175(0x0003) MISSED OFFSET
	float                                              WorldOriginShiftingCheckInterval;                         // 0x0178(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WorldOriginShiftingMaxDistance;                           // 0x017C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WorldOriginShiftingMaxDistanceTravelMode;                 // 0x0180(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0184(0x0004) MISSED OFFSET
	TMap<struct FName, class UDataTable*>              ShipModules;                                              // 0x0188(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	class UDataTable*                                  ShipSettings;                                             // 0x01D8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDataTable*                                  ShipColorsDataTable;                                      // 0x01E0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDataTable*                                  ShipDecalsDataTable;                                      // 0x01E8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDataTable*                                  DebugShipsDataTable;                                      // 0x01F0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<TSoftObjectPtr<class UClass>>               JobMissions;                                              // 0x01F8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<TSoftObjectPtr<class UClass>>               Encounters;                                               // 0x0208(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	class UClass*                                      TravelModeLocationClass;                                  // 0x0218(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundMix*                                   SoundMix;                                                 // 0x0220(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundClass*                                 SoundClassMaster;                                         // 0x0228(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundClass*                                 SoundClassMusic;                                          // 0x0230(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundClass*                                 SoundClassSFX;                                            // 0x0238(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundClass*                                 SoundClassVoice;                                          // 0x0240(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundClass*                                 SoundClassIngame;                                         // 0x0248(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAudioComponent*                             PersistentMusic;                                          // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	int                                                PersistentSongIndex;                                      // 0x0258(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x025C(0x0004) MISSED OFFSET
	TArray<int>                                        RecentlyPlayedSongs;                                      // 0x0260(0x0010) (BlueprintVisible, ZeroConstructor, Transient)
	class USoundCue*                                   CreditsGainSound;                                         // 0x0270(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   CreditsLoseSound;                                         // 0x0278(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AverageRespawnTimeMinutes;                                // 0x0280(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AverageDwellTimeMinutes;                                  // 0x0284(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AverageAbsenseTimeMinutes;                                // 0x0288(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RespawnTimeVariancePercent;                               // 0x028C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RepairTimeMinutes;                                        // 0x0290(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ShieldRechargeTimeMinutes;                                // 0x0294(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RepairCostPerHitpointAtStations;                          // 0x0298(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxPlayerShipLevel;                                       // 0x029C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxPlayerLevel;                                           // 0x02A0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x02A4(0x0004) MISSED OFFSET
	int                                                DeadlyLevelDifference;                                    // 0x02A8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x02AC(0x0004) MISSED OFFSET
	class UKeyBinder*                                  KeyBinder;                                                // 0x02B0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x8];                                       // 0x02B8(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnPlayerKilledEnemy;                                      // 0x02C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPlayerDockedToStation;                                  // 0x02D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPlayerLeftStation;                                      // 0x02E0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPauseChanged;                                           // 0x02F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnGamepadModeChanged;                                     // 0x0300(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnGraphicsSettingsChanged;                                // 0x0310(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	float                                              GamescomCompundFactorInitialDefault;                      // 0x0320(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GamescomCompundFactorLevelUpDefault;                      // 0x0324(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GamescomXPNeededForLevelFactor;                           // 0x0328(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x94];                                      // 0x032C(0x0094) MISSED OFFSET
	class USequenceManager*                            SequenceManagerInstance;                                  // 0x03C0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.ESGameInstance");
		return ptr;
	}


	void SetWorldOriginShifting(bool* SetOn);
	void SetIngameSoundMuted(bool* bMute);
	void STATIC_PushPause();
	void STATIC_PopPause();
	bool STATIC_IsPaused();
	bool GetWorldOriginShifting();
	class USequenceManager* STATIC_GetSequenceManager();
	void AddRecentlyPlayedSong(int* SongIndex);
};


// Class ES2.ESGameModeBase
// 0x0070 (0x0488 - 0x0418)
class AESGameModeBase : public AGameMode
{
public:
	class UChildActorComponent*                        ChildActorMusicManager;                                   // 0x0418(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UChildActorComponent*                        ChildActorWantedLevelManager;                             // 0x0420(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               CutsceneInProgress;                                       // 0x0428(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDebugStartAtPlayerStart;                                 // 0x0429(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x042A(0x0006) MISSED OFFSET
	class ALocationInfo*                               LocationInfo;                                             // 0x0430(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0438(0x0008) MISSED OFFSET
	class AESPawn*                                     ESPlayerPawn;                                             // 0x0440(0x0008) (ZeroConstructor, IsPlainOldData)
	class AESPlayerController*                         ESPlayerController;                                       // 0x0448(0x0008) (ZeroConstructor, IsPlainOldData)
	class UPlayerData*                                 PlayerData;                                               // 0x0450(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x30];                                      // 0x0458(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.ESGameModeBase");
		return ptr;
	}


	void TriggerFadeOut(struct FLinearColor* Color, float* Duration);
	void TriggerFadeIn(struct FLinearColor* Color, float* Duration);
	void RightBeforeBeginPlayIsCalledForAllActors();
	void ReinitPlayerPawn(class APawn** PlayerPawn);
	void PlayerJumpTriggered(TEnumAsByte<EJumpMethod>* JumpMethod);
	void PlayerJumpCompleted(TEnumAsByte<EJumpMethod>* JumpMethod, class AActor** Actor);
	void OnLeftLocationBounds();
	float GetOutOfBoundsDistance();
	class AActor* GetMusicManagerActor();
	void EnableInputAndStopBoosting();
	void DelayedUndockPlayerShip();
	void CheckIfOutsideOfLevelBounds();
	void CheckForWorldOriginShifting();
};


// Class ES2.ESGameUserSettings
// 0x0050 (0x0168 - 0x0118)
class UESGameUserSettings : public UGameUserSettings
{
public:
	int                                                GraphicsQuality;                                          // 0x0118(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                AntiAliasingQuality;                                      // 0x011C(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                EffectsQuality;                                           // 0x0120(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                PostProcessQuality;                                       // 0x0124(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                ShadowQuality;                                            // 0x0128(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                TextureQuality;                                           // 0x012C(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                ViewDistanceQuality;                                      // 0x0130(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              GammaValue;                                               // 0x0134(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bChromaticAberration;                                     // 0x0138(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bMotionBlur;                                              // 0x0139(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x013A(0x0002) MISSED OFFSET
	float                                              SoundVolumeMaster;                                        // 0x013C(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              SoundVolumeMusic;                                         // 0x0140(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              SoundVolumeSFX;                                           // 0x0144(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              SoundVolumeVoice;                                         // 0x0148(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	EJoystickHUDBehavior                               JoystickHUDBehavior;                                      // 0x014C(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	EControllerIconStyle                               ControllerIconStyle;                                      // 0x014D(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	EInputPreset                                       InputPreset;                                              // 0x014E(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x014F(0x0001) MISSED OFFSET
	int                                                GamepadScheme_Gamescom;                                   // 0x0150(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bAutoRollKeyboard;                                        // 0x0154(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bAutoRollController;                                      // 0x0155(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0156(0x0002) MISSED OFFSET
	float                                              MouseSensitivityFactor;                                   // 0x0158(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              GamepadAutoAimStrength;                                   // 0x015C(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bGamepadInputSmoothing;                                   // 0x0160(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0161(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.ESGameUserSettings");
		return ptr;
	}


	void SetSoundVolumeVoice(float* Volume);
	void SetSoundVolumeSFX(float* Volume);
	void SetSoundVolumeMusic(float* Volume);
	void SetSoundVolumeMaster(float* Volume);
	void SetMouseSensitivityFactor(float* InFactor);
	void SetMotionBlurEnabled(bool* bEnabled);
	void SetJoystickHUDBehavior(EJoystickHUDBehavior* HUDBehavior);
	void SetInputPreset(EInputPreset* Preset);
	void SetGraphicsQuality(TEnumAsByte<EGraphicsQuality>* InGraphicsQuality, struct FGraphicsQualityLevels* QualityLevelsIn);
	void SetGamma(float* GammaValue);
	void SetGamepadScheme_Gamescom(int* Scheme);
	void SetGamepadInputSmoothingEnabled(bool* bEnabled);
	void SetControllerIconStyle(EControllerIconStyle* IconStyle);
	void SetChromaticAberrationEnabled(bool* bEnabled);
	void SetAutoRollKeyboardEnabled(bool* bEnabled);
	void SetAutoRollControllerEnabled(bool* bEnabled);
	void SetAutoAimStrength(float* InFactor);
	bool IsMotionBlurEnabled();
	bool IsGamepadInputSmoothingEnabled();
	bool IsChromaticAberrationEnabled();
	bool IsAutoRollKeyboardEnabled();
	bool IsAutoRollControllerEnabled();
	float GetSoundVolumeVoice();
	float GetSoundVolumeSFX();
	float GetSoundVolumeMusic();
	float GetSoundVolumeMaster();
	float GetMouseSensitivityFactorRaw();
	float GetMouseSensitivityFactor(class AESPlayerController** PC);
	EJoystickHUDBehavior GetJoystickHUDBehavior();
	EInputPreset GetInputPreset();
	void GetGraphicsQuality(TEnumAsByte<EGraphicsQuality>* GraphicsQualityOut, struct FGraphicsQualityLevels* QualityLevelsOut, bool* bCustomQualityLevelsSetOut);
	float GetGamma();
	int GetGamepadScheme_Gamescom();
	EControllerIconStyle GetControllerIconStyle();
	float GetAutoAimStrength();
	void ApplySoundSettings();
};


// Class ES2.ESHUD
// 0x00B8 (0x04D8 - 0x0420)
class AESHUD : public AHUD
{
public:
	int                                                PawnRadarWidth;                                           // 0x0420(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                PawnRadarHeight;                                          // 0x0424(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MissileRadarWidth;                                        // 0x0428(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MissileRadarHeight;                                       // 0x042C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                OtherRadarWidth;                                          // 0x0430(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                OtherRadarHeight;                                         // 0x0434(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OffScreenScreenSafeDistance;                              // 0x0438(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OnScreenMarkerScaling;                                    // 0x043C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OffScreenDistanceScalingMin;                              // 0x0440(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OffScreenDistanceScalingMax;                              // 0x0444(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OffScreenLockTargetScaling;                               // 0x0448(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HoverRadius;                                              // 0x044C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bShowNPCDebugInfo;                                        // 0x0450(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1F];                                      // 0x0451(0x001F) MISSED OFFSET
	TMap<class UUMGSequencePlayer*, struct FPausedAnimationInfo> PausedSequencePlayers;                                    // 0x0470(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x10];                                      // 0x04C0(0x0010) MISSED OFFSET
	class AActor*                                      LastTargetLock;                                           // 0x04D0(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.ESHUD");
		return ptr;
	}


	void STATIC_SortIndicatorArray(TArray<TEnumAsByte<EIndicator>>* IndicatorsInOut);
	void ShowXPNumbers(class AActor** Victim, float* XP);
	void ShowMissionTaskUpdate(struct FHUDTaskData* TaskData);
	void ShowHitpointNumbers(class AActor** Victim, class AActor** DamageCauser, class AActor** EventInstigator, float* HPShield, float* HPArmor, float* HPHull, bool* IsCriticalHit, struct FVector* HitLocationWorld, bool* ShowEverySecond);
	void PushHideTopLayer();
	void PushHideMainLayer();
	void PopHideTopLayer();
	void PopHideMainLayer();
	void OnShowInteractWidget(class UInteractComponent** InteractComponent, class UClass** WidgetClass, TEnumAsByte<EInteractWidgetDisplayLocation>* DisplayLocation, struct FVector2D* DisplayOffset);
	void OnPlayerDealtDamage(bool* bShieldDamage);
	void OnPauseChanged(bool* bPaused);
	void OnHideTopLayerChanged(bool* bHide);
	void OnHideMainLayerChanged(bool* bHide);
	void OnHideInteractWidget();
	void OnEnterOrExitDeviceSelection(bool* bEnter);
	void OnEnterOrExitConsumableSelection(bool* bEnter);
	void OnChangeInteractWidgetVisibility(bool* bVisible);
	void OnAbortedMission(struct FName* MissionID);
	bool IsTopLayerVisible();
	bool IsMainLayerVisible();
	void HideLockedTargetIndicator();
	void HideAimAssist(bool* bForHoveredTarget);
	float STATIC_GetScaledMarkerWidthFromActorBounds(class AActor** InActor, class UHUDMarkerComponent** HUDMarkerComp, float* CameraFOV);
	void DrawLockedTargetIndicator(struct FVector2D* ScreenPos, float* RenderAngle, TEnumAsByte<EMarkerRelation>* Relation);
	void DrawAimAssist(struct FVector2D* ScreenPos, struct FVector2D* TargetScreenPos, TEnumAsByte<EMarkerRelation>* Relation, bool* bForHoveredTarget, bool* bNewLock);
	void AddLogMessage(struct FHUDMessage* MessageInfo);
};


// Class ES2.ESPawn
// 0x0570 (0x0900 - 0x0390)
class AESPawn : public APawn
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0390(0x0008) MISSED OFFSET
	class UMovementRootComponent*                      CollisionRoot;                                            // 0x0398(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class USelfRegisteringComponent*                   SelfRegistering;                                          // 0x03A0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class USaveGameComponent*                          SaveGame;                                                 // 0x03A8(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UHealthComponent*                            Health;                                                   // 0x03B0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UArmorComponent*                             armor;                                                    // 0x03B8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UShieldComponent*                            shield;                                                   // 0x03C0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UFactionComponent*                           Faction;                                                  // 0x03C8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UEnergyCoreComponent*                        EnergyCore;                                               // 0x03D0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UShipMovementComponent*                      ShipMovement;                                             // 0x03D8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UWeaponComponent*                            PrimaryWeapons;                                           // 0x03E0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UWeaponComponent*                            SecondaryWeapons;                                         // 0x03E8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UDeviceComponent*                            Devices;                                                  // 0x03F0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UConsumableComponent*                        Consumables;                                              // 0x03F8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UHUDMarkerComponent*                         HUDMarker;                                                // 0x0400(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class ULootDropComponent*                          LootDrop;                                                 // 0x0408(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UJumpDriveComponent*                         JumpDrive;                                                // 0x0410(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UXPComponent*                                XP;                                                       // 0x0418(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class USceneComponent*                             BankingNode;                                              // 0x0420(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Base;                                                     // 0x0428(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Body;                                                     // 0x0430(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Wings;                                                    // 0x0438(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Rear;                                                     // 0x0440(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Extension;                                                // 0x0448(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Cockpit3rd;                                               // 0x0450(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnAIEvent;                                                // 0x0458(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPostBeginPlay;                                          // 0x0468(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnSubPawnsSpawned;                                        // 0x0478(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x130];                                     // 0x0488(0x0130) MISSED OFFSET
	TEnumAsByte<EPawnType>                             PawnType;                                                 // 0x05B8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x05B9(0x0003) MISSED OFFSET
	float                                              ThreatFactor;                                             // 0x05BC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EEngineOpacityControlledBy                         EngineOpacityControlledBy;                                // 0x05C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x05C1(0x0007) MISSED OFFSET
	class ULevelSequence*                              BoundToLevelSequence;                                     // 0x05C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class FString                                      CockpitSocketSubString;                                   // 0x05D0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	bool                                               bGetShipModulesFromShipData;                              // 0x05E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x05E1(0x0003) MISSED OFFSET
	struct FShipColors                                 ShipColors;                                               // 0x05E4(0x00C8) (Edit, BlueprintVisible)
	bool                                               bGetShipColorsFromShipData;                               // 0x06AC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x06AD(0x0003) MISSED OFFSET
	struct FShipDecalTextures                          DecalTextures;                                            // 0x06B0(0x0058) (Edit, BlueprintVisible)
	bool                                               bGetDecalsFromShipData;                                   // 0x0708(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x0709(0x0007) MISSED OFFSET
	class UPilotAudio*                                 PilotAudio;                                               // 0x0710(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSpawnsSubPawns;                                          // 0x0718(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x0719(0x0007) MISSED OFFSET
	class UBehaviorTree*                               BehaviourTree;                                            // 0x0720(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               MayUseInteriorNavigation;                                 // 0x0728(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAreaEnvironment>                      LastKnownAreaEnvironment;                                 // 0x0729(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData08[0x6];                                       // 0x072A(0x0006) MISSED OFFSET
	float                                              CollisionDetectionFactor;                                 // 0x0730(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PawnSensingRadiusMeters;                                  // 0x0734(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               SearchForWaypoints;                                       // 0x0738(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x0739(0x0003) MISSED OFFSET
	float                                              MaxWaypointDistMeter;                                     // 0x073C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EIdleType>                             IdleType;                                                 // 0x0740(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x0741(0x0003) MISSED OFFSET
	float                                              IdleRadiusMeter;                                          // 0x0744(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FFloatRange                                 FormationFlightDirectionOffset;                           // 0x0748(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FleeThreshHealthRatio;                                    // 0x0758(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AbortFleeShieldRatio;                                     // 0x075C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NoLOSMemoryThreshold;                                     // 0x0760(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FAimingNoiseParametersStruct                AimingNoiseParameters;                                    // 0x0764(0x0014) (Edit, BlueprintVisible)
	bool                                               bJumpIn;                                                  // 0x0778(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x0779(0x0003) MISSED OFFSET
	struct FFloatRange                                 JumpInDelay;                                              // 0x077C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     JumpInLocation;                                           // 0x078C(0x000C) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	int                                                LeadershipLevel;                                          // 0x0798(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AddFollowerDistanceMeter;                                 // 0x079C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UseLeadersPawnSensingSphere;                              // 0x07A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UseLeadersTarget;                                         // 0x07A1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IgnoredByAi;                                              // 0x07A2(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IgnoredByAiDuringCutscene;                                // 0x07A3(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDontSelfDestruct;                                        // 0x07A4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData12[0x3];                                       // 0x07A5(0x0003) MISSED OFFSET
	struct FPrioritizedTargetLists                     PrioritizedTargetLists;                                   // 0x07A8(0x0040)
	TArray<class UClass*>                              TargetBlacklist;                                          // 0x07E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class AActor*                                      WaypointOverride;                                         // 0x07F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBoxSphereBounds                            LocalSpaceBounds;                                         // 0x0800(0x001C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                NPCLevel;                                                 // 0x081C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                NPCMark;                                                  // 0x0820(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData13[0x4];                                       // 0x0824(0x0004) MISSED OFFSET
	struct FNPCLevelingData                            NPCLevelingData;                                          // 0x0828(0x0080) (BlueprintVisible, BlueprintReadOnly)
	bool                                               bIgnoreLevelingData;                                      // 0x08A8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsPlayerPawn;                                            // 0x08A9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData14[0x2];                                       // 0x08AA(0x0002) MISSED OFFSET
	float                                              IdleTimeTillJumpRemaining;                                // 0x08AC(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	struct FTransform                                  InitialSpawnTransform;                                    // 0x08B0(0x0030) (BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData)
	unsigned char                                      UnknownData15[0x4];                                       // 0x08E0(0x0004) MISSED OFFSET
	bool                                               bNoiseInSequenceActive;                                   // 0x08E4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsKinematicEnabled;                                      // 0x08E5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData16[0x2];                                       // 0x08E6(0x0002) MISSED OFFSET
	TArray<class AESPawn*>                             Followers;                                                // 0x08E8(0x0010) (ZeroConstructor)
	class AESPawn*                                     Leader;                                                   // 0x08F8(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.ESPawn");
		return ptr;
	}


	void UpdateLocalSpaceBounds();
	void TeleportAllFollowersIntoFormation();
	bool ShouldPossessAiOnSpawn();
	void SetLeader(class AESPawn** NewLeader, bool* TryTeleportFollowerIntoFormation);
	void SetInvestigateLocation(struct FVector* Location);
	void SetIgnoredByAIDuringCutscene(bool* bIgnore);
	void SetIgnoredByAI(bool* bIgnore);
	void SequenceStarted(struct FSequenceEventData* EventData);
	class AESPawn* ResignLeadership();
	int RemoveTargetPreferenceList(TArray<class AActor*>* Targets);
	bool RemoveTargetPreference(class AActor** Target);
	void RemoveFollower(class AESPawn** Follower);
	void PostProcessInput(float* DeltaTime, bool* bGamePaused);
	void PlayerLevelUp(int* NewLevel);
	void OnUpdateIsCriticalHealthState(class AActor** Actor, class UHitpointComponent** HitpointComponent, float* DeltaHitpoints, float* DeltaRatio, float* PreviousRatio);
	void OnSequenceFinished();
	void OnReinitShipColors();
	void OnReceivedAIEvent(TEnumAsByte<EAIEvent>* EventId, class APawn** ControlledPawn);
	void OnLeftInterior(class AAreaGate** Gate);
	void OnHealthDepleted(class AActor** Actor, class AActor** DamageCauser, class AController** DamageInstigator, float* DamageAmount);
	void OnEnteredInterior(class AAreaGate** Gate);
	void OnChangeEngineOpacity(float* Value);
	void OnAiWaypointReached();
	void OnAiTickIdle(float* Intervall);
	void OnAiTakeoff();
	void OnAiSelfDestruct();
	void OnAiNoLeader();
	void OnAiJump();
	void OnAiFleeFromTurnfight();
	void OnAiEndTravelToTarget();
	void OnAiEndSpecialAttack();
	void OnAiEndIsTailed();
	void OnAiEndInvestigate();
	void OnAiEndIdle();
	void OnAiEndGainDistance();
	void OnAiEndFlee();
	void OnAiEndCatchUpWithLeader();
	void OnAiEndBarrelRoll();
	void OnAiEndAttack();
	void OnAiBeginTravelToTarget();
	void OnAiBeginSpecialAttack();
	void OnAiBeginKamikazeApproach();
	void OnAiBeginIsTailed();
	void OnAiBeginInvestigate();
	void OnAiBeginIdle();
	void OnAiBeginGainDistance();
	void OnAiBeginFlee();
	void OnAiBeginCatchUpWithLeader();
	void OnAiBeginBarrelRoll();
	void OnAiBeginAttack();
	void OnAiArrivedAtHangar();
	void LeaveInterior(class AAreaGate** Gate);
	bool IsLeader();
	class UItem* GetShipItemInstance();
	class AESPawn* GetLeader();
	void GetFollower(TArray<class AESPawn*>* Follower);
	void EnterInterior(class AAreaGate** Gate);
	void EnableKinematicMode(bool* bEnablePhysics, float* Duration);
	class AESPawn* STATIC_ElectLeaderFromActors(TArray<class AActor*>* Group, bool* TryTeleportFollowerIntoFormation);
	class AESPawn* STATIC_ElectLeader(TArray<class AESPawn*>* Group, bool* TryTeleportFollowerIntoFormation);
	void DisableKinematicMode();
	void Die(class AController** EventInstigator, class APawn** InstigatorPawn, class AActor** DamageCauser);
	void DetermineAreaEnvironment();
	void ClearTargetPreferenceList(TEnumAsByte<ETargetPriority>* Priority);
	void ClearAllTargetPreferenceLists();
	bool CanDoBarrelRoll();
	void ApplyShipDataShipDecals();
	void ApplyShipDataShipColors();
	void AddTargetPreferenceList(TArray<class AActor*>* TargetPreferences, TEnumAsByte<ETargetPriority>* Priority);
	void AddTargetPreference(class AActor** TargetPreference, TEnumAsByte<ETargetPriority>* Priority);
	void AddFollower(class AESPawn** Follower, bool* TryTeleportFollowerIntoFormation);
};


// Class ES2.ESPlayerController
// 0x00C0 (0x0738 - 0x0678)
class AESPlayerController : public APlayerController
{
public:
	bool                                               bIsTravelModeController;                                  // 0x0678(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bClampIngameMousePosition;                                // 0x0679(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x067A(0x0002) MISSED OFFSET
	float                                              MaxMouseSensitivity;                                      // 0x067C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinMouseSensitivity;                                      // 0x0680(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MouseSensitivityExponent;                                 // 0x0684(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MouseInputRotationFactor;                                 // 0x0688(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bJumpTriggered;                                           // 0x068C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCheatMenuShown;                                          // 0x068D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bFreelookActive;                                          // 0x068E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsMovementBlocked;                                       // 0x068F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bActionFreezeActive;                                      // 0x0690(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bFlightModeToggleActive;                                  // 0x0691(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0692(0x0002) MISSED OFFSET
	float                                              UnlockTargetDoubleClickTime;                              // 0x0694(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnAutoPilotChanged;                                       // 0x0698(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnAutoPilotSkipTick;                                      // 0x06A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnAutoPilotSkipEnd;                                       // 0x06B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class ALocation*                                   AutoPilotLocation;                                        // 0x06C8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class AESPawn*                                     ESPawn;                                                   // 0x06D0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<class UInteractComponent*>                  InteractCandidates;                                       // 0x06D8(0x0010) (ExportObject, ZeroConstructor, Transient)
	class UInteractComponent*                          CurrentInteractComponent;                                 // 0x06E8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UUserWidget*                                 CurrentInteractWidget;                                    // 0x06F0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0x40];                                      // 0x06F8(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.ESPlayerController");
		return ptr;
	}


	void TogglePauseMenu_CancelAction();
	void TogglePauseMenu();
	void ToggleActionFreeze();
	void SignUpToJoystickEvents();
	void ShouldShowInteractWidget(class UInteractComponent** InteractComponent, class UClass** WidgetClass, TEnumAsByte<EInteractWidgetDisplayLocation>* DisplayLocation, struct FVector2D* DisplayOffset);
	void ShouldHideInteractWidget(class UInteractComponent** InteractComponent);
	void SetCrosshairToCenter();
	void SetAutoPilot(class ALocation** TargetLocation);
	void ReturnToMainMenu();
	void PushOrPopHideHUDLayers(bool* bPush, bool* bMainLayer, bool* bTopLayer);
	void STATIC_PlayerPawnLookAtTarget(class AActor** Target);
	void PlayerConfirmedSettingJoystickPreset(int* DeviceID, class FString* DeviceName);
	void OpenPauseMenu();
	void OnTurnOnAutoPilot();
	void OnTurnOffAutoPilot();
	void OnToggleHeadLights();
	void OnToggleFreeLook(bool* bEnter);
	void OnToggleActionFreezeCamera();
	void OnSwitchCamera();
	void OnShowOrHidePauseMenu(bool* bShow);
	void OnProcessPlayerInput();
	void OnOpenMap();
	void OnOpenInventory();
	void OnOpenIngameMenu();
	void OnJoystickPluggedIn(int* DeviceID, class FString* DeviceName);
	void OnHighResScreenshot();
	void OnEnterOrExitDeviceSelection(bool* bEnter);
	void OnEnterOrExitControlsDisplay(bool* bEnter);
	void OnEnterOrExitConsumableSelection(bool* bEnter);
	void OnEnterOrExitActionFreeze(bool* bEnter);
	void OnCouldNotCollectPickup(class APickupBase** Pickup);
	void OnCameraZoom(float* Zoom);
	void OnCameraYaw(float* Yaw);
	void OnCameraUp(float* AxisValue);
	void OnCameraRoll(float* Roll);
	void OnCameraRight(float* AxisValue);
	void OnCameraPitch(float* Pitch);
	void OnCameraForward(float* AxisValue);
	void OnAutoPilotSkipTick__DelegateSignature(float* DeltaTime);
	void OnAutoPilotSkipEnd__DelegateSignature();
	void OnAutoPilotChanged__DelegateSignature(bool* bActive);
	bool IsAutoPilotActive();
	void HandleJoystickUnplugged(int* DeviceID);
	void HandleJoystickPluggedIn(int* DeviceID);
	struct FVector GetCrosshairWorldPosition(float* FocusDistance);
	struct FVector GetCrosshairWorldDirection();
	void GetCrosshairPosition(struct FVector2D* CrosshairPosition);
	void EnableMovement();
	void DisableMovement();
	void ClosePauseMenu();
};


// Class ES2.ESRichTextBlockImageDecorator
// 0x0000 (0x0030 - 0x0030)
class UESRichTextBlockImageDecorator : public URichTextBlockImageDecorator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.ESRichTextBlockImageDecorator");
		return ptr;
	}

};


// Class ES2.ESSlider
// 0x0000 (0x04F0 - 0x04F0)
class UESSlider : public USlider
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.ESSlider");
		return ptr;
	}

};


// Class ES2.VariantLib
// 0x0000 (0x0028 - 0x0028)
class UVariantLib : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.VariantLib");
		return ptr;
	}


	struct FVector STATIC_ToVector(struct FESVariant* Variant);
	class FString STATIC_ToString(struct FESVariant* Variant);
	struct FName STATIC_ToName(struct FESVariant* Variant);
	struct FLinearColor STATIC_ToLinearColor(struct FESVariant* Variant);
	int STATIC_ToInt(struct FESVariant* Variant);
	float STATIC_ToFloat(struct FESVariant* Variant);
	TArray<unsigned char> STATIC_ToByteArray(struct FESVariant* Variant);
	bool STATIC_ToBool(struct FESVariant* Variant);
	void STATIC_SetVector(struct FVector* Value, struct FESVariant* Variant);
	void STATIC_SetString(class FString* Value, struct FESVariant* Variant);
	void STATIC_SetName(struct FName* Value, struct FESVariant* Variant);
	void STATIC_SetLinearColor(struct FLinearColor* Value, struct FESVariant* Variant);
	void STATIC_SetInt(int* Value, struct FESVariant* Variant);
	void STATIC_SetFloat(float* Value, struct FESVariant* Variant);
	void STATIC_SetByteArray(TArray<unsigned char>* Value, struct FESVariant* Variant);
	void STATIC_SetBool(bool* Value, struct FESVariant* Variant);
	struct FESVariant STATIC_Conv_VectorToESVariant(struct FVector* Vector);
	struct FESVariant STATIC_Conv_StringToESVariant(class FString* String);
	struct FESVariant STATIC_Conv_NameToESVariant(struct FName* Name);
	struct FESVariant STATIC_Conv_LinearColorToESVariant(struct FLinearColor* LinearColor);
	struct FESVariant STATIC_Conv_IntToESVariant(int* Int);
	struct FESVariant STATIC_Conv_FloatToESVariant(float* Float);
	struct FESVariant STATIC_Conv_BoolToESVariant(bool* Bool);
};


// Class ES2.ESWorldSettings
// 0x0020 (0x04A8 - 0x0488)
class AESWorldSettings : public AWorldSettings
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0488(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.ESWorldSettings");
		return ptr;
	}

};


// Class ES2.FactionComponent
// 0x00C0 (0x01B8 - 0x00F8)
class UFactionComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00F8(0x0008) MISSED OFFSET
	TEnumAsByte<EFactions>                             Faction;                                                  // 0x0100(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0101(0x0003) MISSED OFFSET
	float                                              HitpointRatioNeededToTurnHostile;                         // 0x0104(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TurnHostileNotifyDistance;                                // 0x0108(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIgnoreDamageDealtByFriends;                              // 0x010C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIgnoredByAI;                                             // 0x010D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIgnoredByAIDuringCutscene;                               // 0x010E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x010F(0x0001) MISSED OFFSET
	struct FScriptMulticastDelegate                    TurnedHostileDispatcher;                                  // 0x0110(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ChangedFactionDispatcher;                                 // 0x0120(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnBecameHostileForFaction;                                // 0x0130(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class AWantedLevelManager*                         WantedLevelManager;                                       // 0x0140(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x20];                                      // 0x0148(0x0020) MISSED OFFSET
	TMap<TWeakObjectPtr<class AActor>, float>          AggroMap;                                                 // 0x0168(0x0050) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.FactionComponent");
		return ptr;
	}


	bool TurnNeutralTowards(TEnumAsByte<EFactions>* NeutralTowardsFaction, bool* ResetAggro);
	bool TurnHostileAgainst(TEnumAsByte<EFactions>* HostileFaction, ENotifyAllies* NotifyAllies);
	bool TurnFriendlyTowards(TEnumAsByte<EFactions>* FriendlyTowardsFaction, bool* ResetAggro);
	bool ShouldIgnoreDamageDealtByActor(class AActor** DamageDealerActor);
	void SetFaction(TEnumAsByte<EFactions>* NewFaction);
	void OverrideFactionRelation(TEnumAsByte<EFactions>* FactionToOverride, TEnumAsByte<EFactionRelation>* NewRelation);
	void OnHealthDepleted(class AActor** Actor, class AActor** DamageCauser, class AController** DamageInstigator, float* DamageAmount);
	bool IsFriendlyFire(class AActor** DamageDealerActor);
	bool STATIC_IsEnemyFor(class AActor** ReferenceActor, class AActor** PotentiallyEnemyActor);
	struct FFactionEntry GetRelationTo(class AActor** Actor);
	TEnumAsByte<EFactionRelation> STATIC_GetFactionRelation(TEnumAsByte<EFactions>* FactionA, TEnumAsByte<EFactions>* FactionB);
	float GetDamageDealtByFaction(TEnumAsByte<EFactions>* DamageDealingFaction);
	float GetAccumulatedDamage(class AActor** DamageDealerActor);
	void AddDamage(class AActor** DamageDealerActor, float* Damage, bool* EnforceTurningHostile);
};


// Class ES2.GameData
// 0x0180 (0x01A8 - 0x0028)
class UGameData : public UObject
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0028(0x0038) MISSED OFFSET
	class UItemTemplates*                              ItemTemplates;                                            // 0x0060(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	TMap<struct FName, struct FDockableStationTemplate> DockableStationTemplates;                                 // 0x0068(0x0050) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FHomebaseUpgrade>                    HomebaseUpgrades;                                         // 0x00B8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FSystemData>                         Systems;                                                  // 0x00C8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TMap<struct FName, struct FRegionGrid>             SystemRegions;                                            // 0x00D8(0x0050) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FLocationData>                       Locations;                                                // 0x0128(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FFaction>                            Factions;                                                 // 0x0138(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FFactionGroup>                       FactionGroups;                                            // 0x0148(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData01[0x50];                                      // 0x0158(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.GameData");
		return ptr;
	}


	bool STATIC_IsHomebaseUpgradeUnlocked(struct FName* ID);
	TArray<TEnumAsByte<ESystemRegion>> STATIC_GetSystemRegions(struct FName* SystemID);
	bool STATIC_GetSpaceObjectName(struct FName* ID, struct FText* Name_Out, struct FText* Subtitle_Out);
	bool STATIC_GetHomebaseUpgrade(struct FName* ID, struct FHomebaseUpgrade* HomebaseUpgrade_Out);
	bool STATIC_GetDockableStationTemplate(struct FName* ID, struct FDockableStationTemplate* StationTemplate_Out);
	struct FCollectible STATIC_GetCollectible(struct FName* ID);
	bool FoundCollectible(struct FName* ID);
	bool FindCollectible(struct FName* ID);
};


// Class ES2.GameplayLib
// 0x0000 (0x0028 - 0x0028)
class UGameplayLib : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.GameplayLib");
		return ptr;
	}


	void STATIC_TravelModeGenerateSteeringInputForAutoPilot(class APawn** Ship, struct FVector* CurrentWaypoint, struct FVector* Destination, float* OvershootPreventionDistanceKM, float* OversteerPreventionAngle);
	struct FVector STATIC_TravelModeFlyAroundPlanet(class AActor** Ship, class AActor** Destination, class AActor** Planet, float* OrbitRadius, float* HorizonDirOffsetKm);
	bool STATIC_SpawnPickups(class UObject** WorldContextObject, TArray<struct FPickupEntry>* PickupsToSpawn, struct FVector* Location, struct FRotator* Rotation, TArray<class APickupBase*>* SpawnedPickups);
	class APickupBase* STATIC_SpawnPickupFromItem(class UObject** WorldContextObject, class UItem** Item, struct FVector* Location, struct FRotator* Rotation, bool* Success);
	class AESPawn* STATIC_SpawnPawnFromClass(class UObject** WorldContextObject, class UClass** PawnClass, struct FTransform* SpawnTransform);
	class AESPawn* STATIC_SpawnNPCPawnWithParams(class UObject** WorldContextObject, class UClass** NPCClass, struct FTransform* SpawnTransform, struct FSpawnParameter* P);
	class AESPawn* STATIC_SpawnNPCPawn(class UObject** WorldContextObject, class UClass** NPCClass, struct FTransform* SpawnTransform, int* Level, int* Mark, bool* JumpIn);
	void STATIC_SetShipInactiveForPresenting(bool* bInactive);
	void STATIC_SetGraphicsQuality(class UObject** WorldContextObject, TEnumAsByte<EGraphicsQuality>* Quality, struct FGraphicsQualityLevels* QualityLevels);
	class APawn* STATIC_SafeGetControlledPawn(class AController** Controller);
	void STATIC_RestartBehaviorTree(class AActor** Actor);
	void STATIC_RepairCurrentPlayerShip(class UObject** WorldContextObject, float* HitpointsToRepair, int* RepairCostCredits);
	bool STATIC_RemoveProgressToken(struct FName* TokenID);
	void STATIC_RemoveIgnoreIfInferiorTag(class AActor** Actor);
	void STATIC_ReloadLocationAfterShipChange(class UObject** WorldContextObject, bool* bUndockFromStation);
	void STATIC_ReinitNPCLevelingData(class AActor** NPCActor, int* Level, int* NPCMark);
	void STATIC_RefreshPlayerShipData();
	void STATIC_ReenterLocationAndKeepPosition();
	struct FVector STATIC_PredictPhysicsLocation(class AActor** Actor, bool* UseHudMarkerPivot);
	void STATIC_OpenCinematicMap(class UObject** WorldContextObject, int* MovieIndex, bool* bSaveLocationState);
	void STATIC_LookAtTarget(class AActor** ActorThatLooksAt, class AActor** ActorToLookAt);
	void STATIC_KillActorSoftly(class AActor** Actor);
	bool STATIC_IsPlayerPawn(class AActor** PotentialPlayerPawn);
	bool STATIC_IsPlayerDockedToAnyStation();
	bool STATIC_IsPlayerController(class UObject** WorldContextObject, class AController** PotentialPlayerController);
	bool STATIC_IsInTravelMode(class UObject** WorldContextObject);
	bool STATIC_IsInterceptionTakingPlace();
	bool STATIC_IsGamescomBuild();
	bool STATIC_IsGamepadModeEnabled();
	bool STATIC_IsDeadlyNPCForPlayer(class UObject** WorldContextObject, class AActor** Actor);
	bool IsAnyEnemyWithinRange(class AActor** Actor, float* Range);
	void STATIC_HideActorSoftly(class AActor** Actor);
	bool STATIC_HasProgressTokens(TArray<struct FName>* TokenIDs);
	bool STATIC_HasProgressToken(struct FName* TokenID);
	bool STATIC_HasIgnoreIfInferiorTag(class AActor** Actor);
	bool STATIC_HasEnoughCredits(int* QueryAmount);
	int STATIC_GetShipTierAtShipLevel(int* ShipLevel);
	float STATIC_GetRequiredXPForLevel(int* Level, bool* bRelativeToCurrentLevel);
	bool STATIC_GetRepairCostAndAvailabilityAtStation(struct FName* StationID, float* HitpointsToRepair, bool* bRepairAvailable_Out, float* Cost_Out);
	float STATIC_GetRemainingXPForLevelUp();
	TEnumAsByte<EFactionRelation> STATIC_GetRelationTo(class AActor** Actor, class AActor** OtherActor);
	class UProgressTokenIDs* STATIC_GetProgressTokens();
	class UPlayerData* STATIC_GetPlayerData();
	class APlayerController* STATIC_GetPlayerControllerWithoutContext();
	int STATIC_GetNumPlayerShipTiers();
	class AESPawn* STATIC_GetNearestEnemyPawn(class AActor** ReferenceActor, bool* bRegardVisibleEnemiesOnly, float* DistanceOut);
	int STATIC_GetMaxPlayerShipLevel();
	int STATIC_GetMaxPlayerLevel();
	int STATIC_GetMaxLevel();
	int STATIC_GetLevelVariation(int* LevelIn, struct FRandomStream* RandomStream);
	float STATIC_GetLevelUpProgress();
	bool STATIC_GetItemPriceAtStationOrLocation(class UItem** Item, struct FName* ItemID, struct FName* StationID, struct FName* LocationID, struct FStationItemPriceInfo* PriceInfoOut);
	int STATIC_GetItemLevelForLootDrop(class AActor** Actor, struct FRandomStream* RandomStream);
	void STATIC_GetGraphicsQuality(class UObject** WorldContextObject, TEnumAsByte<EGraphicsQuality>* GraphicsQualityOut, struct FGraphicsQualityLevels* QualityLevelsOut, bool* bCustomQualityLevelsSetOut);
	class UGameData* STATIC_GetGameData();
	class AESHUD* STATIC_GetESHUD(class UObject** WorldContextObject);
	class UESGameInstance* STATIC_GetESGameInstance();
	class UItem* STATIC_GetEquippedPlayerItemOfCategory(struct FName* CategoryID);
	TMap<class AActor*, float> STATIC_GetEnemiesSortedByDistance(TEnumAsByte<EFactions>* QueryFaction, struct FVector* QueryLocation);
	class ADockableStation* STATIC_GetDockableStationActor(struct FName* DockableStationID);
	struct FText STATIC_GetDistanceText(bool* bTravelModeScale, float* Distance);
	class UClass* STATIC_GetDamageType(TEnumAsByte<ETypeOfDamage>* TypeOfDamage);
	float STATIC_EvaluateBezier(TArray<struct FVector>* ControlPoints, int* NumPoints, TArray<struct FVector>* OutPoints);
	void STATIC_ESOpenLevel(class UObject** WorldContextObject, struct FName* LevelName, bool* bAbsolute, class FString* Options);
	bool STATIC_DoesPlayerHaveItem(struct FName* ItemID, TEnumAsByte<EInventorySearchType>* SearchType, int* MinAmount);
	bool STATIC_DoesCurrentShipNeedAmmoRefill();
	void STATIC_ChangeToStolenOutlawShip();
	void STATIC_ChangeLocation(class UObject** WorldContextObject, struct FLocationData* OldLocation, struct FLocationData* NewLocation, bool* bDontClearDockingPoint, bool* bSkipSavingLocationState, bool* bDontAutoSave);
	void STATIC_ChangeCredits(int* credits, bool* bWithoutSound);
	bool STATIC_CanRefillAmmoAtStation(struct FName* StationID);
	bool STATIC_ApplyESRadialDamage(class UObject** WorldContextObject, float* EnergyDamage, float* KineticDamage, float* GenericDamage, struct FVector* Origin, float* DamageRadius, TArray<class AActor*>* IgnoreActors, bool* bIsCriticalHit, bool* bIsShieldPiercing, bool* bIsArmorPiercing, class AActor** DamageCauser, class AController** EventInstigator, bool* bDoFullDamage);
	float STATIC_ApplyESPointDamage(class AActor** DamagedActor, float* EnergyDamage, float* KineticDamage, float* GenericDamage, struct FVector* HitFromDirection, struct FHitResult* HitInfo, class AController** EventInstigator, class AActor** DamageCauser, bool* bIsCriticalHit, bool* bIsShieldPiercing, bool* bIsArmorPiercing);
	float STATIC_ApplyESDamage(class AActor** DamagedActor, float* EnergyDamage, float* KineticDamage, float* GenericDamage, class AController** EventInstigator, class AActor** DamageCauser, bool* bIsCriticalHit, bool* bIsShieldPiercing, bool* bIsArmorPiercing);
	bool STATIC_AddXP(float* XP);
	bool STATIC_AddProgressToken(struct FName* TokenID);
	void STATIC_AddPersistentWingmanWithPawn(struct FName* ID, int* WingmanType, class AESPawn** Pawn);
	void STATIC_AddPersistentWingmanWithClassPath(struct FName* ID, int* WingmanType, class FString* ClassPath);
	void STATIC_AddIgnoreIfInferiorTag(class AActor** Actor);
	struct FText STATIC_AbbreviateNumber(float* Number, int* precision, bool* UseGrouping);
};


// Class ES2.GenericLandingComponent
// 0x0000 (0x0260 - 0x0260)
class UGenericLandingComponent : public USceneComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.GenericLandingComponent");
		return ptr;
	}

};


// Class ES2.HealthComponent
// 0x0188 (0x0318 - 0x0190)
class UHealthComponent : public UHitpointComponent
{
public:
	struct FScriptMulticastDelegate                    OnPreHealthDepleted;                                      // 0x0190(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnHealthDepleted;                                         // 0x01A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnHealthChanged;                                          // 0x01B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnShouldActivateEmergencyShield;                          // 0x01C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	float                                              RepairRatePerSecond;                                      // 0x01D0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RepairHitpointsPerNanoBot;                                // 0x01D4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      NanoBotPickupClass;                                       // 0x01D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DamageChanceReductionPercent;                             // 0x01E0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x01E4(0x0004) MISSED OFFSET
	TArray<struct FDamageThreshold>                    DamageThresholds;                                         // 0x01E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FDamagePartEntry>                    DamageParts;                                              // 0x01F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              DamagePartsRepairCostsReductionPercent;                   // 0x0208(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x020C(0x0004) MISSED OFFSET
	struct FBuffableFloat                              IncomingDamageIncreasePercent;                            // 0x0210(0x0040) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FBuffableFloat                              HullDamageDecreasePercent;                                // 0x0250(0x0040) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FBuffableFloat                              HullDamageDecreasePercentAfterArmor;                      // 0x0290(0x0040) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              DamageLimit;                                              // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DamageThreshold;                                          // 0x02D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  RepairSound;                                              // 0x02D8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RemainingHitpointsToRepair;                               // 0x02E0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x02E4(0x0004) MISSED OFFSET
	class AActor*                                      LastDamageCauser;                                         // 0x02E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x10];                                      // 0x02F0(0x0010) MISSED OFFSET
	class UAudioComponent*                             ACRepairSound;                                            // 0x0300(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FHullRepair>                         HullRepairQueue;                                          // 0x0308(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.HealthComponent");
		return ptr;
	}


	void TakeDamage(float* DamageAmount, bool* bIsCritical, class AController** EventInstigator, class AActor** DamageCauser, struct FDamageEvent* DamageEvent, struct FHitResult* HitResult, float* DamageAbsorbed, float* DamageOverkill, bool* IsDead);
	void SetEmergencyShieldPresent(bool* bPresent, float* ActivationThresholdIn, float* InvincibilityDurationIn);
	void OverheatRandomPart(float* DurationSeconds, TArray<class UClass*>* ExcludeDamagePartClasses);
	bool IsDead();
	bool IsAnyComponentDamaged();
	void InitDamageParts(TArray<struct FDamagePartInfo>* DamagePartInfo);
	float GetScheduledHullRepairHitpoints();
	int GetDamage(bool* bRegardScheduledRepairs);
	void EnqueueHullRepair(struct FHullRepair* HullRepairEntry);
	void CreateDamagePartInfo(TArray<struct FDamagePartInfo>* DamagePartInfo);
	void ChangeAllDamageProbabilites(float* Factor);
};


// Class ES2.HudColorDataAsset
// 0x0000 (0x0040 - 0x0040)
class UHudColorDataAsset : public UColorDataAsset
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.HudColorDataAsset");
		return ptr;
	}

};


// Class ES2.SelfRegisteringComponent
// 0x0008 (0x0100 - 0x00F8)
class USelfRegisteringComponent : public UActorComponent
{
public:
	TEnumAsByte<ERegisterIds>                          RegisterId;                                               // 0x00F8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               StartRegistered;                                          // 0x00F9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x00FA(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.SelfRegisteringComponent");
		return ptr;
	}


	void Unregister();
	void Register();
	bool IsRegistered();
	TArray<class AActor*> STATIC_GetAllActorsOfRegistersInRange(class UObject** WorldContextObject, TArray<TEnumAsByte<ERegisterIds>>* RegIds, struct FVector* Origin, float* Range, class AActor** IgnoreActor, bool* bOcclusionCheck);
	TArray<class AActor*> STATIC_GetAllActorsOfRegisterInRange(class UObject** WorldContextObject, TEnumAsByte<ERegisterIds>* RegId, struct FVector* Origin, float* Range, class AActor** IgnoreActor, bool* bOcclusionCheck);
	TArray<class AActor*> STATIC_GetAllActorsOfRegister(TEnumAsByte<ERegisterIds>* RegId);
};


// Class ES2.HUDMarkerComponent
// 0x01E0 (0x02E0 - 0x0100)
class UHUDMarkerComponent : public USelfRegisteringComponent
{
public:
	class UWidgetComponent*                            OnScreenWidgetComp;                                       // 0x0100(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UClass*                                      MarkerWidgetClass;                                        // 0x0108(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ERegisterIds>                          OwningActorType;                                          // 0x0110(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EActivityHudMarkerType                             ActivityHudMarkerType;                                    // 0x0111(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0112(0x0006) MISSED OFFSET
	struct FText                                       ScreenName;                                               // 0x0118(0x0028) (Edit, BlueprintVisible)
	struct FScriptMulticastDelegate                    VisibilityChangedDelegate;                                // 0x0130(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnConditionAdded;                                         // 0x0140(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnConditionTokenCountChanged;                             // 0x0150(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FVector                                     HUDMarkerPivotOffset;                                     // 0x0160(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseCalculatedPivot;                                      // 0x016C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMarkerScalingMethod>                  MarkerScalingMethod;                                      // 0x016D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x016E(0x0002) MISSED OFFSET
	struct FName                                       SpeakerID;                                                // 0x0170(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bNoMarkerWidget;                                          // 0x0178(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bInitiallyHidden;                                         // 0x0179(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bHideHitpoints;                                           // 0x017A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bHasSeenPlayer;                                           // 0x017B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData)
	TEnumAsByte<EAttackOnPlayer>                       AttackOnPlayerType;                                       // 0x017C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAlwaysInRange;                                           // 0x017D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData)
	bool                                               bNoAutoaim;                                               // 0x017E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bLockable;                                                // 0x017F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bShowOnlyWhenOnScreen;                                    // 0x0180(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bShowOnlyWhenHovered;                                     // 0x0181(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bShowOnlyWhenOffScreen;                                   // 0x0182(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x5];                                       // 0x0183(0x0005) MISSED OFFSET
	TArray<TEnumAsByte<EIndicator>>                    DefaultIndicators;                                        // 0x0188(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData03[0x1C];                                      // 0x0198(0x001C) MISSED OFFSET
	bool                                               bIsOccluded;                                              // 0x01B4(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x01B5(0x0003) MISSED OFFSET
	class UInteractComponent*                          AttachedInteractComponent;                                // 0x01B8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TMap<TEnumAsByte<EIndicator>, bool>                Indicators;                                               // 0x01C0(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData05[0x20];                                      // 0x0210(0x0020) MISSED OFFSET
	class UHUDMarkerWidget*                            OffScreenMarkerWidget;                                    // 0x0230(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UHUDMarkerWidget*                            OnScreenMarkerWidget;                                     // 0x0238(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FHUDMarkerData                              LastHUDMarkerData;                                        // 0x0240(0x0098)
	unsigned char                                      UnknownData06[0x8];                                       // 0x02D8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.HUDMarkerComponent");
		return ptr;
	}


	void SetHiddenInHUD(bool* NewHiddenInHUD);
	void SetCloaked(bool* Cloaked);
	void RemoveIndicator(TEnumAsByte<EIndicator>* Indicator);
	void OwnerHealthDepleted(class AActor** Owner, class AActor** DamageCauser, class AController** DamageInstigator, float* DamageAmount);
	bool IsLockable();
	bool IsHiddenInHUD();
	bool IsCloaked();
	bool IsAutoAimable();
	bool HasIndicator(TEnumAsByte<EIndicator>* Indicator);
	struct FText STATIC_GetScreenNameFromActor(class AActor** Actor);
	struct FVector STATIC_GetMarkerPivotInWorldFromActor(class AActor** Actor);
	struct FVector GetMarkerPivotInWorld();
	struct FHUDMarkerData GetLastHUDMarkerData();
	void AttachInteractWidgetToMarker(class UInteractComponent** InteractComponent);
	void AddOrRemoveIndicator(TEnumAsByte<EIndicator>* Indicator, bool* bAdd);
	void AddIndicator(TEnumAsByte<EIndicator>* Indicator);
};


// Class ES2.HUDMarkerWidget
// 0x00E8 (0x0318 - 0x0230)
class UHUDMarkerWidget : public UUserWidget
{
public:
	bool                                               bForceHide;                                               // 0x0230(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0231(0x0007) MISSED OFFSET
	class AActor*                                      OwningActor;                                              // 0x0238(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FHUDMarkerData                              MarkerData;                                               // 0x0240(0x0098) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData01[0x40];                                      // 0x02D8(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.HUDMarkerWidget");
		return ptr;
	}


	void RefreshIndicators(TMap<TEnumAsByte<EIndicator>, bool>* NewIndicators);
	void OnSpottedPlayer();
	void OnOwningActorSet(class AActor** Actor);
	void OnLockedByPlayer();
	void OnFirstShown();
	void OnDetachInteractWidget();
	void OnAttachInteractWidget(class UUserWidget** InteractWidget);
	void Init();
};


// Class ES2.InputLib
// 0x0000 (0x0028 - 0x0028)
class UInputLib : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.InputLib");
		return ptr;
	}


	void STATIC_UnbindActionButtonEvent(struct FInputActionButtonInfo* ActionButtonInfo);
	bool STATIC_ShouldHandleAction(class UObject** WorldContextObject, TEnumAsByte<EInputActionName>* Action, struct FKeyEvent* InKeyEvent);
	void STATIC_SetInputEnabled(bool* bEnabled);
	bool STATIC_IsPositiveKey(class UObject** WorldContextObject, TEnumAsByte<EInputActionName>* Action, struct FKey* InKey);
	bool STATIC_IsModifierPressed(class APlayerController** PlayerController, TEnumAsByte<EInputActionName>* Action, struct FKey* Key);
	bool STATIC_IsKeyForAction(class APlayerController** PlayerController, struct FKeyEvent* InKeyEvent, TEnumAsByte<EInputActionName>* Action);
	bool STATIC_IsKeyAndModifierPressed(class APlayerController** PlayerController, TEnumAsByte<EInputActionName>* Action);
	bool STATIC_IsJoystickConnected(class APlayerController** PlayerController);
	bool STATIC_IsAxisAction(TEnumAsByte<EInputActionName>* Action);
	bool STATIC_IsAnalogInputEventForAction(class APlayerController** PlayerController, struct FAnalogInputEvent* InAnalogInputEvent, TEnumAsByte<EInputActionName>* Action);
	struct FKey STATIC_GetModifierFromCell(int* ModIndex, struct FKeybindingCell* KeybindingCell);
	bool STATIC_GetKeysForAxis(class APlayerController** PlayerController, TEnumAsByte<EInputActionName>* Action, bool* bIsGamePadMode, struct FKey* KeyCombined, struct FKey* KeyPositiveScale, struct FKey* KeyNegativeScale);
	TArray<struct FKey> STATIC_GetKeysForAction(class APlayerController** PlayerController, TEnumAsByte<EInputActionName>* Action, bool* bIsGamePadMode, bool* bIgnoreAxisScale, bool* bIgnoreGamePadMode, TArray<struct FKey>* OUT_Modifiers);
	struct FKey STATIC_GetKeyFromCell(int* KeyIndex, struct FKeybindingCell* KeybindingCell);
	struct FKey STATIC_GetKeyForAction(class APlayerController** PlayerController, TEnumAsByte<EInputActionName>* Action, bool* bIsGamePadMode, struct FKey* OUT_Modifier);
	TArray<class FString> STATIC_GetInputPresetNames();
	struct FInputPresetContainer STATIC_GetInputPresetBindings(EInputPreset* Preset, int* DeviceID, class FString* DeviceName);
	struct FName STATIC_GetInputActionName(TEnumAsByte<EInputActionName>* Action);
	void STATIC_GetDefaultInputBindings(TArray<struct FKeybindingConfig>* Out_Keybindings);
	struct FVector2D STATIC_GetAdjustedCursorDelta(struct FPointerEvent* Input, class AESPlayerController** PC);
	bool STATIC_CompareContexts(TEnumAsByte<EInputActionName>* Action1, TEnumAsByte<EInputActionName>* Action2, bool* bGamepadMode);
	void STATIC_CallActionButtonEventIfBound(struct FInputActionButtonInfo* ActionButtonInfo);
};


// Class ES2.InteractComponent
// 0x01B0 (0x0410 - 0x0260)
class UInteractComponent : public USceneComponent
{
public:
	struct FVector                                     TriggerBoxExtent;                                         // 0x0260(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bShowTriggerInEditor;                                     // 0x026C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x026D(0x0003) MISSED OFFSET
	float                                              MinDistance;                                              // 0x0270(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowHoldInteract;                                       // 0x0274(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowOnlyHold;                                           // 0x0275(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bAutomaticInteractOnHoldFinished;                         // 0x0276(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0277(0x0001) MISSED OFFSET
	float                                              InteractChargeDuration;                                   // 0x0278(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              InteractHoldDuration;                                     // 0x027C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              FeedbackDisplayDuration;                                  // 0x0280(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bInteractNeedsConfirm;                                    // 0x0284(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bMustBeOnScreen;                                          // 0x0285(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bMustBeUnderCrosshair;                                    // 0x0286(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bPreferIfUnderCrosshair;                                  // 0x0287(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInteractWidgetHUDMarkerBehavior>      HUDMarkerBehavior;                                        // 0x0288(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x17];                                      // 0x0289(0x0017) MISSED OFFSET
	class UClass*                                      InteractChargeWidgetClass;                                // 0x02A0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInteractWidgetDisplayLocation>        ChargeWidgetLocation;                                     // 0x02A8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x02A9(0x0003) MISSED OFFSET
	struct FVector2D                                   ChargeWidgetOffset;                                       // 0x02AC(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x02B4(0x0004) MISSED OFFSET
	struct FText                                       InteractChargeText;                                       // 0x02B8(0x0028) (Edit, BlueprintVisible)
	class UClass*                                      InteractConfirmWidgetClass;                               // 0x02D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInteractWidgetDisplayLocation>        ConfirmWidgetLocation;                                    // 0x02D8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x02D9(0x0003) MISSED OFFSET
	struct FVector2D                                   ConfirmWidgetOffset;                                      // 0x02DC(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x02E4(0x0004) MISSED OFFSET
	struct FText                                       InteractConfirmText;                                      // 0x02E8(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       InteractActionText;                                       // 0x0300(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       InteractActionHoldText;                                   // 0x0318(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      InteractFeedbackWidgetClass;                              // 0x0330(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInteractWidgetDisplayLocation>        FeedbackWidgetLocation;                                   // 0x0338(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0339(0x0003) MISSED OFFSET
	struct FVector2D                                   FeedbackWidgetOffset;                                     // 0x033C(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x0344(0x0004) MISSED OFFSET
	struct FText                                       InteractFeedbackText;                                     // 0x0348(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector2D                                   OwnerScreenPosition;                                      // 0x0360(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnInteract;                                               // 0x0368(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnInteractHoldStarted;                                    // 0x0378(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnInteractHold;                                           // 0x0388(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnInteractHoldProgress;                                   // 0x0398(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnInteractHoldAborted;                                    // 0x03A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnSelectionChanged;                                       // 0x03B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnShouldShowWidget;                                       // 0x03C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnShouldHideWidget;                                       // 0x03D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData09[0x8];                                       // 0x03E8(0x0008) MISSED OFFSET
	class UInteractComponentWidget*                    InteractWidget;                                           // 0x03F0(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData10[0x18];                                      // 0x03F8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.InteractComponent");
		return ptr;
	}


	void SetInteractRadius(float* NewRadius);
	void Reset();
	void OnEndOverlapTrigger(class UPrimitiveComponent** OverlappedComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex);
	void OnBeginOverlapTrigger(class UPrimitiveComponent** OverlappedComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex, bool* bFromSweep, struct FHitResult* SweepResult);
	bool IsEnabled();
	float GetHoldProgress();
	float GetChargeRatio();
	void ConfirmInteract(bool* bIgnoreStateAndForce, bool* bIgnoreHold);
};


// Class ES2.InteractComponentWidget
// 0x0028 (0x0258 - 0x0230)
class UInteractComponentWidget : public UUserWidget
{
public:
	TEnumAsByte<EInteractWidgetDisplayLocation>        DisplayLocation;                                          // 0x0230(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0231(0x0003) MISSED OFFSET
	struct FVector2D                                   DisplayOffset;                                            // 0x0234(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x023C(0x0004) MISSED OFFSET
	class UInteractComponent*                          InteractComponent;                                        // 0x0240(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      ActorRef;                                                 // 0x0248(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UHUDMarkerWidget*                            HUDMarkerWidgetAttachParent;                              // 0x0250(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.InteractComponentWidget");
		return ptr;
	}


	void TickInteractionWidget(float* DeltaTime);
	void SetInteractComponent(class UInteractComponent** InteractComponentIn);
	void OnInitWithInteractComponent(class UInteractComponent** NewInteractComponent, class AActor** NewActor);
	void OnDetachedFromMarkerWidget();
	void OnAttachedToMarkerWidget();
};


// Class ES2.Inventory
// 0x00B8 (0x00E0 - 0x0028)
class UInventory : public UObject
{
public:
	TArray<class UItem*>                               PrimaryWeapons;                                           // 0x0028(0x0010) (ZeroConstructor)
	TArray<class UItem*>                               SecondaryWeapons;                                         // 0x0038(0x0010) (ZeroConstructor)
	TArray<class UItem*>                               EnergyCores;                                              // 0x0048(0x0010) (ZeroConstructor)
	TArray<class UItem*>                               Sensors;                                                  // 0x0058(0x0010) (ZeroConstructor)
	TArray<class UItem*>                               Shields;                                                  // 0x0068(0x0010) (ZeroConstructor)
	TArray<class UItem*>                               CargoUnits;                                               // 0x0078(0x0010) (ZeroConstructor)
	TArray<class UItem*>                               Platings;                                                 // 0x0088(0x0010) (ZeroConstructor)
	TArray<class UItem*>                               thrusters;                                                // 0x0098(0x0010) (ZeroConstructor)
	TArray<class UItem*>                               Devices;                                                  // 0x00A8(0x0010) (ZeroConstructor)
	TArray<class UItem*>                               Consumables;                                              // 0x00B8(0x0010) (ZeroConstructor)
	TArray<class UItem*>                               Cargo;                                                    // 0x00C8(0x0010) (ZeroConstructor)
	bool                                               bRespectStackLimits;                                      // 0x00D8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00D9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.Inventory");
		return ptr;
	}


	class FString ToString();
	bool SwapItems(class UItem** Item1, class UItem** Item2);
	void Sort(TEnumAsByte<EInventoryCategory>* Category);
	void SetFirstCargoItem(class UItem** Item);
	bool ResizeInventory(TEnumAsByte<EInventoryCategory>* Category, int* NewSize, bool* AllowShrinking);
	bool ReplaceItemAtIndex(TEnumAsByte<EInventoryCategory>* Category, int* Index, class UItem** NewItem);
	bool ReplaceItem(class UItem** ItemToReplace, class UItem** NewItem);
	int RemoveItemTypeWithAmount(struct FName* TypeID, TEnumAsByte<EInventoryCategory>* Category, int* Amount);
	bool RemoveItem(class UItem** Item);
	bool IsCargoEmpty();
	bool HasSlotsOfCategory(TEnumAsByte<EInventoryCategory>* Category);
	bool HasItemOfType(struct FName* ItemID, TEnumAsByte<EInventoryCategory>* Category);
	bool HasItem(class UItem** Item, TEnumAsByte<EInventoryCategory>* Category);
	int GetTotalStackSpaceForItem(class UItem** Item, TEnumAsByte<EInventoryCategory>* Category);
	int GetTotalCargoSpaceIncreasingAmount(TEnumAsByte<EInventoryCategory>* Category);
	int GetSlotIndexWithLowestAmountForItemType(struct FName* ItemTemplateID);
	int GetSize(TEnumAsByte<EInventoryCategory>* Category);
	int GetNumItemsOfCategory(TEnumAsByte<EInventoryCategory>* Category);
	int GetNumberOfEmptySlots(TEnumAsByte<EInventoryCategory>* Category);
	TArray<class UItem*> GetItemsOfCategoryAndType(TEnumAsByte<EInventoryCategory>* Category, struct FName* TypeID);
	TArray<class UItem*> GetItemsOfCategory(TEnumAsByte<EInventoryCategory>* Category, bool* CullEmpty);
	int GetFreeStackSpaceForItemType(struct FName* ItemTemplateID, TEnumAsByte<EInventoryCategory>* Category);
	class UItem* GetFirstValidItemOfCategory(TEnumAsByte<EInventoryCategory>* Category);
	int GetFirstSlotIndexForStacking(struct FName* ItemTemplateID, TEnumAsByte<EInventoryCategory>* Category);
	int GetFirstEmptySlotIndex(TEnumAsByte<EInventoryCategory>* Category);
	class UItem* GetFirstCargoItem();
	TArray<class UItem*> GetEquippedItems(bool* OnlyModules);
	TArray<class UItem*> GetCargoItemsOfCategory(struct FName* ItemCategoryID);
	class UItem* GetCargoItemOfCategoryWithHighestAmount(struct FName* ItemTemplateID);
	int GetAmountOfItems(struct FName* ItemID, TEnumAsByte<EInventoryCategory>* Category);
	void Consolidate(TEnumAsByte<EInventoryCategory>* Category, bool* ShrinkToFit);
	bool ChangeItemAmountOfType(class UItem** ItemAsTemplate, TEnumAsByte<EInventoryCategory>* Category, int* Change, int* Index, bool* Consolidate);
	bool ChangeAbsoluteItemAmountOfType(class UItem** ItemAsTemplate, TEnumAsByte<EInventoryCategory>* Category, int* Amount, int* Index, bool* Consolidate);
	bool AddItemsOfType(class UItem** ItemAsTemplate, TEnumAsByte<EInventoryCategory>* Category, int* Amount, int* Index);
	int AddItem(class UItem** Item, TEnumAsByte<EInventoryCategory>* Category, int* Index, bool* EnlargeIfNeeded);
};


// Class ES2.InventoryLib
// 0x0000 (0x0028 - 0x0028)
class UInventoryLib : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.InventoryLib");
		return ptr;
	}


	void STATIC_SetShipModulesForShip(int* ShipIndex, TArray<struct FShipModuleState>* NewShipModules);
	void STATIC_SetShipDecalsForShip(int* ShipIndex, struct FName* NewDecalsID);
	void STATIC_SetShipColorsForShip(int* ShipIndex, struct FShipColors* NewShipColors);
	void STATIC_SetCurrentShip(int* PlayerShipIndex);
	void STATIC_ReplaceShipData(struct FShipData* NewShipData, int* ShipIndex);
	void STATIC_ReinitShipAfterPotentialChanges();
	class UInventory* STATIC_MakeCargoInventoryFromItems(TArray<class UItem*>* Items, int* InventorySize, bool* CullEmpty);
	bool STATIC_MakeAndInitAttributeAccessFromItem(struct FName* AttributeID, float* DefaultValue, class UItem** Item, struct FAttributeAccess* InOut_AttributeAccess);
	bool STATIC_IsItemValidForInventoryCategory(class UItem** Item, TEnumAsByte<EInventoryCategory>* InventoryCategory);
	bool STATIC_InitAttributeAccessFromWeaponGlobals(bool* PrimaryWeapon, struct FAttributeAccess* AttributeAccess);
	bool STATIC_InitAttributeAccessFromShip(struct FShipData* ShipData, struct FAttributeAccess* AttributeAccess);
	bool STATIC_InitAttributeAccessFromPlayerGlobals(struct FName* AttributeID, struct FAttributeAccess* AttributeAccess);
	bool STATIC_InitAttributeAccessFromOwner(class AActor** Owner, struct FAttributeAccess* AttributeAccess);
	bool STATIC_InitAttributeAccessFromItem(class UItem** Item, struct FAttributeAccess* AttributeAccess);
	bool STATIC_HasItemOfTypeInCargo(struct FName* ItemID);
	void STATIC_GetWeaponAttributes(bool* PrimaryWeapon, TMap<struct FName, class UItemAttribute*>* GlobalAttributes);
	int STATIC_GetTotalCargoSpaceOfShip(int* ShipIndex);
	bool STATIC_GetShipPrice(class UItem** ShipItem, int* BuyPriceOut, int* TradePriceOut);
	void STATIC_GetResultingStatAttributesForItemSwitch(class UItem** CurrentItem, class UItem** NewItem, TArray<class UItemAttribute*>* PreviewAttributes);
	struct FShipData STATIC_GetPlayerShip(int* PlayerShipIndex);
	void STATIC_GetPlayerAttributes(TMap<struct FName, class UItemAttribute*>* GlobalAttributes);
	class UItemAttribute* STATIC_GetPlayerAttribute(struct FName* AttributeID);
	int STATIC_GetNumShipsOnHomebase();
	int STATIC_GetNumShipSlotsOnHomebase();
	int STATIC_GetNumFreeShipSlotsOnHomebase();
	struct FName STATIC_GetItemCategoryByInventoryCategory(TEnumAsByte<EInventoryCategory>* Category);
	int STATIC_GetItemAmountOfTypeInCargo(struct FName* ItemID);
	class UInventory* STATIC_GetInventoryOfShip(int* PlayerShipIndex);
	class UInventory* STATIC_GetInventoryOfCurrentShip();
	TEnumAsByte<EInventoryCategory> STATIC_GetInventoryCategoryByItemCategory(struct FName* CategoryID);
	int STATIC_GetCurrentShipIndex();
	struct FShipData STATIC_GetCurrentShip();
	class UItemAttribute* STATIC_GetAttributeOfShip(struct FName* AttributeID, struct FShipData* ShipData);
	class UItemAttribute* STATIC_GetAttributeOfPlayer(struct FName* AttributeID);
	struct FShipData STATIC_CreateShipData(class UItem** AlreadyExisitingShipItem, bool* bCreateNewShipModules, bool* bCreateNewShipColors, bool* bCreateNewShipDecals, int* ItemLevel, struct FName* ShipTypeID, struct FShipData* ShipDataIn);
	TEnumAsByte<EShipBuyResult> STATIC_BuyShip(struct FShipData* NewShipData, TEnumAsByte<EShipBuyMode>* BuyMode, struct FName* StationID, class AESPawn** PlayerShip);
	class FString STATIC_AttributeAccessToString(struct FAttributeAccess* AttributeAccess);
	float STATIC_AttributeAccessToFloat(struct FAttributeAccess* AttributeAccess);
	void STATIC_AttributeAccessToBuffableFloat(struct FAttributeAccess* AttributeAccess, struct FBuffableFloat* BuffableFloatOut);
	bool STATIC_AreShipDecalsEqual(struct FShipDecalTextures* arg1, struct FShipDecalTextures* arg2);
	bool STATIC_AreShipColorsEqual(struct FShipColors* arg1, struct FShipColors* arg2);
};


// Class ES2.Item
// 0x00D8 (0x0100 - 0x0028)
class UItem : public UObject
{
public:
	struct FName                                       ItemTemplateID;                                           // 0x0028(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FText                                       Name;                                                     // 0x0030(0x0028) (BlueprintVisible, BlueprintReadOnly)
	int                                                Seed;                                                     // 0x0048(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                NameSeed;                                                 // 0x004C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FText                                       Description;                                              // 0x0050(0x0028) (BlueprintVisible, BlueprintReadOnly)
	int                                                ItemLevel;                                                // 0x0068(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              VirtualLevelOffset;                                       // 0x006C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EItemRarity>                           Rarity;                                                   // 0x0070(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0071(0x0007) MISSED OFFSET
	TArray<class UItemAttribute*>                      Attributes;                                               // 0x0078(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TMap<struct FName, struct FESVariant>              CustomData;                                               // 0x0088(0x0050) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FName>                               InstalledChipIDs;                                         // 0x00D8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FName                                       AffixID;                                                  // 0x00E8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Amount;                                                   // 0x00F0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Ammo;                                                     // 0x00F4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               RecentlyBoughtOrSold;                                     // 0x00F8(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsNew;                                                    // 0x00F9(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x00FA(0x0002) MISSED OFFSET
	float                                              Condition;                                                // 0x00FC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.Item");
		return ptr;
	}


	void SetCustomData(struct FName* ID, struct FESVariant* NewValue, bool* bWasNewlyCreated);
	void SetCondition(float* Value, bool* bUpdatePrice);
	bool SetAttribute(struct FName* AttributeID, float* NewValue);
	bool IsStackable();
	bool IsFullyStacked();
	bool IsCargoSpaceIncreasingItem();
	bool IsCargoSpaceDecreasingItem();
	bool IsCargoSpaceChangingItem();
	struct FText GetTemplateName();
	struct FText GetSubCategoryName();
	struct FName GetSubCategoryID();
	int GetMaxStackAmount();
	struct FText GetCategoryName();
	struct FName GetCategoryID();
	int GetCargoSpaceIncreasingAmount();
	class UItemAttribute* GetAttribute(struct FName* AttributeID);
	bool FindCustomData(struct FName* ID, struct FESVariant* Value_OUT);
};


// Class ES2.ItemAttribute
// 0x0160 (0x0188 - 0x0028)
class UItemAttribute : public UObject
{
public:
	struct FName                                       ItemAttributeID;                                          // 0x0028(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FText                                       Description;                                              // 0x0030(0x0028) (BlueprintVisible, BlueprintReadOnly)
	struct FText                                       DescriptionBuffed;                                        // 0x0048(0x0028) (BlueprintVisible, BlueprintReadOnly)
	struct FBuffableFloat                              Value;                                                    // 0x0060(0x0040) (BlueprintVisible, BlueprintReadOnly)
	float                                              ValuePositionInRange;                                     // 0x00A0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00A4(0x0004) MISSED OFFSET
	class FString                                      ValueString;                                              // 0x00A8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class FString                                      ValueStringBuffed;                                        // 0x00B8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               bMandatory;                                               // 0x00C8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsLegendaryAttribute;                                    // 0x00C9(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsHeroAttribute;                                         // 0x00CA(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x00CB(0x0001) MISSED OFFSET
	float                                              MinValue;                                                 // 0x00CC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxValue;                                                 // 0x00D0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x00D4(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnDescriptionChanged;                                     // 0x00D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData03[0xA0];                                      // 0x00E8(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.ItemAttribute");
		return ptr;
	}


	void SetParentCompoundAttribute(class UItemAttribute** ParentAttribute);
	void SetGlobalBuffAttribute(class UItemAttribute** _BuffAttribute);
	void SetAutomaticTextUpdate(bool* bEnable);
	struct FText GetDescriptionText(bool* BuffedValue);
};


// Class ES2.ItemContainer
// 0x0068 (0x0398 - 0x0330)
class AItemContainer : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0330(0x0008) MISSED OFFSET
	class UMovementRootComponent*                      CollisionRootComp;                                        // 0x0338(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class USelfRegisteringComponent*                   SelfRegistering;                                          // 0x0340(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UHUDMarkerComponent*                         HUDMarker;                                                // 0x0348(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UInteractComponent*                          Interact;                                                 // 0x0350(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UHealthComponent*                            Health;                                                   // 0x0358(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class USaveGameComponent*                          SaveGame;                                                 // 0x0360(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<EContainerType>                        ContainerType;                                            // 0x0368(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESpawnGroup>                           SpawnGroup;                                               // 0x0369(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x036A(0x0002) MISSED OFFSET
	int                                                CargoSize;                                                // 0x036C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FItemContainerContent>               FixedContents;                                            // 0x0370(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UInventory*                                  Inventory;                                                // 0x0380(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FRandomStream                               RandomStream;                                             // 0x0388(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               bWasOpenedBefore;                                         // 0x0390(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bHideWhenInitiallyEmpty;                                  // 0x0391(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x0392(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.ItemContainer");
		return ptr;
	}


	void SetEmpty();
	void OnContainerOpened();
	bool IsEmpty();
	void InteractWithContainer(class UInteractComponent** InteractComponent, class AActor** InteractActor);
};


// Class ES2.ItemIDs
// 0x07E8 (0x0810 - 0x0028)
class UItemIDs : public UObject
{
public:
	struct FName                                       ID_CAT_ENERGY_CORE;                                       // 0x0028(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_ENERGY_CORE;                                      // 0x0030(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_ENERGY_CORE_PLANCK_INSULATOR;                     // 0x0038(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_CAT_SHIELD;                                            // 0x0040(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_SHIELD;                                           // 0x0048(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_SHIELD_XC;                                        // 0x0050(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_SHIELD_ST;                                        // 0x0058(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_SHIELD_OMNI_PROTECTOR;                            // 0x0060(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_SHIELD_GAMMA_III;                                 // 0x0068(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_CAT_PLATING;                                           // 0x0070(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_PLATING;                                          // 0x0078(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_PLATING_KINETIC;                                  // 0x0080(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_PLATING_ENERGY;                                   // 0x0088(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_PLATING_EXPLOSIVE;                                // 0x0090(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_PLATING_HEAT;                                     // 0x0098(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_PLATING_THORON;                                   // 0x00A0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_CAT_SENSOR;                                            // 0x00A8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_SENSOR;                                           // 0x00B0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_SENSOR_EXPLORERS_DELIGHT;                         // 0x00B8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_CAT_THRUSTERS;                                         // 0x00C0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_THRUSTERS;                                        // 0x00C8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_THRUSTERS_CRUISE;                                 // 0x00D0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_THRUSTERS_BOOST;                                  // 0x00D8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_THRUSTERS_OVERTAKER;                              // 0x00E0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_CAT_CARGO_UNIT;                                        // 0x00E8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_CARGO_UNIT;                                       // 0x00F0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_CARGO_UNIT_HEAVY_STOWAGE;                         // 0x00F8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_CAT_WEAPON;                                            // 0x0100(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_SUB_CAT_PULSE_LASER;                                   // 0x0108(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_PULSE_LASER;                                      // 0x0110(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_BENCA_COMET;                                      // 0x0118(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_SUB_CAT_BEAM_LASER;                                    // 0x0120(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_BEAM_LASER;                                       // 0x0128(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_AGENT_OF_REDEMPTION;                              // 0x0130(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_SUB_CAT_RAIL_GUN;                                      // 0x0138(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_RAIL_GUN;                                         // 0x0140(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_RISING_MOON;                                      // 0x0148(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_SUB_CAT_AUTOCANNON;                                    // 0x0150(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_AUTOCANNON;                                       // 0x0158(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_STARRED_DEATH;                                    // 0x0160(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_SUB_CAT_SCATTER_GUN;                                   // 0x0168(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_SCATTER_GUN;                                      // 0x0170(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_SUB_CAT_BLASTER;                                       // 0x0178(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_BLASTER;                                          // 0x0180(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_STARFALL;                                         // 0x0188(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_SUB_CAT_FLAK;                                          // 0x0190(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_BARON_FLAK_11K_V5;                                // 0x0198(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_BARON_PENDULUM;                                   // 0x01A0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_SUB_CAT_COIL_GUN;                                      // 0x01A8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_COIL_GUN;                                         // 0x01B0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_CAT_LAUNCHER;                                          // 0x01B8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_SUB_CAT_MISSILE_LAUNCHER;                              // 0x01C0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_LAUNCHER_HOMING_MISSILE;                          // 0x01C8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_LAST_STAND;                                       // 0x01D0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_SUB_CAT_MINE_LAUNCHER;                                 // 0x01D8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_LAUNCHER_MINES;                                   // 0x01E0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_CAT_DEVICE;                                            // 0x01E8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_SUB_CAT_DEVICE_BUILT_IN_SCOUT;                         // 0x01F0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_CLOAK;                                            // 0x01F8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_SUB_CAT_DEVICE_BUILT_IN_SENTINEL;                      // 0x0200(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_EMP_GENERATOR;                                    // 0x0208(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_SUB_CAT_DEVICE_BUILT_IN_PATROL;                        // 0x0210(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_TELEPORTER;                                       // 0x0218(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_SUB_CAT_DEVICE_BUILT_IN_DEFENDER;                      // 0x0220(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_FRONT_SHIELD_GENERATOR;                           // 0x0228(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_SUB_CAT_DEVICE_BUILT_IN_INTERCEPTOR;                   // 0x0230(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_WEAPON_OVERDRIVE;                                 // 0x0238(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_SUB_CAT_DEVICE_GENERAL;                                // 0x0240(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_ENERGIZED_BOOST;                                  // 0x0248(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_CAT_DEVICE_MODE;                                       // 0x0250(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_ENERGIZED_BOOST_MODE_2;                           // 0x0258(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_ENERGIZED_BOOST_MODE_3;                           // 0x0260(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_ENERGIZED_BOOST_MODE_4;                           // 0x0268(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_TELEPORTER_MODE_2;                                // 0x0270(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_TELEPORTER_MODE_3;                                // 0x0278(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_TELEPORTER_MODE_4;                                // 0x0280(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_CAT_PERK;                                              // 0x0288(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_SUB_CAT_PERK_SET_2;                                    // 0x0290(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_PERK_RAPID_CORROSION;                             // 0x0298(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_PERK_CREEPING_DEATH;                              // 0x02A0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_PERK_MINION_MASTER;                               // 0x02A8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_SUB_CAT_PERK_SET_3;                                    // 0x02B0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_PERK_EXIT_STRATEGY;                               // 0x02B8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_PERK_EMERGENCY_SHIELD;                            // 0x02C0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_PERK_HEIR_TO_THE_HULL;                            // 0x02C8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_SUB_CAT_PERK_SET_4;                                    // 0x02D0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_PERK_PERCUSSIVE_MAINTENANCE;                      // 0x02D8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_PERK_DOWNTIME_WARRIOR;                            // 0x02E0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_PERK_BEST_DEFENCE;                                // 0x02E8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_SUB_CAT_PERK_SET_5;                                    // 0x02F0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_PERK_CLEAN_SWEEP;                                 // 0x02F8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_PERK_UNCONDITIONAL_LOVE;                          // 0x0300(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_PERK_NO_PAIN_NO_GAIN;                             // 0x0308(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_SUB_CAT_PERK_SET_6;                                    // 0x0310(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_PERK_TWO_FOR_ONE;                                 // 0x0318(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_PERK_CRITICAL_ACCLAIM;                            // 0x0320(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_PERK_FURIOUS_EDGING;                              // 0x0328(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_SUB_CAT_PERK_SET_7;                                    // 0x0330(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_PERK_DEUS_EX_MACHINA;                             // 0x0338(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_PERK_PASSING_THROUGH;                             // 0x0340(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_PERK_ENDURANCE_TEST;                              // 0x0348(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_CAT_SHIP_PERK;                                         // 0x0350(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_SUB_CAT_SHIP_PERK_PATROL;                              // 0x0358(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_SHIP_PERK_PATROL_BOOST;                           // 0x0360(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_SHIP_PERK_PATROL_TELEPORT_SHIELD;                 // 0x0368(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_SHIP_PERK_PATROL_TELEPORT_DPS;                    // 0x0370(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_SHIP_PERK_PATROL_TELEPORT_DAMAGE;                 // 0x0378(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_SHIP_PERK_PATROL_TELEPORT_EXTRA_CHARGE;           // 0x0380(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_SUB_CAT_SHIP_PERK_SCOUT;                               // 0x0388(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_SHIP_PERK_SCOUT_WEAPON_RANGE;                     // 0x0390(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_SHIP_PERK_SCOUT_CLOAK_ENERGY;                     // 0x0398(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_SUB_CAT_SHIP_PERK_SPEC_OPS;                            // 0x03A0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_SHIP_PERK_SPEC_OPS_COOLDOWNS;                     // 0x03A8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_SHIP_PERK_SPEC_OPS_DAMAGE;                        // 0x03B0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_SUB_CAT_SHIP_PERK_ASSAULT_FIGHTER;                     // 0x03B8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_SHIP_PERK_ASSAULT_FIGHTER_DAMAGE_CLOSE;           // 0x03C0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_SHIP_PERK_ASSAULT_FIGHTER_DAMAGE_IMPAIRED;        // 0x03C8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_SUB_CAT_SHIP_PERK_SENTINEL;                            // 0x03D0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_SHIP_PERK_SENTINEL_COOLDOWNS;                     // 0x03D8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_SHIP_PERK_SENTINEL_SPEED;                         // 0x03E0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_SUB_CAT_SHIP_PERK_INTERCEPTOR;                         // 0x03E8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_SHIP_PERK_INTERCEPTOR_DPS;                        // 0x03F0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_SHIP_PERK_INTERCEPTOR_PRIMARY_SLOT;               // 0x03F8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_SUB_CAT_SHIP_PERK_GUNSHIP;                             // 0x0400(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_SHIP_PERK_GUNSHIP_LASER_TURRET;                   // 0x0408(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_SHIP_PERK_GUNSHIP_GATLING_TURRET;                 // 0x0410(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_SUB_CAT_SHIP_PERK_BOMBER;                              // 0x0418(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_SHIP_PERK_BOMBER_BLAST_RADIUS;                    // 0x0420(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_SHIP_PERK_BOMBER_SECONDARY_SLOT;                  // 0x0428(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_SUB_CAT_SHIP_PERK_DEFENDER;                            // 0x0430(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_SHIP_PERK_DEFENDER_SHIELD_COOLDOWN;               // 0x0438(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_CAT_CONSUMABLE;                                        // 0x0440(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_DAMAGE_BOOSTER;                                   // 0x0448(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_ENERGY_INJECTOR;                                  // 0x0450(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_NANOBOTS_SMALL;                                   // 0x0458(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_NANOBOTS_MEDIUM;                                  // 0x0460(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_NANOBOTS_LARGE;                                   // 0x0468(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_NANO_INJECTOR;                                    // 0x0470(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_PLASMA_CLOUD_ANALYZER;                            // 0x0478(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_STICKY_TURRET;                                    // 0x0480(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_CAT_SHIP;                                              // 0x0488(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_SUB_CAT_SHIP_LIGHT;                                    // 0x0490(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_SHIP_LIGHT_PATROL;                                // 0x0498(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_SHIP_LIGHT_SCOUT;                                 // 0x04A0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_SHIP_LIGHT_SPEC_OPS;                              // 0x04A8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_SUB_CAT_SHIP_MEDIUM;                                   // 0x04B0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_SHIP_MEDIUM_ASSAULT;                              // 0x04B8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_SHIP_MEDIUM_SENTINEL;                             // 0x04C0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_SHIP_MEDIUM_INTERCEPTOR;                          // 0x04C8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_SUB_CAT_SHIP_HEAVY;                                    // 0x04D0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_SHIP_HEAVY_GUNSHIP;                               // 0x04D8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_SHIP_HEAVY_BOMBER;                                // 0x04E0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_SHIP_HEAVY_DEFENDER;                              // 0x04E8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_SUB_CAT_SHIP_MINING;                                   // 0x04F0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_SHIP_MINING;                                      // 0x04F8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_CAT_CREDITS;                                           // 0x0500(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_CREDITS;                                          // 0x0508(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_CAT_ITEM;                                              // 0x0510(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_SUB_CAT_RESOURCE_ORE;                                  // 0x0518(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_ORE_IRON;                                         // 0x0520(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_ORE_COPPER;                                       // 0x0528(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_ORE_DILUTED_OSNIL;                                // 0x0530(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_ORE_GLACIT;                                       // 0x0538(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_ORE_SILVER;                                       // 0x0540(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_ORE_CLYMOUTH;                                     // 0x0548(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_ORE_OSNIL;                                        // 0x0550(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_ORE_OSNIL_CORE;                                   // 0x0558(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_ORE_STAKK;                                        // 0x0560(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_ORE_GOLD;                                         // 0x0568(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_ORE_CLYMOUTH_CORE;                                // 0x0570(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_ORE_FLAWLESS_OSNIL;                               // 0x0578(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_ORE_TITANIUM;                                     // 0x0580(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_ORE_STAKK_CORE;                                   // 0x0588(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_ORE_NEPTAN_121;                                   // 0x0590(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_ORE_WIGHORD;                                      // 0x0598(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_ORE_WIGHORD_CORE;                                 // 0x05A0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_SUB_CAT_RESOURCE_DARK_MATTER;                          // 0x05A8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_DARK_MATTER;                                      // 0x05B0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_SUB_CAT_RESOURCE_CRYSTAL;                              // 0x05B8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_CRYSTAL_ATHEUM;                                   // 0x05C0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_CRYSTAL_VARDUM;                                   // 0x05C8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_SUB_CAT_RESOURCE_PLASMA;                               // 0x05D0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_PLASMA;                                           // 0x05D8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_SUB_CAT_RESOURCE_PROCESSED;                            // 0x05E0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_IRON_PLATE;                                       // 0x05E8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_COPPER_INGOT;                                     // 0x05F0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_OSNIL_PLATE;                                      // 0x05F8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_GLACIT_POWDER;                                    // 0x0600(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_VARDUM_LENS;                                      // 0x0608(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_PLASMA_CELL;                                      // 0x0610(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_SILVER_INGOT;                                     // 0x0618(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_BIOCATALYST;                                      // 0x0620(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_SUB_CAT_RESOURCE_TEC;                                  // 0x0628(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_T1_PROCESSOR;                                     // 0x0630(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_SCRAP_METAL;                                      // 0x0638(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_SUPRA_GEL;                                        // 0x0640(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_POWER_CELL;                                       // 0x0648(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_COOLING_UNIT;                                     // 0x0650(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_SIGNAL_DECODER;                                   // 0x0658(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_INERTIAL_DAMPENERS;                               // 0x0660(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_ENERGY_CHARGER;                                   // 0x0668(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_WIRING_KIT;                                       // 0x0670(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_ANTIGRAV_MODULE;                                  // 0x0678(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_DIAGNOSTIC_SYSTEM;                                // 0x0680(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_SHORT_RANGE_SENSOR;                               // 0x0688(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_AI_CONTROLLER;                                    // 0x0690(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_TARGETING_SYSTEM;                                 // 0x0698(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_FREQUENCY_SYNTHESIZER;                            // 0x06A0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_POWER_UNIT_HX1;                                   // 0x06A8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_STEERING_NOZZLES;                                 // 0x06B0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_HEAT_DETECTOR;                                    // 0x06B8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_BROADCASTING_UNIT;                                // 0x06C0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_THREAT_DETECTOR;                                  // 0x06C8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_ANTI_G_COATING;                                   // 0x06D0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_NEUTRON_MEMBRANE;                                 // 0x06D8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_PARTICLE_ACCELERATOR;                             // 0x06E0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_LONG_RANGE_SENSOR;                                // 0x06E8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_SIGNAL_CIRCULATOR;                                // 0x06F0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_ADVANCED_AI_CONTROLLER;                           // 0x06F8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_POWER_UNIT_HX2;                                   // 0x0700(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_CAMOUFLAGE_ARRAY;                                 // 0x0708(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_DAMAGE_AMPLIFIER;                                 // 0x0710(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_TRIANGULATION_ROUTINE;                            // 0x0718(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_TURBINE_ENGINE;                                   // 0x0720(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_PULSE_MUTATOR;                                    // 0x0728(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_JUMP_CORE;                                        // 0x0730(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_REACTIVE_PLATE;                                   // 0x0738(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_BLOCKER_BLOCKER;                                  // 0x0740(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_FISSION_CONTROLLER;                               // 0x0748(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_GAUSS_RECEPTOR;                                   // 0x0750(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_MILITARY_DEFLECTOR;                               // 0x0758(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_ECHO_CANCELLER;                                   // 0x0760(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_MOTION_MODULATOR;                                 // 0x0768(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_TACHYON_EMITTER;                                  // 0x0770(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_SUB_CAT_COMMODITY;                                     // 0x0778(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_LIQUOR;                                           // 0x0780(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_MEDICINE;                                         // 0x0788(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_SYNTHETIC_MEAT;                                   // 0x0790(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_MINING_EQUIPMENT;                                 // 0x0798(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_CLOTHING;                                         // 0x07A0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_SEEDS;                                            // 0x07A8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_SMALL_ARMS;                                       // 0x07B0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_SOLAR_PANELS;                                     // 0x07B8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_WORKER_DRONE;                                     // 0x07C0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_NANOFIBER;                                        // 0x07C8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_APOLLOX_ENERGY_DRINK;                             // 0x07D0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_CYBERNETIC_IMPLANTS;                              // 0x07D8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_EARTH_WINE;                                       // 0x07E0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_CAMDON_ENZYME;                                    // 0x07E8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_BLACK_COFFEE;                                     // 0x07F0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_SUB_CAT_MISSION;                                       // 0x07F8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_SEALED_CONTAINER;                                 // 0x0800(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID_ITEM_SYSTEM_SCANNER;                                   // 0x0808(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.ItemIDs");
		return ptr;
	}

};


// Class ES2.ItemLib
// 0x0000 (0x0028 - 0x0028)
class UItemLib : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.ItemLib");
		return ptr;
	}


	void STATIC_SetPerks(TArray<struct FName>* PerkIDs);
	void STATIC_SetModeForDevice(struct FName* DeviceItemID, struct FName* DeviceModeItemID);
	void STATIC_SetItemAttributeCustomText(class UItem** Item, struct FName* AttributeID, struct FText* FormatText, struct FText* ValueText);
	class UItemAttribute* STATIC_MakeTransientAttributeInstance(struct FName* AttributeID, float* Value, bool* bIsMandatory);
	bool STATIC_IsPlayerCompoundAttribute(struct FName* AttributeID);
	bool STATIC_IsModuleItem(class UItem** Item);
	bool STATIC_IsEquipmentItem(class UItem** Item);
	TArray<struct FName> STATIC_GetSubItemIDs(struct FName* CategoryOrSubCategoryID);
	bool STATIC_GetShipSettings(struct FName* PlayerShipID, struct FShipSettingsTableRow* ShipSettingsOut);
	struct FShipModule STATIC_GetShipModule(struct FName* ShipID, struct FName* ModuleID);
	struct FShipDecalTextures STATIC_GetShipDecalTextures(struct FName* DecalsID);
	int STATIC_GetRandomResourceAmountForRarity(TEnumAsByte<EItemRarity>* Rarity, struct FRandomStream* RandomStream);
	class FString STATIC_GetPickupClassPathForItemCategory(struct FName* ItemCategory, struct FName* ItemSubCategory);
	bool STATIC_GetPerkIDsForSet(int* SetNumber, TArray<struct FName>* PerkIDs);
	TArray<class UItem*> STATIC_GetModesForDevice(struct FName* DeviceItemID);
	class UItem* STATIC_GetModeForEquippedDevice(class ADeviceBase** EquippedDevice);
	struct FName STATIC_GetModeForDevice(struct FName* DeviceItemID);
	int STATIC_GetMaxAmmo(class UItem** Item);
	bool STATIC_GetItemValueRange(struct FName* ItemID, struct FName* AttributeID, struct FItemValueRange* Out_Range);
	TArray<struct FItemTemplate> STATIC_GetItemTemplates();
	struct FItemTemplate STATIC_GetItemTemplate(struct FName* ID);
	int STATIC_GetItemPrice(class UItem** Item);
	bool STATIC_GetItemNameByID(struct FName* ID, struct FText* ResultText);
	class UItemIDs* STATIC_GetItemIDs();
	void STATIC_GetItemAttributes(class UItem** Item, TArray<class UItemAttribute*>* HeroAttributesOut, TArray<class UItemAttribute*>* MandatoryAttributesOut, TArray<class UItemAttribute*>* RandomAttributesOut);
	struct FText STATIC_GetDescriptionWithoutNumbers(class UItemAttribute** AttributeInstance);
	int STATIC_GetCurrentAmmo(class UItem** Item);
	struct FItemChipValue STATIC_GetChipValueForItem(class UItem** Item, struct FItemChip* ItemChip);
	TArray<struct FItemChip> STATIC_GetChips();
	struct FItemChip STATIC_GetChip(struct FName* ID);
	TArray<struct FItemAttributeTemplate> STATIC_GetAttributeTemplates();
	struct FItemAttributeTemplate STATIC_GetAttributeTemplate(struct FName* ID);
	TArray<struct FCompoundAttributeEntry> STATIC_GetAttributesOfCompound(struct FName* AttributeID, float* CompoundValueToConvert);
	class UAttributeIDs* STATIC_GetAttributeIDs();
	struct FText STATIC_GetAttributeDescription(class UItemAttribute** AttributeInstance, bool* bUseBuffedValue, struct FText* FormatedValueText, struct FText* ValueText, class FString* ValueString);
	void STATIC_GetAttributeChangesFromCompoundsAtLevelUp(int* FromLevel, int* ToLevel, TArray<class UItemAttribute*>* PreviewAttributes);
	TArray<struct FName> STATIC_GetAllLootCategories();
	TArray<struct FItemTemplate> STATIC_GetAllItemTemplatesOfCategory(struct FName* CategoryOrSubCategoryID);
	TArray<struct FName> STATIC_GenerateShipPerks(TEnumAsByte<EShip>* ShipType, int* ShipTier);
	void STATIC_GenerateShipModulesForShip(struct FName* ShipID, int* TierMin, int* TierMax, TArray<struct FShipModuleState>* OUT_ShipModules);
	void STATIC_GenerateShipDecals(struct FName* DecalsIDOut);
	void STATIC_GenerateShipColors(struct FName* DesiredColorsID, struct FShipColors* ShipColorsOut);
	class UItem* STATIC_GenerateItem(int* ItemLevel, TEnumAsByte<EItemRarity>* Rarity, struct FName* CategoryID, struct FName* TypeID);
	class UItem* STATIC_DuplicateItem(class UItem** OriginalItem, int* NewAmount);
	void STATIC_CheatSetShipModules(class AESPawn** PlayerPawn, TArray<struct FShipModuleState>* NewShipModules);
	void STATIC_CheatChangeShipModule(class AESPawn** PlayerPawn, TEnumAsByte<EShipModule>* ModuleType, bool* bPrevious);
	void STATIC_AddChipToItem(class UItem** Item, struct FItemChip* ItemChip);
};


// Class ES2.ItemTemplates
// 0x0220 (0x0248 - 0x0028)
class UItemTemplates : public UObject
{
public:
	TArray<struct FItemAttributeTemplate>              AttributeTemplates;                                       // 0x0028(0x0010) (ZeroConstructor)
	TArray<struct FItemTemplate>                       ItemTemplates;                                            // 0x0038(0x0010) (ZeroConstructor)
	TArray<struct FItemChip>                           Chips;                                                    // 0x0048(0x0010) (ZeroConstructor)
	TArray<struct FItemNameElement>                    ItemNameElements;                                         // 0x0058(0x0010) (ZeroConstructor)
	TArray<struct FCompoundAttributeEntry>             CompoundAttributeEntries;                                 // 0x0068(0x0010) (ZeroConstructor)
	TArray<struct FLootProbabilityForRarity>           LootProbabilitiesForRarity;                               // 0x0078(0x0010) (ZeroConstructor)
	TArray<struct FName>                               PickupDataKeys;                                           // 0x0088(0x0010) (ZeroConstructor)
	TArray<struct FLootDataRow>                        LootDataRows;                                             // 0x0098(0x0010) (ZeroConstructor)
	TArray<struct FPickupDataRow>                      PickupDataRows;                                           // 0x00A8(0x0010) (ZeroConstructor)
	TArray<struct FName>                               LootCategories;                                           // 0x00B8(0x0010) (ZeroConstructor)
	TArray<struct FLootResourceAmountRow>              LootResourceAmountRows;                                   // 0x00C8(0x0010) (ZeroConstructor)
	TArray<class FString>                              LootPickupClasses;                                        // 0x00D8(0x0010) (ZeroConstructor)
	TMap<TEnumAsByte<ESpawnGroup>, struct FSpawnGroupComposition> GroupComposition;                                         // 0x00E8(0x0050) (ZeroConstructor)
	TArray<TEnumAsByte<ESpawnGroup>>                   SubSpawnGroupTypes;                                       // 0x0138(0x0010) (ZeroConstructor)
	TMap<struct FName, struct FLocationSpawns>         LocationSpawns;                                           // 0x0148(0x0050) (ZeroConstructor)
	TMap<TEnumAsByte<ESystemRegion>, struct FLocationSpawns> RegionSpawns;                                             // 0x0198(0x0050) (ZeroConstructor)
	TArray<class FString>                              SpawnClassNames;                                          // 0x01E8(0x0010) (ZeroConstructor)
	TArray<class FString>                              SpawnClassFolderNames;                                    // 0x01F8(0x0010) (ZeroConstructor)
	TArray<struct FCollectible>                        Collectibles;                                             // 0x0208(0x0010) (ZeroConstructor)
	TArray<struct FPOITemplate>                        POITemplates;                                             // 0x0218(0x0010) (ZeroConstructor)
	TArray<struct FPOIDistribution>                    POIWeights;                                               // 0x0228(0x0010) (ZeroConstructor)
	TArray<struct FItemAffix>                          ItemAffixes;                                              // 0x0238(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.ItemTemplates");
		return ptr;
	}


	TEnumAsByte<ESpawnGroup> STATIC_GetSpawnGroupOfFaction(TEnumAsByte<EFactions>* Faction);
	TEnumAsByte<EShip> STATIC_GetShipTypeFromShipItemID(struct FName* ShipID);
	struct FName STATIC_GetShipItemIDFromShipType(TEnumAsByte<EShip>* ShipType);
	struct FName STATIC_GetBuiltInDeviceSubCategoryForShip(TEnumAsByte<EShip>* ShipType);
};


// Class ES2.JoystickPluginAccessor
// 0x0028 (0x0050 - 0x0028)
class UJoystickPluginAccessor : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.JoystickPluginAccessor");
		return ptr;
	}

};


// Class ES2.JumpDriveComponent
// 0x0240 (0x0338 - 0x00F8)
class UJumpDriveComponent : public UActorComponent
{
public:
	float                                              OrbitJumpChargeDuration;                                  // 0x00F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              JumpDuration;                                             // 0x00FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CruiseModeChargeDuration;                                 // 0x0100(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CruiseModeChargeDelay;                                    // 0x0104(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CruiseModeEnemyDistance;                                  // 0x0108(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x010C(0x0004) MISSED OFFSET
	class USoundBase*                                  OrbitJumpChargeSound;                                     // 0x0110(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  OrbitJumpChargeDownSound;                                 // 0x0118(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  OrbitJumpSound;                                           // 0x0120(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  NPCJumpInSound;                                           // 0x0128(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ChargeSoundFadeOutDuration;                               // 0x0130(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EJumpMethod>                           TriggeredJumpMethod;                                      // 0x0134(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0135(0x0003) MISSED OFFSET
	TArray<struct FJumpTypeSound>                      JumpTypeSounds;                                           // 0x0138(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    OnJumpInCompleted;                                        // 0x0148(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnJumpChargeTicked;                                       // 0x0158(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnJumpChargeCompleted;                                    // 0x0168(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnJumpCompleted;                                          // 0x0178(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnJumpChargeStarted;                                      // 0x0188(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnJumpChargeStoppedByOwner;                               // 0x0198(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnJumpChargeDecreasedToZero;                              // 0x01A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnJumpChargeAborted;                                      // 0x01B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnJumpSuppressorAdded;                                    // 0x01C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnJumpSuppressorDestroyed;                                // 0x01D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnAllSuppressorsDestroyed;                                // 0x01E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCruiseModeReady;                                        // 0x01F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCruiseModeCharge;                                       // 0x0208(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCruiseModeChargeKeyDown;                                // 0x0218(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCruiseModeChargeStart;                                  // 0x0228(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCruiseModeChargeEnd;                                    // 0x0238(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCruiseModeStart;                                        // 0x0248(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCruiseModeEnd;                                          // 0x0258(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCruiseModeBlocked;                                      // 0x0268(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCruiseModeEnemiesTooClose;                              // 0x0278(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCruiseModeCanBeUsedChange;                              // 0x0288(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnJumpDriveCanBeUsedChange;                               // 0x0298(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	TEnumAsByte<EJumpMethod>                           JumpInMethod;                                             // 0x02A8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bBlockedByObstacle;                                       // 0x02A9(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bTriggeredJump;                                           // 0x02AA(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EJumpAbortType>                        LastAbortReason;                                          // 0x02AB(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x02AC(0x0004) MISSED OFFSET
	TArray<class AActor*>                              SuppressionActors;                                        // 0x02B0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData03[0x48];                                      // 0x02C0(0x0048) MISSED OFFSET
	class UAudioComponent*                             ACChargeSound;                                            // 0x0308(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             ACChargeDownSound;                                        // 0x0310(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             ACJumpSound;                                              // 0x0318(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData04[0x18];                                      // 0x0320(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.JumpDriveComponent");
		return ptr;
	}


	bool StartJumpFocus(bool* ResumeChargeProgress);
	void SetTargetLocation(struct FName* LocationID);
	void SetOwnerIsChargingJump(bool* bChargingJump);
	void SetOwnerIsChargingCruiseMode(bool* IsSpooling);
	void SetOwnerIsBoosting(bool* isBoosting);
	void SetCruiseMode(bool* bEnable);
	void SetChargeCruiseModeToTrue();
	void RemoveSuppressionActor(class AActor** SuppresionActor);
	void PostBeginPlay();
	void OwnerHealthDepleted(class AActor** Owner, class AActor** DamageCauser, class AController** Instigator, float* DamageAmount);
	bool IsSuppressed();
	bool IsJumping();
	bool IsInJumpFocus();
	bool IsInCruiseMode();
	void InterruptJumpFocus(float* Duration);
	void InterruptCruiseMode();
	bool HasValidTargetLocation();
	struct FName GetTargetLocationID();
	void GetSignalStrengths(TArray<float>* StrengthsOut);
	float GetCurrentChargePercentage();
	float GetCruiseModeChargeProgess();
	float GetClosestSuppressionSignalStrength();
	void ForceImmediateJump(struct FName* LocationID);
	bool CanJumpDriveBeActivated();
	bool CanCruiseModeBeActivated();
	void CallOnJumpInCompleted();
	void BoostEnergyDepleted();
	void AddSuppressionActor(class AActor** SuppresionActor);
	void AbortJumpFocus(TEnumAsByte<EJumpAbortType>* AbortType, bool* DecreaseAfterAbort);
};


// Class ES2.JumpGate
// 0x01A0 (0x04D0 - 0x0330)
class AJumpGate : public AActor
{
public:
	class UHUDMarkerComponent*                         HUDMarkerComponent;                                       // 0x0330(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class USelfRegisteringComponent*                   SelfRegistering;                                          // 0x0338(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class USceneComponent*                             SceneRoot;                                                // 0x0340(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	struct FName                                       TargetLocationID;                                         // 0x0348(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLocationData                               TargetLocationData;                                       // 0x0350(0x0150) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	unsigned char                                      UnknownData00[0x10];                                      // 0x04A0(0x0010) MISSED OFFSET
	struct FText                                       JumpStateInfo;                                            // 0x04B0(0x0028) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData01[0x8];                                       // 0x04C8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.JumpGate");
		return ptr;
	}

};


// Class ES2.JumpSuppressorComponent
// 0x0028 (0x0120 - 0x00F8)
class UJumpSuppressorComponent : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    OnWasEnabled;                                             // 0x00F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnWasDisabled;                                            // 0x0108(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0118(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.JumpSuppressorComponent");
		return ptr;
	}


	void SetEnabled(bool* Enabled);
	void OwnerHealthDepletedJumpSuppressor(class AActor** Owner, class AActor** DamageCauser, class AController** DamageInstigator, float* DamageAmount);
	bool IsEnabled();
};


// Class ES2.JumpTarget
// 0x0180 (0x04B0 - 0x0330)
class AJumpTarget : public AActor
{
public:
	class USceneComponent*                             SceneRoot;                                                // 0x0330(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UHUDMarkerComponent*                         HUDMarkerComponent;                                       // 0x0338(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class USelfRegisteringComponent*                   SelfRegistering;                                          // 0x0340(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0348(0x0008) MISSED OFFSET
	struct FLocationData                               LocationData;                                             // 0x0350(0x0150) (BlueprintVisible)
	float                                              TravelDistance;                                           // 0x04A0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x04A4(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.JumpTarget");
		return ptr;
	}

};


// Class ES2.Waypoint
// 0x0050 (0x0380 - 0x0330)
class AWaypoint : public AActorPostEditEvent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0330(0x0008) MISSED OFFSET
	class USelfRegisteringComponent*                   SelfRegistering;                                          // 0x0338(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class USaveGameComponent*                          SaveGame;                                                 // 0x0340(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFactionComponent*                           Faction;                                                  // 0x0348(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	TWeakObjectPtr<class UPrimitiveComponent>          CollisionComponent;                                       // 0x0350(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	bool                                               bIsEntry;                                                 // 0x0358(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFactions>                             WaypointFaction;                                          // 0x0359(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x035A(0x0006) MISSED OFFSET
	class AWaypoint*                                   NextWaypoint;                                             // 0x0360(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WaitHereSeconds;                                          // 0x0368(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WaitVariance;                                             // 0x036C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnWaypointReached;                                        // 0x0370(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.Waypoint");
		return ptr;
	}

};


// Class ES2.JumpWaypoint
// 0x0000 (0x0380 - 0x0380)
class AJumpWaypoint : public AWaypoint
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.JumpWaypoint");
		return ptr;
	}

};


// Class ES2.KeyBinder
// 0x0108 (0x0130 - 0x0028)
class UKeyBinder : public UObject
{
public:
	unsigned char                                      UnknownData00[0x100];                                     // 0x0028(0x0100) MISSED OFFSET
	class UObject*                                     JoystickAccessor;                                         // 0x0128(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.KeyBinder");
		return ptr;
	}


	void UpdateActionBindings(class UObject** WorldContextObject);
	void UI_SetKeyBindingInCell(int* GroupIndex, struct FKey* Key1, struct FKey* Mod1, struct FKey* Key2, struct FKey* Mod2, struct FKeybindingCell* REF_KeyBindingCell);
	bool ShouldHaveAssignment(TEnumAsByte<EInputActionName>* Action, int* GroupIndex);
	void ResetKeys(class UObject** WorldContextObject, int* GroupIndex);
	void RemapKeys(class UObject** WorldContextObject, struct FKeybindingConfig* KeybindingUI, struct FKey* Key1, struct FKey* Key2, struct FKey* Modifier1, struct FKey* Modifier2, bool* bInvert, float* DeadZone, float* Sensitivity);
	bool OnKeyDown(class UObject** WorldContextObject, struct FGeometry* MyGeometry, struct FKey* Key, int* CurrentGroupIndex);
	bool MustHaveAssignment(TEnumAsByte<EInputActionName>* Action, int* GroupIndex);
	bool IsAxisInverted(struct FName* AxisName, struct FName* GroupName);
	bool IsAssignedAxisInverted(struct FName* AxisName, struct FName* GroupName);
	void InvertAxis(struct FName* AxisName, struct FName* GroupName, bool* bInvert);
	void InitializeKeysFromConfig(class UObject** WorldContextObject);
	struct FKey GetModifierForAction(struct FName* ActionOrAxisName, struct FKey* PressedKey);
	struct FText GetKeyText(struct FKey* Key);
	void GetKeyBindingsOfCategory(int* Category, TArray<struct FKeybindingConfig>* KeybindingsKeyboard, TArray<struct FKeybindingConfig>* KeybindingsGamepad, TArray<struct FKeybindingConfig>* KeybindingsJoystick);
	struct FText GetDisplayNameForAction(struct FName* ActionOrAxisName, struct FName* GroupName, float* Scale, bool* bIsAxis);
	float GetAssignedSensitivity(struct FName* AxisName, struct FName* GroupName);
	float GetAssignedDeadzone(struct FName* AxisName, struct FName* GroupName);
	void ConfirmChanges(class UObject** WorldContextObject);
	bool CompareKeybindings(struct FKeybindingConfig* Config1, struct FKeybindingConfig* Config2);
	void CheckForInvertedAxes();
	bool CanDoAssignment(struct FKey* Key, struct FKey* Modifier, int* BindingIndex, struct FKeybindingConfig* Config);
};


// Class ES2.LayeredSong
// 0x0098 (0x00C8 - 0x0030)
class ULayeredSong : public UDataAsset
{
public:
	struct FName                                       SongName;                                                 // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   SongCue;                                                  // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Bpm;                                                      // 0x0040(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Bar;                                                      // 0x0044(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLayerTransition                            Transition0To1;                                           // 0x0048(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FLayerTransition                            Transition0To2;                                           // 0x0058(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FLayerTransition                            Transition1To2;                                           // 0x0068(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FLayerTransition                            Transition2To1;                                           // 0x0078(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FLayerTransition                            Transition2To0;                                           // 0x0088(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FLayerTransition                            Transition1To0;                                           // 0x0098(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FEndTransition                              EndTransition;                                            // 0x00A8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FSting>                              Stings;                                                   // 0x00B8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.LayeredSong");
		return ptr;
	}


	struct FLayerTransition GetLayerTransition(int* From, int* To);
};


// Class ES2.LocationsSave
// 0x0010 (0x0038 - 0x0028)
class ULocationsSave : public USaveGame
{
public:
	TArray<struct FLocationData>                       LocationsData;                                            // 0x0028(0x0010) (ZeroConstructor, SaveGame)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.LocationsSave");
		return ptr;
	}

};


// Class ES2.Location
// 0x0170 (0x04A0 - 0x0330)
class ALocation : public AActor
{
public:
	struct FLocationData                               LocationData;                                             // 0x0330(0x0150) (Edit, BlueprintVisible)
	bool                                               bIsOccluded;                                              // 0x0480(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData)
	bool                                               bAutoEnterWhenClose;                                      // 0x0481(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0482(0x0002) MISSED OFFSET
	float                                              AutoEnterDistance;                                        // 0x0484(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0488(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.Location");
		return ptr;
	}


	void UpdateLocationData();
	void OnRefreshIndicatorsAndVisibility();
	bool HasParentLocation();
	void EnterLocation();
	void DelayedEnterLocation();
};


// Class ES2.LocationInfo
// 0x0018 (0x0348 - 0x0330)
class ALocationInfo : public AActor
{
public:
	class USelfRegisteringComponent*                   SelfRegistering;                                          // 0x0330(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	float                                              LocationRadius;                                           // 0x0338(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              WarningOffset;                                            // 0x033C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              KillOffset;                                               // 0x0340(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bCheckSpawnGizmos;                                        // 0x0344(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0345(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.LocationInfo");
		return ptr;
	}

};


// Class ES2.LocationLib
// 0x0000 (0x0028 - 0x0028)
class ULocationLib : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.LocationLib");
		return ptr;
	}


	void STATIC_SpawnWingmen(class UObject** WorldContextObject, struct FRandomStream* RandomStream);
	void STATIC_SaveLocationState();
	bool STATIC_FindRandomSpawnLocationOnLineSegment(class UObject** WorldContext, struct FVector* LineStart, struct FVector* LineEnd, float* CollisionTestRadius, int* NumFindAttempts, struct FRandomStream* RandomStream, struct FVector* Out_Vector);
	bool STATIC_FindRandomSpawnLocationFromLocationInfo(class UObject** WorldContextObject, float* CollisionTestRadius, int* NumFindAttempts, struct FRandomStream* RandomStream, struct FTransform* Out_Transform);
	bool STATIC_FindRandomSpawnLocationAroundPosition(class UObject** WorldContextObject, struct FVector* SearchCenter, float* SearchRadius, float* CollisionTestRadius, int* NumFindAttempts, float* MinimumRadius, float* MinMaxZ, struct FRandomStream* RandomStream, struct FTransform* Out_Transform);
};


// Class ES2.LootCollectComponent
// 0x0020 (0x0280 - 0x0260)
class ULootCollectComponent : public USceneComponent
{
public:
	float                                              CollectRadius;                                            // 0x0260(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0264(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.LootCollectComponent");
		return ptr;
	}


	void SetEnabled(bool* bSetEnabled);
	void OnEndOverlapCollect(class UPrimitiveComponent** OverlappedComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex);
	void OnBeginOverlapCollect(class UPrimitiveComponent** OverlappedComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex, bool* bFromSweep, struct FHitResult* SweepResult);
};


// Class ES2.LootDropComponent
// 0x0080 (0x0178 - 0x00F8)
class ULootDropComponent : public UActorComponent
{
public:
	TEnumAsByte<ELootType>                             RandomLootFromTable;                                      // 0x00F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00F9(0x0007) MISSED OFFSET
	TArray<struct FFixedLootEntry>                     FixedLootEntries;                                         // 0x0100(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              SpawnRadius;                                              // 0x0110(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpawnRadiusMin;                                           // 0x0114(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             SpawnPoints;                                              // 0x0118(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bOnlyDropLootWhenPlayerIsCloseOrWhenDamagedByPlayer;      // 0x0128(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDropLootSeparately;                                      // 0x0129(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDropLootWithRandomRotation;                              // 0x012A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x012B(0x0001) MISSED OFFSET
	float                                              AddBlueprintToLootProbability;                            // 0x012C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ImpulseOnLootStrengthMin;                                 // 0x0130(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ImpulseOnLootStrengthMax;                                 // 0x0134(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ImpulseConeHalfAngle;                                     // 0x0138(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x013C(0x0004) MISSED OFFSET
	TArray<class APickupBase*>                         LastSpawnedPickups;                                       // 0x0140(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FPickupEntry>                        LootToDrop;                                               // 0x0150(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	struct FScriptMulticastDelegate                    OnPickupsSpawned;                                         // 0x0160(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0170(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.LootDropComponent");
		return ptr;
	}


	void OwnerHealthDepleted(class AActor** Owner, class AActor** DamageCauser, class AController** DamageInstigator, float* DamageAmount);
	void InitLootDrop(int* ItemLevelOverride);
	int GetTotalLootDropAmount();
	void EmptyLootToDrop();
	void DropLoot(class AActor** OwningActor, bool* AllowSubsequentDrops);
	void AddLootToDrop(struct FPickupEntry* NewLoot, bool* ClearOldLoot);
	void AddLootFromItems(TArray<class UItem*>* Items, bool* ClearOldLoot);
};


// Class ES2.MapLib
// 0x0000 (0x0028 - 0x0028)
class UMapLib : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.MapLib");
		return ptr;
	}


	bool STATIC_WasLocationVisited(struct FName* LocationID);
	class ALocation* STATIC_SpawnTemporaryLocation(class UObject** WorldContextObject, struct FLocationData* TemporaryLocation, bool* bDontSpawnIfHidden);
	class ALocation* STATIC_SpawnTemporaryEventLocationInFrontOfPlayer(class UObject** WorldContextObject);
	void STATIC_SetCustomWaypoint(struct FName* LocationID);
	void STATIC_RefreshMissionAndWaypointIndicators();
	bool STATIC_IsSurfaceLocation(struct FName* LocationID);
	bool STATIC_IsPlayerAtLocation(struct FName* LocationID);
	bool STATIC_IsCurrentLocationDataValid(class UObject** WorldContextObject);
	bool STATIC_InvalidateTemporaryLocation(struct FName* LocationID);
	bool STATIC_HideTemporaryLocation(struct FName* LocationID);
	float STATIC_GetTravelDistance(struct FName* LocationA, struct FName* LocationB);
	float STATIC_GetSystemRegionSecurity(TEnumAsByte<ESystemRegion>* SystemRegion);
	TEnumAsByte<ESystemRegion> STATIC_GetSystemRegionOfLocation(struct FName* LocationID);
	int STATIC_GetSystemRegionLevel(TEnumAsByte<ESystemRegion>* SystemRegion);
	TEnumAsByte<ESystemRegion> STATIC_GetSystemRegionAtPosition(struct FName* SystemID, struct FVector* Position);
	struct FSystemData STATIC_GetSystemData(struct FName* SystemID);
	class ASystem* STATIC_GetSystemActor(class UObject** WorldContextObject, struct FName* SystemID);
	struct FLocationData STATIC_GetSurfaceParent(struct FName* LocationID);
	void STATIC_GetSurfaceNeighbors(struct FName* LocationID, TArray<struct FLocationData>* Neighbors_OUT);
	void STATIC_GetSurfaceLocations(struct FName* LocationID, TArray<struct FLocationData>* SurfaceLocations_OUT);
	struct FText STATIC_GetStationName(struct FName* StationID);
	TEnumAsByte<EFactions> STATIC_GetStationFaction(struct FName* StationID);
	struct FLocationSpaceObject STATIC_GetSpaceObject(struct FName* ID);
	bool STATIC_GetShortestPath(struct FName* StartLocation, struct FName* EndLocation, TArray<struct FName>* Path_OUT);
	float STATIC_GetRegionCellSize(struct FName* SystemID);
	int STATIC_GetNumSystems();
	int STATIC_GetNumRegionCellsPerRow(struct FName* SystemID);
	struct FText STATIC_GetLocationName(struct FName* LocationID);
	TMap<TEnumAsByte<EIndicator>, bool> STATIC_GetLocationIndicators(struct FName* LocationID);
	void STATIC_GetLocationDataOfSystem(struct FName* SystemID, bool* bIncludeTemporaryLocations, TArray<struct FLocationData>* Locations_OUT);
	struct FLocationData STATIC_GetLocationData(struct FName* LocationID);
	void STATIC_GetIngameMissionIndicatorLocations(struct FName* MissionID, struct FName* PlayerLocationID, TArray<struct FName>* LocationIDs_OUT);
	TArray<struct FDockableStationTemplate> STATIC_GetDockableStationTemplatesAtLocation(struct FName* LocationID);
	void STATIC_GetDockableStationTemplates(TEnumAsByte<EFactions>* Faction, TArray<struct FName>* FilterSystems, TArray<struct FDockableStationTemplate>* Stations_OUT);
	struct FName STATIC_GetCustomWaypoint();
	float STATIC_GetCurrentSystemRegionSecurity(class UObject** WorldContextObject);
	int STATIC_GetCurrentSystemRegionLevel(class UObject** WorldContextObject);
	TEnumAsByte<ESystemRegion> STATIC_GetCurrentSystemRegion(class UObject** WorldContextObject);
	class ASystem* STATIC_GetCurrentSystemActor(class UObject** WorldContextObject);
	int STATIC_GetCurrentLocationLevel(class UObject** WorldContextObject);
	struct FLocationData STATIC_GetCurrentLocationData(class UObject** WorldContextObject);
	class AActor* STATIC_GetClosestActorOfClass(class AActor** OriginActor, class UClass** ClassToSearchFor);
	void STATIC_GetAdjacentSystems(struct FName* SystemID, int* SystemJumpDistance, TArray<struct FSystemData>* Systems_OUT);
	void STATIC_GetAccessibleLocations(struct FName* LocationID, bool* bIncludeJumpGateConnections, TArray<struct FLocationData>* Locations_OUT);
	class ALocation* STATIC_EnterInterceptionLocationAtPlayerPosition(class UObject** WorldContextObject);
	struct FLocationData STATIC_CreateAndAddTemporaryLocationAtPosition(struct FName* SystemID, struct FVector* Position, TEnumAsByte<ELocationCategory>* LocationCategory, bool* bTemporaryEvent, struct FRandomStream* RandomStream);
	bool STATIC_CollectAndWriteSystemActorData(class UObject** WorldContextObject);
	bool STATIC_CollectAndWriteLocationActorData(class UObject** WorldContextObject);
	void STATIC_ClearCustomWaypoint();
	class ALocation* STATIC_CheatSpawnTemporaryLocation(class UObject** WorldContextObject, struct FVector* Position);
};


// Class ES2.MathLib
// 0x0000 (0x0028 - 0x0028)
class UMathLib : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.MathLib");
		return ptr;
	}


	int STATIC_RoundToNearestMultiple(int* numToRound, int* multiple);
	struct FVector STATIC_RandomUnitVectorInEllipticalConeInRadiansMinMax(struct FVector* ConeDir, float* MinYawInRadians, float* MaxYawInRadians, float* MinPitchInRadians, float* MaxPitchInRadians);
	struct FVector STATIC_RandomUnitVectorInEllipticalConeInDegreesMinMax(struct FVector* ConeDir, float* MinYawInDegrees, float* MaxYawInDegrees, float* MinPitchInDegrees, float* MaxPitchInDegrees);
	struct FVector STATIC_RandomPointInSphericalShellFromStream(float* InnerRadius, float* OuterRadius, struct FVector* SphereCenter, struct FRandomStream* RandomStream);
	struct FVector STATIC_RandomPointInSphericalShell(float* InnerRadius, float* OuterRadius, struct FVector* SphereCenter);
	struct FVector STATIC_RandomPointInSphereFromStream(float* Radius, struct FVector* SphereCenter, struct FRandomStream* RandomStream);
	struct FVector STATIC_RandomPointInSphere(float* Radius, struct FVector* SphereCenter);
	float STATIC_MetersToUnrealUnits(float* ValueInMeter, bool* bTravelmModeScale);
	bool STATIC_InFloatRange(struct FFloatRange* Range, float* Value, bool* ForceInclusiveBounds);
	float STATIC_GetSphereVolume(float* SphereRadius);
	int STATIC_GetMaxRandomInt();
	struct FVector STATIC_GetLineSegmentBetween(class AActor** ActorStart, class AActor** ActorEnd);
	struct FVector STATIC_Get3DNoise(float* WaveLength, float* Amplitude, float* GlobalTime, float* PhaseShift);
	float STATIC_Get1DNoise(float* WaveLength, float* Amplitude, float* GlobalTime, float* PhaseShift);
	void STATIC_CreateInstanceTransformsInSphere(TArray<float>* MeshWeightsArray, struct FTransform* SphereTransform, TArray<struct FVector>* ExclusionSphereOrigins, TArray<float>* ExclusionSphereRadii, TArray<float>* ExclusionSphereRadiiInnerFactor, float* RadiusMeter, float* InnerRadiusFactor, float* SphereFalloffExp, float* DensityPerCubicKilometer, float* CapZFactorInner, float* CapZFactorOuter, float* CapZFalloffExp, float* ScaleMin, float* ScaleMax, float* ScaleDistributionExp, TArray<struct FTransform>* OutTransforms, TArray<int>* OutSelectedMeshIndex, struct FRandomStream* RandomStream);
};


// Class ES2.MinableBase
// 0x0020 (0x0350 - 0x0330)
class AMinableBase : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0330(0x0008) MISSED OFFSET
	class USaveGameComponent*                          SaveGame;                                                 // 0x0338(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                MinableAmount;                                            // 0x0340(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       ResourceID;                                               // 0x0344(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Seed;                                                     // 0x034C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.MinableBase");
		return ptr;
	}

};


// Class ES2.MissionTaskBase
// 0x0138 (0x0468 - 0x0330)
class AMissionTaskBase : public AActor
{
public:
	struct FName                                       MissionTaskID;                                            // 0x0330(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       LocationID;                                               // 0x0338(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       StationID;                                                // 0x0340(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class AMissionTaskBase*                            ParentTask;                                               // 0x0348(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMissionTaskState>                     TaskState;                                                // 0x0350(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0351(0x0007) MISSED OFFSET
	struct FText                                       ObjectiveText;                                            // 0x0358(0x0028) (Edit, BlueprintVisible)
	bool                                               bIsOptional;                                              // 0x0370(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsHidden;                                                // 0x0371(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bHideInMissionLog;                                        // 0x0372(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bFailIfPlayerLeaves;                                      // 0x0373(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCantLeaveWhileActive;                                    // 0x0374(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMissionTaskDisplayType>               TaskDisplayType;                                          // 0x0375(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0376(0x0002) MISSED OFFSET
	float                                              TimeLimit;                                                // 0x0378(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMissionTaskTimeLimit>                 TimeLimitType;                                            // 0x037C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x037D(0x0003) MISSED OFFSET
	int                                                ProgressValue;                                            // 0x0380(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                StageValue;                                               // 0x0384(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                SpawnedDuringMissionStage;                                // 0x0388(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TimeRemaining;                                            // 0x038C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TMap<struct FName, struct FESVariant>              Attributes;                                               // 0x0390(0x0050) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FName>                               ChildTaskIDs;                                             // 0x03E0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FScriptMulticastDelegate                    OnTaskActivated;                                          // 0x03F0(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    OnTaskSucceeded;                                          // 0x0400(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    OnTaskFailed;                                             // 0x0410(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    OnTaskEnded;                                              // 0x0420(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    OnTaskProgressed;                                         // 0x0430(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnStageChanged;                                           // 0x0440(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTimeExpired;                                            // 0x0450(0x0010) (ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0460(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.MissionTaskBase");
		return ptr;
	}


	bool WillFailIfPlayerLeavesLocation();
	void TriggerOrBindEventTimeExpired(struct FScriptDelegate* Event);
	void TriggerOrBindEventTaskSucceeded(struct FScriptDelegate* Event);
	void TriggerOrBindEventTaskFailed(struct FScriptDelegate* Event);
	void TriggerOrBindEventTaskEnded(struct FScriptDelegate* Event);
	void TriggerOrBindEventTaskActivated(struct FScriptDelegate* Event);
	void SwitchState(TEnumAsByte<EMissionTaskState>* NewState);
	class APickupBase* SpawnOrRestoreMissionPickupFromItem(class UItem** Item, struct FName* ID, struct FTransform* SpawnTransform, bool* WasRestored, bool* Success);
	TArray<class AESPawn*> SpawnOrRestoreMissionPawns(class UClass** ClassToSpawn, struct FName* ID, struct FTransform* SpawnTransform, int* Count, int* Level, bool* bWasRestored);
	class AESPawn* SpawnOrRestoreMissionPawn(class UClass** ClassToSpawn, struct FName* ID, struct FTransform* SpawnTransform, int* Level, bool* bWasRestored);
	TArray<class AESPawn*> SpawnOrRestoreMissionGroup(class UObject** WorldContextObject, struct FTransform* SpawnTransform, struct FName* ID, TEnumAsByte<ESpawnGroup>* GroupType, int* NPCLevel, int* NPCCountOverride, int* NPCCountSupportOverride, float* SpawnRadius, bool* bWasRestored, struct FRandomStream* RandomStream);
	TArray<class AActor*> SpawnOrRestoreMissionActorsNEW(TArray<struct FSpawnAmount>* ClassesToSpawn, struct FName* ID, struct FTransform* SpawnTransform, int* Level, bool* bWasRestored);
	TArray<class AActor*> SpawnOrRestoreMissionActors(class UClass** ClassToSpawn, struct FName* ID, struct FTransform* SpawnTransform, int* Count, int* Level, bool* bWasRestored);
	class AActor* SpawnOrRestoreMissionActor(class UClass** ClassToSpawn, struct FName* ID, struct FTransform* SpawnTransform, int* Level, bool* bWasRestored);
	void SetStation(struct FName* NewStationID);
	void SetProgress(int* Progress);
	void SetLocation(struct FName* NewLocationID);
	void SetAttribute(struct FName* AttributeName, struct FESVariant* AttributeValue);
	bool PlayerCantLeaveWhileActive();
	void OnTickWhileActive(float* DeltaTime);
	void OnPlayerLeftTaskLocation(TEnumAsByte<EJumpMethod>* JumpMethod);
	void OnEnteredStage(int* NewStage);
	void OnAbandonedByPlayer();
	bool IsPlayerAtMissionTaskLocation();
	bool IsMission();
	bool IsHidden();
	bool HasEnded();
	struct FText GetOwningMissionTitle();
	struct FName GetOwningMissionID();
	TEnumAsByte<EFactions> GetOwningMissionFaction();
	TEnumAsByte<EFactions> GetOwningMissionEnemyFaction();
	int GetOwningMissionDifficulty();
	class AMissionTaskBase* GetOwningMission();
	int GetOwningJobNumber();
	TArray<struct FObjectiveDescription> GetObjectiveDescriptions(struct FTaskSaveGameData* SavedTaskData);
	struct FObjectiveDescription GetObjectiveDescription(struct FTaskSaveGameData* SavedTaskData);
	TEnumAsByte<EIndicator> GetMissionIndicator();
	TArray<class AActor*> GetChildren();
	void ForceState(TEnumAsByte<EMissionTaskState>* NewState);
	struct FESVariant FindOrCreateAttribute(struct FName* Key, struct FESVariant* InitValue, bool* bWasNewlyCreated);
	bool FindAttribute(struct FName* AttributeName, struct FESVariant* AttributeValue_OUT);
	void EnterStage(int* Stage);
	void AddPawnsToMission(TArray<class AESPawn*>* Actors, struct FName* ID);
	void AddActorsToMission(TArray<class AActor*>* Actors, struct FName* ID);
	void Abort();
};


// Class ES2.MissionBase
// 0x0070 (0x04D8 - 0x0468)
class AMissionBase : public AMissionTaskBase
{
public:
	class USelfRegisteringComponent*                   SelfRegistering;                                          // 0x0468(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	struct FText                                       MissionTitle;                                             // 0x0470(0x0028) (Edit, BlueprintVisible)
	TEnumAsByte<EMissionType>                          MissionType;                                              // 0x0488(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0489(0x0003) MISSED OFFSET
	int                                                DifficultyLevel;                                          // 0x048C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FText>                               MissionLogTexts;                                          // 0x0490(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FMissionReward>                      Rewards;                                                  // 0x04A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TEnumAsByte<EFactions>                             MissionFaction;                                           // 0x04B0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EFactions>                             EnemyFaction;                                             // 0x04B1(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bRequiresStationAtTargetLocation;                         // 0x04B2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMissionLocation>                      MissionLocationType;                                      // 0x04B3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x04B4(0x0004) MISSED OFFSET
	TArray<TEnumAsByte<ELocationCategory>>             LocationCategories;                                       // 0x04B8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	bool                                               bSpawnInTaskFactionTerritory;                             // 0x04C8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x04C9(0x0003) MISSED OFFSET
	float                                              SpawnFactorNPCs;                                          // 0x04CC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpawnFactorResources;                                     // 0x04D0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpawnFactorContainers;                                    // 0x04D4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.MissionBase");
		return ptr;
	}


	struct FText GetMissionLog(struct FTaskSaveGameData* SavedTaskData);
	TArray<struct FMissionReward> GenerateRewards(int* DifficultyLevelIn, int* LocationDistance, struct FTaskSaveGameData* SavedTaskData, struct FRandomStream* RandomStream);
	TMap<struct FName, struct FESVariant> GenerateAttributes(int* DifficultyLevelIn, float* TravelDistance, struct FTaskSaveGameData* SavedTaskData, struct FRandomStream* RandomStream);
};


// Class ES2.MissionLib
// 0x0000 (0x0028 - 0x0028)
class UMissionLib : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.MissionLib");
		return ptr;
	}


	bool STATIC_WillAnyMissionFailIfPlayerLeavesLocation();
	void STATIC_TrackMission(struct FName* MissionID);
	class AMissionBase* STATIC_SpawnMissionAtLocation(class UObject** WorldContextObject, class UClass** MissionClass, bool* bOnlySpawnIfNotAlreadyInMissionLog, bool* bSpawnWithActiveState, struct FTransform* SpawnTransform, struct FName* LocationID);
	class AMissionBase* STATIC_SpawnMission(class UObject** WorldContextObject, class UClass** MissionClass, bool* bOnlySpawnIfNotAlreadyInMissionLog, bool* bSpawnWithActiveState, struct FTransform* SpawnTransform);
	class AMissionBase* STATIC_SpawnJob(class UObject** WorldContextObject, struct FTaskSaveGameData* JobData, struct FTransform* SpawnTransform);
	void STATIC_ShowActiveMissionObjectivesInHUD(class AMissionTaskBase** AnyTaskOfMission);
	void STATIC_RemoveTaskFromPlayerData(struct FName* TaskID, bool* bAbortedByPlayer);
	void STATIC_RemoveJobOfferFromStation(struct FTaskSaveGameData* JobData, struct FName* StationID);
	struct FText STATIC_GetMissionLog(struct FName* MissionID);
	class AMissionBase* STATIC_GetMissionDefaultObject(struct FName* MissionID);
	TArray<TEnumAsByte<EJobType>> STATIC_GetJobTypesOfFactionGroup(TEnumAsByte<EFactionGroup>* FactionGroup);
	TArray<TEnumAsByte<EFactionGroup>> STATIC_GetGroupsOfFaction(TEnumAsByte<EFactions>* Faction);
	struct FFaction STATIC_GetFactionInfo(TEnumAsByte<EFactions>* Faction);
	TArray<struct FObjectiveDescription> STATIC_GetCurrentObjectivesForMissionLog(struct FName* TaskID, bool* bActiveOnly, bool* bNonPermanentDisplayOnly);
	TArray<struct FTaskSaveGameData> STATIC_GetAllMissionsInPlayerData(bool* bActiveOnly, TEnumAsByte<EMissionType>* MissionType);
	TArray<struct FName> STATIC_GetActiveTasksLocations(struct FName* MissionID);
	bool STATIC_FindTaskInPlayerData(struct FName* TaskID, struct FTaskSaveGameData* SavedData);
	TArray<struct FTaskSaveGameData> STATIC_CreateJobOffers(class UObject** WorldContextObject, struct FName* LocationID, struct FName* StationID, TArray<TSoftObjectPtr<class UClass>>* JobCandidates, TArray<struct FTaskSaveGameData>* AlreadyExistingOffers, int* NumOffersMin, int* NumOffersMax, struct FRandomStream* RandomStream);
	bool STATIC_CantLeaveLocation();
};


// Class ES2.ModifierLib
// 0x0000 (0x0028 - 0x0028)
class UModifierLib : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.ModifierLib");
		return ptr;
	}


	class FString STATIC_ToString(struct FModifierHandle* ModifierHandle);
	bool STATIC_SetModifierValueInAttributeAccess(struct FModifierHandle* ModifierHandle, float* NewValue, struct FAttributeAccess* AttributeAccess);
	bool STATIC_SetModifierValueForItemAttribute(class UItemAttribute** ItemAttribute, struct FModifierHandle* ModifierHandle, float* NewValue);
	bool STATIC_SetModifierValue(struct FModifierHandle* ModifierHandle, float* NewValue, struct FBuffableFloat* BuffableFloat);
	bool STATIC_RemoveModifierRot(struct FModifierHandle* ModifierHandle, struct FBuffableRotator* BuffableRotator);
	bool STATIC_RemoveModifierFromAttributeAccess(struct FModifierHandle* ModifierHandle, struct FAttributeAccess* AttributeAccess);
	bool STATIC_RemoveModifierFromAttribute(class UItemAttribute** ItemAttribute, struct FModifierHandle* ModifierHandle);
	bool STATIC_RemoveModifier(struct FModifierHandle* ModifierHandle, struct FBuffableFloat* BuffableFloat);
	float STATIC_GetModifierValue(struct FModifierHandle* ModifierHandle, struct FBuffableFloat* BuffableFloat);
	struct FRotator STATIC_GetBuffableRotatorValue(struct FBuffableRotator* BuffableRotator);
	float STATIC_GetBuffableFloatValue(struct FBuffableFloat* BuffableFloat);
	struct FModifierHandle STATIC_AddModifierToAttributeAccess(struct FModifier* Mod, struct FAttributeAccess* AttributeAccess);
	struct FModifierHandle STATIC_AddModifierToAttribute(class UItemAttribute** ItemAttribute, struct FModifier* Mod);
	struct FModifierHandle STATIC_AddModifierRot(struct FModifier* Mod, struct FBuffableRotator* BuffableRotator);
	struct FModifierHandle STATIC_AddModifier(struct FModifier* Mod, struct FBuffableFloat* BuffableFloat);
};


// Class ES2.ShipMovementComponent
// 0x0798 (0x0930 - 0x0198)
class UShipMovementComponent : public UFloatingPawnMovement
{
public:
	struct FRotator                                    AngularVelocityDegLocal;                                  // 0x0198(0x000C) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x01A4(0x0004) MISSED OFFSET
	struct FAttributeAccess                            MaxSpeedForward;                                          // 0x01A8(0x0050) (Edit, BlueprintVisible)
	struct FBuffableFloat                              MaxSpeedBackward;                                         // 0x01F8(0x0040) (Edit, BlueprintVisible)
	struct FBuffableFloat                              MaxSpeedStrafe;                                           // 0x0238(0x0040) (Edit, BlueprintVisible)
	struct FBuffableFloat                              MaxSpeedHover;                                            // 0x0278(0x0040) (Edit, BlueprintVisible)
	struct FAttributeAccess                            AccelerationForward;                                      // 0x02B8(0x0050) (Edit, BlueprintVisible)
	struct FAttributeAccess                            AccelerationBackward;                                     // 0x0308(0x0050) (Edit, BlueprintVisible)
	struct FAttributeAccess                            AccelerationStrafe;                                       // 0x0358(0x0050) (Edit, BlueprintVisible)
	struct FAttributeAccess                            AccelerationHover;                                        // 0x03A8(0x0050) (Edit, BlueprintVisible)
	struct FAttributeAccess                            AccelerationRotation;                                     // 0x03F8(0x0050) (Edit, BlueprintVisible)
	struct FAttributeAccess                            MaxSpeedRotation;                                         // 0x0448(0x0050) (Edit, BlueprintVisible)
	struct FAttributeAccess                            FullStopWeaponDamageIncrease;                             // 0x0498(0x0050) (Edit, BlueprintVisible)
	float                                              StrafeHoverBackwardSpeedFactor;                           // 0x04E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               EaseAcceleration;                                         // 0x04EC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x04ED(0x0003) MISSED OFFSET
	float                                              EaseAccelerationExponent;                                 // 0x04F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              KineticEnergyMaxMassKg;                                   // 0x04F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x04F8(0x0008) MISSED OFFSET
	float                                              DecelerationMaxSpeedExponent;                             // 0x0500(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AutoRoll;                                                 // 0x0504(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0505(0x0003) MISSED OFFSET
	float                                              MaxAutoRollInput;                                         // 0x0508(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RollAngleThreshold;                                       // 0x050C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PitchAngleThreshold;                                      // 0x0510(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PitchInputThreshold;                                      // 0x0514(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EaseInTime;                                               // 0x0518(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AutoRollHorizonUp;                                        // 0x051C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FAttributeAccess                            MaxBankingAngleYaw;                                       // 0x0528(0x0050) (Edit, BlueprintVisible)
	struct FAttributeAccess                            MaxBankingAngleStrafe;                                    // 0x0578(0x0050) (Edit, BlueprintVisible)
	struct FAttributeAccess                            BankingSpeed;                                             // 0x05C8(0x0050) (Edit, BlueprintVisible)
	bool                                               bEnableBanking;                                           // 0x0618(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0619(0x0003) MISSED OFFSET
	float                                              BankingFactorAtZeroSpeed;                                 // 0x061C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CurrentBanking;                                           // 0x0620(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0624(0x0004) MISSED OFFSET
	struct FAttributeAccess                            BoostFactorMaxSpeed;                                      // 0x0628(0x0050) (Edit, BlueprintVisible)
	float                                              MinBoostFactorMaxSpeed;                                   // 0x0678(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x067C(0x0004) MISSED OFFSET
	struct FAttributeAccess                            BoostFactorAccelerationForward;                           // 0x0680(0x0050) (Edit, BlueprintVisible)
	struct FAttributeAccess                            MaxBoostDuration;                                         // 0x06D0(0x0050) (Edit, BlueprintVisible)
	struct FAttributeAccess                            BoostRechargeDuration;                                    // 0x0720(0x0050) (Edit, BlueprintVisible)
	struct FAttributeAccess                            BoostRechargeDelay;                                       // 0x0770(0x0050) (Edit, BlueprintVisible)
	float                                              BoostFactorMaxSpeedRotation;                              // 0x07C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BoostFactorAccelerationRotation;                          // 0x07C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsBoosting;                                              // 0x07C8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bUseEnergyForBoost;                                       // 0x07C9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowBoosting;                                           // 0x07CA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDebugVisualizeVelocity;                                  // 0x07CB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TurningBoostExp;                                          // 0x07CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnMovementCollision;                                      // 0x07D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDealCollisionDamage;                                    // 0x07E0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnBoostStart;                                             // 0x07F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnBoostStop;                                              // 0x0800(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnBoostDepleted;                                          // 0x0810(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnBoostTick;                                              // 0x0820(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	float                                              SteeringNoiseAmplitude;                                   // 0x0830(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SteeringNoiseWavelength;                                  // 0x0834(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SteeringNoisePhaseShift;                                  // 0x0838(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bDebugDontInitAttributesFromOwner;                        // 0x083C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDebugDontInitBoostAttributesFromOwner;                   // 0x083D(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x2];                                       // 0x083E(0x0002) MISSED OFFSET
	struct FRotator                                    ControlInputRotator;                                      // 0x0840(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	struct FRotator                                    LastControlInputRotator;                                  // 0x084C(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData08[0x30];                                      // 0x0858(0x0030) MISSED OFFSET
	bool                                               bEnablePhysicsInteraction;                                // 0x0888(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bPushForceScaledToMass;                                   // 0x0889(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bScalePushForceToVelocity;                                // 0x088A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x1];                                       // 0x088B(0x0001) MISSED OFFSET
	float                                              InitialPushForceFactor;                                   // 0x088C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PushForceFactor;                                          // 0x0890(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x9C];                                      // 0x0894(0x009C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.ShipMovementComponent");
		return ptr;
	}


	void StopBoosting();
	void StartBoosting();
	void ResetBanking();
	void RemoveSpeedModifier(struct FModifierHandle* ModifierHandle);
	void RemoveAccelerationModifier(struct FModifierHandle* ModifierHandle);
	float MeasureVelocityWithoutInput(float* DeltaTime);
	struct FVector GetVelocityAtPoint(struct FVector* PointWorld);
	struct FVector GetTargetVelocityFromInput(struct FVector* InputVectorLocal);
	float GetStoppingDistance();
	struct FRotator GetPendingInputRotator();
	float GetMaxStrafeSpeedWithoutBoost();
	float GetMaxStoppingDistance();
	float GetMaxForwardSpeedWithoutBoost();
	struct FRotator GetLastPendingInputRotator();
	struct FVector GetCurrentInputDelta();
	float GetCurrentBoostDurationPercentage();
	void EnableRecharge();
	struct FRotator ConsumeInputRotator();
	void AddYawInput(float* Val, bool* bForce);
	struct FModifierHandle AddSpeedModifier(struct FModifier* Modifier);
	void AddRollInput(float* Val, bool* bForce);
	void AddRadialForce(struct FVector* Origin, float* Radius, float* Strength, TEnumAsByte<ERadialImpulseFalloff>* Falloff);
	void AddRadialAcceleration(struct FVector* Origin, float* Radius, float* Strength, TEnumAsByte<ERadialImpulseFalloff>* Falloff);
	void AddPitchInput(float* Val, bool* bForce);
	void AddImpulse(struct FVector* Impulse, bool* bVelocityChange);
	void AddForceAtLocationLocal(struct FVector* ForceLocal, struct FVector* LocationLocal);
	void AddForceAtLocation(struct FVector* Force, struct FVector* LocationWorld);
	void AddForce(struct FVector* Force, bool* bAccelChange);
	void AddAngularImpulseRadians(struct FVector* AngularImpulseRadWorld, bool* bVelocityChange);
	void AddAngularImpulseDegree(struct FVector* AngularImpulseDegWorld, bool* bVelocityChange);
	void AddAngularForceRadians(struct FVector* AngularForceRadWorld);
	void AddAngularForceDegreeLocal(struct FVector* AngularForceDegLocal);
	void AddAngularForceDegree(struct FVector* AngularForceDegWorld);
	struct FModifierHandle AddAccelerationModifier(struct FModifier* Modifier, bool* AffectOnlyForwardAcceleration);
};


// Class ES2.MovementPredictionComponent
// 0x0030 (0x0960 - 0x0930)
class UMovementPredictionComponent : public UShipMovementComponent
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0930(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.MovementPredictionComponent");
		return ptr;
	}

};


// Class ES2.MovementRootComponent
// 0x0080 (0x0690 - 0x0610)
class UMovementRootComponent : public UProceduralMeshComponent
{
public:
	struct FComponentReference                         AiCollisionOverride;                                      // 0x0610(0x0018) (Edit)
	unsigned char                                      UnknownData00[0x68];                                      // 0x0628(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.MovementRootComponent");
		return ptr;
	}


	void RebuildCollision();
};


// Class ES2.MusicSet
// 0x0018 (0x0048 - 0x0030)
class UMusicSet : public UDataAsset
{
public:
	struct FName                                       SetId;                                                    // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class ULayeredSong*>                        Songs;                                                    // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.MusicSet");
		return ptr;
	}

};


// Class ES2.NavNode
// 0x0060 (0x0390 - 0x0330)
class ANavNode : public AActorPostEditEvent
{
public:
	class USelfRegisteringComponent*                   SelfRegistering;                                          // 0x0330(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	bool                                               bIsEntry;                                                 // 0x0338(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0339(0x0007) MISSED OFFSET
	TArray<class ANavNode*>                            FixedConnections;                                         // 0x0340(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class ANavNode*>                            FixedConnectionsCounterparts;                             // 0x0350(0x0010) (BlueprintVisible, ZeroConstructor)
	TArray<class ANavNode*>                            AllConnectedNodes;                                        // 0x0360(0x0010) (BlueprintVisible, ZeroConstructor)
	bool                                               AllowAutoConnect;                                         // 0x0370(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0371(0x0007) MISSED OFFSET
	TArray<float>                                      Distances;                                                // 0x0378(0x0010) (BlueprintVisible, ZeroConstructor)
	int                                                NavGraphId;                                               // 0x0388(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x038C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.NavNode");
		return ptr;
	}


	void UpdateConnectionArrows();
	void UpdateAutoConnections(bool* AlsoUpdateNeighbors);
};


// Class ES2.PerkBase
// 0x0010 (0x0340 - 0x0330)
class APerkBase : public AActor
{
public:
	class USelfRegisteringComponent*                   SelfRegistering;                                          // 0x0330(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	struct FName                                       PerkID;                                                   // 0x0338(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.PerkBase");
		return ptr;
	}

};


// Class ES2.PhysicsScale
// 0x0000 (0x0028 - 0x0028)
class UPhysicsScale : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.PhysicsScale");
		return ptr;
	}


	float STATIC_UUnitsToMeters(float* UnrealUnits, bool* bTravelModeScale);
	float STATIC_UUnitsToLightseconds(float* UnrealUnits, bool* bTravelModeScale);
	float STATIC_UUnitsToKilometers(float* UnrealUnits, bool* bTravelModeScale);
	float STATIC_UUnitsToCentimeters(float* UnrealUnits, bool* bTravelModeScale);
	float STATIC_UUnitspsToKmh(float* UnrealUnitsPerSecond);
	float STATIC_UUnitsPerMeter(bool* bTravelModeScale);
	float STATIC_MpsToKmh(float* MetersPerSecond);
	float STATIC_MetersToUUnits(float* Meters, bool* bTravelModeScale);
	float STATIC_LocationsOnMapUnitsToSystemUnits();
	float STATIC_LightsecondsToUUnits(float* Lightseconds, bool* bTravelModeScale);
	float STATIC_KmhToUUnitsps(float* KilometersPerHour);
	float STATIC_KmhToMps(float* KilometersPerHour);
	float STATIC_KilometersToUUnits(float* Kilometers, bool* bTravelModeScale);
	float STATIC_CentimetersToUUnits(float* Centimeters, bool* bTravelModeScale);
};


// Class ES2.PickupBase
// 0x0108 (0x0438 - 0x0330)
class APickupBase : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0330(0x0008) MISSED OFFSET
	class USelfRegisteringComponent*                   SelfRegistering;                                          // 0x0338(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class USaveGameComponent*                          SaveGame;                                                 // 0x0340(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UHUDMarkerComponent*                         HUDMarker;                                                // 0x0348(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UInteractComponent*                          Interact;                                                 // 0x0350(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UInteractComponent*                          InteractPull;                                             // 0x0358(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	TEnumAsByte<EPickupType>                           PickupType;                                               // 0x0360(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0361(0x0007) MISSED OFFSET
	class USoundBase*                                  SoundCollect;                                             // 0x0368(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  SoundDenied;                                              // 0x0370(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  SoundTractorBeamLoop;                                     // 0x0378(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            SphereCollision;                                          // 0x0380(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x0388(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnPickupContentsChanged;                                  // 0x0390(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPickedUpByPlayer;                                       // 0x03A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPickupPullBegin;                                        // 0x03B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPickupPullTick;                                         // 0x03C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPickupPullEnd;                                          // 0x03D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FPickupEntry                                PickupEntry;                                              // 0x03E0(0x0018) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData02[0x20];                                      // 0x03F8(0x0020) MISSED OFFSET
	class UAudioComponent*                             TractorBeamAudioComponent;                                // 0x0418(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData03[0x18];                                      // 0x0420(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.PickupBase");
		return ptr;
	}


	void UpdatePullRangeFromTractorBeam();
	void RefreshHUDInfo();
	void RecreatePickupsAfterGroupPull();
	bool PlayCollectSound(class AActor** CollectingActor, bool* bWithoutUserFeedback, int* AmountCollected);
	int OnCollect(class AActor** CollectingActor, bool* bWithoutUserFeedback);
	bool IsInTractorBeamRange(class AActor** ActorWithTractorBeam);
	void InteractPullItem(class UInteractComponent** InteractComponent, class AActor** InteractActor);
	void InteractPullAllItems(class UInteractComponent** InteractComponent, class AActor** InteractActor);
	void InteractCollect(class UInteractComponent** InteractComponent, class AActor** InteractActor);
	TEnumAsByte<EItemRarity> GetRarity();
	struct FText GetPickupName();
	void GetPickupHUDInfo(TArray<struct FPickupHUDInfo>* HUDInfoOut);
	class UItem* GetItem();
	int GetAmount();
};


// Class ES2.PilotAudio
// 0x0078 (0x00A8 - 0x0030)
class UPilotAudio : public UDataAsset
{
public:
	TMap<TEnumAsByte<EAIEvent>, TSoftObjectPtr<class USoundCue>> Sounds;                                                   // 0x0030(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TSoftObjectPtr<class USoundCue>                    DeathSound;                                               // 0x0080(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.PilotAudio");
		return ptr;
	}

};


// Class ES2.PlayerData
// 0x0508 (0x0530 - 0x0028)
class UPlayerData : public USaveGame
{
public:
	TMap<struct FName, class UItemAttribute*>          GlobalAttributes;                                         // 0x0028(0x0050) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TMap<struct FName, class UItemAttribute*>          PrimaryWeaponAttributes;                                  // 0x0078(0x0050) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TMap<struct FName, class UItemAttribute*>          SecondaryWeaponAttributes;                                // 0x00C8(0x0050) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                credits;                                                  // 0x0118(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                PlayerLevel;                                              // 0x011C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              XP;                                                       // 0x0120(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0124(0x0004) MISSED OFFSET
	class UInventory*                                  StationCargo;                                             // 0x0128(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FInventoryState                             StationCargoSaveState;                                    // 0x0130(0x00B0) (SaveGame)
	class UInventory*                                  QuestItems;                                               // 0x01E0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FInventoryState                             QuestItemsSaveState;                                      // 0x01E8(0x00B0) (SaveGame)
	TArray<struct FTaskSaveGameData>                   MissionSaveState;                                         // 0x0298(0x0010) (ZeroConstructor, SaveGame)
	TArray<struct FActivitySaveGameData>               ActivitySaveState;                                        // 0x02A8(0x0010) (ZeroConstructor, SaveGame)
	TMap<struct FName, struct FLocationState>          LocationSaveStates;                                       // 0x02B8(0x0050) (ZeroConstructor, SaveGame)
	TArray<struct FShipData>                           Ships;                                                    // 0x0308(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FShipDataState>                      ShipsSaveState;                                           // 0x0318(0x0010) (ZeroConstructor, SaveGame)
	int                                                CurrentShip;                                              // 0x0328(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	struct FRotator                                    CurrentShipRotation;                                      // 0x032C(0x000C) (BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                CurrentCameraView;                                        // 0x0338(0x0004) (BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x033C(0x0004) MISSED OFFSET
	TMap<struct FName, struct FActorSaveState>         WingmenStates;                                            // 0x0340(0x0050) (ZeroConstructor, SaveGame)
	TMap<struct FName, struct FName>                   SelectedDeviceModes;                                      // 0x0390(0x0050) (ZeroConstructor, SaveGame)
	TArray<struct FName>                               SelectedPerks;                                            // 0x03E0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame)
	TArray<struct FName>                               HomebaseUpgradesInstalled;                                // 0x03F0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame)
	TArray<struct FName>                               FoundCollectibles;                                        // 0x0400(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame)
	TArray<struct FName>                               ProgressTokens;                                           // 0x0410(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame)
	TArray<struct FLocationData>                       TemporaryLocations;                                       // 0x0420(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame)
	struct FName                                       PreviousLocation;                                         // 0x0430(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	struct FName                                       CurrentLocation;                                          // 0x0438(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	struct FName                                       CurrentSystem;                                            // 0x0440(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	struct FName                                       CurrentDockingPoint;                                      // 0x0448(0x0008) (BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	struct FName                                       CurrentActivity;                                          // 0x0450(0x0008) (BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	struct FName                                       PreviousDockingPoint;                                     // 0x0458(0x0008) (BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	struct FName                                       CustomWaypoint;                                           // 0x0460(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	struct FName                                       TrackedMainMission;                                       // 0x0468(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	struct FName                                       TrackedSideMission;                                       // 0x0470(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	struct FName                                       TrackedJob;                                               // 0x0478(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              PlayingTimeSeconds;                                       // 0x0480(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              TravelMapDistanceUntilNextEvent;                          // 0x0484(0x0004) (BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              TravelMapDistanceUntilNextInterception;                   // 0x0488(0x0004) (BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x048C(0x0004) MISSED OFFSET
	TMap<struct FName, struct FDockableStationInstance> DockableStationInstances;                                 // 0x0490(0x0050) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame)
	int                                                NextRandomStreamSeed;                                     // 0x04E0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	bool                                               bUndockFromCurrentStation;                                // 0x04E4(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x04E5(0x0003) MISSED OFFSET
	TArray<float>                                      DamagePerFaction;                                         // 0x04E8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	float                                              ThreatLevel;                                              // 0x04F8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x04FC(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnPlayerLevelUp;                                          // 0x0500(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPlayerCreditsChanged;                                   // 0x0510(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPlayerXPChanged;                                        // 0x0520(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.PlayerData");
		return ptr;
	}

};


// Class ES2.POISeedUserData
// 0x0010 (0x0038 - 0x0028)
class UPOISeedUserData : public UAssetUserData
{
public:
	int                                                Seed;                                                     // 0x0028(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	class APOIBase*                                    ParentPOI;                                                // 0x0030(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.POISeedUserData");
		return ptr;
	}

};


// Class ES2.POIBase
// 0x0060 (0x0390 - 0x0330)
class APOIBase : public AActor
{
public:
	class USelfRegisteringComponent*                   SelfRegistering;                                          // 0x0330(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	TSoftObjectPtr<class UObject>                      StreamingLevel;                                           // 0x0338(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	int                                                Seed;                                                     // 0x0360(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0364(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnPOILoaded;                                              // 0x0368(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class ULevelStreamingDynamic*                      LevelStreamingObject;                                     // 0x0378(0x0008) (ZeroConstructor, IsPlainOldData)
	class UPOISeedUserData*                            SeedUserData;                                             // 0x0380(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0388(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.POIBase");
		return ptr;
	}


	void OnLevelShown();
	void OnLevelLoadedWriteSeedInLevelData();
};


// Class ES2.POISpawner
// 0x0018 (0x0348 - 0x0330)
class APOISpawner : public AActor
{
public:
	class USelfRegisteringComponent*                   SelfRegistering;                                          // 0x0330(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class USphereComponent*                            RadiusSphere;                                             // 0x0338(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<EPOIType>                              Type;                                                     // 0x0340(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0341(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.POISpawner");
		return ptr;
	}

};


// Class ES2.PoolableActor
// 0x0000 (0x0028 - 0x0028)
class UPoolableActor : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.PoolableActor");
		return ptr;
	}


	void SetPoolAndDeactivate(class UActorPool** Pool);
	void OnBecomeInactive();
	void OnBecomeActive();
};


// Class ES2.PortableComponent
// 0x00A0 (0x0640 - 0x05A0)
class UPortableComponent : public USphereComponent
{
public:
	float                                              PlayerInertiaTensorOverride;                              // 0x05A0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bLockObjectRotation;                                      // 0x05A4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bSameOrientationAsActor;                                  // 0x05A5(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowFlinging;                                           // 0x05A6(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x05A7(0x0001) MISSED OFFSET
	float                                              FlingStrength;                                            // 0x05A8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x05AC(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnAttached;                                               // 0x05B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDetached;                                               // 0x05C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnThrown;                                                 // 0x05D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	bool                                               bRegardRadius;                                            // 0x05E0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bRegardTriggerBox;                                        // 0x05E1(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x05E2(0x0002) MISSED OFFSET
	float                                              InteractRadius;                                           // 0x05E4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TriggerBoxExtent;                                         // 0x05E8(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bShowTriggerInEditor;                                     // 0x05F4(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x13];                                      // 0x05F5(0x0013) MISSED OFFSET
	bool                                               bAttachedToDropLocation;                                  // 0x0608(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAttachedToPlayer;                                        // 0x0609(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x6];                                       // 0x060A(0x0006) MISSED OFFSET
	class UInteractComponent*                          InteractComp;                                             // 0x0610(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData05[0x28];                                      // 0x0618(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.PortableComponent");
		return ptr;
	}


	void SetEnabled(bool* bEnabled);
	void SetAllowFlinging(bool* bAllow);
	void InteractHold_Internal(class UInteractComponent** InteractComponent, class AActor** InteractActor);
	void Interact_Internal(class UInteractComponent** InteractComponent, class AActor** InteractActor);
	void Interact(class UInteractComponent** InteractComponent, class AActor** InteractActor, bool* bFling);
	void Detach(bool* bFling, bool* bKeepMomentum, bool* bSetUnusable);
};


// Class ES2.ProgressTokenIDs
// 0x0100 (0x0128 - 0x0028)
class UProgressTokenIDs : public UObject
{
public:
	struct FName                                       NoPIEStart;                                               // 0x0028(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M005DataChipsOnBoard;                                     // 0x0030(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M005ContrabandOnBoard;                                    // 0x0038(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       S01L05Unlocked;                                           // 0x0040(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       S01L09Unlocked;                                           // 0x0048(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       S01L10Unlocked;                                           // 0x0050(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       S01L12unlocked;                                           // 0x0058(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       S01L16Unlocked;                                           // 0x0060(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       S01L13Unlocked;                                           // 0x0068(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       HomebaseRepaired;                                         // 0x0070(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       HomebaseUnlocked;                                         // 0x0078(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       System1AUnlocked;                                         // 0x0080(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       System1BUnlocked;                                         // 0x0088(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       System1AllUnlocked;                                       // 0x0090(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M004Succeeded;                                            // 0x0098(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M005Succeeded;                                            // 0x00A0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       System02Unlocked;                                         // 0x00A8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       System03Unlocked;                                         // 0x00B0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       System04Unlocked;                                         // 0x00B8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       System05Unlocked;                                         // 0x00C0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       System06Unlocked;                                         // 0x00C8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       System07Unlocked;                                         // 0x00D0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       System08Unlocked;                                         // 0x00D8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       System09Unlocked;                                         // 0x00E0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       M002MinedCrystals;                                        // 0x00E8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       GAMESCOM_VERSION;                                         // 0x00F0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       GAMESCOM_TUT_MOVEMENT1;                                   // 0x00F8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       GAMESCOM_TUT_MOVEMENT2;                                   // 0x0100(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       GAMESCOM_TUT_WEAPONS;                                     // 0x0108(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       GAMESCOM_TUT_LOCK;                                        // 0x0110(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       GAMESCOM_TUT_JUMP;                                        // 0x0118(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       INVALID;                                                  // 0x0120(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.ProgressTokenIDs");
		return ptr;
	}

};


// Class ES2.ProjectileBase
// 0x05F0 (0x0920 - 0x0330)
class AProjectileBase : public AActor
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0330(0x0058) MISSED OFFSET
	float                                              ChargePercent;                                            // 0x0388(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData)
	bool                                               bDestroyOnExplode;                                        // 0x038C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x038D(0x0003) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnProjectileExploded;                                     // 0x0390(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FWeaponData                                 WeaponConfig;                                             // 0x03A0(0x0528) (BlueprintVisible, BlueprintReadOnly)
	struct FLinearColor                                Color;                                                    // 0x08C8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UBaseProjectileMovementComponent*            MovementComp;                                             // 0x08D8(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UActorPool*                                  MyPool;                                                   // 0x08E0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class USphereComponent*                            CollisionComp;                                            // 0x08E8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              ImpactNudgeDistance;                                      // 0x08F0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x08F4(0x0008) MISSED OFFSET
	TWeakObjectPtr<class AActor>                       TargetActor;                                              // 0x08FC(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1C];                                      // 0x0904(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.ProjectileBase");
		return ptr;
	}


	void SetTargetActor(class AActor** Actor);
	void OverrideHoming(bool* HomingEnabled);
	void OnSpawnImpact(struct FTransform* SpawnTransform, struct FHitResult* HitInfo, EWeaponImpact* ImpactType, bool* bCriticalHit, struct FVector* ShotDirection, class AActor** InstigatorActor);
	void OnProjectileDestroyed(bool* bLifeTimeExpired);
	void OnMissileMissed();
	void OnImpact(struct FHitResult* HitResult);
	void ManualImpact(struct FVector* HitPoint, struct FVector* HitNormal, class AActor** HitActor, class UPrimitiveComponent** HitComponent);
	bool IsProjectileDestroyed();
	bool IsPooled();
	int GetWeaponSeed();
	class UItem* GetWeaponItem();
	class AActor* GetTargetActor();
};


// Class ES2.RailTurretMovementComponent
// 0x0128 (0x02C0 - 0x0198)
class URailTurretMovementComponent : public UFloatingPawnMovement
{
public:
	struct FRotator                                    AngularVelocity;                                          // 0x0198(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x01A4(0x0004) MISSED OFFSET
	struct FAttributeAccess                            MaxSpeedForward;                                          // 0x01A8(0x0050) (Edit, BlueprintVisible)
	struct FAttributeAccess                            AccelerationForward;                                      // 0x01F8(0x0050) (Edit, BlueprintVisible)
	float                                              KineticEnergyMaxMassKg;                                   // 0x0248(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Bounciness;                                               // 0x024C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Friction;                                                 // 0x0250(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDebugVisualizeVelocity;                                  // 0x0254(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDEBUGExceedingTargetSpeed1;                              // 0x0255(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0256(0x0002) MISSED OFFSET
	class USplineComponent*                            MovementSpline;                                           // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                SplineMovementPrecision;                                  // 0x0260(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               EaseAcceleration;                                         // 0x0264(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0265(0x0003) MISSED OFFSET
	float                                              EaseAccelerationExponent;                                 // 0x0268(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnablePhysicsInteraction;                                // 0x026C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x026D(0x0007) MISSED OFFSET
	struct FVector                                     LastSnappedSplineLocation;                                // 0x0274(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIdleOnSpawnPoint;                                        // 0x0280(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0281(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnMovementCollision;                                      // 0x0288(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDealCollisionDamage;                                    // 0x0298(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData05[0x18];                                      // 0x02A8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.RailTurretMovementComponent");
		return ptr;
	}


	void SnapTurretOntoSpline(float* DistanceThreshold);
	void AddTorqueImpulse(struct FVector* TorqueImpulse);
	void AddTorqueForce(struct FVector* TurretMovement);
	void AddImpulse(struct FVector* Impulse, bool* bVelocityChange);
	void AddForce(struct FVector* Force, bool* bAccelChange);
};


// Class ES2.RandomizeChildren
// 0x0038 (0x0368 - 0x0330)
class ARandomizeChildren : public AActor
{
public:
	bool                                               bUseIndividualRandom;                                     // 0x0330(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0331(0x0003) MISSED OFFSET
	struct FInt32Interval                              ChildrenAlive;                                            // 0x0334(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ChildrenCount;                                            // 0x033C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      bOverride_ChildrenCount : 1;                              // 0x0340(0x0001) (BlueprintVisible)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0341(0x0003) MISSED OFFSET
	float                                              AliveProbability;                                         // 0x0344(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Seed;                                                     // 0x0348(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bOverride_RandomSeed : 1;                                 // 0x034C(0x0001) (BlueprintVisible)
	unsigned char                                      UnknownData02[0x3];                                       // 0x034D(0x0003) MISSED OFFSET
	class USceneComponent*                             SceneRoot;                                                // 0x0350(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	struct FRandomStream                               Random;                                                   // 0x0358(0x0008) (ZeroConstructor)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0360(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.RandomizeChildren");
		return ptr;
	}

};


// Class ES2.RiddleCube
// 0x0018 (0x0348 - 0x0330)
class ARiddleCube : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0330(0x0008) MISSED OFFSET
	class USaveGameComponent*                          SaveGameComponent;                                        // 0x0338(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class USceneComponent*                             SceneComponent;                                           // 0x0340(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.RiddleCube");
		return ptr;
	}

};


// Class ES2.RingColorDataAsset
// 0x0000 (0x0040 - 0x0040)
class URingColorDataAsset : public UColorDataAsset
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.RingColorDataAsset");
		return ptr;
	}

};


// Class ES2.SavableInterface
// 0x0000 (0x0028 - 0x0028)
class USavableInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.SavableInterface");
		return ptr;
	}


	bool SaveState(TMap<struct FName, struct FGenericSaveDataBuffer>* GenericSaveDataMap);
	bool RestoreState(TMap<struct FName, struct FGenericSaveDataBuffer>* GenericSaveDataMap);
	bool OffsiteSimulate(float* TimePassed);
};


// Class ES2.SaveGameComponent
// 0x0008 (0x0100 - 0x00F8)
class USaveGameComponent : public UActorComponent
{
public:
	bool                                               bSaveState;                                               // 0x00F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               RespawnAfterDeath;                                        // 0x00F9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x00FA(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.SaveGameComponent");
		return ptr;
	}

};


// Class ES2.SaveGamePreview
// 0x0048 (0x0070 - 0x0028)
class USaveGamePreview : public USaveGame
{
public:
	class FString                                      Filename;                                                 // 0x0028(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame)
	class FString                                      SaveGameName;                                             // 0x0038(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame)
	int                                                UserIndex;                                                // 0x0048(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                PlayerLevel;                                              // 0x004C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              PlayingTimeSeconds;                                       // 0x0050(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	struct FDateTime                                   DateTime;                                                 // 0x0058(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame)
	bool                                               bIsAutoSave;                                              // 0x0060(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0061(0x0003) MISSED OFFSET
	struct FName                                       CurrentLocation;                                          // 0x0064(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x006C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.SaveGamePreview");
		return ptr;
	}

};


// Class ES2.SensorComponent
// 0x0080 (0x0178 - 0x00F8)
class USensorComponent : public UActorComponent
{
public:
	struct FAttributeAccess                            DefaultSensorRange;                                       // 0x00F8(0x0050) (Edit, BlueprintVisible)
	struct FSensorRanges                               CustomSensorRanges;                                       // 0x0148(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0170(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.SensorComponent");
		return ptr;
	}


	float GetSensorRangeForType(TEnumAsByte<ERegisterIds>* RegisteredType, bool* bIsTrurret);
};


// Class ES2.SequenceBase
// 0x02E0 (0x0610 - 0x0330)
class ASequenceBase : public AActor
{
public:
	class USelfRegisteringComponent*                   SelfRegistering;                                          // 0x0330(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	TArray<class AActor*>                              ActorsInSequence;                                         // 0x0338(0x0010) (BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0348(0x0010) MISSED OFFSET
	TMap<struct FMovieSceneObjectBindingID, class AActor*> ManuallyBoundActors;                                      // 0x0358(0x0050) (BlueprintVisible, ZeroConstructor)
	bool                                               bIsGenericCutscene;                                       // 0x03A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x03A9(0x0007) MISSED OFFSET
	class ALevelSequenceActor*                         LevelSequenceActor;                                       // 0x03B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnSequenceFinished;                                       // 0x03B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FESSequenceInfo                             SequenceInfo;                                             // 0x03C8(0x005C) (Edit, BlueprintVisible, DisableEditOnInstance)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0424(0x0004) MISSED OFFSET
	class ULevelSequence*                              LevelSequence;                                            // 0x0428(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FMovieSceneSequencePlaybackSettings         MovieSceneSequencePlaybackSettings;                       // 0x0430(0x0014) (Edit, BlueprintVisible, DisableEditOnInstance)
	unsigned char                                      UnknownData03[0xC];                                       // 0x0444(0x000C) MISSED OFFSET
	struct FTransform                                  SequenceTransform;                                        // 0x0450(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0xF8];                                      // 0x0480(0x00F8) MISSED OFFSET
	class UClass*                                      CameraShake;                                              // 0x0578(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x8];                                       // 0x0580(0x0008) MISSED OFFSET
	float                                              SpeedReductionFactor;                                     // 0x0588(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OversteerPreventionAngle;                                 // 0x058C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              YawAngle;                                                 // 0x0590(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PitchAngle;                                               // 0x0594(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x20];                                      // 0x0598(0x0020) MISSED OFFSET
	float                                              TimeToResetFactor;                                        // 0x05B8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x54];                                      // 0x05BC(0x0054) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.SequenceBase");
		return ptr;
	}


	void TogglePause(bool* bIsPaused);
	void StopSmoothCameraShake();
	void Started();
	class ASequenceBase* STATIC_SpawnSequence(class UClass** SequenceBP, TArray<class AActor*>* ActorsToBind, TMap<struct FMovieSceneObjectBindingID, class AActor*>* ManuallyBoundActors);
	void SkipDialogLine();
	void SetPlayerPawnBinding(struct FMovieSceneObjectBindingID* Binding);
	void SetPlayerLookAtBinding(struct FMovieSceneObjectBindingID* Binding);
	void SetBlendToTargetBinding(struct FMovieSceneObjectBindingID* Binding);
	void STATIC_ResumeSequenceByID(struct FName* InSequenceID);
	void ResumeSequence();
	void ResetGenericSequenceChanges();
	void STATIC_ResetCameraToPlayer();
	void STATIC_ResetBindings();
	void PostBeginPlay(class ALevelSequenceActor** InLevelSequenceActor);
	void STATIC_PlaySmoothCameraShake();
	void PauseSequence();
	void Finished();
	void DockingStarted();
	void Cancel();
};


// Class ES2.SequenceManager
// 0x00B8 (0x00E0 - 0x0028)
class USequenceManager : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnSequenceStarted;                                        // 0x0028(0x0010) (Edit, ZeroConstructor, EditConst, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnSkippableSequenceStarted;                               // 0x0038(0x0010) (Edit, ZeroConstructor, EditConst, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnSkippableSequenceFinished;                              // 0x0048(0x0010) (Edit, ZeroConstructor, EditConst, InstancedReference, BlueprintAssignable)
	class USplineComponent*                            SplineComponent;                                          // 0x0058(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x80];                                      // 0x0060(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.SequenceManager");
		return ptr;
	}


	class UTranslateActorToTransformComponent* STATIC_TranslateActorToTransform(class AActor** ActorToRail, struct FTransform* TransformToTranslate, class UCurveFloat** Curve, EEngineOpacityControlledBy* EngineOpacityControlledBy, class UCurveFloat** EngineOpacityCurve, TEnumAsByte<ELerpInterpolationMode>* LerpMode, int* PointIndex);
	void Started();
	bool STATIC_IsSkippableSequenceActive();
	class USplineComponent* STATIC_GetSplineComponent(class ACameraRig_Rail** CameraRigRail);
	class ALevelSequenceActor* STATIC_GetCurrentLevelSequenceActor();
	void Finished();
	void CreateSpline(class AActor** AttachToThis);
};


// Class ES2.SerializationLib
// 0x0000 (0x0028 - 0x0028)
class USerializationLib : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.SerializationLib");
		return ptr;
	}


	void STATIC_WriteTransformArray(struct FName* BufferKey, bool* bAppend, TMap<struct FName, struct FGenericSaveDataBuffer>* GenericSaveDataMap, TArray<struct FTransform>* Transform);
	void STATIC_WriteFloat(struct FName* BufferKey, float* Float, bool* bAppend, TMap<struct FName, struct FGenericSaveDataBuffer>* GenericSaveDataMap);
	void STATIC_WriteESVariantMap(struct FName* BufferKey, bool* bAppend, TMap<struct FName, struct FGenericSaveDataBuffer>* GenericSaveDataMap, TMap<struct FName, struct FESVariant>* Map);
	void STATIC_ReadTransformArray(TMap<struct FName, struct FGenericSaveDataBuffer>* GenericSaveDataMap, struct FName* BufferKey, int* OffsetIn, TArray<struct FTransform>* DataOut, int* OffsetOut);
	void STATIC_ReadFloat(TMap<struct FName, struct FGenericSaveDataBuffer>* GenericSaveDataMap, struct FName* BufferKey, int* OffsetIn, float* DataOut, int* OffsetOut);
	void STATIC_ReadESVariantMap(TMap<struct FName, struct FGenericSaveDataBuffer>* GenericSaveDataMap, struct FName* BufferKey, int* OffsetIn, TMap<struct FName, struct FESVariant>* DataOut, int* OffsetOut);
};


// Class ES2.ShieldComponent
// 0x0138 (0x02C8 - 0x0190)
class UShieldComponent : public UHitpointComponent
{
public:
	struct FScriptMulticastDelegate                    OnShieldChanged;                                          // 0x0190(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnShieldDepleted;                                         // 0x01A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnShieldCharging;                                         // 0x01B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FAttributeAccess                            RechargeDuration;                                         // 0x01C0(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FAttributeAccess                            RechargeDelayAfterHit;                                    // 0x0210(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FAttributeAccess                            ShutDownDuration;                                         // 0x0260(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	float                                              DamageLimit;                                              // 0x02B0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x02B4(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.ShieldComponent");
		return ptr;
	}


	void TakeDamage(float* DamageAmount, bool* bIsCritical, class AController** EventInstigator, class AActor** DamageCauser, struct FDamageEvent* DamageEvent, struct FHitResult* HitResult, float* DamageAbsorbed, float* DamageRemaining);
	void ShutDown(bool* permanent);
	bool IsDisrupted();
	bool GetNeedsRecharge();
	bool Disrupt(float* Duration);
};


// Class ES2.SpaceObject
// 0x0088 (0x03B8 - 0x0330)
class ASpaceObject : public AActor
{
public:
	struct FText                                       Name;                                                     // 0x0330(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	struct FName                                       ID;                                                       // 0x0348(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Seed;                                                     // 0x0350(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       SystemID;                                                 // 0x0354(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x035C(0x0004) MISSED OFFSET
	TMap<class FString, struct FSpaceObjectAttributes> Attributes;                                               // 0x0360(0x0050) (Edit, BlueprintVisible, ZeroConstructor, EditConst)
	float                                              VisibilityThreshold;                                      // 0x03B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x03B4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.SpaceObject");
		return ptr;
	}

};


// Class ES2.SpawnGizmoSelector
// 0x0018 (0x0348 - 0x0330)
class ASpawnGizmoSelector : public AActor
{
public:
	TArray<struct FSpawnGizmoSet>                      SpawnSets;                                                // 0x0330(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class USelfRegisteringComponent*                   SelfRegistering;                                          // 0x0340(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.SpawnGizmoSelector");
		return ptr;
	}

};


// Class ES2.SurfaceSnapComponent
// 0x0008 (0x0100 - 0x00F8)
class USurfaceSnapComponent : public UActorComponent
{
public:
	float                                              SphereTraceRadius;                                        // 0x00F8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00FC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.SurfaceSnapComponent");
		return ptr;
	}

};


// Class ES2.SystemsSave
// 0x0010 (0x0038 - 0x0028)
class USystemsSave : public USaveGame
{
public:
	TArray<struct FSystemData>                         SystemsData;                                              // 0x0028(0x0010) (ZeroConstructor, SaveGame)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.SystemsSave");
		return ptr;
	}

};


// Class ES2.System
// 0x00A0 (0x03D0 - 0x0330)
class ASystem : public AActor
{
public:
	struct FSystemData                                 SystemData;                                               // 0x0330(0x00A0) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.System");
		return ptr;
	}

};


// Class ES2.TestLib
// 0x0000 (0x0028 - 0x0028)
class UTestLib : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.TestLib");
		return ptr;
	}


	void STATIC_FindPath(class ANavNode** From, class ANavNode** To, TArray<class ANavNode*>* Result);
};


// Class ES2.TranslateActorToTransformComponent
// 0x0128 (0x0150 - 0x0028)
class UTranslateActorToTransformComponent : public UObject
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0028(0x0060) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnTranslationFinished;                                    // 0x0088(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UTimelineComponent*                          TranslateActorTimeline;                                   // 0x0098(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0xB0];                                      // 0x00A0(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.TranslateActorToTransformComponent");
		return ptr;
	}


	void TogglePause(bool* IsPaused);
	void TimelineFinishedCallback();
	void TimelineEngineOpacityCallback(float* CurveValue);
	void TimelineCallback(float* Val);
};


// Class ES2.TurretComponent
// 0x0048 (0x0140 - 0x00F8)
class UTurretComponent : public UActorComponent
{
public:
	float                                              MinMaxYawAngle;                                           // 0x00F8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FFloatRange                                 MinMaxPitchAngle;                                         // 0x00FC(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    RotationSpeedAngle;                                       // 0x010C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       PitchBoneName;                                            // 0x0118(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       YawBoneName;                                              // 0x0120(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWeaponComponent*                            WeaponComponent;                                          // 0x0128(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UPoseableMeshComponent*                      PoseableMeshComponent;                                    // 0x0130(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0138(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.TurretComponent");
		return ptr;
	}

};


// Class ES2.UiLib
// 0x0000 (0x0028 - 0x0028)
class UUiLib : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.UiLib");
		return ptr;
	}


	void STATIC_UpdateSlateNavigation(class UObject** WorldContextObject);
	void STATIC_SetFocusWidget(class UWidget** Widget);
	void STATIC_RescueCurrentFocus(class UObject** WorldContextObject);
	void STATIC_PushWidget(class UUserWidget** Widget, EWidgetStackType* Type, EWidgetPauseMode* PauseMode);
	void STATIC_PopWidget(class UWidget** Widget);
	int STATIC_GetZOrderOfLayer(EWidgetStackType* StackType);
	struct FText STATIC_GetRichTextByRarity(struct FText* Text, TEnumAsByte<EItemRarity>* Rarity);
	struct FText STATIC_GetColoredText(struct FText* Text, struct FLinearColor* LinearColor);
	struct FText STATIC_ConvertToShortKeyText(struct FText* Text, int* MaxBlanks);
	void STATIC_ClearWidgetStacks();
};


// Class ES2.UserFunctionsLib
// 0x0000 (0x0028 - 0x0028)
class UUserFunctionsLib : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.UserFunctionsLib");
		return ptr;
	}


	void STATIC_StartNewGame(int* UserIndex);
	bool STATIC_SaveGame(bool* bIsAutoSave, class FString* ReplacePreviewSaveFileName, int* UserIndex);
	bool STATIC_LoadGame(class FString* SaveGameName, int* UserIndex);
	void STATIC_GetSaveGamePreviews(bool* SortByDate, bool* bAutoSavesOnly, bool* bExcludeAutoSaves, int* UserIndex, TArray<class USaveGamePreview*>* SaveGamePreviews);
	class UESGameUserSettings* STATIC_GetESGameUserSettings();
	bool STATIC_AddBindingByName(class ALevelSequenceActor** Target, class ULevelSequence** InSequence, class FString* Name, class AActor** Actor);
};


// Class ES2.WantedLevelManager
// 0x0168 (0x0510 - 0x03A8)
class AWantedLevelManager : public ASpawnGizmoBase
{
public:
	class UPlayerData*                                 PlayerData;                                               // 0x03A8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLocationData                               CurrentLocationData;                                      // 0x03B0(0x0150) (BlueprintVisible, BlueprintReadOnly)
	TArray<class AActor*>                              SpawnedDefence;                                           // 0x0500(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.WantedLevelManager");
		return ptr;
	}


	void SpawnGroupByThreat(TEnumAsByte<ESpawnGroup>* SpawnGroupType);
	void OnNeutralsTurnedHostile();
	void OnHealthDepleted(class AActor** Actor, class AActor** DamageCauser, class AController** DamageInstigator, float* DamageAmount);
};


// Class ES2.WeaponBase
// 0x06C0 (0x0A30 - 0x0370)
class AWeaponBase : public AEquipmentBase
{
public:
	struct FName                                       AttachmentSocket;                                         // 0x0370(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bUseManualProjectileSpawning;                             // 0x0378(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0379(0x0007) MISSED OFFSET
	class UClass*                                      ProjectileClass;                                          // 0x0380(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // 0x0388(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ImpactNudgeDistance;                                      // 0x0398(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x039C(0x0004) MISSED OFFSET
	class FString                                      MuzzleFlashSocketSubString;                               // 0x03A0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	int                                                MuzzleFlashAttachmentSocketIndex;                         // 0x03B0(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x03B4(0x0004) MISSED OFFSET
	struct FWeaponData                                 WeaponConfig;                                             // 0x03B8(0x0528) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    OnWeaponHit;                                              // 0x08E0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnWeaponInitFromItem;                                     // 0x08F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnManualSpawnProjectile;                                  // 0x0900(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnChargeStart;                                            // 0x0910(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnChargeEnd;                                              // 0x0920(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnChargeTick;                                             // 0x0930(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	bool                                               bOverrideWeaponCullDistance;                              // 0x0940(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0941(0x0003) MISSED OFFSET
	float                                              WeaponCullDistanceOverride;                               // 0x0944(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bInvisible;                                               // 0x0948(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0949(0x0007) MISSED OFFSET
	class UParticleSystemComponent*                    MuzzleFlashParticleSystemComponent;                       // 0x0950(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        WeaponMesh;                                               // 0x0958(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UPrimitiveComponent*                         MuzzleSocketPrimitive;                                    // 0x0960(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UPrimitiveComponent*                         WeaponAttachmentPrimitive;                                // 0x0968(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	bool                                               bDebugDrawWeaponTrace;                                    // 0x0970(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0971(0x0007) MISSED OFFSET
	class AActor*                                      WeaponOwner;                                              // 0x0978(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UWeaponComponent*                            WeaponComponent;                                          // 0x0980(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UActorPool*                                  ProjectilePool;                                           // 0x0988(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<struct FName>                               MuzzleFlashAttachmentSockets;                             // 0x0990(0x0010) (ZeroConstructor, Transient)
	class UAudioComponent*                             FireAudioComponent;                                       // 0x09A0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             FireAudioDamageBoostComponent;                            // 0x09A8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             ChargingAudioComponent;                                   // 0x09B0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             ChargingLoopAudioComponent;                               // 0x09B8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UParticleSystem*                             MuzzleFlashParticleSystem;                                // 0x09C0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  FireSound;                                                // 0x09C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  FireLoopSound;                                            // 0x09D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  FireStartSound;                                           // 0x09D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  ChargingSound;                                            // 0x09E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  ChargingLoopSound;                                        // 0x09E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  FireFinishSound;                                          // 0x09F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  FireSoundDamageBoostAdd;                                  // 0x09F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  FireLoopSoundDamageBoostAdd;                              // 0x0A00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bLoopedMuzzleFX : 1;                                      // 0x0A08(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bLoopedFireSound : 1;                                     // 0x0A08(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0A09(0x0003) MISSED OFFSET
	float                                              fireSoundPitch;                                           // 0x0A0C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      bLoopedFireAnim : 1;                                      // 0x0A10(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData07[0xB];                                       // 0x0A11(0x000B) MISSED OFFSET
	float                                              ChargeSoundPerfectDuration;                               // 0x0A1C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BurstCounter;                                             // 0x0A20(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x0A24(0x0004) MISSED OFFSET
	class UAudioComponent*                             LastPlayedFireStartSoundComponent;                        // 0x0A28(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.WeaponBase");
		return ptr;
	}


	struct FHitResult STATIC_WeaponTrace(struct FVector* TraceFrom, struct FVector* TraceTo, class AActor** InstigatorActor, class AWeaponBase** Weapon);
	bool RequiresAmmo();
	void OnStopFire();
	void OnStartFire(struct FVector* StartPosition, struct FVector* EndPosition);
	void OnSpawnImpact(struct FTransform* SpawnTransform, struct FHitResult* HitInfo, EWeaponImpact* ImpactType, bool* bCriticalHit, struct FVector* ShotDirection, class AActor** InstigatorActor);
	void OnProjectileFired(class AProjectileBase** Projectile);
	void OnBurstStarted();
	void OnBurstEnded();
	bool IsUsingProjectilePool();
	bool IsInstantHitWeapon();
	bool IsConstantBeamWeapon();
	bool IsChargeWeapon();
	int GetWeaponSeed();
	float GetWeaponRange();
	class UItem* GetWeaponItem();
	float GetShieldDPS();
	float GetRampUpRatio();
	class AActor* GetOwningActor();
	struct FVector GetMuzzleLocation();
	float GetHullDPS();
	int GetCurrentAmmo();
	float GetChargeRatio();
	void Firing(struct FVector* StartPosition, struct FVector* EndPosition, class AActor** HitActor);
};


// Class ES2.WeaponComponent
// 0x0310 (0x0570 - 0x0260)
class UWeaponComponent : public USceneComponent
{
public:
	TArray<struct FWeaponInfo>                         WeaponSlots;                                              // 0x0260(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	class FString                                      WeaponSocketSubString;                                    // 0x0270(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FName>                               WeaponSockets;                                            // 0x0280(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               bAutoSpawnWeapons;                                        // 0x0290(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bRotateWeaponsToFocusLocation;                            // 0x0291(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShootWeaponsAtFocusLocation;                             // 0x0292(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0293(0x0001) MISSED OFFSET
	float                                              MinMaxYawAngle;                                           // 0x0294(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FFloatRange                                 MinMaxPitchAngle;                                         // 0x0298(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              FocusPointDistance;                                       // 0x02A8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxAngularSpeed;                                          // 0x02AC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseAutoAiming;                                           // 0x02B0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bCanHitEnemyTarget;                                       // 0x02B1(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x02B2(0x0006) MISSED OFFSET
	struct FBuffableFloat                              DamageFactor;                                             // 0x02B8(0x0040) (Edit, BlueprintVisible)
	struct FBuffableFloat                              EnergyConsumptionFactor;                                  // 0x02F8(0x0040) (Edit, BlueprintVisible)
	struct FBuffableFloat                              FireRateFactor;                                           // 0x0338(0x0040) (Edit, BlueprintVisible)
	struct FAutoaimParameters                          AutoAimParametersMouse;                                   // 0x0378(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FAutoaimParameters                          AutoAimParametersGamepad;                                 // 0x0388(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FBuffableFloat                              MaxAmmoIncreasePercent;                                   // 0x0398(0x0040) (Edit, BlueprintVisible)
	bool                                               bConsumeAmmo;                                             // 0x03D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x03D9(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnWeaponChargeStarted;                                    // 0x03E0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnWeaponChargeStopped;                                    // 0x03F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnWeaponChargeFull;                                       // 0x0400(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFireStarted;                                            // 0x0410(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnWeaponsReadyChanged;                                    // 0x0420(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCouldNotInstallWeapon;                                  // 0x0430(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnNewTargetLocked;                                        // 0x0440(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnNewWeaponInstalled;                                     // 0x0450(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnSpawnedWeaponsChanged;                                  // 0x0460(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnWeaponChanged;                                          // 0x0470(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnAmmoConsumed;                                           // 0x0480(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class AActor*                                      LastHoveredActor;                                         // 0x0490(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x5C];                                      // 0x0498(0x005C) MISSED OFFSET
	TWeakObjectPtr<class AActor>                       LockedTarget;                                             // 0x04F4(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x74];                                      // 0x04FC(0x0074) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.WeaponComponent");
		return ptr;
	}


	bool WillTargetBeHit();
	void StopFire();
	void StartFire();
	void SetWeaponsHiddenInGame(bool* bNewHidden, bool* bApplyToEquippedWeaponsOnly);
	void SetNewWeaponSlots(TArray<struct FWeaponInfo>* NewWeaponSlots);
	void SetLockedTarget(class AActor** TargetToLock);
	void SetAllowFire(bool* bAllow);
	void SelectWeapon(class UClass** WeaponClass);
	class AActor* SearchTargetToLock(TEnumAsByte<ETargetSearchStrategy>* Strategy, struct FVector* CameraLocation, struct FVector* CrosshairVector);
	void RemoveWeaponFromSlot(int* SlotIndex);
	bool PreviousWeapon();
	void OnLockedTargetDied(class AActor** DeadTarget, class AActor** DamageCauser, class AController** DamageInstigator, float* DamageAmount);
	bool NextWeapon();
	bool IsAnyWeaponSpawned();
	TEnumAsByte<EEquipmentInstallResult> InstallNewWeapon(struct FWeaponInfo* Weapon);
	bool HasRampUpTime();
	bool HasChargeTime();
	float GetRampUpRatio();
	int GetNumEmptySlots();
	struct FVector GetLockedTargetLeadingReticulePosition();
	class AActor* GetLockedTarget();
	struct FVector GetFocusLocation();
	class AWeaponBase* GetFirstWeaponInstanceOfClass(class UClass** WeaponClass);
	class AWeaponBase* GetFirstEquippedWeaponInstance();
	int GetEquippedWeaponIndex();
	void GetEquippedWeapon(struct FWeaponInfo* WeaponOut);
	void GetEquippableWeapons(TArray<class AWeaponBase*>* WeaponsOut);
	float GetChargeRatio();
	int GetAmmoOfSlot(int* SlotIndex);
	int GetAmmo(class UItem** WeaponItem);
	void EquipWeapon(int* SlotIndex, bool* bForceEquip);
	void STATIC_CreateWeaponInfoFromItem(class UItem** WeaponItem, struct FWeaponInfo* WeaponInfo);
	TEnumAsByte<EEquipmentInstallResult> CanWeaponBeInstalled(struct FWeaponInfo* Weapon);
	bool AreAllSlotsEmpty();
};


// Class ES2.WreckComponent
// 0x0050 (0x0660 - 0x0610)
class UWreckComponent : public UStaticMeshComponent
{
public:
	struct FScriptMulticastDelegate                    OnShowWreck;                                              // 0x0610(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	int                                                IndexToUse;                                               // 0x0620(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0624(0x0004) MISSED OFFSET
	TArray<class UStaticMesh*>                         Meshes;                                                   // 0x0628(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FComponentReference                         IntactMeshComponentRef;                                   // 0x0638(0x0018) (Edit)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0650(0x0008) MISSED OFFSET
	int                                                SelectedIndex;                                            // 0x0658(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x065C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.WreckComponent");
		return ptr;
	}


	void ShowWreckHideRest(bool* SkipHideExceptMesh);
	bool HasValidWreckMesh();
};


// Class ES2.XPComponent
// 0x0010 (0x0108 - 0x00F8)
class UXPComponent : public UActorComponent
{
public:
	float                                              XP;                                                       // 0x00F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGainCondition>                        GainCondition;                                            // 0x00FC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00FD(0x0003) MISSED OFFSET
	float                                              NeededPlayerDamageRatio;                                  // 0x0100(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0104(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ES2.XPComponent");
		return ptr;
	}


	void OwnerHealthDepleted(class AActor** Owner, class AActor** DamageCauser, class AController** DamageInstigator);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

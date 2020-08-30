#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_Ship_NPC_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Ship_NPC.BP_Ship_NPC_C
// 0x0028 (0x0C24 - 0x0BFC)
class ABP_Ship_NPC_C : public ABP_ShipBase_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0BFC(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0C00(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FScriptMulticastDelegate                    JumpInFinished;                                           // 0x0C08(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	float                                              AIRollAmount;                                             // 0x0C18(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AIRollManeuvers;                                          // 0x0C1C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanInvestigate;                                           // 0x0C1D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0C1E(0x0002) MISSED OFFSET
	float                                              BoostProbability;                                         // 0x0C20(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Ship_NPC.BP_Ship_NPC_C");
		return ptr;
	}


	void BroadcastInvestigate(class AActor** InstigatorActor);
	void AI_Tick();
	void OnAiBeginAttack();
	void AI_StopBoosting();
	void OnAiFleeFromTurnfight();
	void BndEvt__Health_K2Node_ComponentBoundEvent_0_OnHealthDepletedDelegate__DelegateSignature(class AActor** Actor, class AActor** DamageCauser, class AController** DamageInstigator, float* DamageAmount);
	void ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser);
	void OnAiBeginBarrelRoll();
	void AI_StartBoosting(float* DurationMin, float* DurationMax, bool* Roll);
	void OnAiEndBarrelRoll();
	void OnAiNoLeader();
	void OnAiBeginIsTailed();
	void OnAiEndIsTailed();
	void OnAiEndGainDistance();
	void OnNpcJumpIn();
	void OnAiBeginGainDistance();
	void OnNPCJumpAway(TEnumAsByte<EJumpMethod>* JumpMethod, class AActor** Actor);
	void OnAiEndFlee();
	void OnJumpInCompleted(class AActor** Actor);
	void OnAiBeginFlee();
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void ForwardOnNPCJumpAway(TEnumAsByte<EJumpMethod>* JumpMethod, class AActor** Actor);
	void ForwardOnJumpInCompleted(class AActor** Actor);
	void ExecuteUbergraph_BP_Ship_NPC(int* EntryPoint);
	void JumpInFinished__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

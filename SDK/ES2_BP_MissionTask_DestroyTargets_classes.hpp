#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_MissionTask_DestroyTargets_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MissionTask_DestroyTargets.BP_MissionTask_DestroyTargets_C
// 0x0061 (0x04D1 - 0x0470)
class ABP_MissionTask_DestroyTargets_C : public ABP_MissionTaskBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0470(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	TArray<class AActor*>                              Targets;                                                  // 0x0478(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	struct FName                                       AttributeNameNumTargets;                                  // 0x0488(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       AttributeNameCustomText;                                  // 0x0490(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FText                                       CustomObjectiveText;                                      // 0x0498(0x0028) (Edit, BlueprintVisible)
	struct FScriptMulticastDelegate                    OnTargetDestroyed;                                        // 0x04B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FName                                       AttributeNumTargetsToIgnore;                              // 0x04C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       NewVar_1;                                                 // 0x04C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AddIndicator;                                             // 0x04D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MissionTask_DestroyTargets.BP_MissionTask_DestroyTargets_C");
		return ptr;
	}


	struct FObjectiveDescription GetObjectiveDescription(struct FTaskSaveGameData* SavedTaskData);
	void ReceiveBeginPlay();
	void TargetEliminated(class AActor** Actor, class AActor** DamageCauser, class AController** DamageInstigator, float* DamageAmount);
	void CheckSuccess();
	void KilledSubPawns();
	void OnSubPawnsSpawned_Event(TArray<class AActor*>* SubPawns);
	void ExecuteUbergraph_BP_MissionTask_DestroyTargets(int* EntryPoint);
	void OnTargetDestroyed__DelegateSignature(class ABP_MissionTask_DestroyTargets_C** MissionTask, class AActor** TargetActor, class AActor** DamageCauser, class AController** DamageInstigator);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

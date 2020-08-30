#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_MissionTask_FindLurkers_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MissionTask_FindLurkers.BP_MissionTask_FindLurkers_C
// 0x0130 (0x05A0 - 0x0470)
class ABP_MissionTask_FindLurkers_C : public ABP_MissionTaskBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0470(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UHUDMarkerComponent*                         HUDMarker;                                                // 0x0478(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ShowSearchArea;                                           // 0x0480(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DoNotHideLurkers;                                         // 0x0481(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AddMissionIndicator;                                      // 0x0482(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0483(0x0001) MISSED OFFSET
	struct FVector                                     OffsetSearchAreaMarker;                                   // 0x0484(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                LurkersTotal;                                             // 0x0490(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                LurkersKilled;                                            // 0x0494(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FSTRCT_PawnArray>                    SpawnPoints_LurkerGroups;                                 // 0x0498(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UClass*                                      LurkerClass;                                              // 0x04A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FSTRCT_PawnArray>                    LurkerGroups;                                             // 0x04B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class AActor*>                              TempArray_LurkerGroup;                                    // 0x04C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	int                                                EnemyLevel;                                               // 0x04D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x04D4(0x0004) MISSED OFFSET
	TArray<class ATriggerSphere*>                      Triggers_ApproachGroups;                                  // 0x04D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	struct FVector                                     SumLocationVectors;                                       // 0x04E8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x04F4(0x0004) MISSED OFFSET
	TArray<class AActor*>                              SpawnPoints_LurkerGroup;                                  // 0x04F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class AESPawn*>                             LurkerGroup;                                              // 0x0508(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class ATriggerSphere*                              Trigger_LurkerRadius;                                     // 0x0518(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              AwarenessDistanceRadius;                                  // 0x0520(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SumAllGroupCenters;                                       // 0x0524(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     AllGroupsCenter;                                          // 0x0530(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsBPSpawnPoint;                                           // 0x053C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x053D(0x0003) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnLurkerGroupWoken;                                       // 0x0540(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               LurkersAreActive;                                         // 0x0550(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0551(0x0003) MISSED OFFSET
	struct FName                                       Attribute_LurkersKilled;                                  // 0x0554(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x055C(0x0004) MISSED OFFSET
	TArray<class AActor*>                              AllLurkers;                                               // 0x0560(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	struct FText                                       CustomObjectiveText;                                      // 0x0570(0x0028) (Edit, BlueprintVisible)
	struct FText                                       DefaultObjectiveText;                                     // 0x0588(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MissionTask_FindLurkers.BP_MissionTask_FindLurkers_C");
		return ptr;
	}


	struct FObjectiveDescription GetObjectiveDescription(struct FTaskSaveGameData* SavedTaskData);
	void ActivateLurkerGroup(int* Index_LurkerGroup);
	void ApproachedLurkerGroup(class AActor** OverlappedActor, class AActor** OtherActor);
	void ReceiveBeginPlay();
	void ActivateAllLurkers();
	void OnTakeAnyDamage_Event_1(class AActor** DamagedActor, float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser);
	void KilledAllLurkers();
	void OnTaskProgressed_Event_1(int* Progress);
	void ExecuteUbergraph_BP_MissionTask_FindLurkers(int* EntryPoint);
	void OnLurkerGroupWoken__DelegateSignature(int* LurkerGroupIndex);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_WantedLevelManager_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_WantedLevelManager.BP_WantedLevelManager_C
// 0x0018 (0x0528 - 0x0510)
class ABP_WantedLevelManager_C : public AWantedLevelManager
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0510(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWG_WantedLevel_C*                           WG_WantedLevel;                                           // 0x0518(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              SecurityUnit;                                             // 0x0520(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxLocationSecurityLevel;                                 // 0x0524(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_WantedLevelManager.BP_WantedLevelManager_C");
		return ptr;
	}


	void OnIngameWidgetCreated();
	void ReceiveBeginPlay();
	void OnHealthDepleted(class AActor** Actor, class AActor** DamageCauser, class AController** DamageInstigator, float* DamageAmount);
	void OnTimeUntilDefenceArrivesEllapsed();
	void OnNeutralsTurnedHostile();
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_BP_WantedLevelManager(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

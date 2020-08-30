#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_Turret_Retractable_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Turret_Retractable.BP_Turret_Retractable_C
// 0x003F (0x0A91 - 0x0A52)
class ABP_Turret_Retractable_C : public ABP_TurretBase_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x0A52(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0A58(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                      Socket;                                                   // 0x0A60(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              MoveTurret_HeightOffset_6F79D4784FAFC9C6C20889B25C9DF6ED; // 0x0A68(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    MoveTurret__Direction_6F79D4784FAFC9C6C20889B25C9DF6ED;   // 0x0A6C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0A6D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          MoveTurret;                                               // 0x0A70(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              RepairTime;                                               // 0x0A78(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0A7C(0x0004) MISSED OFFSET
	class USoundBase*                                  SoundHide;                                                // 0x0A80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  SoundShow;                                                // 0x0A88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsRetracted;                                              // 0x0A90(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Turret_Retractable.BP_Turret_Retractable_C");
		return ptr;
	}


	void MoveTurret__FinishedFunc();
	void MoveTurret__UpdateFunc();
	void ReceiveBeginPlay();
	void Retract(bool* Forward);
	void OnHealthChanged(class AActor** Actor, float* HitpointDelta, struct FVector* HitDirection);
	void OnTurretRepaired();
	void BringOutTurret();
	void ExecuteUbergraph_BP_Turret_Retractable(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

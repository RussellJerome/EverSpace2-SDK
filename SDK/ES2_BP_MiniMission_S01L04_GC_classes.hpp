#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_MiniMission_S01L04_GC_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MiniMission_S01L04_GC.BP_MiniMission_S01L04_GC_C
// 0x00E0 (0x0600 - 0x0520)
class ABP_MiniMission_S01L04_GC_C : public ABP_MissionBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0520(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	TSoftObjectPtr<class AActor>                       SpawnPoint_Leak;                                          // 0x0528(0x0028) (Edit, BlueprintVisible)
	TSoftObjectPtr<class AActor>                       SpawnPoint_Madcap;                                        // 0x0550(0x0028) (Edit, BlueprintVisible)
	TSoftObjectPtr<class AActor>                       SpawnPoint_Madcap_4;                                      // 0x0578(0x0028) (Edit, BlueprintVisible)
	TSoftObjectPtr<class AActor>                       SpawnPoint_Madcap_5;                                      // 0x05A0(0x0028) (Edit, BlueprintVisible)
	class AActor*                                      Madcap1;                                                  // 0x05C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABP_GasLeak_C*                               Leak;                                                     // 0x05D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       GBStation_ID;                                             // 0x05D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<TSoftObjectPtr<class AActor>>               SpawnPoints_Leaks;                                        // 0x05E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class AActor*>                              Leaks;                                                    // 0x05F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MiniMission_S01L04_GC.BP_MiniMission_S01L04_GC_C");
		return ptr;
	}


	void RepairedLeak();
	void DestroyedMadcap();
	void KilledLurkers();
	void OnEnteredStage(int* NewStage);
	void OnLurkerGroupWoken_Event(int* LurkerGroupIndex);
	void OnTaskProgressed_Event(int* Progress);
	void RepairedLeaks();
	void HeardDialog1(struct FName* DialogID, bool* bIsMenuDialog);
	void HeardDialog3(struct FName* DialogID, bool* bIsMenuDialog);
	void HeardDialog8(struct FName* DialogID, bool* bIsMenuDialog);
	void HeardDialog9(struct FName* DialogID, bool* bIsMenuDialog);
	void OnTaskProgressed_Event_1(int* Progress);
	void ExecuteUbergraph_BP_MiniMission_S01L04_GC(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

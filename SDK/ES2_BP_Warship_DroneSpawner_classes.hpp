#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_Warship_DroneSpawner_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Warship_DroneSpawner.BP_Warship_DroneSpawner_C
// 0x0038 (0x0368 - 0x0330)
class ABP_Warship_DroneSpawner_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0330(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             SpawnTransform;                                           // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UArrowComponent*                             Arrow;                                                    // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        BaseMesh;                                                 // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UClass*                                      DroneClass;                                               // 0x0358(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AESPawn*                                     SpawnedDrone;                                             // 0x0360(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Warship_DroneSpawner.BP_Warship_DroneSpawner_C");
		return ptr;
	}


	bool OffsiteSimulate(float* TimePassed);
	bool RestoreState(TMap<struct FName, struct FGenericSaveDataBuffer>* GenericSaveDataMap);
	bool SaveState(TMap<struct FName, struct FGenericSaveDataBuffer>* GenericSaveDataMap);
	void IsDroneAlive(bool* Result);
	void UserConstructionScript();
	void SpawnDrone(int* Level);
	void ReceiveBeginPlay();
	void TryToSpawnDrone(int* Level);
	void ExecuteUbergraph_BP_Warship_DroneSpawner(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

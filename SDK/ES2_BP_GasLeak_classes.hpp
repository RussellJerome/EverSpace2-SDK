#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_GasLeak_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_GasLeak.BP_GasLeak_C
// 0x0040 (0x0370 - 0x0330)
class ABP_GasLeak_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0330(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USaveGameComponent*                          SaveGame;                                                 // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UInteractComponent*                          Interact;                                                 // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UHUDMarkerComponent*                         HUDMarker;                                                // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UChildActorComponent*                        BP_SteamVent;                                             // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               IsLeaking;                                                // 0x0360(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0361(0x0007) MISSED OFFSET
	class UAudioComponent*                             NewVar_1;                                                 // 0x0368(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_GasLeak.BP_GasLeak_C");
		return ptr;
	}


	bool OffsiteSimulate(float* TimePassed);
	bool RestoreState(TMap<struct FName, struct FGenericSaveDataBuffer>* GenericSaveDataMap);
	bool SaveState(TMap<struct FName, struct FGenericSaveDataBuffer>* GenericSaveDataMap);
	void ReceiveBeginPlay();
	void StartLeaking();
	void StopLeaking();
	void CustomEvent(class UInteractComponent** InteractComponent, class AActor** Actor);
	void ExecuteUbergraph_BP_GasLeak(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

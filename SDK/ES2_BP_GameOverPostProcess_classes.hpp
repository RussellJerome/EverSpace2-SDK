#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_GameOverPostProcess_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_GameOverPostProcess.BP_GameOverPostProcess_C
// 0x0019 (0x0349 - 0x0330)
class ABP_GameOverPostProcess_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0330(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UPostProcessComponent*                       GameOverPostProcess;                                      // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               EnablingGameOver;                                         // 0x0348(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_GameOverPostProcess.BP_GameOverPostProcess_C");
		return ptr;
	}


	void ReceiveTick(float* DeltaSeconds);
	void EnableGameOverEffect();
	void DisableGameOverEffect();
	void ExecuteUbergraph_BP_GameOverPostProcess(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

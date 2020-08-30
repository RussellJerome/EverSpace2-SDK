#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_SpawnGizmo_Single_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SpawnGizmo_Single.BP_SpawnGizmo_Single_C
// 0x003D (0x03E5 - 0x03A8)
class ABP_SpawnGizmo_Single_C : public ASpawnGizmoBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UChildActorComponent*                        EditorNote;                                               // 0x03B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USurfaceSnapComponent*                       SurfaceSnap;                                              // 0x03B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UChildActorComponent*                        ChildActor;                                               // 0x03C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UClass*                                      ClassToSpawn;                                             // 0x03C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Seed;                                                     // 0x03D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRandomStream                               RandomStream;                                             // 0x03D4(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               RandomSeed;                                               // 0x03DC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03DD(0x0003) MISSED OFFSET
	int                                                PreviewShuffleIndex;                                      // 0x03E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ShufflePreview;                                           // 0x03E4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SpawnGizmo_Single.BP_SpawnGizmo_Single_C");
		return ptr;
	}


	class AActor* SpawnClass(class UClass** ClassToSpawnOverride, TEnumAsByte<ESpawnGroup>* ConcreteSpawnGroup, struct FSpawnParameter* SpawnParameter, struct FRandomStream* R);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_SpawnGizmo_Single(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

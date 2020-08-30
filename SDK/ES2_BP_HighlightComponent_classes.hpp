#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_HighlightComponent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_HighlightComponent.BP_HighlightComponent_C
// 0x0052 (0x014A - 0x00F8)
class UBP_HighlightComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	TArray<class UMeshComponent*>                      AffectedMeshes;                                           // 0x0100(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                StencilValue;                                             // 0x0110(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               StartEnabled;                                             // 0x0114(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0115(0x0003) MISSED OFFSET
	class FString                                      OriginalStencilTagString;                                 // 0x0118(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               Enabled;                                                  // 0x0128(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0129(0x0003) MISSED OFFSET
	int                                                StencilValueSelected;                                     // 0x012C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UInteractComponent*                          InteractComponent;                                        // 0x0130(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	TArray<class UMeshComponent*>                      MeshesToHighlight;                                        // 0x0138(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               HighlightOnHover;                                         // 0x0148(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               HighlightedByInteraction;                                 // 0x0149(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_HighlightComponent.BP_HighlightComponent_C");
		return ptr;
	}


	void GetOriginalStencil(class USceneComponent** Component, bool* Found, int* StencilValue, struct FName* Tag);
	void SetEnabled(bool* Enabled);
	void UpdateAffectedMeshes();
	void ReceiveBeginPlay();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void InteractSelectionChanged(class UInteractComponent** InteractComponent, class AActor** OwningActor, bool* bSelected);
	void SetHighlightMeshComponents(TArray<class UMeshComponent*>* Meshes);
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_BP_HighlightComponent(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

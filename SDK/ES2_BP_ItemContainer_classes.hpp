#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_ItemContainer_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ItemContainer.BP_ItemContainer_C
// 0x0098 (0x0430 - 0x0398)
class ABP_ItemContainer_C : public AItemContainer
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0398(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBP_DistanceCullComponent_C*                 BP_DistanceCullComponent;                                 // 0x03A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UChildActorComponent*                        BP_EditorNote;                                            // 0x03A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      SK_Container_Generic_001_Box001;                          // 0x03B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBP_HighlightComponent_C*                    BP_HighlightComponent;                                    // 0x03B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               DeleteWhenEmptied;                                        // 0x03C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x03C1(0x0007) MISSED OFFSET
	struct FText                                       OriginalScreenName;                                       // 0x03C8(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               AlreadyEmptyWhenOpened;                                   // 0x03E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x03E1(0x0003) MISSED OFFSET
	float                                              OpenAnimPos;                                              // 0x03E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PhysicsEnabled;                                           // 0x03E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x03E9(0x0007) MISSED OFFSET
	struct FText                                       InteractText;                                             // 0x03F0(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               RemoveMarkerWhenEmptied;                                  // 0x0408(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UseCustomName;                                            // 0x0409(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               CanBeHit;                                                 // 0x040A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShowWidgetWhenOpened;                                     // 0x040B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x040C(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnOpenedContainer;                                        // 0x0410(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnClosedContainer;                                        // 0x0420(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ItemContainer.BP_ItemContainer_C");
		return ptr;
	}


	void OpenContainerAndDropItsLoot();
	void UserConstructionScript();
	void OnContainerOpened();
	void ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser);
	void ReceiveBeginPlay();
	void SetScreenName(struct FText* ScreenName);
	void OnInteractHoldProgress_Event_1(class UInteractComponent** InteractComponent, class AActor** Actor, float* Progress);
	void ReceiveTick(float* DeltaSeconds);
	void OnClosedLoot();
	void CustomEvent_2(TEnumAsByte<EMenuTab>* Type);
	void ExecuteUbergraph_BP_ItemContainer(int* EntryPoint);
	void OnClosedContainer__DelegateSignature(class ABP_ItemContainer_C** ItemContainer);
	void OnOpenedContainer__DelegateSignature(class AItemContainer** ItemContainer);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

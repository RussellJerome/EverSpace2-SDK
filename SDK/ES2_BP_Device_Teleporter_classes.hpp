#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_Device_Teleporter_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Device_Teleporter.BP_Device_Teleporter_C
// 0x00D8 (0x05A0 - 0x04C8)
class ABP_Device_Teleporter_C : public ABP_Device_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UPostProcessComponent*                       PostProcessTeleport;                                      // 0x04D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              PostEffectTimeLine_BlendWeight_7F5B718F409ED191C4FFC8B7DAFB12E1;// 0x04D8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    PostEffectTimeLine__Direction_7F5B718F409ED191C4FFC8B7DAFB12E1;// 0x04DC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x04DD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          PostEffectTimeLine;                                       // 0x04E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FAttributeAccess                            TeleportDistance;                                         // 0x04E8(0x0050) (Edit, BlueprintVisible)
	float                                              DamageMultiplierAfterTeleporting;                         // 0x0538(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DamageAfterTeleportingDuration;                           // 0x053C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsDamagingNPCs;                                           // 0x0540(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0541(0x0003) MISSED OFFSET
	float                                              DamageToNPCs;                                             // 0x0544(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class APawn*>                               NPCsToDamage;                                             // 0x0548(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class ABP_Ship_Player_C*                           PlayerOwner;                                              // 0x0558(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                VFXColor;                                                 // 0x0560(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  VFXTransform;                                             // 0x0570(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Device_Teleporter.BP_Device_Teleporter_C");
		return ptr;
	}


	bool OnDeactivate(class AActor** OwnerOfDevice);
	bool OnActivate(class AActor** OwnerOfDevice);
	void PostEffectTimeLine__FinishedFunc();
	void PostEffectTimeLine__UpdateFunc();
	void ReceiveBeginPlay();
	void PlayVFX(struct FVector* InitialLocation, struct FVector* TargetLocations);
	void ExecuteUbergraph_BP_Device_Teleporter(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

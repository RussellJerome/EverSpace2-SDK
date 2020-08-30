#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_Condition_Base_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Condition_Base.BP_Condition_Base_C
// 0x0050 (0x01B8 - 0x0168)
class UBP_Condition_Base_C : public UConditionBaseComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0168(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UTexture2D*                                  Icon;                                                     // 0x0170(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Debuff;                                                   // 0x0178(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ShowInHUD;                                                // 0x0179(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x017A(0x0006) MISSED OFFSET
	class UClass*                                      EffectActorClass;                                         // 0x0180(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ABP_ConditionEffect_Base_C*                  EffectActor;                                              // 0x0188(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABP_PawnBase_C*                              OwnerPawn;                                                // 0x0190(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UAudioComponent*                             LoopSoundComponent;                                       // 0x0198(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FText                                       Name;                                                     // 0x01A0(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Condition_Base.BP_Condition_Base_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void DestroyEffect(class UConditionBaseComponent** ConditionComponent);
	void ReceiveTick(float* DeltaSeconds);
	void ConditionAdded(class UConditionBaseComponent** ConditionComponent);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void ExecuteUbergraph_BP_Condition_Base(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

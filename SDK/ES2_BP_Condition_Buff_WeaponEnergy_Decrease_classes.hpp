#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_Condition_Buff_WeaponEnergy_Decrease_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Condition_Buff_WeaponEnergy_Decrease.BP_Condition_Buff_WeaponEnergy_Decrease_C
// 0x0020 (0x01E0 - 0x01C0)
class UBP_Condition_Buff_WeaponEnergy_Decrease_C : public UBP_ConditionBase_Intensity_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              EnergyConsumptionDecreasePerToken;                        // 0x01C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x01CC(0x0004) MISSED OFFSET
	TArray<struct FModifierHandle>                     Modifiers;                                                // 0x01D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Condition_Buff_WeaponEnergy_Decrease.BP_Condition_Buff_WeaponEnergy_Decrease_C");
		return ptr;
	}


	float CalcIntensity(class AActor** Instigator, int* InstigatorLevel);
	void OnTokenCountChanged(int* TokenCount, float* CombinedIntensity);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void InitCondition(class AActor** Instigator, int* InstigatorLevel);
	void ExecuteUbergraph_BP_Condition_Buff_WeaponEnergy_Decrease(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

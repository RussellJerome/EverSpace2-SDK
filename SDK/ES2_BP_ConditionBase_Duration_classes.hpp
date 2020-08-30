#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_ConditionBase_Duration_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ConditionBase_Duration.BP_ConditionBase_Duration_C
// 0x0008 (0x01C0 - 0x01B8)
class UBP_ConditionBase_Duration_C : public UBP_Condition_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ConditionBase_Duration.BP_ConditionBase_Duration_C");
		return ptr;
	}


	float CalcIntensity(class AActor** UnsafeInstigator, int* InstigatorLevel);
	void OnTokenCountChanged(int* TokenCount, float* CurrentIntensity, float* RemainingTotalSeconds);
	void TickDurationCondition(float* DeltaSeconds, float* CurrentIntensity, class AActor** CurrentUnsafeInstigator, float* RemainingTotalSeconds);
	void InitCondition(class AActor** Instigator, int* InstigatorLevel);
	void ExecuteUbergraph_BP_ConditionBase_Duration(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

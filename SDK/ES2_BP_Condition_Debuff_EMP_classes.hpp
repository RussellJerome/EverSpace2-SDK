#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_Condition_Debuff_EMP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Condition_Debuff_EMP.BP_Condition_Debuff_EMP_C
// 0x0018 (0x01D8 - 0x01C0)
class UBP_Condition_Debuff_EMP_C : public UBP_ConditionBase_Duration_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	TArray<class UJumpSuppressorComponent*>            DisabledJumpSuppressors;                                  // 0x01C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Condition_Debuff_EMP.BP_Condition_Debuff_EMP_C");
		return ptr;
	}


	bool CheckPreconditions(class AActor** Candidate);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void InitCondition(class AActor** Instigator, int* InstigatorLevel);
	void ExecuteUbergraph_BP_Condition_Debuff_EMP(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

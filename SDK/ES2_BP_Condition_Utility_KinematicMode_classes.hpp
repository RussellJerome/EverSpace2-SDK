#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_Condition_Utility_KinematicMode_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Condition_Utility_KinematicMode.BP_Condition_Utility_KinematicMode_C
// 0x0009 (0x01C9 - 0x01C0)
class UBP_Condition_Utility_KinematicMode_C : public UBP_ConditionBase_Duration_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               EnablePhysics;                                            // 0x01C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Condition_Utility_KinematicMode.BP_Condition_Utility_KinematicMode_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void ExecuteUbergraph_BP_Condition_Utility_KinematicMode(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

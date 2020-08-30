#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BTS_GetJumpTarget_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BTS_GetJumpTarget.BTS_GetJumpTarget_C
// 0x0040 (0x00D8 - 0x0098)
class UBTS_GetJumpTarget_C : public UBTService_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0098(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                      JumpTargetKey;                                            // 0x00A0(0x0028) (Edit, BlueprintVisible)
	struct FFloatRange                                 DistanceFromPawnMeter;                                    // 0x00C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BTS_GetJumpTarget.BTS_GetJumpTarget_C");
		return ptr;
	}


	void ReceiveSearchStart(class AActor** OwnerActor);
	void ExecuteUbergraph_BTS_GetJumpTarget(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

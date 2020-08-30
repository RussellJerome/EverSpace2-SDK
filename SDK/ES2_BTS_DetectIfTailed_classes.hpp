#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BTS_DetectIfTailed_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BTS_DetectIfTailed.BTS_DetectIfTailed_C
// 0x005C (0x00F4 - 0x0098)
class UBTS_DetectIfTailed_C : public UBTService_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0098(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                      Target;                                                   // 0x00A0(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      IsTailed;                                                 // 0x00C8(0x0028) (Edit, BlueprintVisible)
	float                                              Size_factor;                                              // 0x00F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BTS_DetectIfTailed.BTS_DetectIfTailed_C");
		return ptr;
	}


	void ReceiveTickAI(class AAIController** OwnerController, class APawn** ControlledPawn, float* DeltaSeconds);
	void ReceiveSearchStartAI(class AAIController** OwnerController, class APawn** ControlledPawn);
	void ExecuteUbergraph_BTS_DetectIfTailed(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

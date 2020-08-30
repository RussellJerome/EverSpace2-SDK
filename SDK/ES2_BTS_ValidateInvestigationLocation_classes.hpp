#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BTS_ValidateInvestigationLocation_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BTS_ValidateInvestigationLocation.BTS_ValidateInvestigationLocation_C
// 0x005C (0x00F4 - 0x0098)
class UBTS_ValidateInvestigationLocation_C : public UBTService_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0098(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                      InvestigationLocation;                                    // 0x00A0(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      Timestamp;                                                // 0x00C8(0x0028) (Edit, BlueprintVisible)
	float                                              MaxAge;                                                   // 0x00F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BTS_ValidateInvestigationLocation.BTS_ValidateInvestigationLocation_C");
		return ptr;
	}


	void ReceiveTickAI(class AAIController** OwnerController, class APawn** ControlledPawn, float* DeltaSeconds);
	void ReceiveActivationAI(class AAIController** OwnerController, class APawn** ControlledPawn);
	void ExecuteUbergraph_BTS_ValidateInvestigationLocation(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BTD_CheckPawnParameter_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BTD_CheckPawnParameter.BTD_CheckPawnParameter_C
// 0x0008 (0x00A8 - 0x00A0)
class UBTD_CheckPawnParameter_C : public UBTDecorator_BlueprintBase
{
public:
	bool                                               CheckIfInInterior;                                        // 0x00A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               CheckMarkLevelGreaterThan;                                // 0x00A1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               CheckMarkLevelEqualTo;                                    // 0x00A2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x00A3(0x0001) MISSED OFFSET
	int                                                ExpectedMarkLevel;                                        // 0x00A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BTD_CheckPawnParameter.BTD_CheckPawnParameter_C");
		return ptr;
	}


	bool PerformConditionCheckAI(class AAIController** OwnerController, class APawn** ControlledPawn);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

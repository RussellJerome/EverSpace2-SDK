#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BPI_Condition_EMP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPI_Condition_EMP.BPI_Condition_EMP_C
// 0x0000 (0x0028 - 0x0028)
class UBPI_Condition_EMP_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_Condition_EMP.BPI_Condition_EMP_C");
		return ptr;
	}


	void RemoveEMP();
	void ApplyEMP(class AActor** Instigator);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

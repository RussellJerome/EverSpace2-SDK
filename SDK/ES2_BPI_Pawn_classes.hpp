#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BPI_Pawn_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPI_Pawn.BPI_Pawn_C
// 0x0000 (0x0028 - 0x0028)
class UBPI_Pawn_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_Pawn.BPI_Pawn_C");
		return ptr;
	}


	void GetPawnLocalSpaceBounds(struct FBoxSphereBounds* LocalSpaceBounds);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

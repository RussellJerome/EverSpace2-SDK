#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BPI_TravelMode_Sun_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPI_TravelMode_Sun.BPI_TravelMode_Sun_C
// 0x0000 (0x0028 - 0x0028)
class UBPI_TravelMode_Sun_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_TravelMode_Sun.BPI_TravelMode_Sun_C");
		return ptr;
	}


	void PreviewLightingAtLocation(struct FVector* Location);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

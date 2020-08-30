#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_PlanetDataComponent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_PlanetDataComponent.BP_PlanetDataComponent_C
// 0x0010 (0x0108 - 0x00F8)
class UBP_PlanetDataComponent_C : public UActorComponent
{
public:
	TArray<struct FSTRCT_PlanetType>                   PlanetData;                                               // 0x00F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PlanetDataComponent.BP_PlanetDataComponent_C");
		return ptr;
	}


	void GetPlanetData(TEnumAsByte<EPlanetTypes>* Type, struct FSTRCT_PlanetType* PlanetData);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

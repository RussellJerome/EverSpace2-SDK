#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_AreaLight_Red_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_AreaLight_Red.BP_AreaLight_Red_C
// 0x0000 (0x036E - 0x036E)
class ABP_AreaLight_Red_C : public ABP_AreaLight_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AreaLight_Red.BP_AreaLight_Red_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_Turret_GB_Freighter_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Turret_GB_Freighter.BP_Turret_GB_Freighter_C
// 0x0000 (0x0A91 - 0x0A91)
class ABP_Turret_GB_Freighter_C : public ABP_Turret_Retractable_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Turret_GB_Freighter.BP_Turret_GB_Freighter_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_Weapon_AutoCannon_Outlaw_Drone_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Weapon_AutoCannon_Outlaw_Drone.BP_Weapon_AutoCannon_Outlaw_Drone_C
// 0x0000 (0x0AC0 - 0x0AC0)
class ABP_Weapon_AutoCannon_Outlaw_Drone_C : public ABP_Weapon_Autocannon_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Weapon_AutoCannon_Outlaw_Drone.BP_Weapon_AutoCannon_Outlaw_Drone_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

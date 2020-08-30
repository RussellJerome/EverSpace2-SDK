#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_Weapon_CoilGun_Outlaw_Destroyer_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Weapon_CoilGun_Outlaw_Destroyer.BP_Weapon_CoilGun_Outlaw_Destroyer_C
// 0x0000 (0x0B14 - 0x0B14)
class ABP_Weapon_CoilGun_Outlaw_Destroyer_C : public ABP_Weapon_InstantHit_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Weapon_CoilGun_Outlaw_Destroyer.BP_Weapon_CoilGun_Outlaw_Destroyer_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

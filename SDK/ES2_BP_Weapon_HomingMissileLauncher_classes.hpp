#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_Weapon_HomingMissileLauncher_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Weapon_HomingMissileLauncher.BP_Weapon_HomingMissileLauncher_C
// 0x0000 (0x0AC0 - 0x0AC0)
class ABP_Weapon_HomingMissileLauncher_C : public ABP_Weapon_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Weapon_HomingMissileLauncher.BP_Weapon_HomingMissileLauncher_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

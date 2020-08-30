#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_Projectile_Missile_Fighter_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Projectile_Missile_Fighter.BP_Projectile_Missile_Fighter_C
// 0x0000 (0x0AB0 - 0x0AB0)
class ABP_Projectile_Missile_Fighter_C : public ABP_Projectile_Missile_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Projectile_Missile_Fighter.BP_Projectile_Missile_Fighter_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_Outlaw_Scout_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Outlaw_Scout.BP_Outlaw_Scout_C
// 0x0000 (0x0C24 - 0x0C24)
class ABP_Outlaw_Scout_C : public ABP_Ship_NPC_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Outlaw_Scout.BP_Outlaw_Scout_C");
		return ptr;
	}


	bool CanDoBarrelRoll();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

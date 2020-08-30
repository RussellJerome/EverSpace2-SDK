#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_Spawn_Crystal_Single_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Spawn_Crystal_Single.BP_Spawn_Crystal_Single_C
// 0x0000 (0x03E5 - 0x03E5)
class ABP_Spawn_Crystal_Single_C : public ABP_SpawnGizmo_Single_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Spawn_Crystal_Single.BP_Spawn_Crystal_Single_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

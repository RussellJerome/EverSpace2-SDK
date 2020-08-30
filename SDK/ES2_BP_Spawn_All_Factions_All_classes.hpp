#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_Spawn_All_Factions_All_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Spawn_All_Factions_All.BP_Spawn_All_Factions_All_C
// 0x0008 (0x03B0 - 0x03A8)
class ABP_Spawn_All_Factions_All_C : public ASpawnGizmoBase
{
public:
	class UChildActorComponent*                        ChildActor;                                               // 0x03A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Spawn_All_Factions_All.BP_Spawn_All_Factions_All_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_Outlaw_Madcap_Pod_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Outlaw_Madcap_Pod.BP_Outlaw_Madcap_Pod_C
// 0x0014 (0x0C38 - 0x0C24)
class ABP_Outlaw_Madcap_Pod_C : public ABP_Ship_NPC_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0C24(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0C28(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USphereComponent*                            WeaponCollisionSphere;                                    // 0x0C30(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Outlaw_Madcap_Pod.BP_Outlaw_Madcap_Pod_C");
		return ptr;
	}


	void OnAiFleeFromTurnfight();
	void ExecuteUbergraph_BP_Outlaw_Madcap_Pod(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

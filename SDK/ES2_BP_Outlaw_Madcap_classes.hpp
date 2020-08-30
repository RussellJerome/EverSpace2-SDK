#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_Outlaw_Madcap_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Outlaw_Madcap.BP_Outlaw_Madcap_C
// 0x0018 (0x0C3C - 0x0C24)
class ABP_Outlaw_Madcap_C : public ABP_Ship_NPC_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0C24(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0C28(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                MinMines;                                                 // 0x0C30(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxMines;                                                 // 0x0C34(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                NumMines;                                                 // 0x0C38(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Outlaw_Madcap.BP_Outlaw_Madcap_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnAiFleeFromTurnfight();
	void FinalExplosion();
	void Explode();
	void ExecuteUbergraph_BP_Outlaw_Madcap(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

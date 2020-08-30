#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_Weapon_MineLauncher_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Weapon_MineLauncher.BP_Weapon_MineLauncher_C
// 0x0010 (0x0AD0 - 0x0AC0)
class ABP_Weapon_MineLauncher_C : public ABP_Weapon_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AC0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class ABP_ProximityMine_Base_C*                    LastSpawnedMine;                                          // 0x0AC8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Weapon_MineLauncher.BP_Weapon_MineLauncher_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void ManualProjectileSpawning(struct FVector* StartPosition, struct FVector* ProjectileVelocity, float* ShieldDamage, float* HullDamage, float* ChargePercent);
	void EnableMineCollision();
	void EnableMinePortable();
	void ExecuteUbergraph_BP_Weapon_MineLauncher(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

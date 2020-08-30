#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_Outlaw_Destroyer_Weakspot_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Outlaw_Destroyer_Weakspot.BP_Outlaw_Destroyer_Weakspot_C
// 0x0010 (0x0420 - 0x0410)
class ABP_Outlaw_Destroyer_Weakspot_C : public ABP_Weakspot_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0410(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               IsVulnerable;                                             // 0x0418(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Left;                                                     // 0x0419(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x041A(0x0002) MISSED OFFSET
	float                                              OriginalOwnerDamageMultiplier;                            // 0x041C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Outlaw_Destroyer_Weakspot.BP_Outlaw_Destroyer_Weakspot_C");
		return ptr;
	}


	void UserConstructionScript();
	void SetVulnerable(bool* Vulnerable);
	void ReceivePointDamage(float* Damage, class UDamageType** DamageType, struct FVector* HitLocation, struct FVector* HitNormal, class UPrimitiveComponent** HitComponent, struct FName* BoneName, struct FVector* ShotFromDirection, class AController** InstigatedBy, class AActor** DamageCauser, struct FHitResult* HitInfo);
	void ExecuteUbergraph_BP_Outlaw_Destroyer_Weakspot(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_Weapon_Base_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Weapon_Base.BP_Weapon_Base_C
// 0x0090 (0x0AC0 - 0x0A30)
class ABP_Weapon_Base_C : public AWeaponBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0A30(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBP_ChargeSoundComponent_C*                  BP_ChargeSoundComponent;                                  // 0x0A38(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBP_DistanceCullComponent_C*                 BP_DistanceCullComponent;                                 // 0x0A40(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FSTRCT_WeaponEffect_Color>           EffectsColors;                                            // 0x0A48(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FRandomStream                               RandomStream;                                             // 0x0A58(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FSTRCT_WeaponEffect_Sound>           FireSounds;                                               // 0x0A60(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FSTRCT_WeaponEffect_Sound>           FireLoopSounds;                                           // 0x0A70(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FSTRCT_WeaponEffect_Sound>           FireStartSounds;                                          // 0x0A80(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FSTRCT_WeaponEffect_Sound_Charging>  ChargingSounds;                                           // 0x0A90(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FSTRCT_WeaponEffect_Sound>           FireFinishSounds;                                         // 0x0AA0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              FireCamShakeScale;                                        // 0x0AB0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0AB4(0x0004) MISSED OFFSET
	class UClass*                                      FireCamShakeClass;                                        // 0x0AB8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Weapon_Base.BP_Weapon_Base_C");
		return ptr;
	}


	void SetRandomizedFireSounds();
	void SetRandomizedEffectsColor();
	void ReceiveBeginPlay();
	void OnWeaponInitFromItem_Event_1();
	void OnProjectileFired(class AProjectileBase** Projectile);
	void Firing(struct FVector* StartPosition, struct FVector* EndPosition, class AActor** HitActor);
	void OnChargeEnd_Event();
	void OnChargeTick_Event(float* ChargePercent);
	void ExecuteUbergraph_BP_Weapon_Base(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

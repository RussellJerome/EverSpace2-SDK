#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_Device_Weapon_Overdrive_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Device_Weapon_Overdrive.BP_Device_Weapon_Overdrive_C
// 0x00AC (0x0574 - 0x04C8)
class ABP_Device_Weapon_Overdrive_C : public ABP_Device_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAttributeAccess                            FireRateAndDamageEffectValue;                             // 0x04D0(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FAttributeAccess                            WeaponEnergyEffectValue;                                  // 0x0520(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              AccelerationBuff;                                         // 0x0570(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Device_Weapon_Overdrive.BP_Device_Weapon_Overdrive_C");
		return ptr;
	}


	bool OnActivate(class AActor** OwnerOfDevice);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Device_Weapon_Overdrive(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

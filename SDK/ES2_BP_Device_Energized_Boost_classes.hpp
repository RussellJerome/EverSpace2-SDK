#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_Device_Energized_Boost_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Device_Energized_Boost.BP_Device_Energized_Boost_C
// 0x0078 (0x0540 - 0x04C8)
class ABP_Device_Energized_Boost_C : public ABP_Device_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAttributeAccess                            BoostEffectValue;                                         // 0x04D0(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              AccelerationBuff;                                         // 0x0520(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0524(0x0004) MISSED OFFSET
	struct FModifierHandle                             BoostSpeedModifierHandle;                                 // 0x0528(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FModifierHandle                             BoostAccelerationModifierHandle;                          // 0x0530(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class AESPawn*                                     OwningESPawn;                                             // 0x0538(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Device_Energized_Boost.BP_Device_Energized_Boost_C");
		return ptr;
	}


	bool OnDeactivate(class AActor** OwnerOfDevice);
	bool OnActivate(class AActor** OwnerOfDevice);
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_BP_Device_Energized_Boost(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

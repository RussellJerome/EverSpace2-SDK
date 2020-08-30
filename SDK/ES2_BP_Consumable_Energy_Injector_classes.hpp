#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_Consumable_Energy_Injector_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Consumable_Energy_Injector.BP_Consumable_Energy_Injector_C
// 0x0008 (0x04E8 - 0x04E0)
class ABP_Consumable_Energy_Injector_C : public ABP_Consumable_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Consumable_Energy_Injector.BP_Consumable_Energy_Injector_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Consumable_Energy_Injector(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

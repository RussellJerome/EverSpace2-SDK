#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_GB_Freight_Container_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_GB_Freight_Container.BP_GB_Freight_Container_C
// 0x0010 (0x0420 - 0x0410)
class ABP_GB_Freight_Container_C : public ABP_Weakspot_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0410(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class ULootDropComponent*                          LootDrop;                                                 // 0x0418(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_GB_Freight_Container.BP_GB_Freight_Container_C");
		return ptr;
	}


	void BndEvt__Wreck_K2Node_ComponentBoundEvent_1_OnShowWreckDelegate__DelegateSignature(class UWreckComponent** WreckComponent);
	void ExecuteUbergraph_BP_GB_Freight_Container(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

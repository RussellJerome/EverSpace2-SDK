#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_DroneBase_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_DroneBase.BP_DroneBase_C
// 0x000C (0x0C30 - 0x0C24)
class ABP_DroneBase_C : public ABP_Ship_NPC_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0C24(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0C28(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_DroneBase.BP_DroneBase_C");
		return ptr;
	}


	void SpawnExplosion();
	void ExecuteUbergraph_BP_DroneBase(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

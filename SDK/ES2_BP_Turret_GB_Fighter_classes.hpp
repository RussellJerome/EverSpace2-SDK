#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_Turret_GB_Fighter_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Turret_GB_Fighter.BP_Turret_GB_Fighter_C
// 0x000E (0x0A60 - 0x0A52)
class ABP_Turret_GB_Fighter_C : public ABP_TurretBase_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x0A52(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0A58(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Turret_GB_Fighter.BP_Turret_GB_Fighter_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Turret_GB_Fighter(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

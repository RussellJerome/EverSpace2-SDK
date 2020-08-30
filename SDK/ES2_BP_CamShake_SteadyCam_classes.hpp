#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_CamShake_SteadyCam_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_CamShake_SteadyCam.BP_CamShake_SteadyCam_C
// 0x0000 (0x0198 - 0x0198)
class UBP_CamShake_SteadyCam_C : public UBP_CamShake_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_CamShake_SteadyCam.BP_CamShake_SteadyCam_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

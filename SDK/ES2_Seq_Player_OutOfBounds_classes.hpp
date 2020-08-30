#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_Seq_Player_OutOfBounds_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Seq_Player_OutOfBounds.SequenceDirector_C
// 0x0000 (0x0030 - 0x0030)
class USequenceDirector_C : public ULevelSequenceDirector
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Seq_Player_OutOfBounds.SequenceDirector_C");
		return ptr;
	}


	void ResetCameraToPlayer();
	void ResetBinding();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

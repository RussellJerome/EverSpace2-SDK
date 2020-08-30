#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_IPilotAudioManager_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass IPilotAudioManager.IPilotAudioManager_C
// 0x0000 (0x0028 - 0x0028)
class UIPilotAudioManager_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass IPilotAudioManager.IPilotAudioManager_C");
		return ptr;
	}


	void IPlayPilotDialogue(class AESPawn** Pawn, TEnumAsByte<EAIEvent>* AIEvent, bool* bDeathSound);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

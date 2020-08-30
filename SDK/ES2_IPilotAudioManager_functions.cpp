// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_IPilotAudioManager_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function IPilotAudioManager.IPilotAudioManager_C.IPlayPilotDialogue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AESPawn**                Pawn                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EAIEvent>*         AIEvent                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bDeathSound                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIPilotAudioManager_C::IPlayPilotDialogue(class AESPawn** Pawn, TEnumAsByte<EAIEvent>* AIEvent, bool* bDeathSound)
{
	static auto fn = UObject::FindObject<UFunction>("Function IPilotAudioManager.IPilotAudioManager_C.IPlayPilotDialogue");

	UIPilotAudioManager_C_IPlayPilotDialogue_Params params;
	params.Pawn = Pawn;
	params.AIEvent = AIEvent;
	params.bDeathSound = bDeathSound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

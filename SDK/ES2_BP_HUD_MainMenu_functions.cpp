// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_HUD_MainMenu_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_HUD_MainMenu.BP_HUD_MainMenu_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_HUD_MainMenu_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD_MainMenu.BP_HUD_MainMenu_C.ReceiveBeginPlay");

	ABP_HUD_MainMenu_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HUD_MainMenu.BP_HUD_MainMenu_C.ExecuteUbergraph_BP_HUD_MainMenu
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HUD_MainMenu_C::ExecuteUbergraph_BP_HUD_MainMenu(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD_MainMenu.BP_HUD_MainMenu_C.ExecuteUbergraph_BP_HUD_MainMenu");

	ABP_HUD_MainMenu_C_ExecuteUbergraph_BP_HUD_MainMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

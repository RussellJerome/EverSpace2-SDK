// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_GameModeMainMenu_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_GameModeMainMenu.BP_GameModeMainMenu_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_GameModeMainMenu_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameModeMainMenu.BP_GameModeMainMenu_C.ReceiveBeginPlay");

	ABP_GameModeMainMenu_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameModeMainMenu.BP_GameModeMainMenu_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_GameModeMainMenu_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameModeMainMenu.BP_GameModeMainMenu_C.ReceiveEndPlay");

	ABP_GameModeMainMenu_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameModeMainMenu.BP_GameModeMainMenu_C.ExecuteUbergraph_BP_GameModeMainMenu
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_GameModeMainMenu_C::ExecuteUbergraph_BP_GameModeMainMenu(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameModeMainMenu.BP_GameModeMainMenu_C.ExecuteUbergraph_BP_GameModeMainMenu");

	ABP_GameModeMainMenu_C_ExecuteUbergraph_BP_GameModeMainMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

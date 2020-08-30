// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_Map_MainMenu_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Map_MainMenu.Map_MainMenu_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AMap_MainMenu_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Map_MainMenu.Map_MainMenu_C.ReceiveBeginPlay");

	AMap_MainMenu_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Map_MainMenu.Map_MainMenu_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMap_MainMenu_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Map_MainMenu.Map_MainMenu_C.ReceiveTick");

	AMap_MainMenu_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Map_MainMenu.Map_MainMenu_C.ExecuteUbergraph_Map_MainMenu
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMap_MainMenu_C::ExecuteUbergraph_Map_MainMenu(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Map_MainMenu.Map_MainMenu_C.ExecuteUbergraph_Map_MainMenu");

	AMap_MainMenu_C_ExecuteUbergraph_Map_MainMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

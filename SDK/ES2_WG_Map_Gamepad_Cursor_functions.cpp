// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_Map_Gamepad_Cursor_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WG_Map_Gamepad_Cursor.WG_Map_Gamepad_Cursor_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Map_Gamepad_Cursor_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Map_Gamepad_Cursor.WG_Map_Gamepad_Cursor_C.Tick");

	UWG_Map_Gamepad_Cursor_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Map_Gamepad_Cursor.WG_Map_Gamepad_Cursor_C.ExecuteUbergraph_WG_Map_Gamepad_Cursor
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Map_Gamepad_Cursor_C::ExecuteUbergraph_WG_Map_Gamepad_Cursor(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Map_Gamepad_Cursor.WG_Map_Gamepad_Cursor_C.ExecuteUbergraph_WG_Map_Gamepad_Cursor");

	UWG_Map_Gamepad_Cursor_C_ExecuteUbergraph_WG_Map_Gamepad_Cursor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

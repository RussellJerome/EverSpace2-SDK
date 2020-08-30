// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_Menu_Main_Screen_Base_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WG_Menu_Main_Screen_Base.WG_Menu_Main_Screen_Base_C.InitializeMenu
// (BlueprintCallable, BlueprintEvent)

void UWG_Menu_Main_Screen_Base_C::InitializeMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Menu_Main_Screen_Base.WG_Menu_Main_Screen_Base_C.InitializeMenu");

	UWG_Menu_Main_Screen_Base_C_InitializeMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Menu_Main_Screen_Base.WG_Menu_Main_Screen_Base_C.ExecuteUbergraph_WG_Menu_Main_Screen_Base
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Menu_Main_Screen_Base_C::ExecuteUbergraph_WG_Menu_Main_Screen_Base(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Menu_Main_Screen_Base.WG_Menu_Main_Screen_Base_C.ExecuteUbergraph_WG_Menu_Main_Screen_Base");

	UWG_Menu_Main_Screen_Base_C_ExecuteUbergraph_WG_Menu_Main_Screen_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

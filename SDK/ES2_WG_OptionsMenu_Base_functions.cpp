// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_OptionsMenu_Base_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WG_OptionsMenu_Base.WG_OptionsMenu_Base_C.RefreshFooterButtons
// (BlueprintCallable, BlueprintEvent)

void UWG_OptionsMenu_Base_C::RefreshFooterButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_OptionsMenu_Base.WG_OptionsMenu_Base_C.RefreshFooterButtons");

	UWG_OptionsMenu_Base_C_RefreshFooterButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_OptionsMenu_Base.WG_OptionsMenu_Base_C.OnCancel
// (BlueprintCallable, BlueprintEvent)

void UWG_OptionsMenu_Base_C::OnCancel()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_OptionsMenu_Base.WG_OptionsMenu_Base_C.OnCancel");

	UWG_OptionsMenu_Base_C_OnCancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_OptionsMenu_Base.WG_OptionsMenu_Base_C.InitializeOptionsMenu
// (BlueprintCallable, BlueprintEvent)

void UWG_OptionsMenu_Base_C::InitializeOptionsMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_OptionsMenu_Base.WG_OptionsMenu_Base_C.InitializeOptionsMenu");

	UWG_OptionsMenu_Base_C_InitializeOptionsMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_OptionsMenu_Base.WG_OptionsMenu_Base_C.ExecuteUbergraph_WG_OptionsMenu_Base
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_OptionsMenu_Base_C::ExecuteUbergraph_WG_OptionsMenu_Base(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_OptionsMenu_Base.WG_OptionsMenu_Base_C.ExecuteUbergraph_WG_OptionsMenu_Base");

	UWG_OptionsMenu_Base_C_ExecuteUbergraph_WG_OptionsMenu_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_OptionsMenu_Base.WG_OptionsMenu_Base_C.OnResumeGame__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWG_OptionsMenu_Base_C::OnResumeGame__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_OptionsMenu_Base.WG_OptionsMenu_Base_C.OnResumeGame__DelegateSignature");

	UWG_OptionsMenu_Base_C_OnResumeGame__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

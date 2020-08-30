// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_Submenu_Header_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WG_Submenu_Header.WG_Submenu_Header_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Submenu_Header_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Submenu_Header.WG_Submenu_Header_C.PreConstruct");

	UWG_Submenu_Header_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Submenu_Header.WG_Submenu_Header_C.SetNewTtile
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  NewTitle                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UWG_Submenu_Header_C::SetNewTtile(struct FText* NewTitle)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Submenu_Header.WG_Submenu_Header_C.SetNewTtile");

	UWG_Submenu_Header_C_SetNewTtile_Params params;
	params.NewTitle = NewTitle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Submenu_Header.WG_Submenu_Header_C.ExecuteUbergraph_WG_Submenu_Header
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Submenu_Header_C::ExecuteUbergraph_WG_Submenu_Header(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Submenu_Header.WG_Submenu_Header_C.ExecuteUbergraph_WG_Submenu_Header");

	UWG_Submenu_Header_C_ExecuteUbergraph_WG_Submenu_Header_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

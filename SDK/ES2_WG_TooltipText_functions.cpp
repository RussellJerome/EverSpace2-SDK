// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_TooltipText_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WG_TooltipText.WG_TooltipText_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWG_TooltipText_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_TooltipText.WG_TooltipText_C.Construct");

	UWG_TooltipText_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_TooltipText.WG_TooltipText_C.ExecuteUbergraph_WG_TooltipText
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_TooltipText_C::ExecuteUbergraph_WG_TooltipText(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_TooltipText.WG_TooltipText_C.ExecuteUbergraph_WG_TooltipText");

	UWG_TooltipText_C_ExecuteUbergraph_WG_TooltipText_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

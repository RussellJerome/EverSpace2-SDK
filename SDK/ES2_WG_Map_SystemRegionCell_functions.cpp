// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_Map_SystemRegionCell_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WG_Map_SystemRegionCell.WG_Map_SystemRegionCell_C.GetText_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWG_Map_SystemRegionCell_C::GetText_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Map_SystemRegionCell.WG_Map_SystemRegionCell_C.GetText_1");

	UWG_Map_SystemRegionCell_C_GetText_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_Map_SystemRegionCell.WG_Map_SystemRegionCell_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWG_Map_SystemRegionCell_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Map_SystemRegionCell.WG_Map_SystemRegionCell_C.Construct");

	UWG_Map_SystemRegionCell_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Map_SystemRegionCell.WG_Map_SystemRegionCell_C.ExecuteUbergraph_WG_Map_SystemRegionCell
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Map_SystemRegionCell_C::ExecuteUbergraph_WG_Map_SystemRegionCell(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Map_SystemRegionCell.WG_Map_SystemRegionCell_C.ExecuteUbergraph_WG_Map_SystemRegionCell");

	UWG_Map_SystemRegionCell_C_ExecuteUbergraph_WG_Map_SystemRegionCell_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

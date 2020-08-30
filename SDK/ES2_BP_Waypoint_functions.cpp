// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_Waypoint_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Waypoint.BP_Waypoint_C.UpdateEditorPreview
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          UpdatePredecessors             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Waypoint_C::UpdateEditorPreview(bool* UpdatePredecessors)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Waypoint.BP_Waypoint_C.UpdateEditorPreview");

	ABP_Waypoint_C_UpdateEditorPreview_Params params;
	params.UpdatePredecessors = UpdatePredecessors;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Waypoint.BP_Waypoint_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Waypoint_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Waypoint.BP_Waypoint_C.UserConstructionScript");

	ABP_Waypoint_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Waypoint.BP_Waypoint_C.CustomEvent
// (BlueprintCallable, BlueprintEvent)

void ABP_Waypoint_C::CustomEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Waypoint.BP_Waypoint_C.CustomEvent");

	ABP_Waypoint_C_CustomEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Waypoint.BP_Waypoint_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Waypoint_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Waypoint.BP_Waypoint_C.ReceiveBeginPlay");

	ABP_Waypoint_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Waypoint.BP_Waypoint_C.ExecuteUbergraph_BP_Waypoint
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Waypoint_C::ExecuteUbergraph_BP_Waypoint(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Waypoint.BP_Waypoint_C.ExecuteUbergraph_BP_Waypoint");

	ABP_Waypoint_C_ExecuteUbergraph_BP_Waypoint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

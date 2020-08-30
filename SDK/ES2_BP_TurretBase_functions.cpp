// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_TurretBase_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_TurretBase.BP_TurretBase_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_TurretBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TurretBase.BP_TurretBase_C.UserConstructionScript");

	ABP_TurretBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TurretBase.BP_TurretBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_TurretBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TurretBase.BP_TurretBase_C.ReceiveBeginPlay");

	ABP_TurretBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TurretBase.BP_TurretBase_C.RefreshHUDMarkerVisibility
// (BlueprintCallable, BlueprintEvent)

void ABP_TurretBase_C::RefreshHUDMarkerVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TurretBase.BP_TurretBase_C.RefreshHUDMarkerVisibility");

	ABP_TurretBase_C_RefreshHUDMarkerVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TurretBase.BP_TurretBase_C.OnAiBeginAttack
// (Event, Public, BlueprintEvent)

void ABP_TurretBase_C::OnAiBeginAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TurretBase.BP_TurretBase_C.OnAiBeginAttack");

	ABP_TurretBase_C_OnAiBeginAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TurretBase.BP_TurretBase_C.OnAiBeginIdle
// (Event, Public, BlueprintEvent)

void ABP_TurretBase_C::OnAiBeginIdle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TurretBase.BP_TurretBase_C.OnAiBeginIdle");

	ABP_TurretBase_C_OnAiBeginIdle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TurretBase.BP_TurretBase_C.ExecuteUbergraph_BP_TurretBase
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TurretBase_C::ExecuteUbergraph_BP_TurretBase(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TurretBase.BP_TurretBase_C.ExecuteUbergraph_BP_TurretBase");

	ABP_TurretBase_C_ExecuteUbergraph_BP_TurretBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

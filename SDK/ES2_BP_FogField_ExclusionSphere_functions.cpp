// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_FogField_ExclusionSphere_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_FogField_ExclusionSphere.BP_FogField_ExclusionSphere_C.UpdateGlobalFog
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_FogField_ExclusionSphere_C::UpdateGlobalFog()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FogField_ExclusionSphere.BP_FogField_ExclusionSphere_C.UpdateGlobalFog");

	ABP_FogField_ExclusionSphere_C_UpdateGlobalFog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FogField_ExclusionSphere.BP_FogField_ExclusionSphere_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_FogField_ExclusionSphere_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FogField_ExclusionSphere.BP_FogField_ExclusionSphere_C.UserConstructionScript");

	ABP_FogField_ExclusionSphere_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FogField_ExclusionSphere.BP_FogField_ExclusionSphere_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_FogField_ExclusionSphere_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FogField_ExclusionSphere.BP_FogField_ExclusionSphere_C.ReceiveBeginPlay");

	ABP_FogField_ExclusionSphere_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FogField_ExclusionSphere.BP_FogField_ExclusionSphere_C.ExecuteUbergraph_BP_FogField_ExclusionSphere
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_FogField_ExclusionSphere_C::ExecuteUbergraph_BP_FogField_ExclusionSphere(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FogField_ExclusionSphere.BP_FogField_ExclusionSphere_C.ExecuteUbergraph_BP_FogField_ExclusionSphere");

	ABP_FogField_ExclusionSphere_C_ExecuteUbergraph_BP_FogField_ExclusionSphere_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

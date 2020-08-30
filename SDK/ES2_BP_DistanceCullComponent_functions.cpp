// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_DistanceCullComponent_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_DistanceCullComponent.BP_DistanceCullComponent_C.MaxCullIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           CullIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           TRUE                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_DistanceCullComponent_C::MaxCullIndex(int* CullIndex, bool* TRUE)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DistanceCullComponent.BP_DistanceCullComponent_C.MaxCullIndex");

	UBP_DistanceCullComponent_C_MaxCullIndex_Params params;
	params.CullIndex = CullIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TRUE != nullptr)
		*TRUE = params.TRUE;
}


// Function BP_DistanceCullComponent.BP_DistanceCullComponent_C.GetCullSettingsIndexFromDistance
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_DistanceCullComponent_C::GetCullSettingsIndexFromDistance(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DistanceCullComponent.BP_DistanceCullComponent_C.GetCullSettingsIndexFromDistance");

	UBP_DistanceCullComponent_C_GetCullSettingsIndexFromDistance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Index != nullptr)
		*Index = params.Index;
}


// Function BP_DistanceCullComponent.BP_DistanceCullComponent_C.SetCulled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Culled                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FSTRCT_DistanceCullSettings* CullSettings                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_DistanceCullComponent_C::SetCulled(bool* Culled, struct FSTRCT_DistanceCullSettings* CullSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DistanceCullComponent.BP_DistanceCullComponent_C.SetCulled");

	UBP_DistanceCullComponent_C_SetCulled_Params params;
	params.Culled = Culled;
	params.CullSettings = CullSettings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DistanceCullComponent.BP_DistanceCullComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_DistanceCullComponent_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DistanceCullComponent.BP_DistanceCullComponent_C.ReceiveBeginPlay");

	UBP_DistanceCullComponent_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DistanceCullComponent.BP_DistanceCullComponent_C.CheckCullDistance
// (BlueprintCallable, BlueprintEvent)

void UBP_DistanceCullComponent_C::CheckCullDistance()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DistanceCullComponent.BP_DistanceCullComponent_C.CheckCullDistance");

	UBP_DistanceCullComponent_C_CheckCullDistance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DistanceCullComponent.BP_DistanceCullComponent_C.ExcludeComponent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UActorComponent**        TargetComponent                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_DistanceCullComponent_C::ExcludeComponent(class UActorComponent** TargetComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DistanceCullComponent.BP_DistanceCullComponent_C.ExcludeComponent");

	UBP_DistanceCullComponent_C_ExcludeComponent_Params params;
	params.TargetComponent = TargetComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DistanceCullComponent.BP_DistanceCullComponent_C.SetEnabled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_DistanceCullComponent_C::SetEnabled(bool* Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DistanceCullComponent.BP_DistanceCullComponent_C.SetEnabled");

	UBP_DistanceCullComponent_C_SetEnabled_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DistanceCullComponent.BP_DistanceCullComponent_C.SetDrawDistanceCulling
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_DistanceCullComponent_C::SetDrawDistanceCulling(bool* Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DistanceCullComponent.BP_DistanceCullComponent_C.SetDrawDistanceCulling");

	UBP_DistanceCullComponent_C_SetDrawDistanceCulling_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DistanceCullComponent.BP_DistanceCullComponent_C.ExecuteUbergraph_BP_DistanceCullComponent
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_DistanceCullComponent_C::ExecuteUbergraph_BP_DistanceCullComponent(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DistanceCullComponent.BP_DistanceCullComponent_C.ExecuteUbergraph_BP_DistanceCullComponent");

	UBP_DistanceCullComponent_C_ExecuteUbergraph_BP_DistanceCullComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_MeshField_Base_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_MeshField_Base.BP_MeshField_Base_C.ProcessExclusionSpheres
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MeshField_Base_C::ProcessExclusionSpheres(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MeshField_Base.BP_MeshField_Base_C.ProcessExclusionSpheres");

	ABP_MeshField_Base_C_ProcessExclusionSpheres_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MeshField_Base.BP_MeshField_Base_C.DestroyDynamicComponents
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MeshField_Base_C::DestroyDynamicComponents()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MeshField_Base.BP_MeshField_Base_C.DestroyDynamicComponents");

	ABP_MeshField_Base_C_DestroyDynamicComponents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MeshField_Base.BP_MeshField_Base_C.UpdateMeshField
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_MeshField_Base_C::UpdateMeshField()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MeshField_Base.BP_MeshField_Base_C.UpdateMeshField");

	ABP_MeshField_Base_C_UpdateMeshField_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MeshField_Base.BP_MeshField_Base_C.CheckLocationForPrimitiveOverlaps
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector*                Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Valid                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MeshField_Base_C::CheckLocationForPrimitiveOverlaps(struct FVector* Location, bool* Valid)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MeshField_Base.BP_MeshField_Base_C.CheckLocationForPrimitiveOverlaps");

	ABP_MeshField_Base_C_CheckLocationForPrimitiveOverlaps_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Valid != nullptr)
		*Valid = params.Valid;
}


// Function BP_MeshField_Base.BP_MeshField_Base_C.GetWeightedMeshIndex
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MeshField_Base_C::GetWeightedMeshIndex(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MeshField_Base.BP_MeshField_Base_C.GetWeightedMeshIndex");

	ABP_MeshField_Base_C_GetWeightedMeshIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Index != nullptr)
		*Index = params.Index;
}


// Function BP_MeshField_Base.BP_MeshField_Base_C.MakeTransform
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector*                Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              Transform                      (Parm, OutParm, IsPlainOldData)

void ABP_MeshField_Base_C::MakeTransform(struct FVector* Location, struct FTransform* Transform)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MeshField_Base.BP_MeshField_Base_C.MakeTransform");

	ABP_MeshField_Base_C_MakeTransform_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Transform != nullptr)
		*Transform = params.Transform;
}


// Function BP_MeshField_Base.BP_MeshField_Base_C.GetSphereTransforms
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_MeshField_Base_C::GetSphereTransforms()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MeshField_Base.BP_MeshField_Base_C.GetSphereTransforms");

	ABP_MeshField_Base_C_GetSphereTransforms_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MeshField_Base.BP_MeshField_Base_C.GetSplineTransforms
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_MeshField_Base_C::GetSplineTransforms()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MeshField_Base.BP_MeshField_Base_C.GetSplineTransforms");

	ABP_MeshField_Base_C_GetSplineTransforms_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MeshField_Base.BP_MeshField_Base_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MeshField_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MeshField_Base.BP_MeshField_Base_C.UserConstructionScript");

	ABP_MeshField_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

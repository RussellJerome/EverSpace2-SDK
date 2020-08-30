// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_MeshField_ExclusionSphere_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_MeshField_ExclusionSphere.BP_MeshField_ExclusionSphere_C.UpdateMeshFields
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MeshField_ExclusionSphere_C::UpdateMeshFields()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MeshField_ExclusionSphere.BP_MeshField_ExclusionSphere_C.UpdateMeshFields");

	ABP_MeshField_ExclusionSphere_C_UpdateMeshFields_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MeshField_ExclusionSphere.BP_MeshField_ExclusionSphere_C.UpdateExclusionSphere
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MeshField_ExclusionSphere_C::UpdateExclusionSphere()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MeshField_ExclusionSphere.BP_MeshField_ExclusionSphere_C.UpdateExclusionSphere");

	ABP_MeshField_ExclusionSphere_C_UpdateExclusionSphere_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MeshField_ExclusionSphere.BP_MeshField_ExclusionSphere_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MeshField_ExclusionSphere_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MeshField_ExclusionSphere.BP_MeshField_ExclusionSphere_C.UserConstructionScript");

	ABP_MeshField_ExclusionSphere_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

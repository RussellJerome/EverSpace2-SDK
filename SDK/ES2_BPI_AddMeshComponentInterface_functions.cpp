// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BPI_AddMeshComponentInterface_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPI_AddMeshComponentInterface.BPI_AddMeshComponentInterface_C.AddSkeletalMeshComponent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMesh**          SkeletalMesh                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform*             Transform                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class USkeletalMeshComponent*  Component                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBPI_AddMeshComponentInterface_C::AddSkeletalMeshComponent(class USkeletalMesh** SkeletalMesh, struct FTransform* Transform, class USkeletalMeshComponent** Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AddMeshComponentInterface.BPI_AddMeshComponentInterface_C.AddSkeletalMeshComponent");

	UBPI_AddMeshComponentInterface_C_AddSkeletalMeshComponent_Params params;
	params.SkeletalMesh = SkeletalMesh;
	params.Transform = Transform;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Component != nullptr)
		*Component = params.Component;
}


// Function BPI_AddMeshComponentInterface.BPI_AddMeshComponentInterface_C.AddStaticMeshComponent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMesh**            StaticMesh                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform*             Transform                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UStaticMeshComponent*    Component                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBPI_AddMeshComponentInterface_C::AddStaticMeshComponent(class UStaticMesh** StaticMesh, struct FTransform* Transform, class UStaticMeshComponent** Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AddMeshComponentInterface.BPI_AddMeshComponentInterface_C.AddStaticMeshComponent");

	UBPI_AddMeshComponentInterface_C_AddStaticMeshComponent_Params params;
	params.StaticMesh = StaticMesh;
	params.Transform = Transform;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Component != nullptr)
		*Component = params.Component;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

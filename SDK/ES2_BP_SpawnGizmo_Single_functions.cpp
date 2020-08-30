// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_SpawnGizmo_Single_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_SpawnGizmo_Single.BP_SpawnGizmo_Single_C.SpawnClass
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 ClassToSpawnOverride           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESpawnGroup>*      ConcreteSpawnGroup             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FSpawnParameter*        SpawnParameter                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
// struct FRandomStream           R                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* ABP_SpawnGizmo_Single_C::SpawnClass(class UClass** ClassToSpawnOverride, TEnumAsByte<ESpawnGroup>* ConcreteSpawnGroup, struct FSpawnParameter* SpawnParameter, struct FRandomStream* R)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpawnGizmo_Single.BP_SpawnGizmo_Single_C.SpawnClass");

	ABP_SpawnGizmo_Single_C_SpawnClass_Params params;
	params.ClassToSpawnOverride = ClassToSpawnOverride;
	params.ConcreteSpawnGroup = ConcreteSpawnGroup;
	params.SpawnParameter = SpawnParameter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (R != nullptr)
		*R = params.R;

	return params.ReturnValue;
}


// Function BP_SpawnGizmo_Single.BP_SpawnGizmo_Single_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_SpawnGizmo_Single_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpawnGizmo_Single.BP_SpawnGizmo_Single_C.UserConstructionScript");

	ABP_SpawnGizmo_Single_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpawnGizmo_Single.BP_SpawnGizmo_Single_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_SpawnGizmo_Single_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpawnGizmo_Single.BP_SpawnGizmo_Single_C.ReceiveBeginPlay");

	ABP_SpawnGizmo_Single_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpawnGizmo_Single.BP_SpawnGizmo_Single_C.ExecuteUbergraph_BP_SpawnGizmo_Single
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SpawnGizmo_Single_C::ExecuteUbergraph_BP_SpawnGizmo_Single(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpawnGizmo_Single.BP_SpawnGizmo_Single_C.ExecuteUbergraph_BP_SpawnGizmo_Single");

	ABP_SpawnGizmo_Single_C_ExecuteUbergraph_BP_SpawnGizmo_Single_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

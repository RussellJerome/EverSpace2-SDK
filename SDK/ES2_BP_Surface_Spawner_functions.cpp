// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_Surface_Spawner_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Surface_Spawner.BP_Surface_Spawner_C.ForceSpawn
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Surface_Spawner_C::ForceSpawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Surface_Spawner.BP_Surface_Spawner_C.ForceSpawn");

	ABP_Surface_Spawner_C_ForceSpawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Surface_Spawner.BP_Surface_Spawner_C.SpawnClass
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 ClassToSpawnOverride           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESpawnGroup>*      ConcreteSpawnGroup             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FSpawnParameter*        SpawnParameter                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
// struct FRandomStream           R                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* ABP_Surface_Spawner_C::SpawnClass(class UClass** ClassToSpawnOverride, TEnumAsByte<ESpawnGroup>* ConcreteSpawnGroup, struct FSpawnParameter* SpawnParameter, struct FRandomStream* R)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Surface_Spawner.BP_Surface_Spawner_C.SpawnClass");

	ABP_Surface_Spawner_C_SpawnClass_Params params;
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


// Function BP_Surface_Spawner.BP_Surface_Spawner_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Surface_Spawner_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Surface_Spawner.BP_Surface_Spawner_C.UserConstructionScript");

	ABP_Surface_Spawner_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Surface_Spawner.BP_Surface_Spawner_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Surface_Spawner_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Surface_Spawner.BP_Surface_Spawner_C.ReceiveBeginPlay");

	ABP_Surface_Spawner_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Surface_Spawner.BP_Surface_Spawner_C.ExecuteUbergraph_BP_Surface_Spawner
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Surface_Spawner_C::ExecuteUbergraph_BP_Surface_Spawner(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Surface_Spawner.BP_Surface_Spawner_C.ExecuteUbergraph_BP_Surface_Spawner");

	ABP_Surface_Spawner_C_ExecuteUbergraph_BP_Surface_Spawner_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Surface_Spawner.BP_Surface_Spawner_C.OnActorSpawned__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Surface_Spawner_C::OnActorSpawned__DelegateSignature(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Surface_Spawner.BP_Surface_Spawner_C.OnActorSpawned__DelegateSignature");

	ABP_Surface_Spawner_C_OnActorSpawned__DelegateSignature_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

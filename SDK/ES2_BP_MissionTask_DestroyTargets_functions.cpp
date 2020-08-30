// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_MissionTask_DestroyTargets_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_MissionTask_DestroyTargets.BP_MissionTask_DestroyTargets_C.GetObjectiveDescription
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTaskSaveGameData*      SavedTaskData                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FObjectiveDescription   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FObjectiveDescription ABP_MissionTask_DestroyTargets_C::GetObjectiveDescription(struct FTaskSaveGameData* SavedTaskData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionTask_DestroyTargets.BP_MissionTask_DestroyTargets_C.GetObjectiveDescription");

	ABP_MissionTask_DestroyTargets_C_GetObjectiveDescription_Params params;
	params.SavedTaskData = SavedTaskData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MissionTask_DestroyTargets.BP_MissionTask_DestroyTargets_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_MissionTask_DestroyTargets_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionTask_DestroyTargets.BP_MissionTask_DestroyTargets_C.ReceiveBeginPlay");

	ABP_MissionTask_DestroyTargets_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionTask_DestroyTargets.BP_MissionTask_DestroyTargets_C.TargetEliminated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController**            DamageInstigator               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         DamageAmount                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MissionTask_DestroyTargets_C::TargetEliminated(class AActor** Actor, class AActor** DamageCauser, class AController** DamageInstigator, float* DamageAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionTask_DestroyTargets.BP_MissionTask_DestroyTargets_C.TargetEliminated");

	ABP_MissionTask_DestroyTargets_C_TargetEliminated_Params params;
	params.Actor = Actor;
	params.DamageCauser = DamageCauser;
	params.DamageInstigator = DamageInstigator;
	params.DamageAmount = DamageAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionTask_DestroyTargets.BP_MissionTask_DestroyTargets_C.CheckSuccess
// (BlueprintCallable, BlueprintEvent)

void ABP_MissionTask_DestroyTargets_C::CheckSuccess()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionTask_DestroyTargets.BP_MissionTask_DestroyTargets_C.CheckSuccess");

	ABP_MissionTask_DestroyTargets_C_CheckSuccess_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionTask_DestroyTargets.BP_MissionTask_DestroyTargets_C.KilledSubPawns
// (BlueprintCallable, BlueprintEvent)

void ABP_MissionTask_DestroyTargets_C::KilledSubPawns()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionTask_DestroyTargets.BP_MissionTask_DestroyTargets_C.KilledSubPawns");

	ABP_MissionTask_DestroyTargets_C_KilledSubPawns_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionTask_DestroyTargets.BP_MissionTask_DestroyTargets_C.OnSubPawnsSpawned_Event
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>*         SubPawns                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_MissionTask_DestroyTargets_C::OnSubPawnsSpawned_Event(TArray<class AActor*>* SubPawns)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionTask_DestroyTargets.BP_MissionTask_DestroyTargets_C.OnSubPawnsSpawned_Event");

	ABP_MissionTask_DestroyTargets_C_OnSubPawnsSpawned_Event_Params params;
	params.SubPawns = SubPawns;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionTask_DestroyTargets.BP_MissionTask_DestroyTargets_C.ExecuteUbergraph_BP_MissionTask_DestroyTargets
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MissionTask_DestroyTargets_C::ExecuteUbergraph_BP_MissionTask_DestroyTargets(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionTask_DestroyTargets.BP_MissionTask_DestroyTargets_C.ExecuteUbergraph_BP_MissionTask_DestroyTargets");

	ABP_MissionTask_DestroyTargets_C_ExecuteUbergraph_BP_MissionTask_DestroyTargets_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionTask_DestroyTargets.BP_MissionTask_DestroyTargets_C.OnTargetDestroyed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MissionTask_DestroyTargets_C** MissionTask                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 TargetActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController**            DamageInstigator               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MissionTask_DestroyTargets_C::OnTargetDestroyed__DelegateSignature(class ABP_MissionTask_DestroyTargets_C** MissionTask, class AActor** TargetActor, class AActor** DamageCauser, class AController** DamageInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionTask_DestroyTargets.BP_MissionTask_DestroyTargets_C.OnTargetDestroyed__DelegateSignature");

	ABP_MissionTask_DestroyTargets_C_OnTargetDestroyed__DelegateSignature_Params params;
	params.MissionTask = MissionTask;
	params.TargetActor = TargetActor;
	params.DamageCauser = DamageCauser;
	params.DamageInstigator = DamageInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

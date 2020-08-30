// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_MissionTask_FindLurkers_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_MissionTask_FindLurkers.BP_MissionTask_FindLurkers_C.GetObjectiveDescription
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTaskSaveGameData*      SavedTaskData                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FObjectiveDescription   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FObjectiveDescription ABP_MissionTask_FindLurkers_C::GetObjectiveDescription(struct FTaskSaveGameData* SavedTaskData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionTask_FindLurkers.BP_MissionTask_FindLurkers_C.GetObjectiveDescription");

	ABP_MissionTask_FindLurkers_C_GetObjectiveDescription_Params params;
	params.SavedTaskData = SavedTaskData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MissionTask_FindLurkers.BP_MissionTask_FindLurkers_C.ActivateLurkerGroup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Index_LurkerGroup              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MissionTask_FindLurkers_C::ActivateLurkerGroup(int* Index_LurkerGroup)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionTask_FindLurkers.BP_MissionTask_FindLurkers_C.ActivateLurkerGroup");

	ABP_MissionTask_FindLurkers_C_ActivateLurkerGroup_Params params;
	params.Index_LurkerGroup = Index_LurkerGroup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionTask_FindLurkers.BP_MissionTask_FindLurkers_C.ApproachedLurkerGroup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 OverlappedActor                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MissionTask_FindLurkers_C::ApproachedLurkerGroup(class AActor** OverlappedActor, class AActor** OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionTask_FindLurkers.BP_MissionTask_FindLurkers_C.ApproachedLurkerGroup");

	ABP_MissionTask_FindLurkers_C_ApproachedLurkerGroup_Params params;
	params.OverlappedActor = OverlappedActor;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionTask_FindLurkers.BP_MissionTask_FindLurkers_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_MissionTask_FindLurkers_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionTask_FindLurkers.BP_MissionTask_FindLurkers_C.ReceiveBeginPlay");

	ABP_MissionTask_FindLurkers_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionTask_FindLurkers.BP_MissionTask_FindLurkers_C.ActivateAllLurkers
// (BlueprintCallable, BlueprintEvent)

void ABP_MissionTask_FindLurkers_C::ActivateAllLurkers()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionTask_FindLurkers.BP_MissionTask_FindLurkers_C.ActivateAllLurkers");

	ABP_MissionTask_FindLurkers_C_ActivateAllLurkers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionTask_FindLurkers.BP_MissionTask_FindLurkers_C.OnTakeAnyDamage_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 DamagedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType**            DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController**            InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MissionTask_FindLurkers_C::OnTakeAnyDamage_Event_1(class AActor** DamagedActor, float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionTask_FindLurkers.BP_MissionTask_FindLurkers_C.OnTakeAnyDamage_Event_1");

	ABP_MissionTask_FindLurkers_C_OnTakeAnyDamage_Event_1_Params params;
	params.DamagedActor = DamagedActor;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionTask_FindLurkers.BP_MissionTask_FindLurkers_C.KilledAllLurkers
// (BlueprintCallable, BlueprintEvent)

void ABP_MissionTask_FindLurkers_C::KilledAllLurkers()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionTask_FindLurkers.BP_MissionTask_FindLurkers_C.KilledAllLurkers");

	ABP_MissionTask_FindLurkers_C_KilledAllLurkers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionTask_FindLurkers.BP_MissionTask_FindLurkers_C.OnTaskProgressed_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Progress                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MissionTask_FindLurkers_C::OnTaskProgressed_Event_1(int* Progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionTask_FindLurkers.BP_MissionTask_FindLurkers_C.OnTaskProgressed_Event_1");

	ABP_MissionTask_FindLurkers_C_OnTaskProgressed_Event_1_Params params;
	params.Progress = Progress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionTask_FindLurkers.BP_MissionTask_FindLurkers_C.ExecuteUbergraph_BP_MissionTask_FindLurkers
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MissionTask_FindLurkers_C::ExecuteUbergraph_BP_MissionTask_FindLurkers(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionTask_FindLurkers.BP_MissionTask_FindLurkers_C.ExecuteUbergraph_BP_MissionTask_FindLurkers");

	ABP_MissionTask_FindLurkers_C_ExecuteUbergraph_BP_MissionTask_FindLurkers_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionTask_FindLurkers.BP_MissionTask_FindLurkers_C.OnLurkerGroupWoken__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           LurkerGroupIndex               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MissionTask_FindLurkers_C::OnLurkerGroupWoken__DelegateSignature(int* LurkerGroupIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionTask_FindLurkers.BP_MissionTask_FindLurkers_C.OnLurkerGroupWoken__DelegateSignature");

	ABP_MissionTask_FindLurkers_C_OnLurkerGroupWoken__DelegateSignature_Params params;
	params.LurkerGroupIndex = LurkerGroupIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

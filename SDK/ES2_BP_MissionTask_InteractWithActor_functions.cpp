// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_MissionTask_InteractWithActor_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_MissionTask_InteractWithActor.BP_MissionTask_InteractWithActor_C.GetObjectiveDescription
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTaskSaveGameData*      SavedTaskData                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FObjectiveDescription   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FObjectiveDescription ABP_MissionTask_InteractWithActor_C::GetObjectiveDescription(struct FTaskSaveGameData* SavedTaskData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionTask_InteractWithActor.BP_MissionTask_InteractWithActor_C.GetObjectiveDescription");

	ABP_MissionTask_InteractWithActor_C_GetObjectiveDescription_Params params;
	params.SavedTaskData = SavedTaskData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MissionTask_InteractWithActor.BP_MissionTask_InteractWithActor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_MissionTask_InteractWithActor_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionTask_InteractWithActor.BP_MissionTask_InteractWithActor_C.ReceiveBeginPlay");

	ABP_MissionTask_InteractWithActor_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionTask_InteractWithActor.BP_MissionTask_InteractWithActor_C.OnEnteredStage
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           NewStage                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MissionTask_InteractWithActor_C::OnEnteredStage(int* NewStage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionTask_InteractWithActor.BP_MissionTask_InteractWithActor_C.OnEnteredStage");

	ABP_MissionTask_InteractWithActor_C_OnEnteredStage_Params params;
	params.NewStage = NewStage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionTask_InteractWithActor.BP_MissionTask_InteractWithActor_C.InteractedWithTarget
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInteractComponent**     InteractComponent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MissionTask_InteractWithActor_C::InteractedWithTarget(class UInteractComponent** InteractComponent, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionTask_InteractWithActor.BP_MissionTask_InteractWithActor_C.InteractedWithTarget");

	ABP_MissionTask_InteractWithActor_C_InteractedWithTarget_Params params;
	params.InteractComponent = InteractComponent;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionTask_InteractWithActor.BP_MissionTask_InteractWithActor_C.HoldStarted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInteractComponent**     InteractComponent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MissionTask_InteractWithActor_C::HoldStarted(class UInteractComponent** InteractComponent, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionTask_InteractWithActor.BP_MissionTask_InteractWithActor_C.HoldStarted");

	ABP_MissionTask_InteractWithActor_C_HoldStarted_Params params;
	params.InteractComponent = InteractComponent;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionTask_InteractWithActor.BP_MissionTask_InteractWithActor_C.HoldAborted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInteractComponent**     InteractComponent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MissionTask_InteractWithActor_C::HoldAborted(class UInteractComponent** InteractComponent, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionTask_InteractWithActor.BP_MissionTask_InteractWithActor_C.HoldAborted");

	ABP_MissionTask_InteractWithActor_C_HoldAborted_Params params;
	params.InteractComponent = InteractComponent;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionTask_InteractWithActor.BP_MissionTask_InteractWithActor_C.ExecuteUbergraph_BP_MissionTask_InteractWithActor
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MissionTask_InteractWithActor_C::ExecuteUbergraph_BP_MissionTask_InteractWithActor(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionTask_InteractWithActor.BP_MissionTask_InteractWithActor_C.ExecuteUbergraph_BP_MissionTask_InteractWithActor");

	ABP_MissionTask_InteractWithActor_C_ExecuteUbergraph_BP_MissionTask_InteractWithActor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionTask_InteractWithActor.BP_MissionTask_InteractWithActor_C.OnInteractWithTaskTarget__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Progress                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MissionTask_InteractWithActor_C::OnInteractWithTaskTarget__DelegateSignature(int* Progress, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionTask_InteractWithActor.BP_MissionTask_InteractWithActor_C.OnInteractWithTaskTarget__DelegateSignature");

	ABP_MissionTask_InteractWithActor_C_OnInteractWithTaskTarget__DelegateSignature_Params params;
	params.Progress = Progress;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

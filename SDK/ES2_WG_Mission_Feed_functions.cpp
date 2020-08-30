// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_Mission_Feed_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WG_Mission_Feed.WG_Mission_Feed_C.ShouldShowTask
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FHUDTaskData*           TaskData                       (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWG_Mission_Feed_C::ShouldShowTask(struct FHUDTaskData* TaskData)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Mission_Feed.WG_Mission_Feed_C.ShouldShowTask");

	UWG_Mission_Feed_C_ShouldShowTask_Params params;
	params.TaskData = TaskData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_Mission_Feed.WG_Mission_Feed_C.EnqueueUpdate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHUDTaskData*           TaskData                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UWG_Mission_Feed_C::EnqueueUpdate(struct FHUDTaskData* TaskData)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Mission_Feed.WG_Mission_Feed_C.EnqueueUpdate");

	UWG_Mission_Feed_C_EnqueueUpdate_Params params;
	params.TaskData = TaskData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Mission_Feed.WG_Mission_Feed_C.MissionWidgetExpired
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_Mission_Feed_Entry_C** Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_Mission_Feed_C::MissionWidgetExpired(class UWG_Mission_Feed_Entry_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Mission_Feed.WG_Mission_Feed_C.MissionWidgetExpired");

	UWG_Mission_Feed_C_MissionWidgetExpired_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Mission_Feed.WG_Mission_Feed_C.RemoveMission
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  RemoveMissionID                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Mission_Feed_C::RemoveMission(struct FName* RemoveMissionID)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Mission_Feed.WG_Mission_Feed_C.RemoveMission");

	UWG_Mission_Feed_C_RemoveMission_Params params;
	params.RemoveMissionID = RemoveMissionID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Mission_Feed.WG_Mission_Feed_C.AddNewPermanentObjective
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_MissionObjective_Line_C** Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_Mission_Feed_C::AddNewPermanentObjective(class UWG_MissionObjective_Line_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Mission_Feed.WG_Mission_Feed_C.AddNewPermanentObjective");

	UWG_Mission_Feed_C_AddNewPermanentObjective_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Mission_Feed.WG_Mission_Feed_C.RemovePermanentObjective
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_MissionObjective_Line_C** Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_Mission_Feed_C::RemovePermanentObjective(class UWG_MissionObjective_Line_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Mission_Feed.WG_Mission_Feed_C.RemovePermanentObjective");

	UWG_Mission_Feed_C_RemovePermanentObjective_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Mission_Feed.WG_Mission_Feed_C.ExecuteUbergraph_WG_Mission_Feed
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Mission_Feed_C::ExecuteUbergraph_WG_Mission_Feed(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Mission_Feed.WG_Mission_Feed_C.ExecuteUbergraph_WG_Mission_Feed");

	UWG_Mission_Feed_C_ExecuteUbergraph_WG_Mission_Feed_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

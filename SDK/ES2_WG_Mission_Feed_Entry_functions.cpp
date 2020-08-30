// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_Mission_Feed_Entry_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WG_Mission_Feed_Entry.WG_Mission_Feed_Entry_C.AreAnyStateChangesDisplayed
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWG_Mission_Feed_Entry_C::AreAnyStateChangesDisplayed()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Mission_Feed_Entry.WG_Mission_Feed_Entry_C.AreAnyStateChangesDisplayed");

	UWG_Mission_Feed_Entry_C_AreAnyStateChangesDisplayed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_Mission_Feed_Entry.WG_Mission_Feed_Entry_C.AreAnyNonPermanentObjectivesDisplayed
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWG_Mission_Feed_Entry_C::AreAnyNonPermanentObjectivesDisplayed()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Mission_Feed_Entry.WG_Mission_Feed_Entry_C.AreAnyNonPermanentObjectivesDisplayed");

	UWG_Mission_Feed_Entry_C_AreAnyNonPermanentObjectivesDisplayed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_Mission_Feed_Entry.WG_Mission_Feed_Entry_C.EnqueueUpdate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHUDTaskData*           TaskData                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UWG_Mission_Feed_Entry_C::EnqueueUpdate(struct FHUDTaskData* TaskData)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Mission_Feed_Entry.WG_Mission_Feed_Entry_C.EnqueueUpdate");

	UWG_Mission_Feed_Entry_C_EnqueueUpdate_Params params;
	params.TaskData = TaskData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Mission_Feed_Entry.WG_Mission_Feed_Entry_C.UpdateOrAddObjectiveLine
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHUDTaskData*           TaskData                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UWG_Mission_Feed_Entry_C::UpdateOrAddObjectiveLine(struct FHUDTaskData* TaskData)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Mission_Feed_Entry.WG_Mission_Feed_Entry_C.UpdateOrAddObjectiveLine");

	UWG_Mission_Feed_Entry_C_UpdateOrAddObjectiveLine_Params params;
	params.TaskData = TaskData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Mission_Feed_Entry.WG_Mission_Feed_Entry_C.ObjectiveLineExpired
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_MissionObjective_Line_C** Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_Mission_Feed_Entry_C::ObjectiveLineExpired(class UWG_MissionObjective_Line_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Mission_Feed_Entry.WG_Mission_Feed_Entry_C.ObjectiveLineExpired");

	UWG_Mission_Feed_Entry_C_ObjectiveLineExpired_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Mission_Feed_Entry.WG_Mission_Feed_Entry_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Mission_Feed_Entry_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Mission_Feed_Entry.WG_Mission_Feed_Entry_C.Tick");

	UWG_Mission_Feed_Entry_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Mission_Feed_Entry.WG_Mission_Feed_Entry_C.AddNewMessage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHUDTaskData*           TaskData                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UWG_Mission_Feed_Entry_C::AddNewMessage(struct FHUDTaskData* TaskData)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Mission_Feed_Entry.WG_Mission_Feed_Entry_C.AddNewMessage");

	UWG_Mission_Feed_Entry_C_AddNewMessage_Params params;
	params.TaskData = TaskData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Mission_Feed_Entry.WG_Mission_Feed_Entry_C.ChangeMissionStatusLine
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHUDTaskData*           TaskData                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UWG_Mission_Feed_Entry_C::ChangeMissionStatusLine(struct FHUDTaskData* TaskData)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Mission_Feed_Entry.WG_Mission_Feed_Entry_C.ChangeMissionStatusLine");

	UWG_Mission_Feed_Entry_C_ChangeMissionStatusLine_Params params;
	params.TaskData = TaskData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Mission_Feed_Entry.WG_Mission_Feed_Entry_C.StatusLineExpired
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_Mission_State_Line_C** Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_Mission_Feed_Entry_C::StatusLineExpired(class UWG_Mission_State_Line_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Mission_Feed_Entry.WG_Mission_Feed_Entry_C.StatusLineExpired");

	UWG_Mission_Feed_Entry_C_StatusLineExpired_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Mission_Feed_Entry.WG_Mission_Feed_Entry_C.FadeOutFinished
// (BlueprintCallable, BlueprintEvent)

void UWG_Mission_Feed_Entry_C::FadeOutFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Mission_Feed_Entry.WG_Mission_Feed_Entry_C.FadeOutFinished");

	UWG_Mission_Feed_Entry_C_FadeOutFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Mission_Feed_Entry.WG_Mission_Feed_Entry_C.RemoveMission
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  RemoveMissionID                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Mission_Feed_Entry_C::RemoveMission(struct FName* RemoveMissionID)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Mission_Feed_Entry.WG_Mission_Feed_Entry_C.RemoveMission");

	UWG_Mission_Feed_Entry_C_RemoveMission_Params params;
	params.RemoveMissionID = RemoveMissionID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Mission_Feed_Entry.WG_Mission_Feed_Entry_C.PlayFadeInIfRequired
// (BlueprintCallable, BlueprintEvent)

void UWG_Mission_Feed_Entry_C::PlayFadeInIfRequired()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Mission_Feed_Entry.WG_Mission_Feed_Entry_C.PlayFadeInIfRequired");

	UWG_Mission_Feed_Entry_C_PlayFadeInIfRequired_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Mission_Feed_Entry.WG_Mission_Feed_Entry_C.ExecuteUbergraph_WG_Mission_Feed_Entry
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Mission_Feed_Entry_C::ExecuteUbergraph_WG_Mission_Feed_Entry(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Mission_Feed_Entry.WG_Mission_Feed_Entry_C.ExecuteUbergraph_WG_Mission_Feed_Entry");

	UWG_Mission_Feed_Entry_C_ExecuteUbergraph_WG_Mission_Feed_Entry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Mission_Feed_Entry.WG_Mission_Feed_Entry_C.OnRemovePermanentObjective__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_MissionObjective_Line_C** Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_Mission_Feed_Entry_C::OnRemovePermanentObjective__DelegateSignature(class UWG_MissionObjective_Line_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Mission_Feed_Entry.WG_Mission_Feed_Entry_C.OnRemovePermanentObjective__DelegateSignature");

	UWG_Mission_Feed_Entry_C_OnRemovePermanentObjective__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Mission_Feed_Entry.WG_Mission_Feed_Entry_C.OnAddNewPermanentObjective__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_MissionObjective_Line_C** Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_Mission_Feed_Entry_C::OnAddNewPermanentObjective__DelegateSignature(class UWG_MissionObjective_Line_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Mission_Feed_Entry.WG_Mission_Feed_Entry_C.OnAddNewPermanentObjective__DelegateSignature");

	UWG_Mission_Feed_Entry_C_OnAddNewPermanentObjective__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Mission_Feed_Entry.WG_Mission_Feed_Entry_C.OnHideWidget__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_Mission_Feed_Entry_C** Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_Mission_Feed_Entry_C::OnHideWidget__DelegateSignature(class UWG_Mission_Feed_Entry_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Mission_Feed_Entry.WG_Mission_Feed_Entry_C.OnHideWidget__DelegateSignature");

	UWG_Mission_Feed_Entry_C_OnHideWidget__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

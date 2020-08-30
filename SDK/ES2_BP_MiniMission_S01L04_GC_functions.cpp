// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_MiniMission_S01L04_GC_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_MiniMission_S01L04_GC.BP_MiniMission_S01L04_GC_C.RepairedLeak
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniMission_S01L04_GC_C::RepairedLeak()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniMission_S01L04_GC.BP_MiniMission_S01L04_GC_C.RepairedLeak");

	ABP_MiniMission_S01L04_GC_C_RepairedLeak_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniMission_S01L04_GC.BP_MiniMission_S01L04_GC_C.DestroyedMadcap
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniMission_S01L04_GC_C::DestroyedMadcap()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniMission_S01L04_GC.BP_MiniMission_S01L04_GC_C.DestroyedMadcap");

	ABP_MiniMission_S01L04_GC_C_DestroyedMadcap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniMission_S01L04_GC.BP_MiniMission_S01L04_GC_C.KilledLurkers
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniMission_S01L04_GC_C::KilledLurkers()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniMission_S01L04_GC.BP_MiniMission_S01L04_GC_C.KilledLurkers");

	ABP_MiniMission_S01L04_GC_C_KilledLurkers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniMission_S01L04_GC.BP_MiniMission_S01L04_GC_C.OnEnteredStage
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           NewStage                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniMission_S01L04_GC_C::OnEnteredStage(int* NewStage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniMission_S01L04_GC.BP_MiniMission_S01L04_GC_C.OnEnteredStage");

	ABP_MiniMission_S01L04_GC_C_OnEnteredStage_Params params;
	params.NewStage = NewStage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniMission_S01L04_GC.BP_MiniMission_S01L04_GC_C.OnLurkerGroupWoken_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           LurkerGroupIndex               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniMission_S01L04_GC_C::OnLurkerGroupWoken_Event(int* LurkerGroupIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniMission_S01L04_GC.BP_MiniMission_S01L04_GC_C.OnLurkerGroupWoken_Event");

	ABP_MiniMission_S01L04_GC_C_OnLurkerGroupWoken_Event_Params params;
	params.LurkerGroupIndex = LurkerGroupIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniMission_S01L04_GC.BP_MiniMission_S01L04_GC_C.OnTaskProgressed_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Progress                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniMission_S01L04_GC_C::OnTaskProgressed_Event(int* Progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniMission_S01L04_GC.BP_MiniMission_S01L04_GC_C.OnTaskProgressed_Event");

	ABP_MiniMission_S01L04_GC_C_OnTaskProgressed_Event_Params params;
	params.Progress = Progress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniMission_S01L04_GC.BP_MiniMission_S01L04_GC_C.RepairedLeaks
// (BlueprintCallable, BlueprintEvent)

void ABP_MiniMission_S01L04_GC_C::RepairedLeaks()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniMission_S01L04_GC.BP_MiniMission_S01L04_GC_C.RepairedLeaks");

	ABP_MiniMission_S01L04_GC_C_RepairedLeaks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniMission_S01L04_GC.BP_MiniMission_S01L04_GC_C.HeardDialog1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  DialogID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsMenuDialog                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniMission_S01L04_GC_C::HeardDialog1(struct FName* DialogID, bool* bIsMenuDialog)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniMission_S01L04_GC.BP_MiniMission_S01L04_GC_C.HeardDialog1");

	ABP_MiniMission_S01L04_GC_C_HeardDialog1_Params params;
	params.DialogID = DialogID;
	params.bIsMenuDialog = bIsMenuDialog;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniMission_S01L04_GC.BP_MiniMission_S01L04_GC_C.HeardDialog3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  DialogID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsMenuDialog                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniMission_S01L04_GC_C::HeardDialog3(struct FName* DialogID, bool* bIsMenuDialog)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniMission_S01L04_GC.BP_MiniMission_S01L04_GC_C.HeardDialog3");

	ABP_MiniMission_S01L04_GC_C_HeardDialog3_Params params;
	params.DialogID = DialogID;
	params.bIsMenuDialog = bIsMenuDialog;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniMission_S01L04_GC.BP_MiniMission_S01L04_GC_C.HeardDialog8
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  DialogID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsMenuDialog                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniMission_S01L04_GC_C::HeardDialog8(struct FName* DialogID, bool* bIsMenuDialog)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniMission_S01L04_GC.BP_MiniMission_S01L04_GC_C.HeardDialog8");

	ABP_MiniMission_S01L04_GC_C_HeardDialog8_Params params;
	params.DialogID = DialogID;
	params.bIsMenuDialog = bIsMenuDialog;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniMission_S01L04_GC.BP_MiniMission_S01L04_GC_C.HeardDialog9
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  DialogID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsMenuDialog                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniMission_S01L04_GC_C::HeardDialog9(struct FName* DialogID, bool* bIsMenuDialog)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniMission_S01L04_GC.BP_MiniMission_S01L04_GC_C.HeardDialog9");

	ABP_MiniMission_S01L04_GC_C_HeardDialog9_Params params;
	params.DialogID = DialogID;
	params.bIsMenuDialog = bIsMenuDialog;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniMission_S01L04_GC.BP_MiniMission_S01L04_GC_C.OnTaskProgressed_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Progress                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniMission_S01L04_GC_C::OnTaskProgressed_Event_1(int* Progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniMission_S01L04_GC.BP_MiniMission_S01L04_GC_C.OnTaskProgressed_Event_1");

	ABP_MiniMission_S01L04_GC_C_OnTaskProgressed_Event_1_Params params;
	params.Progress = Progress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiniMission_S01L04_GC.BP_MiniMission_S01L04_GC_C.ExecuteUbergraph_BP_MiniMission_S01L04_GC
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MiniMission_S01L04_GC_C::ExecuteUbergraph_BP_MiniMission_S01L04_GC(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiniMission_S01L04_GC.BP_MiniMission_S01L04_GC_C.ExecuteUbergraph_BP_MiniMission_S01L04_GC");

	ABP_MiniMission_S01L04_GC_C_ExecuteUbergraph_BP_MiniMission_S01L04_GC_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

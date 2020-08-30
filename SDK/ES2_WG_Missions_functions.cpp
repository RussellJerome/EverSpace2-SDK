// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_Missions_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WG_Missions.WG_Missions_C.OnKeyUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWG_Missions_C::OnKeyUp(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Missions.WG_Missions_C.OnKeyUp");

	UWG_Missions_C_OnKeyUp_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_Missions.WG_Missions_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWG_Missions_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Missions.WG_Missions_C.OnKeyDown");

	UWG_Missions_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_Missions.WG_Missions_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWG_Missions_C::OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Missions.WG_Missions_C.OnFocusReceived");

	UWG_Missions_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_Missions.WG_Missions_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Missions_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Missions.WG_Missions_C.PreConstruct");

	UWG_Missions_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Missions.WG_Missions_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWG_Missions_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Missions.WG_Missions_C.Construct");

	UWG_Missions_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Missions.WG_Missions_C.SelectedMissionButton
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_MissionButton_C**    MissionButton                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_Missions_C::SelectedMissionButton(class UWG_MissionButton_C** MissionButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Missions.WG_Missions_C.SelectedMissionButton");

	UWG_Missions_C_SelectedMissionButton_Params params;
	params.MissionButton = MissionButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Missions.WG_Missions_C.PressedBack
// (BlueprintCallable, BlueprintEvent)

void UWG_Missions_C::PressedBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Missions.WG_Missions_C.PressedBack");

	UWG_Missions_C_PressedBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Missions.WG_Missions_C.PressedTrackMission
// (BlueprintCallable, BlueprintEvent)

void UWG_Missions_C::PressedTrackMission()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Missions.WG_Missions_C.PressedTrackMission");

	UWG_Missions_C_PressedTrackMission_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Missions.WG_Missions_C.RefreshTrackedMission
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_MissionButton_C**    MissionButton                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_Missions_C::RefreshTrackedMission(class UWG_MissionButton_C** MissionButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Missions.WG_Missions_C.RefreshTrackedMission");

	UWG_Missions_C_RefreshTrackedMission_Params params;
	params.MissionButton = MissionButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Missions.WG_Missions_C.RefreshTrackedMissions
// (BlueprintCallable, BlueprintEvent)

void UWG_Missions_C::RefreshTrackedMissions()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Missions.WG_Missions_C.RefreshTrackedMissions");

	UWG_Missions_C_RefreshTrackedMissions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Missions.WG_Missions_C.CustomEvent
// (BlueprintCallable, BlueprintEvent)

void UWG_Missions_C::CustomEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Missions.WG_Missions_C.CustomEvent");

	UWG_Missions_C_CustomEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Missions.WG_Missions_C.PressedPauseMenu
// (BlueprintCallable, BlueprintEvent)

void UWG_Missions_C::PressedPauseMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Missions.WG_Missions_C.PressedPauseMenu");

	UWG_Missions_C_PressedPauseMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Missions.WG_Missions_C.ExecuteUbergraph_WG_Missions
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Missions_C::ExecuteUbergraph_WG_Missions(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Missions.WG_Missions_C.ExecuteUbergraph_WG_Missions");

	UWG_Missions_C_ExecuteUbergraph_WG_Missions_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

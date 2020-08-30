// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_Ingame_HUD_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WG_Ingame_HUD.WG_Ingame_HUD_C.OnPaint
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FPaintContext           Context                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWG_Ingame_HUD_C::OnPaint(struct FPaintContext* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Ingame_HUD.WG_Ingame_HUD_C.OnPaint");

	UWG_Ingame_HUD_C_OnPaint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;
}


// Function WG_Ingame_HUD.WG_Ingame_HUD_C.Get_ChooseDeviceIcon_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UWG_Ingame_HUD_C::Get_ChooseDeviceIcon_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Ingame_HUD.WG_Ingame_HUD_C.Get_ChooseDeviceIcon_Visibility_1");

	UWG_Ingame_HUD_C_Get_ChooseDeviceIcon_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_Ingame_HUD.WG_Ingame_HUD_C.Get_UseDeviceActionButton_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UWG_Ingame_HUD_C::Get_UseDeviceActionButton_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Ingame_HUD.WG_Ingame_HUD_C.Get_UseDeviceActionButton_Visibility_1");

	UWG_Ingame_HUD_C_Get_UseDeviceActionButton_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_Ingame_HUD.WG_Ingame_HUD_C.Get_ArmorBar_Percent_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UWG_Ingame_HUD_C::Get_ArmorBar_Percent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Ingame_HUD.WG_Ingame_HUD_C.Get_ArmorBar_Percent_1");

	UWG_Ingame_HUD_C_Get_ArmorBar_Percent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_Ingame_HUD.WG_Ingame_HUD_C.Get_TxtDebugSpeed_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWG_Ingame_HUD_C::Get_TxtDebugSpeed_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Ingame_HUD.WG_Ingame_HUD_C.Get_TxtDebugSpeed_Text_1");

	UWG_Ingame_HUD_C_Get_TxtDebugSpeed_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_Ingame_HUD.WG_Ingame_HUD_C.Get_TxtDebugSpeed_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UWG_Ingame_HUD_C::Get_TxtDebugSpeed_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Ingame_HUD.WG_Ingame_HUD_C.Get_TxtDebugSpeed_Visibility_1");

	UWG_Ingame_HUD_C_Get_TxtDebugSpeed_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_Ingame_HUD.WG_Ingame_HUD_C.HideWarning
// (Public, BlueprintCallable, BlueprintEvent)

void UWG_Ingame_HUD_C::HideWarning()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Ingame_HUD.WG_Ingame_HUD_C.HideWarning");

	UWG_Ingame_HUD_C_HideWarning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Ingame_HUD.WG_Ingame_HUD_C.ShowWarning
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  WarningText                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UWG_Ingame_HUD_C::ShowWarning(struct FText* WarningText)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Ingame_HUD.WG_Ingame_HUD_C.ShowWarning");

	UWG_Ingame_HUD_C_ShowWarning_Params params;
	params.WarningText = WarningText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Ingame_HUD.WG_Ingame_HUD_C.Get_Text_Health_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWG_Ingame_HUD_C::Get_Text_Health_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Ingame_HUD.WG_Ingame_HUD_C.Get_Text_Health_Text_1");

	UWG_Ingame_HUD_C_Get_Text_Health_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_Ingame_HUD.WG_Ingame_HUD_C.Get_Text_Energy_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWG_Ingame_HUD_C::Get_Text_Energy_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Ingame_HUD.WG_Ingame_HUD_C.Get_Text_Energy_Text_1");

	UWG_Ingame_HUD_C_Get_Text_Energy_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_Ingame_HUD.WG_Ingame_HUD_C.Get_Text_Energy_ColorAndOpacity_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateColor UWG_Ingame_HUD_C::Get_Text_Energy_ColorAndOpacity_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Ingame_HUD.WG_Ingame_HUD_C.Get_Text_Energy_ColorAndOpacity_1");

	UWG_Ingame_HUD_C_Get_Text_Energy_ColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_Ingame_HUD.WG_Ingame_HUD_C.Get_TextShield_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWG_Ingame_HUD_C::Get_TextShield_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Ingame_HUD.WG_Ingame_HUD_C.Get_TextShield_Text_1");

	UWG_Ingame_HUD_C_Get_TextShield_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_Ingame_HUD.WG_Ingame_HUD_C.Get_EnergyBar_Percent_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UWG_Ingame_HUD_C::Get_EnergyBar_Percent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Ingame_HUD.WG_Ingame_HUD_C.Get_EnergyBar_Percent_1");

	UWG_Ingame_HUD_C_Get_EnergyBar_Percent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_Ingame_HUD.WG_Ingame_HUD_C.Get_HealthBar_Percent_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UWG_Ingame_HUD_C::Get_HealthBar_Percent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Ingame_HUD.WG_Ingame_HUD_C.Get_HealthBar_Percent_1");

	UWG_Ingame_HUD_C_Get_HealthBar_Percent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_Ingame_HUD.WG_Ingame_HUD_C.Get_ShieldBar_Percent_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UWG_Ingame_HUD_C::Get_ShieldBar_Percent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Ingame_HUD.WG_Ingame_HUD_C.Get_ShieldBar_Percent_1");

	UWG_Ingame_HUD_C_Get_ShieldBar_Percent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_Ingame_HUD.WG_Ingame_HUD_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWG_Ingame_HUD_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Ingame_HUD.WG_Ingame_HUD_C.Construct");

	UWG_Ingame_HUD_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Ingame_HUD.WG_Ingame_HUD_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Ingame_HUD_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Ingame_HUD.WG_Ingame_HUD_C.Tick");

	UWG_Ingame_HUD_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Ingame_HUD.WG_Ingame_HUD_C.AddLogMessage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHUDMessage*            MessageInfo                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UWG_Ingame_HUD_C::AddLogMessage(struct FHUDMessage* MessageInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Ingame_HUD.WG_Ingame_HUD_C.AddLogMessage");

	UWG_Ingame_HUD_C_AddLogMessage_Params params;
	params.MessageInfo = MessageInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Ingame_HUD.WG_Ingame_HUD_C.SetCrosshairTexture
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  WeaponCategory                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Ingame_HUD_C::SetCrosshairTexture(struct FName* WeaponCategory)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Ingame_HUD.WG_Ingame_HUD_C.SetCrosshairTexture");

	UWG_Ingame_HUD_C_SetCrosshairTexture_Params params;
	params.WeaponCategory = WeaponCategory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Ingame_HUD.WG_Ingame_HUD_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Ingame_HUD_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Ingame_HUD.WG_Ingame_HUD_C.PreConstruct");

	UWG_Ingame_HUD_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Ingame_HUD.WG_Ingame_HUD_C.HideAimAssist
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          ForHoverdTarget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Ingame_HUD_C::HideAimAssist(bool* ForHoverdTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Ingame_HUD.WG_Ingame_HUD_C.HideAimAssist");

	UWG_Ingame_HUD_C_HideAimAssist_Params params;
	params.ForHoverdTarget = ForHoverdTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Ingame_HUD.WG_Ingame_HUD_C.DrawAimAssist
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D*              ScreenPosition                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D*              TargetScreenPosition           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EMarkerRelation>*  Relation                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          ForHoveredTarget               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          NewLock                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Ingame_HUD_C::DrawAimAssist(struct FVector2D* ScreenPosition, struct FVector2D* TargetScreenPosition, TEnumAsByte<EMarkerRelation>* Relation, bool* ForHoveredTarget, bool* NewLock)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Ingame_HUD.WG_Ingame_HUD_C.DrawAimAssist");

	UWG_Ingame_HUD_C_DrawAimAssist_Params params;
	params.ScreenPosition = ScreenPosition;
	params.TargetScreenPosition = TargetScreenPosition;
	params.Relation = Relation;
	params.ForHoveredTarget = ForHoveredTarget;
	params.NewLock = NewLock;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Ingame_HUD.WG_Ingame_HUD_C.ShowHitIndicator
// (BlueprintCallable, BlueprintEvent)

void UWG_Ingame_HUD_C::ShowHitIndicator()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Ingame_HUD.WG_Ingame_HUD_C.ShowHitIndicator");

	UWG_Ingame_HUD_C_ShowHitIndicator_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Ingame_HUD.WG_Ingame_HUD_C.DebugShowMusicInfo
// (BlueprintCallable, BlueprintEvent)

void UWG_Ingame_HUD_C::DebugShowMusicInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Ingame_HUD.WG_Ingame_HUD_C.DebugShowMusicInfo");

	UWG_Ingame_HUD_C_DebugShowMusicInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Ingame_HUD.WG_Ingame_HUD_C.DebugHideMusicInfo
// (BlueprintCallable, BlueprintEvent)

void UWG_Ingame_HUD_C::DebugHideMusicInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Ingame_HUD.WG_Ingame_HUD_C.DebugHideMusicInfo");

	UWG_Ingame_HUD_C_DebugHideMusicInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Ingame_HUD.WG_Ingame_HUD_C.ReInit
// (BlueprintCallable, BlueprintEvent)

void UWG_Ingame_HUD_C::ReInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Ingame_HUD.WG_Ingame_HUD_C.ReInit");

	UWG_Ingame_HUD_C_ReInit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Ingame_HUD.WG_Ingame_HUD_C.SequenceFinished
// (BlueprintCallable, BlueprintEvent)

void UWG_Ingame_HUD_C::SequenceFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Ingame_HUD.WG_Ingame_HUD_C.SequenceFinished");

	UWG_Ingame_HUD_C_SequenceFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Ingame_HUD.WG_Ingame_HUD_C.SuppressorAdded
// (BlueprintCallable, BlueprintEvent)

void UWG_Ingame_HUD_C::SuppressorAdded()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Ingame_HUD.WG_Ingame_HUD_C.SuppressorAdded");

	UWG_Ingame_HUD_C_SuppressorAdded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Ingame_HUD.WG_Ingame_HUD_C.AllSuppressorsDestroyed
// (BlueprintCallable, BlueprintEvent)

void UWG_Ingame_HUD_C::AllSuppressorsDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Ingame_HUD.WG_Ingame_HUD_C.AllSuppressorsDestroyed");

	UWG_Ingame_HUD_C_AllSuppressorsDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Ingame_HUD.WG_Ingame_HUD_C.SequenceStarted
// (BlueprintCallable, BlueprintEvent)

void UWG_Ingame_HUD_C::SequenceStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Ingame_HUD.WG_Ingame_HUD_C.SequenceStarted");

	UWG_Ingame_HUD_C_SequenceStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Ingame_HUD.WG_Ingame_HUD_C.ChangeHUDVisibility
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Show                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Ingame_HUD_C::ChangeHUDVisibility(bool* Show)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Ingame_HUD.WG_Ingame_HUD_C.ChangeHUDVisibility");

	UWG_Ingame_HUD_C_ChangeHUDVisibility_Params params;
	params.Show = Show;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Ingame_HUD.WG_Ingame_HUD_C.AddHitpointsToHUDElements
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_Ingame_HUD_C::AddHitpointsToHUDElements(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Ingame_HUD.WG_Ingame_HUD_C.AddHitpointsToHUDElements");

	UWG_Ingame_HUD_C_AddHitpointsToHUDElements_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Ingame_HUD.WG_Ingame_HUD_C.ApplyGamepadOrMouseLayout
// (BlueprintCallable, BlueprintEvent)

void UWG_Ingame_HUD_C::ApplyGamepadOrMouseLayout()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Ingame_HUD.WG_Ingame_HUD_C.ApplyGamepadOrMouseLayout");

	UWG_Ingame_HUD_C_ApplyGamepadOrMouseLayout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Ingame_HUD.WG_Ingame_HUD_C.WeaponsReadyChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Ready                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Ingame_HUD_C::WeaponsReadyChanged(bool* Ready)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Ingame_HUD.WG_Ingame_HUD_C.WeaponsReadyChanged");

	UWG_Ingame_HUD_C_WeaponsReadyChanged_Params params;
	params.Ready = Ready;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Ingame_HUD.WG_Ingame_HUD_C.ToggleTestLayerVisibility
// (BlueprintCallable, BlueprintEvent)

void UWG_Ingame_HUD_C::ToggleTestLayerVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Ingame_HUD.WG_Ingame_HUD_C.ToggleTestLayerVisibility");

	UWG_Ingame_HUD_C_ToggleTestLayerVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Ingame_HUD.WG_Ingame_HUD_C.OnPauseModeChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bPaused                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Ingame_HUD_C::OnPauseModeChanged(bool* bPaused)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Ingame_HUD.WG_Ingame_HUD_C.OnPauseModeChanged");

	UWG_Ingame_HUD_C_OnPauseModeChanged_Params params;
	params.bPaused = bPaused;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Ingame_HUD.WG_Ingame_HUD_C.PlayerUsedDevice
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ADeviceBase**            Device                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           SlotIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Ingame_HUD_C::PlayerUsedDevice(class ADeviceBase** Device, int* SlotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Ingame_HUD.WG_Ingame_HUD_C.PlayerUsedDevice");

	UWG_Ingame_HUD_C_PlayerUsedDevice_Params params;
	params.Device = Device;
	params.SlotIndex = SlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Ingame_HUD.WG_Ingame_HUD_C.EnterOrExitDeviceSelection
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bEnter                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Ingame_HUD_C::EnterOrExitDeviceSelection(bool* bEnter)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Ingame_HUD.WG_Ingame_HUD_C.EnterOrExitDeviceSelection");

	UWG_Ingame_HUD_C_EnterOrExitDeviceSelection_Params params;
	params.bEnter = bEnter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Ingame_HUD.WG_Ingame_HUD_C.EnterOrExitConsumableSelection
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bEnter                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Ingame_HUD_C::EnterOrExitConsumableSelection(bool* bEnter)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Ingame_HUD.WG_Ingame_HUD_C.EnterOrExitConsumableSelection");

	UWG_Ingame_HUD_C_EnterOrExitConsumableSelection_Params params;
	params.bEnter = bEnter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Ingame_HUD.WG_Ingame_HUD_C.GamepadModeChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bNewGamepadMode                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Ingame_HUD_C::GamepadModeChanged(bool* bNewGamepadMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Ingame_HUD.WG_Ingame_HUD_C.GamepadModeChanged");

	UWG_Ingame_HUD_C_GamepadModeChanged_Params params;
	params.bNewGamepadMode = bNewGamepadMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Ingame_HUD.WG_Ingame_HUD_C.PlayerCanceledDeviceUsage
// (BlueprintCallable, BlueprintEvent)

void UWG_Ingame_HUD_C::PlayerCanceledDeviceUsage()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Ingame_HUD.WG_Ingame_HUD_C.PlayerCanceledDeviceUsage");

	UWG_Ingame_HUD_C_PlayerCanceledDeviceUsage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Ingame_HUD.WG_Ingame_HUD_C.PlayerCanceledConsumableUsage
// (BlueprintCallable, BlueprintEvent)

void UWG_Ingame_HUD_C::PlayerCanceledConsumableUsage()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Ingame_HUD.WG_Ingame_HUD_C.PlayerCanceledConsumableUsage");

	UWG_Ingame_HUD_C_PlayerCanceledConsumableUsage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Ingame_HUD.WG_Ingame_HUD_C.ShowDeviceWheel
// (BlueprintCallable, BlueprintEvent)

void UWG_Ingame_HUD_C::ShowDeviceWheel()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Ingame_HUD.WG_Ingame_HUD_C.ShowDeviceWheel");

	UWG_Ingame_HUD_C_ShowDeviceWheel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Ingame_HUD.WG_Ingame_HUD_C.CruiseModeCanBeUsed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bCanBeUsed                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Ingame_HUD_C::CruiseModeCanBeUsed(bool* bCanBeUsed)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Ingame_HUD.WG_Ingame_HUD_C.CruiseModeCanBeUsed");

	UWG_Ingame_HUD_C_CruiseModeCanBeUsed_Params params;
	params.bCanBeUsed = bCanBeUsed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Ingame_HUD.WG_Ingame_HUD_C.ShowLevelUp
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           NewLevel                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Ingame_HUD_C::ShowLevelUp(int* NewLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Ingame_HUD.WG_Ingame_HUD_C.ShowLevelUp");

	UWG_Ingame_HUD_C_ShowLevelUp_Params params;
	params.NewLevel = NewLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Ingame_HUD.WG_Ingame_HUD_C.CustomEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bCanBeUsed                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Ingame_HUD_C::CustomEvent(bool* bCanBeUsed)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Ingame_HUD.WG_Ingame_HUD_C.CustomEvent");

	UWG_Ingame_HUD_C_CustomEvent_Params params;
	params.bCanBeUsed = bCanBeUsed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Ingame_HUD.WG_Ingame_HUD_C.DrawLockedTargetArrow
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D*              ScreenPos                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         RenderAngle                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EMarkerRelation>*  Relation                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Ingame_HUD_C::DrawLockedTargetArrow(struct FVector2D* ScreenPos, float* RenderAngle, TEnumAsByte<EMarkerRelation>* Relation)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Ingame_HUD.WG_Ingame_HUD_C.DrawLockedTargetArrow");

	UWG_Ingame_HUD_C_DrawLockedTargetArrow_Params params;
	params.ScreenPos = ScreenPos;
	params.RenderAngle = RenderAngle;
	params.Relation = Relation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Ingame_HUD.WG_Ingame_HUD_C.HideLockedTargetArrow
// (BlueprintCallable, BlueprintEvent)

void UWG_Ingame_HUD_C::HideLockedTargetArrow()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Ingame_HUD.WG_Ingame_HUD_C.HideLockedTargetArrow");

	UWG_Ingame_HUD_C_HideLockedTargetArrow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Ingame_HUD.WG_Ingame_HUD_C.OnCruiseModeChargeStart
// (BlueprintCallable, BlueprintEvent)

void UWG_Ingame_HUD_C::OnCruiseModeChargeStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Ingame_HUD.WG_Ingame_HUD_C.OnCruiseModeChargeStart");

	UWG_Ingame_HUD_C_OnCruiseModeChargeStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Ingame_HUD.WG_Ingame_HUD_C.OnCruiseModeCanBeUsedChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bCanBeUsed                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Ingame_HUD_C::OnCruiseModeCanBeUsedChange(bool* bCanBeUsed)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Ingame_HUD.WG_Ingame_HUD_C.OnCruiseModeCanBeUsedChange");

	UWG_Ingame_HUD_C_OnCruiseModeCanBeUsedChange_Params params;
	params.bCanBeUsed = bCanBeUsed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Ingame_HUD.WG_Ingame_HUD_C.OnCruiseModeReady
// (BlueprintCallable, BlueprintEvent)

void UWG_Ingame_HUD_C::OnCruiseModeReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Ingame_HUD.WG_Ingame_HUD_C.OnCruiseModeReady");

	UWG_Ingame_HUD_C_OnCruiseModeReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Ingame_HUD.WG_Ingame_HUD_C.OnCruiseModeChargeEnd
// (BlueprintCallable, BlueprintEvent)

void UWG_Ingame_HUD_C::OnCruiseModeChargeEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Ingame_HUD.WG_Ingame_HUD_C.OnCruiseModeChargeEnd");

	UWG_Ingame_HUD_C_OnCruiseModeChargeEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Ingame_HUD.WG_Ingame_HUD_C.OnJumpChargeStarted
// (BlueprintCallable, BlueprintEvent)

void UWG_Ingame_HUD_C::OnJumpChargeStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Ingame_HUD.WG_Ingame_HUD_C.OnJumpChargeStarted");

	UWG_Ingame_HUD_C_OnJumpChargeStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Ingame_HUD.WG_Ingame_HUD_C.OnJumpChargeAborted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EJumpAbortType>*   AbortedType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Ingame_HUD_C::OnJumpChargeAborted(TEnumAsByte<EJumpAbortType>* AbortedType)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Ingame_HUD.WG_Ingame_HUD_C.OnJumpChargeAborted");

	UWG_Ingame_HUD_C_OnJumpChargeAborted_Params params;
	params.AbortedType = AbortedType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Ingame_HUD.WG_Ingame_HUD_C.OnJumpDriveCanBeUsedChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bCanBeUsed                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Ingame_HUD_C::OnJumpDriveCanBeUsedChange(bool* bCanBeUsed)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Ingame_HUD.WG_Ingame_HUD_C.OnJumpDriveCanBeUsedChange");

	UWG_Ingame_HUD_C_OnJumpDriveCanBeUsedChange_Params params;
	params.bCanBeUsed = bCanBeUsed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Ingame_HUD.WG_Ingame_HUD_C.PlayerStartedUsingConsumable
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UItem**                  ConsumableItem                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AConsumableBase**        DefaultConsumable              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           SlotIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Ingame_HUD_C::PlayerStartedUsingConsumable(class UItem** ConsumableItem, class AConsumableBase** DefaultConsumable, int* SlotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Ingame_HUD.WG_Ingame_HUD_C.PlayerStartedUsingConsumable");

	UWG_Ingame_HUD_C_PlayerStartedUsingConsumable_Params params;
	params.ConsumableItem = ConsumableItem;
	params.DefaultConsumable = DefaultConsumable;
	params.SlotIndex = SlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Ingame_HUD.WG_Ingame_HUD_C.ExecuteUbergraph_WG_Ingame_HUD
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Ingame_HUD_C::ExecuteUbergraph_WG_Ingame_HUD(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Ingame_HUD.WG_Ingame_HUD_C.ExecuteUbergraph_WG_Ingame_HUD");

	UWG_Ingame_HUD_C_ExecuteUbergraph_WG_Ingame_HUD_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

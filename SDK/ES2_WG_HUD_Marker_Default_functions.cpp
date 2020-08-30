// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_HUD_Marker_Default_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WG_HUD_Marker_Default.WG_HUD_Marker_Default_C.GetDeadlyTypeIconVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UWG_HUD_Marker_Default_C::GetDeadlyTypeIconVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_HUD_Marker_Default.WG_HUD_Marker_Default_C.GetDeadlyTypeIconVisibility");

	UWG_HUD_Marker_Default_C_GetDeadlyTypeIconVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_HUD_Marker_Default.WG_HUD_Marker_Default_C.ShouldMarkerBorderScale
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           DoScale                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWG_HUD_Marker_Default_C::ShouldMarkerBorderScale(bool* DoScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_HUD_Marker_Default.WG_HUD_Marker_Default_C.ShouldMarkerBorderScale");

	UWG_HUD_Marker_Default_C_ShouldMarkerBorderScale_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DoScale != nullptr)
		*DoScale = params.DoScale;
}


// Function WG_HUD_Marker_Default.WG_HUD_Marker_Default_C.GetMissionRelevantMarkerVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UWG_HUD_Marker_Default_C::GetMissionRelevantMarkerVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_HUD_Marker_Default.WG_HUD_Marker_Default_C.GetMissionRelevantMarkerVisibility");

	UWG_HUD_Marker_Default_C_GetMissionRelevantMarkerVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_HUD_Marker_Default.WG_HUD_Marker_Default_C.GetMissionRelevanttMarkerBrush
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             Brush                          (Parm, OutParm)

void UWG_HUD_Marker_Default_C::GetMissionRelevanttMarkerBrush(struct FSlateBrush* Brush)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_HUD_Marker_Default.WG_HUD_Marker_Default_C.GetMissionRelevanttMarkerBrush");

	UWG_HUD_Marker_Default_C_GetMissionRelevanttMarkerBrush_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Brush != nullptr)
		*Brush = params.Brush;
}


// Function WG_HUD_Marker_Default.WG_HUD_Marker_Default_C.GetTypeIconColor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UWG_HUD_Marker_Default_C::GetTypeIconColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_HUD_Marker_Default.WG_HUD_Marker_Default_C.GetTypeIconColor");

	UWG_HUD_Marker_Default_C_GetTypeIconColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_HUD_Marker_Default.WG_HUD_Marker_Default_C.GetHitpointsVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UWG_HUD_Marker_Default_C::GetHitpointsVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_HUD_Marker_Default.WG_HUD_Marker_Default_C.GetHitpointsVisibility");

	UWG_HUD_Marker_Default_C_GetHitpointsVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_HUD_Marker_Default.WG_HUD_Marker_Default_C.GetHitpointsFillRatios
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Health                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          HealthRecentDMG                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          armor                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          ArmorRecentDMG                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          shield                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          ShieldRecentDMG                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          EmptyShield                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          EmptyRest                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWG_HUD_Marker_Default_C::GetHitpointsFillRatios(float* Health, float* HealthRecentDMG, float* armor, float* ArmorRecentDMG, float* shield, float* ShieldRecentDMG, float* EmptyShield, float* EmptyRest)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_HUD_Marker_Default.WG_HUD_Marker_Default_C.GetHitpointsFillRatios");

	UWG_HUD_Marker_Default_C_GetHitpointsFillRatios_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Health != nullptr)
		*Health = params.Health;
	if (HealthRecentDMG != nullptr)
		*HealthRecentDMG = params.HealthRecentDMG;
	if (armor != nullptr)
		*armor = params.armor;
	if (ArmorRecentDMG != nullptr)
		*ArmorRecentDMG = params.ArmorRecentDMG;
	if (shield != nullptr)
		*shield = params.shield;
	if (ShieldRecentDMG != nullptr)
		*ShieldRecentDMG = params.ShieldRecentDMG;
	if (EmptyShield != nullptr)
		*EmptyShield = params.EmptyShield;
	if (EmptyRest != nullptr)
		*EmptyRest = params.EmptyRest;
}


// Function WG_HUD_Marker_Default.WG_HUD_Marker_Default_C.GetMarkerBorderVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UWG_HUD_Marker_Default_C::GetMarkerBorderVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_HUD_Marker_Default.WG_HUD_Marker_Default_C.GetMarkerBorderVisibility");

	UWG_HUD_Marker_Default_C_GetMarkerBorderVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_HUD_Marker_Default.WG_HUD_Marker_Default_C.GetObstructedMarkerBrush
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             Brush                          (Parm, OutParm)

void UWG_HUD_Marker_Default_C::GetObstructedMarkerBrush(struct FSlateBrush* Brush)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_HUD_Marker_Default.WG_HUD_Marker_Default_C.GetObstructedMarkerBrush");

	UWG_HUD_Marker_Default_C_GetObstructedMarkerBrush_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Brush != nullptr)
		*Brush = params.Brush;
}


// Function WG_HUD_Marker_Default.WG_HUD_Marker_Default_C.GetLockedMarkerBrush
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             Brush                          (Parm, OutParm)

void UWG_HUD_Marker_Default_C::GetLockedMarkerBrush(struct FSlateBrush* Brush)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_HUD_Marker_Default.WG_HUD_Marker_Default_C.GetLockedMarkerBrush");

	UWG_HUD_Marker_Default_C_GetLockedMarkerBrush_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Brush != nullptr)
		*Brush = params.Brush;
}


// Function WG_HUD_Marker_Default.WG_HUD_Marker_Default_C.GetHoveredMarkerBrush
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             Brush                          (Parm, OutParm)

void UWG_HUD_Marker_Default_C::GetHoveredMarkerBrush(struct FSlateBrush* Brush)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_HUD_Marker_Default.WG_HUD_Marker_Default_C.GetHoveredMarkerBrush");

	UWG_HUD_Marker_Default_C_GetHoveredMarkerBrush_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Brush != nullptr)
		*Brush = params.Brush;
}


// Function WG_HUD_Marker_Default.WG_HUD_Marker_Default_C.GetDefaultMarkerBrush
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             Brush                          (Parm, OutParm)

void UWG_HUD_Marker_Default_C::GetDefaultMarkerBrush(struct FSlateBrush* Brush)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_HUD_Marker_Default.WG_HUD_Marker_Default_C.GetDefaultMarkerBrush");

	UWG_HUD_Marker_Default_C_GetDefaultMarkerBrush_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Brush != nullptr)
		*Brush = params.Brush;
}


// Function WG_HUD_Marker_Default.WG_HUD_Marker_Default_C.GetTypeIconVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UWG_HUD_Marker_Default_C::GetTypeIconVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_HUD_Marker_Default.WG_HUD_Marker_Default_C.GetTypeIconVisibility");

	UWG_HUD_Marker_Default_C_GetTypeIconVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_HUD_Marker_Default.WG_HUD_Marker_Default_C.GetDistanceText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWG_HUD_Marker_Default_C::GetDistanceText()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_HUD_Marker_Default.WG_HUD_Marker_Default_C.GetDistanceText");

	UWG_HUD_Marker_Default_C_GetDistanceText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_HUD_Marker_Default.WG_HUD_Marker_Default_C.GetMarkerColor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UWG_HUD_Marker_Default_C::GetMarkerColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_HUD_Marker_Default.WG_HUD_Marker_Default_C.GetMarkerColor");

	UWG_HUD_Marker_Default_C_GetMarkerColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_HUD_Marker_Default.WG_HUD_Marker_Default_C.GetTextVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UWG_HUD_Marker_Default_C::GetTextVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_HUD_Marker_Default.WG_HUD_Marker_Default_C.GetTextVisibility");

	UWG_HUD_Marker_Default_C_GetTextVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_HUD_Marker_Default.WG_HUD_Marker_Default_C.GetText
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWG_HUD_Marker_Default_C::GetText()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_HUD_Marker_Default.WG_HUD_Marker_Default_C.GetText");

	UWG_HUD_Marker_Default_C_GetText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_HUD_Marker_Default.WG_HUD_Marker_Default_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_HUD_Marker_Default_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_HUD_Marker_Default.WG_HUD_Marker_Default_C.PreConstruct");

	UWG_HUD_Marker_Default_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_HUD_Marker_Default.WG_HUD_Marker_Default_C.Init
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UWG_HUD_Marker_Default_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_HUD_Marker_Default.WG_HUD_Marker_Default_C.Init");

	UWG_HUD_Marker_Default_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_HUD_Marker_Default.WG_HUD_Marker_Default_C.OnSpottedPlayer
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UWG_HUD_Marker_Default_C::OnSpottedPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_HUD_Marker_Default.WG_HUD_Marker_Default_C.OnSpottedPlayer");

	UWG_HUD_Marker_Default_C_OnSpottedPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_HUD_Marker_Default.WG_HUD_Marker_Default_C.OnLockedByPlayer
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UWG_HUD_Marker_Default_C::OnLockedByPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_HUD_Marker_Default.WG_HUD_Marker_Default_C.OnLockedByPlayer");

	UWG_HUD_Marker_Default_C_OnLockedByPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_HUD_Marker_Default.WG_HUD_Marker_Default_C.OnFirstShown
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UWG_HUD_Marker_Default_C::OnFirstShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_HUD_Marker_Default.WG_HUD_Marker_Default_C.OnFirstShown");

	UWG_HUD_Marker_Default_C_OnFirstShown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_HUD_Marker_Default.WG_HUD_Marker_Default_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_HUD_Marker_Default_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_HUD_Marker_Default.WG_HUD_Marker_Default_C.Tick");

	UWG_HUD_Marker_Default_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_HUD_Marker_Default.WG_HUD_Marker_Default_C.RefreshIndicators
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<TEnumAsByte<EIndicator>, bool>* NewIndicators                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UWG_HUD_Marker_Default_C::RefreshIndicators(TMap<TEnumAsByte<EIndicator>, bool>* NewIndicators)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_HUD_Marker_Default.WG_HUD_Marker_Default_C.RefreshIndicators");

	UWG_HUD_Marker_Default_C_RefreshIndicators_Params params;
	params.NewIndicators = NewIndicators;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_HUD_Marker_Default.WG_HUD_Marker_Default_C.PlayerLevelUp
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           NewLevel                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_HUD_Marker_Default_C::PlayerLevelUp(int* NewLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_HUD_Marker_Default.WG_HUD_Marker_Default_C.PlayerLevelUp");

	UWG_HUD_Marker_Default_C_PlayerLevelUp_Params params;
	params.NewLevel = NewLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_HUD_Marker_Default.WG_HUD_Marker_Default_C.ConditionAdded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UConditionBaseComponent** ConditionComponent             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_HUD_Marker_Default_C::ConditionAdded(class UConditionBaseComponent** ConditionComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_HUD_Marker_Default.WG_HUD_Marker_Default_C.ConditionAdded");

	UWG_HUD_Marker_Default_C_ConditionAdded_Params params;
	params.ConditionComponent = ConditionComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_HUD_Marker_Default.WG_HUD_Marker_Default_C.OnAttachInteractWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget**            InteractWidget                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_HUD_Marker_Default_C::OnAttachInteractWidget(class UUserWidget** InteractWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_HUD_Marker_Default.WG_HUD_Marker_Default_C.OnAttachInteractWidget");

	UWG_HUD_Marker_Default_C_OnAttachInteractWidget_Params params;
	params.InteractWidget = InteractWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_HUD_Marker_Default.WG_HUD_Marker_Default_C.OnDetachInteractWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UWG_HUD_Marker_Default_C::OnDetachInteractWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_HUD_Marker_Default.WG_HUD_Marker_Default_C.OnDetachInteractWidget");

	UWG_HUD_Marker_Default_C_OnDetachInteractWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_HUD_Marker_Default.WG_HUD_Marker_Default_C.ExecuteUbergraph_WG_HUD_Marker_Default
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_HUD_Marker_Default_C::ExecuteUbergraph_WG_HUD_Marker_Default(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_HUD_Marker_Default.WG_HUD_Marker_Default_C.ExecuteUbergraph_WG_HUD_Marker_Default");

	UWG_HUD_Marker_Default_C_ExecuteUbergraph_WG_HUD_Marker_Default_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

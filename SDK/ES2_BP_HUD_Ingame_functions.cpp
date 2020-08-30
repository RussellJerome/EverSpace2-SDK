// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_HUD_Ingame_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_HUD_Ingame.BP_HUD_Ingame_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_HUD_Ingame_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD_Ingame.BP_HUD_Ingame_C.ReceiveBeginPlay");

	ABP_HUD_Ingame_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HUD_Ingame.BP_HUD_Ingame_C.AddLogMessage
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHUDMessage*            MessageInfo                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_HUD_Ingame_C::AddLogMessage(struct FHUDMessage* MessageInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD_Ingame.BP_HUD_Ingame_C.AddLogMessage");

	ABP_HUD_Ingame_C_AddLogMessage_Params params;
	params.MessageInfo = MessageInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HUD_Ingame.BP_HUD_Ingame_C.ShowHitpointNumbers
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Victim                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 EventInstigator                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         HPShield                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         HPArmor                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         HPHull                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsCriticalHit                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                HitLocationWorld               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          ShowEverySecond                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HUD_Ingame_C::ShowHitpointNumbers(class AActor** Victim, class AActor** DamageCauser, class AActor** EventInstigator, float* HPShield, float* HPArmor, float* HPHull, bool* IsCriticalHit, struct FVector* HitLocationWorld, bool* ShowEverySecond)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD_Ingame.BP_HUD_Ingame_C.ShowHitpointNumbers");

	ABP_HUD_Ingame_C_ShowHitpointNumbers_Params params;
	params.Victim = Victim;
	params.DamageCauser = DamageCauser;
	params.EventInstigator = EventInstigator;
	params.HPShield = HPShield;
	params.HPArmor = HPArmor;
	params.HPHull = HPHull;
	params.IsCriticalHit = IsCriticalHit;
	params.HitLocationWorld = HitLocationWorld;
	params.ShowEverySecond = ShowEverySecond;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HUD_Ingame.BP_HUD_Ingame_C.AccumulationFinished
// (BlueprintCallable, BlueprintEvent)

void ABP_HUD_Ingame_C::AccumulationFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD_Ingame.BP_HUD_Ingame_C.AccumulationFinished");

	ABP_HUD_Ingame_C_AccumulationFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HUD_Ingame.BP_HUD_Ingame_C.PlayerChangedPrimaryWeapon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FWeaponInfo*            WeaponInfo                     (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_HUD_Ingame_C::PlayerChangedPrimaryWeapon(struct FWeaponInfo* WeaponInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD_Ingame.BP_HUD_Ingame_C.PlayerChangedPrimaryWeapon");

	ABP_HUD_Ingame_C_PlayerChangedPrimaryWeapon_Params params;
	params.WeaponInfo = WeaponInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HUD_Ingame.BP_HUD_Ingame_C.DrawAimAssist
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D*              ScreenPos                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D*              TargetScreenPos                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EMarkerRelation>*  Relation                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bForHoveredTarget              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bNewLock                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HUD_Ingame_C::DrawAimAssist(struct FVector2D* ScreenPos, struct FVector2D* TargetScreenPos, TEnumAsByte<EMarkerRelation>* Relation, bool* bForHoveredTarget, bool* bNewLock)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD_Ingame.BP_HUD_Ingame_C.DrawAimAssist");

	ABP_HUD_Ingame_C_DrawAimAssist_Params params;
	params.ScreenPos = ScreenPos;
	params.TargetScreenPos = TargetScreenPos;
	params.Relation = Relation;
	params.bForHoveredTarget = bForHoveredTarget;
	params.bNewLock = bNewLock;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HUD_Ingame.BP_HUD_Ingame_C.HideAimAssist
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bForHoveredTarget              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HUD_Ingame_C::HideAimAssist(bool* bForHoveredTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD_Ingame.BP_HUD_Ingame_C.HideAimAssist");

	ABP_HUD_Ingame_C_HideAimAssist_Params params;
	params.bForHoveredTarget = bForHoveredTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HUD_Ingame.BP_HUD_Ingame_C.OnPlayerDealtDamage
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bShieldDamage                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HUD_Ingame_C::OnPlayerDealtDamage(bool* bShieldDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD_Ingame.BP_HUD_Ingame_C.OnPlayerDealtDamage");

	ABP_HUD_Ingame_C_OnPlayerDealtDamage_Params params;
	params.bShieldDamage = bShieldDamage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HUD_Ingame.BP_HUD_Ingame_C.ReinitHUD
// (BlueprintCallable, BlueprintEvent)

void ABP_HUD_Ingame_C::ReinitHUD()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD_Ingame.BP_HUD_Ingame_C.ReinitHUD");

	ABP_HUD_Ingame_C_ReinitHUD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HUD_Ingame.BP_HUD_Ingame_C.ShowMissionTaskUpdate
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHUDTaskData*           TaskData                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_HUD_Ingame_C::ShowMissionTaskUpdate(struct FHUDTaskData* TaskData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD_Ingame.BP_HUD_Ingame_C.ShowMissionTaskUpdate");

	ABP_HUD_Ingame_C_ShowMissionTaskUpdate_Params params;
	params.TaskData = TaskData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HUD_Ingame.BP_HUD_Ingame_C.OnAbortedMission
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  MissionID                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HUD_Ingame_C::OnAbortedMission(struct FName* MissionID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD_Ingame.BP_HUD_Ingame_C.OnAbortedMission");

	ABP_HUD_Ingame_C_OnAbortedMission_Params params;
	params.MissionID = MissionID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HUD_Ingame.BP_HUD_Ingame_C.OnLevelUp
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           NewLevel                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HUD_Ingame_C::OnLevelUp(int* NewLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD_Ingame.BP_HUD_Ingame_C.OnLevelUp");

	ABP_HUD_Ingame_C_OnLevelUp_Params params;
	params.NewLevel = NewLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HUD_Ingame.BP_HUD_Ingame_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HUD_Ingame_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD_Ingame.BP_HUD_Ingame_C.ReceiveTick");

	ABP_HUD_Ingame_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HUD_Ingame.BP_HUD_Ingame_C.OnHideTopLayerChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bHide                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HUD_Ingame_C::OnHideTopLayerChanged(bool* bHide)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD_Ingame.BP_HUD_Ingame_C.OnHideTopLayerChanged");

	ABP_HUD_Ingame_C_OnHideTopLayerChanged_Params params;
	params.bHide = bHide;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HUD_Ingame.BP_HUD_Ingame_C.OnHideMainLayerChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bHide                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HUD_Ingame_C::OnHideMainLayerChanged(bool* bHide)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD_Ingame.BP_HUD_Ingame_C.OnHideMainLayerChanged");

	ABP_HUD_Ingame_C_OnHideMainLayerChanged_Params params;
	params.bHide = bHide;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HUD_Ingame.BP_HUD_Ingame_C.OnShowInteractWidget
// (Event, Public, BlueprintEvent)
// Parameters:
// class UInteractComponent**     InteractComponent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UClass**                 WidgetClass                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EInteractWidgetDisplayLocation>* DisplayLocation                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D*              DisplayOffset                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HUD_Ingame_C::OnShowInteractWidget(class UInteractComponent** InteractComponent, class UClass** WidgetClass, TEnumAsByte<EInteractWidgetDisplayLocation>* DisplayLocation, struct FVector2D* DisplayOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD_Ingame.BP_HUD_Ingame_C.OnShowInteractWidget");

	ABP_HUD_Ingame_C_OnShowInteractWidget_Params params;
	params.InteractComponent = InteractComponent;
	params.WidgetClass = WidgetClass;
	params.DisplayLocation = DisplayLocation;
	params.DisplayOffset = DisplayOffset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HUD_Ingame.BP_HUD_Ingame_C.OnHideInteractWidget
// (Event, Public, BlueprintEvent)

void ABP_HUD_Ingame_C::OnHideInteractWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD_Ingame.BP_HUD_Ingame_C.OnHideInteractWidget");

	ABP_HUD_Ingame_C_OnHideInteractWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HUD_Ingame.BP_HUD_Ingame_C.OnChangeInteractWidgetVisibility
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bVisible                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HUD_Ingame_C::OnChangeInteractWidgetVisibility(bool* bVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD_Ingame.BP_HUD_Ingame_C.OnChangeInteractWidgetVisibility");

	ABP_HUD_Ingame_C_OnChangeInteractWidgetVisibility_Params params;
	params.bVisible = bVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HUD_Ingame.BP_HUD_Ingame_C.OnEnterOrExitDeviceSelection
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bEnter                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HUD_Ingame_C::OnEnterOrExitDeviceSelection(bool* bEnter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD_Ingame.BP_HUD_Ingame_C.OnEnterOrExitDeviceSelection");

	ABP_HUD_Ingame_C_OnEnterOrExitDeviceSelection_Params params;
	params.bEnter = bEnter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HUD_Ingame.BP_HUD_Ingame_C.OnEnterOrExitConsumableSelection
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bEnter                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HUD_Ingame_C::OnEnterOrExitConsumableSelection(bool* bEnter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD_Ingame.BP_HUD_Ingame_C.OnEnterOrExitConsumableSelection");

	ABP_HUD_Ingame_C_OnEnterOrExitConsumableSelection_Params params;
	params.bEnter = bEnter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HUD_Ingame.BP_HUD_Ingame_C.ShowXPNumbers
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Victim                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         XP                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HUD_Ingame_C::ShowXPNumbers(class AActor** Victim, float* XP)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD_Ingame.BP_HUD_Ingame_C.ShowXPNumbers");

	ABP_HUD_Ingame_C_ShowXPNumbers_Params params;
	params.Victim = Victim;
	params.XP = XP;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HUD_Ingame.BP_HUD_Ingame_C.DrawLockedTargetIndicator
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D*              ScreenPos                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         RenderAngle                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EMarkerRelation>*  Relation                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HUD_Ingame_C::DrawLockedTargetIndicator(struct FVector2D* ScreenPos, float* RenderAngle, TEnumAsByte<EMarkerRelation>* Relation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD_Ingame.BP_HUD_Ingame_C.DrawLockedTargetIndicator");

	ABP_HUD_Ingame_C_DrawLockedTargetIndicator_Params params;
	params.ScreenPos = ScreenPos;
	params.RenderAngle = RenderAngle;
	params.Relation = Relation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HUD_Ingame.BP_HUD_Ingame_C.HideLockedTargetIndicator
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_HUD_Ingame_C::HideLockedTargetIndicator()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD_Ingame.BP_HUD_Ingame_C.HideLockedTargetIndicator");

	ABP_HUD_Ingame_C_HideLockedTargetIndicator_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HUD_Ingame.BP_HUD_Ingame_C.OnSecondaryWeaponChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FWeaponInfo*            WeaponInfo                     (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_HUD_Ingame_C::OnSecondaryWeaponChanged(struct FWeaponInfo* WeaponInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD_Ingame.BP_HUD_Ingame_C.OnSecondaryWeaponChanged");

	ABP_HUD_Ingame_C_OnSecondaryWeaponChanged_Params params;
	params.WeaponInfo = WeaponInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HUD_Ingame.BP_HUD_Ingame_C.ExecuteUbergraph_BP_HUD_Ingame
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HUD_Ingame_C::ExecuteUbergraph_BP_HUD_Ingame(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD_Ingame.BP_HUD_Ingame_C.ExecuteUbergraph_BP_HUD_Ingame");

	ABP_HUD_Ingame_C_ExecuteUbergraph_BP_HUD_Ingame_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HUD_Ingame.BP_HUD_Ingame_C.OnIngameWidgetCreated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_HUD_Ingame_C::OnIngameWidgetCreated__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD_Ingame.BP_HUD_Ingame_C.OnIngameWidgetCreated__DelegateSignature");

	ABP_HUD_Ingame_C_OnIngameWidgetCreated__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

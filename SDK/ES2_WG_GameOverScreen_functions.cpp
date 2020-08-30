// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_GameOverScreen_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WG_GameOverScreen.WG_GameOverScreen_C.GetVisibility_2
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UWG_GameOverScreen_C::GetVisibility_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_GameOverScreen.WG_GameOverScreen_C.GetVisibility_2");

	UWG_GameOverScreen_C_GetVisibility_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_GameOverScreen.WG_GameOverScreen_C.GetVisibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UWG_GameOverScreen_C::GetVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_GameOverScreen.WG_GameOverScreen_C.GetVisibility_1");

	UWG_GameOverScreen_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_GameOverScreen.WG_GameOverScreen_C.Fade02Finishing
// (Public, BlueprintCallable, BlueprintEvent)

void UWG_GameOverScreen_C::Fade02Finishing()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_GameOverScreen.WG_GameOverScreen_C.Fade02Finishing");

	UWG_GameOverScreen_C_Fade02Finishing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_GameOverScreen.WG_GameOverScreen_C.Fade01Finishing
// (Public, BlueprintCallable, BlueprintEvent)

void UWG_GameOverScreen_C::Fade01Finishing()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_GameOverScreen.WG_GameOverScreen_C.Fade01Finishing");

	UWG_GameOverScreen_C_Fade01Finishing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_GameOverScreen.WG_GameOverScreen_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWG_GameOverScreen_C::OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_GameOverScreen.WG_GameOverScreen_C.OnFocusReceived");

	UWG_GameOverScreen_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_GameOverScreen.WG_GameOverScreen_C.PressedConfirmAction
// (BlueprintCallable, BlueprintEvent)

void UWG_GameOverScreen_C::PressedConfirmAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_GameOverScreen.WG_GameOverScreen_C.PressedConfirmAction");

	UWG_GameOverScreen_C_PressedConfirmAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_GameOverScreen.WG_GameOverScreen_C.BndEvt__LastCheckpointButton_K2Node_ComponentBoundEvent_2_OnButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FInputActionButtonInfo* ActionInfo                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UWG_GameOverScreen_C::BndEvt__LastCheckpointButton_K2Node_ComponentBoundEvent_2_OnButtonClicked__DelegateSignature(struct FInputActionButtonInfo* ActionInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_GameOverScreen.WG_GameOverScreen_C.BndEvt__LastCheckpointButton_K2Node_ComponentBoundEvent_2_OnButtonClicked__DelegateSignature");

	UWG_GameOverScreen_C_BndEvt__LastCheckpointButton_K2Node_ComponentBoundEvent_2_OnButtonClicked__DelegateSignature_Params params;
	params.ActionInfo = ActionInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_GameOverScreen.WG_GameOverScreen_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_GameOverScreen_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_GameOverScreen.WG_GameOverScreen_C.Tick");

	UWG_GameOverScreen_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_GameOverScreen.WG_GameOverScreen_C.BndEvt__ReviveButton_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FInputActionButtonInfo* ActionInfo                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UWG_GameOverScreen_C::BndEvt__ReviveButton_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature(struct FInputActionButtonInfo* ActionInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_GameOverScreen.WG_GameOverScreen_C.BndEvt__ReviveButton_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature");

	UWG_GameOverScreen_C_BndEvt__ReviveButton_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature_Params params;
	params.ActionInfo = ActionInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_GameOverScreen.WG_GameOverScreen_C.OnReviveHovered
// (BlueprintCallable, BlueprintEvent)

void UWG_GameOverScreen_C::OnReviveHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_GameOverScreen.WG_GameOverScreen_C.OnReviveHovered");

	UWG_GameOverScreen_C_OnReviveHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_GameOverScreen.WG_GameOverScreen_C.OnReviveUnhovered
// (BlueprintCallable, BlueprintEvent)

void UWG_GameOverScreen_C::OnReviveUnhovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_GameOverScreen.WG_GameOverScreen_C.OnReviveUnhovered");

	UWG_GameOverScreen_C_OnReviveUnhovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_GameOverScreen.WG_GameOverScreen_C.Fade03Finished
// (BlueprintCallable, BlueprintEvent)

void UWG_GameOverScreen_C::Fade03Finished()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_GameOverScreen.WG_GameOverScreen_C.Fade03Finished");

	UWG_GameOverScreen_C_Fade03Finished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_GameOverScreen.WG_GameOverScreen_C.CloseWidget
// (BlueprintCallable, BlueprintEvent)

void UWG_GameOverScreen_C::CloseWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_GameOverScreen.WG_GameOverScreen_C.CloseWidget");

	UWG_GameOverScreen_C_CloseWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_GameOverScreen.WG_GameOverScreen_C.BndEvt__MainMenuButton_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FInputActionButtonInfo* ActionInfo                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UWG_GameOverScreen_C::BndEvt__MainMenuButton_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature(struct FInputActionButtonInfo* ActionInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_GameOverScreen.WG_GameOverScreen_C.BndEvt__MainMenuButton_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature");

	UWG_GameOverScreen_C_BndEvt__MainMenuButton_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature_Params params;
	params.ActionInfo = ActionInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_GameOverScreen.WG_GameOverScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWG_GameOverScreen_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_GameOverScreen.WG_GameOverScreen_C.Construct");

	UWG_GameOverScreen_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_GameOverScreen.WG_GameOverScreen_C.InitDamageCauserList
// (BlueprintCallable, BlueprintEvent)

void UWG_GameOverScreen_C::InitDamageCauserList()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_GameOverScreen.WG_GameOverScreen_C.InitDamageCauserList");

	UWG_GameOverScreen_C_InitDamageCauserList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_GameOverScreen.WG_GameOverScreen_C.InitDamageCauserMarker
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EFactionRelation>* Relation                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Deadly                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EItemRarity>*      Rarity                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           Level                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_GameOverScreen_C::InitDamageCauserMarker(TEnumAsByte<EFactionRelation>* Relation, bool* Deadly, TEnumAsByte<EItemRarity>* Rarity, int* Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_GameOverScreen.WG_GameOverScreen_C.InitDamageCauserMarker");

	UWG_GameOverScreen_C_InitDamageCauserMarker_Params params;
	params.Relation = Relation;
	params.Deadly = Deadly;
	params.Rarity = Rarity;
	params.Level = Level;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_GameOverScreen.WG_GameOverScreen_C.InitDamageCauserIcon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHUDMarkerData*         MarkerData                     (BlueprintVisible, BlueprintReadOnly, Parm)
// bool*                          Deadly                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_GameOverScreen_C::InitDamageCauserIcon(struct FHUDMarkerData* MarkerData, bool* Deadly)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_GameOverScreen.WG_GameOverScreen_C.InitDamageCauserIcon");

	UWG_GameOverScreen_C_InitDamageCauserIcon_Params params;
	params.MarkerData = MarkerData;
	params.Deadly = Deadly;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_GameOverScreen.WG_GameOverScreen_C.SetDamageCauserPrefixText
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  PrefixText                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UWG_GameOverScreen_C::SetDamageCauserPrefixText(struct FText* PrefixText)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_GameOverScreen.WG_GameOverScreen_C.SetDamageCauserPrefixText");

	UWG_GameOverScreen_C_SetDamageCauserPrefixText_Params params;
	params.PrefixText = PrefixText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_GameOverScreen.WG_GameOverScreen_C.ExecuteUbergraph_WG_GameOverScreen
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_GameOverScreen_C::ExecuteUbergraph_WG_GameOverScreen(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_GameOverScreen.WG_GameOverScreen_C.ExecuteUbergraph_WG_GameOverScreen");

	UWG_GameOverScreen_C_ExecuteUbergraph_WG_GameOverScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_GameOverScreen.WG_GameOverScreen_C.OnMainMenu__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWG_GameOverScreen_C::OnMainMenu__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_GameOverScreen.WG_GameOverScreen_C.OnMainMenu__DelegateSignature");

	UWG_GameOverScreen_C_OnMainMenu__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_GameOverScreen.WG_GameOverScreen_C.OnLoadCheckpoint__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWG_GameOverScreen_C::OnLoadCheckpoint__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_GameOverScreen.WG_GameOverScreen_C.OnLoadCheckpoint__DelegateSignature");

	UWG_GameOverScreen_C_OnLoadCheckpoint__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_GameOverScreen.WG_GameOverScreen_C.OnRevive__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWG_GameOverScreen_C::OnRevive__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_GameOverScreen.WG_GameOverScreen_C.OnRevive__DelegateSignature");

	UWG_GameOverScreen_C_OnRevive__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

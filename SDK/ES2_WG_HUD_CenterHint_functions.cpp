// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_HUD_CenterHint_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WG_HUD_CenterHint.WG_HUD_CenterHint_C.SetStatusColorInnerContent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor*           InColor                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_HUD_CenterHint_C::SetStatusColorInnerContent(struct FLinearColor* InColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_HUD_CenterHint.WG_HUD_CenterHint_C.SetStatusColorInnerContent");

	UWG_HUD_CenterHint_C_SetStatusColorInnerContent_Params params;
	params.InColor = InColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_HUD_CenterHint.WG_HUD_CenterHint_C.SetStatusColorHeader
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor*           InColor                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_HUD_CenterHint_C::SetStatusColorHeader(struct FLinearColor* InColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_HUD_CenterHint.WG_HUD_CenterHint_C.SetStatusColorHeader");

	UWG_HUD_CenterHint_C_SetStatusColorHeader_Params params;
	params.InColor = InColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_HUD_CenterHint.WG_HUD_CenterHint_C.ShowJumpChargeCooldown
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Initial                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_HUD_CenterHint_C::ShowJumpChargeCooldown(bool* Initial)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_HUD_CenterHint.WG_HUD_CenterHint_C.ShowJumpChargeCooldown");

	UWG_HUD_CenterHint_C_ShowJumpChargeCooldown_Params params;
	params.Initial = Initial;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_HUD_CenterHint.WG_HUD_CenterHint_C.HighlightCountdown
// (Public, BlueprintCallable, BlueprintEvent)

void UWG_HUD_CenterHint_C::HighlightCountdown()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_HUD_CenterHint.WG_HUD_CenterHint_C.HighlightCountdown");

	UWG_HUD_CenterHint_C_HighlightCountdown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_HUD_CenterHint.WG_HUD_CenterHint_C.FormatCountdown
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           DigitsToShow                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString*                 StringToAppend                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// float*                         DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString*                 RichTextTag                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class FString                  FormattedText                  (Parm, OutParm, ZeroConstructor)

void UWG_HUD_CenterHint_C::FormatCountdown(int* DigitsToShow, class FString* StringToAppend, float* DeltaTime, class FString* RichTextTag, class FString* FormattedText)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_HUD_CenterHint.WG_HUD_CenterHint_C.FormatCountdown");

	UWG_HUD_CenterHint_C_FormatCountdown_Params params;
	params.DigitsToShow = DigitsToShow;
	params.StringToAppend = StringToAppend;
	params.DeltaTime = DeltaTime;
	params.RichTextTag = RichTextTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FormattedText != nullptr)
		*FormattedText = params.FormattedText;
}


// Function WG_HUD_CenterHint.WG_HUD_CenterHint_C.SetCountdown
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Highlights                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          CriticalFormat                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  FormattedCountdown             (Parm, OutParm, ZeroConstructor)

void UWG_HUD_CenterHint_C::SetCountdown(float* DeltaTime, bool* Highlights, bool* CriticalFormat, class FString* FormattedCountdown)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_HUD_CenterHint.WG_HUD_CenterHint_C.SetCountdown");

	UWG_HUD_CenterHint_C_SetCountdown_Params params;
	params.DeltaTime = DeltaTime;
	params.Highlights = Highlights;
	params.CriticalFormat = CriticalFormat;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FormattedCountdown != nullptr)
		*FormattedCountdown = params.FormattedCountdown;
}


// Function WG_HUD_CenterHint.WG_HUD_CenterHint_C.ShowAnimationStarted
// (BlueprintCallable, BlueprintEvent)

void UWG_HUD_CenterHint_C::ShowAnimationStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_HUD_CenterHint.WG_HUD_CenterHint_C.ShowAnimationStarted");

	UWG_HUD_CenterHint_C_ShowAnimationStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_HUD_CenterHint.WG_HUD_CenterHint_C.HideInnerContent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         PlaybackSpeed                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_HUD_CenterHint_C::HideInnerContent(float* PlaybackSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_HUD_CenterHint.WG_HUD_CenterHint_C.HideInnerContent");

	UWG_HUD_CenterHint_C_HideInnerContent_Params params;
	params.PlaybackSpeed = PlaybackSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_HUD_CenterHint.WG_HUD_CenterHint_C.HideOnlyHeader
// (BlueprintCallable, BlueprintEvent)

void UWG_HUD_CenterHint_C::HideOnlyHeader()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_HUD_CenterHint.WG_HUD_CenterHint_C.HideOnlyHeader");

	UWG_HUD_CenterHint_C_HideOnlyHeader_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_HUD_CenterHint.WG_HUD_CenterHint_C.ShowWarningContentAnimationStarted
// (BlueprintCallable, BlueprintEvent)

void UWG_HUD_CenterHint_C::ShowWarningContentAnimationStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_HUD_CenterHint.WG_HUD_CenterHint_C.ShowWarningContentAnimationStarted");

	UWG_HUD_CenterHint_C_ShowWarningContentAnimationStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_HUD_CenterHint.WG_HUD_CenterHint_C.ShowBonusCanvas
// (BlueprintCallable, BlueprintEvent)

void UWG_HUD_CenterHint_C::ShowBonusCanvas()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_HUD_CenterHint.WG_HUD_CenterHint_C.ShowBonusCanvas");

	UWG_HUD_CenterHint_C_ShowBonusCanvas_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_HUD_CenterHint.WG_HUD_CenterHint_C.ShowReward
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor*           InRewardColor                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           InRewardStatus                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_HUD_CenterHint_C::ShowReward(struct FLinearColor* InRewardColor, int* InRewardStatus)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_HUD_CenterHint.WG_HUD_CenterHint_C.ShowReward");

	UWG_HUD_CenterHint_C_ShowReward_Params params;
	params.InRewardColor = InRewardColor;
	params.InRewardStatus = InRewardStatus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_HUD_CenterHint.WG_HUD_CenterHint_C.ShowHighscoreText
// (BlueprintCallable, BlueprintEvent)

void UWG_HUD_CenterHint_C::ShowHighscoreText()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_HUD_CenterHint.WG_HUD_CenterHint_C.ShowHighscoreText");

	UWG_HUD_CenterHint_C_ShowHighscoreText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_HUD_CenterHint.WG_HUD_CenterHint_C.ShowNewMessageHeader
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  NewText                        (BlueprintVisible, BlueprintReadOnly, Parm)
// class UHudColorDataAsset**     Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_HUD_CenterHint_C::ShowNewMessageHeader(struct FText* NewText, class UHudColorDataAsset** Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_HUD_CenterHint.WG_HUD_CenterHint_C.ShowNewMessageHeader");

	UWG_HUD_CenterHint_C_ShowNewMessageHeader_Params params;
	params.NewText = NewText;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_HUD_CenterHint.WG_HUD_CenterHint_C.ShowInnerContent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         PlaybackSpeed                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_HUD_CenterHint_C::ShowInnerContent(float* PlaybackSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_HUD_CenterHint.WG_HUD_CenterHint_C.ShowInnerContent");

	UWG_HUD_CenterHint_C_ShowInnerContent_Params params;
	params.PlaybackSpeed = PlaybackSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_HUD_CenterHint.WG_HUD_CenterHint_C.SwitchHeaderState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  NewStateText                   (BlueprintVisible, BlueprintReadOnly, Parm)
// class UHudColorDataAsset**     NewStateColor                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_HUD_CenterHint_C::SwitchHeaderState(struct FText* NewStateText, class UHudColorDataAsset** NewStateColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_HUD_CenterHint.WG_HUD_CenterHint_C.SwitchHeaderState");

	UWG_HUD_CenterHint_C_SwitchHeaderState_Params params;
	params.NewStateText = NewStateText;
	params.NewStateColor = NewStateColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_HUD_CenterHint.WG_HUD_CenterHint_C.ShowInnerContentMessage
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString*                 RichTextTag                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FText*                  Message                        (BlueprintVisible, BlueprintReadOnly, Parm)
// class UHudColorDataAsset**     StatusColor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_HUD_CenterHint_C::ShowInnerContentMessage(class FString* RichTextTag, struct FText* Message, class UHudColorDataAsset** StatusColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_HUD_CenterHint.WG_HUD_CenterHint_C.ShowInnerContentMessage");

	UWG_HUD_CenterHint_C_ShowInnerContentMessage_Params params;
	params.RichTextTag = RichTextTag;
	params.Message = Message;
	params.StatusColor = StatusColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_HUD_CenterHint.WG_HUD_CenterHint_C.HideInnerContentWithText
// (BlueprintCallable, BlueprintEvent)

void UWG_HUD_CenterHint_C::HideInnerContentWithText()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_HUD_CenterHint.WG_HUD_CenterHint_C.HideInnerContentWithText");

	UWG_HUD_CenterHint_C_HideInnerContentWithText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_HUD_CenterHint.WG_HUD_CenterHint_C.ShowInnerContentAnimationFinished
// (BlueprintCallable, BlueprintEvent)

void UWG_HUD_CenterHint_C::ShowInnerContentAnimationFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_HUD_CenterHint.WG_HUD_CenterHint_C.ShowInnerContentAnimationFinished");

	UWG_HUD_CenterHint_C_ShowInnerContentAnimationFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_HUD_CenterHint.WG_HUD_CenterHint_C.OnJumpChargeStarted
// (BlueprintCallable, BlueprintEvent)

void UWG_HUD_CenterHint_C::OnJumpChargeStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_HUD_CenterHint.WG_HUD_CenterHint_C.OnJumpChargeStarted");

	UWG_HUD_CenterHint_C_OnJumpChargeStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_HUD_CenterHint.WG_HUD_CenterHint_C.OnJumpChargeAborted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EJumpAbortType>*   AbortedType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_HUD_CenterHint_C::OnJumpChargeAborted(TEnumAsByte<EJumpAbortType>* AbortedType)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_HUD_CenterHint.WG_HUD_CenterHint_C.OnJumpChargeAborted");

	UWG_HUD_CenterHint_C_OnJumpChargeAborted_Params params;
	params.AbortedType = AbortedType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_HUD_CenterHint.WG_HUD_CenterHint_C.ShowHeader
// (BlueprintCallable, BlueprintEvent)

void UWG_HUD_CenterHint_C::ShowHeader()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_HUD_CenterHint.WG_HUD_CenterHint_C.ShowHeader");

	UWG_HUD_CenterHint_C_ShowHeader_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_HUD_CenterHint.WG_HUD_CenterHint_C.SwitchInnerState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString*                 RichTextTag                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FText*                  NewStateText                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
// class UHudColorDataAsset**     NewStateColor                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_HUD_CenterHint_C::SwitchInnerState(class FString* RichTextTag, struct FText* NewStateText, class UHudColorDataAsset** NewStateColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_HUD_CenterHint.WG_HUD_CenterHint_C.SwitchInnerState");

	UWG_HUD_CenterHint_C_SwitchInnerState_Params params;
	params.RichTextTag = RichTextTag;
	params.NewStateText = NewStateText;
	params.NewStateColor = NewStateColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_HUD_CenterHint.WG_HUD_CenterHint_C.OnCruiseModeBlocked
// (BlueprintCallable, BlueprintEvent)

void UWG_HUD_CenterHint_C::OnCruiseModeBlocked()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_HUD_CenterHint.WG_HUD_CenterHint_C.OnCruiseModeBlocked");

	UWG_HUD_CenterHint_C_OnCruiseModeBlocked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_HUD_CenterHint.WG_HUD_CenterHint_C.OnCruiseModeEnemiesTooClose
// (BlueprintCallable, BlueprintEvent)

void UWG_HUD_CenterHint_C::OnCruiseModeEnemiesTooClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_HUD_CenterHint.WG_HUD_CenterHint_C.OnCruiseModeEnemiesTooClose");

	UWG_HUD_CenterHint_C_OnCruiseModeEnemiesTooClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_HUD_CenterHint.WG_HUD_CenterHint_C.OnCruiseModeReady
// (BlueprintCallable, BlueprintEvent)

void UWG_HUD_CenterHint_C::OnCruiseModeReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_HUD_CenterHint.WG_HUD_CenterHint_C.OnCruiseModeReady");

	UWG_HUD_CenterHint_C_OnCruiseModeReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_HUD_CenterHint.WG_HUD_CenterHint_C.HideInnerContentDelayed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Delay                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_HUD_CenterHint_C::HideInnerContentDelayed(float* Delay)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_HUD_CenterHint.WG_HUD_CenterHint_C.HideInnerContentDelayed");

	UWG_HUD_CenterHint_C_HideInnerContentDelayed_Params params;
	params.Delay = Delay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_HUD_CenterHint.WG_HUD_CenterHint_C.OnCruiseModeChargeEnd
// (BlueprintCallable, BlueprintEvent)

void UWG_HUD_CenterHint_C::OnCruiseModeChargeEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_HUD_CenterHint.WG_HUD_CenterHint_C.OnCruiseModeChargeEnd");

	UWG_HUD_CenterHint_C_OnCruiseModeChargeEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_HUD_CenterHint.WG_HUD_CenterHint_C.OnJumpDriveCanBeUsedChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bCanBeUsed                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_HUD_CenterHint_C::OnJumpDriveCanBeUsedChange(bool* bCanBeUsed)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_HUD_CenterHint.WG_HUD_CenterHint_C.OnJumpDriveCanBeUsedChange");

	UWG_HUD_CenterHint_C_OnJumpDriveCanBeUsedChange_Params params;
	params.bCanBeUsed = bCanBeUsed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_HUD_CenterHint.WG_HUD_CenterHint_C.HideHeaderOnlyDelayed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Delay                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_HUD_CenterHint_C::HideHeaderOnlyDelayed(float* Delay)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_HUD_CenterHint.WG_HUD_CenterHint_C.HideHeaderOnlyDelayed");

	UWG_HUD_CenterHint_C_HideHeaderOnlyDelayed_Params params;
	params.Delay = Delay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_HUD_CenterHint.WG_HUD_CenterHint_C.HideAnimationFInished
// (BlueprintCallable, BlueprintEvent)

void UWG_HUD_CenterHint_C::HideAnimationFInished()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_HUD_CenterHint.WG_HUD_CenterHint_C.HideAnimationFInished");

	UWG_HUD_CenterHint_C_HideAnimationFInished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_HUD_CenterHint.WG_HUD_CenterHint_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWG_HUD_CenterHint_C::OnInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_HUD_CenterHint.WG_HUD_CenterHint_C.OnInitialized");

	UWG_HUD_CenterHint_C_OnInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_HUD_CenterHint.WG_HUD_CenterHint_C.ExecuteUbergraph_WG_HUD_CenterHint
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_HUD_CenterHint_C::ExecuteUbergraph_WG_HUD_CenterHint(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_HUD_CenterHint.WG_HUD_CenterHint_C.ExecuteUbergraph_WG_HUD_CenterHint");

	UWG_HUD_CenterHint_C_ExecuteUbergraph_WG_HUD_CenterHint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

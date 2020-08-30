#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_HUD_CenterHint_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WG_HUD_CenterHint.WG_HUD_CenterHint_C.SetStatusColorInnerContent
struct UWG_HUD_CenterHint_C_SetStatusColorInnerContent_Params
{
	struct FLinearColor*                               InColor;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_HUD_CenterHint.WG_HUD_CenterHint_C.SetStatusColorHeader
struct UWG_HUD_CenterHint_C_SetStatusColorHeader_Params
{
	struct FLinearColor*                               InColor;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_HUD_CenterHint.WG_HUD_CenterHint_C.ShowJumpChargeCooldown
struct UWG_HUD_CenterHint_C_ShowJumpChargeCooldown_Params
{
	bool*                                              Initial;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_HUD_CenterHint.WG_HUD_CenterHint_C.HighlightCountdown
struct UWG_HUD_CenterHint_C_HighlightCountdown_Params
{
};

// Function WG_HUD_CenterHint.WG_HUD_CenterHint_C.FormatCountdown
struct UWG_HUD_CenterHint_C_FormatCountdown_Params
{
	int*                                               DigitsToShow;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString*                                     StringToAppend;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	float*                                             DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString*                                     RichTextTag;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class FString                                      FormattedText;                                            // (Parm, OutParm, ZeroConstructor)
};

// Function WG_HUD_CenterHint.WG_HUD_CenterHint_C.SetCountdown
struct UWG_HUD_CenterHint_C_SetCountdown_Params
{
	float*                                             DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Highlights;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              CriticalFormat;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      FormattedCountdown;                                       // (Parm, OutParm, ZeroConstructor)
};

// Function WG_HUD_CenterHint.WG_HUD_CenterHint_C.ShowAnimationStarted
struct UWG_HUD_CenterHint_C_ShowAnimationStarted_Params
{
};

// Function WG_HUD_CenterHint.WG_HUD_CenterHint_C.HideInnerContent
struct UWG_HUD_CenterHint_C_HideInnerContent_Params
{
	float*                                             PlaybackSpeed;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_HUD_CenterHint.WG_HUD_CenterHint_C.HideOnlyHeader
struct UWG_HUD_CenterHint_C_HideOnlyHeader_Params
{
};

// Function WG_HUD_CenterHint.WG_HUD_CenterHint_C.ShowWarningContentAnimationStarted
struct UWG_HUD_CenterHint_C_ShowWarningContentAnimationStarted_Params
{
};

// Function WG_HUD_CenterHint.WG_HUD_CenterHint_C.ShowBonusCanvas
struct UWG_HUD_CenterHint_C_ShowBonusCanvas_Params
{
};

// Function WG_HUD_CenterHint.WG_HUD_CenterHint_C.ShowReward
struct UWG_HUD_CenterHint_C_ShowReward_Params
{
	struct FLinearColor*                               InRewardColor;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               InRewardStatus;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_HUD_CenterHint.WG_HUD_CenterHint_C.ShowHighscoreText
struct UWG_HUD_CenterHint_C_ShowHighscoreText_Params
{
};

// Function WG_HUD_CenterHint.WG_HUD_CenterHint_C.ShowNewMessageHeader
struct UWG_HUD_CenterHint_C_ShowNewMessageHeader_Params
{
	struct FText*                                      NewText;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UHudColorDataAsset**                         Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_HUD_CenterHint.WG_HUD_CenterHint_C.ShowInnerContent
struct UWG_HUD_CenterHint_C_ShowInnerContent_Params
{
	float*                                             PlaybackSpeed;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_HUD_CenterHint.WG_HUD_CenterHint_C.SwitchHeaderState
struct UWG_HUD_CenterHint_C_SwitchHeaderState_Params
{
	struct FText*                                      NewStateText;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UHudColorDataAsset**                         NewStateColor;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_HUD_CenterHint.WG_HUD_CenterHint_C.ShowInnerContentMessage
struct UWG_HUD_CenterHint_C_ShowInnerContentMessage_Params
{
	class FString*                                     RichTextTag;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FText*                                      Message;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UHudColorDataAsset**                         StatusColor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_HUD_CenterHint.WG_HUD_CenterHint_C.HideInnerContentWithText
struct UWG_HUD_CenterHint_C_HideInnerContentWithText_Params
{
};

// Function WG_HUD_CenterHint.WG_HUD_CenterHint_C.ShowInnerContentAnimationFinished
struct UWG_HUD_CenterHint_C_ShowInnerContentAnimationFinished_Params
{
};

// Function WG_HUD_CenterHint.WG_HUD_CenterHint_C.OnJumpChargeStarted
struct UWG_HUD_CenterHint_C_OnJumpChargeStarted_Params
{
};

// Function WG_HUD_CenterHint.WG_HUD_CenterHint_C.OnJumpChargeAborted
struct UWG_HUD_CenterHint_C_OnJumpChargeAborted_Params
{
	TEnumAsByte<EJumpAbortType>*                       AbortedType;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_HUD_CenterHint.WG_HUD_CenterHint_C.ShowHeader
struct UWG_HUD_CenterHint_C_ShowHeader_Params
{
};

// Function WG_HUD_CenterHint.WG_HUD_CenterHint_C.SwitchInnerState
struct UWG_HUD_CenterHint_C_SwitchInnerState_Params
{
	class FString*                                     RichTextTag;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FText*                                      NewStateText;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
	class UHudColorDataAsset**                         NewStateColor;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_HUD_CenterHint.WG_HUD_CenterHint_C.OnCruiseModeBlocked
struct UWG_HUD_CenterHint_C_OnCruiseModeBlocked_Params
{
};

// Function WG_HUD_CenterHint.WG_HUD_CenterHint_C.OnCruiseModeEnemiesTooClose
struct UWG_HUD_CenterHint_C_OnCruiseModeEnemiesTooClose_Params
{
};

// Function WG_HUD_CenterHint.WG_HUD_CenterHint_C.OnCruiseModeReady
struct UWG_HUD_CenterHint_C_OnCruiseModeReady_Params
{
};

// Function WG_HUD_CenterHint.WG_HUD_CenterHint_C.HideInnerContentDelayed
struct UWG_HUD_CenterHint_C_HideInnerContentDelayed_Params
{
	float*                                             Delay;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_HUD_CenterHint.WG_HUD_CenterHint_C.OnCruiseModeChargeEnd
struct UWG_HUD_CenterHint_C_OnCruiseModeChargeEnd_Params
{
};

// Function WG_HUD_CenterHint.WG_HUD_CenterHint_C.OnJumpDriveCanBeUsedChange
struct UWG_HUD_CenterHint_C_OnJumpDriveCanBeUsedChange_Params
{
	bool*                                              bCanBeUsed;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_HUD_CenterHint.WG_HUD_CenterHint_C.HideHeaderOnlyDelayed
struct UWG_HUD_CenterHint_C_HideHeaderOnlyDelayed_Params
{
	float*                                             Delay;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_HUD_CenterHint.WG_HUD_CenterHint_C.HideAnimationFInished
struct UWG_HUD_CenterHint_C_HideAnimationFInished_Params
{
};

// Function WG_HUD_CenterHint.WG_HUD_CenterHint_C.OnInitialized
struct UWG_HUD_CenterHint_C_OnInitialized_Params
{
};

// Function WG_HUD_CenterHint.WG_HUD_CenterHint_C.ExecuteUbergraph_WG_HUD_CenterHint
struct UWG_HUD_CenterHint_C_ExecuteUbergraph_WG_HUD_CenterHint_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

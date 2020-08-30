#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_LIB_F_UI_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function LIB_F_UI.LIB_F_UI_C.DisplayUnappliedChangesPrompt
struct ULIB_F_UI_C_DisplayUnappliedChangesPrompt_Params
{
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWG_Prompt_C*                                Prompt;                                                   // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function LIB_F_UI.LIB_F_UI_C.GetPauseMenuText
struct ULIB_F_UI_C_GetPauseMenuText_Params
{
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       PauseMenuText;                                            // (Parm, OutParm)
};

// Function LIB_F_UI.LIB_F_UI_C.GetHUDDeadlyTypeIconBrush
struct ULIB_F_UI_C_GetHUDDeadlyTypeIconBrush_Params
{
	struct FHUDMarkerData*                             MarkerData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FSlateBrush                                 Brush;                                                    // (Parm, OutParm)
};

// Function LIB_F_UI.LIB_F_UI_C.GetHUDTypeIconBrush
struct ULIB_F_UI_C_GetHUDTypeIconBrush_Params
{
	struct FHUDMarkerData*                             MarkerData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool*                                              OwnerIsHomebase;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FSlateBrush                                 Brush;                                                    // (Parm, OutParm)
};

// Function LIB_F_UI.LIB_F_UI_C.GetBackgroundColorFromMarkerRelation
struct ULIB_F_UI_C_GetBackgroundColorFromMarkerRelation_Params
{
	TEnumAsByte<EMarkerRelation>*                      Relation;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Deadly;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                LinearColor;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_F_UI.LIB_F_UI_C.GetColorFromMarkerRelation
struct ULIB_F_UI_C_GetColorFromMarkerRelation_Params
{
	TEnumAsByte<EMarkerRelation>*                      Relation;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                LinearColor;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_F_UI.LIB_F_UI_C.GetRaceRingColor
struct ULIB_F_UI_C_GetRaceRingColor_Params
{
	EActivityHudMarkerType*                            HudMarkerType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                RingColor;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_F_UI.LIB_F_UI_C.AddButtonToMenuFooter
struct ULIB_F_UI_C_AddButtonToMenuFooter_Params
{
	class UWG_Menu_Footer_C**                          MenuFooter;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FInputActionButtonInfo*                     InputActionInfo;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool*                                              ClearAllExistingButtons;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWG_MenuAction_Button_C*                     Button;                                                   // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function LIB_F_UI.LIB_F_UI_C.GetColorFromRarity
struct ULIB_F_UI_C_GetColorFromRarity_Params
{
	TEnumAsByte<EItemRarity>*                          Rarity;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                LinearColor;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_F_UI.LIB_F_UI_C.GetMainColor
struct ULIB_F_UI_C_GetMainColor_Params
{
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                LinearColor;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_F_UI.LIB_F_UI_C.GetLeaveStationText
struct ULIB_F_UI_C_GetLeaveStationText_Params
{
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       TextLeave;                                                // (Parm, OutParm)
};

// Function LIB_F_UI.LIB_F_UI_C.IsWidgetOverlapping
struct ULIB_F_UI_C_IsWidgetOverlapping_Params
{
	class UWidget**                                    Widget1;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidget**                                    Widget2;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FMargin*                                    Margin;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_F_UI.LIB_F_UI_C.GetSubCategoryIcon
struct ULIB_F_UI_C_GetSubCategoryIcon_Params
{
	class UItem**                                      ItemRef;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Small;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_F_UI.LIB_F_UI_C.GetIndicatorBorderColor
struct ULIB_F_UI_C_GetIndicatorBorderColor_Params
{
	TEnumAsByte<EIndicator>*                           Indicator;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_F_UI.LIB_F_UI_C.GetIndicatorBackgroundColor
struct ULIB_F_UI_C_GetIndicatorBackgroundColor_Params
{
	TEnumAsByte<EIndicator>*                           Indicator;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_F_UI.LIB_F_UI_C.GetAttributeIcon
struct ULIB_F_UI_C_GetAttributeIcon_Params
{
	struct FName*                                      AttributeID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Texture;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_F_UI.LIB_F_UI_C.GetItemCategoryIcon
struct ULIB_F_UI_C_GetItemCategoryIcon_Params
{
	struct FName*                                      CategoryID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      SubCategoryID;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Small;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_F_UI.LIB_F_UI_C.GetInventoryCategoryIcon
struct ULIB_F_UI_C_GetInventoryCategoryIcon_Params
{
	TEnumAsByte<EInventoryCategory>*                   Category;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Small;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Tiny;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_F_UI.LIB_F_UI_C.ShowTutorialMessage
struct ULIB_F_UI_C_ShowTutorialMessage_Params
{
	struct FText*                                      TitleText;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText*                                      ContentText;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	float*                                             DisplayDuration;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsModal;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             MinWidth;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             MaxWidth;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EHorizontalAlignment>*                 HorizontalAlignment;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>*                   VerticalAlignment;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FMargin*                                    Padding;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate*                            OnClosedEvent;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TMap<class FString, TEnumAsByte<EInputActionName>>* InputActionsReplaceMap;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWG_Tutorial_Message_C*                      TutorialWidget;                                           // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function LIB_F_UI.LIB_F_UI_C.GetFactionName
struct ULIB_F_UI_C_GetFactionName_Params
{
	TEnumAsByte<EFactions>*                            Faction;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       FactionName;                                              // (Parm, OutParm)
};

// Function LIB_F_UI.LIB_F_UI_C.ScreenFadeOutWithEvent
struct ULIB_F_UI_C_ScreenFadeOutWithEvent_Params
{
	struct FLinearColor*                               FadeColor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate*                            OnFadedOut;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_F_UI.LIB_F_UI_C.ScreenFadeOut
struct ULIB_F_UI_C_ScreenFadeOut_Params
{
	struct FLinearColor*                               FadeColor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_F_UI.LIB_F_UI_C.ScreenFadeInWithEvent
struct ULIB_F_UI_C_ScreenFadeInWithEvent_Params
{
	struct FLinearColor*                               FadeColor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate*                            OnFadedIn;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_F_UI.LIB_F_UI_C.ScreenFadeIn
struct ULIB_F_UI_C_ScreenFadeIn_Params
{
	struct FLinearColor*                               FadeColor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_F_UI.LIB_F_UI_C.GetIndicatorIcon
struct ULIB_F_UI_C_GetIndicatorIcon_Params
{
	TEnumAsByte<EIndicator>*                           Indicator;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Icon;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

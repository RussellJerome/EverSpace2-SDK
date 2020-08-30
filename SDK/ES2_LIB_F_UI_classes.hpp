#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_LIB_F_UI_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LIB_F_UI.LIB_F_UI_C
// 0x0000 (0x0028 - 0x0028)
class ULIB_F_UI_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LIB_F_UI.LIB_F_UI_C");
		return ptr;
	}


	void STATIC_DisplayUnappliedChangesPrompt(class UObject** __WorldContext, class UWG_Prompt_C** Prompt);
	void STATIC_GetPauseMenuText(class UObject** __WorldContext, struct FText* PauseMenuText);
	void STATIC_GetHUDDeadlyTypeIconBrush(struct FHUDMarkerData* MarkerData, class UObject** __WorldContext, struct FSlateBrush* Brush);
	void STATIC_GetHUDTypeIconBrush(struct FHUDMarkerData* MarkerData, bool* OwnerIsHomebase, class UObject** __WorldContext, struct FSlateBrush* Brush);
	void STATIC_GetBackgroundColorFromMarkerRelation(TEnumAsByte<EMarkerRelation>* Relation, bool* Deadly, class UObject** __WorldContext, struct FLinearColor* LinearColor);
	void STATIC_GetColorFromMarkerRelation(TEnumAsByte<EMarkerRelation>* Relation, class UObject** __WorldContext, struct FLinearColor* LinearColor);
	void STATIC_GetRaceRingColor(EActivityHudMarkerType* HudMarkerType, class UObject** __WorldContext, struct FLinearColor* RingColor);
	void STATIC_AddButtonToMenuFooter(class UWG_Menu_Footer_C** MenuFooter, struct FInputActionButtonInfo* InputActionInfo, bool* ClearAllExistingButtons, class UObject** __WorldContext, class UWG_MenuAction_Button_C** Button);
	void STATIC_GetColorFromRarity(TEnumAsByte<EItemRarity>* Rarity, class UObject** __WorldContext, struct FLinearColor* LinearColor);
	void STATIC_GetMainColor(class UObject** __WorldContext, struct FLinearColor* LinearColor);
	void STATIC_GetLeaveStationText(class UObject** __WorldContext, struct FText* TextLeave);
	void STATIC_IsWidgetOverlapping(class UWidget** Widget1, class UWidget** Widget2, struct FMargin* Margin, class UObject** __WorldContext, bool* Result);
	void STATIC_GetSubCategoryIcon(class UItem** ItemRef, bool* Small, class UObject** __WorldContext, class UTexture2D** Result);
	void STATIC_GetIndicatorBorderColor(TEnumAsByte<EIndicator>* Indicator, class UObject** __WorldContext, struct FLinearColor* Color);
	void STATIC_GetIndicatorBackgroundColor(TEnumAsByte<EIndicator>* Indicator, class UObject** __WorldContext, struct FLinearColor* Color);
	void STATIC_GetAttributeIcon(struct FName* AttributeID, class UObject** __WorldContext, class UTexture2D** Texture);
	void STATIC_GetItemCategoryIcon(struct FName* CategoryID, struct FName* SubCategoryID, bool* Small, class UObject** __WorldContext, class UTexture2D** Result);
	void STATIC_GetInventoryCategoryIcon(TEnumAsByte<EInventoryCategory>* Category, bool* Small, bool* Tiny, class UObject** __WorldContext, class UTexture2D** Result);
	void STATIC_ShowTutorialMessage(struct FText* TitleText, struct FText* ContentText, float* DisplayDuration, bool* IsModal, float* MinWidth, float* MaxWidth, TEnumAsByte<EHorizontalAlignment>* HorizontalAlignment, TEnumAsByte<EVerticalAlignment>* VerticalAlignment, struct FMargin* Padding, struct FScriptDelegate* OnClosedEvent, TMap<class FString, TEnumAsByte<EInputActionName>>* InputActionsReplaceMap, class UObject** __WorldContext, class UWG_Tutorial_Message_C** TutorialWidget);
	void STATIC_GetFactionName(TEnumAsByte<EFactions>* Faction, class UObject** __WorldContext, struct FText* FactionName);
	void STATIC_ScreenFadeOutWithEvent(struct FLinearColor* FadeColor, float* Duration, struct FScriptDelegate* OnFadedOut, class UObject** __WorldContext);
	void STATIC_ScreenFadeOut(struct FLinearColor* FadeColor, float* Duration, class UObject** __WorldContext);
	void STATIC_ScreenFadeInWithEvent(struct FLinearColor* FadeColor, float* Duration, struct FScriptDelegate* OnFadedIn, class UObject** __WorldContext);
	void STATIC_ScreenFadeIn(struct FLinearColor* FadeColor, float* Duration, class UObject** __WorldContext);
	void STATIC_GetIndicatorIcon(TEnumAsByte<EIndicator>* Indicator, class UObject** __WorldContext, class UTexture2D** Icon);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_LIB_F_UI_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LIB_F_UI.LIB_F_UI_C.DisplayUnappliedChangesPrompt
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWG_Prompt_C*            Prompt                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ULIB_F_UI_C::STATIC_DisplayUnappliedChangesPrompt(class UObject** __WorldContext, class UWG_Prompt_C** Prompt)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_UI.LIB_F_UI_C.DisplayUnappliedChangesPrompt");

	ULIB_F_UI_C_DisplayUnappliedChangesPrompt_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Prompt != nullptr)
		*Prompt = params.Prompt;
}


// Function LIB_F_UI.LIB_F_UI_C.GetPauseMenuText
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   PauseMenuText                  (Parm, OutParm)

void ULIB_F_UI_C::STATIC_GetPauseMenuText(class UObject** __WorldContext, struct FText* PauseMenuText)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_UI.LIB_F_UI_C.GetPauseMenuText");

	ULIB_F_UI_C_GetPauseMenuText_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PauseMenuText != nullptr)
		*PauseMenuText = params.PauseMenuText;
}


// Function LIB_F_UI.LIB_F_UI_C.GetHUDDeadlyTypeIconBrush
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FHUDMarkerData*         MarkerData                     (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FSlateBrush             Brush                          (Parm, OutParm)

void ULIB_F_UI_C::STATIC_GetHUDDeadlyTypeIconBrush(struct FHUDMarkerData* MarkerData, class UObject** __WorldContext, struct FSlateBrush* Brush)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_UI.LIB_F_UI_C.GetHUDDeadlyTypeIconBrush");

	ULIB_F_UI_C_GetHUDDeadlyTypeIconBrush_Params params;
	params.MarkerData = MarkerData;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Brush != nullptr)
		*Brush = params.Brush;
}


// Function LIB_F_UI.LIB_F_UI_C.GetHUDTypeIconBrush
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FHUDMarkerData*         MarkerData                     (BlueprintVisible, BlueprintReadOnly, Parm)
// bool*                          OwnerIsHomebase                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FSlateBrush             Brush                          (Parm, OutParm)

void ULIB_F_UI_C::STATIC_GetHUDTypeIconBrush(struct FHUDMarkerData* MarkerData, bool* OwnerIsHomebase, class UObject** __WorldContext, struct FSlateBrush* Brush)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_UI.LIB_F_UI_C.GetHUDTypeIconBrush");

	ULIB_F_UI_C_GetHUDTypeIconBrush_Params params;
	params.MarkerData = MarkerData;
	params.OwnerIsHomebase = OwnerIsHomebase;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Brush != nullptr)
		*Brush = params.Brush;
}


// Function LIB_F_UI.LIB_F_UI_C.GetBackgroundColorFromMarkerRelation
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<EMarkerRelation>*  Relation                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Deadly                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            LinearColor                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULIB_F_UI_C::STATIC_GetBackgroundColorFromMarkerRelation(TEnumAsByte<EMarkerRelation>* Relation, bool* Deadly, class UObject** __WorldContext, struct FLinearColor* LinearColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_UI.LIB_F_UI_C.GetBackgroundColorFromMarkerRelation");

	ULIB_F_UI_C_GetBackgroundColorFromMarkerRelation_Params params;
	params.Relation = Relation;
	params.Deadly = Deadly;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LinearColor != nullptr)
		*LinearColor = params.LinearColor;
}


// Function LIB_F_UI.LIB_F_UI_C.GetColorFromMarkerRelation
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<EMarkerRelation>*  Relation                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            LinearColor                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULIB_F_UI_C::STATIC_GetColorFromMarkerRelation(TEnumAsByte<EMarkerRelation>* Relation, class UObject** __WorldContext, struct FLinearColor* LinearColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_UI.LIB_F_UI_C.GetColorFromMarkerRelation");

	ULIB_F_UI_C_GetColorFromMarkerRelation_Params params;
	params.Relation = Relation;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LinearColor != nullptr)
		*LinearColor = params.LinearColor;
}


// Function LIB_F_UI.LIB_F_UI_C.GetRaceRingColor
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EActivityHudMarkerType*        HudMarkerType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            RingColor                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULIB_F_UI_C::STATIC_GetRaceRingColor(EActivityHudMarkerType* HudMarkerType, class UObject** __WorldContext, struct FLinearColor* RingColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_UI.LIB_F_UI_C.GetRaceRingColor");

	ULIB_F_UI_C_GetRaceRingColor_Params params;
	params.HudMarkerType = HudMarkerType;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RingColor != nullptr)
		*RingColor = params.RingColor;
}


// Function LIB_F_UI.LIB_F_UI_C.AddButtonToMenuFooter
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_Menu_Footer_C**      MenuFooter                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FInputActionButtonInfo* InputActionInfo                (BlueprintVisible, BlueprintReadOnly, Parm)
// bool*                          ClearAllExistingButtons        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWG_MenuAction_Button_C* Button                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ULIB_F_UI_C::STATIC_AddButtonToMenuFooter(class UWG_Menu_Footer_C** MenuFooter, struct FInputActionButtonInfo* InputActionInfo, bool* ClearAllExistingButtons, class UObject** __WorldContext, class UWG_MenuAction_Button_C** Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_UI.LIB_F_UI_C.AddButtonToMenuFooter");

	ULIB_F_UI_C_AddButtonToMenuFooter_Params params;
	params.MenuFooter = MenuFooter;
	params.InputActionInfo = InputActionInfo;
	params.ClearAllExistingButtons = ClearAllExistingButtons;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Button != nullptr)
		*Button = params.Button;
}


// Function LIB_F_UI.LIB_F_UI_C.GetColorFromRarity
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<EItemRarity>*      Rarity                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            LinearColor                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULIB_F_UI_C::STATIC_GetColorFromRarity(TEnumAsByte<EItemRarity>* Rarity, class UObject** __WorldContext, struct FLinearColor* LinearColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_UI.LIB_F_UI_C.GetColorFromRarity");

	ULIB_F_UI_C_GetColorFromRarity_Params params;
	params.Rarity = Rarity;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LinearColor != nullptr)
		*LinearColor = params.LinearColor;
}


// Function LIB_F_UI.LIB_F_UI_C.GetMainColor
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            LinearColor                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULIB_F_UI_C::STATIC_GetMainColor(class UObject** __WorldContext, struct FLinearColor* LinearColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_UI.LIB_F_UI_C.GetMainColor");

	ULIB_F_UI_C_GetMainColor_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LinearColor != nullptr)
		*LinearColor = params.LinearColor;
}


// Function LIB_F_UI.LIB_F_UI_C.GetLeaveStationText
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   TextLeave                      (Parm, OutParm)

void ULIB_F_UI_C::STATIC_GetLeaveStationText(class UObject** __WorldContext, struct FText* TextLeave)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_UI.LIB_F_UI_C.GetLeaveStationText");

	ULIB_F_UI_C_GetLeaveStationText_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TextLeave != nullptr)
		*TextLeave = params.TextLeave;
}


// Function LIB_F_UI.LIB_F_UI_C.IsWidgetOverlapping
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget**                Widget1                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UWidget**                Widget2                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FMargin*                Margin                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULIB_F_UI_C::STATIC_IsWidgetOverlapping(class UWidget** Widget1, class UWidget** Widget2, struct FMargin* Margin, class UObject** __WorldContext, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_UI.LIB_F_UI_C.IsWidgetOverlapping");

	ULIB_F_UI_C_IsWidgetOverlapping_Params params;
	params.Widget1 = Widget1;
	params.Widget2 = Widget2;
	params.Margin = Margin;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function LIB_F_UI.LIB_F_UI_C.GetSubCategoryIcon
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UItem**                  ItemRef                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Small                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULIB_F_UI_C::STATIC_GetSubCategoryIcon(class UItem** ItemRef, bool* Small, class UObject** __WorldContext, class UTexture2D** Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_UI.LIB_F_UI_C.GetSubCategoryIcon");

	ULIB_F_UI_C_GetSubCategoryIcon_Params params;
	params.ItemRef = ItemRef;
	params.Small = Small;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function LIB_F_UI.LIB_F_UI_C.GetIndicatorBorderColor
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<EIndicator>*       Indicator                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Color                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULIB_F_UI_C::STATIC_GetIndicatorBorderColor(TEnumAsByte<EIndicator>* Indicator, class UObject** __WorldContext, struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_UI.LIB_F_UI_C.GetIndicatorBorderColor");

	ULIB_F_UI_C_GetIndicatorBorderColor_Params params;
	params.Indicator = Indicator;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Color != nullptr)
		*Color = params.Color;
}


// Function LIB_F_UI.LIB_F_UI_C.GetIndicatorBackgroundColor
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<EIndicator>*       Indicator                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Color                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULIB_F_UI_C::STATIC_GetIndicatorBackgroundColor(TEnumAsByte<EIndicator>* Indicator, class UObject** __WorldContext, struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_UI.LIB_F_UI_C.GetIndicatorBackgroundColor");

	ULIB_F_UI_C_GetIndicatorBackgroundColor_Params params;
	params.Indicator = Indicator;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Color != nullptr)
		*Color = params.Color;
}


// Function LIB_F_UI.LIB_F_UI_C.GetAttributeIcon
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName*                  AttributeID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              Texture                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULIB_F_UI_C::STATIC_GetAttributeIcon(struct FName* AttributeID, class UObject** __WorldContext, class UTexture2D** Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_UI.LIB_F_UI_C.GetAttributeIcon");

	ULIB_F_UI_C_GetAttributeIcon_Params params;
	params.AttributeID = AttributeID;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Texture != nullptr)
		*Texture = params.Texture;
}


// Function LIB_F_UI.LIB_F_UI_C.GetItemCategoryIcon
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName*                  CategoryID                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  SubCategoryID                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Small                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULIB_F_UI_C::STATIC_GetItemCategoryIcon(struct FName* CategoryID, struct FName* SubCategoryID, bool* Small, class UObject** __WorldContext, class UTexture2D** Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_UI.LIB_F_UI_C.GetItemCategoryIcon");

	ULIB_F_UI_C_GetItemCategoryIcon_Params params;
	params.CategoryID = CategoryID;
	params.SubCategoryID = SubCategoryID;
	params.Small = Small;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function LIB_F_UI.LIB_F_UI_C.GetInventoryCategoryIcon
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<EInventoryCategory>* Category                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Small                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Tiny                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULIB_F_UI_C::STATIC_GetInventoryCategoryIcon(TEnumAsByte<EInventoryCategory>* Category, bool* Small, bool* Tiny, class UObject** __WorldContext, class UTexture2D** Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_UI.LIB_F_UI_C.GetInventoryCategoryIcon");

	ULIB_F_UI_C_GetInventoryCategoryIcon_Params params;
	params.Category = Category;
	params.Small = Small;
	params.Tiny = Tiny;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function LIB_F_UI.LIB_F_UI_C.ShowTutorialMessage
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  TitleText                      (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText*                  ContentText                    (BlueprintVisible, BlueprintReadOnly, Parm)
// float*                         DisplayDuration                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsModal                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         MinWidth                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         MaxWidth                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EHorizontalAlignment>* HorizontalAlignment            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EVerticalAlignment>* VerticalAlignment              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FMargin*                Padding                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptDelegate*        OnClosedEvent                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TMap<class FString, TEnumAsByte<EInputActionName>>* InputActionsReplaceMap         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWG_Tutorial_Message_C*  TutorialWidget                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ULIB_F_UI_C::STATIC_ShowTutorialMessage(struct FText* TitleText, struct FText* ContentText, float* DisplayDuration, bool* IsModal, float* MinWidth, float* MaxWidth, TEnumAsByte<EHorizontalAlignment>* HorizontalAlignment, TEnumAsByte<EVerticalAlignment>* VerticalAlignment, struct FMargin* Padding, struct FScriptDelegate* OnClosedEvent, TMap<class FString, TEnumAsByte<EInputActionName>>* InputActionsReplaceMap, class UObject** __WorldContext, class UWG_Tutorial_Message_C** TutorialWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_UI.LIB_F_UI_C.ShowTutorialMessage");

	ULIB_F_UI_C_ShowTutorialMessage_Params params;
	params.TitleText = TitleText;
	params.ContentText = ContentText;
	params.DisplayDuration = DisplayDuration;
	params.IsModal = IsModal;
	params.MinWidth = MinWidth;
	params.MaxWidth = MaxWidth;
	params.HorizontalAlignment = HorizontalAlignment;
	params.VerticalAlignment = VerticalAlignment;
	params.Padding = Padding;
	params.OnClosedEvent = OnClosedEvent;
	params.InputActionsReplaceMap = InputActionsReplaceMap;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TutorialWidget != nullptr)
		*TutorialWidget = params.TutorialWidget;
}


// Function LIB_F_UI.LIB_F_UI_C.GetFactionName
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<EFactions>*        Faction                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   FactionName                    (Parm, OutParm)

void ULIB_F_UI_C::STATIC_GetFactionName(TEnumAsByte<EFactions>* Faction, class UObject** __WorldContext, struct FText* FactionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_UI.LIB_F_UI_C.GetFactionName");

	ULIB_F_UI_C_GetFactionName_Params params;
	params.Faction = Faction;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FactionName != nullptr)
		*FactionName = params.FactionName;
}


// Function LIB_F_UI.LIB_F_UI_C.ScreenFadeOutWithEvent
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor*           FadeColor                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptDelegate*        OnFadedOut                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULIB_F_UI_C::STATIC_ScreenFadeOutWithEvent(struct FLinearColor* FadeColor, float* Duration, struct FScriptDelegate* OnFadedOut, class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_UI.LIB_F_UI_C.ScreenFadeOutWithEvent");

	ULIB_F_UI_C_ScreenFadeOutWithEvent_Params params;
	params.FadeColor = FadeColor;
	params.Duration = Duration;
	params.OnFadedOut = OnFadedOut;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LIB_F_UI.LIB_F_UI_C.ScreenFadeOut
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor*           FadeColor                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULIB_F_UI_C::STATIC_ScreenFadeOut(struct FLinearColor* FadeColor, float* Duration, class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_UI.LIB_F_UI_C.ScreenFadeOut");

	ULIB_F_UI_C_ScreenFadeOut_Params params;
	params.FadeColor = FadeColor;
	params.Duration = Duration;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LIB_F_UI.LIB_F_UI_C.ScreenFadeInWithEvent
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor*           FadeColor                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptDelegate*        OnFadedIn                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULIB_F_UI_C::STATIC_ScreenFadeInWithEvent(struct FLinearColor* FadeColor, float* Duration, struct FScriptDelegate* OnFadedIn, class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_UI.LIB_F_UI_C.ScreenFadeInWithEvent");

	ULIB_F_UI_C_ScreenFadeInWithEvent_Params params;
	params.FadeColor = FadeColor;
	params.Duration = Duration;
	params.OnFadedIn = OnFadedIn;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LIB_F_UI.LIB_F_UI_C.ScreenFadeIn
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor*           FadeColor                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULIB_F_UI_C::STATIC_ScreenFadeIn(struct FLinearColor* FadeColor, float* Duration, class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_UI.LIB_F_UI_C.ScreenFadeIn");

	ULIB_F_UI_C_ScreenFadeIn_Params params;
	params.FadeColor = FadeColor;
	params.Duration = Duration;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LIB_F_UI.LIB_F_UI_C.GetIndicatorIcon
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<EIndicator>*       Indicator                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              Icon                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULIB_F_UI_C::STATIC_GetIndicatorIcon(TEnumAsByte<EIndicator>* Indicator, class UObject** __WorldContext, class UTexture2D** Icon)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_UI.LIB_F_UI_C.GetIndicatorIcon");

	ULIB_F_UI_C_GetIndicatorIcon_Params params;
	params.Indicator = Indicator;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Icon != nullptr)
		*Icon = params.Icon;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

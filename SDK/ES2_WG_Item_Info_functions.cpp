// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_Item_Info_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WG_Item_Info.WG_Item_Info_C.CollapseAllAttributeWidgets
// (Public, BlueprintCallable, BlueprintEvent)

void UWG_Item_Info_C::CollapseAllAttributeWidgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Item_Info.WG_Item_Info_C.CollapseAllAttributeWidgets");

	UWG_Item_Info_C_CollapseAllAttributeWidgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Item_Info.WG_Item_Info_C.CreateOrGetAttributeWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UItemAttribute**         ItemAttributeRef               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EItemAttributeStyle>* Style                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsMandatory                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWG_ItemAttribute_C*     AttrWidget                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           NewlyCreatedWidget             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWG_Item_Info_C::CreateOrGetAttributeWidget(class UItemAttribute** ItemAttributeRef, TEnumAsByte<EItemAttributeStyle>* Style, bool* IsMandatory, int* Index, class UWG_ItemAttribute_C** AttrWidget, bool* NewlyCreatedWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Item_Info.WG_Item_Info_C.CreateOrGetAttributeWidget");

	UWG_Item_Info_C_CreateOrGetAttributeWidget_Params params;
	params.ItemAttributeRef = ItemAttributeRef;
	params.Style = Style;
	params.IsMandatory = IsMandatory;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AttrWidget != nullptr)
		*AttrWidget = params.AttrWidget;
	if (NewlyCreatedWidget != nullptr)
		*NewlyCreatedWidget = params.NewlyCreatedWidget;
}


// Function WG_Item_Info.WG_Item_Info_C.IsNotFadingIn
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWG_Item_Info_C::IsNotFadingIn(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Item_Info.WG_Item_Info_C.IsNotFadingIn");

	UWG_Item_Info_C_IsNotFadingIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function WG_Item_Info.WG_Item_Info_C.SetShipNameInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  Shipname                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UWG_Item_Info_C::SetShipNameInfo(struct FText* Shipname)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Item_Info.WG_Item_Info_C.SetShipNameInfo");

	UWG_Item_Info_C_SetShipNameInfo_Params params;
	params.Shipname = Shipname;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Item_Info.WG_Item_Info_C.SetCompareSlotIndicatorColors
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_ShipInventory_C**    ShipInventory                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TEnumAsByte<EInventoryCategory>* Category                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Item_Info_C::SetCompareSlotIndicatorColors(class UWG_ShipInventory_C** ShipInventory, TEnumAsByte<EInventoryCategory>* Category)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Item_Info.WG_Item_Info_C.SetCompareSlotIndicatorColors");

	UWG_Item_Info_C_SetCompareSlotIndicatorColors_Params params;
	params.ShipInventory = ShipInventory;
	params.Category = Category;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Item_Info.WG_Item_Info_C.IsCredits
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWG_Item_Info_C::IsCredits(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Item_Info.WG_Item_Info_C.IsCredits");

	UWG_Item_Info_C_IsCredits_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function WG_Item_Info.WG_Item_Info_C.RemoveCompare
// (Public, BlueprintCallable, BlueprintEvent)

void UWG_Item_Info_C::RemoveCompare()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Item_Info.WG_Item_Info_C.RemoveCompare");

	UWG_Item_Info_C_RemoveCompare_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Item_Info.WG_Item_Info_C.SetDetailVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Show                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Item_Info_C::SetDetailVisibility(bool* Show)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Item_Info.WG_Item_Info_C.SetDetailVisibility");

	UWG_Item_Info_C_SetDetailVisibility_Params params;
	params.Show = Show;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Item_Info.WG_Item_Info_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWG_Item_Info_C::OnMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Item_Info.WG_Item_Info_C.OnMouseButtonDown");

	UWG_Item_Info_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_Item_Info.WG_Item_Info_C.On_Border_BG_MouseButtonUp_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWG_Item_Info_C::On_Border_BG_MouseButtonUp_1(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Item_Info.WG_Item_Info_C.On_Border_BG_MouseButtonUp_1");

	UWG_Item_Info_C_On_Border_BG_MouseButtonUp_1_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_Item_Info.WG_Item_Info_C.SetSelected
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsSelected                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Changed                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWG_Item_Info_C::SetSelected(bool* IsSelected, bool* Changed)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Item_Info.WG_Item_Info_C.SetSelected");

	UWG_Item_Info_C_SetSelected_Params params;
	params.IsSelected = IsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Changed != nullptr)
		*Changed = params.Changed;
}


// Function WG_Item_Info.WG_Item_Info_C.SetCompareItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UItem**                  CompareItem                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Item_Info_C::SetCompareItem(class UItem** CompareItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Item_Info.WG_Item_Info_C.SetCompareItem");

	UWG_Item_Info_C_SetCompareItem_Params params;
	params.CompareItem = CompareItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Item_Info.WG_Item_Info_C.ShouldShowAttribute
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UItemAttribute**         Attribute                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWG_Item_Info_C::ShouldShowAttribute(class UItemAttribute** Attribute, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Item_Info.WG_Item_Info_C.ShouldShowAttribute");

	UWG_Item_Info_C_ShouldShowAttribute_Params params;
	params.Attribute = Attribute;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function WG_Item_Info.WG_Item_Info_C.HasMissingAttribute
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UItemAttribute**         ItemAttributeInstance          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWG_Item_Info_C::HasMissingAttribute(class UItemAttribute** ItemAttributeInstance, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Item_Info.WG_Item_Info_C.HasMissingAttribute");

	UWG_Item_Info_C_HasMissingAttribute_Params params;
	params.ItemAttributeInstance = ItemAttributeInstance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function WG_Item_Info.WG_Item_Info_C.OnLoaded_ADE4D322425B441D2D2731A6F6F714A9
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject**                Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Item_Info_C::OnLoaded_ADE4D322425B441D2D2731A6F6F714A9(class UObject** Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Item_Info.WG_Item_Info_C.OnLoaded_ADE4D322425B441D2D2731A6F6F714A9");

	UWG_Item_Info_C_OnLoaded_ADE4D322425B441D2D2731A6F6F714A9_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Item_Info.WG_Item_Info_C.Init
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UItem**                  ItemInstance                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Item_Info_C::Init(class UItem** ItemInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Item_Info.WG_Item_Info_C.Init");

	UWG_Item_Info_C_Init_Params params;
	params.ItemInstance = ItemInstance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Item_Info.WG_Item_Info_C.AddMissingAttribute
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UItemAttribute**         AttributeInstance              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Item_Info_C::AddMissingAttribute(class UItemAttribute** AttributeInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Item_Info.WG_Item_Info_C.AddMissingAttribute");

	UWG_Item_Info_C_AddMissingAttribute_Params params;
	params.AttributeInstance = AttributeInstance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Item_Info.WG_Item_Info_C.ClearMissingAttributes
// (BlueprintCallable, BlueprintEvent)

void UWG_Item_Info_C::ClearMissingAttributes()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Item_Info.WG_Item_Info_C.ClearMissingAttributes");

	UWG_Item_Info_C_ClearMissingAttributes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Item_Info.WG_Item_Info_C.OnCompareItemChanged_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_Inventory_Slot_C**   CompareItemSlot                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_Item_Info_C::OnCompareItemChanged_Event(class UWG_Inventory_Slot_C** CompareItemSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Item_Info.WG_Item_Info_C.OnCompareItemChanged_Event");

	UWG_Item_Info_C_OnCompareItemChanged_Event_Params params;
	params.CompareItemSlot = CompareItemSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Item_Info.WG_Item_Info_C.SetCompareInventory
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_Inventory_C**        InventoryWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_Item_Info_C::SetCompareInventory(class UWG_Inventory_C** InventoryWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Item_Info.WG_Item_Info_C.SetCompareInventory");

	UWG_Item_Info_C_SetCompareInventory_Params params;
	params.InventoryWidget = InventoryWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Item_Info.WG_Item_Info_C.SetDebugPerks
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FName>*          DebugPerks                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UWG_Item_Info_C::SetDebugPerks(TArray<struct FName>* DebugPerks)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Item_Info.WG_Item_Info_C.SetDebugPerks");

	UWG_Item_Info_C_SetDebugPerks_Params params;
	params.DebugPerks = DebugPerks;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Item_Info.WG_Item_Info_C.UpdatePriceText
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           NewCredits                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           CreditsDelta                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Item_Info_C::UpdatePriceText(int* NewCredits, int* CreditsDelta)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Item_Info.WG_Item_Info_C.UpdatePriceText");

	UWG_Item_Info_C_UpdatePriceText_Params params;
	params.NewCredits = NewCredits;
	params.CreditsDelta = CreditsDelta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Item_Info.WG_Item_Info_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Item_Info_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Item_Info.WG_Item_Info_C.Tick");

	UWG_Item_Info_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Item_Info.WG_Item_Info_C.ShowLevel
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Show                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Item_Info_C::ShowLevel(bool* Show)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Item_Info.WG_Item_Info_C.ShowLevel");

	UWG_Item_Info_C_ShowLevel_Params params;
	params.Show = Show;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Item_Info.WG_Item_Info_C.AdjustViewportPosition
// (BlueprintCallable, BlueprintEvent)

void UWG_Item_Info_C::AdjustViewportPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Item_Info.WG_Item_Info_C.AdjustViewportPosition");

	UWG_Item_Info_C_AdjustViewportPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Item_Info.WG_Item_Info_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Item_Info_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Item_Info.WG_Item_Info_C.PreConstruct");

	UWG_Item_Info_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Item_Info.WG_Item_Info_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWG_Item_Info_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Item_Info.WG_Item_Info_C.Construct");

	UWG_Item_Info_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Item_Info.WG_Item_Info_C.StartFadeIn
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Animate                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Item_Info_C::StartFadeIn(bool* Animate)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Item_Info.WG_Item_Info_C.StartFadeIn");

	UWG_Item_Info_C_StartFadeIn_Params params;
	params.Animate = Animate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Item_Info.WG_Item_Info_C.StopFadeIn
// (BlueprintCallable, BlueprintEvent)

void UWG_Item_Info_C::StopFadeIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Item_Info.WG_Item_Info_C.StopFadeIn");

	UWG_Item_Info_C_StopFadeIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Item_Info.WG_Item_Info_C.ExecuteUbergraph_WG_Item_Info
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Item_Info_C::ExecuteUbergraph_WG_Item_Info(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Item_Info.WG_Item_Info_C.ExecuteUbergraph_WG_Item_Info");

	UWG_Item_Info_C_ExecuteUbergraph_WG_Item_Info_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Item_Info.WG_Item_Info_C.OnSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_Item_Info_C**        ItemInfo                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_Item_Info_C::OnSelected__DelegateSignature(class UWG_Item_Info_C** ItemInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Item_Info.WG_Item_Info_C.OnSelected__DelegateSignature");

	UWG_Item_Info_C_OnSelected__DelegateSignature_Params params;
	params.ItemInfo = ItemInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

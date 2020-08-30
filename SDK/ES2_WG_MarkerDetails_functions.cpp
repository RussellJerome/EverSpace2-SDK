// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_MarkerDetails_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WG_MarkerDetails.WG_MarkerDetails_C.SetName
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  Name                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UWG_MarkerDetails_C::SetName(struct FText* Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_MarkerDetails.WG_MarkerDetails_C.SetName");

	UWG_MarkerDetails_C_SetName_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_MarkerDetails.WG_MarkerDetails_C.SetDistance
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  DistanceText                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UWG_MarkerDetails_C::SetDistance(struct FText* DistanceText)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_MarkerDetails.WG_MarkerDetails_C.SetDistance");

	UWG_MarkerDetails_C_SetDistance_Params params;
	params.DistanceText = DistanceText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_MarkerDetails.WG_MarkerDetails_C.SetTypeIcon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject**                Texture                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_MarkerDetails_C::SetTypeIcon(class UObject** Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_MarkerDetails.WG_MarkerDetails_C.SetTypeIcon");

	UWG_MarkerDetails_C_SetTypeIcon_Params params;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_MarkerDetails.WG_MarkerDetails_C.SetColorByRelationDeadlinessOrRarity
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMarkerRelation>*  Relation                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bDeadly                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EItemRarity>*      ItemRarity                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_MarkerDetails_C::SetColorByRelationDeadlinessOrRarity(TEnumAsByte<EMarkerRelation>* Relation, bool* bDeadly, TEnumAsByte<EItemRarity>* ItemRarity)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_MarkerDetails.WG_MarkerDetails_C.SetColorByRelationDeadlinessOrRarity");

	UWG_MarkerDetails_C_SetColorByRelationDeadlinessOrRarity_Params params;
	params.Relation = Relation;
	params.bDeadly = bDeadly;
	params.ItemRarity = ItemRarity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_MarkerDetails.WG_MarkerDetails_C.SetPrefixText
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  PrefixText                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UWG_MarkerDetails_C::SetPrefixText(struct FText* PrefixText)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_MarkerDetails.WG_MarkerDetails_C.SetPrefixText");

	UWG_MarkerDetails_C_SetPrefixText_Params params;
	params.PrefixText = PrefixText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_MarkerDetails.WG_MarkerDetails_C.SetLevel
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Level                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_MarkerDetails_C::SetLevel(int* Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_MarkerDetails.WG_MarkerDetails_C.SetLevel");

	UWG_MarkerDetails_C_SetLevel_Params params;
	params.Level = Level;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_MarkerDetails.WG_MarkerDetails_C.SetIndicators
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<TEnumAsByte<EIndicator>, bool>* Indicator                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UWG_MarkerDetails_C::SetIndicators(TMap<TEnumAsByte<EIndicator>, bool>* Indicator)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_MarkerDetails.WG_MarkerDetails_C.SetIndicators");

	UWG_MarkerDetails_C_SetIndicators_Params params;
	params.Indicator = Indicator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_MarkerDetails.WG_MarkerDetails_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWG_MarkerDetails_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_MarkerDetails.WG_MarkerDetails_C.Construct");

	UWG_MarkerDetails_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_MarkerDetails.WG_MarkerDetails_C.SetLocked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Locked                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_MarkerDetails_C::SetLocked(bool* Locked)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_MarkerDetails.WG_MarkerDetails_C.SetLocked");

	UWG_MarkerDetails_C_SetLocked_Params params;
	params.Locked = Locked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_MarkerDetails.WG_MarkerDetails_C.AddCondition
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_Condition_Base_C**   ConditionRef                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_MarkerDetails_C::AddCondition(class UBP_Condition_Base_C** ConditionRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_MarkerDetails.WG_MarkerDetails_C.AddCondition");

	UWG_MarkerDetails_C_AddCondition_Params params;
	params.ConditionRef = ConditionRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_MarkerDetails.WG_MarkerDetails_C.SetInteractWidget
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget**            Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_MarkerDetails_C::SetInteractWidget(class UUserWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_MarkerDetails.WG_MarkerDetails_C.SetInteractWidget");

	UWG_MarkerDetails_C_SetInteractWidget_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_MarkerDetails.WG_MarkerDetails_C.RemoveInteractWidget
// (BlueprintCallable, BlueprintEvent)

void UWG_MarkerDetails_C::RemoveInteractWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_MarkerDetails.WG_MarkerDetails_C.RemoveInteractWidget");

	UWG_MarkerDetails_C_RemoveInteractWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_MarkerDetails.WG_MarkerDetails_C.UpdateTokenSpacerVisibility
// (BlueprintCallable, BlueprintEvent)

void UWG_MarkerDetails_C::UpdateTokenSpacerVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_MarkerDetails.WG_MarkerDetails_C.UpdateTokenSpacerVisibility");

	UWG_MarkerDetails_C_UpdateTokenSpacerVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_MarkerDetails.WG_MarkerDetails_C.RemovedConditionWidget
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_Condition_C**        Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_MarkerDetails_C::RemovedConditionWidget(class UWG_Condition_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_MarkerDetails.WG_MarkerDetails_C.RemovedConditionWidget");

	UWG_MarkerDetails_C_RemovedConditionWidget_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_MarkerDetails.WG_MarkerDetails_C.TokenCountChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           NewTokenCount                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           OldTokenCount                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBP_Condition_Base_C**   ConditionRef                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_MarkerDetails_C::TokenCountChanged(int* NewTokenCount, int* OldTokenCount, class UBP_Condition_Base_C** ConditionRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_MarkerDetails.WG_MarkerDetails_C.TokenCountChanged");

	UWG_MarkerDetails_C_TokenCountChanged_Params params;
	params.NewTokenCount = NewTokenCount;
	params.OldTokenCount = OldTokenCount;
	params.ConditionRef = ConditionRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_MarkerDetails.WG_MarkerDetails_C.ExecuteUbergraph_WG_MarkerDetails
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_MarkerDetails_C::ExecuteUbergraph_WG_MarkerDetails(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_MarkerDetails.WG_MarkerDetails_C.ExecuteUbergraph_WG_MarkerDetails");

	UWG_MarkerDetails_C_ExecuteUbergraph_WG_MarkerDetails_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

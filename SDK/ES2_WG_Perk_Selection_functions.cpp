// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_Perk_Selection_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WG_Perk_Selection.WG_Perk_Selection_C.GetSelectedPerks
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FName>           PerkIDs                        (Parm, OutParm, ZeroConstructor)

void UWG_Perk_Selection_C::GetSelectedPerks(TArray<struct FName>* PerkIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Perk_Selection.WG_Perk_Selection_C.GetSelectedPerks");

	UWG_Perk_Selection_C_GetSelectedPerks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PerkIDs != nullptr)
		*PerkIDs = params.PerkIDs;
}


// Function WG_Perk_Selection.WG_Perk_Selection_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWG_Perk_Selection_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Perk_Selection.WG_Perk_Selection_C.Construct");

	UWG_Perk_Selection_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Perk_Selection.WG_Perk_Selection_C.OnButtonClicked_Cancel
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInputActionButtonInfo* ActionInfo                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UWG_Perk_Selection_C::OnButtonClicked_Cancel(struct FInputActionButtonInfo* ActionInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Perk_Selection.WG_Perk_Selection_C.OnButtonClicked_Cancel");

	UWG_Perk_Selection_C_OnButtonClicked_Cancel_Params params;
	params.ActionInfo = ActionInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Perk_Selection.WG_Perk_Selection_C.ExecuteUbergraph_WG_Perk_Selection
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Perk_Selection_C::ExecuteUbergraph_WG_Perk_Selection(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Perk_Selection.WG_Perk_Selection_C.ExecuteUbergraph_WG_Perk_Selection");

	UWG_Perk_Selection_C_ExecuteUbergraph_WG_Perk_Selection_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Perk_Selection.WG_Perk_Selection_C.OnConfirm__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           DeviceSlotIndex                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UItem**                  NewDeviceItem                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Perk_Selection_C::OnConfirm__DelegateSignature(int* DeviceSlotIndex, class UItem** NewDeviceItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Perk_Selection.WG_Perk_Selection_C.OnConfirm__DelegateSignature");

	UWG_Perk_Selection_C_OnConfirm__DelegateSignature_Params params;
	params.DeviceSlotIndex = DeviceSlotIndex;
	params.NewDeviceItem = NewDeviceItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

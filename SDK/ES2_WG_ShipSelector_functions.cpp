// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_ShipSelector_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WG_ShipSelector.WG_ShipSelector_C.HandleKeyDown
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           bHandled                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWG_ShipSelector_C::HandleKeyDown(struct FKeyEvent* InKeyEvent, bool* bHandled)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ShipSelector.WG_ShipSelector_C.HandleKeyDown");

	UWG_ShipSelector_C_HandleKeyDown_Params params;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bHandled != nullptr)
		*bHandled = params.bHandled;
}


// Function WG_ShipSelector.WG_ShipSelector_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWG_ShipSelector_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ShipSelector.WG_ShipSelector_C.Construct");

	UWG_ShipSelector_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_ShipSelector.WG_ShipSelector_C.SelectPreviousShip
// (BlueprintCallable, BlueprintEvent)

void UWG_ShipSelector_C::SelectPreviousShip()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ShipSelector.WG_ShipSelector_C.SelectPreviousShip");

	UWG_ShipSelector_C_SelectPreviousShip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_ShipSelector.WG_ShipSelector_C.SelectNextShip
// (BlueprintCallable, BlueprintEvent)

void UWG_ShipSelector_C::SelectNextShip()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ShipSelector.WG_ShipSelector_C.SelectNextShip");

	UWG_ShipSelector_C_SelectNextShip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_ShipSelector.WG_ShipSelector_C.UpdateShipInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FShipData*              ShipData                       (BlueprintVisible, BlueprintReadOnly, Parm)
// int*                           ShipIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           NumShips                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_ShipSelector_C::UpdateShipInfo(struct FShipData* ShipData, int* ShipIndex, int* NumShips)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ShipSelector.WG_ShipSelector_C.UpdateShipInfo");

	UWG_ShipSelector_C_UpdateShipInfo_Params params;
	params.ShipData = ShipData;
	params.ShipIndex = ShipIndex;
	params.NumShips = NumShips;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_ShipSelector.WG_ShipSelector_C.ExecuteUbergraph_WG_ShipSelector
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_ShipSelector_C::ExecuteUbergraph_WG_ShipSelector(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ShipSelector.WG_ShipSelector_C.ExecuteUbergraph_WG_ShipSelector");

	UWG_ShipSelector_C_ExecuteUbergraph_WG_ShipSelector_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_ShipSelector.WG_ShipSelector_C.OnPreviousShip__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWG_ShipSelector_C::OnPreviousShip__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ShipSelector.WG_ShipSelector_C.OnPreviousShip__DelegateSignature");

	UWG_ShipSelector_C_OnPreviousShip__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_ShipSelector.WG_ShipSelector_C.OnNextShip__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWG_ShipSelector_C::OnNextShip__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ShipSelector.WG_ShipSelector_C.OnNextShip__DelegateSignature");

	UWG_ShipSelector_C_OnNextShip__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

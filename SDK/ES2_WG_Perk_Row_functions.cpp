// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_Perk_Row_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WG_Perk_Row.WG_Perk_Row_C.GetSelectedPerkID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName                   PerkID                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWG_Perk_Row_C::GetSelectedPerkID(struct FName* PerkID)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Perk_Row.WG_Perk_Row_C.GetSelectedPerkID");

	UWG_Perk_Row_C_GetSelectedPerkID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PerkID != nullptr)
		*PerkID = params.PerkID;
}


// Function WG_Perk_Row.WG_Perk_Row_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWG_Perk_Row_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Perk_Row.WG_Perk_Row_C.Construct");

	UWG_Perk_Row_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Perk_Row.WG_Perk_Row_C.OnSelected_Perk
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_Perk_C**             WG_Perk                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_Perk_Row_C::OnSelected_Perk(class UWG_Perk_C** WG_Perk)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Perk_Row.WG_Perk_Row_C.OnSelected_Perk");

	UWG_Perk_Row_C_OnSelected_Perk_Params params;
	params.WG_Perk = WG_Perk;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Perk_Row.WG_Perk_Row_C.ExecuteUbergraph_WG_Perk_Row
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Perk_Row_C::ExecuteUbergraph_WG_Perk_Row(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Perk_Row.WG_Perk_Row_C.ExecuteUbergraph_WG_Perk_Row");

	UWG_Perk_Row_C_ExecuteUbergraph_WG_Perk_Row_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

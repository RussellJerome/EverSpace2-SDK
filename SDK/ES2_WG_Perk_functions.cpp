// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_Perk_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WG_Perk.WG_Perk_C.SetSelected
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsSelected                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Changed                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWG_Perk_C::SetSelected(bool* IsSelected, bool* Changed)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Perk.WG_Perk_C.SetSelected");

	UWG_Perk_C_SetSelected_Params params;
	params.IsSelected = IsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Changed != nullptr)
		*Changed = params.Changed;
}


// Function WG_Perk.WG_Perk_C.OnMouseButtonUp_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWG_Perk_C::OnMouseButtonUp_1(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Perk.WG_Perk_C.OnMouseButtonUp_1");

	UWG_Perk_C_OnMouseButtonUp_1_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_Perk.WG_Perk_C.OnLoaded_D0C7E8BF42F5972100F9DDBFAB32F3FE
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject**                Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Perk_C::OnLoaded_D0C7E8BF42F5972100F9DDBFAB32F3FE(class UObject** Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Perk.WG_Perk_C.OnLoaded_D0C7E8BF42F5972100F9DDBFAB32F3FE");

	UWG_Perk_C_OnLoaded_D0C7E8BF42F5972100F9DDBFAB32F3FE_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Perk.WG_Perk_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWG_Perk_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Perk.WG_Perk_C.Construct");

	UWG_Perk_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Perk.WG_Perk_C.ExecuteUbergraph_WG_Perk
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Perk_C::ExecuteUbergraph_WG_Perk(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Perk.WG_Perk_C.ExecuteUbergraph_WG_Perk");

	UWG_Perk_C_ExecuteUbergraph_WG_Perk_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Perk.WG_Perk_C.OnSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_Perk_C**             WG_Perk                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_Perk_C::OnSelected__DelegateSignature(class UWG_Perk_C** WG_Perk)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Perk.WG_Perk_C.OnSelected__DelegateSignature");

	UWG_Perk_C_OnSelected__DelegateSignature_Params params;
	params.WG_Perk = WG_Perk;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

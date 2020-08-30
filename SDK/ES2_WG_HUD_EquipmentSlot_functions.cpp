// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_HUD_EquipmentSlot_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WG_HUD_EquipmentSlot.WG_HUD_EquipmentSlot_C.GetAmount
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWG_HUD_EquipmentSlot_C::GetAmount()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_HUD_EquipmentSlot.WG_HUD_EquipmentSlot_C.GetAmount");

	UWG_HUD_EquipmentSlot_C_GetAmount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_HUD_EquipmentSlot.WG_HUD_EquipmentSlot_C.OnLoaded_85794C7449890532D9C75FA735F99511
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject**                Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_HUD_EquipmentSlot_C::OnLoaded_85794C7449890532D9C75FA735F99511(class UObject** Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_HUD_EquipmentSlot.WG_HUD_EquipmentSlot_C.OnLoaded_85794C7449890532D9C75FA735F99511");

	UWG_HUD_EquipmentSlot_C_OnLoaded_85794C7449890532D9C75FA735F99511_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_HUD_EquipmentSlot.WG_HUD_EquipmentSlot_C.OnLoaded_E58A64B94654CBD39DFB8C907204AD3C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject**                Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_HUD_EquipmentSlot_C::OnLoaded_E58A64B94654CBD39DFB8C907204AD3C(class UObject** Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_HUD_EquipmentSlot.WG_HUD_EquipmentSlot_C.OnLoaded_E58A64B94654CBD39DFB8C907204AD3C");

	UWG_HUD_EquipmentSlot_C_OnLoaded_E58A64B94654CBD39DFB8C907204AD3C_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_HUD_EquipmentSlot.WG_HUD_EquipmentSlot_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_HUD_EquipmentSlot_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_HUD_EquipmentSlot.WG_HUD_EquipmentSlot_C.PreConstruct");

	UWG_HUD_EquipmentSlot_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_HUD_EquipmentSlot.WG_HUD_EquipmentSlot_C.SetEquipment
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UItem**                  ItemRef                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AEquipmentBase**         EquipmentRef                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           SlotIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          ExcessSlot                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_HUD_EquipmentSlot_C::SetEquipment(class UItem** ItemRef, class AEquipmentBase** EquipmentRef, int* SlotIndex, bool* ExcessSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_HUD_EquipmentSlot.WG_HUD_EquipmentSlot_C.SetEquipment");

	UWG_HUD_EquipmentSlot_C_SetEquipment_Params params;
	params.ItemRef = ItemRef;
	params.EquipmentRef = EquipmentRef;
	params.SlotIndex = SlotIndex;
	params.ExcessSlot = ExcessSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_HUD_EquipmentSlot.WG_HUD_EquipmentSlot_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_HUD_EquipmentSlot_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_HUD_EquipmentSlot.WG_HUD_EquipmentSlot_C.Tick");

	UWG_HUD_EquipmentSlot_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_HUD_EquipmentSlot.WG_HUD_EquipmentSlot_C.InitWidgets
// (BlueprintCallable, BlueprintEvent)

void UWG_HUD_EquipmentSlot_C::InitWidgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_HUD_EquipmentSlot.WG_HUD_EquipmentSlot_C.InitWidgets");

	UWG_HUD_EquipmentSlot_C_InitWidgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_HUD_EquipmentSlot.WG_HUD_EquipmentSlot_C.ReInitAfterGamepadModeChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bNewGamepadMode                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_HUD_EquipmentSlot_C::ReInitAfterGamepadModeChange(bool* bNewGamepadMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_HUD_EquipmentSlot.WG_HUD_EquipmentSlot_C.ReInitAfterGamepadModeChange");

	UWG_HUD_EquipmentSlot_C_ReInitAfterGamepadModeChange_Params params;
	params.bNewGamepadMode = bNewGamepadMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_HUD_EquipmentSlot.WG_HUD_EquipmentSlot_C.ExecuteUbergraph_WG_HUD_EquipmentSlot
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_HUD_EquipmentSlot_C::ExecuteUbergraph_WG_HUD_EquipmentSlot(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_HUD_EquipmentSlot.WG_HUD_EquipmentSlot_C.ExecuteUbergraph_WG_HUD_EquipmentSlot");

	UWG_HUD_EquipmentSlot_C_ExecuteUbergraph_WG_HUD_EquipmentSlot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_Interact_Pickup_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WG_Interact_Pickup.WG_Interact_Pickup_C.TickInteractionWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Interact_Pickup_C::TickInteractionWidget(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Interact_Pickup.WG_Interact_Pickup_C.TickInteractionWidget");

	UWG_Interact_Pickup_C_TickInteractionWidget_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Interact_Pickup.WG_Interact_Pickup_C.OnInitWithInteractComponent
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInteractComponent**     NewInteractComponent           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 NewActor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Interact_Pickup_C::OnInitWithInteractComponent(class UInteractComponent** NewInteractComponent, class AActor** NewActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Interact_Pickup.WG_Interact_Pickup_C.OnInitWithInteractComponent");

	UWG_Interact_Pickup_C_OnInitWithInteractComponent_Params params;
	params.NewInteractComponent = NewInteractComponent;
	params.NewActor = NewActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Interact_Pickup.WG_Interact_Pickup_C.OnWeaponChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FWeaponInfo*            WeaponInfo                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UWG_Interact_Pickup_C::OnWeaponChanged(struct FWeaponInfo* WeaponInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Interact_Pickup.WG_Interact_Pickup_C.OnWeaponChanged");

	UWG_Interact_Pickup_C_OnWeaponChanged_Params params;
	params.WeaponInfo = WeaponInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Interact_Pickup.WG_Interact_Pickup_C.ExecuteUbergraph_WG_Interact_Pickup
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Interact_Pickup_C::ExecuteUbergraph_WG_Interact_Pickup(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Interact_Pickup.WG_Interact_Pickup_C.ExecuteUbergraph_WG_Interact_Pickup");

	UWG_Interact_Pickup_C_ExecuteUbergraph_WG_Interact_Pickup_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

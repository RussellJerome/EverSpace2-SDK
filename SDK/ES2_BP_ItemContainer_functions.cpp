// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_ItemContainer_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ItemContainer.BP_ItemContainer_C.OpenContainerAndDropItsLoot
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_ItemContainer_C::OpenContainerAndDropItsLoot()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemContainer.BP_ItemContainer_C.OpenContainerAndDropItsLoot");

	ABP_ItemContainer_C_OpenContainerAndDropItsLoot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ItemContainer.BP_ItemContainer_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ItemContainer_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemContainer.BP_ItemContainer_C.UserConstructionScript");

	ABP_ItemContainer_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ItemContainer.BP_ItemContainer_C.OnContainerOpened
// (Event, Public, BlueprintEvent)

void ABP_ItemContainer_C::OnContainerOpened()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemContainer.BP_ItemContainer_C.OnContainerOpened");

	ABP_ItemContainer_C_OnContainerOpened_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ItemContainer.BP_ItemContainer_C.ReceiveAnyDamage
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// float*                         Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType**            DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController**            InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ItemContainer_C::ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemContainer.BP_ItemContainer_C.ReceiveAnyDamage");

	ABP_ItemContainer_C_ReceiveAnyDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ItemContainer.BP_ItemContainer_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_ItemContainer_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemContainer.BP_ItemContainer_C.ReceiveBeginPlay");

	ABP_ItemContainer_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ItemContainer.BP_ItemContainer_C.SetScreenName
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  ScreenName                     (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_ItemContainer_C::SetScreenName(struct FText* ScreenName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemContainer.BP_ItemContainer_C.SetScreenName");

	ABP_ItemContainer_C_SetScreenName_Params params;
	params.ScreenName = ScreenName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ItemContainer.BP_ItemContainer_C.OnInteractHoldProgress_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInteractComponent**     InteractComponent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Progress                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ItemContainer_C::OnInteractHoldProgress_Event_1(class UInteractComponent** InteractComponent, class AActor** Actor, float* Progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemContainer.BP_ItemContainer_C.OnInteractHoldProgress_Event_1");

	ABP_ItemContainer_C_OnInteractHoldProgress_Event_1_Params params;
	params.InteractComponent = InteractComponent;
	params.Actor = Actor;
	params.Progress = Progress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ItemContainer.BP_ItemContainer_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ItemContainer_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemContainer.BP_ItemContainer_C.ReceiveTick");

	ABP_ItemContainer_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ItemContainer.BP_ItemContainer_C.OnClosedLoot
// (BlueprintCallable, BlueprintEvent)

void ABP_ItemContainer_C::OnClosedLoot()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemContainer.BP_ItemContainer_C.OnClosedLoot");

	ABP_ItemContainer_C_OnClosedLoot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ItemContainer.BP_ItemContainer_C.CustomEvent_2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMenuTab>*         Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ItemContainer_C::CustomEvent_2(TEnumAsByte<EMenuTab>* Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemContainer.BP_ItemContainer_C.CustomEvent_2");

	ABP_ItemContainer_C_CustomEvent_2_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ItemContainer.BP_ItemContainer_C.ExecuteUbergraph_BP_ItemContainer
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ItemContainer_C::ExecuteUbergraph_BP_ItemContainer(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemContainer.BP_ItemContainer_C.ExecuteUbergraph_BP_ItemContainer");

	ABP_ItemContainer_C_ExecuteUbergraph_BP_ItemContainer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ItemContainer.BP_ItemContainer_C.OnClosedContainer__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_ItemContainer_C**    ItemContainer                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ItemContainer_C::OnClosedContainer__DelegateSignature(class ABP_ItemContainer_C** ItemContainer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemContainer.BP_ItemContainer_C.OnClosedContainer__DelegateSignature");

	ABP_ItemContainer_C_OnClosedContainer__DelegateSignature_Params params;
	params.ItemContainer = ItemContainer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ItemContainer.BP_ItemContainer_C.OnOpenedContainer__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AItemContainer**         ItemContainer                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ItemContainer_C::OnOpenedContainer__DelegateSignature(class AItemContainer** ItemContainer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemContainer.BP_ItemContainer_C.OnOpenedContainer__DelegateSignature");

	ABP_ItemContainer_C_OnOpenedContainer__DelegateSignature_Params params;
	params.ItemContainer = ItemContainer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

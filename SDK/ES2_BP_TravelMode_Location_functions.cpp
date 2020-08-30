// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_TravelMode_Location_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_TravelMode_Location.BP_TravelMode_Location_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_TravelMode_Location_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TravelMode_Location.BP_TravelMode_Location_C.UserConstructionScript");

	ABP_TravelMode_Location_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TravelMode_Location.BP_TravelMode_Location_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_TravelMode_Location_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TravelMode_Location.BP_TravelMode_Location_C.ReceiveBeginPlay");

	ABP_TravelMode_Location_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TravelMode_Location.BP_TravelMode_Location_C.OnInteract
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInteractComponent**     InteractComponent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TravelMode_Location_C::OnInteract(class UInteractComponent** InteractComponent, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TravelMode_Location.BP_TravelMode_Location_C.OnInteract");

	ABP_TravelMode_Location_C_OnInteract_Params params;
	params.InteractComponent = InteractComponent;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TravelMode_Location.BP_TravelMode_Location_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TravelMode_Location_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TravelMode_Location.BP_TravelMode_Location_C.ReceiveTick");

	ABP_TravelMode_Location_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TravelMode_Location.BP_TravelMode_Location_C.OnRefreshIndicatorsAndVisibility
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_TravelMode_Location_C::OnRefreshIndicatorsAndVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TravelMode_Location.BP_TravelMode_Location_C.OnRefreshIndicatorsAndVisibility");

	ABP_TravelMode_Location_C_OnRefreshIndicatorsAndVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TravelMode_Location.BP_TravelMode_Location_C.ExecuteUbergraph_BP_TravelMode_Location
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TravelMode_Location_C::ExecuteUbergraph_BP_TravelMode_Location(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TravelMode_Location.BP_TravelMode_Location_C.ExecuteUbergraph_BP_TravelMode_Location");

	ABP_TravelMode_Location_C_ExecuteUbergraph_BP_TravelMode_Location_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TravelMode_Location.BP_TravelMode_Location_C.OnTravelSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLocationData*          NewLocation                    (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_TravelMode_Location_C::OnTravelSelected__DelegateSignature(struct FLocationData* NewLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TravelMode_Location.BP_TravelMode_Location_C.OnTravelSelected__DelegateSignature");

	ABP_TravelMode_Location_C_OnTravelSelected__DelegateSignature_Params params;
	params.NewLocation = NewLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

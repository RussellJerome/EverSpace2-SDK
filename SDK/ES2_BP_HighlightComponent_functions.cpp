// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_HighlightComponent_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_HighlightComponent.BP_HighlightComponent_C.GetOriginalStencil
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent**        Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           Found                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            StencilValue                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FName                   Tag                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_HighlightComponent_C::GetOriginalStencil(class USceneComponent** Component, bool* Found, int* StencilValue, struct FName* Tag)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HighlightComponent.BP_HighlightComponent_C.GetOriginalStencil");

	UBP_HighlightComponent_C_GetOriginalStencil_Params params;
	params.Component = Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Found != nullptr)
		*Found = params.Found;
	if (StencilValue != nullptr)
		*StencilValue = params.StencilValue;
	if (Tag != nullptr)
		*Tag = params.Tag;
}


// Function BP_HighlightComponent.BP_HighlightComponent_C.SetEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_HighlightComponent_C::SetEnabled(bool* Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HighlightComponent.BP_HighlightComponent_C.SetEnabled");

	UBP_HighlightComponent_C_SetEnabled_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HighlightComponent.BP_HighlightComponent_C.UpdateAffectedMeshes
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_HighlightComponent_C::UpdateAffectedMeshes()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HighlightComponent.BP_HighlightComponent_C.UpdateAffectedMeshes");

	UBP_HighlightComponent_C_UpdateAffectedMeshes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HighlightComponent.BP_HighlightComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_HighlightComponent_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HighlightComponent.BP_HighlightComponent_C.ReceiveBeginPlay");

	UBP_HighlightComponent_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HighlightComponent.BP_HighlightComponent_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_HighlightComponent_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HighlightComponent.BP_HighlightComponent_C.ReceiveEndPlay");

	UBP_HighlightComponent_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HighlightComponent.BP_HighlightComponent_C.InteractSelectionChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInteractComponent**     InteractComponent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 OwningActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bSelected                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_HighlightComponent_C::InteractSelectionChanged(class UInteractComponent** InteractComponent, class AActor** OwningActor, bool* bSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HighlightComponent.BP_HighlightComponent_C.InteractSelectionChanged");

	UBP_HighlightComponent_C_InteractSelectionChanged_Params params;
	params.InteractComponent = InteractComponent;
	params.OwningActor = OwningActor;
	params.bSelected = bSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HighlightComponent.BP_HighlightComponent_C.SetHighlightMeshComponents
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UMeshComponent*>  Meshes                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBP_HighlightComponent_C::SetHighlightMeshComponents(TArray<class UMeshComponent*>* Meshes)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HighlightComponent.BP_HighlightComponent_C.SetHighlightMeshComponents");

	UBP_HighlightComponent_C_SetHighlightMeshComponents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Meshes != nullptr)
		*Meshes = params.Meshes;
}


// Function BP_HighlightComponent.BP_HighlightComponent_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_HighlightComponent_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HighlightComponent.BP_HighlightComponent_C.ReceiveTick");

	UBP_HighlightComponent_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HighlightComponent.BP_HighlightComponent_C.ExecuteUbergraph_BP_HighlightComponent
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_HighlightComponent_C::ExecuteUbergraph_BP_HighlightComponent(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HighlightComponent.BP_HighlightComponent_C.ExecuteUbergraph_BP_HighlightComponent");

	UBP_HighlightComponent_C_ExecuteUbergraph_BP_HighlightComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

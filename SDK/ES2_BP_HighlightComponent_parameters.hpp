#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_HighlightComponent_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_HighlightComponent.BP_HighlightComponent_C.GetOriginalStencil
struct UBP_HighlightComponent_C_GetOriginalStencil_Params
{
	class USceneComponent**                            Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               Found;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                StencilValue;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Tag;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HighlightComponent.BP_HighlightComponent_C.SetEnabled
struct UBP_HighlightComponent_C_SetEnabled_Params
{
	bool*                                              Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HighlightComponent.BP_HighlightComponent_C.UpdateAffectedMeshes
struct UBP_HighlightComponent_C_UpdateAffectedMeshes_Params
{
};

// Function BP_HighlightComponent.BP_HighlightComponent_C.ReceiveBeginPlay
struct UBP_HighlightComponent_C_ReceiveBeginPlay_Params
{
};

// Function BP_HighlightComponent.BP_HighlightComponent_C.ReceiveEndPlay
struct UBP_HighlightComponent_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HighlightComponent.BP_HighlightComponent_C.InteractSelectionChanged
struct UBP_HighlightComponent_C_InteractSelectionChanged_Params
{
	class UInteractComponent**                         InteractComponent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     OwningActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSelected;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HighlightComponent.BP_HighlightComponent_C.SetHighlightMeshComponents
struct UBP_HighlightComponent_C_SetHighlightMeshComponents_Params
{
	TArray<class UMeshComponent*>                      Meshes;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_HighlightComponent.BP_HighlightComponent_C.ReceiveTick
struct UBP_HighlightComponent_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HighlightComponent.BP_HighlightComponent_C.ExecuteUbergraph_BP_HighlightComponent
struct UBP_HighlightComponent_C_ExecuteUbergraph_BP_HighlightComponent_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

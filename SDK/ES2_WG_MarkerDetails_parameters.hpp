#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_MarkerDetails_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WG_MarkerDetails.WG_MarkerDetails_C.SetName
struct UWG_MarkerDetails_C_SetName_Params
{
	struct FText*                                      Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WG_MarkerDetails.WG_MarkerDetails_C.SetDistance
struct UWG_MarkerDetails_C_SetDistance_Params
{
	struct FText*                                      DistanceText;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WG_MarkerDetails.WG_MarkerDetails_C.SetTypeIcon
struct UWG_MarkerDetails_C_SetTypeIcon_Params
{
	class UObject**                                    Texture;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_MarkerDetails.WG_MarkerDetails_C.SetColorByRelationDeadlinessOrRarity
struct UWG_MarkerDetails_C_SetColorByRelationDeadlinessOrRarity_Params
{
	TEnumAsByte<EMarkerRelation>*                      Relation;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bDeadly;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EItemRarity>*                          ItemRarity;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_MarkerDetails.WG_MarkerDetails_C.SetPrefixText
struct UWG_MarkerDetails_C_SetPrefixText_Params
{
	struct FText*                                      PrefixText;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WG_MarkerDetails.WG_MarkerDetails_C.SetLevel
struct UWG_MarkerDetails_C_SetLevel_Params
{
	int*                                               Level;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_MarkerDetails.WG_MarkerDetails_C.SetIndicators
struct UWG_MarkerDetails_C_SetIndicators_Params
{
	TMap<TEnumAsByte<EIndicator>, bool>*               Indicator;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function WG_MarkerDetails.WG_MarkerDetails_C.Construct
struct UWG_MarkerDetails_C_Construct_Params
{
};

// Function WG_MarkerDetails.WG_MarkerDetails_C.SetLocked
struct UWG_MarkerDetails_C_SetLocked_Params
{
	bool*                                              Locked;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_MarkerDetails.WG_MarkerDetails_C.AddCondition
struct UWG_MarkerDetails_C_AddCondition_Params
{
	class UBP_Condition_Base_C**                       ConditionRef;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WG_MarkerDetails.WG_MarkerDetails_C.SetInteractWidget
struct UWG_MarkerDetails_C_SetInteractWidget_Params
{
	class UUserWidget**                                Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WG_MarkerDetails.WG_MarkerDetails_C.RemoveInteractWidget
struct UWG_MarkerDetails_C_RemoveInteractWidget_Params
{
};

// Function WG_MarkerDetails.WG_MarkerDetails_C.UpdateTokenSpacerVisibility
struct UWG_MarkerDetails_C_UpdateTokenSpacerVisibility_Params
{
};

// Function WG_MarkerDetails.WG_MarkerDetails_C.RemovedConditionWidget
struct UWG_MarkerDetails_C_RemovedConditionWidget_Params
{
	class UWG_Condition_C**                            Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WG_MarkerDetails.WG_MarkerDetails_C.TokenCountChanged
struct UWG_MarkerDetails_C_TokenCountChanged_Params
{
	int*                                               NewTokenCount;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               OldTokenCount;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBP_Condition_Base_C**                       ConditionRef;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WG_MarkerDetails.WG_MarkerDetails_C.ExecuteUbergraph_WG_MarkerDetails
struct UWG_MarkerDetails_C_ExecuteUbergraph_WG_MarkerDetails_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_ItemContainer_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_ItemContainer.BP_ItemContainer_C.OpenContainerAndDropItsLoot
struct ABP_ItemContainer_C_OpenContainerAndDropItsLoot_Params
{
};

// Function BP_ItemContainer.BP_ItemContainer_C.UserConstructionScript
struct ABP_ItemContainer_C_UserConstructionScript_Params
{
};

// Function BP_ItemContainer.BP_ItemContainer_C.OnContainerOpened
struct ABP_ItemContainer_C_OnContainerOpened_Params
{
};

// Function BP_ItemContainer.BP_ItemContainer_C.ReceiveAnyDamage
struct ABP_ItemContainer_C_ReceiveAnyDamage_Params
{
	float*                                             Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ItemContainer.BP_ItemContainer_C.ReceiveBeginPlay
struct ABP_ItemContainer_C_ReceiveBeginPlay_Params
{
};

// Function BP_ItemContainer.BP_ItemContainer_C.SetScreenName
struct ABP_ItemContainer_C_SetScreenName_Params
{
	struct FText*                                      ScreenName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_ItemContainer.BP_ItemContainer_C.OnInteractHoldProgress_Event_1
struct ABP_ItemContainer_C_OnInteractHoldProgress_Event_1_Params
{
	class UInteractComponent**                         InteractComponent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Progress;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ItemContainer.BP_ItemContainer_C.ReceiveTick
struct ABP_ItemContainer_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ItemContainer.BP_ItemContainer_C.OnClosedLoot
struct ABP_ItemContainer_C_OnClosedLoot_Params
{
};

// Function BP_ItemContainer.BP_ItemContainer_C.CustomEvent_2
struct ABP_ItemContainer_C_CustomEvent_2_Params
{
	TEnumAsByte<EMenuTab>*                             Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ItemContainer.BP_ItemContainer_C.ExecuteUbergraph_BP_ItemContainer
struct ABP_ItemContainer_C_ExecuteUbergraph_BP_ItemContainer_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ItemContainer.BP_ItemContainer_C.OnClosedContainer__DelegateSignature
struct ABP_ItemContainer_C_OnClosedContainer__DelegateSignature_Params
{
	class ABP_ItemContainer_C**                        ItemContainer;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ItemContainer.BP_ItemContainer_C.OnOpenedContainer__DelegateSignature
struct ABP_ItemContainer_C_OnOpenedContainer__DelegateSignature_Params
{
	class AItemContainer**                             ItemContainer;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

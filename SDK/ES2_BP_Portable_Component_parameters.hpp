#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_Portable_Component_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Portable_Component.BP_Portable_Component_C.ReceiveBeginPlay
struct UBP_Portable_Component_C_ReceiveBeginPlay_Params
{
};

// Function BP_Portable_Component.BP_Portable_Component_C.ObjectAttached
struct UBP_Portable_Component_C_ObjectAttached_Params
{
	class AActor**                                     TheActor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Portable_Component.BP_Portable_Component_C.ObjectDetached
struct UBP_Portable_Component_C_ObjectDetached_Params
{
	class AActor**                                     TheActor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Portable_Component.BP_Portable_Component_C.ExecuteUbergraph_BP_Portable_Component
struct UBP_Portable_Component_C_ExecuteUbergraph_BP_Portable_Component_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

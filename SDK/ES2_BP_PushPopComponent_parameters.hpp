#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_PushPopComponent_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_PushPopComponent.BP_PushPopComponent_C.PushPop
struct UBP_PushPopComponent_C_PushPop_Params
{
	bool*                                              Input;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PushPopComponent.BP_PushPopComponent_C.ReceiveBeginPlay
struct UBP_PushPopComponent_C_ReceiveBeginPlay_Params
{
};

// Function BP_PushPopComponent.BP_PushPopComponent_C.ExecuteUbergraph_BP_PushPopComponent
struct UBP_PushPopComponent_C_ExecuteUbergraph_BP_PushPopComponent_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

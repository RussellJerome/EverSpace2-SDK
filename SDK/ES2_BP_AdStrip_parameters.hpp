#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_AdStrip_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_AdStrip.BP_AdStrip_C.UserConstructionScript
struct ABP_AdStrip_C_UserConstructionScript_Params
{
};

// Function BP_AdStrip.BP_AdStrip_C.ReceiveBeginPlay
struct ABP_AdStrip_C_ReceiveBeginPlay_Params
{
};

// Function BP_AdStrip.BP_AdStrip_C.UpdateCanvas
struct ABP_AdStrip_C_UpdateCanvas_Params
{
	class UCanvas**                                    Canvas;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Width;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Height;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AdStrip.BP_AdStrip_C.ExecuteUbergraph_BP_AdStrip
struct ABP_AdStrip_C_ExecuteUbergraph_BP_AdStrip_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_PawnHeadlight_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_PawnHeadlight.BP_PawnHeadlight_C.SetEnabled
struct ABP_PawnHeadlight_C_SetEnabled_Params
{
	bool*                                              Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PawnHeadlight.BP_PawnHeadlight_C.ExecuteUbergraph_BP_PawnHeadlight
struct ABP_PawnHeadlight_C_ExecuteUbergraph_BP_PawnHeadlight_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

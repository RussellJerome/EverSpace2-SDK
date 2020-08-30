#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BTS_GetJumpTarget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BTS_GetJumpTarget.BTS_GetJumpTarget_C.ReceiveSearchStart
struct UBTS_GetJumpTarget_C_ReceiveSearchStart_Params
{
	class AActor**                                     OwnerActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTS_GetJumpTarget.BTS_GetJumpTarget_C.ExecuteUbergraph_BTS_GetJumpTarget
struct UBTS_GetJumpTarget_C_ExecuteUbergraph_BTS_GetJumpTarget_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

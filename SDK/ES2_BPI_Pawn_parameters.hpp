#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BPI_Pawn_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPI_Pawn.BPI_Pawn_C.GetPawnLocalSpaceBounds
struct UBPI_Pawn_C_GetPawnLocalSpaceBounds_Params
{
	struct FBoxSphereBounds                            LocalSpaceBounds;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

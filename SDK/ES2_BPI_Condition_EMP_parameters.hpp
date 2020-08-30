#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BPI_Condition_EMP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPI_Condition_EMP.BPI_Condition_EMP_C.RemoveEMP
struct UBPI_Condition_EMP_C_RemoveEMP_Params
{
};

// Function BPI_Condition_EMP.BPI_Condition_EMP_C.ApplyEMP
struct UBPI_Condition_EMP_C_ApplyEMP_Params
{
	class AActor**                                     Instigator;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

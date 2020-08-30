#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_PlanetDataComponent_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_PlanetDataComponent.BP_PlanetDataComponent_C.GetPlanetData
struct UBP_PlanetDataComponent_C_GetPlanetData_Params
{
	TEnumAsByte<EPlanetTypes>*                         Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FSTRCT_PlanetType                           PlanetData;                                               // (Parm, OutParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

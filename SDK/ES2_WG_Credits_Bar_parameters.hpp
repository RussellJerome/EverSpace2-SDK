#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_Credits_Bar_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WG_Credits_Bar.WG_Credits_Bar_C.Construct
struct UWG_Credits_Bar_C_Construct_Params
{
};

// Function WG_Credits_Bar.WG_Credits_Bar_C.SetCredits
struct UWG_Credits_Bar_C_SetCredits_Params
{
	int*                                               credits;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Colorize;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor*                               Color;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Credits_Bar.WG_Credits_Bar_C.CreditsChanged
struct UWG_Credits_Bar_C_CreditsChanged_Params
{
	int*                                               NewCredits;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               CreditsDelta;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Credits_Bar.WG_Credits_Bar_C.ExecuteUbergraph_WG_Credits_Bar
struct UWG_Credits_Bar_C_ExecuteUbergraph_WG_Credits_Bar_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

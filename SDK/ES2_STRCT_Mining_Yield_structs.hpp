#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_Basic.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct STRCT_Mining_Yield.STRCT_Mining_Yield
// 0x0018
struct FSTRCT_Mining_Yield
{
	int                                                MaxYield_10_858EEE3E43CC6EC4884A34B5D6BDC264;             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Duration_13_7C1688E243E5ADBC2221FE8B94F040EE;             // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Difficulty_16_1FE16CAD443D6F09068F82A206021E1E;           // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       SpecialResourceID_19_8F82DFE14589B3FEB052C88F23035B16;    // 0x000C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BonusThreshold_22_2FEE92ED4D984B7F956BD39577D9A63F;       // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

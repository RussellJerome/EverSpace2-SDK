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

// UserDefinedStruct STRCT_DistanceCullSettings.STRCT_DistanceCullSettings
// 0x0009
struct FSTRCT_DistanceCullSettings
{
	float                                              Distance_2_23AEE5D941370D80AE222091AA672E06;              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TickInterval_8_E2C9DD0841864AE44E86F489F34CDC75;          // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DisableTick_14_BD3A4B5C4245E7CF5E186287AF37ACF5;          // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

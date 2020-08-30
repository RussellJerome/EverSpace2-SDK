#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_Basic.hpp"
#include "ES2_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct STRCT_WeaponEffect_Sound_Charging.STRCT_WeaponEffect_Sound_Charging
// 0x0028
struct FSTRCT_WeaponEffect_Sound_Charging
{
	class USoundBase*                                  Sound_15_2978B785497F336FA16F148540B41201;                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PerfectDuration_24_289BB52B47B2D83A324DAE8374B92491;      // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FFloatRange                                 DurationRange_23_10D5FB304AF8198DF65012A79F0FDE86;        // 0x000C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	class USoundBase*                                  LoopSound_27_15DF65174485225AD43DB48B5137C633;            // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

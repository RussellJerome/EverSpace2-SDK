#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_Basic.hpp"
#include "ES2_ES2_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct STRCT_WeaponEffect_Sound.STRCT_WeaponEffect_Sound
// 0x0010
struct FSTRCT_WeaponEffect_Sound
{
	class USoundBase*                                  Sound_15_2978B785497F336FA16F148540B41201;                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EItemRarity>                           MinRarity_13_10D5FB304AF8198DF65012A79F0FDE86;            // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EItemRarity>                           MaxRarity_18_8D261B414658D73E2B2619A234086651;            // 0x0009(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000A(0x0002) MISSED OFFSET
	int                                                MinLevel_11_289BB52B47B2D83A324DAE8374B92491;             // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

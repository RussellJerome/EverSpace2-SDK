#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_Basic.hpp"
#include "ES2_CoreUObject_classes.hpp"
#include "ES2_ES2_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct STRCT_WeaponEffect_Color.STRCT_WeaponEffect_Color
// 0x0018
struct FSTRCT_WeaponEffect_Color
{
	struct FLinearColor                                Color_2_2978B785497F336FA16F148540B41201;                 // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EItemRarity>                           MinRarity_13_10D5FB304AF8198DF65012A79F0FDE86;            // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	int                                                MinLevel_11_289BB52B47B2D83A324DAE8374B92491;             // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

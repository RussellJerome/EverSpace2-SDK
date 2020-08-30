#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_Basic.hpp"
#include "ES2_EPlanetTypes_classes.hpp"
#include "ES2_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct STRCT_PlanetInstance.STRCT_PlanetInstance
// 0x0068
struct FSTRCT_PlanetInstance
{
	TEnumAsByte<EPlanetTypes>                          Type_3_FF24A2D14FBCF6934A868EBBFF489D0F;                  // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0001(0x000F) MISSED OFFSET
	struct FTransform                                  RelativeTransform_26_7FD88C0741B3F22784D9CCA384AC4A16;    // 0x0010(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              Scale_9_466615864EBAC2B9044030A05FE8AC96;                 // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DistanceScale_29_8BDF7FA0450F38D341ABF68E606A7F01;        // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Ring_12_D37861A24AF684568710DAAC8887196B;                 // 0x0048(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0049(0x0003) MISSED OFFSET
	struct FLinearColor                                RingColor_32_17D469184FF6DAEA197E20A9B19C47DA;            // 0x004C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RingUVOffset_19_B0DB647842ABC7B9FA061F948A6B253D;         // 0x005C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RingDensity_20_FEC5BBA34FAB9D339FE52FA22E515A89;          // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RingWidth_21_7261F3DB4842527BF154D18F12A2BCF7;            // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

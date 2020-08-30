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

// UserDefinedStruct STRCT_FogSettings.STRCT_FogSettings
// 0x0040
struct FSTRCT_FogSettings
{
	struct FLinearColor                                Color_2_57948AB84D73395D469CE6A825658394;                 // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Density_5_4634B8AE4CC34E330D4B9389B5600658;               // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Opacity_7_09BF902E4B06B0102A6FDDABDADD78A0;               // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HeightFalloff_9_3BA7109744009C529B3DB8A6932E08FE;         // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HeightOffset_11_3966A70A42F34B051957B59F9897A679;         // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               MirrorHeight_33_1A5DBF3546EC220E89EFE9AF8F5F42F5;         // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	float                                              UseSystemColor_13_7739341C491738307B34CD8161C51620;       // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SunScatteringMultiplier_15_DBD95674404F70A75C50F8B6A1A41202;// 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StartDistance_28_A27CE5174305745880D9D0AC2C21D953;        // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SunScatteringStartDistance_18_2C5EB55042A9FE43AC2FA7A70AE5C288;// 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               VolumetricFog_21_B5E879914C00986EED4BB49BB9910E6F;        // 0x0034(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0035(0x0003) MISSED OFFSET
	float                                              VolumetricFogExtinctionScale_24_BCA32B6D45DF544F61946D9D4FAF3A31;// 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VolumetricFogViewDistance_26_69B3D820442BE610DEE298BAAFBF6A88;// 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

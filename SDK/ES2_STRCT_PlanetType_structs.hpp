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

// UserDefinedStruct STRCT_PlanetType.STRCT_PlanetType
// 0x0020
struct FSTRCT_PlanetType
{
	TEnumAsByte<EPlanetTypes>                          Type_7_7EE354574E251F8F046D55BC5FB85D1B;                  // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UMaterialInstance*                           Material_6_716A2D494D9E10E07789F893A08B5EE3;              // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                AtmosphereColor_10_1D9782CD49B27765174DE393C4D26BE6;      // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

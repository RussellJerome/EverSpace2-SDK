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

// UserDefinedStruct STRCT_MeshField_Entry.STRCT_MeshField_Entry
// 0x0014
struct FSTRCT_MeshField_Entry
{
	class UStaticMesh*                                 Mesh_2_FA018E1E456BD2FE0E38BF9AEA477AF0;                  // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Weight_5_CBE333C443A17ED199BFE39477EF541B;                // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ForceNoLightBuild_7_05C78DF647A7D2CF403CEDAD4CDFBC80;     // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	float                                              DrawDistanceMax_10_066D4EEA495097BBBAED27BB3B070DA5;      // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

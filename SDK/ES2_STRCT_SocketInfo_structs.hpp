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

// UserDefinedStruct STRCT_SocketInfo.STRCT_SocketInfo
// 0x0048
struct FSTRCT_SocketInfo
{
	struct FName                                       Name_2_E88ECF41478FDBC06A6C649EBCFB81FF;                  // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FTransform                                  Transform_5_5864C28E40B8BACBC30F54B6FCCFC713;             // 0x0010(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	class USceneComponent*                             Component_8_8F061CCC446BB721FAB302B994961E18;             // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

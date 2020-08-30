#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_Selected_Equipment_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WG_Selected_Equipment.WG_Selected_Equipment_C.PreConstruct
struct UWG_Selected_Equipment_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Selected_Equipment.WG_Selected_Equipment_C.SetEquipment
struct UWG_Selected_Equipment_C_SetEquipment_Params
{
	class AEquipmentBase**                             EquipmentRef;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UItem**                                      ItemRef;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Selected_Equipment.WG_Selected_Equipment_C.FadeOut
struct UWG_Selected_Equipment_C_FadeOut_Params
{
};

// Function WG_Selected_Equipment.WG_Selected_Equipment_C.Construct
struct UWG_Selected_Equipment_C_Construct_Params
{
};

// Function WG_Selected_Equipment.WG_Selected_Equipment_C.ExecuteUbergraph_WG_Selected_Equipment
struct UWG_Selected_Equipment_C_ExecuteUbergraph_WG_Selected_Equipment_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

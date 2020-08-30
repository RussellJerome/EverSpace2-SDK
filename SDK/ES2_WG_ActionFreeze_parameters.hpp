#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_ActionFreeze_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WG_ActionFreeze.WG_ActionFreeze_C.OnKeyUp
struct UWG_ActionFreeze_C_OnKeyUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WG_ActionFreeze.WG_ActionFreeze_C.OnKeyDown
struct UWG_ActionFreeze_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WG_ActionFreeze.WG_ActionFreeze_C.PreConstruct
struct UWG_ActionFreeze_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_ActionFreeze.WG_ActionFreeze_C.Close
struct UWG_ActionFreeze_C_Close_Params
{
};

// Function WG_ActionFreeze.WG_ActionFreeze_C.ChangeCameraMode
struct UWG_ActionFreeze_C_ChangeCameraMode_Params
{
};

// Function WG_ActionFreeze.WG_ActionFreeze_C.Tick
struct UWG_ActionFreeze_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_ActionFreeze.WG_ActionFreeze_C.ExecuteUbergraph_WG_ActionFreeze
struct UWG_ActionFreeze_C_ExecuteUbergraph_WG_ActionFreeze_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

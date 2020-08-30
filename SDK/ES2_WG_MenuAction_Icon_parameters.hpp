#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_MenuAction_Icon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WG_MenuAction_Icon.WG_MenuAction_Icon_C.UpdateIcon
struct UWG_MenuAction_Icon_C_UpdateIcon_Params
{
};

// Function WG_MenuAction_Icon.WG_MenuAction_Icon_C.PreConstruct
struct UWG_MenuAction_Icon_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_MenuAction_Icon.WG_MenuAction_Icon_C.SetActionInfo
struct UWG_MenuAction_Icon_C_SetActionInfo_Params
{
	struct FInputActionButtonInfo*                     NewActionInfo;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WG_MenuAction_Icon.WG_MenuAction_Icon_C.Tick
struct UWG_MenuAction_Icon_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_MenuAction_Icon.WG_MenuAction_Icon_C.SetHoldProgress
struct UWG_MenuAction_Icon_C_SetHoldProgress_Params
{
	float*                                             Progress;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_MenuAction_Icon.WG_MenuAction_Icon_C.Construct
struct UWG_MenuAction_Icon_C_Construct_Params
{
};

// Function WG_MenuAction_Icon.WG_MenuAction_Icon_C.ExecuteUbergraph_WG_MenuAction_Icon
struct UWG_MenuAction_Icon_C_ExecuteUbergraph_WG_MenuAction_Icon_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_MenuAction_Icon.WG_MenuAction_Icon_C.OnButtonClicked__DelegateSignature
struct UWG_MenuAction_Icon_C_OnButtonClicked__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

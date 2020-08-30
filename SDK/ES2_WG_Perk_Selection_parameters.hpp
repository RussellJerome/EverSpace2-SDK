#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_Perk_Selection_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WG_Perk_Selection.WG_Perk_Selection_C.GetSelectedPerks
struct UWG_Perk_Selection_C_GetSelectedPerks_Params
{
	TArray<struct FName>                               PerkIDs;                                                  // (Parm, OutParm, ZeroConstructor)
};

// Function WG_Perk_Selection.WG_Perk_Selection_C.Construct
struct UWG_Perk_Selection_C_Construct_Params
{
};

// Function WG_Perk_Selection.WG_Perk_Selection_C.OnButtonClicked_Cancel
struct UWG_Perk_Selection_C_OnButtonClicked_Cancel_Params
{
	struct FInputActionButtonInfo*                     ActionInfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WG_Perk_Selection.WG_Perk_Selection_C.ExecuteUbergraph_WG_Perk_Selection
struct UWG_Perk_Selection_C_ExecuteUbergraph_WG_Perk_Selection_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Perk_Selection.WG_Perk_Selection_C.OnConfirm__DelegateSignature
struct UWG_Perk_Selection_C_OnConfirm__DelegateSignature_Params
{
	int*                                               DeviceSlotIndex;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UItem**                                      NewDeviceItem;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

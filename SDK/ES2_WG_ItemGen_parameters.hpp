#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_ItemGen_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WG_ItemGen.WG_ItemGen_C.GetBrushColor_1
struct UWG_ItemGen_C_GetBrushColor_1_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WG_ItemGen.WG_ItemGen_C.OnMouseButtonUp_1
struct UWG_ItemGen_C_OnMouseButtonUp_1_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WG_ItemGen.WG_ItemGen_C.GetSelectedRarities
struct UWG_ItemGen_C_GetSelectedRarities_Params
{
	TArray<TEnumAsByte<EItemRarity>>                   Rarities;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function WG_ItemGen.WG_ItemGen_C.Construct
struct UWG_ItemGen_C_Construct_Params
{
};

// Function WG_ItemGen.WG_ItemGen_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_50_OnButtonClickedEvent__DelegateSignature
struct UWG_ItemGen_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_50_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WG_ItemGen.WG_ItemGen_C.BndEvt__SpinBox_ItemLevel_K2Node_ComponentBoundEvent_115_OnSpinBoxValueChangedEvent__DelegateSignature
struct UWG_ItemGen_C_BndEvt__SpinBox_ItemLevel_K2Node_ComponentBoundEvent_115_OnSpinBoxValueChangedEvent__DelegateSignature_Params
{
	float*                                             InValue;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_ItemGen.WG_ItemGen_C.GenerateItem
struct UWG_ItemGen_C_GenerateItem_Params
{
};

// Function WG_ItemGen.WG_ItemGen_C.BndEvt__Checkbox_Toggle_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
struct UWG_ItemGen_C_BndEvt__Checkbox_Toggle_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature_Params
{
	bool*                                              bIsChecked;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_ItemGen.WG_ItemGen_C.BndEvt__SpinBox_ItemLevelMax_K2Node_ComponentBoundEvent_173_OnSpinBoxValueChangedEvent__DelegateSignature
struct UWG_ItemGen_C_BndEvt__SpinBox_ItemLevelMax_K2Node_ComponentBoundEvent_173_OnSpinBoxValueChangedEvent__DelegateSignature_Params
{
	float*                                             InValue;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_ItemGen.WG_ItemGen_C.BndEvt__ComboBox_Chips_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature
struct UWG_ItemGen_C_BndEvt__ComboBox_Chips_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature_Params
{
	class FString*                                     SelectedItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>*                          SelectionType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_ItemGen.WG_ItemGen_C.BndEvt__SpinBox_Amount_K2Node_ComponentBoundEvent_1_OnSpinBoxValueChangedEvent__DelegateSignature
struct UWG_ItemGen_C_BndEvt__SpinBox_Amount_K2Node_ComponentBoundEvent_1_OnSpinBoxValueChangedEvent__DelegateSignature_Params
{
	float*                                             InValue;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_ItemGen.WG_ItemGen_C.ExecuteUbergraph_WG_ItemGen
struct UWG_ItemGen_C_ExecuteUbergraph_WG_ItemGen_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_ItemGen.WG_ItemGen_C.SetSelected__DelegateSignature
struct UWG_ItemGen_C_SetSelected__DelegateSignature_Params
{
	bool*                                              Selected;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWG_ItemGen_C**                              Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

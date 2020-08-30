#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_ModalDialog_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WG_ModalDialog.WG_ModalDialog_C.Get_CountdownLabel_Text_1
struct UWG_ModalDialog_C_Get_CountdownLabel_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WG_ModalDialog.WG_ModalDialog_C.Get_CountdownBar_Visibility_1
struct UWG_ModalDialog_C_Get_CountdownBar_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WG_ModalDialog.WG_ModalDialog_C.OnKeyDown
struct UWG_ModalDialog_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WG_ModalDialog.WG_ModalDialog_C.PreConstruct
struct UWG_ModalDialog_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_ModalDialog.WG_ModalDialog_C.Construct
struct UWG_ModalDialog_C_Construct_Params
{
};

// Function WG_ModalDialog.WG_ModalDialog_C.OKPressed
struct UWG_ModalDialog_C_OKPressed_Params
{
	struct FInputActionButtonInfo*                     ActionInfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WG_ModalDialog.WG_ModalDialog_C.CancelPressed
struct UWG_ModalDialog_C_CancelPressed_Params
{
	struct FInputActionButtonInfo*                     ActionInfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WG_ModalDialog.WG_ModalDialog_C.AlternaticePressed
struct UWG_ModalDialog_C_AlternaticePressed_Params
{
	struct FInputActionButtonInfo*                     ActionInfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WG_ModalDialog.WG_ModalDialog_C.CustomEventYo
struct UWG_ModalDialog_C_CustomEventYo_Params
{
};

// Function WG_ModalDialog.WG_ModalDialog_C.Tick
struct UWG_ModalDialog_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_ModalDialog.WG_ModalDialog_C.ExecuteUbergraph_WG_ModalDialog
struct UWG_ModalDialog_C_ExecuteUbergraph_WG_ModalDialog_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_ModalDialog.WG_ModalDialog_C.OnAlternativePressed__DelegateSignature
struct UWG_ModalDialog_C_OnAlternativePressed__DelegateSignature_Params
{
	class UWG_ModalDialog_C**                          WG_ModalDialog;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WG_ModalDialog.WG_ModalDialog_C.OnCancelPressed__DelegateSignature
struct UWG_ModalDialog_C_OnCancelPressed__DelegateSignature_Params
{
	class UWG_ModalDialog_C**                          WG_ModalDialog;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WG_ModalDialog.WG_ModalDialog_C.OnOKPressed__DelegateSignature
struct UWG_ModalDialog_C_OnOKPressed__DelegateSignature_Params
{
	class UWG_ModalDialog_C**                          WG_ModalDialog;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

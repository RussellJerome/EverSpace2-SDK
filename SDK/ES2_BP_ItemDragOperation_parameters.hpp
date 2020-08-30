#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_ItemDragOperation_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_ItemDragOperation.BP_ItemDragOperation_C.DisableHighlight
struct UBP_ItemDragOperation_C_DisableHighlight_Params
{
};

// Function BP_ItemDragOperation.BP_ItemDragOperation_C.DragCancelled
struct UBP_ItemDragOperation_C_DragCancelled_Params
{
	struct FPointerEvent*                              PointerEvent;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_ItemDragOperation.BP_ItemDragOperation_C.Drop
struct UBP_ItemDragOperation_C_Drop_Params
{
	struct FPointerEvent*                              PointerEvent;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_ItemDragOperation.BP_ItemDragOperation_C.ChangeTransferAmount
struct UBP_ItemDragOperation_C_ChangeTransferAmount_Params
{
	bool*                                              More;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ItemDragOperation.BP_ItemDragOperation_C.ExecuteUbergraph_BP_ItemDragOperation
struct UBP_ItemDragOperation_C_ExecuteUbergraph_BP_ItemDragOperation_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

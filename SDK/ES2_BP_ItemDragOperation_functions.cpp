// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_ItemDragOperation_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ItemDragOperation.BP_ItemDragOperation_C.DisableHighlight
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_ItemDragOperation_C::DisableHighlight()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemDragOperation.BP_ItemDragOperation_C.DisableHighlight");

	UBP_ItemDragOperation_C_DisableHighlight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ItemDragOperation.BP_ItemDragOperation_C.DragCancelled
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent*          PointerEvent                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_ItemDragOperation_C::DragCancelled(struct FPointerEvent* PointerEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemDragOperation.BP_ItemDragOperation_C.DragCancelled");

	UBP_ItemDragOperation_C_DragCancelled_Params params;
	params.PointerEvent = PointerEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ItemDragOperation.BP_ItemDragOperation_C.Drop
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent*          PointerEvent                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_ItemDragOperation_C::Drop(struct FPointerEvent* PointerEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemDragOperation.BP_ItemDragOperation_C.Drop");

	UBP_ItemDragOperation_C_Drop_Params params;
	params.PointerEvent = PointerEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ItemDragOperation.BP_ItemDragOperation_C.ChangeTransferAmount
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          More                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ItemDragOperation_C::ChangeTransferAmount(bool* More)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemDragOperation.BP_ItemDragOperation_C.ChangeTransferAmount");

	UBP_ItemDragOperation_C_ChangeTransferAmount_Params params;
	params.More = More;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ItemDragOperation.BP_ItemDragOperation_C.ExecuteUbergraph_BP_ItemDragOperation
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ItemDragOperation_C::ExecuteUbergraph_BP_ItemDragOperation(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ItemDragOperation.BP_ItemDragOperation_C.ExecuteUbergraph_BP_ItemDragOperation");

	UBP_ItemDragOperation_C_ExecuteUbergraph_BP_ItemDragOperation_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_ItemDragOperation_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ItemDragOperation.BP_ItemDragOperation_C
// 0x001C (0x00A4 - 0x0088)
class UBP_ItemDragOperation_C : public UDragDropOperation
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0088(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWG_Inventory_Slot_C*                        ParentInventorySlot;                                      // 0x0090(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWG_Item_Icon_C*                             Item_Icon_Ref;                                            // 0x0098(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                TransferAmount;                                           // 0x00A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ItemDragOperation.BP_ItemDragOperation_C");
		return ptr;
	}


	void DisableHighlight();
	void DragCancelled(struct FPointerEvent* PointerEvent);
	void Drop(struct FPointerEvent* PointerEvent);
	void ChangeTransferAmount(bool* More);
	void ExecuteUbergraph_BP_ItemDragOperation(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

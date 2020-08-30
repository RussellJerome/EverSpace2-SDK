#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_EjectInventory_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WG_EjectInventory.WG_EjectInventory_C
// 0x0010 (0x0240 - 0x0230)
class UWG_EjectInventory_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWG_Inventory_C*                             EjectInventory;                                           // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WG_EjectInventory.WG_EjectInventory_C");
		return ptr;
	}


	void Construct();
	void OnRefresh_DropInventory(class UWG_Inventory_C** InventoryWidget);
	void SetTransferInventory(class UWG_Inventory_C** TransferInventory);
	void OnVanishAnimFinished_Event_1(class UWG_Inventory_Slot_C** InventorySlot);
	void ExecuteUbergraph_WG_EjectInventory(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

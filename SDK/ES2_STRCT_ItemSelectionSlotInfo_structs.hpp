#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_Basic.hpp"
#include "ES2_EItemSlotType_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct STRCT_ItemSelectionSlotInfo.STRCT_ItemSelectionSlotInfo
// 0x0030
struct FSTRCT_ItemSelectionSlotInfo
{
	class UWG_Inventory_Slot_C*                        Slot_20_3073E5784D6C8DBF50492B9ECC2C12D9;                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWG_Inventory_C*                             Inventory_21_B531E7A14401C128C664899CB65F0DFB;            // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UInventory*                                  DataInventory_22_D2FEC2644B4CFCF70D39958BCE467A6B;        // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UItem*                                       Item_23_B031C8E9410656A0757FCE976C7B71D9;                 // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsEquipmentSlot_24_11B316CE4E06EB03CE3AD18B36907402;      // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EItemSlotType>                         Type_25_777AFEF84B59C0F51FAFFFB5F28E55E9;                 // 0x0021(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsActive_28_3803C8E8409659A1ADF7E3BB6A4A49C6;             // 0x0022(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0023(0x0001) MISSED OFFSET
	int                                                ShipIndex_26_9101DA464AFCE48A8ACF88B7D57ED975;            // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SlotIndex_33_F21694564571FD46A8739EA38C2DBDDB;            // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SlotCount_35_75CEFF594B7D102FB50C60BF6EEB2F63;            // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

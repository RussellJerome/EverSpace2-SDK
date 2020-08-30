#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BPI_Submenu_Ingame_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPI_Submenu_Ingame.BPI_Submenu_Ingame_C
// 0x0000 (0x0028 - 0x0028)
class UBPI_Submenu_Ingame_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_Submenu_Ingame.BPI_Submenu_Ingame_C");
		return ptr;
	}


	void Refresh();
	void CanItemInfoVisibilityNotBeChanged(bool* Result);
	void GetSelectedSlot(class UWG_Inventory_Slot_C** Result);
	void OnGamepadModeChanged(bool* IsGamepadMode);
	void GetItemInfoWidget(class UWG_Item_Info_C** ItemInfoWidget);
	void InitWithStationID(struct FName* StationID, class UWG_Menu_Ingame_C** MenuIngameRef);
	void FadeInOut(bool* IsFadeIn);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

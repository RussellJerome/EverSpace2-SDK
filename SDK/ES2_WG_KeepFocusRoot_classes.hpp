#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_KeepFocusRoot_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WG_KeepFocusRoot.WG_KeepFocusRoot_C
// 0x0000 (0x0230 - 0x0230)
class UWG_KeepFocusRoot_C : public UUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WG_KeepFocusRoot.WG_KeepFocusRoot_C");
		return ptr;
	}


	struct FEventReply OnMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

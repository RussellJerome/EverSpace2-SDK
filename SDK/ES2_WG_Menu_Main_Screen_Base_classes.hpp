#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_Menu_Main_Screen_Base_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WG_Menu_Main_Screen_Base.WG_Menu_Main_Screen_Base_C
// 0x0030 (0x0260 - 0x0230)
class UWG_Menu_Main_Screen_Base_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               UseInPauseMenu;                                           // 0x0238(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0239(0x0007) MISSED OFFSET
	class UWG_Menu_Main_C*                             ParentWidget;                                             // 0x0240(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FText                                       TitleText;                                                // 0x0248(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WG_Menu_Main_Screen_Base.WG_Menu_Main_Screen_Base_C");
		return ptr;
	}


	void InitializeMenu();
	void ExecuteUbergraph_WG_Menu_Main_Screen_Base(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

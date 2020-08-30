#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_OptionsMenu_Base_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WG_OptionsMenu_Base.WG_OptionsMenu_Base_C
// 0x0022 (0x0252 - 0x0230)
class UWG_OptionsMenu_Base_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWG_Menu_Footer_C*                           Footer;                                                   // 0x0238(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnResumeGame;                                             // 0x0240(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               UseInPauseMenu;                                           // 0x0250(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               HasUnappliedChanges;                                      // 0x0251(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WG_OptionsMenu_Base.WG_OptionsMenu_Base_C");
		return ptr;
	}


	void RefreshFooterButtons();
	void OnCancel();
	void InitializeOptionsMenu();
	void ExecuteUbergraph_WG_OptionsMenu_Base(int* EntryPoint);
	void OnResumeGame__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

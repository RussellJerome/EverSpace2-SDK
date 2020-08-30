#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_LIB_F_Text_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LIB_F_Text.LIB_F_Text_C
// 0x0000 (0x0028 - 0x0028)
class ULIB_F_Text_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LIB_F_Text.LIB_F_Text_C");
		return ptr;
	}


	void STATIC_GetChangeCompareSlotText(class UObject** __WorldContext, struct FText* Text);
	void STATIC_GetFormattedTimeTextMinutesSeconds(float* TimeInSeconds, class UObject** __WorldContext, struct FText* TimeText);
	void STATIC_FormatCredits(int* credits, bool* bAlwaysSign, class UObject** __WorldContext, struct FText* Result);
	void STATIC_GetSellText(class UObject** __WorldContext, struct FText* Text);
	void STATIC_GetBuyAndEquipText(class UObject** __WorldContext, struct FText* Text);
	void STATIC_GetBuyText(class UObject** __WorldContext, struct FText* Text);
	void STATIC_GetMoveToContainerText(class UObject** __WorldContext, struct FText* Text);
	void STATIC_GetMoveToCargoText(class UObject** __WorldContext, struct FText* Text);
	void STATIC_GetMoveToStorageText(class UObject** __WorldContext, struct FText* Text);
	void STATIC_GetUnequipText(class UObject** __WorldContext, struct FText* Text);
	void STATIC_GetEquipText(class UObject** __WorldContext, struct FText* Text);
	void STATIC_FormatTier(int* Level, class UObject** __WorldContext, struct FText* Result);
	void STATIC_GetBackText(class UObject** __WorldContext, struct FText* TextBack);
	void STATIC_GetCancelText(class UObject** __WorldContext, struct FText* TextCancel);
	void STATIC_GetOKText(class UObject** __WorldContext, struct FText* TextOK);
	struct FText STATIC_GetRarityText(TEnumAsByte<EItemRarity>* Rarity, class UObject** __WorldContext);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

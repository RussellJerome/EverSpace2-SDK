#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_RichTextStyle_Buttons_Xbox_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_RichTextStyle_Buttons_Xbox.BP_RichTextStyle_Buttons_Xbox_C
// 0x0000 (0x0030 - 0x0030)
class UBP_RichTextStyle_Buttons_Xbox_C : public UESRichTextBlockImageDecorator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_RichTextStyle_Buttons_Xbox.BP_RichTextStyle_Buttons_Xbox_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

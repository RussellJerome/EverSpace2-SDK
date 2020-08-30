#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_Shield_Generator_Base_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Shield_Generator_Base.BP_Shield_Generator_Base_C
// 0x0010 (0x0420 - 0x0410)
class ABP_Shield_Generator_Base_C : public ABP_Weakspot_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0410(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                             GeneratorSound;                                           // 0x0418(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Shield_Generator_Base.BP_Shield_Generator_Base_C");
		return ptr;
	}


	void DestroyWeakspot();
	void ExecuteUbergraph_BP_Shield_Generator_Base(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

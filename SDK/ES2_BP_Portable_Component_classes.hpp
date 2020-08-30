#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_Portable_Component_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Portable_Component.BP_Portable_Component_C
// 0x0008 (0x0648 - 0x0640)
class UBP_Portable_Component_C : public UPortableComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0640(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Portable_Component.BP_Portable_Component_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void ObjectAttached(class AActor** TheActor);
	void ObjectDetached(class AActor** TheActor);
	void ExecuteUbergraph_BP_Portable_Component(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

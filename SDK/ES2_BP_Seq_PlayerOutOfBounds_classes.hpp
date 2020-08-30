#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_Seq_PlayerOutOfBounds_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Seq_PlayerOutOfBounds.BP_Seq_PlayerOutOfBounds_C
// 0x0010 (0x0620 - 0x0610)
class ABP_Seq_PlayerOutOfBounds_C : public ASequenceBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0610(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0618(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Seq_PlayerOutOfBounds.BP_Seq_PlayerOutOfBounds_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Seq_PlayerOutOfBounds(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

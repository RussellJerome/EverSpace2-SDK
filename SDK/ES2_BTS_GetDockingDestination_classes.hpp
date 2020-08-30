#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BTS_GetDockingDestination_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BTS_GetDockingDestination.BTS_GetDockingDestination_C
// 0x0030 (0x00C8 - 0x0098)
class UBTS_GetDockingDestination_C : public UBTService_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0098(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                      DockingGizmoKey;                                          // 0x00A0(0x0028) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BTS_GetDockingDestination.BTS_GetDockingDestination_C");
		return ptr;
	}


	void ReceiveSearchStart(class AActor** OwnerActor);
	void ExecuteUbergraph_BTS_GetDockingDestination(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

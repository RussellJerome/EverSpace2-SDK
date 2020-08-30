#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BTS_SearchWaypoint_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BTS_SearchWaypoint.BTS_SearchWaypoint_C
// 0x003D (0x00D5 - 0x0098)
class UBTS_SearchWaypoint_C : public UBTService_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0098(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                      WaypointKey;                                              // 0x00A0(0x0028) (Edit, BlueprintVisible)
	class UObject*                                     BestResultTmp;                                            // 0x00C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              BestResultTmpDist;                                        // 0x00D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UseNextIfAvailable;                                       // 0x00D4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BTS_SearchWaypoint.BTS_SearchWaypoint_C");
		return ptr;
	}


	void ReceiveSearchStart(class AActor** OwnerActor);
	void ExecuteUbergraph_BTS_SearchWaypoint(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

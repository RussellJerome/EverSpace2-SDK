#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BPI_AddMeshComponentInterface_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPI_AddMeshComponentInterface.BPI_AddMeshComponentInterface_C
// 0x0000 (0x0028 - 0x0028)
class UBPI_AddMeshComponentInterface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_AddMeshComponentInterface.BPI_AddMeshComponentInterface_C");
		return ptr;
	}


	void AddSkeletalMeshComponent(class USkeletalMesh** SkeletalMesh, struct FTransform* Transform, class USkeletalMeshComponent** Component);
	void AddStaticMeshComponent(class UStaticMesh** StaticMesh, struct FTransform* Transform, class UStaticMeshComponent** Component);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

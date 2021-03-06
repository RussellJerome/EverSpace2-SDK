#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_AndroidPermission_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class AndroidPermission.AndroidPermissionCallbackProxy
// 0x0020 (0x0048 - 0x0028)
class UAndroidPermissionCallbackProxy : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnPermissionsGrantedDynamicDelegate;                      // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AndroidPermission.AndroidPermissionCallbackProxy");
		return ptr;
	}

};


// Class AndroidPermission.AndroidPermissionFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UAndroidPermissionFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AndroidPermission.AndroidPermissionFunctionLibrary");
		return ptr;
	}


	bool STATIC_CheckPermission(class FString* permission);
	class UAndroidPermissionCallbackProxy* STATIC_AcquirePermissions(TArray<class FString>* Permissions);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_AndroidPermission_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function AndroidPermission.AndroidPermissionFunctionLibrary.CheckPermission
struct UAndroidPermissionFunctionLibrary_CheckPermission_Params
{
	class FString*                                     permission;                                               // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AndroidPermission.AndroidPermissionFunctionLibrary.AcquirePermissions
struct UAndroidPermissionFunctionLibrary_AcquirePermissions_Params
{
	TArray<class FString>*                             Permissions;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UAndroidPermissionCallbackProxy*             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

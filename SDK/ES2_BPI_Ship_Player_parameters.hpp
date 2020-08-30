#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BPI_Ship_Player_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPI_Ship_Player.BPI_Ship_Player_C.ISetCameraVFXFOVOffset
struct UBPI_Ship_Player_C_ISetCameraVFXFOVOffset_Params
{
	float*                                             Offset;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_Ship_Player.BPI_Ship_Player_C.ISetFreelookEnabled
struct UBPI_Ship_Player_C_ISetFreelookEnabled_Params
{
	bool*                                              Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_Ship_Player.BPI_Ship_Player_C.ICycleCameraView
struct UBPI_Ship_Player_C_ICycleCameraView_Params
{
};

// Function BPI_Ship_Player.BPI_Ship_Player_C.ISetCameraView
struct UBPI_Ship_Player_C_ISetCameraView_Params
{
	TEnumAsByte<EPlayerShip_CameraViews>*              CameraView;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_Ship_Player.BPI_Ship_Player_C.IGetCameraView
struct UBPI_Ship_Player_C_IGetCameraView_Params
{
	TEnumAsByte<EPlayerShip_CameraViews>               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

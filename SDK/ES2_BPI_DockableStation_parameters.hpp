#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BPI_DockableStation_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPI_DockableStation.BPI_DockableStation_C.IShowPlayerShip
struct UBPI_DockableStation_C_IShowPlayerShip_Params
{
	int*                                               ShipIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_DockableStation.BPI_DockableStation_C.IShowShipForSale
struct UBPI_DockableStation_C_IShowShipForSale_Params
{
	int*                                               ShipIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_DockableStation.BPI_DockableStation_C.IGetCurrentPlayerShipIndex
struct UBPI_DockableStation_C_IGetCurrentPlayerShipIndex_Params
{
	int                                                CurrentIndex;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_DockableStation.BPI_DockableStation_C.IShowPreviousPlayerShip
struct UBPI_DockableStation_C_IShowPreviousPlayerShip_Params
{
};

// Function BPI_DockableStation.BPI_DockableStation_C.IShowNextPlayerShip
struct UBPI_DockableStation_C_IShowNextPlayerShip_Params
{
};

// Function BPI_DockableStation.BPI_DockableStation_C.IGetSceneRenderTarget
struct UBPI_DockableStation_C_IGetSceneRenderTarget_Params
{
	class UTexture*                                    SceneRenderTarget;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_DockableStation.BPI_DockableStation_C.IShouldUseSceneCapture
struct UBPI_DockableStation_C_IShouldUseSceneCapture_Params
{
	bool                                               UseSceneCapture;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_DockableStation.BPI_DockableStation_C.IRotateStationCamera
struct UBPI_DockableStation_C_IRotateStationCamera_Params
{
	struct FVector2D*                                  AxisInput;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_DockableStation.BPI_DockableStation_C.IRotateShipsForSaleCamera
struct UBPI_DockableStation_C_IRotateShipsForSaleCamera_Params
{
	struct FVector2D*                                  AxisInput;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

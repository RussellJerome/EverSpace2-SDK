#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BPI_DockableStation_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPI_DockableStation.BPI_DockableStation_C
// 0x0000 (0x0028 - 0x0028)
class UBPI_DockableStation_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_DockableStation.BPI_DockableStation_C");
		return ptr;
	}


	void IShowPlayerShip(int* ShipIndex);
	void IShowShipForSale(int* ShipIndex);
	void IGetCurrentPlayerShipIndex(int* CurrentIndex);
	void IShowPreviousPlayerShip();
	void IShowNextPlayerShip();
	void IGetSceneRenderTarget(class UTexture** SceneRenderTarget);
	void IShouldUseSceneCapture(bool* UseSceneCapture);
	void IRotateStationCamera(struct FVector2D* AxisInput);
	void IRotateShipsForSaleCamera(struct FVector2D* AxisInput);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

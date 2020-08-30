// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_CoreUObject_classes.hpp"
#include "ES2_Engine_classes.hpp"

namespace SDK
{
TNameEntryArray* FName::GNames = nullptr;
FUObjectArray* UObject::GObjects = nullptr;
UWorld** UWorld::GWorld = nullptr;
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

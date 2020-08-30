#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_Basic.hpp"
#include "ES2_Engine_classes.hpp"
#include "ES2_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum Ansel.EUIControlEffectTarget
enum class EUIControlEffectTarget : uint8_t
{
	Bloom                          = 0,
	DepthOfField                   = 1,
	ChromaticAberration            = 2,
	MotionBlur                     = 3,
	EUIControlEffectTarget_MAX     = 4
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

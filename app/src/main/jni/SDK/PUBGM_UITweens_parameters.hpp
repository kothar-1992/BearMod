#pragma once

// SDKGen by @xninjaleaks | @talhaeens 
// Send message for SDKGen and Offset Finder Tool

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function UITweens.TweenManager.TweenScale
struct UTweenManager_TweenScale_Params
{
	class UWidget*                                     Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector2D                                   from;                                                     // (Parm, IsPlainOldData)
	struct FVector2D                                   to;                                                       // (Parm, IsPlainOldData)
	float                                              Timespan;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UITweens.TweenManager.TweenPosition
struct UTweenManager_TweenPosition_Params
{
	class UWidget*                                     Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector2D                                   from;                                                     // (Parm, IsPlainOldData)
	struct FVector2D                                   to;                                                       // (Parm, IsPlainOldData)
	float                                              Timespan;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UITweens.TweenManager.TweenAlpha
struct UTweenManager_TweenAlpha_Params
{
	class UWidget*                                     Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              from;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              to;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Timespan;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UITweens.TweenManager.Tick
struct UTweenManager_Tick_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

}


// SDKGen by @xninjaleaks | @talhaeens 
// Send message for SDKGen and Offset Finder Tool

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Creative.CreativeAbilitySystemComponent.UpdateGridGhostBuildingLocation
// (Final, Native, Private)
// Parameters:
// float                          X                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          Y                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          Z                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UCreativeAbilitySystemComponent::UpdateGridGhostBuildingLocation(float X, float Y, float Z)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeAbilitySystemComponent.UpdateGridGhostBuildingLocation");

	UCreativeAbilitySystemComponent_UpdateGridGhostBuildingLocation_Params params;
	params.X = X;
	params.Y = Y;
	params.Z = Z;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeAbilitySystemComponent.UpdateGhostBuildingTransform
// (Final, Native, Private)

void UCreativeAbilitySystemComponent::UpdateGhostBuildingTransform()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeAbilitySystemComponent.UpdateGhostBuildingTransform");

	UCreativeAbilitySystemComponent_UpdateGhostBuildingTransform_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeAbilitySystemComponent.SetSnapTargetTransform
// (Final, Native, Private, HasOutParms, HasDefaults)
// Parameters:
// struct FTransform              SnapTargetTransform            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UCreativeAbilitySystemComponent::SetSnapTargetTransform(const struct FTransform& SnapTargetTransform)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeAbilitySystemComponent.SetSnapTargetTransform");

	UCreativeAbilitySystemComponent_SetSnapTargetTransform_Params params;
	params.SnapTargetTransform = SnapTargetTransform;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeAbilitySystemComponent.SetOverrideBuild
// (Final, Native, Private, HasOutParms, HasDefaults)
// Parameters:
// struct FVector                 Position                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FRotator                Rotation                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UCreativeAbilitySystemComponent::SetOverrideBuild(const struct FVector& Position, const struct FRotator& Rotation)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeAbilitySystemComponent.SetOverrideBuild");

	UCreativeAbilitySystemComponent_SetOverrideBuild_Params params;
	params.Position = Position;
	params.Rotation = Rotation;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeAbilitySystemComponent.SetLuaGhostBuildingTransformScale
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          X                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Y                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Z                              (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeAbilitySystemComponent::SetLuaGhostBuildingTransformScale(float X, float Y, float Z)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeAbilitySystemComponent.SetLuaGhostBuildingTransformScale");

	UCreativeAbilitySystemComponent_SetLuaGhostBuildingTransformScale_Params params;
	params.X = X;
	params.Y = Y;
	params.Z = Z;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeAbilitySystemComponent.SetLuaGhostBuildingTransformRotation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          Roll                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Yaw                            (Parm, ZeroConstructor, IsPlainOldData)
// float                          Pitch                          (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeAbilitySystemComponent::SetLuaGhostBuildingTransformRotation(float Roll, float Yaw, float Pitch)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeAbilitySystemComponent.SetLuaGhostBuildingTransformRotation");

	UCreativeAbilitySystemComponent_SetLuaGhostBuildingTransformRotation_Params params;
	params.Roll = Roll;
	params.Yaw = Yaw;
	params.Pitch = Pitch;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeAbilitySystemComponent.SetLuaGhostBuildingTransformLocation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          X                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Y                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Z                              (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeAbilitySystemComponent::SetLuaGhostBuildingTransformLocation(float X, float Y, float Z)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeAbilitySystemComponent.SetLuaGhostBuildingTransformLocation");

	UCreativeAbilitySystemComponent_SetLuaGhostBuildingTransformLocation_Params params;
	params.X = X;
	params.Y = Y;
	params.Z = Z;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeAbilitySystemComponent.LuaGhostBuildingInstaUpdate
// (Event, Public, BlueprintEvent)

void UCreativeAbilitySystemComponent::LuaGhostBuildingInstaUpdate()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeAbilitySystemComponent.LuaGhostBuildingInstaUpdate");

	UCreativeAbilitySystemComponent_LuaGhostBuildingInstaUpdate_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeAbilitySystemComponent.GetSnappedLocAxisZ
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          Loc                            (Parm, ZeroConstructor, IsPlainOldData)
// float                          Base                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UCreativeAbilitySystemComponent::GetSnappedLocAxisZ(float Loc, float Base)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeAbilitySystemComponent.GetSnappedLocAxisZ");

	UCreativeAbilitySystemComponent_GetSnappedLocAxisZ_Params params;
	params.Loc = Loc;
	params.Base = Base;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeAbilitySystemComponent.GetSnappedLocAxis
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            AxisType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UCreativeAbilitySystemComponent::GetSnappedLocAxis(float Value, int AxisType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeAbilitySystemComponent.GetSnappedLocAxis");

	UCreativeAbilitySystemComponent_GetSnappedLocAxis_Params params;
	params.Value = Value;
	params.AxisType = AxisType;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeAbilitySystemComponent.GetSetupBuildingID
// (Event, Public, BlueprintEvent)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UCreativeAbilitySystemComponent::GetSetupBuildingID()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeAbilitySystemComponent.GetSetupBuildingID");

	UCreativeAbilitySystemComponent_GetSetupBuildingID_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeAbilitySystemComponent.GetPlayerController
// (Final, Native, Public)
// Parameters:
// class ASTExtraPlayerController* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ASTExtraPlayerController* UCreativeAbilitySystemComponent::GetPlayerController()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeAbilitySystemComponent.GetPlayerController");

	UCreativeAbilitySystemComponent_GetPlayerController_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeAbilitySystemComponent.GetLuaSnapTargetTransform
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeAbilitySystemComponent::GetLuaSnapTargetTransform()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeAbilitySystemComponent.GetLuaSnapTargetTransform");

	UCreativeAbilitySystemComponent_GetLuaSnapTargetTransform_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeAbilitySystemComponent.GetLuaInstanceBoundingBox
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UCreativeAbilitySystemComponent::GetLuaInstanceBoundingBox()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeAbilitySystemComponent.GetLuaInstanceBoundingBox");

	UCreativeAbilitySystemComponent_GetLuaInstanceBoundingBox_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeAbilitySystemComponent.GetGhostBuildingTransform
// (Final, Native, Public, HasDefaults)
// Parameters:
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform UCreativeAbilitySystemComponent::GetGhostBuildingTransform()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeAbilitySystemComponent.GetGhostBuildingTransform");

	UCreativeAbilitySystemComponent_GetGhostBuildingTransform_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeAbilitySystemComponent.GetBuildingInstanceID
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UCreativeAbilitySystemComponent::GetBuildingInstanceID()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeAbilitySystemComponent.GetBuildingInstanceID");

	UCreativeAbilitySystemComponent_GetBuildingInstanceID_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeAbilitySystemComponent.GetBuildDistance
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UCreativeAbilitySystemComponent::GetBuildDistance()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeAbilitySystemComponent.GetBuildDistance");

	UCreativeAbilitySystemComponent_GetBuildDistance_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeAbilitySystemComponent.ClearOverrideBuild
// (Final, Native, Private)

void UCreativeAbilitySystemComponent::ClearOverrideBuild()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeAbilitySystemComponent.ClearOverrideBuild");

	UCreativeAbilitySystemComponent_ClearOverrideBuild_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeActorInteractionComponent.SortCanEditParamsObjs
// (Event, Protected, BlueprintEvent)

void UCreativeModeActorInteractionComponent::SortCanEditParamsObjs()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeActorInteractionComponent.SortCanEditParamsObjs");

	UCreativeModeActorInteractionComponent_SortCanEditParamsObjs_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeActorInteractionComponent.SetCrossHairTransformObjInstanceID
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FString                 InstanceID                     (Parm, ZeroConstructor)

void UCreativeModeActorInteractionComponent::SetCrossHairTransformObjInstanceID(const struct FString& InstanceID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeActorInteractionComponent.SetCrossHairTransformObjInstanceID");

	UCreativeModeActorInteractionComponent_SetCrossHairTransformObjInstanceID_Params params;
	params.InstanceID = InstanceID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeActorInteractionComponent.SetCrossHairSelectedObjInstanceID
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FString                 InstanceID                     (Parm, ZeroConstructor)

void UCreativeModeActorInteractionComponent::SetCrossHairSelectedObjInstanceID(const struct FString& InstanceID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeActorInteractionComponent.SetCrossHairSelectedObjInstanceID");

	UCreativeModeActorInteractionComponent_SetCrossHairSelectedObjInstanceID_Params params;
	params.InstanceID = InstanceID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeActorInteractionComponent.SetCrossHairPickActor
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                  PickActor                      (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeModeActorInteractionComponent::SetCrossHairPickActor(class AActor* PickActor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeActorInteractionComponent.SetCrossHairPickActor");

	UCreativeModeActorInteractionComponent_SetCrossHairPickActor_Params params;
	params.PickActor = PickActor;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeActorInteractionComponent.GetSectorCheckIntervalCfg
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UCreativeModeActorInteractionComponent::GetSectorCheckIntervalCfg()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeActorInteractionComponent.GetSectorCheckIntervalCfg");

	UCreativeModeActorInteractionComponent_GetSectorCheckIntervalCfg_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeActorInteractionComponent.GetSectorCheckDistance
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UCreativeModeActorInteractionComponent::GetSectorCheckDistance()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeActorInteractionComponent.GetSectorCheckDistance");

	UCreativeModeActorInteractionComponent_GetSectorCheckDistance_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeActorInteractionComponent.GetSectorCheckAngle
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UCreativeModeActorInteractionComponent::GetSectorCheckAngle()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeActorInteractionComponent.GetSectorCheckAngle");

	UCreativeModeActorInteractionComponent_GetSectorCheckAngle_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeActorInteractionComponent.GetPlayerHalfHeight
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UCreativeModeActorInteractionComponent::GetPlayerHalfHeight()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeActorInteractionComponent.GetPlayerHalfHeight");

	UCreativeModeActorInteractionComponent_GetPlayerHalfHeight_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeActorInteractionComponent.GetPlayerController
// (Final, Native, Protected)
// Parameters:
// class ASTExtraPlayerController* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ASTExtraPlayerController* UCreativeModeActorInteractionComponent::GetPlayerController()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeActorInteractionComponent.GetPlayerController");

	UCreativeModeActorInteractionComponent_GetPlayerController_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeActorInteractionComponent.GetCrossHairTransformDistanceCfg
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UCreativeModeActorInteractionComponent::GetCrossHairTransformDistanceCfg()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeActorInteractionComponent.GetCrossHairTransformDistanceCfg");

	UCreativeModeActorInteractionComponent_GetCrossHairTransformDistanceCfg_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeActorInteractionComponent.GetCrossHairPickDistanceCfg
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UCreativeModeActorInteractionComponent::GetCrossHairPickDistanceCfg()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeActorInteractionComponent.GetCrossHairPickDistanceCfg");

	UCreativeModeActorInteractionComponent_GetCrossHairPickDistanceCfg_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeActorInteractionComponent.GetCrossHairCheckIntervalCfg
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UCreativeModeActorInteractionComponent::GetCrossHairCheckIntervalCfg()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeActorInteractionComponent.GetCrossHairCheckIntervalCfg");

	UCreativeModeActorInteractionComponent_GetCrossHairCheckIntervalCfg_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeActorInteractionComponent.GetCrossHairCheckDistanceCfg
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UCreativeModeActorInteractionComponent::GetCrossHairCheckDistanceCfg()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeActorInteractionComponent.GetCrossHairCheckDistanceCfg");

	UCreativeModeActorInteractionComponent_GetCrossHairCheckDistanceCfg_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeActorInteractionComponent.ClearCanEditParamsObjs
// (Event, Protected, BlueprintEvent)

void UCreativeModeActorInteractionComponent::ClearCanEditParamsObjs()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeActorInteractionComponent.ClearCanEditParamsObjs");

	UCreativeModeActorInteractionComponent_ClearCanEditParamsObjs_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeActorInteractionComponent.AddCanEditObject
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UObject*                 uCanEditObject                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          Angle                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          Distance                       (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeModeActorInteractionComponent::AddCanEditObject(class UObject* uCanEditObject, float Angle, float Distance)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeActorInteractionComponent.AddCanEditObject");

	UCreativeModeActorInteractionComponent_AddCanEditObject_Params params;
	params.uCanEditObject = uCanEditObject;
	params.Angle = Angle;
	params.Distance = Distance;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeAdaptiveSchedulManager.SetObjectProfile
// (Final, Native, Public)
// Parameters:
// bool                           bOpen                          (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeAdaptiveSchedulManager::SetObjectProfile(bool bOpen)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeAdaptiveSchedulManager.SetObjectProfile");

	UCreativeAdaptiveSchedulManager_SetObjectProfile_Params params;
	params.bOpen = bOpen;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeAdaptiveSchedulManager.SetLuaProfile
// (Final, Native, Public)
// Parameters:
// bool                           bOpen                          (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeAdaptiveSchedulManager::SetLuaProfile(bool bOpen)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeAdaptiveSchedulManager.SetLuaProfile");

	UCreativeAdaptiveSchedulManager_SetLuaProfile_Params params;
	params.bOpen = bOpen;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeAdaptiveSchedulManager.RecordFunctionStart
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ClassName                      (Parm, ZeroConstructor)
// struct FString                 FunctionName                   (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UCreativeAdaptiveSchedulManager::RecordFunctionStart(const struct FString& ClassName, const struct FString& FunctionName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeAdaptiveSchedulManager.RecordFunctionStart");

	UCreativeAdaptiveSchedulManager_RecordFunctionStart_Params params;
	params.ClassName = ClassName;
	params.FunctionName = FunctionName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeAdaptiveSchedulManager.RecordFunctionEnd
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ClassName                      (Parm, ZeroConstructor)
// struct FString                 FunctionName                   (Parm, ZeroConstructor)
// int                            Cycles                         (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeAdaptiveSchedulManager::RecordFunctionEnd(const struct FString& ClassName, const struct FString& FunctionName, int Cycles)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeAdaptiveSchedulManager.RecordFunctionEnd");

	UCreativeAdaptiveSchedulManager_RecordFunctionEnd_Params params;
	params.ClassName = ClassName;
	params.FunctionName = FunctionName;
	params.Cycles = Cycles;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeAdaptiveSchedulManager.LuaPath2Tag
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 luaPath                        (Parm, ZeroConstructor)
// struct FString                 FunctionName                   (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UCreativeAdaptiveSchedulManager::LuaPath2Tag(const struct FString& luaPath, const struct FString& FunctionName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeAdaptiveSchedulManager.LuaPath2Tag");

	UCreativeAdaptiveSchedulManager_LuaPath2Tag_Params params;
	params.luaPath = luaPath;
	params.FunctionName = FunctionName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeAdaptiveSchedulManager.LogOutputObjectMemoryInfo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bClear                         (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeAdaptiveSchedulManager::LogOutputObjectMemoryInfo(bool bClear)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeAdaptiveSchedulManager.LogOutputObjectMemoryInfo");

	UCreativeAdaptiveSchedulManager_LogOutputObjectMemoryInfo_Params params;
	params.bClear = bClear;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeAdaptiveSchedulManager.LogOutputLuaFunctionCallInfo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bClear                         (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeAdaptiveSchedulManager::LogOutputLuaFunctionCallInfo(bool bClear)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeAdaptiveSchedulManager.LogOutputLuaFunctionCallInfo");

	UCreativeAdaptiveSchedulManager_LogOutputLuaFunctionCallInfo_Params params;
	params.bClear = bClear;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeAdaptiveSchedulManager.LogoutLuaRecord
// (Final, Native, Public)
// Parameters:
// TMap<int, int64_t>             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TMap<int, int64_t> UCreativeAdaptiveSchedulManager::LogoutLuaRecord()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeAdaptiveSchedulManager.LogoutLuaRecord");

	UCreativeAdaptiveSchedulManager_LogoutLuaRecord_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeAdaptiveSchedulManager.LLMEnabled
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeAdaptiveSchedulManager::LLMEnabled()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeAdaptiveSchedulManager.LLMEnabled");

	UCreativeAdaptiveSchedulManager_LLMEnabled_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeAdaptiveSchedulManager.InitTagIfNotExist
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 TagName                        (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UCreativeAdaptiveSchedulManager::InitTagIfNotExist(const struct FString& TagName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeAdaptiveSchedulManager.InitTagIfNotExist");

	UCreativeAdaptiveSchedulManager_InitTagIfNotExist_Params params;
	params.TagName = TagName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeAdaptiveSchedulManager.InitNewLuaPath2Tag
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 luaPath                        (Parm, ZeroConstructor)
// struct FString                 FunctionName                   (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UCreativeAdaptiveSchedulManager::InitNewLuaPath2Tag(const struct FString& luaPath, const struct FString& FunctionName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeAdaptiveSchedulManager.InitNewLuaPath2Tag");

	UCreativeAdaptiveSchedulManager_InitNewLuaPath2Tag_Params params;
	params.luaPath = luaPath;
	params.FunctionName = FunctionName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeAdaptiveSchedulManager.GetPureLuaUsedBytes
// (Final, Native, Static, Public)
// Parameters:
// uint64_t                       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

uint64_t UCreativeAdaptiveSchedulManager::GetPureLuaUsedBytes()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeAdaptiveSchedulManager.GetPureLuaUsedBytes");

	UCreativeAdaptiveSchedulManager_GetPureLuaUsedBytes_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeAdaptiveSchedulManager.GetLuaUsedBytes
// (Final, Native, Static, Public)
// Parameters:
// uint64_t                       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

uint64_t UCreativeAdaptiveSchedulManager::GetLuaUsedBytes()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeAdaptiveSchedulManager.GetLuaUsedBytes");

	UCreativeAdaptiveSchedulManager_GetLuaUsedBytes_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeAdaptiveSchedulManager.Get
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContext                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UCreativeAdaptiveSchedulManager* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCreativeAdaptiveSchedulManager* UCreativeAdaptiveSchedulManager::Get(class UObject* WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeAdaptiveSchedulManager.Get");

	UCreativeAdaptiveSchedulManager_Get_Params params;
	params.WorldContext = WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeAdaptiveSchedulManager.AfterDead
// (Event, Public, BlueprintEvent)
// Parameters:
// int                            SpecType                       (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeAdaptiveSchedulManager::AfterDead(int SpecType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeAdaptiveSchedulManager.AfterDead");

	UCreativeAdaptiveSchedulManager_AfterDead_Params params;
	params.SpecType = SpecType;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeLuaSignalObjectBase.TryBeginPlay
// (Final, Native, Public, BlueprintCallable)

void UCreativeLuaSignalObjectBase::TryBeginPlay()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaSignalObjectBase.TryBeginPlay");

	UCreativeLuaSignalObjectBase_TryBeginPlay_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeLuaSignalObjectBase.SetLuaFilePath
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 FilePath                       (Parm, ZeroConstructor)

void UCreativeLuaSignalObjectBase::SetLuaFilePath(const struct FString& FilePath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaSignalObjectBase.SetLuaFilePath");

	UCreativeLuaSignalObjectBase_SetLuaFilePath_Params params;
	params.FilePath = FilePath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeLuaSignalObjectBase.RemoveCommonEvent
// (Final, Native, Protected)
// Parameters:
// int                            EventHandle                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UCreativeLuaSignalObjectBase::RemoveCommonEvent(int EventHandle)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaSignalObjectBase.RemoveCommonEvent");

	UCreativeLuaSignalObjectBase_RemoveCommonEvent_Params params;
	params.EventHandle = EventHandle;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeLuaSignalObjectBase.ReceivePostBeginPlay
// (Event, Protected, BlueprintEvent)

void UCreativeLuaSignalObjectBase::ReceivePostBeginPlay()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaSignalObjectBase.ReceivePostBeginPlay");

	UCreativeLuaSignalObjectBase_ReceivePostBeginPlay_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeLuaSignalObjectBase.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void UCreativeLuaSignalObjectBase::ReceiveBeginPlay()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaSignalObjectBase.ReceiveBeginPlay");

	UCreativeLuaSignalObjectBase_ReceiveBeginPlay_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeLuaSignalObjectBase.ClearAllCommonEvent
// (Final, Native, Protected)

void UCreativeLuaSignalObjectBase::ClearAllCommonEvent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaSignalObjectBase.ClearAllCommonEvent");

	UCreativeLuaSignalObjectBase_ClearAllCommonEvent_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeLuaSignalObjectBase.AddCommonEvent
// (Final, Native, Protected)
// Parameters:
// struct FString                 EventType                      (Parm, ZeroConstructor)
// struct FString                 EventID                        (Parm, ZeroConstructor)
// struct FString                 FunctionName                   (Parm, ZeroConstructor)

void UCreativeLuaSignalObjectBase::AddCommonEvent(const struct FString& EventType, const struct FString& EventID, const struct FString& FunctionName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaSignalObjectBase.AddCommonEvent");

	UCreativeLuaSignalObjectBase_AddCommonEvent_Params params;
	params.EventType = EventType;
	params.EventID = EventID;
	params.FunctionName = FunctionName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeApiObject.SetModuleName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 NewName                        (Parm, ZeroConstructor)

void UCreativeApiObject::SetModuleName(const struct FString& NewName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeApiObject.SetModuleName");

	UCreativeApiObject_SetModuleName_Params params;
	params.NewName = NewName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeApiObject.GetModuleName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UCreativeApiObject::GetModuleName()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeApiObject.GetModuleName");

	UCreativeApiObject_GetModuleName_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeAssetManager.ReceiveOnGameStateBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// class AGameStateBase*          GameState                      (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeAssetManager::ReceiveOnGameStateBeginPlay(class AGameStateBase* GameState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeAssetManager.ReceiveOnGameStateBeginPlay");

	UCreativeAssetManager_ReceiveOnGameStateBeginPlay_Params params;
	params.GameState = GameState;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeAssetManager.ReceiveInitAssetInfo
// (Event, Public, BlueprintEvent)
// Parameters:
// int                            AssetId                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UCreativeAssetManager::ReceiveInitAssetInfo(int AssetId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeAssetManager.ReceiveInitAssetInfo");

	UCreativeAssetManager_ReceiveInitAssetInfo_Params params;
	params.AssetId = AssetId;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeAssetManager.OnGameStateBeginPlay
// (Final, Native, Public)
// Parameters:
// class AGameStateBase*          GameState                      (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeAssetManager::OnGameStateBeginPlay(class AGameStateBase* GameState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeAssetManager.OnGameStateBeginPlay");

	UCreativeAssetManager_OnGameStateBeginPlay_Params params;
	params.GameState = GameState;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeAssetManager.GetObbyMeshPath
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            AssetId                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UCreativeAssetManager::GetObbyMeshPath(int AssetId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeAssetManager.GetObbyMeshPath");

	UCreativeAssetManager_GetObbyMeshPath_Params params;
	params.AssetId = AssetId;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeAssetManager.GetMaterialPath
// (Event, Public, BlueprintEvent, Const)
// Parameters:
// int                            MaterialID                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UCreativeAssetManager::GetMaterialPath(int MaterialID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeAssetManager.GetMaterialPath");

	UCreativeAssetManager_GetMaterialPath_Params params;
	params.MaterialID = MaterialID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeAssetManager.Get
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContext                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UCreativeAssetManager*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCreativeAssetManager* UCreativeAssetManager::Get(class UObject* WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeAssetManager.Get");

	UCreativeAssetManager_Get_Params params;
	params.WorldContext = WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeAssetManager.AddAssetInfo
// (Final, Native, Public, HasOutParms)
// Parameters:
// int                            AssetId                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FCreativeAssetInfo      AssetInfo                      (ConstParm, Parm, OutParm, ReferenceParm)

void UCreativeAssetManager::AddAssetInfo(int AssetId, const struct FCreativeAssetInfo& AssetInfo)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeAssetManager.AddAssetInfo");

	UCreativeAssetManager_AddAssetInfo_Params params;
	params.AssetId = AssetId;
	params.AssetInfo = AssetInfo;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeAutoGenComponent.GetNodeSegmentContent
// (Final, Native, Private, HasOutParms, BlueprintCallable)
// Parameters:
// struct FCreativeAutoGenItemDataSegment Segment                        (Parm, OutParm)
// TArray<unsigned char>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<unsigned char> UCreativeAutoGenComponent::GetNodeSegmentContent(struct FCreativeAutoGenItemDataSegment* Segment)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeAutoGenComponent.GetNodeSegmentContent");

	UCreativeAutoGenComponent_GetNodeSegmentContent_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Segment != nullptr)
		*Segment = params.Segment;

	return params.ReturnValue;
}


// Function Creative.CreativeAutoGenComponent.AddInstanceDataContent
// (Final, Native, Private, HasOutParms, BlueprintCallable)
// Parameters:
// struct FCreativeAutoGenDataSegment Segment                        (Parm, OutParm)
// TArray<unsigned char>          Content                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeAutoGenComponent::AddInstanceDataContent(TArray<unsigned char> Content, struct FCreativeAutoGenDataSegment* Segment)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeAutoGenComponent.AddInstanceDataContent");

	UCreativeAutoGenComponent_AddInstanceDataContent_Params params;
	params.Content = Content;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Segment != nullptr)
		*Segment = params.Segment;

	return params.ReturnValue;
}


// Function Creative.CreativeModeBackpackUtils.ResCanAddToBackpackNum
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UBackpackComponent*      BackpackComponent              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            resID                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            AddNum                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UCreativeModeBackpackUtils::ResCanAddToBackpackNum(class UBackpackComponent* BackpackComponent, int resID, int AddNum)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBackpackUtils.ResCanAddToBackpackNum");

	UCreativeModeBackpackUtils_ResCanAddToBackpackNum_Params params;
	params.BackpackComponent = BackpackComponent;
	params.resID = resID;
	params.AddNum = AddNum;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeBackpackUtils.GetItemMaxCount
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UBackpackComponent*      BackpackComponent              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            resID                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UCreativeModeBackpackUtils::GetItemMaxCount(class UBackpackComponent* BackpackComponent, int resID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBackpackUtils.GetItemMaxCount");

	UCreativeModeBackpackUtils_GetItemMaxCount_Params params;
	params.BackpackComponent = BackpackComponent;
	params.resID = resID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeBackpackUtils.AddAIAvatarItem
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UBackpackComponent*      BackpackComponent              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)
// int                            Color                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            Pattern                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            Num                            (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeModeBackpackUtils::AddAIAvatarItem(class UBackpackComponent* BackpackComponent, int ID, int Color, int Pattern, int Num)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBackpackUtils.AddAIAvatarItem");

	UCreativeModeBackpackUtils_AddAIAvatarItem_Params params;
	params.BackpackComponent = BackpackComponent;
	params.ID = ID;
	params.Color = Color;
	params.Pattern = Pattern;
	params.Num = Num;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeBinaryDataManager.SetInitBinaryDataSize
// (Final, Native, Public)
// Parameters:
// uint32_t                       DataSize                       (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeBinaryDataManager::SetInitBinaryDataSize(uint32_t DataSize)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBinaryDataManager.SetInitBinaryDataSize");

	UCreativeBinaryDataManager_SetInitBinaryDataSize_Params params;
	params.DataSize = DataSize;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeBinaryDataManager.ReceiveOnPreLoadMap
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 MapName                        (Parm, ZeroConstructor)

void UCreativeBinaryDataManager::ReceiveOnPreLoadMap(const struct FString& MapName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBinaryDataManager.ReceiveOnPreLoadMap");

	UCreativeBinaryDataManager_ReceiveOnPreLoadMap_Params params;
	params.MapName = MapName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeBinaryDataManager.ReceiveOnPostSetLuaEventBridgeInstance
// (Event, Public, BlueprintEvent)

void UCreativeBinaryDataManager::ReceiveOnPostSetLuaEventBridgeInstance()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBinaryDataManager.ReceiveOnPostSetLuaEventBridgeInstance");

	UCreativeBinaryDataManager_ReceiveOnPostSetLuaEventBridgeInstance_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeBinaryDataManager.ReceiveOnPostLoadMapWithWorld
// (Event, Public, BlueprintEvent)
// Parameters:
// class UWorld*                  World                          (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeBinaryDataManager::ReceiveOnPostLoadMapWithWorld(class UWorld* World)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBinaryDataManager.ReceiveOnPostLoadMapWithWorld");

	UCreativeBinaryDataManager_ReceiveOnPostLoadMapWithWorld_Params params;
	params.World = World;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeBinaryDataManager.OnRep_InitBinaryDataSize
// (Final, Native, Public)

void UCreativeBinaryDataManager::OnRep_InitBinaryDataSize()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBinaryDataManager.OnRep_InitBinaryDataSize");

	UCreativeBinaryDataManager_OnRep_InitBinaryDataSize_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeBinaryDataManager.OnPreLoadMap
// (Final, Native, Public)
// Parameters:
// struct FString                 MapName                        (Parm, ZeroConstructor)

void UCreativeBinaryDataManager::OnPreLoadMap(const struct FString& MapName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBinaryDataManager.OnPreLoadMap");

	UCreativeBinaryDataManager_OnPreLoadMap_Params params;
	params.MapName = MapName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeBinaryDataManager.OnPostSetLuaEventBridgeInstance
// (Final, Native, Public)

void UCreativeBinaryDataManager::OnPostSetLuaEventBridgeInstance()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBinaryDataManager.OnPostSetLuaEventBridgeInstance");

	UCreativeBinaryDataManager_OnPostSetLuaEventBridgeInstance_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeBinaryDataManager.OnPostLoadMapWithWorld
// (Final, Native, Public)
// Parameters:
// class UWorld*                  World                          (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeBinaryDataManager::OnPostLoadMapWithWorld(class UWorld* World)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBinaryDataManager.OnPostLoadMapWithWorld");

	UCreativeBinaryDataManager_OnPostLoadMapWithWorld_Params params;
	params.World = World;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeBinaryDataManager.GetInitBinaryDataSize
// (Final, Native, Public)
// Parameters:
// uint32_t                       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

uint32_t UCreativeBinaryDataManager::GetInitBinaryDataSize()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBinaryDataManager.GetInitBinaryDataSize");

	UCreativeBinaryDataManager_GetInitBinaryDataSize_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeBinaryDataManager.Get
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContext                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UCreativeBinaryDataManager* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCreativeBinaryDataManager* UCreativeBinaryDataManager::Get(class UObject* WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBinaryDataManager.Get");

	UCreativeBinaryDataManager_Get_Params params;
	params.WorldContext = WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeBlockyLuaManager.SetRTLOffsetY
// (Final, Native, Public)
// Parameters:
// float                          Offset                         (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeBlockyLuaManager::SetRTLOffsetY(float Offset)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBlockyLuaManager.SetRTLOffsetY");

	UCreativeBlockyLuaManager_SetRTLOffsetY_Params params;
	params.Offset = Offset;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeBlockyLuaManager.SetLTROffsetY
// (Final, Native, Public)
// Parameters:
// float                          Offset                         (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeBlockyLuaManager::SetLTROffsetY(float Offset)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBlockyLuaManager.SetLTROffsetY");

	UCreativeBlockyLuaManager_SetLTROffsetY_Params params;
	params.Offset = Offset;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeBlockyLuaManager.SetFontSize
// (Final, Native, Public)
// Parameters:
// int                            FontSize                       (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeBlockyLuaManager::SetFontSize(int FontSize)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBlockyLuaManager.SetFontSize");

	UCreativeBlockyLuaManager_SetFontSize_Params params;
	params.FontSize = FontSize;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeBlockyLuaManager.SetBlockIdFromSlotString
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FBlockySlotString       SlotString                     (Parm, OutParm)
// struct FString                 BlockID                        (Parm, ZeroConstructor)

void UCreativeBlockyLuaManager::SetBlockIdFromSlotString(const struct FString& BlockID, struct FBlockySlotString* SlotString)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBlockyLuaManager.SetBlockIdFromSlotString");

	UCreativeBlockyLuaManager_SetBlockIdFromSlotString_Params params;
	params.BlockID = BlockID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (SlotString != nullptr)
		*SlotString = params.SlotString;
}


// Function Creative.CreativeBlockyLuaManager.ReturnPresetDescsToCache
// (Final, Native, Public)
// Parameters:
// TArray<class UPresetDesc*>     ReturnDescs                    (Parm, ZeroConstructor)

void UCreativeBlockyLuaManager::ReturnPresetDescsToCache(TArray<class UPresetDesc*> ReturnDescs)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBlockyLuaManager.ReturnPresetDescsToCache");

	UCreativeBlockyLuaManager_ReturnPresetDescsToCache_Params params;
	params.ReturnDescs = ReturnDescs;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeBlockyLuaManager.RemoveDynamicPresetDescs
// (Final, Native, Public)
// Parameters:
// TArray<class UPresetDesc*>     PresetDescs                    (Parm, ZeroConstructor)

void UCreativeBlockyLuaManager::RemoveDynamicPresetDescs(TArray<class UPresetDesc*> PresetDescs)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBlockyLuaManager.RemoveDynamicPresetDescs");

	UCreativeBlockyLuaManager_RemoveDynamicPresetDescs_Params params;
	params.PresetDescs = PresetDescs;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeBlockyLuaManager.RegisterNameCache
// (Final, Native, Public)
// Parameters:
// class UBlockyGraphData*        GraphData                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UCreativeBlockyLuaManager::RegisterNameCache(class UBlockyGraphData* GraphData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBlockyLuaManager.RegisterNameCache");

	UCreativeBlockyLuaManager_RegisterNameCache_Params params;
	params.GraphData = GraphData;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeBlockyLuaManager.RefreshBlockyFont
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FSlateFontInfo          DefaultFont                    (Parm, OutParm)

void UCreativeBlockyLuaManager::RefreshBlockyFont(struct FSlateFontInfo* DefaultFont)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBlockyLuaManager.RefreshBlockyFont");

	UCreativeBlockyLuaManager_RefreshBlockyFont_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (DefaultFont != nullptr)
		*DefaultFont = params.DefaultFont;
}


// Function Creative.CreativeBlockyLuaManager.ReceivePresetFromCustomSelection
// (Final, Native, Public)
// Parameters:
// class UObjectDesc*             Desc                           (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeBlockyLuaManager::ReceivePresetFromCustomSelection(class UObjectDesc* Desc)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBlockyLuaManager.ReceivePresetFromCustomSelection");

	UCreativeBlockyLuaManager_ReceivePresetFromCustomSelection_Params params;
	params.Desc = Desc;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeBlockyLuaManager.ReceiveOpenGuide
// (Event, Public, BlueprintEvent)

void UCreativeBlockyLuaManager::ReceiveOpenGuide()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBlockyLuaManager.ReceiveOpenGuide");

	UCreativeBlockyLuaManager_ReceiveOpenGuide_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeBlockyLuaManager.ReceiveOnGameStateBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// class AGameStateBase*          GameState                      (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeBlockyLuaManager::ReceiveOnGameStateBeginPlay(class AGameStateBase* GameState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBlockyLuaManager.ReceiveOnGameStateBeginPlay");

	UCreativeBlockyLuaManager_ReceiveOnGameStateBeginPlay_Params params;
	params.GameState = GameState;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeBlockyLuaManager.ReceivedGetLocalizeResStrHandleFailed
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 IdOrStr                        (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UCreativeBlockyLuaManager::ReceivedGetLocalizeResStrHandleFailed(const struct FString& IdOrStr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBlockyLuaManager.ReceivedGetLocalizeResStrHandleFailed");

	UCreativeBlockyLuaManager_ReceivedGetLocalizeResStrHandleFailed_Params params;
	params.IdOrStr = IdOrStr;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeBlockyLuaManager.ReceiveCheckStringValidFunction
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FString                 CheckString                    (Parm, ZeroConstructor)
// struct FCheckStringHandleData  Data                           (ConstParm, Parm, OutParm, ReferenceParm)

void UCreativeBlockyLuaManager::ReceiveCheckStringValidFunction(const struct FString& CheckString, const struct FCheckStringHandleData& Data)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBlockyLuaManager.ReceiveCheckStringValidFunction");

	UCreativeBlockyLuaManager_ReceiveCheckStringValidFunction_Params params;
	params.CheckString = CheckString;
	params.Data = Data;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeBlockyLuaManager.ReceiveCheckStringResult
// (Final, Native, Public, HasOutParms)
// Parameters:
// bool                           Result                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ValidString                    (Parm, ZeroConstructor)
// struct FCheckStringHandleData  Data                           (ConstParm, Parm, OutParm, ReferenceParm)

void UCreativeBlockyLuaManager::ReceiveCheckStringResult(bool Result, const struct FString& ValidString, const struct FCheckStringHandleData& Data)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBlockyLuaManager.ReceiveCheckStringResult");

	UCreativeBlockyLuaManager_ReceiveCheckStringResult_Params params;
	params.Result = Result;
	params.ValidString = ValidString;
	params.Data = Data;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeBlockyLuaManager.OnReceiveMessageData
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// TArray<struct FMessageDataWrapper> MessageDatas                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UCreativeBlockyLuaManager::OnReceiveMessageData(TArray<struct FMessageDataWrapper> MessageDatas)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBlockyLuaManager.OnReceiveMessageData");

	UCreativeBlockyLuaManager_OnReceiveMessageData_Params params;
	params.MessageDatas = MessageDatas;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeBlockyLuaManager.OnReceiveInitDisableFunc
// (Event, Public, BlueprintEvent)

void UCreativeBlockyLuaManager::OnReceiveInitDisableFunc()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBlockyLuaManager.OnReceiveInitDisableFunc");

	UCreativeBlockyLuaManager_OnReceiveInitDisableFunc_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeBlockyLuaManager.OnInitBlockyLuaConfig
// (Final, Native, Public)

void UCreativeBlockyLuaManager::OnInitBlockyLuaConfig()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBlockyLuaManager.OnInitBlockyLuaConfig");

	UCreativeBlockyLuaManager_OnInitBlockyLuaConfig_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeBlockyLuaManager.OnGameTypePreChanged
// (Final, Native, Public)
// Parameters:
// unsigned char                  LastGameType                   (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  CurrentGameType                (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeBlockyLuaManager::OnGameTypePreChanged(unsigned char LastGameType, unsigned char CurrentGameType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBlockyLuaManager.OnGameTypePreChanged");

	UCreativeBlockyLuaManager_OnGameTypePreChanged_Params params;
	params.LastGameType = LastGameType;
	params.CurrentGameType = CurrentGameType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeBlockyLuaManager.OnGameStateBeginPlay
// (Final, Native, Public)
// Parameters:
// class AGameStateBase*          GameState                      (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeBlockyLuaManager::OnGameStateBeginPlay(class AGameStateBase* GameState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBlockyLuaManager.OnGameStateBeginPlay");

	UCreativeBlockyLuaManager_OnGameStateBeginPlay_Params params;
	params.GameState = GameState;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeBlockyLuaManager.IsLTRLanguage
// (Final, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeBlockyLuaManager::IsLTRLanguage()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBlockyLuaManager.IsLTRLanguage");

	UCreativeBlockyLuaManager_IsLTRLanguage_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeBlockyLuaManager.IsLTR
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeBlockyLuaManager::IsLTR()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBlockyLuaManager.IsLTR");

	UCreativeBlockyLuaManager_IsLTR_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeBlockyLuaManager.InitDisableFunction
// (Final, Native, Public)
// Parameters:
// TArray<struct FString>         funcs                          (Parm, ZeroConstructor)

void UCreativeBlockyLuaManager::InitDisableFunction(TArray<struct FString> funcs)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBlockyLuaManager.InitDisableFunction");

	UCreativeBlockyLuaManager_InitDisableFunction_Params params;
	params.funcs = funcs;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeBlockyLuaManager.GetPresetDescs
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FString                 TypeName                       (Parm, OutParm, ZeroConstructor)
// int                            GetCount                       (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UPresetDesc*>     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UPresetDesc*> UCreativeBlockyLuaManager::GetPresetDescs(int GetCount, struct FString* TypeName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBlockyLuaManager.GetPresetDescs");

	UCreativeBlockyLuaManager_GetPresetDescs_Params params;
	params.GetCount = GetCount;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TypeName != nullptr)
		*TypeName = params.TypeName;

	return params.ReturnValue;
}


// Function Creative.CreativeBlockyLuaManager.GetPresetDesc
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FString                 TypeName                       (Parm, OutParm, ZeroConstructor)
// class UPresetDesc*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UPresetDesc* UCreativeBlockyLuaManager::GetPresetDesc(struct FString* TypeName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBlockyLuaManager.GetPresetDesc");

	UCreativeBlockyLuaManager_GetPresetDesc_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TypeName != nullptr)
		*TypeName = params.TypeName;

	return params.ReturnValue;
}


// Function Creative.CreativeBlockyLuaManager.GetGraphDataObjectFormContent
// (Final, Native, Public, HasOutParms)
// Parameters:
// TArray<unsigned char>          GrapbAstContent                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<unsigned char>          GlobalVarAstContent            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           CallLoadFinish                 (Parm, ZeroConstructor, IsPlainOldData)
// class UBlockyGraphData*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UBlockyGraphData* UCreativeBlockyLuaManager::GetGraphDataObjectFormContent(TArray<unsigned char> GrapbAstContent, TArray<unsigned char> GlobalVarAstContent, bool CallLoadFinish)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBlockyLuaManager.GetGraphDataObjectFormContent");

	UCreativeBlockyLuaManager_GetGraphDataObjectFormContent_Params params;
	params.GrapbAstContent = GrapbAstContent;
	params.GlobalVarAstContent = GlobalVarAstContent;
	params.CallLoadFinish = CallLoadFinish;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeBlockyLuaManager.GetDynamicPresetDescsByKey
// (Final, Native, Public)
// Parameters:
// struct FString                 KeyName                        (Parm, ZeroConstructor)
// class UPresetDesc*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UPresetDesc* UCreativeBlockyLuaManager::GetDynamicPresetDescsByKey(const struct FString& KeyName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBlockyLuaManager.GetDynamicPresetDescsByKey");

	UCreativeBlockyLuaManager_GetDynamicPresetDescsByKey_Params params;
	params.KeyName = KeyName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeBlockyLuaManager.GetBlockyLuaConfig
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UBlockyLuaConfig*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UBlockyLuaConfig* UCreativeBlockyLuaManager::GetBlockyLuaConfig()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBlockyLuaManager.GetBlockyLuaConfig");

	UCreativeBlockyLuaManager_GetBlockyLuaConfig_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeBlockyLuaManager.GetBlockNameByStr
// (Final, Native, Public)
// Parameters:
// struct FString                 BlockyId                       (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UCreativeBlockyLuaManager::GetBlockNameByStr(const struct FString& BlockyId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBlockyLuaManager.GetBlockNameByStr");

	UCreativeBlockyLuaManager_GetBlockNameByStr_Params params;
	params.BlockyId = BlockyId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeBlockyLuaManager.GetBlockIdFromSlotString
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FBlockySlotString       SlotString                     (Parm, OutParm)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UCreativeBlockyLuaManager::GetBlockIdFromSlotString(struct FBlockySlotString* SlotString)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBlockyLuaManager.GetBlockIdFromSlotString");

	UCreativeBlockyLuaManager_GetBlockIdFromSlotString_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (SlotString != nullptr)
		*SlotString = params.SlotString;

	return params.ReturnValue;
}


// Function Creative.CreativeBlockyLuaManager.Get
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContext                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UCreativeBlockyLuaManager* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCreativeBlockyLuaManager* UCreativeBlockyLuaManager::Get(class UObject* WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBlockyLuaManager.Get");

	UCreativeBlockyLuaManager_Get_Params params;
	params.WorldContext = WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeBlockyLuaManager.GenerateLuaCodeFormJson
// (Final, Native, Public)
// Parameters:
// struct FString                 JsonText                       (Parm, ZeroConstructor)
// struct FString                 GlobalVarJsonText              (Parm, ZeroConstructor)
// bool                           GenGlobalVarLua                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FString>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FString> UCreativeBlockyLuaManager::GenerateLuaCodeFormJson(const struct FString& JsonText, const struct FString& GlobalVarJsonText, bool GenGlobalVarLua)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBlockyLuaManager.GenerateLuaCodeFormJson");

	UCreativeBlockyLuaManager_GenerateLuaCodeFormJson_Params params;
	params.JsonText = JsonText;
	params.GlobalVarJsonText = GlobalVarJsonText;
	params.GenGlobalVarLua = GenGlobalVarLua;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeBlockyLuaManager.GenerateLuaCodeFormContent
// (Final, Native, Public, HasOutParms)
// Parameters:
// TArray<unsigned char>          GrapbAstContent                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<unsigned char>          GlobalVarAstContent            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           GenGlobalVarLua                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CallLoadFinish                 (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FString>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FString> UCreativeBlockyLuaManager::GenerateLuaCodeFormContent(TArray<unsigned char> GrapbAstContent, TArray<unsigned char> GlobalVarAstContent, bool GenGlobalVarLua, bool CallLoadFinish)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBlockyLuaManager.GenerateLuaCodeFormContent");

	UCreativeBlockyLuaManager_GenerateLuaCodeFormContent_Params params;
	params.GrapbAstContent = GrapbAstContent;
	params.GlobalVarAstContent = GlobalVarAstContent;
	params.GenGlobalVarLua = GenGlobalVarLua;
	params.CallLoadFinish = CallLoadFinish;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeBlockyLuaManager.ClearNameIndexCache
// (Final, Native, Public)

void UCreativeBlockyLuaManager::ClearNameIndexCache()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBlockyLuaManager.ClearNameIndexCache");

	UCreativeBlockyLuaManager_ClearNameIndexCache_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeBlockyLuaManager.ClearDynamicPresetDescs
// (Final, Native, Public)
// Parameters:
// TArray<class UPresetDesc*>     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UPresetDesc*> UCreativeBlockyLuaManager::ClearDynamicPresetDescs()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBlockyLuaManager.ClearDynamicPresetDescs");

	UCreativeBlockyLuaManager_ClearDynamicPresetDescs_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeBlockyLuaManager.ClearCacheObjects
// (Final, Native, Public)
// Parameters:
// bool                           CallBeginDestroy               (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeBlockyLuaManager::ClearCacheObjects(bool CallBeginDestroy)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBlockyLuaManager.ClearCacheObjects");

	UCreativeBlockyLuaManager_ClearCacheObjects_Params params;
	params.CallBeginDestroy = CallBeginDestroy;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeBlockyLuaManager.ClearBlockyLuaHotfixUtility
// (Final, Native, Public)

void UCreativeBlockyLuaManager::ClearBlockyLuaHotfixUtility()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBlockyLuaManager.ClearBlockyLuaHotfixUtility");

	UCreativeBlockyLuaManager_ClearBlockyLuaHotfixUtility_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeBlockyLuaManager.BlockyluaPresetSoundFunctionHandle
// (Final, Native, Public)
// Parameters:
// struct FString                 SoundPath                      (Parm, ZeroConstructor)

void UCreativeBlockyLuaManager::BlockyluaPresetSoundFunctionHandle(const struct FString& SoundPath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBlockyLuaManager.BlockyluaPresetSoundFunctionHandle");

	UCreativeBlockyLuaManager_BlockyluaPresetSoundFunctionHandle_Params params;
	params.SoundPath = SoundPath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeBlockyLuaManager.BlockyluaModifyTipHandle
// (Final, Native, Public)
// Parameters:
// struct FText                   OriginalTip                    (Parm)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UCreativeBlockyLuaManager::BlockyluaModifyTipHandle(const struct FText& OriginalTip)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBlockyLuaManager.BlockyluaModifyTipHandle");

	UCreativeBlockyLuaManager_BlockyluaModifyTipHandle_Params params;
	params.OriginalTip = OriginalTip;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeBlockyLuaManager.BlockyluaMessageDataHandle
// (Final, Native, Public, HasOutParms)
// Parameters:
// TArray<struct FMessageDataStruct> MessageDatas                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UCreativeBlockyLuaManager::BlockyluaMessageDataHandle(TArray<struct FMessageDataStruct> MessageDatas)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBlockyLuaManager.BlockyluaMessageDataHandle");

	UCreativeBlockyLuaManager_BlockyluaMessageDataHandle_Params params;
	params.MessageDatas = MessageDatas;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeBlockyLuaManager.BlockyluaGetLocalizeResStrHandle
// (Final, Native, Public)
// Parameters:
// struct FString                 IdOrStr                        (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UCreativeBlockyLuaManager::BlockyluaGetLocalizeResStrHandle(const struct FString& IdOrStr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBlockyLuaManager.BlockyluaGetLocalizeResStrHandle");

	UCreativeBlockyLuaManager_BlockyluaGetLocalizeResStrHandle_Params params;
	params.IdOrStr = IdOrStr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeBlockyLuaManager.BlockyluaCustomInputHandle
// (Final, Native, Public)
// Parameters:
// struct FString                 CustomClickType                (Parm, ZeroConstructor)
// class UObjectDesc*             Desc                           (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UObjectDesc*>     followers                      (Parm, ZeroConstructor)

void UCreativeBlockyLuaManager::BlockyluaCustomInputHandle(const struct FString& CustomClickType, class UObjectDesc* Desc, TArray<class UObjectDesc*> followers)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBlockyLuaManager.BlockyluaCustomInputHandle");

	UCreativeBlockyLuaManager_BlockyluaCustomInputHandle_Params params;
	params.CustomClickType = CustomClickType;
	params.Desc = Desc;
	params.followers = followers;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeBlockyLuaManager.BlockyluaCheckShowPresetFitlerBtnHandle
// (Final, Native, Public)
// Parameters:
// struct FString                 TypeName                       (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeBlockyLuaManager::BlockyluaCheckShowPresetFitlerBtnHandle(const struct FString& TypeName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBlockyLuaManager.BlockyluaCheckShowPresetFitlerBtnHandle");

	UCreativeBlockyLuaManager_BlockyluaCheckShowPresetFitlerBtnHandle_Params params;
	params.TypeName = TypeName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeBlockyLuaManager.BlockyluaCheckShowCustomInputHandle
// (Final, Native, Public)
// Parameters:
// struct FString                 CustomClickType                (Parm, ZeroConstructor)
// class UObjectDesc*             Desc                           (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UObjectDesc*>     followers                      (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeBlockyLuaManager::BlockyluaCheckShowCustomInputHandle(const struct FString& CustomClickType, class UObjectDesc* Desc, TArray<class UObjectDesc*> followers)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBlockyLuaManager.BlockyluaCheckShowCustomInputHandle");

	UCreativeBlockyLuaManager_BlockyluaCheckShowCustomInputHandle_Params params;
	params.CustomClickType = CustomClickType;
	params.Desc = Desc;
	params.followers = followers;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeBlockyLuaManager.BindBlockyLuaStubFunc
// (Final, Native, Public)
// Parameters:
// struct FString                 BindFuncName                   (Parm, ZeroConstructor)
// struct FString                 OverrdeFuncName                (Parm, ZeroConstructor)

void UCreativeBlockyLuaManager::BindBlockyLuaStubFunc(const struct FString& BindFuncName, const struct FString& OverrdeFuncName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBlockyLuaManager.BindBlockyLuaStubFunc");

	UCreativeBlockyLuaManager_BindBlockyLuaStubFunc_Params params;
	params.BindFuncName = BindFuncName;
	params.OverrdeFuncName = OverrdeFuncName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeBlockyLuaManager.AddDynamicPresetDescs
// (Final, Native, Public)
// Parameters:
// TArray<class UPresetDesc*>     PresetDescs                    (Parm, ZeroConstructor)

void UCreativeBlockyLuaManager::AddDynamicPresetDescs(TArray<class UPresetDesc*> PresetDescs)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeBlockyLuaManager.AddDynamicPresetDescs");

	UCreativeBlockyLuaManager_AddDynamicPresetDescs_Params params;
	params.PresetDescs = PresetDescs;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeBlueprintLibrary.ZSTDDecompressData
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// TArray<unsigned char>          CompressedData                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<unsigned char>          DecompressedData               (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeModeBlueprintLibrary::ZSTDDecompressData(TArray<unsigned char> CompressedData, TArray<unsigned char>* DecompressedData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.ZSTDDecompressData");

	UCreativeModeBlueprintLibrary_ZSTDDecompressData_Params params;
	params.CompressedData = CompressedData;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (DecompressedData != nullptr)
		*DecompressedData = params.DecompressedData;

	return params.ReturnValue;
}


// Function Creative.CreativeModeBlueprintLibrary.ZSTDCompressData
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// TArray<unsigned char>          UncompressedData               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<unsigned char>          CompressedData                 (Parm, OutParm, ZeroConstructor)
// int                            CompressionLevel               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeModeBlueprintLibrary::ZSTDCompressData(TArray<unsigned char> UncompressedData, int CompressionLevel, TArray<unsigned char>* CompressedData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.ZSTDCompressData");

	UCreativeModeBlueprintLibrary_ZSTDCompressData_Params params;
	params.UncompressedData = UncompressedData;
	params.CompressionLevel = CompressionLevel;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (CompressedData != nullptr)
		*CompressedData = params.CompressedData;

	return params.ReturnValue;
}


// Function Creative.CreativeModeBlueprintLibrary.WidgetAbsoluteSizeToLocalSize
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UWidget*                 Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector2D               AbsoluteSize                   (Parm, IsPlainOldData)
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector2D UCreativeModeBlueprintLibrary::WidgetAbsoluteSizeToLocalSize(class UWidget* Widget, const struct FVector2D& AbsoluteSize)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.WidgetAbsoluteSizeToLocalSize");

	UCreativeModeBlueprintLibrary_WidgetAbsoluteSizeToLocalSize_Params params;
	params.Widget = Widget;
	params.AbsoluteSize = AbsoluteSize;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeBlueprintLibrary.UObjSnapshot
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UWorld*                  MyWorld                        (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeModeBlueprintLibrary::UObjSnapshot(class UWorld* MyWorld)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.UObjSnapshot");

	UCreativeModeBlueprintLibrary_UObjSnapshot_Params params;
	params.MyWorld = MyWorld;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeBlueprintLibrary.TransformRevert
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTransform              TransformRelative              (Parm, OutParm, IsPlainOldData)
// struct FTransform              TransformB                     (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform UCreativeModeBlueprintLibrary::TransformRevert(const struct FTransform& TransformB, struct FTransform* TransformRelative)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.TransformRevert");

	UCreativeModeBlueprintLibrary_TransformRevert_Params params;
	params.TransformB = TransformB;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TransformRelative != nullptr)
		*TransformRelative = params.TransformRelative;

	return params.ReturnValue;
}


// Function Creative.CreativeModeBlueprintLibrary.TransformMultiplyBy
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTransform              Source                         (Parm, OutParm, IsPlainOldData)
// struct FTransform              M                              (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UCreativeModeBlueprintLibrary::TransformMultiplyBy(const struct FTransform& M, struct FTransform* Source)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.TransformMultiplyBy");

	UCreativeModeBlueprintLibrary_TransformMultiplyBy_Params params;
	params.M = M;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Source != nullptr)
		*Source = params.Source;
}


// Function Creative.CreativeModeBlueprintLibrary.TransformBounds
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FBoxSphereBounds        Bounds                         (Parm, OutParm, IsPlainOldData)
// struct FTransform              M                              (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UCreativeModeBlueprintLibrary::TransformBounds(const struct FTransform& M, struct FBoxSphereBounds* Bounds)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.TransformBounds");

	UCreativeModeBlueprintLibrary_TransformBounds_Params params;
	params.M = M;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Bounds != nullptr)
		*Bounds = params.Bounds;
}


// Function Creative.CreativeModeBlueprintLibrary.ToMilliseconds64
// (Final, Native, Static, Public)
// Parameters:
// uint64_t                       Cycles                         (Parm, ZeroConstructor, IsPlainOldData)
// double                         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

double UCreativeModeBlueprintLibrary::ToMilliseconds64(uint64_t Cycles)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.ToMilliseconds64");

	UCreativeModeBlueprintLibrary_ToMilliseconds64_Params params;
	params.Cycles = Cycles;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeBlueprintLibrary.TakeSnapshot
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                 WindowWidget                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            X1                             (Parm, ZeroConstructor, IsPlainOldData)
// int                            Y1                             (Parm, ZeroConstructor, IsPlainOldData)
// int                            x2                             (Parm, ZeroConstructor, IsPlainOldData)
// int                            y2                             (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Filename                       (Parm, ZeroConstructor)
// bool                           bUseCrop                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFillRect                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UCreativeModeBlueprintLibrary::TakeSnapshot(class UWidget* WindowWidget, int X1, int Y1, int x2, int y2, const struct FString& Filename, bool bUseCrop, bool bFillRect)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.TakeSnapshot");

	UCreativeModeBlueprintLibrary_TakeSnapshot_Params params;
	params.WindowWidget = WindowWidget;
	params.X1 = X1;
	params.Y1 = Y1;
	params.x2 = x2;
	params.y2 = y2;
	params.Filename = Filename;
	params.bUseCrop = bUseCrop;
	params.bFillRect = bFillRect;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeBlueprintLibrary.SynchronizePropertiesWidget
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UWidget*                 TargetWidget                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeModeBlueprintLibrary::SynchronizePropertiesWidget(class UWidget* TargetWidget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.SynchronizePropertiesWidget");

	UCreativeModeBlueprintLibrary_SynchronizePropertiesWidget_Params params;
	params.TargetWidget = TargetWidget;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeBlueprintLibrary.ShouldCreatePhysicsState
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UPrimitiveComponent*     Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeModeBlueprintLibrary::ShouldCreatePhysicsState(class UPrimitiveComponent* Component)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.ShouldCreatePhysicsState");

	UCreativeModeBlueprintLibrary_ShouldCreatePhysicsState_Params params;
	params.Component = Component;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeBlueprintLibrary.SetWorldGravityZ
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          GravityZ                       (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 WorldContext                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UCreativeModeBlueprintLibrary::SetWorldGravityZ(float GravityZ, class UObject* WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.SetWorldGravityZ");

	UCreativeModeBlueprintLibrary_SetWorldGravityZ_Params params;
	params.GravityZ = GravityZ;
	params.WorldContext = WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeBlueprintLibrary.SetWidgetVisiblePass
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UWidget*                 Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bVisiblePass                   (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeModeBlueprintLibrary::SetWidgetVisiblePass(class UWidget* Widget, bool bVisiblePass)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.SetWidgetVisiblePass");

	UCreativeModeBlueprintLibrary_SetWidgetVisiblePass_Params params;
	params.Widget = Widget;
	params.bVisiblePass = bVisiblePass;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeBlueprintLibrary.SetStaticMeshMobility
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UStaticMeshComponent*    StaticMeshComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TEnumAsByte<EComponentMobility> NewMobility                    (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeModeBlueprintLibrary::SetStaticMeshMobility(class UStaticMeshComponent* StaticMeshComponent, TEnumAsByte<EComponentMobility> NewMobility)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.SetStaticMeshMobility");

	UCreativeModeBlueprintLibrary_SetStaticMeshMobility_Params params;
	params.StaticMeshComponent = StaticMeshComponent;
	params.NewMobility = NewMobility;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeBlueprintLibrary.SetSpeedOverLimit
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeModeBlueprintLibrary::SetSpeedOverLimit(class AActor* Actor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.SetSpeedOverLimit");

	UCreativeModeBlueprintLibrary_SetSpeedOverLimit_Params params;
	params.Actor = Actor;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeBlueprintLibrary.SetRelativeCamRotation
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// class USceneComponent*         Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UCreativeModeBlueprintLibrary::SetRelativeCamRotation(class APlayerController* PlayerController, class USceneComponent* Component)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.SetRelativeCamRotation");

	UCreativeModeBlueprintLibrary_SetRelativeCamRotation_Params params;
	params.PlayerController = PlayerController;
	params.Component = Component;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeBlueprintLibrary.SetParticleCullingDistance
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UParticleSystemComponent* ParticleSystemComponent        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          Distance                       (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeModeBlueprintLibrary::SetParticleCullingDistance(class UParticleSystemComponent* ParticleSystemComponent, float Distance)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.SetParticleCullingDistance");

	UCreativeModeBlueprintLibrary_SetParticleCullingDistance_Params params;
	params.ParticleSystemComponent = ParticleSystemComponent;
	params.Distance = Distance;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeBlueprintLibrary.SetInstanceValue
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 InstanceID                     (Parm, ZeroConstructor)
// struct FString                 Key                            (Parm, ZeroConstructor)
// struct FString                 Value                          (Parm, ZeroConstructor)

void UCreativeModeBlueprintLibrary::SetInstanceValue(class UObject* WorldContextObject, const struct FString& InstanceID, const struct FString& Key, const struct FString& Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.SetInstanceValue");

	UCreativeModeBlueprintLibrary_SetInstanceValue_Params params;
	params.WorldContextObject = WorldContextObject;
	params.InstanceID = InstanceID;
	params.Key = Key;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeBlueprintLibrary.SetCommandLineValue
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor)
// struct FString                 NewValue                       (Parm, ZeroConstructor)

void UCreativeModeBlueprintLibrary::SetCommandLineValue(const struct FString& Key, const struct FString& NewValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.SetCommandLineValue");

	UCreativeModeBlueprintLibrary_SetCommandLineValue_Params params;
	params.Key = Key;
	params.NewValue = NewValue;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeBlueprintLibrary.SetCollisionMobility
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UShapeComponent*         Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TEnumAsByte<EComponentMobility> NewMobility                    (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeModeBlueprintLibrary::SetCollisionMobility(class UShapeComponent* Component, TEnumAsByte<EComponentMobility> NewMobility)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.SetCollisionMobility");

	UCreativeModeBlueprintLibrary_SetCollisionMobility_Params params;
	params.Component = Component;
	params.NewMobility = NewMobility;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeBlueprintLibrary.SaveStringToFile
// (Final, Native, Static, Public)
// Parameters:
// struct FString                 String                         (Parm, ZeroConstructor)
// struct FString                 Filename                       (Parm, ZeroConstructor)

void UCreativeModeBlueprintLibrary::SaveStringToFile(const struct FString& String, const struct FString& Filename)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.SaveStringToFile");

	UCreativeModeBlueprintLibrary_SaveStringToFile_Params params;
	params.String = String;
	params.Filename = Filename;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeBlueprintLibrary.SaveAssetStringToFile
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 String                         (Parm, ZeroConstructor)
// struct FString                 Filename                       (Parm, ZeroConstructor)

void UCreativeModeBlueprintLibrary::SaveAssetStringToFile(const struct FString& String, const struct FString& Filename)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.SaveAssetStringToFile");

	UCreativeModeBlueprintLibrary_SaveAssetStringToFile_Params params;
	params.String = String;
	params.Filename = Filename;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeBlueprintLibrary.RotatorCrossInverse
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRotator                Rot1                           (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FRotator                Rot2                           (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FRotator UCreativeModeBlueprintLibrary::RotatorCrossInverse(const struct FRotator& Rot1, const struct FRotator& Rot2)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.RotatorCrossInverse");

	UCreativeModeBlueprintLibrary_RotatorCrossInverse_Params params;
	params.Rot1 = Rot1;
	params.Rot2 = Rot2;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeBlueprintLibrary.RotatorCross
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRotator                Rot1                           (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FRotator                Rot2                           (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FRotator UCreativeModeBlueprintLibrary::RotatorCross(const struct FRotator& Rot1, const struct FRotator& Rot2)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.RotatorCross");

	UCreativeModeBlueprintLibrary_RotatorCross_Params params;
	params.Rot1 = Rot1;
	params.Rot2 = Rot2;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeBlueprintLibrary.Rotation2Vector
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRotator                Rotator                        (Parm, IsPlainOldData)
// int                            Axis                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UCreativeModeBlueprintLibrary::Rotation2Vector(const struct FRotator& Rotator, int Axis)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.Rotation2Vector");

	UCreativeModeBlueprintLibrary_Rotation2Vector_Params params;
	params.Rotator = Rotator;
	params.Axis = Axis;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeBlueprintLibrary.RenameObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 Object                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 NewName                        (ConstParm, Parm, ZeroConstructor)

void UCreativeModeBlueprintLibrary::RenameObject(class UObject* Object, const struct FString& NewName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.RenameObject");

	UCreativeModeBlueprintLibrary_RenameObject_Params params;
	params.Object = Object;
	params.NewName = NewName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeBlueprintLibrary.RecreatePhysicsState
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UPrimitiveComponent*     Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UCreativeModeBlueprintLibrary::RecreatePhysicsState(class UPrimitiveComponent* Component)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.RecreatePhysicsState");

	UCreativeModeBlueprintLibrary_RecreatePhysicsState_Params params;
	params.Component = Component;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeBlueprintLibrary.QuatCrossInverse
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FQuat                   Quat1                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FQuat                   Quat2                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FQuat                   ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FQuat UCreativeModeBlueprintLibrary::QuatCrossInverse(const struct FQuat& Quat1, const struct FQuat& Quat2)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.QuatCrossInverse");

	UCreativeModeBlueprintLibrary_QuatCrossInverse_Params params;
	params.Quat1 = Quat1;
	params.Quat2 = Quat2;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeBlueprintLibrary.QuatCross
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FQuat                   Quat1                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FQuat                   Quat2                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FQuat                   ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FQuat UCreativeModeBlueprintLibrary::QuatCross(const struct FQuat& Quat1, const struct FQuat& Quat2)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.QuatCross");

	UCreativeModeBlueprintLibrary_QuatCross_Params params;
	params.Quat1 = Quat1;
	params.Quat2 = Quat2;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeBlueprintLibrary.ProjectSavedDir
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UCreativeModeBlueprintLibrary::ProjectSavedDir()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.ProjectSavedDir");

	UCreativeModeBlueprintLibrary_ProjectSavedDir_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeBlueprintLibrary.ProjectContentDir
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UCreativeModeBlueprintLibrary::ProjectContentDir()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.ProjectContentDir");

	UCreativeModeBlueprintLibrary_ProjectContentDir_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeBlueprintLibrary.PopulateParticleProperties
// (Final, Native, Static, Public)
// Parameters:
// class UParticleSystemComponent* ParticleSystemComponent        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UCreativeModeBlueprintLibrary::PopulateParticleProperties(class UParticleSystemComponent* ParticleSystemComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.PopulateParticleProperties");

	UCreativeModeBlueprintLibrary_PopulateParticleProperties_Params params;
	params.ParticleSystemComponent = ParticleSystemComponent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeBlueprintLibrary.MinAreaRectangle
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FVector>         InPoints                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FVector                 SampleSurfaceNormal            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 OutRectCenter                  (Parm, OutParm, IsPlainOldData)
// struct FRotator                OutRectRotation                (Parm, OutParm, IsPlainOldData)
// float                          OutRectLengthX                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          OutRectLengthY                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bDebugDraw                     (Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>                    PolyVertIndices                (Parm, OutParm, ZeroConstructor)

void UCreativeModeBlueprintLibrary::MinAreaRectangle(class UObject* WorldContextObject, TArray<struct FVector> InPoints, const struct FVector& SampleSurfaceNormal, bool bDebugDraw, struct FRotator* OutRectRotation, float* OutRectLengthX, float* OutRectLengthY, struct FVector* OutRectCenter, TArray<int>* PolyVertIndices)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.MinAreaRectangle");

	UCreativeModeBlueprintLibrary_MinAreaRectangle_Params params;
	params.WorldContextObject = WorldContextObject;
	params.InPoints = InPoints;
	params.SampleSurfaceNormal = SampleSurfaceNormal;
	params.bDebugDraw = bDebugDraw;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutRectCenter != nullptr)
		*OutRectCenter = params.OutRectCenter;
	if (OutRectRotation != nullptr)
		*OutRectRotation = params.OutRectRotation;
	if (OutRectLengthX != nullptr)
		*OutRectLengthX = params.OutRectLengthX;
	if (OutRectLengthY != nullptr)
		*OutRectLengthY = params.OutRectLengthY;
	if (PolyVertIndices != nullptr)
		*PolyVertIndices = params.PolyVertIndices;
}


// Function Creative.CreativeModeBlueprintLibrary.MD5HashByteArray
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<unsigned char>          inArray                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UCreativeModeBlueprintLibrary::MD5HashByteArray(TArray<unsigned char> inArray)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.MD5HashByteArray");

	UCreativeModeBlueprintLibrary_MD5HashByteArray_Params params;
	params.inArray = inArray;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeBlueprintLibrary.MD5HashAnsiString
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 str                            (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UCreativeModeBlueprintLibrary::MD5HashAnsiString(const struct FString& str)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.MD5HashAnsiString");

	UCreativeModeBlueprintLibrary_MD5HashAnsiString_Params params;
	params.str = str;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeBlueprintLibrary.Lz4DecompressData
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// TArray<unsigned char>          CompressedData                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<unsigned char>          DecompressedData               (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeModeBlueprintLibrary::Lz4DecompressData(TArray<unsigned char> CompressedData, TArray<unsigned char>* DecompressedData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.Lz4DecompressData");

	UCreativeModeBlueprintLibrary_Lz4DecompressData_Params params;
	params.CompressedData = CompressedData;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (DecompressedData != nullptr)
		*DecompressedData = params.DecompressedData;

	return params.ReturnValue;
}


// Function Creative.CreativeModeBlueprintLibrary.Lz4CompressData
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// TArray<unsigned char>          UncompressedData               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<unsigned char>          CompressedData                 (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeModeBlueprintLibrary::Lz4CompressData(TArray<unsigned char> UncompressedData, TArray<unsigned char>* CompressedData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.Lz4CompressData");

	UCreativeModeBlueprintLibrary_Lz4CompressData_Params params;
	params.UncompressedData = UncompressedData;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (CompressedData != nullptr)
		*CompressedData = params.CompressedData;

	return params.ReturnValue;
}


// Function Creative.CreativeModeBlueprintLibrary.LoadFileToStringByFullPath
// (Final, Native, Static, Public)
// Parameters:
// struct FString                 FullPathName                   (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UCreativeModeBlueprintLibrary::LoadFileToStringByFullPath(const struct FString& FullPathName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.LoadFileToStringByFullPath");

	UCreativeModeBlueprintLibrary_LoadFileToStringByFullPath_Params params;
	params.FullPathName = FullPathName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeBlueprintLibrary.LoadFileToArrayByFullPath
// (Final, Native, Static, Public)
// Parameters:
// struct FString                 FullPathName                   (Parm, ZeroConstructor)
// TArray<unsigned char>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<unsigned char> UCreativeModeBlueprintLibrary::LoadFileToArrayByFullPath(const struct FString& FullPathName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.LoadFileToArrayByFullPath");

	UCreativeModeBlueprintLibrary_LoadFileToArrayByFullPath_Params params;
	params.FullPathName = FullPathName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeBlueprintLibrary.LoadAssetFileToString
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Filename                       (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UCreativeModeBlueprintLibrary::LoadAssetFileToString(const struct FString& Filename)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.LoadAssetFileToString");

	UCreativeModeBlueprintLibrary_LoadAssetFileToString_Params params;
	params.Filename = Filename;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeBlueprintLibrary.LineTraceTouchComponent
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D               TouchPos                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 TouchHitLoc                    (Parm, OutParm, IsPlainOldData)
// TArray<class AActor*>          IgnoreActors                   (ConstParm, Parm, ZeroConstructor)
// class USceneComponent*         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class USceneComponent* UCreativeModeBlueprintLibrary::LineTraceTouchComponent(const struct FVector2D& TouchPos, class APlayerController* PlayerController, TArray<class AActor*> IgnoreActors, struct FVector* TouchHitLoc)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.LineTraceTouchComponent");

	UCreativeModeBlueprintLibrary_LineTraceTouchComponent_Params params;
	params.TouchPos = TouchPos;
	params.PlayerController = PlayerController;
	params.IgnoreActors = IgnoreActors;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TouchHitLoc != nullptr)
		*TouchHitLoc = params.TouchHitLoc;

	return params.ReturnValue;
}


// Function Creative.CreativeModeBlueprintLibrary.LineTraceTouchAxis
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D               TouchPos                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 TouchHitLoc                    (Parm, OutParm, IsPlainOldData)
// TArray<class AActor*>          IgnoreActors                   (ConstParm, Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UCreativeModeBlueprintLibrary::LineTraceTouchAxis(const struct FVector2D& TouchPos, class APlayerController* PlayerController, TArray<class AActor*> IgnoreActors, struct FVector* TouchHitLoc)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.LineTraceTouchAxis");

	UCreativeModeBlueprintLibrary_LineTraceTouchAxis_Params params;
	params.TouchPos = TouchPos;
	params.PlayerController = PlayerController;
	params.IgnoreActors = IgnoreActors;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TouchHitLoc != nullptr)
		*TouchHitLoc = params.TouchHitLoc;

	return params.ReturnValue;
}


// Function Creative.CreativeModeBlueprintLibrary.LineTraceInstance
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Start                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 End                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// TArray<class AActor*>          IgnoreActors                   (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UCreativeModeBlueprintLibrary::LineTraceInstance(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, TArray<class AActor*> IgnoreActors)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.LineTraceInstance");

	UCreativeModeBlueprintLibrary_LineTraceInstance_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Start = Start;
	params.End = End;
	params.IgnoreActors = IgnoreActors;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeBlueprintLibrary.IsPointWithinRotatedBounds
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 BoxCenter                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 BoxExtent                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          YawDegrees                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Point                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeModeBlueprintLibrary::IsPointWithinRotatedBounds(const struct FVector& BoxCenter, const struct FVector& BoxExtent, float YawDegrees, const struct FVector& Point)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.IsPointWithinRotatedBounds");

	UCreativeModeBlueprintLibrary_IsPointWithinRotatedBounds_Params params;
	params.BoxCenter = BoxCenter;
	params.BoxExtent = BoxExtent;
	params.YawDegrees = YawDegrees;
	params.Point = Point;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeBlueprintLibrary.IsPhysicsStateCreated
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UPrimitiveComponent*     Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeModeBlueprintLibrary::IsPhysicsStateCreated(class UPrimitiveComponent* Component)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.IsPhysicsStateCreated");

	UCreativeModeBlueprintLibrary_IsPhysicsStateCreated_Params params;
	params.Component = Component;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeBlueprintLibrary.IsPersistentModeEnabled
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeModeBlueprintLibrary::IsPersistentModeEnabled()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.IsPersistentModeEnabled");

	UCreativeModeBlueprintLibrary_IsPersistentModeEnabled_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeBlueprintLibrary.IsOfflineBuild
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeModeBlueprintLibrary::IsOfflineBuild()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.IsOfflineBuild");

	UCreativeModeBlueprintLibrary_IsOfflineBuild_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeBlueprintLibrary.IsMCPModeEnabled
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeModeBlueprintLibrary::IsMCPModeEnabled()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.IsMCPModeEnabled");

	UCreativeModeBlueprintLibrary_IsMCPModeEnabled_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeBlueprintLibrary.IsLLMEnabled
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeModeBlueprintLibrary::IsLLMEnabled()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.IsLLMEnabled");

	UCreativeModeBlueprintLibrary_IsLLMEnabled_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeBlueprintLibrary.IsCreativeMode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UWorld*                  World                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeModeBlueprintLibrary::IsCreativeMode(class UWorld* World)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.IsCreativeMode");

	UCreativeModeBlueprintLibrary_IsCreativeMode_Params params;
	params.World = World;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeBlueprintLibrary.IsBoxOverlapWithRotatedBox
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 StaticBoxCenter                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 StaticBoxExtent                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 RotatedBoxCenter               (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 RotatedBoxExtent               (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          RotatedBoxYaw                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeModeBlueprintLibrary::IsBoxOverlapWithRotatedBox(const struct FVector& StaticBoxCenter, const struct FVector& StaticBoxExtent, const struct FVector& RotatedBoxCenter, const struct FVector& RotatedBoxExtent, float RotatedBoxYaw)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.IsBoxOverlapWithRotatedBox");

	UCreativeModeBlueprintLibrary_IsBoxOverlapWithRotatedBox_Params params;
	params.StaticBoxCenter = StaticBoxCenter;
	params.StaticBoxExtent = StaticBoxExtent;
	params.RotatedBoxCenter = RotatedBoxCenter;
	params.RotatedBoxExtent = RotatedBoxExtent;
	params.RotatedBoxYaw = RotatedBoxYaw;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeBlueprintLibrary.IgnoreClientMovementErrorChecksAndCorrection
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class ACharacter*              Charcter                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsIgnore                      (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeModeBlueprintLibrary::IgnoreClientMovementErrorChecksAndCorrection(class ACharacter* Charcter, bool bIsIgnore)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.IgnoreClientMovementErrorChecksAndCorrection");

	UCreativeModeBlueprintLibrary_IgnoreClientMovementErrorChecksAndCorrection_Params params;
	params.Charcter = Charcter;
	params.bIsIgnore = bIsIgnore;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeBlueprintLibrary.GetWidgetRect
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UWidget*                 Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            X1                             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Y1                             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            x2                             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            y2                             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCreativeModeBlueprintLibrary::GetWidgetRect(class UWidget* Widget, int* X1, int* Y1, int* x2, int* y2)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.GetWidgetRect");

	UCreativeModeBlueprintLibrary_GetWidgetRect_Params params;
	params.Widget = Widget;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (X1 != nullptr)
		*X1 = params.X1;
	if (Y1 != nullptr)
		*Y1 = params.Y1;
	if (x2 != nullptr)
		*x2 = params.x2;
	if (y2 != nullptr)
		*y2 = params.y2;
}


// Function Creative.CreativeModeBlueprintLibrary.GetUrlValue
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContext                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Key                            (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UCreativeModeBlueprintLibrary::GetUrlValue(class UObject* WorldContext, const struct FString& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.GetUrlValue");

	UCreativeModeBlueprintLibrary_GetUrlValue_Params params;
	params.WorldContext = WorldContext;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeBlueprintLibrary.GetUObjAssetPath
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 Level                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UCreativeModeBlueprintLibrary::GetUObjAssetPath(class UObject* Level)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.GetUObjAssetPath");

	UCreativeModeBlueprintLibrary_GetUObjAssetPath_Params params;
	params.Level = Level;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeBlueprintLibrary.GetRTValidMaxArea
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTextureRenderTarget2D*  TextureTarget                  (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UCreativeModeBlueprintLibrary::GetRTValidMaxArea(class UTextureRenderTarget2D* TextureTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.GetRTValidMaxArea");

	UCreativeModeBlueprintLibrary_GetRTValidMaxArea_Params params;
	params.TextureTarget = TextureTarget;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeBlueprintLibrary.GetReplicateAddDataArrayVaildNum
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FReplicateAddDataArray  ReplicateAddDataArray          (ConstParm, Parm, OutParm, ReferenceParm)
// int                            StartIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UCreativeModeBlueprintLibrary::GetReplicateAddDataArrayVaildNum(class UObject* WorldContextObject, const struct FReplicateAddDataArray& ReplicateAddDataArray, int StartIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.GetReplicateAddDataArrayVaildNum");

	UCreativeModeBlueprintLibrary_GetReplicateAddDataArrayVaildNum_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ReplicateAddDataArray = ReplicateAddDataArray;
	params.StartIndex = StartIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeBlueprintLibrary.GetPlatformSeconds
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UCreativeModeBlueprintLibrary::GetPlatformSeconds()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.GetPlatformSeconds");

	UCreativeModeBlueprintLibrary_GetPlatformSeconds_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeBlueprintLibrary.GetObjectScreenPos
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 InstanceID                     (Parm, ZeroConstructor)
// struct FVector2D               Pos                            (Parm, OutParm, IsPlainOldData)

void UCreativeModeBlueprintLibrary::GetObjectScreenPos(class UObject* WorldContextObject, const struct FString& InstanceID, struct FVector2D* Pos)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.GetObjectScreenPos");

	UCreativeModeBlueprintLibrary_GetObjectScreenPos_Params params;
	params.WorldContextObject = WorldContextObject;
	params.InstanceID = InstanceID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Pos != nullptr)
		*Pos = params.Pos;
}


// Function Creative.CreativeModeBlueprintLibrary.GetObjectMap
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// TMap<struct FString, class UObject*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TMap<struct FString, class UObject*> UCreativeModeBlueprintLibrary::GetObjectMap(class UObject* WorldContextObject)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.GetObjectMap");

	UCreativeModeBlueprintLibrary_GetObjectMap_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeBlueprintLibrary.GetLastInteractionElapsedTime
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UCreativeModeBlueprintLibrary::GetLastInteractionElapsedTime()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.GetLastInteractionElapsedTime");

	UCreativeModeBlueprintLibrary_GetLastInteractionElapsedTime_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeBlueprintLibrary.GetInstanceSpaceBoundingBox
// (Final, Native, Static, Public)
// Parameters:
// struct FString                 InstanceID                     (Parm, ZeroConstructor)
// float                          Yaw                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UCreativeAbilitySystemComponent* Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UCreativeModeBlueprintLibrary::GetInstanceSpaceBoundingBox(const struct FString& InstanceID, float Yaw, class UCreativeAbilitySystemComponent* Component)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.GetInstanceSpaceBoundingBox");

	UCreativeModeBlueprintLibrary_GetInstanceSpaceBoundingBox_Params params;
	params.InstanceID = InstanceID;
	params.Yaw = Yaw;
	params.Component = Component;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeBlueprintLibrary.GetGroupInstanceSpaceBoundingBox
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FString                 GroupID                        (Parm, ZeroConstructor)
// TArray<struct FString>         ChildrenIds                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TMap<struct FString, struct FTransform> ChildrenTransforms             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// float                          Yaw                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UCreativeAbilitySystemComponent* Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UCreativeModeBlueprintLibrary::GetGroupInstanceSpaceBoundingBox(const struct FString& GroupID, TArray<struct FString> ChildrenIds, TMap<struct FString, struct FTransform> ChildrenTransforms, float Yaw, class UCreativeAbilitySystemComponent* Component)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.GetGroupInstanceSpaceBoundingBox");

	UCreativeModeBlueprintLibrary_GetGroupInstanceSpaceBoundingBox_Params params;
	params.GroupID = GroupID;
	params.ChildrenIds = ChildrenIds;
	params.ChildrenTransforms = ChildrenTransforms;
	params.Yaw = Yaw;
	params.Component = Component;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeBlueprintLibrary.GetGameWorld
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UWorld*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWorld* UCreativeModeBlueprintLibrary::GetGameWorld(class UObject* WorldContextObject)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.GetGameWorld");

	UCreativeModeBlueprintLibrary_GetGameWorld_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeBlueprintLibrary.GetGameTypeAsString
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// ECreativeModeGameType          GameType                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UCreativeModeBlueprintLibrary::GetGameTypeAsString(ECreativeModeGameType GameType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.GetGameTypeAsString");

	UCreativeModeBlueprintLibrary_GetGameTypeAsString_Params params;
	params.GameType = GameType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeBlueprintLibrary.GetDataConttentByInstanceDataContent
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FCreativeInstanceDataContent InstanceDataContent            (Parm, OutParm)
// TArray<unsigned char>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<unsigned char> UCreativeModeBlueprintLibrary::GetDataConttentByInstanceDataContent(struct FCreativeInstanceDataContent* InstanceDataContent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.GetDataConttentByInstanceDataContent");

	UCreativeModeBlueprintLibrary_GetDataConttentByInstanceDataContent_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (InstanceDataContent != nullptr)
		*InstanceDataContent = params.InstanceDataContent;

	return params.ReturnValue;
}


// Function Creative.CreativeModeBlueprintLibrary.GetCurFrameNumber
// (Final, Native, Static, Public)
// Parameters:
// uint32_t                       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

uint32_t UCreativeModeBlueprintLibrary::GetCurFrameNumber()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.GetCurFrameNumber");

	UCreativeModeBlueprintLibrary_GetCurFrameNumber_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeBlueprintLibrary.GetCurFrameCounter
// (Final, Native, Static, Public)
// Parameters:
// uint32_t                       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

uint32_t UCreativeModeBlueprintLibrary::GetCurFrameCounter()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.GetCurFrameCounter");

	UCreativeModeBlueprintLibrary_GetCurFrameCounter_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeBlueprintLibrary.GetCubeTouchAxisFace
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UWidget*                 Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector2D               ScreenPosition                 (Parm, OutParm, IsPlainOldData)
// float                          Width                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 OffsetLocation                 (Parm, OutParm, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UCreativeModeBlueprintLibrary::GetCubeTouchAxisFace(class UWidget* Widget, float Width, float Distance, struct FVector2D* ScreenPosition, struct FVector* OffsetLocation)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.GetCubeTouchAxisFace");

	UCreativeModeBlueprintLibrary_GetCubeTouchAxisFace_Params params;
	params.Widget = Widget;
	params.Width = Width;
	params.Distance = Distance;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (ScreenPosition != nullptr)
		*ScreenPosition = params.ScreenPosition;
	if (OffsetLocation != nullptr)
		*OffsetLocation = params.OffsetLocation;

	return params.ReturnValue;
}


// Function Creative.CreativeModeBlueprintLibrary.GetContentPatchData
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// TArray<unsigned char>          OldData                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<unsigned char>          DiffData                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<unsigned char>          outNewData                     (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeModeBlueprintLibrary::GetContentPatchData(TArray<unsigned char> OldData, TArray<unsigned char> DiffData, TArray<unsigned char>* outNewData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.GetContentPatchData");

	UCreativeModeBlueprintLibrary_GetContentPatchData_Params params;
	params.OldData = OldData;
	params.DiffData = DiffData;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (outNewData != nullptr)
		*outNewData = params.outNewData;

	return params.ReturnValue;
}


// Function Creative.CreativeModeBlueprintLibrary.GetContentDiffData
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// TArray<unsigned char>          OldData                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<unsigned char>          NewData                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<unsigned char>          outDiffData                    (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeModeBlueprintLibrary::GetContentDiffData(TArray<unsigned char> OldData, TArray<unsigned char> NewData, TArray<unsigned char>* outDiffData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.GetContentDiffData");

	UCreativeModeBlueprintLibrary_GetContentDiffData_Params params;
	params.OldData = OldData;
	params.NewData = NewData;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (outDiffData != nullptr)
		*outDiffData = params.outDiffData;

	return params.ReturnValue;
}


// Function Creative.CreativeModeBlueprintLibrary.GetCommandLineValue
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UCreativeModeBlueprintLibrary::GetCommandLineValue(const struct FString& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.GetCommandLineValue");

	UCreativeModeBlueprintLibrary_GetCommandLineValue_Params params;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeBlueprintLibrary.GetBoundingBoxOfInstances
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UObject*                 WorldContext                   (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FString>         Ids                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// float                          Yaw                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Center                         (Parm, OutParm, IsPlainOldData)
// struct FVector                 BoxExtent                      (Parm, OutParm, IsPlainOldData)

void UCreativeModeBlueprintLibrary::GetBoundingBoxOfInstances(class UObject* WorldContext, TArray<struct FString> Ids, float Yaw, struct FVector* Center, struct FVector* BoxExtent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.GetBoundingBoxOfInstances");

	UCreativeModeBlueprintLibrary_GetBoundingBoxOfInstances_Params params;
	params.WorldContext = WorldContext;
	params.Ids = Ids;
	params.Yaw = Yaw;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Center != nullptr)
		*Center = params.Center;
	if (BoxExtent != nullptr)
		*BoxExtent = params.BoxExtent;
}


// Function Creative.CreativeModeBlueprintLibrary.GetBoundingBoxOfActors
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// TArray<class AActor*>          Actors                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// float                          Yaw                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Center                         (Parm, OutParm, IsPlainOldData)
// struct FVector                 BoxExtent                      (Parm, OutParm, IsPlainOldData)

void UCreativeModeBlueprintLibrary::GetBoundingBoxOfActors(TArray<class AActor*> Actors, float Yaw, struct FVector* Center, struct FVector* BoxExtent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.GetBoundingBoxOfActors");

	UCreativeModeBlueprintLibrary_GetBoundingBoxOfActors_Params params;
	params.Actors = Actors;
	params.Yaw = Yaw;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Center != nullptr)
		*Center = params.Center;
	if (BoxExtent != nullptr)
		*BoxExtent = params.BoxExtent;
}


// Function Creative.CreativeModeBlueprintLibrary.GetBigUObject
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            MaxN                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UCreativeModeBlueprintLibrary::GetBigUObject(int MaxN)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.GetBigUObject");

	UCreativeModeBlueprintLibrary_GetBigUObject_Params params;
	params.MaxN = MaxN;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeBlueprintLibrary.GetBigLuaValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContext                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UCreativeModeBlueprintLibrary::GetBigLuaValue(class UObject* WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.GetBigLuaValue");

	UCreativeModeBlueprintLibrary_GetBigLuaValue_Params params;
	params.WorldContext = WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeBlueprintLibrary.GetAllInstanceInScreenBox
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UObject*                 WorldContext                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               Start                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector2D               End                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// int                            CheckDistance                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            CountLimit                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FString>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FString> UCreativeModeBlueprintLibrary::GetAllInstanceInScreenBox(class UObject* WorldContext, const struct FVector2D& Start, const struct FVector2D& End, int CheckDistance, int CountLimit)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.GetAllInstanceInScreenBox");

	UCreativeModeBlueprintLibrary_GetAllInstanceInScreenBox_Params params;
	params.WorldContext = WorldContext;
	params.Start = Start;
	params.End = End;
	params.CheckDistance = CheckDistance;
	params.CountLimit = CountLimit;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeBlueprintLibrary.GetAllInstanceInBox
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class UObject*                 WorldContext                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Center                         (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 Extent                         (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FRotator                Rotator                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// TArray<struct FString>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FString> UCreativeModeBlueprintLibrary::GetAllInstanceInBox(class UObject* WorldContext, const struct FVector& Center, const struct FVector& Extent, const struct FRotator& Rotator)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.GetAllInstanceInBox");

	UCreativeModeBlueprintLibrary_GetAllInstanceInBox_Params params;
	params.WorldContext = WorldContext;
	params.Center = Center;
	params.Extent = Extent;
	params.Rotator = Rotator;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeBlueprintLibrary.GetActorMeshBoundsByTag
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Origin                         (Parm, OutParm, IsPlainOldData)
// struct FVector                 BoxExtent                      (Parm, OutParm, IsPlainOldData)
// struct FString                 IgnoreTag                      (Parm, ZeroConstructor)
// struct FString                 IncludeTag                     (Parm, ZeroConstructor)

void UCreativeModeBlueprintLibrary::GetActorMeshBoundsByTag(class AActor* Actor, const struct FString& IgnoreTag, const struct FString& IncludeTag, struct FVector* Origin, struct FVector* BoxExtent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.GetActorMeshBoundsByTag");

	UCreativeModeBlueprintLibrary_GetActorMeshBoundsByTag_Params params;
	params.Actor = Actor;
	params.IgnoreTag = IgnoreTag;
	params.IncludeTag = IncludeTag;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Origin != nullptr)
		*Origin = params.Origin;
	if (BoxExtent != nullptr)
		*BoxExtent = params.BoxExtent;
}


// Function Creative.CreativeModeBlueprintLibrary.GenerateUIntGuid
// (Final, Native, Static, Public)
// Parameters:
// uint32_t                       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

uint32_t UCreativeModeBlueprintLibrary::GenerateUIntGuid()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.GenerateUIntGuid");

	UCreativeModeBlueprintLibrary_GenerateUIntGuid_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeBlueprintLibrary.GenerateGuid
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UCreativeModeBlueprintLibrary::GenerateGuid()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.GenerateGuid");

	UCreativeModeBlueprintLibrary_GenerateGuid_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeBlueprintLibrary.FindAttachedActorByName
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class AActor*                  ParentActor                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 PartialName                    (Parm, ZeroConstructor)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UCreativeModeBlueprintLibrary::FindAttachedActorByName(class AActor* ParentActor, const struct FString& PartialName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.FindAttachedActorByName");

	UCreativeModeBlueprintLibrary_FindAttachedActorByName_Params params;
	params.ParentActor = ParentActor;
	params.PartialName = PartialName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeBlueprintLibrary.FindActorByName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UWorld*                  World                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 PartialName                    (Parm, ZeroConstructor)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UCreativeModeBlueprintLibrary::FindActorByName(class UWorld* World, const struct FString& PartialName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.FindActorByName");

	UCreativeModeBlueprintLibrary_FindActorByName_Params params;
	params.World = World;
	params.PartialName = PartialName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeBlueprintLibrary.EncryptToBase64
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<unsigned char>          inArray                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UCreativeModeBlueprintLibrary::EncryptToBase64(TArray<unsigned char> inArray)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.EncryptToBase64");

	UCreativeModeBlueprintLibrary_EncryptToBase64_Params params;
	params.inArray = inArray;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeBlueprintLibrary.DumpActorNetReplicate
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContext                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Name                           (Parm, ZeroConstructor)

void UCreativeModeBlueprintLibrary::DumpActorNetReplicate(class UObject* WorldContext, const struct FString& Name)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.DumpActorNetReplicate");

	UCreativeModeBlueprintLibrary_DumpActorNetReplicate_Params params;
	params.WorldContext = WorldContext;
	params.Name = Name;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeBlueprintLibrary.DrawLine
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FPaintContext           InContext                      (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector2D               Start                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector2D               End                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FLinearColor            LineColor                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// int                            LayerOffset                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          LineThickness                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAntiAlias                     (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeModeBlueprintLibrary::DrawLine(const struct FPaintContext& InContext, const struct FVector2D& Start, const struct FVector2D& End, const struct FLinearColor& LineColor, int LayerOffset, float LineThickness, bool bAntiAlias)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.DrawLine");

	UCreativeModeBlueprintLibrary_DrawLine_Params params;
	params.InContext = InContext;
	params.Start = Start;
	params.End = End;
	params.LineColor = LineColor;
	params.LayerOffset = LayerOffset;
	params.LineThickness = LineThickness;
	params.bAntiAlias = bAntiAlias;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeBlueprintLibrary.DrawGrids
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FPaintContext           InContext                      (ConstParm, Parm, OutParm, ReferenceParm)
// float                          CellSize                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            CellCountX                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            CellCountY                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          PosOffsetX                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          PosOffsetY                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            LineColor                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          LineThickness                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAntiAlias                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            LayerOffset                    (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeModeBlueprintLibrary::DrawGrids(const struct FPaintContext& InContext, float CellSize, int CellCountX, int CellCountY, float PosOffsetX, float PosOffsetY, const struct FLinearColor& LineColor, float LineThickness, bool bAntiAlias, int LayerOffset)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.DrawGrids");

	UCreativeModeBlueprintLibrary_DrawGrids_Params params;
	params.InContext = InContext;
	params.CellSize = CellSize;
	params.CellCountX = CellCountX;
	params.CellCountY = CellCountY;
	params.PosOffsetX = PosOffsetX;
	params.PosOffsetY = PosOffsetY;
	params.LineColor = LineColor;
	params.LineThickness = LineThickness;
	params.bAntiAlias = bAntiAlias;
	params.LayerOffset = LayerOffset;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeBlueprintLibrary.DrawGridCell
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FPaintContext           InContext                      (ConstParm, Parm, OutParm, ReferenceParm)
// float                          CellSize                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            CellIndexX                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            CellIndexY                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          PosOffsetX                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          PosOffsetY                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            LineColor                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// int                            LayerOffset                    (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeModeBlueprintLibrary::DrawGridCell(const struct FPaintContext& InContext, float CellSize, int CellIndexX, int CellIndexY, float PosOffsetX, float PosOffsetY, const struct FLinearColor& LineColor, int LayerOffset)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.DrawGridCell");

	UCreativeModeBlueprintLibrary_DrawGridCell_Params params;
	params.InContext = InContext;
	params.CellSize = CellSize;
	params.CellIndexX = CellIndexX;
	params.CellIndexY = CellIndexY;
	params.PosOffsetX = PosOffsetX;
	params.PosOffsetY = PosOffsetY;
	params.LineColor = LineColor;
	params.LayerOffset = LayerOffset;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeBlueprintLibrary.DestroyInstance
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 InstanceID                     (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UCreativeModeBlueprintLibrary::DestroyInstance(class UObject* WorldContextObject, const struct FString& InstanceID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.DestroyInstance");

	UCreativeModeBlueprintLibrary_DestroyInstance_Params params;
	params.WorldContextObject = WorldContextObject;
	params.InstanceID = InstanceID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeBlueprintLibrary.DecryptFromBase64
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 inString                       (Parm, ZeroConstructor)
// TArray<unsigned char>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<unsigned char> UCreativeModeBlueprintLibrary::DecryptFromBase64(const struct FString& inString)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.DecryptFromBase64");

	UCreativeModeBlueprintLibrary_DecryptFromBase64_Params params;
	params.inString = inString;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeBlueprintLibrary.CreativeInstanceDataContent
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// TArray<unsigned char>          DataContent                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FCreativeInstanceDataContent ReturnValue                    (Parm, OutParm, ReturnParm)

struct FCreativeInstanceDataContent UCreativeModeBlueprintLibrary::CreativeInstanceDataContent(TArray<unsigned char> DataContent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.CreativeInstanceDataContent");

	UCreativeModeBlueprintLibrary_CreativeInstanceDataContent_Params params;
	params.DataContent = DataContent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeBlueprintLibrary.CreateCreativeMovingAudio
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            Sequence                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            ConfigId                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bShowMark                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Volume                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FCreativeMovingAudio    ReturnValue                    (Parm, OutParm, ReturnParm)

struct FCreativeMovingAudio UCreativeModeBlueprintLibrary::CreateCreativeMovingAudio(class AActor* Actor, int Sequence, int ConfigId, bool bShowMark, int Duration, float Volume)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.CreateCreativeMovingAudio");

	UCreativeModeBlueprintLibrary_CreateCreativeMovingAudio_Params params;
	params.Actor = Actor;
	params.Sequence = Sequence;
	params.ConfigId = ConfigId;
	params.bShowMark = bShowMark;
	params.Duration = Duration;
	params.Volume = Volume;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeBlueprintLibrary.ClearGrassByMaskTexture
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              MaskTexture                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               WorldStart                     (Parm, IsPlainOldData)
// struct FVector2D               WorldEnd                       (Parm, IsPlainOldData)

void UCreativeModeBlueprintLibrary::ClearGrassByMaskTexture(class UObject* WorldContextObject, class UTexture2D* MaskTexture, const struct FVector2D& WorldStart, const struct FVector2D& WorldEnd)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.ClearGrassByMaskTexture");

	UCreativeModeBlueprintLibrary_ClearGrassByMaskTexture_Params params;
	params.WorldContextObject = WorldContextObject;
	params.MaskTexture = MaskTexture;
	params.WorldStart = WorldStart;
	params.WorldEnd = WorldEnd;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeBlueprintLibrary.CaptureWidget
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContext                   (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  WidgetClass                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Path                           (Parm, OutParm, ZeroConstructor)
// int                            X                              (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Y                              (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           FlipY                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeModeBlueprintLibrary::CaptureWidget(class UObject* WorldContext, class UClass* WidgetClass, struct FString* Path, int* X, int* Y, bool* FlipY)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.CaptureWidget");

	UCreativeModeBlueprintLibrary_CaptureWidget_Params params;
	params.WorldContext = WorldContext;
	params.WidgetClass = WidgetClass;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Path != nullptr)
		*Path = params.Path;
	if (X != nullptr)
		*X = params.X;
	if (Y != nullptr)
		*Y = params.Y;
	if (FlipY != nullptr)
		*FlipY = params.FlipY;

	return params.ReturnValue;
}


// Function Creative.CreativeModeBlueprintLibrary.BoxOverlapComponents
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 BoxPos                         (ConstParm, Parm, IsPlainOldData)
// struct FVector                 BoxExtent                      (Parm, IsPlainOldData)
// TArray<int>                    ObjectTypes                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UClass*                  CompClassFilter                (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AActor*>          ActorsToIgnore                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UPrimitiveComponent*> OutComps                       (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeModeBlueprintLibrary::BoxOverlapComponents(class UObject* WorldContextObject, const struct FVector& BoxPos, const struct FVector& BoxExtent, TArray<int> ObjectTypes, class UClass* CompClassFilter, TArray<class AActor*> ActorsToIgnore, TArray<class UPrimitiveComponent*>* OutComps)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.BoxOverlapComponents");

	UCreativeModeBlueprintLibrary_BoxOverlapComponents_Params params;
	params.WorldContextObject = WorldContextObject;
	params.BoxPos = BoxPos;
	params.BoxExtent = BoxExtent;
	params.ObjectTypes = ObjectTypes;
	params.CompClassFilter = CompClassFilter;
	params.ActorsToIgnore = ActorsToIgnore;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutComps != nullptr)
		*OutComps = params.OutComps;

	return params.ReturnValue;
}


// Function Creative.CreativeModeBlueprintLibrary.BoxOverlapActors
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 BoxPos                         (ConstParm, Parm, IsPlainOldData)
// struct FVector                 BoxExtent                      (Parm, IsPlainOldData)
// TArray<int>                    ObjectTypes                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UClass*                  ActorClassFilter               (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AActor*>          ActorsToIgnore                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class AActor*>          OutActors                      (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeModeBlueprintLibrary::BoxOverlapActors(class UObject* WorldContextObject, const struct FVector& BoxPos, const struct FVector& BoxExtent, TArray<int> ObjectTypes, class UClass* ActorClassFilter, TArray<class AActor*> ActorsToIgnore, TArray<class AActor*>* OutActors)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.BoxOverlapActors");

	UCreativeModeBlueprintLibrary_BoxOverlapActors_Params params;
	params.WorldContextObject = WorldContextObject;
	params.BoxPos = BoxPos;
	params.BoxExtent = BoxExtent;
	params.ObjectTypes = ObjectTypes;
	params.ActorClassFilter = ActorClassFilter;
	params.ActorsToIgnore = ActorsToIgnore;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutActors != nullptr)
		*OutActors = params.OutActors;

	return params.ReturnValue;
}


// Function Creative.CreativeModeBlueprintLibrary.BeginDeferredActorSpawnWithName
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ActorClass                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              SpawnTransform                 (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// ESpawnActorCollisionHandlingMethod CollisionHandlingOverride      (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Owner                          (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UCreativeModeBlueprintLibrary::BeginDeferredActorSpawnWithName(class UObject* WorldContextObject, class UClass* ActorClass, const struct FTransform& SpawnTransform, const struct FName& Name, ESpawnActorCollisionHandlingMethod CollisionHandlingOverride, class AActor* Owner)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.BeginDeferredActorSpawnWithName");

	UCreativeModeBlueprintLibrary_BeginDeferredActorSpawnWithName_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ActorClass = ActorClass;
	params.SpawnTransform = SpawnTransform;
	params.Name = Name;
	params.CollisionHandlingOverride = CollisionHandlingOverride;
	params.Owner = Owner;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeBlueprintLibrary.AttachOutlineBox
// (Final, Native, Static, Public)
// Parameters:
// class AActor*                  AttachedActor                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          Yaw                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OutlineBox                     (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeModeBlueprintLibrary::AttachOutlineBox(class AActor* AttachedActor, float Yaw, class AActor* OutlineBox)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.AttachOutlineBox");

	UCreativeModeBlueprintLibrary_AttachOutlineBox_Params params;
	params.AttachedActor = AttachedActor;
	params.Yaw = Yaw;
	params.OutlineBox = OutlineBox;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeBlueprintLibrary.AttachInstanceOutlineBox
// (Final, Native, Static, Public)
// Parameters:
// struct FString                 AttachedId                     (Parm, ZeroConstructor)
// bool                           bGridEnable                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          Yaw                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OutlineBox                     (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeModeBlueprintLibrary::AttachInstanceOutlineBox(const struct FString& AttachedId, bool bGridEnable, float Yaw, class AActor* OutlineBox)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.AttachInstanceOutlineBox");

	UCreativeModeBlueprintLibrary_AttachInstanceOutlineBox_Params params;
	params.AttachedId = AttachedId;
	params.bGridEnable = bGridEnable;
	params.Yaw = Yaw;
	params.OutlineBox = OutlineBox;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeBlueprintLibrary.AttachGroupOutlineBox
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// class AActor*                  GroupObject                    (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AActor*>          AttachedActors                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// float                          Yaw                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OutlineBox                     (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeModeBlueprintLibrary::AttachGroupOutlineBox(class AActor* GroupObject, TArray<class AActor*> AttachedActors, float Yaw, class AActor* OutlineBox)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.AttachGroupOutlineBox");

	UCreativeModeBlueprintLibrary_AttachGroupOutlineBox_Params params;
	params.GroupObject = GroupObject;
	params.AttachedActors = AttachedActors;
	params.Yaw = Yaw;
	params.OutlineBox = OutlineBox;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeBlueprintLibrary.AttachGroupInstanceOutlineBox
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FString                 GroupID                        (Parm, ZeroConstructor)
// TArray<struct FString>         ChildrenIds                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TMap<struct FString, struct FTransform> ChildrenTransforms             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           bGridEnable                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          Yaw                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OutlineBox                     (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeModeBlueprintLibrary::AttachGroupInstanceOutlineBox(const struct FString& GroupID, TArray<struct FString> ChildrenIds, TMap<struct FString, struct FTransform> ChildrenTransforms, bool bGridEnable, float Yaw, class AActor* OutlineBox)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.AttachGroupInstanceOutlineBox");

	UCreativeModeBlueprintLibrary_AttachGroupInstanceOutlineBox_Params params;
	params.GroupID = GroupID;
	params.ChildrenIds = ChildrenIds;
	params.ChildrenTransforms = ChildrenTransforms;
	params.bGridEnable = bGridEnable;
	params.Yaw = Yaw;
	params.OutlineBox = OutlineBox;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeBlueprintLibrary.AddOnScreenDebugMessage
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Msg                            (ConstParm, Parm, ZeroConstructor)

void UCreativeModeBlueprintLibrary::AddOnScreenDebugMessage(const struct FString& Msg)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeBlueprintLibrary.AddOnScreenDebugMessage");

	UCreativeModeBlueprintLibrary_AddOnScreenDebugMessage_Params params;
	params.Msg = Msg;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeLuaSpectatorPawn.UnRegistLuaTick
// (Final, Native, Public, BlueprintCallable)

void ACreativeModeLuaSpectatorPawn::UnRegistLuaTick()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeLuaSpectatorPawn.UnRegistLuaTick");

	ACreativeModeLuaSpectatorPawn_UnRegistLuaTick_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeLuaSpectatorPawn.SetController
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class APlayerController*       InController                   (Parm, ZeroConstructor, IsPlainOldData)

void ACreativeModeLuaSpectatorPawn::SetController(class APlayerController* InController)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeLuaSpectatorPawn.SetController");

	ACreativeModeLuaSpectatorPawn_SetController_Params params;
	params.InController = InController;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeLuaSpectatorPawn.SetAbilitySystemComponentAvatar
// (Final, Native, Public, BlueprintCallable)

void ACreativeModeLuaSpectatorPawn::SetAbilitySystemComponentAvatar()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeLuaSpectatorPawn.SetAbilitySystemComponentAvatar");

	ACreativeModeLuaSpectatorPawn_SetAbilitySystemComponentAvatar_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeLuaSpectatorPawn.RegistLuaTick
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          TickInterval                   (Parm, ZeroConstructor, IsPlainOldData)

void ACreativeModeLuaSpectatorPawn::RegistLuaTick(float TickInterval)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeLuaSpectatorPawn.RegistLuaTick");

	ACreativeModeLuaSpectatorPawn_RegistLuaTick_Params params;
	params.TickInterval = TickInterval;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeLuaSpectatorPawn.MoveRight
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          Val                            (Parm, ZeroConstructor, IsPlainOldData)

void ACreativeModeLuaSpectatorPawn::MoveRight(float Val)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeLuaSpectatorPawn.MoveRight");

	ACreativeModeLuaSpectatorPawn_MoveRight_Params params;
	params.Val = Val;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeLuaSpectatorPawn.MoveForward
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          Val                            (Parm, ZeroConstructor, IsPlainOldData)

void ACreativeModeLuaSpectatorPawn::MoveForward(float Val)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeLuaSpectatorPawn.MoveForward");

	ACreativeModeLuaSpectatorPawn_MoveForward_Params params;
	params.Val = Val;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeLuaSpectatorPawn.GetActiveSpringArm
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class USpringArmComponent*     ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class USpringArmComponent* ACreativeModeLuaSpectatorPawn::GetActiveSpringArm()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeLuaSpectatorPawn.GetActiveSpringArm");

	ACreativeModeLuaSpectatorPawn_GetActiveSpringArm_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeCameraDeviceActor.UpdateFollowStatus
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void ACreativeCameraDeviceActor::UpdateFollowStatus()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeCameraDeviceActor.UpdateFollowStatus");

	ACreativeCameraDeviceActor_UpdateFollowStatus_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeCameraDeviceActor.UpdateFollowPos
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void ACreativeCameraDeviceActor::UpdateFollowPos()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeCameraDeviceActor.UpdateFollowPos");

	ACreativeCameraDeviceActor_UpdateFollowPos_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeCameraDeviceActor.RotCamera
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Yaw                            (Parm, ZeroConstructor, IsPlainOldData)
// float                          Pitch                          (Parm, ZeroConstructor, IsPlainOldData)

void ACreativeCameraDeviceActor::RotCamera(float Yaw, float Pitch)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeCameraDeviceActor.RotCamera");

	ACreativeCameraDeviceActor_RotCamera_Params params;
	params.Yaw = Yaw;
	params.Pitch = Pitch;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeCameraDeviceActor.OnEndViewTarget
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       PC                             (Parm, ZeroConstructor, IsPlainOldData)

void ACreativeCameraDeviceActor::OnEndViewTarget(class APlayerController* PC)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeCameraDeviceActor.OnEndViewTarget");

	ACreativeCameraDeviceActor_OnEndViewTarget_Params params;
	params.PC = PC;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeCameraDeviceActor.OnBecomeViewTarget
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       PC                             (Parm, ZeroConstructor, IsPlainOldData)

void ACreativeCameraDeviceActor::OnBecomeViewTarget(class APlayerController* PC)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeCameraDeviceActor.OnBecomeViewTarget");

	ACreativeCameraDeviceActor_OnBecomeViewTarget_Params params;
	params.PC = PC;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeCameraDeviceActor.MoveUp
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          Val                            (Parm, ZeroConstructor, IsPlainOldData)

void ACreativeCameraDeviceActor::MoveUp(float Val)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeCameraDeviceActor.MoveUp");

	ACreativeCameraDeviceActor_MoveUp_Params params;
	params.Val = Val;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeCameraDeviceActor.MoveRight
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          Val                            (Parm, ZeroConstructor, IsPlainOldData)

void ACreativeCameraDeviceActor::MoveRight(float Val)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeCameraDeviceActor.MoveRight");

	ACreativeCameraDeviceActor_MoveRight_Params params;
	params.Val = Val;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeCameraDeviceActor.MoveForward
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          Val                            (Parm, ZeroConstructor, IsPlainOldData)

void ACreativeCameraDeviceActor::MoveForward(float Val)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeCameraDeviceActor.MoveForward");

	ACreativeCameraDeviceActor_MoveForward_Params params;
	params.Val = Val;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeCameraDeviceActor.LerpToTarget
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ACreativeCameraDeviceActor::LerpToTarget(float DeltaSeconds)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeCameraDeviceActor.LerpToTarget");

	ACreativeCameraDeviceActor_LerpToTarget_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeCameraDeviceActor.LerpActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          BlendPct                       (Parm, ZeroConstructor, IsPlainOldData)

void ACreativeCameraDeviceActor::LerpActor(float BlendPct)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeCameraDeviceActor.LerpActor");

	ACreativeCameraDeviceActor_LerpActor_Params params;
	params.BlendPct = BlendPct;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeCameraDeviceActor.IsVecInvalid
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Vect                           (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACreativeCameraDeviceActor::IsVecInvalid(const struct FVector& Vect)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeCameraDeviceActor.IsVecInvalid");

	ACreativeCameraDeviceActor_IsVecInvalid_Params params;
	params.Vect = Vect;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeCameraDeviceActor.IsRotInvalid
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRotator                Rot                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACreativeCameraDeviceActor::IsRotInvalid(const struct FRotator& Rot)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeCameraDeviceActor.IsRotInvalid");

	ACreativeCameraDeviceActor_IsRotInvalid_Params params;
	params.Rot = Rot;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeCameraDeviceActor.InterpolateToSpringRotation
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          LerpValue                      (Parm, ZeroConstructor, IsPlainOldData)

void ACreativeCameraDeviceActor::InterpolateToSpringRotation(float LerpValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeCameraDeviceActor.InterpolateToSpringRotation");

	ACreativeCameraDeviceActor_InterpolateToSpringRotation_Params params;
	params.LerpValue = LerpValue;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeCameraDeviceActor.InitStartPoint
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACreativeCameraDeviceActor::InitStartPoint()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeCameraDeviceActor.InitStartPoint");

	ACreativeCameraDeviceActor_InitStartPoint_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeCameraDeviceActor.GetSpringArmForCamera
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UCameraComponent*        Camera                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class USpringArmComponent*     ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class USpringArmComponent* ACreativeCameraDeviceActor::GetSpringArmForCamera(class UCameraComponent* Camera)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeCameraDeviceActor.GetSpringArmForCamera");

	ACreativeCameraDeviceActor_GetSpringArmForCamera_Params params;
	params.Camera = Camera;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeCameraDeviceActor.GetLerpTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          BlendTimeToGo                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ACreativeCameraDeviceActor::GetLerpTime(float BlendTimeToGo)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeCameraDeviceActor.GetLerpTime");

	ACreativeCameraDeviceActor_GetLerpTime_Params params;
	params.BlendTimeToGo = BlendTimeToGo;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeCameraDeviceActor.GetCameraPointPosition
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector ACreativeCameraDeviceActor::GetCameraPointPosition()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeCameraDeviceActor.GetCameraPointPosition");

	ACreativeCameraDeviceActor_GetCameraPointPosition_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeCameraDeviceActor.GetActiveCamera
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCameraComponent*        ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UCameraComponent* ACreativeCameraDeviceActor::GetActiveCamera()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeCameraDeviceActor.GetActiveCamera");

	ACreativeCameraDeviceActor_GetActiveCamera_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeCameraGetter.GetCameraLocation
// (Native, Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UCreativeCameraGetter::GetCameraLocation()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeCameraGetter.GetCameraLocation");

	UCreativeCameraGetter_GetCameraLocation_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeCustomCameraComponent.InterpolateToTargetRotation
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          LerpValue                      (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeCustomCameraComponent::InterpolateToTargetRotation(float LerpValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeCustomCameraComponent.InterpolateToTargetRotation");

	UCreativeCustomCameraComponent_InterpolateToTargetRotation_Params params;
	params.LerpValue = LerpValue;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeCustomCameraComponent.InterpolateToTargetFOV
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          LerpValue                      (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeCustomCameraComponent::InterpolateToTargetFOV(float LerpValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeCustomCameraComponent.InterpolateToTargetFOV");

	UCreativeCustomCameraComponent_InterpolateToTargetFOV_Params params;
	params.LerpValue = LerpValue;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeCustomParameterManager.RemoveCustomParameter
// (Final, Native, Public)
// Parameters:
// uint32_t                       ParameterID                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// uint32_t                       PlayerKey                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UCreativeCustomParameterManager::RemoveCustomParameter(uint32_t ParameterID, uint32_t PlayerKey)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeCustomParameterManager.RemoveCustomParameter");

	UCreativeCustomParameterManager_RemoveCustomParameter_Params params;
	params.ParameterID = ParameterID;
	params.PlayerKey = PlayerKey;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeCustomParameterManager.ReceiveOnGameStateBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AGameStateBase*          GameState                      (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeCustomParameterManager::ReceiveOnGameStateBeginPlay(class AGameStateBase* GameState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeCustomParameterManager.ReceiveOnGameStateBeginPlay");

	UCreativeCustomParameterManager_ReceiveOnGameStateBeginPlay_Params params;
	params.GameState = GameState;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeCustomParameterManager.OnGameStateBeginPlay
// (Final, Native, Protected)
// Parameters:
// class AGameStateBase*          GameState                      (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeCustomParameterManager::OnGameStateBeginPlay(class AGameStateBase* GameState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeCustomParameterManager.OnGameStateBeginPlay");

	UCreativeCustomParameterManager_OnGameStateBeginPlay_Params params;
	params.GameState = GameState;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeCustomParameterManager.GetCustomParameterDataNodes
// (Final, Native, Public, HasOutParms)
// Parameters:
// uint32_t                       ParameterID                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FCreativeCustomParameterDataNode> OutCustomParameterDataNodes    (Parm, OutParm, ZeroConstructor)

void UCreativeCustomParameterManager::GetCustomParameterDataNodes(uint32_t ParameterID, TArray<struct FCreativeCustomParameterDataNode>* OutCustomParameterDataNodes)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeCustomParameterManager.GetCustomParameterDataNodes");

	UCreativeCustomParameterManager_GetCustomParameterDataNodes_Params params;
	params.ParameterID = ParameterID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutCustomParameterDataNodes != nullptr)
		*OutCustomParameterDataNodes = params.OutCustomParameterDataNodes;
}


// Function Creative.CreativeCustomParameterManager.Get
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContext                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UCreativeCustomParameterManager* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCreativeCustomParameterManager* UCreativeCustomParameterManager::Get(class UObject* WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeCustomParameterManager.Get");

	UCreativeCustomParameterManager_Get_Params params;
	params.WorldContext = WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeCustomParameterManager.ChangeCustomParameter
// (Final, Native, Public, HasOutParms)
// Parameters:
// uint32_t                       ParameterID                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// uint32_t                       PlayerKey                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int8_t                         TeamID                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<unsigned char>          DataContent                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UCreativeCustomParameterManager::ChangeCustomParameter(uint32_t ParameterID, uint32_t PlayerKey, int8_t TeamID, TArray<unsigned char> DataContent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeCustomParameterManager.ChangeCustomParameter");

	UCreativeCustomParameterManager_ChangeCustomParameter_Params params;
	params.ParameterID = ParameterID;
	params.PlayerKey = PlayerKey;
	params.TeamID = TeamID;
	params.DataContent = DataContent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeCustomParameterManager.AddCustomParameter
// (Final, Native, Public, HasOutParms)
// Parameters:
// uint32_t                       ParameterID                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// uint32_t                       PlayerKey                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int8_t                         TeamID                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<unsigned char>          DataContent                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           bPropagateToChildren           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UCreativeCustomParameterManager::AddCustomParameter(uint32_t ParameterID, uint32_t PlayerKey, int8_t TeamID, TArray<unsigned char> DataContent, bool bPropagateToChildren)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeCustomParameterManager.AddCustomParameter");

	UCreativeCustomParameterManager_AddCustomParameter_Params params;
	params.ParameterID = ParameterID;
	params.PlayerKey = PlayerKey;
	params.TeamID = TeamID;
	params.DataContent = DataContent;
	params.bPropagateToChildren = bPropagateToChildren;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeCustomPrefabComponent.GetNodeSegmentContent
// (Final, Native, Private, HasOutParms, BlueprintCallable)
// Parameters:
// struct FCreativePrefabDataSegment Segment                        (Parm, OutParm)
// TArray<unsigned char>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<unsigned char> UCreativeCustomPrefabComponent::GetNodeSegmentContent(struct FCreativePrefabDataSegment* Segment)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeCustomPrefabComponent.GetNodeSegmentContent");

	UCreativeCustomPrefabComponent_GetNodeSegmentContent_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Segment != nullptr)
		*Segment = params.Segment;

	return params.ReturnValue;
}


// Function Creative.CreativeCustomPrefabComponent.AddInstanceDataContent
// (Final, Native, Private, HasOutParms, BlueprintCallable)
// Parameters:
// struct FCreativeCustomPrefabDataSegment Segment                        (Parm, OutParm)
// TArray<unsigned char>          Content                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeCustomPrefabComponent::AddInstanceDataContent(TArray<unsigned char> Content, struct FCreativeCustomPrefabDataSegment* Segment)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeCustomPrefabComponent.AddInstanceDataContent");

	UCreativeCustomPrefabComponent_AddInstanceDataContent_Params params;
	params.Content = Content;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Segment != nullptr)
		*Segment = params.Segment;

	return params.ReturnValue;
}


// Function Creative.CreativeDestructibleMeshActor.SetDamageEnable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)

void ACreativeDestructibleMeshActor::SetDamageEnable(bool bEnable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeDestructibleMeshActor.SetDamageEnable");

	ACreativeDestructibleMeshActor_SetDamageEnable_Params params;
	params.bEnable = bEnable;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeDestructibleMeshActor.OnHit
// (Final, Native, Public, HasOutParms, HasDefaults)
// Parameters:
// class AActor*                  SelfActor                      (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NormalImpulse                  (Parm, IsPlainOldData)
// struct FHitResult              Hit                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ACreativeDestructibleMeshActor::OnHit(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeDestructibleMeshActor.OnHit");

	ACreativeDestructibleMeshActor_OnHit_Params params;
	params.SelfActor = SelfActor;
	params.OtherActor = OtherActor;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeDestructibleMeshActor.InitHP
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          fHP                            (Parm, ZeroConstructor, IsPlainOldData)

void ACreativeDestructibleMeshActor::InitHP(float fHP)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeDestructibleMeshActor.InitHP");

	ACreativeDestructibleMeshActor_InitHP_Params params;
	params.fHP = fHP;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeDestructibleMeshActor.GetFracturedComponent
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UPhotonDestructibleMeshComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UPhotonDestructibleMeshComponent* ACreativeDestructibleMeshActor::GetFracturedComponent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeDestructibleMeshActor.GetFracturedComponent");

	ACreativeDestructibleMeshActor_GetFracturedComponent_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeDestructibleMeshActor.AddCanDamageWeapon
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Weapon                         (Parm, ZeroConstructor)

void ACreativeDestructibleMeshActor::AddCanDamageWeapon(const struct FString& Weapon)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeDestructibleMeshActor.AddCanDamageWeapon");

	ACreativeDestructibleMeshActor_AddCanDamageWeapon_Params params;
	params.Weapon = Weapon;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeDestructibleMeshBatchActor.RemoveAllCacheReplicationData
// (Final, Native, Public)

void ACreativeDestructibleMeshBatchActor::RemoveAllCacheReplicationData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeDestructibleMeshBatchActor.RemoveAllCacheReplicationData");

	ACreativeDestructibleMeshBatchActor_RemoveAllCacheReplicationData_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeLiteComponent.OnReturnToPool
// (Native, Public)
// Parameters:
// class UObject*                 NewOuter                       (Parm, ZeroConstructor, IsPlainOldData)
// uint32_t                       RecycledSeq                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeModeLiteComponent::OnReturnToPool(class UObject* NewOuter, uint32_t RecycledSeq)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeLiteComponent.OnReturnToPool");

	UCreativeModeLiteComponent_OnReturnToPool_Params params;
	params.NewOuter = NewOuter;
	params.RecycledSeq = RecycledSeq;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeLiteComponent.GetObjectFromPool
// (Final, Native, Public, HasOutParms)
// Parameters:
// int                            PoolId                         (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 NewOuter                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 InName                         (Parm, OutParm, ZeroConstructor)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UCreativeModeLiteComponent::GetObjectFromPool(int PoolId, class UObject* NewOuter, struct FString* InName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeLiteComponent.GetObjectFromPool");

	UCreativeModeLiteComponent_GetObjectFromPool_Params params;
	params.PoolId = PoolId;
	params.NewOuter = NewOuter;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (InName != nullptr)
		*InName = params.InName;

	return params.ReturnValue;
}


// Function Creative.CreativeModeGameModeBaseComponent.SetGameStateComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UCreativeModeGameStateBaseComponent* NewGameStateComponent          (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeModeGameModeBaseComponent::SetGameStateComponent(class UCreativeModeGameStateBaseComponent* NewGameStateComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameModeBaseComponent.SetGameStateComponent");

	UCreativeModeGameModeBaseComponent_SetGameStateComponent_Params params;
	params.NewGameStateComponent = NewGameStateComponent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeGameModeBaseComponent.ReceivePostInitializeComponents
// (Event, Public, BlueprintEvent)

void UCreativeModeGameModeBaseComponent::ReceivePostInitializeComponents()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameModeBaseComponent.ReceivePostInitializeComponents");

	UCreativeModeGameModeBaseComponent_ReceivePostInitializeComponents_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeGameModeBaseComponent.GetGameType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// ECreativeModeGameType          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ECreativeModeGameType UCreativeModeGameModeBaseComponent::GetGameType()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameModeBaseComponent.GetGameType");

	UCreativeModeGameModeBaseComponent_GetGameType_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeGameModeBaseComponent.GetGameMode
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ACreativeModeGameMode*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ACreativeModeGameMode* UCreativeModeGameModeBaseComponent::GetGameMode()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameModeBaseComponent.GetGameMode");

	UCreativeModeGameModeBaseComponent_GetGameMode_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeGameModeBaseComponent.FindPlayerStartOverride
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController*             Player                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 IncomingName                   (Parm, ZeroConstructor)
// bool                           bIsRevive                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UCreativeModeGameModeBaseComponent::FindPlayerStartOverride(class AController* Player, const struct FString& IncomingName, bool bIsRevive)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameModeBaseComponent.FindPlayerStartOverride");

	UCreativeModeGameModeBaseComponent_FindPlayerStartOverride_Params params;
	params.Player = Player;
	params.IncomingName = IncomingName;
	params.bIsRevive = bIsRevive;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeEditorObject.UnregisterLiteComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ULiteComponent*          Component                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Destroy                        (Parm, ZeroConstructor, IsPlainOldData)

void ACreativeModeEditorObject::UnregisterLiteComponent(class ULiteComponent* Component, bool Destroy)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeEditorObject.UnregisterLiteComponent");

	ACreativeModeEditorObject_UnregisterLiteComponent_Params params;
	params.Component = Component;
	params.Destroy = Destroy;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeEditorObject.ShowSelectedEffect
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// bool                           ShowEff                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            OutlineColor                   (Parm, IsPlainOldData)
// float                          OutlineThickness               (Parm, ZeroConstructor, IsPlainOldData)

void ACreativeModeEditorObject::ShowSelectedEffect(bool ShowEff, const struct FLinearColor& OutlineColor, float OutlineThickness)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeEditorObject.ShowSelectedEffect");

	ACreativeModeEditorObject_ShowSelectedEffect_Params params;
	params.ShowEff = ShowEff;
	params.OutlineColor = OutlineColor;
	params.OutlineThickness = OutlineThickness;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeEditorObject.ShowOutlineEffect
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ShowEff                        (Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInstance*       Material                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 IgnoreTag                      (Parm, ZeroConstructor)

void ACreativeModeEditorObject::ShowOutlineEffect(bool ShowEff, class UMaterialInstance* Material, const struct FString& IgnoreTag)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeEditorObject.ShowOutlineEffect");

	ACreativeModeEditorObject_ShowOutlineEffect_Params params;
	params.ShowEff = ShowEff;
	params.Material = Material;
	params.IgnoreTag = IgnoreTag;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeEditorObject.SetPhotographyMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bIsCapturing                   (Parm, ZeroConstructor, IsPlainOldData)

void ACreativeModeEditorObject::SetPhotographyMode(bool bIsCapturing)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeEditorObject.SetPhotographyMode");

	ACreativeModeEditorObject_SetPhotographyMode_Params params;
	params.bIsCapturing = bIsCapturing;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeEditorObject.SetLiteComponentTickEnable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void ACreativeModeEditorObject::SetLiteComponentTickEnable(bool bEnabled)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeEditorObject.SetLiteComponentTickEnable");

	ACreativeModeEditorObject_SetLiteComponentTickEnable_Params params;
	params.bEnabled = bEnabled;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeEditorObject.SetActorState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// ECreativeModeActorState        NewState                       (Parm, ZeroConstructor, IsPlainOldData)

void ACreativeModeEditorObject::SetActorState(ECreativeModeActorState NewState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeEditorObject.SetActorState");

	ACreativeModeEditorObject_SetActorState_Params params;
	params.NewState = NewState;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeEditorObject.ReturnObjectToPool
// (Native, Public)
// Parameters:
// class UObject*                 Obj                            (Parm, ZeroConstructor, IsPlainOldData)

void ACreativeModeEditorObject::ReturnObjectToPool(class UObject* Obj)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeEditorObject.ReturnObjectToPool");

	ACreativeModeEditorObject_ReturnObjectToPool_Params params;
	params.Obj = Obj;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeEditorObject.ReturnObjectsToPool
// (Native, Public)
// Parameters:
// TArray<class UObject*>         Objs                           (Parm, ZeroConstructor)

void ACreativeModeEditorObject::ReturnObjectsToPool(TArray<class UObject*> Objs)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeEditorObject.ReturnObjectsToPool");

	ACreativeModeEditorObject_ReturnObjectsToPool_Params params;
	params.Objs = Objs;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeEditorObject.RegisterLiteComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ULiteComponent*          Component                      (Parm, ZeroConstructor, IsPlainOldData)

void ACreativeModeEditorObject::RegisterLiteComponent(class ULiteComponent* Component)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeEditorObject.RegisterLiteComponent");

	ACreativeModeEditorObject_RegisterLiteComponent_Params params;
	params.Component = Component;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeEditorObject.ReceivePostBeginPlay
// (Event, Public, BlueprintEvent)

void ACreativeModeEditorObject::ReceivePostBeginPlay()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeEditorObject.ReceivePostBeginPlay");

	ACreativeModeEditorObject_ReceivePostBeginPlay_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeEditorObject.ReceiveIsDedicatedServer
// (Final, Native, Public, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACreativeModeEditorObject::ReceiveIsDedicatedServer()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeEditorObject.ReceiveIsDedicatedServer");

	ACreativeModeEditorObject_ReceiveIsDedicatedServer_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeEditorObject.ReceiveInitializeLiteComponent
// (Event, Protected, BlueprintEvent)

void ACreativeModeEditorObject::ReceiveInitializeLiteComponent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeEditorObject.ReceiveInitializeLiteComponent");

	ACreativeModeEditorObject_ReceiveInitializeLiteComponent_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeEditorObject.ReceiveInitCanEditFlag
// (Event, Public, BlueprintEvent)

void ACreativeModeEditorObject::ReceiveInitCanEditFlag()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeEditorObject.ReceiveInitCanEditFlag");

	ACreativeModeEditorObject_ReceiveInitCanEditFlag_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeEditorObject.ReceiveHasAuthority
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACreativeModeEditorObject::ReceiveHasAuthority()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeEditorObject.ReceiveHasAuthority");

	ACreativeModeEditorObject_ReceiveHasAuthority_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeEditorObject.OnRepActorStateOverride
// (Event, Protected, BlueprintEvent)
// Parameters:
// ECreativeModeActorState        NewState                       (Parm, ZeroConstructor, IsPlainOldData)

void ACreativeModeEditorObject::OnRepActorStateOverride(ECreativeModeActorState NewState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeEditorObject.OnRepActorStateOverride");

	ACreativeModeEditorObject_OnRepActorStateOverride_Params params;
	params.NewState = NewState;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeEditorObject.OnRep_ActorState
// (Final, Native, Public)
// Parameters:
// ECreativeModeActorState        LastState                      (Parm, ZeroConstructor, IsPlainOldData)

void ACreativeModeEditorObject::OnRep_ActorState(ECreativeModeActorState LastState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeEditorObject.OnRep_ActorState");

	ACreativeModeEditorObject_OnRep_ActorState_Params params;
	params.LastState = LastState;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeEditorObject.InCollisionState
// (Final, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACreativeModeEditorObject::InCollisionState()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeEditorObject.InCollisionState");

	ACreativeModeEditorObject_InCollisionState_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeEditorObject.GetObjectsFromPool
// (Native, Public, HasOutParms)
// Parameters:
// TArray<struct FCreativePoolGetObjectParamInfo> ObjectParams                   (Parm, OutParm, ZeroConstructor)
// TArray<class UObject*>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UObject*> ACreativeModeEditorObject::GetObjectsFromPool(TArray<struct FCreativePoolGetObjectParamInfo>* ObjectParams)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeEditorObject.GetObjectsFromPool");

	ACreativeModeEditorObject_GetObjectsFromPool_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (ObjectParams != nullptr)
		*ObjectParams = params.ObjectParams;

	return params.ReturnValue;
}


// Function Creative.CreativeModeEditorObject.GetObjectFromPool
// (Native, Public, HasOutParms)
// Parameters:
// int                            PoolId                         (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 NewOuter                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 InName                         (Parm, OutParm, ZeroConstructor)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* ACreativeModeEditorObject::GetObjectFromPool(int PoolId, class UObject* NewOuter, struct FString* InName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeEditorObject.GetObjectFromPool");

	ACreativeModeEditorObject_GetObjectFromPool_Params params;
	params.PoolId = PoolId;
	params.NewOuter = NewOuter;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (InName != nullptr)
		*InName = params.InName;

	return params.ReturnValue;
}


// Function Creative.CreativeModeEditorObject.GetActorState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// ECreativeModeActorState        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ECreativeModeActorState ACreativeModeEditorObject::GetActorState()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeEditorObject.GetActorState");

	ACreativeModeEditorObject_GetActorState_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeEditorObject.FindLiteComponentByClass
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                  ComponentClass                 (Parm, ZeroConstructor, IsPlainOldData)
// class ULiteComponent*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ULiteComponent* ACreativeModeEditorObject::FindLiteComponentByClass(class UClass* ComponentClass)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeEditorObject.FindLiteComponentByClass");

	ACreativeModeEditorObject_FindLiteComponentByClass_Params params;
	params.ComponentClass = ComponentClass;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeGameStateBaseComponent.ReceivePostInitializeComponents
// (Event, Public, BlueprintEvent)

void UCreativeModeGameStateBaseComponent::ReceivePostInitializeComponents()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameStateBaseComponent.ReceivePostInitializeComponents");

	UCreativeModeGameStateBaseComponent_ReceivePostInitializeComponents_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeGameStateBaseComponent.GetPlayState
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// ECreativeModePlayState         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ECreativeModePlayState UCreativeModeGameStateBaseComponent::GetPlayState()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameStateBaseComponent.GetPlayState");

	UCreativeModeGameStateBaseComponent_GetPlayState_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeGameStateBaseComponent.GetGameType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// ECreativeModeGameType          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ECreativeModeGameType UCreativeModeGameStateBaseComponent::GetGameType()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameStateBaseComponent.GetGameType");

	UCreativeModeGameStateBaseComponent_GetGameType_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeGameStateBaseComponent.GetGameState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ACreativeModeGameState*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ACreativeModeGameState* UCreativeModeGameStateBaseComponent::GetGameState()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameStateBaseComponent.GetGameState");

	UCreativeModeGameStateBaseComponent_GetGameState_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeEventObject.ReHookObject
// (Final, Native, Public, BlueprintCallable)

void UCreativeEventObject::ReHookObject()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeEventObject.ReHookObject");

	UCreativeEventObject_ReHookObject_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeEventObject.EventObjectConditionalBeginDestroy
// (Final, Native, Public, BlueprintCallable)

void UCreativeEventObject::EventObjectConditionalBeginDestroy()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeEventObject.EventObjectConditionalBeginDestroy");

	UCreativeEventObject_EventObjectConditionalBeginDestroy_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeGameAPIObject.GetPlayersInSphere
// (Final, Native, Public, HasDefaults)
// Parameters:
// struct FVector                 SphereCenter                   (Parm, IsPlainOldData)
// float                          SphereRadius                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            TeamID                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           FilterNonPlayable              (Parm, ZeroConstructor, IsPlainOldData)
// TArray<int64_t>                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<int64_t> UCreativeGameAPIObject::GetPlayersInSphere(const struct FVector& SphereCenter, float SphereRadius, int TeamID, bool FilterNonPlayable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGameAPIObject.GetPlayersInSphere");

	UCreativeGameAPIObject_GetPlayersInSphere_Params params;
	params.SphereCenter = SphereCenter;
	params.SphereRadius = SphereRadius;
	params.TeamID = TeamID;
	params.FilterNonPlayable = FilterNonPlayable;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeGameAPIObject.GetPlayersInRectangle
// (Final, Native, Public, HasDefaults)
// Parameters:
// struct FVector                 RectangleCenter                (Parm, IsPlainOldData)
// float                          RectangleX                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          RectangleY                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          RectangleZ                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            TeamID                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           FilterNonPlayable              (Parm, ZeroConstructor, IsPlainOldData)
// TArray<int64_t>                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<int64_t> UCreativeGameAPIObject::GetPlayersInRectangle(const struct FVector& RectangleCenter, float RectangleX, float RectangleY, float RectangleZ, int TeamID, bool FilterNonPlayable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGameAPIObject.GetPlayersInRectangle");

	UCreativeGameAPIObject_GetPlayersInRectangle_Params params;
	params.RectangleCenter = RectangleCenter;
	params.RectangleX = RectangleX;
	params.RectangleY = RectangleY;
	params.RectangleZ = RectangleZ;
	params.TeamID = TeamID;
	params.FilterNonPlayable = FilterNonPlayable;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeGameMode.UnregisterLiteComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ULiteComponent*          Component                      (Parm, ZeroConstructor, IsPlainOldData)

void ACreativeModeGameMode::UnregisterLiteComponent(class ULiteComponent* Component)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameMode.UnregisterLiteComponent");

	ACreativeModeGameMode_UnregisterLiteComponent_Params params;
	params.Component = Component;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeGameMode.SetLiteComponentTickEnable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void ACreativeModeGameMode::SetLiteComponentTickEnable(bool bEnabled)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameMode.SetLiteComponentTickEnable");

	ACreativeModeGameMode_SetLiteComponentTickEnable_Params params;
	params.bEnabled = bEnabled;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeGameMode.SetItemGenerate
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// bool                           bIsOpen                        (Parm, ZeroConstructor, IsPlainOldData)

void ACreativeModeGameMode::SetItemGenerate(bool bIsOpen)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameMode.SetItemGenerate");

	ACreativeModeGameMode_SetItemGenerate_Params params;
	params.bIsOpen = bIsOpen;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeGameMode.SetCurrentGameType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// ECreativeModeGameType          NewGameType                    (Parm, ZeroConstructor, IsPlainOldData)

void ACreativeModeGameMode::SetCurrentGameType(ECreativeModeGameType NewGameType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameMode.SetCurrentGameType");

	ACreativeModeGameMode_SetCurrentGameType_Params params;
	params.NewGameType = NewGameType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeGameMode.ReInitItemGenerate
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FString                 NewItemClassPath               (Parm, OutParm, ZeroConstructor)

void ACreativeModeGameMode::ReInitItemGenerate(struct FString* NewItemClassPath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameMode.ReInitItemGenerate");

	ACreativeModeGameMode_ReInitItemGenerate_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (NewItemClassPath != nullptr)
		*NewItemClassPath = params.NewItemClassPath;
}


// Function Creative.CreativeModeGameMode.RegisterLiteComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ULiteComponent*          Component                      (Parm, ZeroConstructor, IsPlainOldData)

void ACreativeModeGameMode::RegisterLiteComponent(class ULiteComponent* Component)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameMode.RegisterLiteComponent");

	ACreativeModeGameMode_RegisterLiteComponent_Params params;
	params.Component = Component;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeGameMode.ReceiveInitializeLiteComponent
// (Event, Protected, BlueprintEvent)

void ACreativeModeGameMode::ReceiveInitializeLiteComponent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameMode.ReceiveInitializeLiteComponent");

	ACreativeModeGameMode_ReceiveInitializeLiteComponent_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeGameMode.IsStandAloneGameMode
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACreativeModeGameMode::IsStandAloneGameMode()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameMode.IsStandAloneGameMode");

	ACreativeModeGameMode_IsStandAloneGameMode_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeGameMode.IsRestartPlayerUsePawnRotation
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACreativeModeGameMode::IsRestartPlayerUsePawnRotation()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameMode.IsRestartPlayerUsePawnRotation");

	ACreativeModeGameMode_IsRestartPlayerUsePawnRotation_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeGameMode.GetCurrentModeComponent
// (Final, Native, Public)
// Parameters:
// class UCreativeModeGameModeBaseComponent* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCreativeModeGameModeBaseComponent* ACreativeModeGameMode::GetCurrentModeComponent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameMode.GetCurrentModeComponent");

	ACreativeModeGameMode_GetCurrentModeComponent_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeGameMode.GetCreativeModeRealTeamNum
// (Final, Native, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ACreativeModeGameMode::GetCreativeModeRealTeamNum()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameMode.GetCreativeModeRealTeamNum");

	ACreativeModeGameMode_GetCreativeModeRealTeamNum_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeGameMode.GetCreativeModeRealTeamIDs
// (Final, Native, Public)
// Parameters:
// TArray<int>                    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<int> ACreativeModeGameMode::GetCreativeModeRealTeamIDs()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameMode.GetCreativeModeRealTeamIDs");

	ACreativeModeGameMode_GetCreativeModeRealTeamIDs_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeGameMode.FindLiteComponentByClass
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                  ComponentClass                 (Parm, ZeroConstructor, IsPlainOldData)
// class ULiteComponent*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ULiteComponent* ACreativeModeGameMode::FindLiteComponentByClass(class UClass* ComponentClass)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameMode.FindLiteComponentByClass");

	ACreativeModeGameMode_FindLiteComponentByClass_Params params;
	params.ComponentClass = ComponentClass;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeGameMode.DSPlayerKickOut
// (Final, Native, Public)
// Parameters:
// uint64_t                       UID                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   PlayerType                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ExitReason                     (Parm, ZeroConstructor)

void ACreativeModeGameMode::DSPlayerKickOut(uint64_t UID, const struct FName& PlayerType, const struct FString& ExitReason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameMode.DSPlayerKickOut");

	ACreativeModeGameMode_DSPlayerKickOut_Params params;
	params.UID = UID;
	params.PlayerType = PlayerType;
	params.ExitReason = ExitReason;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeGameMode.CreativeModeFindPlayerStart
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// class AController*             Player                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 IncomingName                   (Parm, ZeroConstructor)
// bool                           bIsRevive                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* ACreativeModeGameMode::CreativeModeFindPlayerStart(class AController* Player, const struct FString& IncomingName, bool bIsRevive)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameMode.CreativeModeFindPlayerStart");

	ACreativeModeGameMode_CreativeModeFindPlayerStart_Params params;
	params.Player = Player;
	params.IncomingName = IncomingName;
	params.bIsRevive = bIsRevive;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeGameModeComponent.ReceiveCallPlayStateFunction
// (Event, Public, BlueprintEvent)

void UCreativeModeGameModeComponent::ReceiveCallPlayStateFunction()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameModeComponent.ReceiveCallPlayStateFunction");

	UCreativeModeGameModeComponent_ReceiveCallPlayStateFunction_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeGameObject.UnregisterLiteComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ULiteComponent*          Component                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Destroy                        (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeModeGameObject::UnregisterLiteComponent(class ULiteComponent* Component, bool Destroy)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameObject.UnregisterLiteComponent");

	UCreativeModeGameObject_UnregisterLiteComponent_Params params;
	params.Component = Component;
	params.Destroy = Destroy;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeGameObject.ReturnObjectToPool
// (Native, Public)
// Parameters:
// class UObject*                 Obj                            (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeModeGameObject::ReturnObjectToPool(class UObject* Obj)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameObject.ReturnObjectToPool");

	UCreativeModeGameObject_ReturnObjectToPool_Params params;
	params.Obj = Obj;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeGameObject.ReturnObjectsToPool
// (Native, Public)
// Parameters:
// TArray<class UObject*>         Objs                           (Parm, ZeroConstructor)

void UCreativeModeGameObject::ReturnObjectsToPool(TArray<class UObject*> Objs)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameObject.ReturnObjectsToPool");

	UCreativeModeGameObject_ReturnObjectsToPool_Params params;
	params.Objs = Objs;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeGameObject.RegisterLiteComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ULiteComponent*          Component                      (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeModeGameObject::RegisterLiteComponent(class ULiteComponent* Component)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameObject.RegisterLiteComponent");

	UCreativeModeGameObject_RegisterLiteComponent_Params params;
	params.Component = Component;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeGameObject.ReceivePostBeginPlay
// (Event, Protected, BlueprintEvent)

void UCreativeModeGameObject::ReceivePostBeginPlay()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameObject.ReceivePostBeginPlay");

	UCreativeModeGameObject_ReceivePostBeginPlay_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeGameObject.ReceiveIsDedicatedServer
// (Final, Native, Public, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeModeGameObject::ReceiveIsDedicatedServer()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameObject.ReceiveIsDedicatedServer");

	UCreativeModeGameObject_ReceiveIsDedicatedServer_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeGameObject.ReceiveHasAuthority
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeModeGameObject::ReceiveHasAuthority()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameObject.ReceiveHasAuthority");

	UCreativeModeGameObject_ReceiveHasAuthority_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeGameObject.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)

void UCreativeModeGameObject::ReceiveEndPlay()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameObject.ReceiveEndPlay");

	UCreativeModeGameObject_ReceiveEndPlay_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeGameObject.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void UCreativeModeGameObject::ReceiveBeginPlay()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameObject.ReceiveBeginPlay");

	UCreativeModeGameObject_ReceiveBeginPlay_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeGameObject.GetObjectsFromPool
// (Native, Public, HasOutParms)
// Parameters:
// TArray<struct FCreativePoolGetObjectParamInfo> ObjectParams                   (Parm, OutParm, ZeroConstructor)
// TArray<class UObject*>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UObject*> UCreativeModeGameObject::GetObjectsFromPool(TArray<struct FCreativePoolGetObjectParamInfo>* ObjectParams)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameObject.GetObjectsFromPool");

	UCreativeModeGameObject_GetObjectsFromPool_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (ObjectParams != nullptr)
		*ObjectParams = params.ObjectParams;

	return params.ReturnValue;
}


// Function Creative.CreativeModeGameObject.GetObjectFromPool
// (Native, Public, HasOutParms)
// Parameters:
// int                            PoolId                         (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 NewOuter                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 InName                         (Parm, OutParm, ZeroConstructor)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UCreativeModeGameObject::GetObjectFromPool(int PoolId, class UObject* NewOuter, struct FString* InName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameObject.GetObjectFromPool");

	UCreativeModeGameObject_GetObjectFromPool_Params params;
	params.PoolId = PoolId;
	params.NewOuter = NewOuter;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (InName != nullptr)
		*InName = params.InName;

	return params.ReturnValue;
}


// Function Creative.CreativeGameParameterManager.SetGameParameterResumeNodes
// (Final, Native, Public)
// Parameters:
// TArray<struct FCreativeGameParameter> GameParameterNodes             (Parm, ZeroConstructor)

void UCreativeGameParameterManager::SetGameParameterResumeNodes(TArray<struct FCreativeGameParameter> GameParameterNodes)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGameParameterManager.SetGameParameterResumeNodes");

	UCreativeGameParameterManager_SetGameParameterResumeNodes_Params params;
	params.GameParameterNodes = GameParameterNodes;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeGameParameterManager.RemoveGameParameter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ParameterKey                   (Parm, ZeroConstructor)
// struct FString                 TemplateID                     (ConstParm, Parm, ZeroConstructor)

void UCreativeGameParameterManager::RemoveGameParameter(const struct FString& ParameterKey, const struct FString& TemplateID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGameParameterManager.RemoveGameParameter");

	UCreativeGameParameterManager_RemoveGameParameter_Params params;
	params.ParameterKey = ParameterKey;
	params.TemplateID = TemplateID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeGameParameterManager.ReceiveOnGameStateBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AGameStateBase*          GameState                      (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeGameParameterManager::ReceiveOnGameStateBeginPlay(class AGameStateBase* GameState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGameParameterManager.ReceiveOnGameStateBeginPlay");

	UCreativeGameParameterManager_ReceiveOnGameStateBeginPlay_Params params;
	params.GameState = GameState;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeGameParameterManager.OnReceivePreGameParameterRemove
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 ParameterKey                   (Parm, ZeroConstructor)
// struct FString                 TemplateID                     (Parm, ZeroConstructor)

void UCreativeGameParameterManager::OnReceivePreGameParameterRemove(const struct FString& ParameterKey, const struct FString& TemplateID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGameParameterManager.OnReceivePreGameParameterRemove");

	UCreativeGameParameterManager_OnReceivePreGameParameterRemove_Params params;
	params.ParameterKey = ParameterKey;
	params.TemplateID = TemplateID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeGameParameterManager.OnReceivePostGameParameterChange
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FString                 ParameterKey                   (Parm, ZeroConstructor)
// struct FString                 TemplateID                     (Parm, ZeroConstructor)
// TArray<unsigned char>          Content                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UCreativeGameParameterManager::OnReceivePostGameParameterChange(const struct FString& ParameterKey, const struct FString& TemplateID, TArray<unsigned char> Content)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGameParameterManager.OnReceivePostGameParameterChange");

	UCreativeGameParameterManager_OnReceivePostGameParameterChange_Params params;
	params.ParameterKey = ParameterKey;
	params.TemplateID = TemplateID;
	params.Content = Content;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeGameParameterManager.OnReceivePostGameParameterAdd
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FString                 ParameterKey                   (Parm, ZeroConstructor)
// struct FString                 TemplateID                     (Parm, ZeroConstructor)
// TArray<unsigned char>          Content                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UCreativeGameParameterManager::OnReceivePostGameParameterAdd(const struct FString& ParameterKey, const struct FString& TemplateID, TArray<unsigned char> Content)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGameParameterManager.OnReceivePostGameParameterAdd");

	UCreativeGameParameterManager_OnReceivePostGameParameterAdd_Params params;
	params.ParameterKey = ParameterKey;
	params.TemplateID = TemplateID;
	params.Content = Content;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeGameParameterManager.OnGameStateBeginPlay
// (Final, Native, Protected)
// Parameters:
// class AGameStateBase*          GameState                      (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeGameParameterManager::OnGameStateBeginPlay(class AGameStateBase* GameState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGameParameterManager.OnGameStateBeginPlay");

	UCreativeGameParameterManager_OnGameStateBeginPlay_Params params;
	params.GameState = GameState;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeGameParameterManager.GetGameParameterResumeNodes
// (Final, Native, Public)
// Parameters:
// TArray<uint32_t>               ParameterHeadHashs             (Parm, ZeroConstructor)
// TArray<struct FCreativeGameParameter> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FCreativeGameParameter> UCreativeGameParameterManager::GetGameParameterResumeNodes(TArray<uint32_t> ParameterHeadHashs)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGameParameterManager.GetGameParameterResumeNodes");

	UCreativeGameParameterManager_GetGameParameterResumeNodes_Params params;
	params.ParameterHeadHashs = ParameterHeadHashs;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeGameParameterManager.GetGameParameterContent
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 ParameterKey                   (Parm, ZeroConstructor)
// struct FString                 TemplateID                     (ConstParm, Parm, ZeroConstructor)
// TArray<unsigned char>          OutContent                     (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeGameParameterManager::GetGameParameterContent(const struct FString& ParameterKey, const struct FString& TemplateID, TArray<unsigned char>* OutContent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGameParameterManager.GetGameParameterContent");

	UCreativeGameParameterManager_GetGameParameterContent_Params params;
	params.ParameterKey = ParameterKey;
	params.TemplateID = TemplateID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutContent != nullptr)
		*OutContent = params.OutContent;

	return params.ReturnValue;
}


// Function Creative.CreativeGameParameterManager.Get
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContext                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UCreativeGameParameterManager* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCreativeGameParameterManager* UCreativeGameParameterManager::Get(class UObject* WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGameParameterManager.Get");

	UCreativeGameParameterManager_Get_Params params;
	params.WorldContext = WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeGameParameterManager.ChangeGameParameter
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 ParameterKey                   (Parm, ZeroConstructor)
// struct FString                 TemplateID                     (ConstParm, Parm, ZeroConstructor)
// TArray<unsigned char>          Content                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UCreativeGameParameterManager::ChangeGameParameter(const struct FString& ParameterKey, const struct FString& TemplateID, TArray<unsigned char> Content)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGameParameterManager.ChangeGameParameter");

	UCreativeGameParameterManager_ChangeGameParameter_Params params;
	params.ParameterKey = ParameterKey;
	params.TemplateID = TemplateID;
	params.Content = Content;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeGameParameterManager.AddGameParameter
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 ParameterKey                   (Parm, ZeroConstructor)
// struct FString                 TemplateID                     (ConstParm, Parm, ZeroConstructor)
// TArray<unsigned char>          Content                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UCreativeGameParameterManager::AddGameParameter(const struct FString& ParameterKey, const struct FString& TemplateID, TArray<unsigned char> Content)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGameParameterManager.AddGameParameter");

	UCreativeGameParameterManager_AddGameParameter_Params params;
	params.ParameterKey = ParameterKey;
	params.TemplateID = TemplateID;
	params.Content = Content;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeGameState.UnregisterLiteComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ULiteComponent*          Component                      (Parm, ZeroConstructor, IsPlainOldData)

void ACreativeModeGameState::UnregisterLiteComponent(class ULiteComponent* Component)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameState.UnregisterLiteComponent");

	ACreativeModeGameState_UnregisterLiteComponent_Params params;
	params.Component = Component;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeGameState.SetLiteComponentTickEnable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void ACreativeModeGameState::SetLiteComponentTickEnable(bool bEnabled)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameState.SetLiteComponentTickEnable");

	ACreativeModeGameState_SetLiteComponentTickEnable_Params params;
	params.bEnabled = bEnabled;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeGameState.SetCurrentGameType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// ECreativeModeGameType          NewGameType                    (Parm, ZeroConstructor, IsPlainOldData)

void ACreativeModeGameState::SetCurrentGameType(ECreativeModeGameType NewGameType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameState.SetCurrentGameType");

	ACreativeModeGameState_SetCurrentGameType_Params params;
	params.NewGameType = NewGameType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeGameState.RPC_Replay_SetInstanceDataContent
// (Net, NetReliable, Native, Event, Public)
// Parameters:
// uint32_t                       InstanceID                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FCreativeInstanceDataContent InstanceDataContent            (Parm)

void ACreativeModeGameState::RPC_Replay_SetInstanceDataContent(uint32_t InstanceID, const struct FCreativeInstanceDataContent& InstanceDataContent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameState.RPC_Replay_SetInstanceDataContent");

	ACreativeModeGameState_RPC_Replay_SetInstanceDataContent_Params params;
	params.InstanceID = InstanceID;
	params.InstanceDataContent = InstanceDataContent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeGameState.RegisterLiteComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ULiteComponent*          Component                      (Parm, ZeroConstructor, IsPlainOldData)

void ACreativeModeGameState::RegisterLiteComponent(class ULiteComponent* Component)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameState.RegisterLiteComponent");

	ACreativeModeGameState_RegisterLiteComponent_Params params;
	params.Component = Component;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeGameState.ReceiveInitializeLiteComponent
// (Event, Protected, BlueprintEvent)

void ACreativeModeGameState::ReceiveInitializeLiteComponent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameState.ReceiveInitializeLiteComponent");

	ACreativeModeGameState_ReceiveInitializeLiteComponent_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeGameState.ReceiveCreativeCollectGarbage
// (Event, Public, BlueprintEvent)

void ACreativeModeGameState::ReceiveCreativeCollectGarbage()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameState.ReceiveCreativeCollectGarbage");

	ACreativeModeGameState_ReceiveCreativeCollectGarbage_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeGameState.ReceiveAddContextDataToCrashKit
// (Event, Protected, BlueprintEvent)

void ACreativeModeGameState::ReceiveAddContextDataToCrashKit()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameState.ReceiveAddContextDataToCrashKit");

	ACreativeModeGameState_ReceiveAddContextDataToCrashKit_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeGameState.OnViewportSizeChanged
// (Final, Native, Protected, HasDefaults)
// Parameters:
// struct FVector2D               OldViewportSize                (Parm, IsPlainOldData)
// struct FVector2D               NewViewportSize                (Parm, IsPlainOldData)

void ACreativeModeGameState::OnViewportSizeChanged(const struct FVector2D& OldViewportSize, const struct FVector2D& NewViewportSize)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameState.OnViewportSizeChanged");

	ACreativeModeGameState_OnViewportSizeChanged_Params params;
	params.OldViewportSize = OldViewportSize;
	params.NewViewportSize = NewViewportSize;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeGameState.OnRep_InitializeGameType
// (Final, Native, Protected)
// Parameters:
// ECreativeModeGameType          LastInitializeGameType         (Parm, ZeroConstructor, IsPlainOldData)

void ACreativeModeGameState::OnRep_InitializeGameType(ECreativeModeGameType LastInitializeGameType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameState.OnRep_InitializeGameType");

	ACreativeModeGameState_OnRep_InitializeGameType_Params params;
	params.LastInitializeGameType = LastInitializeGameType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeGameState.OnRep_CurrentStateComponent
// (Final, Native, Protected)
// Parameters:
// class UCreativeModeGameStateBaseComponent* LastComponent                  (Parm, ZeroConstructor, IsPlainOldData)

void ACreativeModeGameState::OnRep_CurrentStateComponent(class UCreativeModeGameStateBaseComponent* LastComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameState.OnRep_CurrentStateComponent");

	ACreativeModeGameState_OnRep_CurrentStateComponent_Params params;
	params.LastComponent = LastComponent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeGameState.OnRep_CreativeModTemplateId
// (Final, Native, Protected)
// Parameters:
// int                            LastCreativeModTemplateId      (Parm, ZeroConstructor, IsPlainOldData)

void ACreativeModeGameState::OnRep_CreativeModTemplateId(int LastCreativeModTemplateId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameState.OnRep_CreativeModTemplateId");

	ACreativeModeGameState_OnRep_CreativeModTemplateId_Params params;
	params.LastCreativeModTemplateId = LastCreativeModTemplateId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeGameState.OnRep_CreativeModID
// (Final, Native, Protected)
// Parameters:
// int                            LastCreativeModID              (Parm, ZeroConstructor, IsPlainOldData)

void ACreativeModeGameState::OnRep_CreativeModID(int LastCreativeModID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameState.OnRep_CreativeModID");

	ACreativeModeGameState_OnRep_CreativeModID_Params params;
	params.LastCreativeModID = LastCreativeModID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeGameState.OnRep_BlockySlotStrings
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// TArray<struct FBlockySlotString> BlockySlotStrings              (Parm, OutParm, ZeroConstructor)

void ACreativeModeGameState::OnRep_BlockySlotStrings(TArray<struct FBlockySlotString>* BlockySlotStrings)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameState.OnRep_BlockySlotStrings");

	ACreativeModeGameState_OnRep_BlockySlotStrings_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (BlockySlotStrings != nullptr)
		*BlockySlotStrings = params.BlockySlotStrings;
}


// Function Creative.CreativeModeGameState.OnClientRecordingStateChange
// (Final, Native, Public)
// Parameters:
// EClientRecordingType           Type                           (Parm, ZeroConstructor, IsPlainOldData)

void ACreativeModeGameState::OnClientRecordingStateChange(EClientRecordingType Type)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameState.OnClientRecordingStateChange");

	ACreativeModeGameState_OnClientRecordingStateChange_Params params;
	params.Type = Type;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeGameState.IsOfficialGame
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACreativeModeGameState::IsOfficialGame()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameState.IsOfficialGame");

	ACreativeModeGameState_IsOfficialGame_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeGameState.IsEditorMode
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACreativeModeGameState::IsEditorMode()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameState.IsEditorMode");

	ACreativeModeGameState_IsEditorMode_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeGameState.IsDemoGame
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACreativeModeGameState::IsDemoGame()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameState.IsDemoGame");

	ACreativeModeGameState_IsDemoGame_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeGameState.IsCreativeMode
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACreativeModeGameState::IsCreativeMode()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameState.IsCreativeMode");

	ACreativeModeGameState_IsCreativeMode_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeGameState.IsCreativeEditor
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACreativeModeGameState::IsCreativeEditor()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameState.IsCreativeEditor");

	ACreativeModeGameState_IsCreativeEditor_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeGameState.InitCreativeModID
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ModID                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            TemplateID                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ACreativeModeGameState::InitCreativeModID(int ModID, int TemplateID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameState.InitCreativeModID");

	ACreativeModeGameState_InitCreativeModID_Params params;
	params.ModID = ModID;
	params.TemplateID = TemplateID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeGameState.GetPlayState
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// ECreativeModePlayState         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ECreativeModePlayState ACreativeModeGameState::GetPlayState()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameState.GetPlayState");

	ACreativeModeGameState_GetPlayState_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeGameState.GetInitializeGameType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// ECreativeModeGameType          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ECreativeModeGameType ACreativeModeGameState::GetInitializeGameType()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameState.GetInitializeGameType");

	ACreativeModeGameState_GetInitializeGameType_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeGameState.GetDisableDistanceLevelsOutsideBox
// (Final, Native, Public)
// Parameters:
// float                          X                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Y                              (Parm, ZeroConstructor, IsPlainOldData)
// int                            W                              (Parm, ZeroConstructor, IsPlainOldData)
// int                            L                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          RotationAngle                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUseFilter                     (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FString>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FString> ACreativeModeGameState::GetDisableDistanceLevelsOutsideBox(float X, float Y, int W, int L, float RotationAngle, bool bUseFilter)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameState.GetDisableDistanceLevelsOutsideBox");

	ACreativeModeGameState_GetDisableDistanceLevelsOutsideBox_Params params;
	params.X = X;
	params.Y = Y;
	params.W = W;
	params.L = L;
	params.RotationAngle = RotationAngle;
	params.bUseFilter = bUseFilter;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeGameState.GetCurrentStateComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UCreativeModeGameStateBaseComponent* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCreativeModeGameStateBaseComponent* ACreativeModeGameState::GetCurrentStateComponent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameState.GetCurrentStateComponent");

	ACreativeModeGameState_GetCurrentStateComponent_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeGameState.GetCurrentGameType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// ECreativeModeGameType          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ECreativeModeGameType ACreativeModeGameState::GetCurrentGameType()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameState.GetCurrentGameType");

	ACreativeModeGameState_GetCurrentGameType_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeGameState.GetCurCreativeType
// (Native, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ACreativeModeGameState::GetCurCreativeType()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameState.GetCurCreativeType");

	ACreativeModeGameState_GetCurCreativeType_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeGameState.GetCurCreativeModResList
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString ACreativeModeGameState::GetCurCreativeModResList()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameState.GetCurCreativeModResList");

	ACreativeModeGameState_GetCurCreativeModResList_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeGameState.GetCurCreativeModMapID
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString ACreativeModeGameState::GetCurCreativeModMapID()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameState.GetCurCreativeModMapID");

	ACreativeModeGameState_GetCurCreativeModMapID_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeGameState.GetCreativeModTemplateId
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ACreativeModeGameState::GetCreativeModTemplateId()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameState.GetCreativeModTemplateId");

	ACreativeModeGameState_GetCreativeModTemplateId_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeGameState.GetCreativeModID
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ACreativeModeGameState::GetCreativeModID()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameState.GetCreativeModID");

	ACreativeModeGameState_GetCreativeModID_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeGameState.FindLiteComponentByClass
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                  ComponentClass                 (Parm, ZeroConstructor, IsPlainOldData)
// class ULiteComponent*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ULiteComponent* ACreativeModeGameState::FindLiteComponentByClass(class UClass* ComponentClass)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameState.FindLiteComponentByClass");

	ACreativeModeGameState_FindLiteComponentByClass_Params params;
	params.ComponentClass = ComponentClass;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeGameState.FilterLevelByName
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// struct FName                   LevelName                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACreativeModeGameState::FilterLevelByName(const struct FName& LevelName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameState.FilterLevelByName");

	ACreativeModeGameState_FilterLevelByName_Params params;
	params.LevelName = LevelName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeGameState.ClearInstance
// (Final, Native, Public)

void ACreativeModeGameState::ClearInstance()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameState.ClearInstance");

	ACreativeModeGameState_ClearInstance_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeGameState.ClearAndReImportInstance
// (Final, Native, Protected)

void ACreativeModeGameState::ClearAndReImportInstance()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameState.ClearAndReImportInstance");

	ACreativeModeGameState_ClearAndReImportInstance_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeGameStateComponent.SetPlayState
// (Final, Native, Protected)
// Parameters:
// ECreativeModePlayState         newPlayState                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UCreativeModeGameStateComponent::SetPlayState(ECreativeModePlayState newPlayState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameStateComponent.SetPlayState");

	UCreativeModeGameStateComponent_SetPlayState_Params params;
	params.newPlayState = newPlayState;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeGameStateComponent.OnRep_RuntimePlayerBattleDataObject
// (Final, Native, Protected)

void UCreativeModeGameStateComponent::OnRep_RuntimePlayerBattleDataObject()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameStateComponent.OnRep_RuntimePlayerBattleDataObject");

	UCreativeModeGameStateComponent_OnRep_RuntimePlayerBattleDataObject_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeGameStateComponent.OnRep_IntegralMechanismComponent
// (Final, Native, Protected)

void UCreativeModeGameStateComponent::OnRep_IntegralMechanismComponent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameStateComponent.OnRep_IntegralMechanismComponent");

	UCreativeModeGameStateComponent_OnRep_IntegralMechanismComponent_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeGameStateComponent.OnRep_CurPlayState
// (Final, Native, Protected)

void UCreativeModeGameStateComponent::OnRep_CurPlayState()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameStateComponent.OnRep_CurPlayState");

	UCreativeModeGameStateComponent_OnRep_CurPlayState_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeGameStateComponent.GetPlayState
// (Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// ECreativeModePlayState         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ECreativeModePlayState UCreativeModeGameStateComponent::GetPlayState()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGameStateComponent.GetPlayState");

	UCreativeModeGameStateComponent_GetPlayState_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeGlobalApiObject.Print
// (Final, Native, Public)
// Parameters:
// struct FString                 LogText                        (Parm, ZeroConstructor)

void UCreativeGlobalApiObject::Print(const struct FString& LogText)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGlobalApiObject.Print");

	UCreativeGlobalApiObject_Print_Params params;
	params.LogText = LogText;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeGlobalApiObject.CPPExecutionConsumptionTest
// (Final, Native, Public)
// Parameters:
// int                            A                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          B                              (Parm, ZeroConstructor, IsPlainOldData)
// double                         C                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UCreativeGlobalApiObject::CPPExecutionConsumptionTest(int A, float B, double C)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGlobalApiObject.CPPExecutionConsumptionTest");

	UCreativeGlobalApiObject_CPPExecutionConsumptionTest_Params params;
	params.A = A;
	params.B = B;
	params.C = C;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeGridLevelsManager.UpdateBatchActorInstances
// (Final, Native, Public)
// Parameters:
// struct FString                 GridName                       (Parm, ZeroConstructor)
// int                            AssetId                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            MaterialID                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReplaceAll                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UCreativeGridLevelsManager::UpdateBatchActorInstances(const struct FString& GridName, int AssetId, int MaterialID, bool ReplaceAll)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGridLevelsManager.UpdateBatchActorInstances");

	UCreativeGridLevelsManager_UpdateBatchActorInstances_Params params;
	params.GridName = GridName;
	params.AssetId = AssetId;
	params.MaterialID = MaterialID;
	params.ReplaceAll = ReplaceAll;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeGridLevelsManager.UnLoadGridLevelsBatchActor
// (Final, Native, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FString                 GridName                       (Parm, ZeroConstructor)
// struct FIntVector              CellIndex                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UCreativeGridLevelsManager::UnLoadGridLevelsBatchActor(const struct FString& GridName, const struct FIntVector& CellIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGridLevelsManager.UnLoadGridLevelsBatchActor");

	UCreativeGridLevelsManager_UnLoadGridLevelsBatchActor_Params params;
	params.GridName = GridName;
	params.CellIndex = CellIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeGridLevelsManager.StaticMeshObjectRelieveBatch
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FString                 InstanceID                     (Parm, OutParm, ZeroConstructor)

void UCreativeGridLevelsManager::StaticMeshObjectRelieveBatch(struct FString* InstanceID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGridLevelsManager.StaticMeshObjectRelieveBatch");

	UCreativeGridLevelsManager_StaticMeshObjectRelieveBatch_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (InstanceID != nullptr)
		*InstanceID = params.InstanceID;
}


// Function Creative.CreativeGridLevelsManager.StaticMeshObjectReBatch
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FString                 InstanceID                     (Parm, OutParm, ZeroConstructor)

void UCreativeGridLevelsManager::StaticMeshObjectReBatch(struct FString* InstanceID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGridLevelsManager.StaticMeshObjectReBatch");

	UCreativeGridLevelsManager_StaticMeshObjectReBatch_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (InstanceID != nullptr)
		*InstanceID = params.InstanceID;
}


// Function Creative.CreativeGridLevelsManager.RemoveObject
// (Final, Native, Public)
// Parameters:
// struct FString                 InstanceID                     (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeGridLevelsManager::RemoveObject(const struct FString& InstanceID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGridLevelsManager.RemoveObject");

	UCreativeGridLevelsManager_RemoveObject_Params params;
	params.InstanceID = InstanceID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeGridLevelsManager.ReceiveRegistInstanceValueListener
// (Event, Public, BlueprintEvent)

void UCreativeGridLevelsManager::ReceiveRegistInstanceValueListener()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGridLevelsManager.ReceiveRegistInstanceValueListener");

	UCreativeGridLevelsManager_ReceiveRegistInstanceValueListener_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeGridLevelsManager.ReceiveDelayUpdateBatchActorInstances
// (Final, Native, Public)
// Parameters:
// struct FString                 GridName                       (Parm, ZeroConstructor)
// int                            AssetId                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            MaterialID                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReplaceAll                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          MoveForwardTimeStamp           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UCreativeGridLevelsManager::ReceiveDelayUpdateBatchActorInstances(const struct FString& GridName, int AssetId, int MaterialID, bool ReplaceAll, float MoveForwardTimeStamp)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGridLevelsManager.ReceiveDelayUpdateBatchActorInstances");

	UCreativeGridLevelsManager_ReceiveDelayUpdateBatchActorInstances_Params params;
	params.GridName = GridName;
	params.AssetId = AssetId;
	params.MaterialID = MaterialID;
	params.ReplaceAll = ReplaceAll;
	params.MoveForwardTimeStamp = MoveForwardTimeStamp;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeGridLevelsManager.ReceiveClearAllData
// (Event, Public, BlueprintEvent)

void UCreativeGridLevelsManager::ReceiveClearAllData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGridLevelsManager.ReceiveClearAllData");

	UCreativeGridLevelsManager_ReceiveClearAllData_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeGridLevelsManager.ReceiveCheckObjectCanBatch
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 InstanceID                     (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeGridLevelsManager::ReceiveCheckObjectCanBatch(const struct FString& InstanceID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGridLevelsManager.ReceiveCheckObjectCanBatch");

	UCreativeGridLevelsManager_ReceiveCheckObjectCanBatch_Params params;
	params.InstanceID = InstanceID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeGridLevelsManager.ObjectAddToGridCellMap
// (Final, Native, Public, HasDefaults)
// Parameters:
// struct FString                 GridName                       (Parm, ZeroConstructor)
// struct FIntVector              Index                          (ConstParm, Parm, IsPlainOldData)
// struct FString                 InstanceID                     (ConstParm, Parm, ZeroConstructor)

void UCreativeGridLevelsManager::ObjectAddToGridCellMap(const struct FString& GridName, const struct FIntVector& Index, const struct FString& InstanceID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGridLevelsManager.ObjectAddToGridCellMap");

	UCreativeGridLevelsManager_ObjectAddToGridCellMap_Params params;
	params.GridName = GridName;
	params.Index = Index;
	params.InstanceID = InstanceID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeGridLevelsManager.LoadGridLevelsBatchActor
// (Final, Native, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FString                 GridName                       (Parm, ZeroConstructor)
// struct FIntVector              CellIndex                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UCreativeGridLevelsManager::LoadGridLevelsBatchActor(const struct FString& GridName, const struct FIntVector& CellIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGridLevelsManager.LoadGridLevelsBatchActor");

	UCreativeGridLevelsManager_LoadGridLevelsBatchActor_Params params;
	params.GridName = GridName;
	params.CellIndex = CellIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeGridLevelsManager.IsCreativeEidtMode
// (Final, Native, Private)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeGridLevelsManager::IsCreativeEidtMode()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGridLevelsManager.IsCreativeEidtMode");

	UCreativeGridLevelsManager_IsCreativeEidtMode_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeGridLevelsManager.GridCellMapRemoveObject
// (Final, Native, Public, HasDefaults)
// Parameters:
// struct FString                 GridName                       (Parm, ZeroConstructor)
// struct FIntVector              Index                          (ConstParm, Parm, IsPlainOldData)
// struct FString                 InstanceID                     (ConstParm, Parm, ZeroConstructor)

void UCreativeGridLevelsManager::GridCellMapRemoveObject(const struct FString& GridName, const struct FIntVector& Index, const struct FString& InstanceID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGridLevelsManager.GridCellMapRemoveObject");

	UCreativeGridLevelsManager_GridCellMapRemoveObject_Params params;
	params.GridName = GridName;
	params.Index = Index;
	params.InstanceID = InstanceID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeGridLevelsManager.GetStaticMeshBatchActorPath
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UCreativeGridLevelsManager::GetStaticMeshBatchActorPath()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGridLevelsManager.GetStaticMeshBatchActorPath");

	UCreativeGridLevelsManager_GetStaticMeshBatchActorPath_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeGridLevelsManager.GetSingleDestructibleMeshBatchActor
// (Final, Native, Private)
// Parameters:
// class ACreativeDestructibleMeshBatchActor* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ACreativeDestructibleMeshBatchActor* UCreativeGridLevelsManager::GetSingleDestructibleMeshBatchActor()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGridLevelsManager.GetSingleDestructibleMeshBatchActor");

	UCreativeGridLevelsManager_GetSingleDestructibleMeshBatchActor_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeGridLevelsManager.GetSingleBatchActor
// (Final, Native, Public)
// Parameters:
// struct FString                 GridName                       (Parm, ZeroConstructor)
// class ACreativeModeStaticMeshBatchActor* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ACreativeModeStaticMeshBatchActor* UCreativeGridLevelsManager::GetSingleBatchActor(const struct FString& GridName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGridLevelsManager.GetSingleBatchActor");

	UCreativeGridLevelsManager_GetSingleBatchActor_Params params;
	params.GridName = GridName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeGridLevelsManager.GetRelieveBatchDistance
// (Final, Native, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UCreativeGridLevelsManager::GetRelieveBatchDistance()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGridLevelsManager.GetRelieveBatchDistance");

	UCreativeGridLevelsManager_GetRelieveBatchDistance_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeGridLevelsManager.GetReBatchDistance
// (Final, Native, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UCreativeGridLevelsManager::GetReBatchDistance()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGridLevelsManager.GetReBatchDistance");

	UCreativeGridLevelsManager_GetReBatchDistance_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeGridLevelsManager.GetOnCellIndex
// (Final, Native, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FString                 GridName                       (Parm, ZeroConstructor)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FIntVector              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FIntVector UCreativeGridLevelsManager::GetOnCellIndex(const struct FString& GridName, const struct FVector& Location)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGridLevelsManager.GetOnCellIndex");

	UCreativeGridLevelsManager_GetOnCellIndex_Params params;
	params.GridName = GridName;
	params.Location = Location;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeGridLevelsManager.GetObjectTransform
// (Final, Native, Private, HasDefaults)
// Parameters:
// struct FString                 ID                             (Parm, ZeroConstructor)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform UCreativeGridLevelsManager::GetObjectTransform(const struct FString& ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGridLevelsManager.GetObjectTransform");

	UCreativeGridLevelsManager_GetObjectTransform_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeGridLevelsManager.GetObjectStreamingType
// (Final, Native, Private)
// Parameters:
// struct FString                 ID                             (Parm, ZeroConstructor)
// ECreativeModeActorStreamingType ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ECreativeModeActorStreamingType UCreativeGridLevelsManager::GetObjectStreamingType(const struct FString& ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGridLevelsManager.GetObjectStreamingType");

	UCreativeGridLevelsManager_GetObjectStreamingType_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeGridLevelsManager.GetObjectRuntimeGrid
// (Final, Native, Public)
// Parameters:
// struct FString                 ID                             (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UCreativeGridLevelsManager::GetObjectRuntimeGrid(const struct FString& ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGridLevelsManager.GetObjectRuntimeGrid");

	UCreativeGridLevelsManager_GetObjectRuntimeGrid_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeGridLevelsManager.GetObjectOnCellIndexByLocation
// (Final, Native, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FString                 InstanceID                     (Parm, ZeroConstructor)
// struct FString                 GridName                       (Parm, ZeroConstructor)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FIntVector              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FIntVector UCreativeGridLevelsManager::GetObjectOnCellIndexByLocation(const struct FString& InstanceID, const struct FString& GridName, const struct FVector& Location)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGridLevelsManager.GetObjectOnCellIndexByLocation");

	UCreativeGridLevelsManager_GetObjectOnCellIndexByLocation_Params params;
	params.InstanceID = InstanceID;
	params.GridName = GridName;
	params.Location = Location;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeGridLevelsManager.GetObjectOnCellIndex
// (Final, Native, Public, HasDefaults)
// Parameters:
// struct FString                 InstanceID                     (Parm, ZeroConstructor)
// struct FIntVector              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FIntVector UCreativeGridLevelsManager::GetObjectOnCellIndex(const struct FString& InstanceID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGridLevelsManager.GetObjectOnCellIndex");

	UCreativeGridLevelsManager_GetObjectOnCellIndex_Params params;
	params.InstanceID = InstanceID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeGridLevelsManager.GetObjectIsPrefab
// (Final, Native, Private)
// Parameters:
// struct FString                 ID                             (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeGridLevelsManager::GetObjectIsPrefab(const struct FString& ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGridLevelsManager.GetObjectIsPrefab");

	UCreativeGridLevelsManager_GetObjectIsPrefab_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeGridLevelsManager.GetObjectAssetID
// (Final, Native, Private)
// Parameters:
// struct FString                 ID                             (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UCreativeGridLevelsManager::GetObjectAssetID(const struct FString& ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGridLevelsManager.GetObjectAssetID");

	UCreativeGridLevelsManager_GetObjectAssetID_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeGridLevelsManager.GetGridLoadingRange
// (Final, Native, Public)
// Parameters:
// struct FString                 GridName                       (Parm, ZeroConstructor)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UCreativeGridLevelsManager::GetGridLoadingRange(const struct FString& GridName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGridLevelsManager.GetGridLoadingRange");

	UCreativeGridLevelsManager_GetGridLoadingRange_Params params;
	params.GridName = GridName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeGridLevelsManager.GetGridList
// (Final, Native, Public)
// Parameters:
// TArray<struct FString>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FString> UCreativeGridLevelsManager::GetGridList()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGridLevelsManager.GetGridList");

	UCreativeGridLevelsManager_GetGridList_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeGridLevelsManager.GetDestructibleMeshBatchActorPath
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UCreativeGridLevelsManager::GetDestructibleMeshBatchActorPath()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGridLevelsManager.GetDestructibleMeshBatchActorPath");

	UCreativeGridLevelsManager_GetDestructibleMeshBatchActorPath_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeGridLevelsManager.GetDefaultGridName
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UCreativeGridLevelsManager::GetDefaultGridName()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGridLevelsManager.GetDefaultGridName");

	UCreativeGridLevelsManager_GetDefaultGridName_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeGridLevelsManager.GetCellWidthHeight
// (Final, Native, Public, HasDefaults)
// Parameters:
// struct FString                 GridName                       (Parm, ZeroConstructor)
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector2D UCreativeGridLevelsManager::GetCellWidthHeight(const struct FString& GridName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGridLevelsManager.GetCellWidthHeight");

	UCreativeGridLevelsManager_GetCellWidthHeight_Params params;
	params.GridName = GridName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeGridLevelsManager.GetCellCenterLocation
// (Final, Native, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FString                 GridName                       (Parm, ZeroConstructor)
// struct FIntVector              CellIndex                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UCreativeGridLevelsManager::GetCellCenterLocation(const struct FString& GridName, const struct FIntVector& CellIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGridLevelsManager.GetCellCenterLocation");

	UCreativeGridLevelsManager_GetCellCenterLocation_Params params;
	params.GridName = GridName;
	params.CellIndex = CellIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeGridLevelsManager.GetAxisIndex
// (Final, Native, Public, Const)
// Parameters:
// float                          Pos                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          BlockLenght                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UCreativeGridLevelsManager::GetAxisIndex(float Pos, float BlockLenght)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGridLevelsManager.GetAxisIndex");

	UCreativeGridLevelsManager_GetAxisIndex_Params params;
	params.Pos = Pos;
	params.BlockLenght = BlockLenght;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeGridLevelsManager.Get
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContext                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UCreativeGridLevelsManager* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCreativeGridLevelsManager* UCreativeGridLevelsManager::Get(class UObject* WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGridLevelsManager.Get");

	UCreativeGridLevelsManager_Get_Params params;
	params.WorldContext = WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeGridLevelsManager.CheckObjectBeRelieveBatch
// (Final, Native, Private)
// Parameters:
// struct FString                 ID                             (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeGridLevelsManager::CheckObjectBeRelieveBatch(const struct FString& ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGridLevelsManager.CheckObjectBeRelieveBatch");

	UCreativeGridLevelsManager_CheckObjectBeRelieveBatch_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeGridLevelsManager.CheckObjectBeBatch
// (Final, Native, Public)
// Parameters:
// struct FString                 ID                             (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeGridLevelsManager::CheckObjectBeBatch(const struct FString& ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGridLevelsManager.CheckObjectBeBatch");

	UCreativeGridLevelsManager_CheckObjectBeBatch_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeGridLevelsManager.CheckAndRemoveObjectForBatchData
// (Final, Native, Public)
// Parameters:
// struct FString                 ID                             (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeGridLevelsManager::CheckAndRemoveObjectForBatchData(const struct FString& ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGridLevelsManager.CheckAndRemoveObjectForBatchData");

	UCreativeGridLevelsManager_CheckAndRemoveObjectForBatchData_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeGridLevelsManager.CheckAndAddObjectToBatchData
// (Final, Native, Public)
// Parameters:
// struct FString                 ID                             (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeGridLevelsManager::CheckAndAddObjectToBatchData(const struct FString& ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGridLevelsManager.CheckAndAddObjectToBatchData");

	UCreativeGridLevelsManager_CheckAndAddObjectToBatchData_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeGridLevelsManager.ChangeObjectTransform
// (Final, Native, Public)
// Parameters:
// struct FString                 InstanceID                     (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeGridLevelsManager::ChangeObjectTransform(const struct FString& InstanceID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGridLevelsManager.ChangeObjectTransform");

	UCreativeGridLevelsManager_ChangeObjectTransform_Params params;
	params.InstanceID = InstanceID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeGridLevelsManager.ChangeObjectStreamingType
// (Final, Native, Public)
// Parameters:
// struct FString                 InstanceID                     (Parm, ZeroConstructor)
// ECreativeModeActorStreamingType NewStremaingType               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeGridLevelsManager::ChangeObjectStreamingType(const struct FString& InstanceID, ECreativeModeActorStreamingType NewStremaingType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGridLevelsManager.ChangeObjectStreamingType");

	UCreativeGridLevelsManager_ChangeObjectStreamingType_Params params;
	params.InstanceID = InstanceID;
	params.NewStremaingType = NewStremaingType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeGridLevelsManager.ChangeObjectMaterialIds
// (Final, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeGridLevelsManager::ChangeObjectMaterialIds()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGridLevelsManager.ChangeObjectMaterialIds");

	UCreativeGridLevelsManager_ChangeObjectMaterialIds_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeGridLevelsManager.ChangeObjectMaterialId
// (Final, Native, Public)
// Parameters:
// struct FString                 InstanceID                     (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeGridLevelsManager::ChangeObjectMaterialId(const struct FString& InstanceID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGridLevelsManager.ChangeObjectMaterialId");

	UCreativeGridLevelsManager_ChangeObjectMaterialId_Params params;
	params.InstanceID = InstanceID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeGridLevelsManager.ChangeObjectIsPrefab
// (Final, Native, Public)
// Parameters:
// struct FString                 InstanceID                     (Parm, ZeroConstructor)
// bool                           bIsPrefab                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeGridLevelsManager::ChangeObjectIsPrefab(const struct FString& InstanceID, bool bIsPrefab)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGridLevelsManager.ChangeObjectIsPrefab");

	UCreativeGridLevelsManager_ChangeObjectIsPrefab_Params params;
	params.InstanceID = InstanceID;
	params.bIsPrefab = bIsPrefab;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeGridLevelsManager.AddObjectToGridLevels
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FString                 InstanceID                     (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeGridLevelsManager::AddObjectToGridLevels(struct FString* InstanceID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGridLevelsManager.AddObjectToGridLevels");

	UCreativeGridLevelsManager_AddObjectToGridLevels_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (InstanceID != nullptr)
		*InstanceID = params.InstanceID;

	return params.ReturnValue;
}


// Function Creative.CreativeGridLevelsManager.ActivateAllAlwaysLoadCellIndex
// (Final, Native, Private)

void UCreativeGridLevelsManager::ActivateAllAlwaysLoadCellIndex()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGridLevelsManager.ActivateAllAlwaysLoadCellIndex");

	UCreativeGridLevelsManager_ActivateAllAlwaysLoadCellIndex_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeGroupManager.Get
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContext                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UCreativeGroupManager*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCreativeGroupManager* UCreativeGroupManager::Get(class UObject* WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGroupManager.Get");

	UCreativeGroupManager_Get_Params params;
	params.WorldContext = WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeGuideComponent.SweepSingleByChannel
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FHitResult              OutHit                         (Parm, OutParm, IsPlainOldData)
// struct FVector                 Start                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 End                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// TArray<class AActor*>          IgnoreActors                   (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeGuideComponent::SweepSingleByChannel(const struct FVector& Start, const struct FVector& End, TArray<class AActor*> IgnoreActors, struct FHitResult* OutHit)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGuideComponent.SweepSingleByChannel");

	UCreativeGuideComponent_SweepSingleByChannel_Params params;
	params.Start = Start;
	params.End = End;
	params.IgnoreActors = IgnoreActors;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutHit != nullptr)
		*OutHit = params.OutHit;

	return params.ReturnValue;
}


// Function Creative.CreativeGuideComponent.GenereateSplineMeshes
// (Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FVector>         Points                         (Parm, ZeroConstructor)

void UCreativeGuideComponent::GenereateSplineMeshes(TArray<struct FVector> Points)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGuideComponent.GenereateSplineMeshes");

	UCreativeGuideComponent_GenereateSplineMeshes_Params params;
	params.Points = Points;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeGuideMeshComponent.OnReturnToPool
// (Native, Public)
// Parameters:
// class UObject*                 NewOuter                       (Parm, ZeroConstructor, IsPlainOldData)
// uint32_t                       RecycledSeq                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeGuideMeshComponent::OnReturnToPool(class UObject* NewOuter, uint32_t RecycledSeq)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGuideMeshComponent.OnReturnToPool");

	UCreativeGuideMeshComponent_OnReturnToPool_Params params;
	params.NewOuter = NewOuter;
	params.RecycledSeq = RecycledSeq;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeGuideMeshComponent.OnPickFromPool
// (Native, Public)
// Parameters:
// class UObject*                 NewOuter                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 InName                         (Parm, ZeroConstructor)

void UCreativeGuideMeshComponent::OnPickFromPool(class UObject* NewOuter, const struct FString& InName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeGuideMeshComponent.OnPickFromPool");

	UCreativeGuideMeshComponent_OnPickFromPool_Params params;
	params.NewOuter = NewOuter;
	params.InName = InName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeInGameManagerCenter.GetIsBeginPlayEnded
// (Final, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACreativeModeInGameManagerCenter::GetIsBeginPlayEnded()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeInGameManagerCenter.GetIsBeginPlayEnded");

	ACreativeModeInGameManagerCenter_GetIsBeginPlayEnded_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeInstanceManager.UpdateModBinInstanceCount
// (Final, Native, Public, BlueprintCallable)

void UCreativeInstanceManager::UpdateModBinInstanceCount()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.UpdateModBinInstanceCount");

	UCreativeInstanceManager_UpdateModBinInstanceCount_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeInstanceManager.SetModBinInstanceCount
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Count                          (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeInstanceManager::SetModBinInstanceCount(int Count)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.SetModBinInstanceCount");

	UCreativeInstanceManager_SetModBinInstanceCount_Params params;
	params.Count = Count;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeInstanceManager.SetInstanceValue
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 InstanceID                     (Parm, ZeroConstructor)
// struct FString                 Key                            (Parm, ZeroConstructor)
// struct FString                 Value                          (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeInstanceManager::SetInstanceValue(const struct FString& InstanceID, const struct FString& Key, const struct FString& Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.SetInstanceValue");

	UCreativeInstanceManager_SetInstanceValue_Params params;
	params.InstanceID = InstanceID;
	params.Key = Key;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeInstanceManager.SetInstanceDataContents
// (Final, Native, Public, HasOutParms)
// Parameters:
// uint16_t                       Seq                            (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FCreativeInstanceDataContent> InstanceDataContents           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UCreativeInstanceManager::SetInstanceDataContents(uint16_t Seq, TArray<struct FCreativeInstanceDataContent> InstanceDataContents)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.SetInstanceDataContents");

	UCreativeInstanceManager_SetInstanceDataContents_Params params;
	params.Seq = Seq;
	params.InstanceDataContents = InstanceDataContents;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeInstanceManager.SetInstanceContainerContent
// (Final, Native, Public, HasOutParms)
// Parameters:
// TArray<unsigned char>          ContainerContent               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// uint32_t                       NewSeq                         (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeInstanceManager::SetInstanceContainerContent(TArray<unsigned char> ContainerContent, uint32_t NewSeq)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.SetInstanceContainerContent");

	UCreativeInstanceManager_SetInstanceContainerContent_Params params;
	params.ContainerContent = ContainerContent;
	params.NewSeq = NewSeq;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeInstanceManager.SendModBinaryDataToReplay
// (Final, Native, Private, HasOutParms)
// Parameters:
// TArray<unsigned char>          InBinaryData                   (Parm, OutParm, ZeroConstructor)

void UCreativeInstanceManager::SendModBinaryDataToReplay(TArray<unsigned char>* InBinaryData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.SendModBinaryDataToReplay");

	UCreativeInstanceManager_SendModBinaryDataToReplay_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (InBinaryData != nullptr)
		*InBinaryData = params.InBinaryData;
}


// Function Creative.CreativeInstanceManager.ReqInstanceContainerContentTimeoutCheck
// (Final, Native, Protected)

void UCreativeInstanceManager::ReqInstanceContainerContentTimeoutCheck()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.ReqInstanceContainerContentTimeoutCheck");

	UCreativeInstanceManager_ReqInstanceContainerContentTimeoutCheck_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeInstanceManager.ReqInstanceContainerContentEnd
// (Final, Native, Protected)
// Parameters:
// bool                           IsTimeout                      (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeInstanceManager::ReqInstanceContainerContentEnd(bool IsTimeout)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.ReqInstanceContainerContentEnd");

	UCreativeInstanceManager_ReqInstanceContainerContentEnd_Params params;
	params.IsTimeout = IsTimeout;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeInstanceManager.RemoveInstance
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ID                             (Parm, ZeroConstructor)
// bool                           bSkipCheck                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UCreativeInstanceManager::RemoveInstance(const struct FString& ID, bool bSkipCheck)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.RemoveInstance");

	UCreativeInstanceManager_RemoveInstance_Params params;
	params.ID = ID;
	params.bSkipCheck = bSkipCheck;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeInstanceManager.RemoveCppInstanceNode
// (Final, Native, Public)
// Parameters:
// struct FString                 ID                             (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeInstanceManager::RemoveCppInstanceNode(const struct FString& ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.RemoveCppInstanceNode");

	UCreativeInstanceManager_RemoveCppInstanceNode_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeInstanceManager.RecordAllInstanceDataByRPC
// (Final, Native, Public)

void UCreativeInstanceManager::RecordAllInstanceDataByRPC()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.RecordAllInstanceDataByRPC");

	UCreativeInstanceManager_RecordAllInstanceDataByRPC_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeInstanceManager.ReceiveOnGameStateBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// class AGameStateBase*          GameState                      (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeInstanceManager::ReceiveOnGameStateBeginPlay(class AGameStateBase* GameState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.ReceiveOnGameStateBeginPlay");

	UCreativeInstanceManager_ReceiveOnGameStateBeginPlay_Params params;
	params.GameState = GameState;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeInstanceManager.OnRep_RPCReplicatedInstanceContainerSeq
// (Final, Native, Protected)

void UCreativeInstanceManager::OnRep_RPCReplicatedInstanceContainerSeq()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.OnRep_RPCReplicatedInstanceContainerSeq");

	UCreativeInstanceManager_OnRep_RPCReplicatedInstanceContainerSeq_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeInstanceManager.OnRep_ModBinInstanceCount
// (Final, Native, Public)

void UCreativeInstanceManager::OnRep_ModBinInstanceCount()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.OnRep_ModBinInstanceCount");

	UCreativeInstanceManager_OnRep_ModBinInstanceCount_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeInstanceManager.OnReceivePreInstanceRemove
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 ID                             (Parm, ZeroConstructor)
// bool                           IsRollback                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UCreativeInstanceManager::OnReceivePreInstanceRemove(const struct FString& ID, bool IsRollback)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.OnReceivePreInstanceRemove");

	UCreativeInstanceManager_OnReceivePreInstanceRemove_Params params;
	params.ID = ID;
	params.IsRollback = IsRollback;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeInstanceManager.OnReceivePostInstanceChange
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FString                 ID                             (Parm, ZeroConstructor)
// TArray<unsigned char>          Content                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           IsRollback                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UCreativeInstanceManager::OnReceivePostInstanceChange(const struct FString& ID, TArray<unsigned char> Content, bool IsRollback)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.OnReceivePostInstanceChange");

	UCreativeInstanceManager_OnReceivePostInstanceChange_Params params;
	params.ID = ID;
	params.Content = Content;
	params.IsRollback = IsRollback;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeInstanceManager.OnReceivePostInstanceAdd
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FString                 ID                             (Parm, ZeroConstructor)
// TArray<unsigned char>          Content                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           IsRollback                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UCreativeInstanceManager::OnReceivePostInstanceAdd(const struct FString& ID, TArray<unsigned char> Content, bool IsRollback)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.OnReceivePostInstanceAdd");

	UCreativeInstanceManager_OnReceivePostInstanceAdd_Params params;
	params.ID = ID;
	params.Content = Content;
	params.IsRollback = IsRollback;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeInstanceManager.OnReceiveClearNotReplicatedData
// (Event, Public, BlueprintEvent)

void UCreativeInstanceManager::OnReceiveClearNotReplicatedData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.OnReceiveClearNotReplicatedData");

	UCreativeInstanceManager_OnReceiveClearNotReplicatedData_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeInstanceManager.OnReadyToAddInstance
// (Final, Native, Public)

void UCreativeInstanceManager::OnReadyToAddInstance()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.OnReadyToAddInstance");

	UCreativeInstanceManager_OnReadyToAddInstance_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeInstanceManager.OnPlayerControllerBeginPlay
// (Final, Native, Protected)
// Parameters:
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeInstanceManager::OnPlayerControllerBeginPlay(class APlayerController* PlayerController)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.OnPlayerControllerBeginPlay");

	UCreativeInstanceManager_OnPlayerControllerBeginPlay_Params params;
	params.PlayerController = PlayerController;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeInstanceManager.OnGameTypeChanged
// (Final, Native, Public)
// Parameters:
// unsigned char                  LastGameType                   (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  CurrentGameType                (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeInstanceManager::OnGameTypeChanged(unsigned char LastGameType, unsigned char CurrentGameType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.OnGameTypeChanged");

	UCreativeInstanceManager_OnGameTypeChanged_Params params;
	params.LastGameType = LastGameType;
	params.CurrentGameType = CurrentGameType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeInstanceManager.OnGameStateBeginPlay
// (Final, Native, Public)
// Parameters:
// class AGameStateBase*          GameState                      (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeInstanceManager::OnGameStateBeginPlay(class AGameStateBase* GameState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.OnGameStateBeginPlay");

	UCreativeInstanceManager_OnGameStateBeginPlay_Params params;
	params.GameState = GameState;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeInstanceManager.IsInstanceReplicatTreeReplicateComplete
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeInstanceManager::IsInstanceReplicatTreeReplicateComplete()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.IsInstanceReplicatTreeReplicateComplete");

	UCreativeInstanceManager_IsInstanceReplicatTreeReplicateComplete_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeInstanceManager.IsInstanceDataTreeReplicateComplete
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeInstanceManager::IsInstanceDataTreeReplicateComplete()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.IsInstanceDataTreeReplicateComplete");

	UCreativeInstanceManager_IsInstanceDataTreeReplicateComplete_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeInstanceManager.IsAssetRuntimeObjectBox
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ID                             (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeInstanceManager::IsAssetRuntimeObjectBox(const struct FString& ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.IsAssetRuntimeObjectBox");

	UCreativeInstanceManager_IsAssetRuntimeObjectBox_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeInstanceManager.InitExpiredAndDebugAssetID
// (Final, Native, Private, HasOutParms)
// Parameters:
// TArray<int>                    ExpiredAssets                  (Parm, OutParm, ZeroConstructor)
// TArray<int>                    DebugAssets                    (Parm, OutParm, ZeroConstructor)

void UCreativeInstanceManager::InitExpiredAndDebugAssetID(TArray<int>* ExpiredAssets, TArray<int>* DebugAssets)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.InitExpiredAndDebugAssetID");

	UCreativeInstanceManager_InitExpiredAndDebugAssetID_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (ExpiredAssets != nullptr)
		*ExpiredAssets = params.ExpiredAssets;
	if (DebugAssets != nullptr)
		*DebugAssets = params.DebugAssets;
}


// Function Creative.CreativeInstanceManager.HasReadyToAddInstance
// (Final, Native, Public, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeInstanceManager::HasReadyToAddInstance()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.HasReadyToAddInstance");

	UCreativeInstanceManager_HasReadyToAddInstance_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeInstanceManager.HasAuthorityOrReplay
// (Final, Native, Private, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeInstanceManager::HasAuthorityOrReplay()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.HasAuthorityOrReplay");

	UCreativeInstanceManager_HasAuthorityOrReplay_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeInstanceManager.GetObjectAssetPath
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 ID                             (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UCreativeInstanceManager::GetObjectAssetPath(const struct FString& ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.GetObjectAssetPath");

	UCreativeInstanceManager_GetObjectAssetPath_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeInstanceManager.GetModBinInstanceCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UCreativeInstanceManager::GetModBinInstanceCount()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.GetModBinInstanceCount");

	UCreativeInstanceManager_GetModBinInstanceCount_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeInstanceManager.GetModBinaryDataFromReplay
// (Final, Native, Private, HasOutParms)
// Parameters:
// TArray<unsigned char>          InBinaryData                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeInstanceManager::GetModBinaryDataFromReplay(TArray<unsigned char> InBinaryData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.GetModBinaryDataFromReplay");

	UCreativeInstanceManager_GetModBinaryDataFromReplay_Params params;
	params.InBinaryData = InBinaryData;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeInstanceManager.GetInstanceIsDestructible
// (Final, Native, Public)
// Parameters:
// struct FString                 ID                             (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeInstanceManager::GetInstanceIsDestructible(const struct FString& ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.GetInstanceIsDestructible");

	UCreativeInstanceManager_GetInstanceIsDestructible_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeInstanceManager.GetInstanceIsCustomUI
// (Final, Native, Public)
// Parameters:
// struct FString                 ID                             (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeInstanceManager::GetInstanceIsCustomUI(const struct FString& ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.GetInstanceIsCustomUI");

	UCreativeInstanceManager_GetInstanceIsCustomUI_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeInstanceManager.GetInstanceDataTreeCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UCreativeInstanceManager::GetInstanceDataTreeCount()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.GetInstanceDataTreeCount");

	UCreativeInstanceManager_GetInstanceDataTreeCount_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeInstanceManager.GetInstanceDataContents
// (Final, Native, Public, HasOutParms)
// Parameters:
// TArray<uint32_t>               InstanceIDs                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FCreativeInstanceRespondPullDataSegment> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FCreativeInstanceRespondPullDataSegment> UCreativeInstanceManager::GetInstanceDataContents(TArray<uint32_t> InstanceIDs)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.GetInstanceDataContents");

	UCreativeInstanceManager_GetInstanceDataContents_Params params;
	params.InstanceIDs = InstanceIDs;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeInstanceManager.GetInstanceDataContent
// (Final, Native, Public)
// Parameters:
// struct FString                 InstanceID                     (Parm, ZeroConstructor)
// TArray<unsigned char>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<unsigned char> UCreativeInstanceManager::GetInstanceDataContent(const struct FString& InstanceID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.GetInstanceDataContent");

	UCreativeInstanceManager_GetInstanceDataContent_Params params;
	params.InstanceID = InstanceID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeInstanceManager.GetInstanceContainerCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UCreativeInstanceManager::GetInstanceContainerCount()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.GetInstanceContainerCount");

	UCreativeInstanceManager_GetInstanceContainerCount_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeInstanceManager.GetInstanceContainerContent
// (Final, Native, Public, HasOutParms)
// Parameters:
// uint32_t                       BaseSeq                        (Parm, ZeroConstructor, IsPlainOldData)
// uint32_t                       OutSeq                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TArray<unsigned char>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<unsigned char> UCreativeInstanceManager::GetInstanceContainerContent(uint32_t BaseSeq, uint32_t* OutSeq)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.GetInstanceContainerContent");

	UCreativeInstanceManager_GetInstanceContainerContent_Params params;
	params.BaseSeq = BaseSeq;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutSeq != nullptr)
		*OutSeq = params.OutSeq;

	return params.ReturnValue;
}


// Function Creative.CreativeInstanceManager.GetInstanceBox
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString                 ID                             (Parm, ZeroConstructor)
// struct FBox                    ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FBox UCreativeInstanceManager::GetInstanceBox(const struct FString& ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.GetInstanceBox");

	UCreativeInstanceManager_GetInstanceBox_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeInstanceManager.GetCppInstanceNode
// (Final, Native, Public)
// Parameters:
// struct FString                 ID                             (Parm, ZeroConstructor)
// struct FCreativeInstanceNode   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FCreativeInstanceNode UCreativeInstanceManager::GetCppInstanceNode(const struct FString& ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.GetCppInstanceNode");

	UCreativeInstanceManager_GetCppInstanceNode_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeInstanceManager.GetAssetBox
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString                 ID                             (Parm, ZeroConstructor)
// struct FBox                    ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FBox UCreativeInstanceManager::GetAssetBox(const struct FString& ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.GetAssetBox");

	UCreativeInstanceManager_GetAssetBox_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeInstanceManager.Get
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContext                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UCreativeInstanceManager* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCreativeInstanceManager* UCreativeInstanceManager::Get(class UObject* WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.Get");

	UCreativeInstanceManager_Get_Params params;
	params.WorldContext = WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeInstanceManager.GenerateDestructionUniqueID
// (Final, Native, Public)
// Parameters:
// uint32_t                       ID                             (Parm, ZeroConstructor, IsPlainOldData)
// uint32_t                       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

uint32_t UCreativeInstanceManager::GenerateDestructionUniqueID(uint32_t ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.GenerateDestructionUniqueID");

	UCreativeInstanceManager_GenerateDestructionUniqueID_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeInstanceManager.DestroyInstance
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 InstanceID                     (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UCreativeInstanceManager::DestroyInstance(const struct FString& InstanceID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.DestroyInstance");

	UCreativeInstanceManager_DestroyInstance_Params params;
	params.InstanceID = InstanceID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeInstanceManager.ClientPreAddInstance
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 ID                             (Parm, ZeroConstructor)
// TArray<unsigned char>          Content                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UCreativeInstanceManager::ClientPreAddInstance(const struct FString& ID, TArray<unsigned char> Content)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.ClientPreAddInstance");

	UCreativeInstanceManager_ClientPreAddInstance_Params params;
	params.ID = ID;
	params.Content = Content;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeInstanceManager.ClearInstanceTree
// (Final, Native, Public, BlueprintCallable)

void UCreativeInstanceManager::ClearInstanceTree()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.ClearInstanceTree");

	UCreativeInstanceManager_ClearInstanceTree_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeInstanceManager.CheckAndReqRPCReplicatedInstanceContainerContent
// (Final, Native, Protected)

void UCreativeInstanceManager::CheckAndReqRPCReplicatedInstanceContainerContent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.CheckAndReqRPCReplicatedInstanceContainerContent");

	UCreativeInstanceManager_CheckAndReqRPCReplicatedInstanceContainerContent_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeInstanceManager.ChangeInstance
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 ID                             (Parm, ZeroConstructor)
// TArray<unsigned char>          Content                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           bCallReceiveChange             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UCreativeInstanceManager::ChangeInstance(const struct FString& ID, TArray<unsigned char> Content, bool bCallReceiveChange)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.ChangeInstance");

	UCreativeInstanceManager_ChangeInstance_Params params;
	params.ID = ID;
	params.Content = Content;
	params.bCallReceiveChange = bCallReceiveChange;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeInstanceManager.ChangeCppInstanceNode
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FString                 ID                             (Parm, ZeroConstructor)
// struct FString                 Key                            (Parm, ZeroConstructor)
// struct FCreativeInstanceNode   Node                           (Parm, OutParm)

void UCreativeInstanceManager::ChangeCppInstanceNode(const struct FString& ID, const struct FString& Key, struct FCreativeInstanceNode* Node)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.ChangeCppInstanceNode");

	UCreativeInstanceManager_ChangeCppInstanceNode_Params params;
	params.ID = ID;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Node != nullptr)
		*Node = params.Node;
}


// Function Creative.CreativeInstanceManager.AddInstance
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 ID                             (Parm, ZeroConstructor)
// TArray<unsigned char>          Content                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UCreativeInstanceManager::AddInstance(const struct FString& ID, TArray<unsigned char> Content)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.AddInstance");

	UCreativeInstanceManager_AddInstance_Params params;
	params.ID = ID;
	params.Content = Content;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeInstanceManager.AddCppInstanceNode
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FString                 ID                             (Parm, ZeroConstructor)
// struct FCreativeInstanceNode   Node                           (Parm, OutParm)

void UCreativeInstanceManager::AddCppInstanceNode(const struct FString& ID, struct FCreativeInstanceNode* Node)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.AddCppInstanceNode");

	UCreativeInstanceManager_AddCppInstanceNode_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Node != nullptr)
		*Node = params.Node;
}


// Function Creative.CreativeInstanceManager.AddBuildingFlag
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ID                             (Parm, ZeroConstructor)

void UCreativeInstanceManager::AddBuildingFlag(const struct FString& ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceManager.AddBuildingFlag");

	UCreativeInstanceManager_AddBuildingFlag_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeInstanceStaticMeshComponent.UpdateAllInstanceByRelativeLocation
// (Final, Native, Public, HasDefaults)
// Parameters:
// TArray<struct FVector>         RelativeLocations              (Parm, ZeroConstructor)
// struct FVector                 Scale                          (Parm, IsPlainOldData)

void UCreativeInstanceStaticMeshComponent::UpdateAllInstanceByRelativeLocation(TArray<struct FVector> RelativeLocations, const struct FVector& Scale)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceStaticMeshComponent.UpdateAllInstanceByRelativeLocation");

	UCreativeInstanceStaticMeshComponent_UpdateAllInstanceByRelativeLocation_Params params;
	params.RelativeLocations = RelativeLocations;
	params.Scale = Scale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeInstanceStaticMeshComponent.UnInitInstancedStaticMeshComponntByGroupBuild
// (Final, Native, Public)

void UCreativeInstanceStaticMeshComponent::UnInitInstancedStaticMeshComponntByGroupBuild()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceStaticMeshComponent.UnInitInstancedStaticMeshComponntByGroupBuild");

	UCreativeInstanceStaticMeshComponent_UnInitInstancedStaticMeshComponntByGroupBuild_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeInstanceStaticMeshComponent.SetISMMaterial
// (Final, Native, Public)
// Parameters:
// class UMaterialInterface*      NewMaterial                    (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeInstanceStaticMeshComponent::SetISMMaterial(class UMaterialInterface* NewMaterial)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceStaticMeshComponent.SetISMMaterial");

	UCreativeInstanceStaticMeshComponent_SetISMMaterial_Params params;
	params.NewMaterial = NewMaterial;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeInstanceStaticMeshComponent.OnStaticMeshAsyncLoaded
// (Final, Native, Protected, HasDefaults)
// Parameters:
// struct FSoftObjectPath         SoftObjectPath                 (Parm)

void UCreativeInstanceStaticMeshComponent::OnStaticMeshAsyncLoaded(const struct FSoftObjectPath& SoftObjectPath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceStaticMeshComponent.OnStaticMeshAsyncLoaded");

	UCreativeInstanceStaticMeshComponent_OnStaticMeshAsyncLoaded_Params params;
	params.SoftObjectPath = SoftObjectPath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeInstanceStaticMeshComponent.OnReturnToPool
// (Native, Public)
// Parameters:
// class UObject*                 NewOuter                       (Parm, ZeroConstructor, IsPlainOldData)
// uint32_t                       RecycledSeq                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeInstanceStaticMeshComponent::OnReturnToPool(class UObject* NewOuter, uint32_t RecycledSeq)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceStaticMeshComponent.OnReturnToPool");

	UCreativeInstanceStaticMeshComponent_OnReturnToPool_Params params;
	params.NewOuter = NewOuter;
	params.RecycledSeq = RecycledSeq;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeInstanceStaticMeshComponent.OnPickFromPool
// (Native, Public)
// Parameters:
// class UObject*                 NewOuter                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 InName                         (Parm, ZeroConstructor)

void UCreativeInstanceStaticMeshComponent::OnPickFromPool(class UObject* NewOuter, const struct FString& InName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceStaticMeshComponent.OnPickFromPool");

	UCreativeInstanceStaticMeshComponent_OnPickFromPool_Params params;
	params.NewOuter = NewOuter;
	params.InName = InName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeInstanceStaticMeshComponent.InitInstancedStaticMeshComponntByGroupBuild
// (Final, Native, Public, HasOutParms)
// Parameters:
// class USceneComponent*         Parent                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TArray<struct FTransform>      InstanceTransforms             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FString                 MeshPath                       (Parm, ZeroConstructor)
// class UMaterialInterface*      Material                       (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeInstanceStaticMeshComponent::InitInstancedStaticMeshComponntByGroupBuild(class USceneComponent* Parent, TArray<struct FTransform> InstanceTransforms, const struct FString& MeshPath, class UMaterialInterface* Material)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeInstanceStaticMeshComponent.InitInstancedStaticMeshComponntByGroupBuild");

	UCreativeInstanceStaticMeshComponent_InitInstancedStaticMeshComponntByGroupBuild_Params params;
	params.Parent = Parent;
	params.InstanceTransforms = InstanceTransforms;
	params.MeshPath = MeshPath;
	params.Material = Material;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeIntegralMechanismComponent.SetPlayerIntegral
// (Final, Native, Protected)
// Parameters:
// struct FString                 UID                            (Parm, ZeroConstructor)
// int                            TeamID                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            curIntegral                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            curStageIntegral               (Parm, ZeroConstructor, IsPlainOldData)
// int                            integralAddSeq                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeModeIntegralMechanismComponent::SetPlayerIntegral(const struct FString& UID, int TeamID, int curIntegral, int curStageIntegral, int integralAddSeq)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeIntegralMechanismComponent.SetPlayerIntegral");

	UCreativeModeIntegralMechanismComponent_SetPlayerIntegral_Params params;
	params.UID = UID;
	params.TeamID = TeamID;
	params.curIntegral = curIntegral;
	params.curStageIntegral = curStageIntegral;
	params.integralAddSeq = integralAddSeq;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeIntegralMechanismComponent.OnRepPlayerIntegralsOverride
// (Event, Protected, BlueprintEvent)

void UCreativeModeIntegralMechanismComponent::OnRepPlayerIntegralsOverride()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeIntegralMechanismComponent.OnRepPlayerIntegralsOverride");

	UCreativeModeIntegralMechanismComponent_OnRepPlayerIntegralsOverride_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeIntegralMechanismComponent.OnRep_PlayerIntegrals
// (Final, Native, Protected)

void UCreativeModeIntegralMechanismComponent::OnRep_PlayerIntegrals()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeIntegralMechanismComponent.OnRep_PlayerIntegrals");

	UCreativeModeIntegralMechanismComponent_OnRep_PlayerIntegrals_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeIntegralMechanismComponent.ClearPlayerIntegrals
// (Final, Native, Protected)

void UCreativeModeIntegralMechanismComponent::ClearPlayerIntegrals()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeIntegralMechanismComponent.ClearPlayerIntegrals");

	UCreativeModeIntegralMechanismComponent_ClearPlayerIntegrals_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeIntegralMechanismLiteComponent.SetPlayerIntegral
// (Final, Native, Protected)
// Parameters:
// struct FString                 UID                            (Parm, ZeroConstructor)
// int                            TeamID                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            curIntegral                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            curStageIntegral               (Parm, ZeroConstructor, IsPlainOldData)
// int                            integralAddSeq                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeModeIntegralMechanismLiteComponent::SetPlayerIntegral(const struct FString& UID, int TeamID, int curIntegral, int curStageIntegral, int integralAddSeq)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeIntegralMechanismLiteComponent.SetPlayerIntegral");

	UCreativeModeIntegralMechanismLiteComponent_SetPlayerIntegral_Params params;
	params.UID = UID;
	params.TeamID = TeamID;
	params.curIntegral = curIntegral;
	params.curStageIntegral = curStageIntegral;
	params.integralAddSeq = integralAddSeq;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeIntegralMechanismLiteComponent.PlayerIntegralContains
// (Final, Native, Protected)
// Parameters:
// struct FString                 UID                            (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeModeIntegralMechanismLiteComponent::PlayerIntegralContains(const struct FString& UID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeIntegralMechanismLiteComponent.PlayerIntegralContains");

	UCreativeModeIntegralMechanismLiteComponent_PlayerIntegralContains_Params params;
	params.UID = UID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeIntegralMechanismLiteComponent.OnRepPlayerIntegralsOverride
// (Event, Protected, BlueprintEvent)

void UCreativeModeIntegralMechanismLiteComponent::OnRepPlayerIntegralsOverride()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeIntegralMechanismLiteComponent.OnRepPlayerIntegralsOverride");

	UCreativeModeIntegralMechanismLiteComponent_OnRepPlayerIntegralsOverride_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeIntegralMechanismLiteComponent.OnRep_TestIndex
// (Final, Native, Protected)
// Parameters:
// int                            LastIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeModeIntegralMechanismLiteComponent::OnRep_TestIndex(int LastIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeIntegralMechanismLiteComponent.OnRep_TestIndex");

	UCreativeModeIntegralMechanismLiteComponent_OnRep_TestIndex_Params params;
	params.LastIndex = LastIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeIntegralMechanismLiteComponent.OnRep_PlayerIntegrals
// (Final, Native, Protected)

void UCreativeModeIntegralMechanismLiteComponent::OnRep_PlayerIntegrals()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeIntegralMechanismLiteComponent.OnRep_PlayerIntegrals");

	UCreativeModeIntegralMechanismLiteComponent_OnRep_PlayerIntegrals_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeIntegralMechanismLiteComponent.ClearPlayerIntegrals
// (Final, Native, Protected)

void UCreativeModeIntegralMechanismLiteComponent::ClearPlayerIntegrals()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeIntegralMechanismLiteComponent.ClearPlayerIntegrals");

	UCreativeModeIntegralMechanismLiteComponent_ClearPlayerIntegrals_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeItemGeneratorComponent.SetWeightMul
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TMap<struct FString, int>      Weight                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UCreativeItemGeneratorComponent::SetWeightMul(TMap<struct FString, int> Weight)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeItemGeneratorComponent.SetWeightMul");

	UCreativeItemGeneratorComponent_SetWeightMul_Params params;
	params.Weight = Weight;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeItemGeneratorComponent.SetAddSpotPercentMul
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          percent                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UCreativeItemGeneratorComponent::SetAddSpotPercentMul(float percent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeItemGeneratorComponent.SetAddSpotPercentMul");

	UCreativeItemGeneratorComponent_SetAddSpotPercentMul_Params params;
	params.percent = percent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeItemGeneratorComponent.ClearWeightMul
// (Final, Native, Public, BlueprintCallable)

void UCreativeItemGeneratorComponent::ClearWeightMul()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeItemGeneratorComponent.ClearWeightMul");

	UCreativeItemGeneratorComponent_ClearWeightMul_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeLoadManager.UnloadSomeObjects
// (Final, Native, Public)
// Parameters:
// TArray<struct FString>         InstanceIDs                    (Parm, ZeroConstructor)
// bool                           bRemovePhysicsObject           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UCreativeLoadManager::UnloadSomeObjects(TArray<struct FString> InstanceIDs, bool bRemovePhysicsObject)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLoadManager.UnloadSomeObjects");

	UCreativeLoadManager_UnloadSomeObjects_Params params;
	params.InstanceIDs = InstanceIDs;
	params.bRemovePhysicsObject = bRemovePhysicsObject;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeLoadManager.UnloadObject
// (Final, Native, Public)
// Parameters:
// struct FString                 InstanceID                     (Parm, ZeroConstructor)
// bool                           bRemovePhysicsObject           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UCreativeLoadManager::UnloadObject(const struct FString& InstanceID, bool bRemovePhysicsObject)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLoadManager.UnloadObject");

	UCreativeLoadManager_UnloadObject_Params params;
	params.InstanceID = InstanceID;
	params.bRemovePhysicsObject = bRemovePhysicsObject;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeLoadManager.LoadSomeObjects
// (Final, Native, Public)
// Parameters:
// TArray<struct FString>         InstanceIDs                    (Parm, ZeroConstructor)
// bool                           bLoadImmediately               (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeLoadManager::LoadSomeObjects(TArray<struct FString> InstanceIDs, bool bLoadImmediately)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLoadManager.LoadSomeObjects");

	UCreativeLoadManager_LoadSomeObjects_Params params;
	params.InstanceIDs = InstanceIDs;
	params.bLoadImmediately = bLoadImmediately;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeLoadManager.LoadObject
// (Final, Native, Public)
// Parameters:
// struct FString                 InstanceID                     (Parm, ZeroConstructor)

void UCreativeLoadManager::LoadObject(const struct FString& InstanceID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLoadManager.LoadObject");

	UCreativeLoadManager_LoadObject_Params params;
	params.InstanceID = InstanceID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeLoadManager.Get
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContext                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UCreativeLoadManager*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCreativeLoadManager* UCreativeLoadManager::Get(class UObject* WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLoadManager.Get");

	UCreativeLoadManager_Get_Params params;
	params.WorldContext = WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeLoadManager.AddObject
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FString                 InstanceID                     (Parm, ZeroConstructor)
// struct FCreativeInstanceNode   InstanceNode                   (ConstParm, Parm, OutParm, ReferenceParm)

void UCreativeLoadManager::AddObject(const struct FString& InstanceID, const struct FCreativeInstanceNode& InstanceNode)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLoadManager.AddObject");

	UCreativeLoadManager_AddObject_Params params;
	params.InstanceID = InstanceID;
	params.InstanceNode = InstanceNode;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeLuaCodeManager.ReceiveOnGameStateBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AGameStateBase*          GameState                      (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeLuaCodeManager::ReceiveOnGameStateBeginPlay(class AGameStateBase* GameState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaCodeManager.ReceiveOnGameStateBeginPlay");

	UCreativeLuaCodeManager_ReceiveOnGameStateBeginPlay_Params params;
	params.GameState = GameState;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeLuaCodeManager.OnPreCreativeLuaVMUnLoad
// (Final, Native, Protected)

void UCreativeLuaCodeManager::OnPreCreativeLuaVMUnLoad()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaCodeManager.OnPreCreativeLuaVMUnLoad");

	UCreativeLuaCodeManager_OnPreCreativeLuaVMUnLoad_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeLuaCodeManager.OnGameStateBeginPlay
// (Final, Native, Protected)
// Parameters:
// class AGameStateBase*          GameState                      (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeLuaCodeManager::OnGameStateBeginPlay(class AGameStateBase* GameState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaCodeManager.OnGameStateBeginPlay");

	UCreativeLuaCodeManager_OnGameStateBeginPlay_Params params;
	params.GameState = GameState;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeLuaCodeManager.OnCreativeLuaInitialized
// (Final, Native, Protected)

void UCreativeLuaCodeManager::OnCreativeLuaInitialized()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaCodeManager.OnCreativeLuaInitialized");

	UCreativeLuaCodeManager_OnCreativeLuaInitialized_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeLuaCodeManager.Get
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContext                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UCreativeLuaCodeManager* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCreativeLuaCodeManager* UCreativeLuaCodeManager::Get(class UObject* WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaCodeManager.Get");

	UCreativeLuaCodeManager_Get_Params params;
	params.WorldContext = WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeLuaEntityManager.UUID2UObject
// (Native, Public, HasOutParms)
// Parameters:
// int64_t                        UUID                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UCreativeLuaEntityManager::UUID2UObject(int64_t* UUID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaEntityManager.UUID2UObject");

	UCreativeLuaEntityManager_UUID2UObject_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (UUID != nullptr)
		*UUID = params.UUID;

	return params.ReturnValue;
}


// Function Creative.CreativeLuaEntityManager.UUID2Type
// (Native, Public, HasOutParms)
// Parameters:
// int64_t                        UUID                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// EEntityType                    Type                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// unsigned char                  SubType                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeLuaEntityManager::UUID2Type(int64_t* UUID, EEntityType* Type, unsigned char* SubType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaEntityManager.UUID2Type");

	UCreativeLuaEntityManager_UUID2Type_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (UUID != nullptr)
		*UUID = params.UUID;
	if (Type != nullptr)
		*Type = params.Type;
	if (SubType != nullptr)
		*SubType = params.SubType;

	return params.ReturnValue;
}


// Function Creative.CreativeLuaEntityManager.UUID2Key
// (Native, Public, HasOutParms)
// Parameters:
// int64_t                        UUID                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// uint32_t                       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

uint32_t UCreativeLuaEntityManager::UUID2Key(int64_t* UUID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaEntityManager.UUID2Key");

	UCreativeLuaEntityManager_UUID2Key_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (UUID != nullptr)
		*UUID = params.UUID;

	return params.ReturnValue;
}


// Function Creative.CreativeLuaEntityManager.ResetAll
// (Final, Native, Public, BlueprintCallable)

void UCreativeLuaEntityManager::ResetAll()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaEntityManager.ResetAll");

	UCreativeLuaEntityManager_ResetAll_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeLuaEntityManager.RemoveUUID
// (Native, Public, HasOutParms)
// Parameters:
// int64_t                        UUID                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCreativeLuaEntityManager::RemoveUUID(int64_t* UUID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaEntityManager.RemoveUUID");

	UCreativeLuaEntityManager_RemoveUUID_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (UUID != nullptr)
		*UUID = params.UUID;
}


// Function Creative.CreativeLuaEntityManager.LuaUUID2UObject
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FString                 UUID                           (Parm, OutParm, ZeroConstructor)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UCreativeLuaEntityManager::LuaUUID2UObject(struct FString* UUID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaEntityManager.LuaUUID2UObject");

	UCreativeLuaEntityManager_LuaUUID2UObject_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (UUID != nullptr)
		*UUID = params.UUID;

	return params.ReturnValue;
}


// Function Creative.CreativeLuaEntityManager.LuaUUID2Type
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 UUID                           (Parm, OutParm, ZeroConstructor)
// EEntityType                    Type                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// unsigned char                  SubType                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeLuaEntityManager::LuaUUID2Type(struct FString* UUID, EEntityType* Type, unsigned char* SubType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaEntityManager.LuaUUID2Type");

	UCreativeLuaEntityManager_LuaUUID2Type_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (UUID != nullptr)
		*UUID = params.UUID;
	if (Type != nullptr)
		*Type = params.Type;
	if (SubType != nullptr)
		*SubType = params.SubType;

	return params.ReturnValue;
}


// Function Creative.CreativeLuaEntityManager.LuaUUID2Key
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 UUID                           (Parm, OutParm, ZeroConstructor)
// EEntityType                    Type                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// unsigned char                  SubType                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UCreativeLuaEntityManager::LuaUUID2Key(struct FString* UUID, EEntityType* Type, unsigned char* SubType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaEntityManager.LuaUUID2Key");

	UCreativeLuaEntityManager_LuaUUID2Key_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (UUID != nullptr)
		*UUID = params.UUID;
	if (Type != nullptr)
		*Type = params.Type;
	if (SubType != nullptr)
		*SubType = params.SubType;

	return params.ReturnValue;
}


// Function Creative.CreativeLuaEntityManager.LuaRemoveUUID
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 UUID                           (Parm, OutParm, ZeroConstructor)

void UCreativeLuaEntityManager::LuaRemoveUUID(struct FString* UUID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaEntityManager.LuaRemoveUUID");

	UCreativeLuaEntityManager_LuaRemoveUUID_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (UUID != nullptr)
		*UUID = params.UUID;
}


// Function Creative.CreativeLuaEntityManager.LuaCreateEntityIfNotExistsFromUObject
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 Object                         (Parm, ZeroConstructor, IsPlainOldData)
// EEntityType                    Type                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// unsigned char                  SubType                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UCreativeLuaEntityManager::LuaCreateEntityIfNotExistsFromUObject(class UObject* Object, EEntityType* Type, unsigned char* SubType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaEntityManager.LuaCreateEntityIfNotExistsFromUObject");

	UCreativeLuaEntityManager_LuaCreateEntityIfNotExistsFromUObject_Params params;
	params.Object = Object;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Type != nullptr)
		*Type = params.Type;
	if (SubType != nullptr)
		*SubType = params.SubType;

	return params.ReturnValue;
}


// Function Creative.CreativeLuaEntityManager.GetInstanceObjectUUID
// (Native, Public, HasOutParms)
// Parameters:
// int64_t                        UUID                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int64_t                        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int64_t UCreativeLuaEntityManager::GetInstanceObjectUUID(int64_t* UUID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaEntityManager.GetInstanceObjectUUID");

	UCreativeLuaEntityManager_GetInstanceObjectUUID_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (UUID != nullptr)
		*UUID = params.UUID;

	return params.ReturnValue;
}


// Function Creative.CreativeLuaEntityManager.Get
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContext                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UCreativeLuaEntityManager* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCreativeLuaEntityManager* UCreativeLuaEntityManager::Get(class UObject* WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaEntityManager.Get");

	UCreativeLuaEntityManager_Get_Params params;
	params.WorldContext = WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeLuaEntityManager.GenUUID
// (Final, Native, Protected, HasOutParms)
// Parameters:
// struct FString                 Key                            (Parm, OutParm, ZeroConstructor)
// EEntityType                    Type                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// unsigned char                  SubType                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int64_t                        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int64_t UCreativeLuaEntityManager::GenUUID(struct FString* Key, EEntityType* Type, unsigned char* SubType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaEntityManager.GenUUID");

	UCreativeLuaEntityManager_GenUUID_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Key != nullptr)
		*Key = params.Key;
	if (Type != nullptr)
		*Type = params.Type;
	if (SubType != nullptr)
		*SubType = params.SubType;

	return params.ReturnValue;
}


// Function Creative.CreativeLuaEntityManager.CreateEntityIfNotExistsFromUObject
// (Native, Public, HasOutParms)
// Parameters:
// class UObject*                 Object                         (Parm, ZeroConstructor, IsPlainOldData)
// EEntityType                    Type                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// unsigned char                  SubType                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int64_t                        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int64_t UCreativeLuaEntityManager::CreateEntityIfNotExistsFromUObject(class UObject* Object, EEntityType* Type, unsigned char* SubType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaEntityManager.CreateEntityIfNotExistsFromUObject");

	UCreativeLuaEntityManager_CreateEntityIfNotExistsFromUObject_Params params;
	params.Object = Object;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Type != nullptr)
		*Type = params.Type;
	if (SubType != nullptr)
		*SubType = params.SubType;

	return params.ReturnValue;
}


// Function Creative.CreativeLuaEntityManager.CreateEntityIfNotExistsFromKey
// (Native, Public, HasOutParms)
// Parameters:
// uint32_t                       Key                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// EEntityType                    Type                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// unsigned char                  SubType                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int64_t                        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int64_t UCreativeLuaEntityManager::CreateEntityIfNotExistsFromKey(uint32_t* Key, EEntityType* Type, unsigned char* SubType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaEntityManager.CreateEntityIfNotExistsFromKey");

	UCreativeLuaEntityManager_CreateEntityIfNotExistsFromKey_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Key != nullptr)
		*Key = params.Key;
	if (Type != nullptr)
		*Type = params.Type;
	if (SubType != nullptr)
		*SubType = params.SubType;

	return params.ReturnValue;
}


// Function Creative.CreativeLuaSignalManager.SpawnApiObjectsByConfig
// (Final, Native, Public)

void UCreativeLuaSignalManager::SpawnApiObjectsByConfig()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaSignalManager.SpawnApiObjectsByConfig");

	UCreativeLuaSignalManager_SpawnApiObjectsByConfig_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeLuaSignalManager.RegisterObject
// (Native, Public, BlueprintCallable)
// Parameters:
// class UCreativeApiObject*      NewObject                      (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeLuaSignalManager::RegisterObject(class UCreativeApiObject* NewObject)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaSignalManager.RegisterObject");

	UCreativeLuaSignalManager_RegisterObject_Params params;
	params.NewObject = NewObject;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeLuaSignalManager.OnPreCreativeLuaVMUnLoad
// (Final, Native, Protected)

void UCreativeLuaSignalManager::OnPreCreativeLuaVMUnLoad()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaSignalManager.OnPreCreativeLuaVMUnLoad");

	UCreativeLuaSignalManager_OnPreCreativeLuaVMUnLoad_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeLuaSignalManager.OnCreativeLuaVMLoaded
// (Final, Native, Protected)

void UCreativeLuaSignalManager::OnCreativeLuaVMLoaded()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaSignalManager.OnCreativeLuaVMLoaded");

	UCreativeLuaSignalManager_OnCreativeLuaVMLoaded_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeLuaSignalManager.GetObject
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 ModuleName                     (Parm, ZeroConstructor)
// class UCreativeApiObject*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCreativeApiObject* UCreativeLuaSignalManager::GetObject(const struct FString& ModuleName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaSignalManager.GetObject");

	UCreativeLuaSignalManager_GetObject_Params params;
	params.ModuleName = ModuleName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeLuaSignalManager.GetCreativeLuaVM
// (Final, Native, Protected)
// Parameters:
// class UCreativeBridgeLuaVM*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCreativeBridgeLuaVM* UCreativeLuaSignalManager::GetCreativeLuaVM()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaSignalManager.GetCreativeLuaVM");

	UCreativeLuaSignalManager_GetCreativeLuaVM_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeLuaSignalManager.Get
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContext                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UCreativeLuaSignalManager* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCreativeLuaSignalManager* UCreativeLuaSignalManager::Get(class UObject* WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaSignalManager.Get");

	UCreativeLuaSignalManager_Get_Params params;
	params.WorldContext = WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeLuaSignalManager.ExecuteAPI
// (Final, Native, Public, HasOutParms)
// Parameters:
// class UCreativeBridgeLuaVM*    VM                             (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ModuleName                     (Parm, OutParm, ZeroConstructor)
// struct FString                 FuncName                       (Parm, OutParm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UCreativeLuaSignalManager::ExecuteAPI(class UCreativeBridgeLuaVM* VM, struct FString* ModuleName, struct FString* FuncName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaSignalManager.ExecuteAPI");

	UCreativeLuaSignalManager_ExecuteAPI_Params params;
	params.VM = VM;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (ModuleName != nullptr)
		*ModuleName = params.ModuleName;
	if (FuncName != nullptr)
		*FuncName = params.FuncName;

	return params.ReturnValue;
}


// Function Creative.CreativeLuaSignalManager.ClearAllObjects
// (Final, Native, Public)

void UCreativeLuaSignalManager::ClearAllObjects()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaSignalManager.ClearAllObjects");

	UCreativeLuaSignalManager_ClearAllObjects_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeLuaTraitManager.GetSupportEntitiesByTraits
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// TArray<struct FString>         TraitNames                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FString>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FString> UCreativeLuaTraitManager::GetSupportEntitiesByTraits(TArray<struct FString> TraitNames)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaTraitManager.GetSupportEntitiesByTraits");

	UCreativeLuaTraitManager_GetSupportEntitiesByTraits_Params params;
	params.TraitNames = TraitNames;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeLuaTraitManager.GetSupportEntitiesByTrait
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 TraitName                      (Parm, ZeroConstructor)
// TArray<struct FString>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FString> UCreativeLuaTraitManager::GetSupportEntitiesByTrait(const struct FString& TraitName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaTraitManager.GetSupportEntitiesByTrait");

	UCreativeLuaTraitManager_GetSupportEntitiesByTrait_Params params;
	params.TraitName = TraitName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeLuaTraitManager.Get
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContext                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UCreativeLuaTraitManager* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCreativeLuaTraitManager* UCreativeLuaTraitManager::Get(class UObject* WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaTraitManager.Get");

	UCreativeLuaTraitManager_Get_Params params;
	params.WorldContext = WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeLuaVMManager.UnRegisterGameTypePreChangedDelegate
// (Final, Native, Public)

void UCreativeLuaVMManager::UnRegisterGameTypePreChangedDelegate()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaVMManager.UnRegisterGameTypePreChangedDelegate");

	UCreativeLuaVMManager_UnRegisterGameTypePreChangedDelegate_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeLuaVMManager.RegisterGameTypePreChangedDelegate
// (Final, Native, Public)

void UCreativeLuaVMManager::RegisterGameTypePreChangedDelegate()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaVMManager.RegisterGameTypePreChangedDelegate");

	UCreativeLuaVMManager_RegisterGameTypePreChangedDelegate_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeLuaVMManager.ReceiveOnGameStateBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// class AGameStateBase*          GameState                      (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeLuaVMManager::ReceiveOnGameStateBeginPlay(class AGameStateBase* GameState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaVMManager.ReceiveOnGameStateBeginPlay");

	UCreativeLuaVMManager_ReceiveOnGameStateBeginPlay_Params params;
	params.GameState = GameState;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeLuaVMManager.ReceiveCheckAndLoadLuaVM
// (Event, Public, BlueprintEvent)

void UCreativeLuaVMManager::ReceiveCheckAndLoadLuaVM()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaVMManager.ReceiveCheckAndLoadLuaVM");

	UCreativeLuaVMManager_ReceiveCheckAndLoadLuaVM_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeLuaVMManager.OnLuaVMAtPanic
// (Final, Native, Public)
// Parameters:
// struct FString                 ErrMsg                         (Parm, ZeroConstructor)

void UCreativeLuaVMManager::OnLuaVMAtPanic(const struct FString& ErrMsg)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaVMManager.OnLuaVMAtPanic");

	UCreativeLuaVMManager_OnLuaVMAtPanic_Params params;
	params.ErrMsg = ErrMsg;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeLuaVMManager.OnGameTypePreChanged
// (Final, Native, Protected)
// Parameters:
// unsigned char                  LastGameType                   (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  CurrentGameType                (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeLuaVMManager::OnGameTypePreChanged(unsigned char LastGameType, unsigned char CurrentGameType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaVMManager.OnGameTypePreChanged");

	UCreativeLuaVMManager_OnGameTypePreChanged_Params params;
	params.LastGameType = LastGameType;
	params.CurrentGameType = CurrentGameType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeLuaVMManager.OnGameStateBeginPlay
// (Final, Native, Public)
// Parameters:
// class AGameStateBase*          GameState                      (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeLuaVMManager::OnGameStateBeginPlay(class AGameStateBase* GameState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaVMManager.OnGameStateBeginPlay");

	UCreativeLuaVMManager_OnGameStateBeginPlay_Params params;
	params.GameState = GameState;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeLuaVMManager.LoadLuaVM
// (Final, Native, Public)

void UCreativeLuaVMManager::LoadLuaVM()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaVMManager.LoadLuaVM");

	UCreativeLuaVMManager_LoadLuaVM_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeLuaVMManager.GetCreativeLuaVM
// (Final, Native, Public)
// Parameters:
// class UCreativeBridgeLuaVM*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCreativeBridgeLuaVM* UCreativeLuaVMManager::GetCreativeLuaVM()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaVMManager.GetCreativeLuaVM");

	UCreativeLuaVMManager_GetCreativeLuaVM_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeLuaVMManager.Get
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContext                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UCreativeLuaVMManager*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCreativeLuaVMManager* UCreativeLuaVMManager::Get(class UObject* WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaVMManager.Get");

	UCreativeLuaVMManager_Get_Params params;
	params.WorldContext = WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeLuaVMManager.CreativeLuaVMLoaded
// (Final, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeLuaVMManager::CreativeLuaVMLoaded()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaVMManager.CreativeLuaVMLoaded");

	UCreativeLuaVMManager_CreativeLuaVMLoaded_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeLuaVMManager.CreativeLuaInitialized
// (Final, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeLuaVMManager::CreativeLuaInitialized()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeLuaVMManager.CreativeLuaInitialized");

	UCreativeLuaVMManager_CreativeLuaInitialized_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeModDataCheckManager.ReceiveOnPreAddInstance
// (Event, Public, BlueprintEvent)

void UCreativeModeModDataCheckManager::ReceiveOnPreAddInstance()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeModDataCheckManager.ReceiveOnPreAddInstance");

	UCreativeModeModDataCheckManager_ReceiveOnPreAddInstance_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeModDataCheckManager.ReceiveOnPostAddInstance
// (Event, Public, BlueprintEvent)

void UCreativeModeModDataCheckManager::ReceiveOnPostAddInstance()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeModDataCheckManager.ReceiveOnPostAddInstance");

	UCreativeModeModDataCheckManager_ReceiveOnPostAddInstance_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeModDataCheckManager.OnPreAddInstance
// (Final, Native, Public)

void UCreativeModeModDataCheckManager::OnPreAddInstance()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeModDataCheckManager.OnPreAddInstance");

	UCreativeModeModDataCheckManager_OnPreAddInstance_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeModDataCheckManager.OnPostAddInstance
// (Final, Native, Public)

void UCreativeModeModDataCheckManager::OnPostAddInstance()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeModDataCheckManager.OnPostAddInstance");

	UCreativeModeModDataCheckManager_OnPostAddInstance_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeModDataCheckManager.Get
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContext                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UCreativeModeModDataCheckManager* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCreativeModeModDataCheckManager* UCreativeModeModDataCheckManager::Get(class UObject* WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeModDataCheckManager.Get");

	UCreativeModeModDataCheckManager_Get_Params params;
	params.WorldContext = WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeChatBubbleUI.TickLua
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UCreativeModeChatBubbleUI::TickLua()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeChatBubbleUI.TickLua");

	UCreativeModeChatBubbleUI_TickLua_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeChatBubbleUI.ForceUpdatePosition
// (Final, Native, Public, BlueprintCallable)

void UCreativeModeChatBubbleUI::ForceUpdatePosition()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeChatBubbleUI.ForceUpdatePosition");

	UCreativeModeChatBubbleUI_ForceUpdatePosition_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeGlobalManagerCenter.OnCreativeDelegateCreated
// (Final, Native, Protected)

void UCreativeModeGlobalManagerCenter::OnCreativeDelegateCreated()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeGlobalManagerCenter.OnCreativeDelegateCreated");

	UCreativeModeGlobalManagerCenter_OnCreativeDelegateCreated_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeStaticMeshBatchActor.SetISMStaticMeshAndMaterials
// (Event, Public, BlueprintEvent)
// Parameters:
// class UInstancedStaticMeshComponent* InstancedStaticMeshComponent   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            AssetId                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            StaticMeshIndex                (Parm, ZeroConstructor, IsPlainOldData)
// int                            MaterialID                     (Parm, ZeroConstructor, IsPlainOldData)

void ACreativeModeStaticMeshBatchActor::SetISMStaticMeshAndMaterials(class UInstancedStaticMeshComponent* InstancedStaticMeshComponent, int AssetId, int StaticMeshIndex, int MaterialID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeStaticMeshBatchActor.SetISMStaticMeshAndMaterials");

	ACreativeModeStaticMeshBatchActor_SetISMStaticMeshAndMaterials_Params params;
	params.InstancedStaticMeshComponent = InstancedStaticMeshComponent;
	params.AssetId = AssetId;
	params.StaticMeshIndex = StaticMeshIndex;
	params.MaterialID = MaterialID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeTouchWidget.OnHandleTouchStart
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGeometry               MyGeometry                     (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UCreativeModeTouchWidget::OnHandleTouchStart(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeTouchWidget.OnHandleTouchStart");

	UCreativeModeTouchWidget_OnHandleTouchStart_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeTouchWidget.OnHandleTouchMove
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGeometry               MyGeometry                     (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UCreativeModeTouchWidget::OnHandleTouchMove(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeTouchWidget.OnHandleTouchMove");

	UCreativeModeTouchWidget_OnHandleTouchMove_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeTouchWidget.OnHandleTouchEnd
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGeometry               MyGeometry                     (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UCreativeModeTouchWidget::OnHandleTouchEnd(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeTouchWidget.OnHandleTouchEnd");

	UCreativeModeTouchWidget_OnHandleTouchEnd_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeTouchWidget.OnHandleTouch
// (Native, Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Type                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            FingerIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               Pos                            (Parm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeModeTouchWidget::OnHandleTouch(int Type, int FingerIndex, const struct FVector2D& Pos)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeTouchWidget.OnHandleTouch");

	UCreativeModeTouchWidget_OnHandleTouch_Params params;
	params.Type = Type;
	params.FingerIndex = FingerIndex;
	params.Pos = Pos;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeNavigationManager.SetTimeSliceConfig
// (Final, Native, Public)
// Parameters:
// int                            MaxTaskPerSlice                (Parm, ZeroConstructor, IsPlainOldData)
// int                            SliceTimeLen                   (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeModeNavigationManager::SetTimeSliceConfig(int MaxTaskPerSlice, int SliceTimeLen)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeNavigationManager.SetTimeSliceConfig");

	UCreativeModeNavigationManager_SetTimeSliceConfig_Params params;
	params.MaxTaskPerSlice = MaxTaskPerSlice;
	params.SliceTimeLen = SliceTimeLen;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeNavigationManager.SetNavmeshBuildPolicy
// (Final, Native, Public)
// Parameters:
// int                            PolicyVal                      (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeModeNavigationManager::SetNavmeshBuildPolicy(int PolicyVal)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeNavigationManager.SetNavmeshBuildPolicy");

	UCreativeModeNavigationManager_SetNavmeshBuildPolicy_Params params;
	params.PolicyVal = PolicyVal;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeNavigationManager.SetDynamicModeEnable
// (Final, Native, Public)
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeModeNavigationManager::SetDynamicModeEnable(bool bEnable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeNavigationManager.SetDynamicModeEnable");

	UCreativeModeNavigationManager_SetDynamicModeEnable_Params params;
	params.bEnable = bEnable;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeNavigationManager.SetDebugOutputEnable
// (Final, Native, Public)
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeModeNavigationManager::SetDebugOutputEnable(bool bEnable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeNavigationManager.SetDebugOutputEnable");

	UCreativeModeNavigationManager_SetDebugOutputEnable_Params params;
	params.bEnable = bEnable;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeNavigationManager.SetConcurrentTaskNum
// (Final, Native, Public)
// Parameters:
// int                            Num                            (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeModeNavigationManager::SetConcurrentTaskNum(int Num)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeNavigationManager.SetConcurrentTaskNum");

	UCreativeModeNavigationManager_SetConcurrentTaskNum_Params params;
	params.Num = Num;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeNavigationManager.SerializeDynamicTileToByteArr
// (Final, Native, Public)
// Parameters:
// int                            MaxFileSize                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            MaxTileToAdd                   (Parm, ZeroConstructor, IsPlainOldData)
// TArray<unsigned char>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<unsigned char> UCreativeModeNavigationManager::SerializeDynamicTileToByteArr(int MaxFileSize, int MaxTileToAdd)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeNavigationManager.SerializeDynamicTileToByteArr");

	UCreativeModeNavigationManager_SerializeDynamicTileToByteArr_Params params;
	params.MaxFileSize = MaxFileSize;
	params.MaxTileToAdd = MaxTileToAdd;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeNavigationManager.RevokePendingBuildingTasks
// (Final, Native, Public)

void UCreativeModeNavigationManager::RevokePendingBuildingTasks()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeNavigationManager.RevokePendingBuildingTasks");

	UCreativeModeNavigationManager_RevokePendingBuildingTasks_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeNavigationManager.ReceiveOnUnInit
// (Event, Public, BlueprintEvent)

void UCreativeModeNavigationManager::ReceiveOnUnInit()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeNavigationManager.ReceiveOnUnInit");

	UCreativeModeNavigationManager_ReceiveOnUnInit_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeNavigationManager.ReceiveOnInit
// (Event, Public, BlueprintEvent)

void UCreativeModeNavigationManager::ReceiveOnInit()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeNavigationManager.ReceiveOnInit");

	UCreativeModeNavigationManager_ReceiveOnInit_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeNavigationManager.RebuildDynamicTilesByCoord
// (Final, Native, Public, HasOutParms)
// Parameters:
// TArray<struct FIntPoint>       DynamicTiles                   (Parm, OutParm, ZeroConstructor)

void UCreativeModeNavigationManager::RebuildDynamicTilesByCoord(TArray<struct FIntPoint>* DynamicTiles)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeNavigationManager.RebuildDynamicTilesByCoord");

	UCreativeModeNavigationManager_RebuildDynamicTilesByCoord_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (DynamicTiles != nullptr)
		*DynamicTiles = params.DynamicTiles;
}


// Function Creative.CreativeModeNavigationManager.RebuildDynamicTiles
// (Final, Native, Public, HasOutParms)
// Parameters:
// TArray<class AActor*>          Actors                         (Parm, OutParm, ZeroConstructor)

void UCreativeModeNavigationManager::RebuildDynamicTiles(TArray<class AActor*>* Actors)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeNavigationManager.RebuildDynamicTiles");

	UCreativeModeNavigationManager_RebuildDynamicTiles_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Actors != nullptr)
		*Actors = params.Actors;
}


// Function Creative.CreativeModeNavigationManager.IsBuildingInProgress
// (Final, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeModeNavigationManager::IsBuildingInProgress()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeNavigationManager.IsBuildingInProgress");

	UCreativeModeNavigationManager_IsBuildingInProgress_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeNavigationManager.ImportDynamicTile
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FString                 Path                           (Parm, OutParm, ZeroConstructor)

void UCreativeModeNavigationManager::ImportDynamicTile(struct FString* Path)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeNavigationManager.ImportDynamicTile");

	UCreativeModeNavigationManager_ImportDynamicTile_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Path != nullptr)
		*Path = params.Path;
}


// Function Creative.CreativeModeNavigationManager.GetDynamicTilesCount
// (Final, Native, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UCreativeModeNavigationManager::GetDynamicTilesCount()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeNavigationManager.GetDynamicTilesCount");

	UCreativeModeNavigationManager_GetDynamicTilesCount_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeNavigationManager.GetDynamicTileMemCost
// (Final, Native, Public, HasOutParms)
// Parameters:
// int                            Total                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            OctTree                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            TileCache                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            DynamicTile                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            DynamicTileCount               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeModeNavigationManager::GetDynamicTileMemCost(int* Total, int* OctTree, int* TileCache, int* DynamicTile, int* DynamicTileCount)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeNavigationManager.GetDynamicTileMemCost");

	UCreativeModeNavigationManager_GetDynamicTileMemCost_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Total != nullptr)
		*Total = params.Total;
	if (OctTree != nullptr)
		*OctTree = params.OctTree;
	if (TileCache != nullptr)
		*TileCache = params.TileCache;
	if (DynamicTile != nullptr)
		*DynamicTile = params.DynamicTile;
	if (DynamicTileCount != nullptr)
		*DynamicTileCount = params.DynamicTileCount;

	return params.ReturnValue;
}


// Function Creative.CreativeModeNavigationManager.GetDynamicTileCoordByPos
// (Final, Native, Public, HasDefaults)
// Parameters:
// struct FVector                 Pos                            (Parm, IsPlainOldData)
// struct FIntPoint               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FIntPoint UCreativeModeNavigationManager::GetDynamicTileCoordByPos(const struct FVector& Pos)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeNavigationManager.GetDynamicTileCoordByPos");

	UCreativeModeNavigationManager_GetDynamicTileCoordByPos_Params params;
	params.Pos = Pos;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeNavigationManager.GetAllAssociateActors
// (Final, Native, Public, Const)
// Parameters:
// TArray<class AActor*>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class AActor*> UCreativeModeNavigationManager::GetAllAssociateActors()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeNavigationManager.GetAllAssociateActors");

	UCreativeModeNavigationManager_GetAllAssociateActors_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeNavigationManager.Get
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContext                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UCreativeModeNavigationManager* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCreativeModeNavigationManager* UCreativeModeNavigationManager::Get(class UObject* WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeNavigationManager.Get");

	UCreativeModeNavigationManager_Get_Params params;
	params.WorldContext = WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeNavigationManager.ExportDynamicTile
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FString                 Path                           (Parm, OutParm, ZeroConstructor)

void UCreativeModeNavigationManager::ExportDynamicTile(struct FString* Path)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeNavigationManager.ExportDynamicTile");

	UCreativeModeNavigationManager_ExportDynamicTile_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Path != nullptr)
		*Path = params.Path;
}


// Function Creative.CreativeModeNavigationManager.DeserializeDynamicTileFromByteArr
// (Final, Native, Public, HasOutParms)
// Parameters:
// TArray<unsigned char>          ByteArr                        (Parm, OutParm, ZeroConstructor)

void UCreativeModeNavigationManager::DeserializeDynamicTileFromByteArr(TArray<unsigned char>* ByteArr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeNavigationManager.DeserializeDynamicTileFromByteArr");

	UCreativeModeNavigationManager_DeserializeDynamicTileFromByteArr_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (ByteArr != nullptr)
		*ByteArr = params.ByteArr;
}


// Function Creative.CreativeModeNavigationManager.ClearNavCollision
// (Final, Native, Public)

void UCreativeModeNavigationManager::ClearNavCollision()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeNavigationManager.ClearNavCollision");

	UCreativeModeNavigationManager_ClearNavCollision_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeNavigationManager.ClearDynamicOctreeData
// (Final, Native, Public)

void UCreativeModeNavigationManager::ClearDynamicOctreeData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeNavigationManager.ClearDynamicOctreeData");

	UCreativeModeNavigationManager_ClearDynamicOctreeData_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeNavigationManager.ClearDynamicNavMesh
// (Final, Native, Public)

void UCreativeModeNavigationManager::ClearDynamicNavMesh()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeNavigationManager.ClearDynamicNavMesh");

	UCreativeModeNavigationManager_ClearDynamicNavMesh_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeNavigationManager.ClearAssociateActors
// (Final, Native, Public)

void UCreativeModeNavigationManager::ClearAssociateActors()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeNavigationManager.ClearAssociateActors");

	UCreativeModeNavigationManager_ClearAssociateActors_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeNavigationManager.CalSamplePointsInBoxLegacy
// (Final, Native, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FVector                 BoxMin                         (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 BoxMax                         (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          StepSize                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            MaxPoints                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FVector>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FVector> UCreativeModeNavigationManager::CalSamplePointsInBoxLegacy(const struct FVector& BoxMin, const struct FVector& BoxMax, float StepSize, int MaxPoints)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeNavigationManager.CalSamplePointsInBoxLegacy");

	UCreativeModeNavigationManager_CalSamplePointsInBoxLegacy_Params params;
	params.BoxMin = BoxMin;
	params.BoxMax = BoxMax;
	params.StepSize = StepSize;
	params.MaxPoints = MaxPoints;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeNavigationManager.CalSamplePointsInBox
// (Final, Native, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FVector                 BoxMin                         (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 BoxMax                         (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          StepSize                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            MaxPoints                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FVector>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FVector> UCreativeModeNavigationManager::CalSamplePointsInBox(const struct FVector& BoxMin, const struct FVector& BoxMax, float StepSize, int MaxPoints)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeNavigationManager.CalSamplePointsInBox");

	UCreativeModeNavigationManager_CalSamplePointsInBox_Params params;
	params.BoxMin = BoxMin;
	params.BoxMax = BoxMax;
	params.StepSize = StepSize;
	params.MaxPoints = MaxPoints;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeNavigationManager.CalSamplePoints
// (Final, Native, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FVector                 StartPos                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          StepSize                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            MaxPoints                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FVector>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FVector> UCreativeModeNavigationManager::CalSamplePoints(const struct FVector& StartPos, float StepSize, int MaxPoints)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeNavigationManager.CalSamplePoints");

	UCreativeModeNavigationManager_CalSamplePoints_Params params;
	params.StartPos = StartPos;
	params.StepSize = StepSize;
	params.MaxPoints = MaxPoints;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeNavigationManager.AddNavAffectedObjects
// (Final, Native, Public, HasOutParms)
// Parameters:
// TArray<class AActor*>          Actors                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UCreativeModeNavigationManager::AddNavAffectedObjects(TArray<class AActor*> Actors)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeNavigationManager.AddNavAffectedObjects");

	UCreativeModeNavigationManager_AddNavAffectedObjects_Params params;
	params.Actors = Actors;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeNavigationManager.AddNavAffectedObject
// (Final, Native, Public)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeModeNavigationManager::AddNavAffectedObject(class AActor* Actor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeNavigationManager.AddNavAffectedObject");

	UCreativeModeNavigationManager_AddNavAffectedObject_Params params;
	params.Actor = Actor;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeObjectEditAxisActor.StartEdit
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// int                            Axis                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               Pos                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 HitPos                         (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ACreativeObjectEditAxisActor::StartEdit(int Axis, const struct FVector2D& Pos, const struct FVector& HitPos)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeObjectEditAxisActor.StartEdit");

	ACreativeObjectEditAxisActor_StartEdit_Params params;
	params.Axis = Axis;
	params.Pos = Pos;
	params.HitPos = HitPos;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeObjectEditAxisActor.SetForceHideAxis
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 State                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ACreativeObjectEditAxisActor::SetForceHideAxis(const struct FVector& State)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeObjectEditAxisActor.SetForceHideAxis");

	ACreativeObjectEditAxisActor_SetForceHideAxis_Params params;
	params.State = State;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeObjectEditAxisActor.SetFixedAxisSize
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          FixedSize                      (Parm, ZeroConstructor, IsPlainOldData)

void ACreativeObjectEditAxisActor::SetFixedAxisSize(float FixedSize)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeObjectEditAxisActor.SetFixedAxisSize");

	ACreativeObjectEditAxisActor_SetFixedAxisSize_Params params;
	params.FixedSize = FixedSize;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeObjectEditAxisActor.SetEditType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            InEditType                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            InEditSubType                  (Parm, ZeroConstructor, IsPlainOldData)

void ACreativeObjectEditAxisActor::SetEditType(int InEditType, int InEditSubType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeObjectEditAxisActor.SetEditType");

	ACreativeObjectEditAxisActor_SetEditType_Params params;
	params.InEditType = InEditType;
	params.InEditSubType = InEditSubType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeObjectEditAxisActor.SetComponentVisible
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USceneComponent*         comp                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bVisible                       (Parm, ZeroConstructor, IsPlainOldData)

void ACreativeObjectEditAxisActor::SetComponentVisible(class USceneComponent* comp, bool bVisible)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeObjectEditAxisActor.SetComponentVisible");

	ACreativeObjectEditAxisActor_SetComponentVisible_Params params;
	params.comp = comp;
	params.bVisible = bVisible;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeObjectEditAxisActor.SetAxisState
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 State                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ACreativeObjectEditAxisActor::SetAxisState(const struct FVector& State)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeObjectEditAxisActor.SetAxisState");

	ACreativeObjectEditAxisActor_SetAxisState_Params params;
	params.State = State;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeObjectEditAxisActor.MarkEditing
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bDoing                         (Parm, ZeroConstructor, IsPlainOldData)

void ACreativeObjectEditAxisActor::MarkEditing(bool bDoing)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeObjectEditAxisActor.MarkEditing");

	ACreativeObjectEditAxisActor_MarkEditing_Params params;
	params.bDoing = bDoing;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeObjectEditAxisActor.CalScale
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D               Pos                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 OutScale                       (Parm, OutParm, IsPlainOldData)

void ACreativeObjectEditAxisActor::CalScale(const struct FVector2D& Pos, struct FVector* OutScale)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeObjectEditAxisActor.CalScale");

	ACreativeObjectEditAxisActor_CalScale_Params params;
	params.Pos = Pos;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutScale != nullptr)
		*OutScale = params.OutScale;
}


// Function Creative.CreativeObjectEditAxisActor.CalRotation
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D               Pos                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FRotator                OutRot                         (Parm, OutParm, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ACreativeObjectEditAxisActor::CalRotation(const struct FVector2D& Pos, struct FRotator* OutRot)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeObjectEditAxisActor.CalRotation");

	ACreativeObjectEditAxisActor_CalRotation_Params params;
	params.Pos = Pos;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutRot != nullptr)
		*OutRot = params.OutRot;

	return params.ReturnValue;
}


// Function Creative.CreativeObjectEditAxisActor.CalLocation
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D               Pos                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 OutLoc                         (Parm, OutParm, IsPlainOldData)

void ACreativeObjectEditAxisActor::CalLocation(const struct FVector2D& Pos, struct FVector* OutLoc)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeObjectEditAxisActor.CalLocation");

	ACreativeObjectEditAxisActor_CalLocation_Params params;
	params.Pos = Pos;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutLoc != nullptr)
		*OutLoc = params.OutLoc;
}


// Function Creative.CreativeModeObjectInterface.ReceiveOnPostSetInstanceId
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 InstanceID                     (Parm, ZeroConstructor)

void UCreativeModeObjectInterface::ReceiveOnPostSetInstanceId(const struct FString& InstanceID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeObjectInterface.ReceiveOnPostSetInstanceId");

	UCreativeModeObjectInterface_ReceiveOnPostSetInstanceId_Params params;
	params.InstanceID = InstanceID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeObjectLocalAxisActor.SetAxisComponents
// (Final, Native, Public)
// Parameters:
// class USceneComponent*         Axis                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class USceneComponent*         Grid                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ACreativeObjectLocalAxisActor::SetAxisComponents(class USceneComponent* Axis, class USceneComponent* Grid)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeObjectLocalAxisActor.SetAxisComponents");

	ACreativeObjectLocalAxisActor_SetAxisComponents_Params params;
	params.Axis = Axis;
	params.Grid = Grid;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeObjectLocalAxisActor.NeedUpdate
// (Final, Native, Public)

void ACreativeObjectLocalAxisActor::NeedUpdate()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeObjectLocalAxisActor.NeedUpdate");

	ACreativeObjectLocalAxisActor_NeedUpdate_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeObjectManager.SpawnObjectForStreaming
// (Final, Native, Public)
// Parameters:
// struct FString                 InstanceID                     (Parm, ZeroConstructor)

void UCreativeObjectManager::SpawnObjectForStreaming(const struct FString& InstanceID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeObjectManager.SpawnObjectForStreaming");

	UCreativeObjectManager_SpawnObjectForStreaming_Params params;
	params.InstanceID = InstanceID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeObjectManager.SpawnObject
// (Final, Native, Public, HasDefaults)
// Parameters:
// struct FString                 InstanceID                     (Parm, ZeroConstructor)
// struct FString                 Path                           (Parm, ZeroConstructor)
// struct FTransform              SpawnTransform                 (Parm, IsPlainOldData)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UCreativeObjectManager::SpawnObject(const struct FString& InstanceID, const struct FString& Path, const struct FTransform& SpawnTransform)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeObjectManager.SpawnObject");

	UCreativeObjectManager_SpawnObject_Params params;
	params.InstanceID = InstanceID;
	params.Path = Path;
	params.SpawnTransform = SpawnTransform;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeObjectManager.SetObjectTempStreamingType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 InstanceID                     (Parm, ZeroConstructor)
// ECreativeModeActorStreamingType TempStreamingType              (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeObjectManager::SetObjectTempStreamingType(const struct FString& InstanceID, ECreativeModeActorStreamingType TempStreamingType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeObjectManager.SetObjectTempStreamingType");

	UCreativeObjectManager_SetObjectTempStreamingType_Params params;
	params.InstanceID = InstanceID;
	params.TempStreamingType = TempStreamingType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeObjectManager.ResetObjectStreamingType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 InstanceID                     (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeObjectManager::ResetObjectStreamingType(const struct FString& InstanceID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeObjectManager.ResetObjectStreamingType");

	UCreativeObjectManager_ResetObjectStreamingType_Params params;
	params.InstanceID = InstanceID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeObjectManager.RemoveSpawnObjectInfoFormQueue
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 InstanceID                     (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeObjectManager::RemoveSpawnObjectInfoFormQueue(struct FString* InstanceID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeObjectManager.RemoveSpawnObjectInfoFormQueue");

	UCreativeObjectManager_RemoveSpawnObjectInfoFormQueue_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (InstanceID != nullptr)
		*InstanceID = params.InstanceID;

	return params.ReturnValue;
}


// Function Creative.CreativeObjectManager.RemovePhysicsObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 InstanceID                     (Parm, ZeroConstructor)

void UCreativeObjectManager::RemovePhysicsObject(const struct FString& InstanceID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeObjectManager.RemovePhysicsObject");

	UCreativeObjectManager_RemovePhysicsObject_Params params;
	params.InstanceID = InstanceID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeObjectManager.RemoveObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 InstanceID                     (Parm, ZeroConstructor)
// bool                           bRemovePhysicsObject           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeObjectManager::RemoveObject(const struct FString& InstanceID, bool bRemovePhysicsObject)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeObjectManager.RemoveObject");

	UCreativeObjectManager_RemoveObject_Params params;
	params.InstanceID = InstanceID;
	params.bRemovePhysicsObject = bRemovePhysicsObject;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeObjectManager.RemoveDestroyObjectInfoFormQueue
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 InstanceID                     (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeObjectManager::RemoveDestroyObjectInfoFormQueue(struct FString* InstanceID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeObjectManager.RemoveDestroyObjectInfoFormQueue");

	UCreativeObjectManager_RemoveDestroyObjectInfoFormQueue_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (InstanceID != nullptr)
		*InstanceID = params.InstanceID;

	return params.ReturnValue;
}


// Function Creative.CreativeObjectManager.ReceiveUnregisterObject
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 InstanceID                     (Parm, ZeroConstructor)
// class UObject*                 NewObject                      (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeObjectManager::ReceiveUnregisterObject(const struct FString& InstanceID, class UObject* NewObject)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeObjectManager.ReceiveUnregisterObject");

	UCreativeObjectManager_ReceiveUnregisterObject_Params params;
	params.InstanceID = InstanceID;
	params.NewObject = NewObject;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeObjectManager.ReceiveRegisterObject
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 InstanceID                     (Parm, ZeroConstructor)
// class UObject*                 NewObject                      (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeObjectManager::ReceiveRegisterObject(const struct FString& InstanceID, class UObject* NewObject)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeObjectManager.ReceiveRegisterObject");

	UCreativeObjectManager_ReceiveRegisterObject_Params params;
	params.InstanceID = InstanceID;
	params.NewObject = NewObject;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeObjectManager.ReceiveOnPostLoadMapWithWorld
// (Event, Public, BlueprintEvent)
// Parameters:
// class UWorld*                  World                          (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeObjectManager::ReceiveOnPostLoadMapWithWorld(class UWorld* World)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeObjectManager.ReceiveOnPostLoadMapWithWorld");

	UCreativeObjectManager_ReceiveOnPostLoadMapWithWorld_Params params;
	params.World = World;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeObjectManager.ReceiveClearAllObjects
// (Event, Public, BlueprintEvent)

void UCreativeObjectManager::ReceiveClearAllObjects()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeObjectManager.ReceiveClearAllObjects");

	UCreativeObjectManager_ReceiveClearAllObjects_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeObjectManager.OnPostLoadMapWithWorld
// (Final, Native, Public)
// Parameters:
// class UWorld*                  World                          (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeObjectManager::OnPostLoadMapWithWorld(class UWorld* World)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeObjectManager.OnPostLoadMapWithWorld");

	UCreativeObjectManager_OnPostLoadMapWithWorld_Params params;
	params.World = World;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeObjectManager.OnObjectSpawnComplete
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 ID                             (Parm, ZeroConstructor)

void UCreativeObjectManager::OnObjectSpawnComplete(const struct FString& ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeObjectManager.OnObjectSpawnComplete");

	UCreativeObjectManager_OnObjectSpawnComplete_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeObjectManager.IsLogicObject
// (Final, Native, Public)
// Parameters:
// struct FString                 ID                             (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeObjectManager::IsLogicObject(const struct FString& ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeObjectManager.IsLogicObject");

	UCreativeObjectManager_IsLogicObject_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeObjectManager.IsGroupObject
// (Final, Native, Public)
// Parameters:
// struct FString                 ID                             (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeObjectManager::IsGroupObject(const struct FString& ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeObjectManager.IsGroupObject");

	UCreativeObjectManager_IsGroupObject_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeObjectManager.IsCanBatchObject
// (Final, Native, Public)
// Parameters:
// struct FString                 ID                             (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeObjectManager::IsCanBatchObject(const struct FString& ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeObjectManager.IsCanBatchObject");

	UCreativeObjectManager_IsCanBatchObject_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeObjectManager.GetObjectTransform
// (Final, Native, Public, HasDefaults)
// Parameters:
// struct FString                 ID                             (Parm, ZeroConstructor)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform UCreativeObjectManager::GetObjectTransform(const struct FString& ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeObjectManager.GetObjectTransform");

	UCreativeObjectManager_GetObjectTransform_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeObjectManager.GetObjectNum
// (Final, Native, Public, Const)
// Parameters:
// uint32_t                       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

uint32_t UCreativeObjectManager::GetObjectNum()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeObjectManager.GetObjectNum");

	UCreativeObjectManager_GetObjectNum_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeObjectManager.GetObjectAssetPath
// (Final, Native, Public)
// Parameters:
// struct FString                 ID                             (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UCreativeObjectManager::GetObjectAssetPath(const struct FString& ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeObjectManager.GetObjectAssetPath");

	UCreativeObjectManager_GetObjectAssetPath_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeObjectManager.GetObjectAssetID
// (Final, Native, Public)
// Parameters:
// struct FString                 ID                             (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UCreativeObjectManager::GetObjectAssetID(const struct FString& ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeObjectManager.GetObjectAssetID");

	UCreativeObjectManager_GetObjectAssetID_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeObjectManager.GetObject
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 InstanceID                     (Parm, ZeroConstructor)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UCreativeObjectManager::GetObject(const struct FString& InstanceID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeObjectManager.GetObject");

	UCreativeObjectManager_GetObject_Params params;
	params.InstanceID = InstanceID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeObjectManager.GetActiveObjectNum
// (Final, Native, Public, Const)
// Parameters:
// uint32_t                       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

uint32_t UCreativeObjectManager::GetActiveObjectNum()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeObjectManager.GetActiveObjectNum");

	UCreativeObjectManager_GetActiveObjectNum_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeObjectManager.Get
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContext                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UCreativeObjectManager*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCreativeObjectManager* UCreativeObjectManager::Get(class UObject* WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeObjectManager.Get");

	UCreativeObjectManager_Get_Params params;
	params.WorldContext = WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeObjectManager.DestroyObjectForStreaming
// (Final, Native, Public)
// Parameters:
// struct FString                 InstanceID                     (Parm, ZeroConstructor)

void UCreativeObjectManager::DestroyObjectForStreaming(const struct FString& InstanceID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeObjectManager.DestroyObjectForStreaming");

	UCreativeObjectManager_DestroyObjectForStreaming_Params params;
	params.InstanceID = InstanceID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeObjectManager.DestroyObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 InstanceID                     (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeObjectManager::DestroyObject(const struct FString& InstanceID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeObjectManager.DestroyObject");

	UCreativeObjectManager_DestroyObject_Params params;
	params.InstanceID = InstanceID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeObjectManager.CheckObjectBeBatch
// (Final, Native, Public)
// Parameters:
// struct FString                 ID                             (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeObjectManager::CheckObjectBeBatch(const struct FString& ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeObjectManager.CheckObjectBeBatch");

	UCreativeObjectManager_CheckObjectBeBatch_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeObjectManager.ChangeObjectTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString                 InstanceID                     (Parm, ZeroConstructor)
// struct FTransform              Transform                      (Parm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeObjectManager::ChangeObjectTransform(const struct FString& InstanceID, const struct FTransform& Transform)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeObjectManager.ChangeObjectTransform");

	UCreativeObjectManager_ChangeObjectTransform_Params params;
	params.InstanceID = InstanceID;
	params.Transform = Transform;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeObjectManager.AddSpawnObjectToQueue
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString                 InstanceID                     (Parm, ZeroConstructor)
// struct FString                 Path                           (Parm, ZeroConstructor)
// struct FTransform              SpawnTransform                 (Parm, IsPlainOldData)

void UCreativeObjectManager::AddSpawnObjectToQueue(const struct FString& InstanceID, const struct FString& Path, const struct FTransform& SpawnTransform)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeObjectManager.AddSpawnObjectToQueue");

	UCreativeObjectManager_AddSpawnObjectToQueue_Params params;
	params.InstanceID = InstanceID;
	params.Path = Path;
	params.SpawnTransform = SpawnTransform;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeObjectManager.AddObject
// (Final, Native, Public)
// Parameters:
// struct FString                 InstanceID                     (Parm, ZeroConstructor)
// struct FCreativeModeStreamingParameters StreamingParameters            (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeObjectManager::AddObject(const struct FString& InstanceID, const struct FCreativeModeStreamingParameters& StreamingParameters)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeObjectManager.AddObject");

	UCreativeObjectManager_AddObject_Params params;
	params.InstanceID = InstanceID;
	params.StreamingParameters = StreamingParameters;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeObjectManager.AddDestroyObjectToQueue
// (Final, Native, Public)
// Parameters:
// struct FString                 InstanceID                     (Parm, ZeroConstructor)

void UCreativeObjectManager::AddDestroyObjectToQueue(const struct FString& InstanceID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeObjectManager.AddDestroyObjectToQueue");

	UCreativeObjectManager_AddDestroyObjectToQueue_Params params;
	params.InstanceID = InstanceID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeObjectStateManager.ReceiveOnGameStateBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AGameStateBase*          GameState                      (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeObjectStateManager::ReceiveOnGameStateBeginPlay(class AGameStateBase* GameState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeObjectStateManager.ReceiveOnGameStateBeginPlay");

	UCreativeObjectStateManager_ReceiveOnGameStateBeginPlay_Params params;
	params.GameState = GameState;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeObjectStateManager.OnGameStateBeginPlay
// (Final, Native, Protected)
// Parameters:
// class AGameStateBase*          GameState                      (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeObjectStateManager::OnGameStateBeginPlay(class AGameStateBase* GameState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeObjectStateManager.OnGameStateBeginPlay");

	UCreativeObjectStateManager_OnGameStateBeginPlay_Params params;
	params.GameState = GameState;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeObjectStateManager.Get
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContext                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UCreativeObjectStateManager* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCreativeObjectStateManager* UCreativeObjectStateManager::Get(class UObject* WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeObjectStateManager.Get");

	UCreativeObjectStateManager_Get_Params params;
	params.WorldContext = WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeOfflineBuildManager.ReceiveOnPostSetLuaEventBridgeInstance
// (Event, Public, BlueprintEvent)

void UCreativeOfflineBuildManager::ReceiveOnPostSetLuaEventBridgeInstance()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeOfflineBuildManager.ReceiveOnPostSetLuaEventBridgeInstance");

	UCreativeOfflineBuildManager_ReceiveOnPostSetLuaEventBridgeInstance_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeOfflineBuildManager.OnPostSetLuaEventBridgeInstance
// (Final, Native, Public)

void UCreativeOfflineBuildManager::OnPostSetLuaEventBridgeInstance()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeOfflineBuildManager.OnPostSetLuaEventBridgeInstance");

	UCreativeOfflineBuildManager_OnPostSetLuaEventBridgeInstance_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeOfflineBuildManager.Get
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContext                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UCreativeOfflineBuildManager* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCreativeOfflineBuildManager* UCreativeOfflineBuildManager::Get(class UObject* WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeOfflineBuildManager.Get");

	UCreativeOfflineBuildManager_Get_Params params;
	params.WorldContext = WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativePerfManager.ReceiveOnGameStateBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// class AGameStateBase*          GameState                      (Parm, ZeroConstructor, IsPlainOldData)

void UCreativePerfManager::ReceiveOnGameStateBeginPlay(class AGameStateBase* GameState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePerfManager.ReceiveOnGameStateBeginPlay");

	UCreativePerfManager_ReceiveOnGameStateBeginPlay_Params params;
	params.GameState = GameState;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativePerfManager.OnGameStateBeginPlay
// (Final, Native, Public)
// Parameters:
// class AGameStateBase*          GameState                      (Parm, ZeroConstructor, IsPlainOldData)

void UCreativePerfManager::OnGameStateBeginPlay(class AGameStateBase* GameState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePerfManager.OnGameStateBeginPlay");

	UCreativePerfManager_OnGameStateBeginPlay_Params params;
	params.GameState = GameState;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativePerfManager.GetUObjectMemoryUsage
// (Final, Native, Public)
// Parameters:
// TMap<struct FName, float>      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TMap<struct FName, float> UCreativePerfManager::GetUObjectMemoryUsage()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePerfManager.GetUObjectMemoryUsage");

	UCreativePerfManager_GetUObjectMemoryUsage_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativePerfManager.GetResult
// (Final, Native, Public, Const)
// Parameters:
// TArray<struct FCreaitvePerfDataMap> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FCreaitvePerfDataMap> UCreativePerfManager::GetResult()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePerfManager.GetResult");

	UCreativePerfManager_GetResult_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativePerfManager.GetNetData
// (Final, Native, Public)
// Parameters:
// struct FCreativeNetData        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FCreativeNetData UCreativePerfManager::GetNetData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePerfManager.GetNetData");

	UCreativePerfManager_GetNetData_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativePerfManager.GetMemoryData
// (Final, Native, Public)
// Parameters:
// struct FCreativeMemoryData     ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FCreativeMemoryData UCreativePerfManager::GetMemoryData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePerfManager.GetMemoryData");

	UCreativePerfManager_GetMemoryData_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativePerfManager.GetCPUUsage
// (Final, Native, Public, HasOutParms)
// Parameters:
// float                          OutCPUTimePct                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          OutCPUTimePctRelative          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Type                           (Parm, ZeroConstructor, IsPlainOldData)

void UCreativePerfManager::GetCPUUsage(int Type, float* OutCPUTimePct, float* OutCPUTimePctRelative)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePerfManager.GetCPUUsage");

	UCreativePerfManager_GetCPUUsage_Params params;
	params.Type = Type;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutCPUTimePct != nullptr)
		*OutCPUTimePct = params.OutCPUTimePct;
	if (OutCPUTimePctRelative != nullptr)
		*OutCPUTimePctRelative = params.OutCPUTimePctRelative;
}


// Function Creative.CreativePerfManager.Get
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContext                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UCreativePerfManager*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCreativePerfManager* UCreativePerfManager::Get(class UObject* WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePerfManager.Get");

	UCreativePerfManager_Get_Params params;
	params.WorldContext = WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativePerfManager.EndSample
// (Final, Native, Public)

void UCreativePerfManager::EndSample()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePerfManager.EndSample");

	UCreativePerfManager_EndSample_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativePerfManager.BeginSample
// (Final, Native, Public)

void UCreativePerfManager::BeginSample()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePerfManager.BeginSample");

	UCreativePerfManager_BeginSample_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativePerfManager.AddActorToRecord
// (Final, Native, Public)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            AssetId                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ScopeName                      (Parm, ZeroConstructor, IsPlainOldData)

void UCreativePerfManager::AddActorToRecord(class AActor* Actor, int AssetId, const struct FName& ScopeName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePerfManager.AddActorToRecord");

	UCreativePerfManager_AddActorToRecord_Params params;
	params.Actor = Actor;
	params.AssetId = AssetId;
	params.ScopeName = ScopeName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativePhotonDestructibleMeshComponent.SetInstanceActive
// (Final, Native, Public)
// Parameters:
// bool                           bActive                        (Parm, ZeroConstructor, IsPlainOldData)

void UCreativePhotonDestructibleMeshComponent::SetInstanceActive(bool bActive)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhotonDestructibleMeshComponent.SetInstanceActive");

	UCreativePhotonDestructibleMeshComponent_SetInstanceActive_Params params;
	params.bActive = bActive;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativePhotonDestructibleMeshComponent.SetDestructionParam
// (Final, Native, Public)
// Parameters:
// struct FPhotonDestructionParam Param                          (Parm)

void UCreativePhotonDestructibleMeshComponent::SetDestructionParam(const struct FPhotonDestructionParam& Param)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhotonDestructibleMeshComponent.SetDestructionParam");

	UCreativePhotonDestructibleMeshComponent_SetDestructionParam_Params params;
	params.Param = Param;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativePhotonDestructibleMeshComponent.SetCreativeServerDamagedDelegate
// (Final, Native, Public)
// Parameters:
// struct FScriptDelegate         del                            (Parm, ZeroConstructor)

void UCreativePhotonDestructibleMeshComponent::SetCreativeServerDamagedDelegate(const struct FScriptDelegate& del)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhotonDestructibleMeshComponent.SetCreativeServerDamagedDelegate");

	UCreativePhotonDestructibleMeshComponent_SetCreativeServerDamagedDelegate_Params params;
	params.del = del;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativePhotonDestructibleMeshComponent.SetCreativeClientFragmentStateChangedDelegate
// (Final, Native, Public)
// Parameters:
// struct FScriptDelegate         del                            (Parm, ZeroConstructor)

void UCreativePhotonDestructibleMeshComponent::SetCreativeClientFragmentStateChangedDelegate(const struct FScriptDelegate& del)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhotonDestructibleMeshComponent.SetCreativeClientFragmentStateChangedDelegate");

	UCreativePhotonDestructibleMeshComponent_SetCreativeClientFragmentStateChangedDelegate_Params params;
	params.del = del;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativePhotonDestructibleMeshComponent.RebornOneFragment
// (Final, Native, Public)
// Parameters:
// int                            FragmentIndex                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativePhotonDestructibleMeshComponent::RebornOneFragment(int FragmentIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhotonDestructibleMeshComponent.RebornOneFragment");

	UCreativePhotonDestructibleMeshComponent_RebornOneFragment_Params params;
	params.FragmentIndex = FragmentIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativePhotonDestructibleMeshComponent.RebornInstance
// (Final, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativePhotonDestructibleMeshComponent::RebornInstance()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhotonDestructibleMeshComponent.RebornInstance");

	UCreativePhotonDestructibleMeshComponent_RebornInstance_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativePhotonDestructibleMeshComponent.RandomRecoverOneFragment
// (Final, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativePhotonDestructibleMeshComponent::RandomRecoverOneFragment()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhotonDestructibleMeshComponent.RandomRecoverOneFragment");

	UCreativePhotonDestructibleMeshComponent_RandomRecoverOneFragment_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativePhotonDestructibleMeshComponent.RandomDestroyOneFragment
// (Final, Native, Public)

void UCreativePhotonDestructibleMeshComponent::RandomDestroyOneFragment()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhotonDestructibleMeshComponent.RandomDestroyOneFragment");

	UCreativePhotonDestructibleMeshComponent_RandomDestroyOneFragment_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativePhotonDestructibleMeshComponent.DestroyInstance
// (Final, Native, Public)

void UCreativePhotonDestructibleMeshComponent::DestroyInstance()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhotonDestructibleMeshComponent.DestroyInstance");

	UCreativePhotonDestructibleMeshComponent_DestroyInstance_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativePhotonDestructibleMeshComponent.CheckFragmentOverlap
// (Final, Native, Public)
// Parameters:
// int                            FragmentIndex                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativePhotonDestructibleMeshComponent::CheckFragmentOverlap(int FragmentIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhotonDestructibleMeshComponent.CheckFragmentOverlap");

	UCreativePhotonDestructibleMeshComponent_CheckFragmentOverlap_Params params;
	params.FragmentIndex = FragmentIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativePhotonHierarchicalInstancedDestructibleMeshComponent.SetServerDamagedInstancedDelegate
// (Final, Native, Public)
// Parameters:
// struct FScriptDelegate         InDelegate                     (Parm, ZeroConstructor)

void UCreativePhotonHierarchicalInstancedDestructibleMeshComponent::SetServerDamagedInstancedDelegate(const struct FScriptDelegate& InDelegate)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhotonHierarchicalInstancedDestructibleMeshComponent.SetServerDamagedInstancedDelegate");

	UCreativePhotonHierarchicalInstancedDestructibleMeshComponent_SetServerDamagedInstancedDelegate_Params params;
	params.InDelegate = InDelegate;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativePhotonHierarchicalInstancedDestructibleMeshComponent.SetInstanceMaxHp
// (Final, Native, Public)
// Parameters:
// int                            InstanceIndex                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          MaxHP                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UCreativePhotonHierarchicalInstancedDestructibleMeshComponent::SetInstanceMaxHp(int InstanceIndex, float MaxHP)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhotonHierarchicalInstancedDestructibleMeshComponent.SetInstanceMaxHp");

	UCreativePhotonHierarchicalInstancedDestructibleMeshComponent_SetInstanceMaxHp_Params params;
	params.InstanceIndex = InstanceIndex;
	params.MaxHP = MaxHP;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativePhotonHierarchicalInstancedDestructibleMeshComponent.SetInstanceActive
// (Final, Native, Public)
// Parameters:
// struct FString                 InstanceID                     (Parm, ZeroConstructor)
// bool                           bActive                        (Parm, ZeroConstructor, IsPlainOldData)

void UCreativePhotonHierarchicalInstancedDestructibleMeshComponent::SetInstanceActive(const struct FString& InstanceID, bool bActive)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhotonHierarchicalInstancedDestructibleMeshComponent.SetInstanceActive");

	UCreativePhotonHierarchicalInstancedDestructibleMeshComponent_SetInstanceActive_Params params;
	params.InstanceID = InstanceID;
	params.bActive = bActive;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativePhotonHierarchicalInstancedDestructibleMeshComponent.SetDestructionParam
// (Final, Native, Public)
// Parameters:
// TArray<int>                    InstanceIndex                  (Parm, ZeroConstructor)
// TArray<struct FPhotonDestructionParam> DestructionParams              (Parm, ZeroConstructor)

void UCreativePhotonHierarchicalInstancedDestructibleMeshComponent::SetDestructionParam(TArray<int> InstanceIndex, TArray<struct FPhotonDestructionParam> DestructionParams)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhotonHierarchicalInstancedDestructibleMeshComponent.SetDestructionParam");

	UCreativePhotonHierarchicalInstancedDestructibleMeshComponent_SetDestructionParam_Params params;
	params.InstanceIndex = InstanceIndex;
	params.DestructionParams = DestructionParams;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativePhotonHierarchicalInstancedDestructibleMeshComponent.RebornOneFragment
// (Final, Native, Public)
// Parameters:
// struct FString                 InstanceID                     (Parm, ZeroConstructor)
// int                            FragmentIndex                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativePhotonHierarchicalInstancedDestructibleMeshComponent::RebornOneFragment(const struct FString& InstanceID, int FragmentIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhotonHierarchicalInstancedDestructibleMeshComponent.RebornOneFragment");

	UCreativePhotonHierarchicalInstancedDestructibleMeshComponent_RebornOneFragment_Params params;
	params.InstanceID = InstanceID;
	params.FragmentIndex = FragmentIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativePhotonHierarchicalInstancedDestructibleMeshComponent.RebornInstance
// (Final, Native, Public)
// Parameters:
// struct FString                 InstanceID                     (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativePhotonHierarchicalInstancedDestructibleMeshComponent::RebornInstance(const struct FString& InstanceID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhotonHierarchicalInstancedDestructibleMeshComponent.RebornInstance");

	UCreativePhotonHierarchicalInstancedDestructibleMeshComponent_RebornInstance_Params params;
	params.InstanceID = InstanceID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativePhotonHierarchicalInstancedDestructibleMeshComponent.RandomRecoverOneFragment
// (Final, Native, Public)
// Parameters:
// struct FString                 InstanceID                     (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativePhotonHierarchicalInstancedDestructibleMeshComponent::RandomRecoverOneFragment(const struct FString& InstanceID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhotonHierarchicalInstancedDestructibleMeshComponent.RandomRecoverOneFragment");

	UCreativePhotonHierarchicalInstancedDestructibleMeshComponent_RandomRecoverOneFragment_Params params;
	params.InstanceID = InstanceID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativePhotonHierarchicalInstancedDestructibleMeshComponent.RandomDestroyOneFragment
// (Final, Native, Public)
// Parameters:
// struct FString                 InstanceID                     (Parm, ZeroConstructor)

void UCreativePhotonHierarchicalInstancedDestructibleMeshComponent::RandomDestroyOneFragment(const struct FString& InstanceID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhotonHierarchicalInstancedDestructibleMeshComponent.RandomDestroyOneFragment");

	UCreativePhotonHierarchicalInstancedDestructibleMeshComponent_RandomDestroyOneFragment_Params params;
	params.InstanceID = InstanceID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativePhotonHierarchicalInstancedDestructibleMeshComponent.OnClientInitial
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// int                            InstanceIndex                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>                    ImpactFragmentItemIndex        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UCreativePhotonHierarchicalInstancedDestructibleMeshComponent::OnClientInitial(int InstanceIndex, TArray<int> ImpactFragmentItemIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhotonHierarchicalInstancedDestructibleMeshComponent.OnClientInitial");

	UCreativePhotonHierarchicalInstancedDestructibleMeshComponent_OnClientInitial_Params params;
	params.InstanceIndex = InstanceIndex;
	params.ImpactFragmentItemIndex = ImpactFragmentItemIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativePhotonHierarchicalInstancedDestructibleMeshComponent.OnClientDamaged
// (Native, Event, Public, HasOutParms, HasDefaults, BlueprintEvent)
// Parameters:
// int                            InstanceIndex                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>                    ImpactFragmentItemIndex        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FVector                 LocalImpactPoint               (ConstParm, Parm, IsPlainOldData)
// struct FVector                 LocalVelocity                  (ConstParm, Parm, IsPlainOldData)
// int                            HitType                        (Parm, ZeroConstructor, IsPlainOldData)

void UCreativePhotonHierarchicalInstancedDestructibleMeshComponent::OnClientDamaged(int InstanceIndex, TArray<int> ImpactFragmentItemIndex, const struct FVector& LocalImpactPoint, const struct FVector& LocalVelocity, int HitType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhotonHierarchicalInstancedDestructibleMeshComponent.OnClientDamaged");

	UCreativePhotonHierarchicalInstancedDestructibleMeshComponent_OnClientDamaged_Params params;
	params.InstanceIndex = InstanceIndex;
	params.ImpactFragmentItemIndex = ImpactFragmentItemIndex;
	params.LocalImpactPoint = LocalImpactPoint;
	params.LocalVelocity = LocalVelocity;
	params.HitType = HitType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativePhotonHierarchicalInstancedDestructibleMeshComponent.GetUGCInstanceID
// (Final, Native, Public)
// Parameters:
// int                            InstanceIndex                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UCreativePhotonHierarchicalInstancedDestructibleMeshComponent::GetUGCInstanceID(int InstanceIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhotonHierarchicalInstancedDestructibleMeshComponent.GetUGCInstanceID");

	UCreativePhotonHierarchicalInstancedDestructibleMeshComponent_GetUGCInstanceID_Params params;
	params.InstanceIndex = InstanceIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativePhotonHierarchicalInstancedDestructibleMeshComponent.DestroyInstance
// (Final, Native, Public)
// Parameters:
// struct FString                 InstanceID                     (Parm, ZeroConstructor)

void UCreativePhotonHierarchicalInstancedDestructibleMeshComponent::DestroyInstance(const struct FString& InstanceID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhotonHierarchicalInstancedDestructibleMeshComponent.DestroyInstance");

	UCreativePhotonHierarchicalInstancedDestructibleMeshComponent_DestroyInstance_Params params;
	params.InstanceID = InstanceID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativePhotonHierarchicalInstancedDestructibleMeshComponent.CheckFragmentOverlap
// (Final, Native, Public)
// Parameters:
// int                            InstanceIndex                  (Parm, ZeroConstructor, IsPlainOldData)
// int                            FragmentIndex                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativePhotonHierarchicalInstancedDestructibleMeshComponent::CheckFragmentOverlap(int InstanceIndex, int FragmentIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhotonHierarchicalInstancedDestructibleMeshComponent.CheckFragmentOverlap");

	UCreativePhotonHierarchicalInstancedDestructibleMeshComponent_CheckFragmentOverlap_Params params;
	params.InstanceIndex = InstanceIndex;
	params.FragmentIndex = FragmentIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativePhotonInstancedDestructibleMeshComponent.SetServerDamagedInstancedDelegate
// (Final, Native, Public)
// Parameters:
// struct FScriptDelegate         InDelegate                     (Parm, ZeroConstructor)

void UCreativePhotonInstancedDestructibleMeshComponent::SetServerDamagedInstancedDelegate(const struct FScriptDelegate& InDelegate)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhotonInstancedDestructibleMeshComponent.SetServerDamagedInstancedDelegate");

	UCreativePhotonInstancedDestructibleMeshComponent_SetServerDamagedInstancedDelegate_Params params;
	params.InDelegate = InDelegate;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativePhotonInstancedDestructibleMeshComponent.SetInstanceMaxHp
// (Final, Native, Public)
// Parameters:
// int                            InstanceIndex                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          MaxHP                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UCreativePhotonInstancedDestructibleMeshComponent::SetInstanceMaxHp(int InstanceIndex, float MaxHP)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhotonInstancedDestructibleMeshComponent.SetInstanceMaxHp");

	UCreativePhotonInstancedDestructibleMeshComponent_SetInstanceMaxHp_Params params;
	params.InstanceIndex = InstanceIndex;
	params.MaxHP = MaxHP;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativePhotonInstancedDestructibleMeshComponent.SetInstanceActive
// (Final, Native, Public)
// Parameters:
// struct FString                 InstanceID                     (Parm, ZeroConstructor)
// bool                           bActive                        (Parm, ZeroConstructor, IsPlainOldData)

void UCreativePhotonInstancedDestructibleMeshComponent::SetInstanceActive(const struct FString& InstanceID, bool bActive)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhotonInstancedDestructibleMeshComponent.SetInstanceActive");

	UCreativePhotonInstancedDestructibleMeshComponent_SetInstanceActive_Params params;
	params.InstanceID = InstanceID;
	params.bActive = bActive;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativePhotonInstancedDestructibleMeshComponent.SetDestructionParam
// (Final, Native, Public)
// Parameters:
// TArray<int>                    InstanceIndex                  (Parm, ZeroConstructor)
// TArray<struct FPhotonDestructionParam> DestructionParams              (Parm, ZeroConstructor)

void UCreativePhotonInstancedDestructibleMeshComponent::SetDestructionParam(TArray<int> InstanceIndex, TArray<struct FPhotonDestructionParam> DestructionParams)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhotonInstancedDestructibleMeshComponent.SetDestructionParam");

	UCreativePhotonInstancedDestructibleMeshComponent_SetDestructionParam_Params params;
	params.InstanceIndex = InstanceIndex;
	params.DestructionParams = DestructionParams;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativePhotonInstancedDestructibleMeshComponent.RebornOneFragment
// (Final, Native, Public)
// Parameters:
// struct FString                 InstanceID                     (Parm, ZeroConstructor)
// int                            FragmentIndex                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativePhotonInstancedDestructibleMeshComponent::RebornOneFragment(const struct FString& InstanceID, int FragmentIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhotonInstancedDestructibleMeshComponent.RebornOneFragment");

	UCreativePhotonInstancedDestructibleMeshComponent_RebornOneFragment_Params params;
	params.InstanceID = InstanceID;
	params.FragmentIndex = FragmentIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativePhotonInstancedDestructibleMeshComponent.RebornInstance
// (Final, Native, Public)
// Parameters:
// struct FString                 InstanceID                     (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativePhotonInstancedDestructibleMeshComponent::RebornInstance(const struct FString& InstanceID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhotonInstancedDestructibleMeshComponent.RebornInstance");

	UCreativePhotonInstancedDestructibleMeshComponent_RebornInstance_Params params;
	params.InstanceID = InstanceID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativePhotonInstancedDestructibleMeshComponent.RandomRecoverOneFragment
// (Final, Native, Public)
// Parameters:
// struct FString                 InstanceID                     (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativePhotonInstancedDestructibleMeshComponent::RandomRecoverOneFragment(const struct FString& InstanceID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhotonInstancedDestructibleMeshComponent.RandomRecoverOneFragment");

	UCreativePhotonInstancedDestructibleMeshComponent_RandomRecoverOneFragment_Params params;
	params.InstanceID = InstanceID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativePhotonInstancedDestructibleMeshComponent.RandomDestroyOneFragment
// (Final, Native, Public)
// Parameters:
// struct FString                 InstanceID                     (Parm, ZeroConstructor)

void UCreativePhotonInstancedDestructibleMeshComponent::RandomDestroyOneFragment(const struct FString& InstanceID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhotonInstancedDestructibleMeshComponent.RandomDestroyOneFragment");

	UCreativePhotonInstancedDestructibleMeshComponent_RandomDestroyOneFragment_Params params;
	params.InstanceID = InstanceID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativePhotonInstancedDestructibleMeshComponent.OnClientInitial
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// int                            InstanceIndex                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>                    ImpactFragmentItemIndex        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UCreativePhotonInstancedDestructibleMeshComponent::OnClientInitial(int InstanceIndex, TArray<int> ImpactFragmentItemIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhotonInstancedDestructibleMeshComponent.OnClientInitial");

	UCreativePhotonInstancedDestructibleMeshComponent_OnClientInitial_Params params;
	params.InstanceIndex = InstanceIndex;
	params.ImpactFragmentItemIndex = ImpactFragmentItemIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativePhotonInstancedDestructibleMeshComponent.OnClientDamaged
// (Native, Event, Public, HasOutParms, HasDefaults, BlueprintEvent)
// Parameters:
// int                            InstanceIndex                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>                    ImpactFragmentItemIndex        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FVector                 LocalImpactPoint               (ConstParm, Parm, IsPlainOldData)
// struct FVector                 LocalVelocity                  (ConstParm, Parm, IsPlainOldData)
// int                            HitType                        (Parm, ZeroConstructor, IsPlainOldData)

void UCreativePhotonInstancedDestructibleMeshComponent::OnClientDamaged(int InstanceIndex, TArray<int> ImpactFragmentItemIndex, const struct FVector& LocalImpactPoint, const struct FVector& LocalVelocity, int HitType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhotonInstancedDestructibleMeshComponent.OnClientDamaged");

	UCreativePhotonInstancedDestructibleMeshComponent_OnClientDamaged_Params params;
	params.InstanceIndex = InstanceIndex;
	params.ImpactFragmentItemIndex = ImpactFragmentItemIndex;
	params.LocalImpactPoint = LocalImpactPoint;
	params.LocalVelocity = LocalVelocity;
	params.HitType = HitType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativePhotonInstancedDestructibleMeshComponent.GetUGCInstanceID
// (Final, Native, Public)
// Parameters:
// int                            InstanceIndex                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UCreativePhotonInstancedDestructibleMeshComponent::GetUGCInstanceID(int InstanceIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhotonInstancedDestructibleMeshComponent.GetUGCInstanceID");

	UCreativePhotonInstancedDestructibleMeshComponent_GetUGCInstanceID_Params params;
	params.InstanceIndex = InstanceIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativePhotonInstancedDestructibleMeshComponent.DestroyInstance
// (Final, Native, Public)
// Parameters:
// struct FString                 InstanceID                     (Parm, ZeroConstructor)

void UCreativePhotonInstancedDestructibleMeshComponent::DestroyInstance(const struct FString& InstanceID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhotonInstancedDestructibleMeshComponent.DestroyInstance");

	UCreativePhotonInstancedDestructibleMeshComponent_DestroyInstance_Params params;
	params.InstanceID = InstanceID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativePhotonInstancedDestructibleMeshComponent.CheckFragmentOverlap
// (Final, Native, Public)
// Parameters:
// int                            InstanceIndex                  (Parm, ZeroConstructor, IsPlainOldData)
// int                            FragmentIndex                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativePhotonInstancedDestructibleMeshComponent::CheckFragmentOverlap(int InstanceIndex, int FragmentIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhotonInstancedDestructibleMeshComponent.CheckFragmentOverlap");

	UCreativePhotonInstancedDestructibleMeshComponent_CheckFragmentOverlap_Params params;
	params.InstanceIndex = InstanceIndex;
	params.FragmentIndex = FragmentIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativePhysicsBatchActor.UpdatePhysicsComponentMaterial
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FString                 ComponentID                    (Parm, OutParm, ZeroConstructor)
// struct FString                 MaterialPath                   (Parm, OutParm, ZeroConstructor)

void ACreativePhysicsBatchActor::UpdatePhysicsComponentMaterial(struct FString* ComponentID, struct FString* MaterialPath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhysicsBatchActor.UpdatePhysicsComponentMaterial");

	ACreativePhysicsBatchActor_UpdatePhysicsComponentMaterial_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (ComponentID != nullptr)
		*ComponentID = params.ComponentID;
	if (MaterialPath != nullptr)
		*MaterialPath = params.MaterialPath;
}


// Function Creative.CreativePhysicsBatchActor.UpdatePhysicsComponent
// (Final, Native, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FString                 ComponentID                    (Parm, OutParm, ZeroConstructor)
// struct FTransform              Transform                      (Parm, IsPlainOldData)
// TEnumAsByte<ECollisionEnabled> CollisionEnabled               (Parm, ZeroConstructor, IsPlainOldData)

void ACreativePhysicsBatchActor::UpdatePhysicsComponent(const struct FTransform& Transform, TEnumAsByte<ECollisionEnabled> CollisionEnabled, struct FString* ComponentID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhysicsBatchActor.UpdatePhysicsComponent");

	ACreativePhysicsBatchActor_UpdatePhysicsComponent_Params params;
	params.Transform = Transform;
	params.CollisionEnabled = CollisionEnabled;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (ComponentID != nullptr)
		*ComponentID = params.ComponentID;
}


// Function Creative.CreativePhysicsBatchActor.UnRegisterPhysicsComponent
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FString                 ComponentID                    (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACreativePhysicsBatchActor::UnRegisterPhysicsComponent(struct FString* ComponentID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhysicsBatchActor.UnRegisterPhysicsComponent");

	ACreativePhysicsBatchActor_UnRegisterPhysicsComponent_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (ComponentID != nullptr)
		*ComponentID = params.ComponentID;

	return params.ReturnValue;
}


// Function Creative.CreativePhysicsBatchActor.SetPhysicsComponentEnabled
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FString                 ComponentID                    (Parm, OutParm, ZeroConstructor)
// TEnumAsByte<ECollisionEnabled> CollisionEnabled               (Parm, ZeroConstructor, IsPlainOldData)

void ACreativePhysicsBatchActor::SetPhysicsComponentEnabled(TEnumAsByte<ECollisionEnabled> CollisionEnabled, struct FString* ComponentID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhysicsBatchActor.SetPhysicsComponentEnabled");

	ACreativePhysicsBatchActor_SetPhysicsComponentEnabled_Params params;
	params.CollisionEnabled = CollisionEnabled;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (ComponentID != nullptr)
		*ComponentID = params.ComponentID;
}


// Function Creative.CreativePhysicsBatchActor.RegisterPhysicsComponentByMesh
// (Final, Native, Public, HasDefaults)
// Parameters:
// struct FString                 InstanceID                     (Parm, ZeroConstructor)
// struct FString                 ComponentID                    (Parm, ZeroConstructor)
// struct FTransform              Transform                      (Parm, IsPlainOldData)
// struct FString                 MeshPath                       (Parm, ZeroConstructor)
// struct FName                   CollisionProfileName           (Parm, ZeroConstructor, IsPlainOldData)

void ACreativePhysicsBatchActor::RegisterPhysicsComponentByMesh(const struct FString& InstanceID, const struct FString& ComponentID, const struct FTransform& Transform, const struct FString& MeshPath, const struct FName& CollisionProfileName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhysicsBatchActor.RegisterPhysicsComponentByMesh");

	ACreativePhysicsBatchActor_RegisterPhysicsComponentByMesh_Params params;
	params.InstanceID = InstanceID;
	params.ComponentID = ComponentID;
	params.Transform = Transform;
	params.MeshPath = MeshPath;
	params.CollisionProfileName = CollisionProfileName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativePhysicsBatchActor.OnLoadMeshSuccessByPath
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 Obj                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ComponentID                    (Parm, ZeroConstructor)

void ACreativePhysicsBatchActor::OnLoadMeshSuccessByPath(class UObject* Obj, const struct FString& ComponentID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhysicsBatchActor.OnLoadMeshSuccessByPath");

	ACreativePhysicsBatchActor_OnLoadMeshSuccessByPath_Params params;
	params.Obj = Obj;
	params.ComponentID = ComponentID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativePhysicsBatchActor.OnLoadMeshSuccess
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 Obj                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ComponentID                    (Parm, ZeroConstructor)

void ACreativePhysicsBatchActor::OnLoadMeshSuccess(class UObject* Obj, const struct FString& ComponentID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhysicsBatchActor.OnLoadMeshSuccess");

	ACreativePhysicsBatchActor_OnLoadMeshSuccess_Params params;
	params.Obj = Obj;
	params.ComponentID = ComponentID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativePhysicsBatchActor.IsLoadFinish
// (Final, Native, Public, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACreativePhysicsBatchActor::IsLoadFinish()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhysicsBatchActor.IsLoadFinish");

	ACreativePhysicsBatchActor_IsLoadFinish_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativePhysicsBatchActor.GetRegisterNum
// (Final, Native, Public, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ACreativePhysicsBatchActor::GetRegisterNum()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhysicsBatchActor.GetRegisterNum");

	ACreativePhysicsBatchActor_GetRegisterNum_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativePhysicsBatchActor.GetPhysicsComponent
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FString                 ComponentID                    (Parm, OutParm, ZeroConstructor)
// class UCreativePhysicsComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UCreativePhysicsComponent* ACreativePhysicsBatchActor::GetPhysicsComponent(struct FString* ComponentID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhysicsBatchActor.GetPhysicsComponent");

	ACreativePhysicsBatchActor_GetPhysicsComponent_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (ComponentID != nullptr)
		*ComponentID = params.ComponentID;

	return params.ReturnValue;
}


// Function Creative.CreativePhysicsBatchActor.ClearAllPhysicsComponent
// (Final, Native, Public)

void ACreativePhysicsBatchActor::ClearAllPhysicsComponent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhysicsBatchActor.ClearAllPhysicsComponent");

	ACreativePhysicsBatchActor_ClearAllPhysicsComponent_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativePhysicsComponent.SetIsReplicatedOnly
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ShouldReplicate                (Parm, ZeroConstructor, IsPlainOldData)

void UCreativePhysicsComponent::SetIsReplicatedOnly(bool ShouldReplicate)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhysicsComponent.SetIsReplicatedOnly");

	UCreativePhysicsComponent_SetIsReplicatedOnly_Params params;
	params.ShouldReplicate = ShouldReplicate;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativePhysicsComponent.OnLoadMaterialSuccess
// (Final, Native, Public)
// Parameters:
// class UObject*                 Obj                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Path                           (Parm, ZeroConstructor)

void UCreativePhysicsComponent::OnLoadMaterialSuccess(class UObject* Obj, const struct FString& Path)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhysicsComponent.OnLoadMaterialSuccess");

	UCreativePhysicsComponent_OnLoadMaterialSuccess_Params params;
	params.Obj = Obj;
	params.Path = Path;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativePhysicsManager.UpdatePhysicsObjectCellInfo
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString                 InstanceID                     (Parm, ZeroConstructor)
// struct FString                 GridName                       (Parm, ZeroConstructor)
// struct FIntVector              CellIndex                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UCreativePhysicsManager::UpdatePhysicsObjectCellInfo(const struct FString& InstanceID, const struct FString& GridName, const struct FIntVector& CellIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhysicsManager.UpdatePhysicsObjectCellInfo");

	UCreativePhysicsManager_UpdatePhysicsObjectCellInfo_Params params;
	params.InstanceID = InstanceID;
	params.GridName = GridName;
	params.CellIndex = CellIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativePhysicsManager.SetStreamingEnable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           Enable                         (Parm, ZeroConstructor, IsPlainOldData)

void UCreativePhysicsManager::SetStreamingEnable(bool Enable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhysicsManager.SetStreamingEnable");

	UCreativePhysicsManager_SetStreamingEnable_Params params;
	params.Enable = Enable;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativePhysicsManager.SetPhysicsActorVisible
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString                 GridName                       (Parm, ZeroConstructor)
// struct FIntVector              CellIndex                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           Visible                        (Parm, ZeroConstructor, IsPlainOldData)

void UCreativePhysicsManager::SetPhysicsActorVisible(const struct FString& GridName, const struct FIntVector& CellIndex, bool Visible)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhysicsManager.SetPhysicsActorVisible");

	UCreativePhysicsManager_SetPhysicsActorVisible_Params params;
	params.GridName = GridName;
	params.CellIndex = CellIndex;
	params.Visible = Visible;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativePhysicsManager.RemovePhysicsObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 InstanceID                     (Parm, ZeroConstructor)

void UCreativePhysicsManager::RemovePhysicsObject(const struct FString& InstanceID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhysicsManager.RemovePhysicsObject");

	UCreativePhysicsManager_RemovePhysicsObject_Params params;
	params.InstanceID = InstanceID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativePhysicsManager.PreAddPhysicsObjectCheck
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 InstanceID                     (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativePhysicsManager::PreAddPhysicsObjectCheck(const struct FString& InstanceID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhysicsManager.PreAddPhysicsObjectCheck");

	UCreativePhysicsManager_PreAddPhysicsObjectCheck_Params params;
	params.InstanceID = InstanceID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativePhysicsManager.OnPhysicsBatchActorLoadFinish
// (Event, Public, BlueprintEvent)

void UCreativePhysicsManager::OnPhysicsBatchActorLoadFinish()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhysicsManager.OnPhysicsBatchActorLoadFinish");

	UCreativePhysicsManager_OnPhysicsBatchActorLoadFinish_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativePhysicsManager.IsPhysicsActorVisible
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString                 GridName                       (Parm, ZeroConstructor)
// struct FIntVector              CellIndex                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativePhysicsManager::IsPhysicsActorVisible(const struct FString& GridName, const struct FIntVector& CellIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhysicsManager.IsPhysicsActorVisible");

	UCreativePhysicsManager_IsPhysicsActorVisible_Params params;
	params.GridName = GridName;
	params.CellIndex = CellIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativePhysicsManager.GetPhysicsBatchActorByInstanceID
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 InstanceID                     (Parm, ZeroConstructor)
// class ACreativePhysicsBatchActor* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ACreativePhysicsBatchActor* UCreativePhysicsManager::GetPhysicsBatchActorByInstanceID(const struct FString& InstanceID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhysicsManager.GetPhysicsBatchActorByInstanceID");

	UCreativePhysicsManager_GetPhysicsBatchActorByInstanceID_Params params;
	params.InstanceID = InstanceID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativePhysicsManager.GetPhysicsBatchActor
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString                 GridName                       (Parm, ZeroConstructor)
// struct FIntVector              Index                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class ACreativePhysicsBatchActor* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ACreativePhysicsBatchActor* UCreativePhysicsManager::GetPhysicsBatchActor(const struct FString& GridName, const struct FIntVector& Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhysicsManager.GetPhysicsBatchActor");

	UCreativePhysicsManager_GetPhysicsBatchActor_Params params;
	params.GridName = GridName;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativePhysicsManager.GetGlobalPhysicsBatchActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ACreativePhysicsBatchActor* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ACreativePhysicsBatchActor* UCreativePhysicsManager::GetGlobalPhysicsBatchActor()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhysicsManager.GetGlobalPhysicsBatchActor");

	UCreativePhysicsManager_GetGlobalPhysicsBatchActor_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativePhysicsManager.GetAllPhysicsActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<class ACreativePhysicsBatchActor*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class ACreativePhysicsBatchActor*> UCreativePhysicsManager::GetAllPhysicsActor()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhysicsManager.GetAllPhysicsActor");

	UCreativePhysicsManager_GetAllPhysicsActor_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativePhysicsManager.Get
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContext                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UCreativePhysicsManager* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCreativePhysicsManager* UCreativePhysicsManager::Get(class UObject* WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhysicsManager.Get");

	UCreativePhysicsManager_Get_Params params;
	params.WorldContext = WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativePhysicsManager.ClearAllPhysicsBatchActor
// (Final, Native, Public, BlueprintCallable)

void UCreativePhysicsManager::ClearAllPhysicsBatchActor()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhysicsManager.ClearAllPhysicsBatchActor");

	UCreativePhysicsManager_ClearAllPhysicsBatchActor_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativePhysicsManager.ChangePhysicsObjectIsPrefab
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 InstanceID                     (Parm, ZeroConstructor)
// bool                           bIsPrefab                      (Parm, ZeroConstructor, IsPlainOldData)

void UCreativePhysicsManager::ChangePhysicsObjectIsPrefab(const struct FString& InstanceID, bool bIsPrefab)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhysicsManager.ChangePhysicsObjectIsPrefab");

	UCreativePhysicsManager_ChangePhysicsObjectIsPrefab_Params params;
	params.InstanceID = InstanceID;
	params.bIsPrefab = bIsPrefab;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativePhysicsManager.AddPhysicsObject
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString                 InstanceID                     (Parm, ZeroConstructor)
// struct FString                 GridName                       (Parm, ZeroConstructor)
// struct FIntVector              CellIndex                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UCreativePhysicsManager::AddPhysicsObject(const struct FString& InstanceID, const struct FString& GridName, const struct FIntVector& CellIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePhysicsManager.AddPhysicsObject");

	UCreativePhysicsManager_AddPhysicsObject_Params params;
	params.InstanceID = InstanceID;
	params.GridName = GridName;
	params.CellIndex = CellIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativePlayerAPIObject.SetPlayerDirection
// (Final, Native, Public, HasDefaults)
// Parameters:
// int64_t                        PlayerUUID                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Direction                      (Parm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativePlayerAPIObject::SetPlayerDirection(int64_t PlayerUUID, const struct FVector& Direction)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePlayerAPIObject.SetPlayerDirection");

	UCreativePlayerAPIObject_SetPlayerDirection_Params params;
	params.PlayerUUID = PlayerUUID;
	params.Direction = Direction;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativePlayerAPIObject.GetPlayerTeamIndex
// (Final, Native, Public)
// Parameters:
// int64_t                        PlayerUUID                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UCreativePlayerAPIObject::GetPlayerTeamIndex(int64_t PlayerUUID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePlayerAPIObject.GetPlayerTeamIndex");

	UCreativePlayerAPIObject_GetPlayerTeamIndex_Params params;
	params.PlayerUUID = PlayerUUID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativePlayerAPIObject.GetPlayerTeamIDAndTeamIndexFromCPP
// (Final, Native, Public, HasOutParms)
// Parameters:
// int64_t                        PlayerUUID                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            OutTeamID                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            OutTeamIndex                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCreativePlayerAPIObject::GetPlayerTeamIDAndTeamIndexFromCPP(int64_t PlayerUUID, int* OutTeamID, int* OutTeamIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePlayerAPIObject.GetPlayerTeamIDAndTeamIndexFromCPP");

	UCreativePlayerAPIObject_GetPlayerTeamIDAndTeamIndexFromCPP_Params params;
	params.PlayerUUID = PlayerUUID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutTeamID != nullptr)
		*OutTeamID = params.OutTeamID;
	if (OutTeamIndex != nullptr)
		*OutTeamIndex = params.OutTeamIndex;
}


// Function Creative.CreativePlayerAPIObject.GetPlayerTeamID
// (Final, Native, Public)
// Parameters:
// int64_t                        PlayerUUID                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UCreativePlayerAPIObject::GetPlayerTeamID(int64_t PlayerUUID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePlayerAPIObject.GetPlayerTeamID");

	UCreativePlayerAPIObject_GetPlayerTeamID_Params params;
	params.PlayerUUID = PlayerUUID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativePlayerAPIObject.GetPlayerMaxHealth
// (Final, Native, Public)
// Parameters:
// int64_t                        PlayerUUID                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UCreativePlayerAPIObject::GetPlayerMaxHealth(int64_t PlayerUUID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePlayerAPIObject.GetPlayerMaxHealth");

	UCreativePlayerAPIObject_GetPlayerMaxHealth_Params params;
	params.PlayerUUID = PlayerUUID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativePlayerAPIObject.GetPlayerLocation
// (Final, Native, Public, HasDefaults)
// Parameters:
// int64_t                        PlayerUUID                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UCreativePlayerAPIObject::GetPlayerLocation(int64_t PlayerUUID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePlayerAPIObject.GetPlayerLocation");

	UCreativePlayerAPIObject_GetPlayerLocation_Params params;
	params.PlayerUUID = PlayerUUID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativePlayerAPIObject.GetPlayerHealth
// (Final, Native, Public)
// Parameters:
// int64_t                        PlayerUUID                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UCreativePlayerAPIObject::GetPlayerHealth(int64_t PlayerUUID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePlayerAPIObject.GetPlayerHealth");

	UCreativePlayerAPIObject_GetPlayerHealth_Params params;
	params.PlayerUUID = PlayerUUID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativePlayerAPIObject.GetPlayerDirection
// (Final, Native, Public, HasDefaults)
// Parameters:
// int64_t                        PlayerUUID                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UCreativePlayerAPIObject::GetPlayerDirection(int64_t PlayerUUID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePlayerAPIObject.GetPlayerDirection");

	UCreativePlayerAPIObject_GetPlayerDirection_Params params;
	params.PlayerUUID = PlayerUUID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativePlayerAPIObject.AddPlayerHealth
// (Final, Native, Public)
// Parameters:
// int64_t                        PlayerUUID                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          AddHealth                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UCreativePlayerAPIObject::AddPlayerHealth(int64_t PlayerUUID, float AddHealth)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePlayerAPIObject.AddPlayerHealth");

	UCreativePlayerAPIObject_AddPlayerHealth_Params params;
	params.PlayerUUID = PlayerUUID;
	params.AddHealth = AddHealth;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModePlayerState.ServerRemoveInstance
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// struct FString                 InstanceID                     (Parm, ZeroConstructor)

void ACreativeModePlayerState::ServerRemoveInstance(const struct FString& InstanceID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModePlayerState.ServerRemoveInstance");

	ACreativeModePlayerState_ServerRemoveInstance_Params params;
	params.InstanceID = InstanceID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModePlayerState.ServerReceiveModifyContent
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// TArray<unsigned char>          Content                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            idx                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// TArray<unsigned char>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<unsigned char> ACreativeModePlayerState::ServerReceiveModifyContent(TArray<unsigned char> Content, int idx)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModePlayerState.ServerReceiveModifyContent");

	ACreativeModePlayerState_ServerReceiveModifyContent_Params params;
	params.Content = Content;
	params.idx = idx;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModePlayerState.ServerAddInstanceAdvance
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// struct FString                 InstanceID                     (Parm, ZeroConstructor)
// TArray<unsigned char>          Content                        (ConstParm, Parm, ZeroConstructor, ReferenceParm)
// int                            idx                            (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void ACreativeModePlayerState::ServerAddInstanceAdvance(const struct FString& InstanceID, TArray<unsigned char> Content, int idx)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModePlayerState.ServerAddInstanceAdvance");

	ACreativeModePlayerState_ServerAddInstanceAdvance_Params params;
	params.InstanceID = InstanceID;
	params.Content = Content;
	params.idx = idx;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModePlayerState.ServerAddInstance
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// struct FString                 InstanceID                     (Parm, ZeroConstructor)
// TArray<unsigned char>          Content                        (ConstParm, Parm, ZeroConstructor, ReferenceParm)

void ACreativeModePlayerState::ServerAddInstance(const struct FString& InstanceID, TArray<unsigned char> Content)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModePlayerState.ServerAddInstance");

	ACreativeModePlayerState_ServerAddInstance_Params params;
	params.InstanceID = InstanceID;
	params.Content = Content;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativePoolInterface.SetRecycleTime
// (Native, Public)
// Parameters:
// float                          RecycleTime                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UCreativePoolInterface::SetRecycleTime(float RecycleTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePoolInterface.SetRecycleTime");

	UCreativePoolInterface_SetRecycleTime_Params params;
	params.RecycleTime = RecycleTime;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativePoolInterface.SetIsRecycled
// (Native, Public)
// Parameters:
// bool                           IsRecycled                     (Parm, ZeroConstructor, IsPlainOldData)

void UCreativePoolInterface::SetIsRecycled(bool IsRecycled)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePoolInterface.SetIsRecycled");

	UCreativePoolInterface_SetIsRecycled_Params params;
	params.IsRecycled = IsRecycled;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativePoolInterface.ReceiveOnReturnToPool
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UObject*                 NewOuter                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            RecycledSeq                    (Parm, ZeroConstructor, IsPlainOldData)

void UCreativePoolInterface::ReceiveOnReturnToPool(class UObject* NewOuter, int RecycledSeq)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePoolInterface.ReceiveOnReturnToPool");

	UCreativePoolInterface_ReceiveOnReturnToPool_Params params;
	params.NewOuter = NewOuter;
	params.RecycledSeq = RecycledSeq;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativePoolInterface.ReceiveOnPickFromPool
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UObject*                 NewOuter                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 InName                         (Parm, ZeroConstructor)

void UCreativePoolInterface::ReceiveOnPickFromPool(class UObject* NewOuter, const struct FString& InName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePoolInterface.ReceiveOnPickFromPool");

	UCreativePoolInterface_ReceiveOnPickFromPool_Params params;
	params.NewOuter = NewOuter;
	params.InName = InName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativePoolInterface.OnReturnToPool
// (Native, Public)
// Parameters:
// class UObject*                 NewOuter                       (Parm, ZeroConstructor, IsPlainOldData)
// uint32_t                       RecycledSeq                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativePoolInterface::OnReturnToPool(class UObject* NewOuter, uint32_t RecycledSeq)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePoolInterface.OnReturnToPool");

	UCreativePoolInterface_OnReturnToPool_Params params;
	params.NewOuter = NewOuter;
	params.RecycledSeq = RecycledSeq;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativePoolInterface.OnPickFromPool
// (Native, Public)
// Parameters:
// class UObject*                 NewOuter                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 InName                         (Parm, ZeroConstructor)

void UCreativePoolInterface::OnPickFromPool(class UObject* NewOuter, const struct FString& InName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePoolInterface.OnPickFromPool");

	UCreativePoolInterface_OnPickFromPool_Params params;
	params.NewOuter = NewOuter;
	params.InName = InName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativePoolInterface.GetUnusedComponentName
// (Native, Public, HasOutParms)
// Parameters:
// class UObject*                 InOuter                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 NamePrefix                     (Parm, OutParm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UCreativePoolInterface::GetUnusedComponentName(class UObject* InOuter, struct FString* NamePrefix)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePoolInterface.GetUnusedComponentName");

	UCreativePoolInterface_GetUnusedComponentName_Params params;
	params.InOuter = InOuter;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (NamePrefix != nullptr)
		*NamePrefix = params.NamePrefix;

	return params.ReturnValue;
}


// Function Creative.CreativePoolInterface.GetRecycleTime
// (Native, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UCreativePoolInterface::GetRecycleTime()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePoolInterface.GetRecycleTime");

	UCreativePoolInterface_GetRecycleTime_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativePoolInterface.CheckIsRecycled
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativePoolInterface::CheckIsRecycled()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePoolInterface.CheckIsRecycled");

	UCreativePoolInterface_CheckIsRecycled_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativePoolManager.SetPoolManagerEnable
// (Final, Native, Public)
// Parameters:
// bool                           bPoolManagerEnable             (Parm, ZeroConstructor, IsPlainOldData)

void UCreativePoolManager::SetPoolManagerEnable(bool bPoolManagerEnable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePoolManager.SetPoolManagerEnable");

	UCreativePoolManager_SetPoolManagerEnable_Params params;
	params.bPoolManagerEnable = bPoolManagerEnable;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativePoolManager.ReturnObject
// (Final, Native, Public)
// Parameters:
// int                            PoolId                         (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Obj                            (Parm, ZeroConstructor, IsPlainOldData)

void UCreativePoolManager::ReturnObject(int PoolId, class UObject* Obj)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePoolManager.ReturnObject");

	UCreativePoolManager_ReturnObject_Params params;
	params.PoolId = PoolId;
	params.Obj = Obj;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativePoolManager.OnReceivePickObjectHandle
// (Event, Public, BlueprintEvent)
// Parameters:
// int                            ID                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 InObj                          (Parm, ZeroConstructor, IsPlainOldData)

void UCreativePoolManager::OnReceivePickObjectHandle(int ID, class UObject* InObj)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePoolManager.OnReceivePickObjectHandle");

	UCreativePoolManager_OnReceivePickObjectHandle_Params params;
	params.ID = ID;
	params.InObj = InObj;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativePoolManager.OnReceiveObjectReturnHandle
// (Event, Public, BlueprintEvent)
// Parameters:
// int                            ID                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 InObj                          (Parm, ZeroConstructor, IsPlainOldData)

void UCreativePoolManager::OnReceiveObjectReturnHandle(int ID, class UObject* InObj)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePoolManager.OnReceiveObjectReturnHandle");

	UCreativePoolManager_OnReceiveObjectReturnHandle_Params params;
	params.ID = ID;
	params.InObj = InObj;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativePoolManager.OnReceiveDestroyHandle
// (Event, Public, BlueprintEvent)
// Parameters:
// int                            ID                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 InObj                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativePoolManager::OnReceiveDestroyHandle(int ID, class UObject* InObj)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePoolManager.OnReceiveDestroyHandle");

	UCreativePoolManager_OnReceiveDestroyHandle_Params params;
	params.ID = ID;
	params.InObj = InObj;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativePoolManager.OnReceiveCreateHandle
// (Event, Public, BlueprintEvent)
// Parameters:
// int                            ID                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UCreativePoolManager::OnReceiveCreateHandle(int ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePoolManager.OnReceiveCreateHandle");

	UCreativePoolManager_OnReceiveCreateHandle_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativePoolManager.InitPool
// (Final, Native, Protected, HasOutParms)
// Parameters:
// int                            PoolId                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FCreativeObjectPoolClassConfig PoolConfig                     (Parm, OutParm)
// bool                           bPoolEnable                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativePoolManager::InitPool(int PoolId, bool bPoolEnable, struct FCreativeObjectPoolClassConfig* PoolConfig)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePoolManager.InitPool");

	UCreativePoolManager_InitPool_Params params;
	params.PoolId = PoolId;
	params.bPoolEnable = bPoolEnable;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (PoolConfig != nullptr)
		*PoolConfig = params.PoolConfig;

	return params.ReturnValue;
}


// Function Creative.CreativePoolManager.GetUnusedComponentName
// (Final, Native, Public, HasOutParms)
// Parameters:
// class UObject*                 InOuter                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 NamePrefix                     (Parm, OutParm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UCreativePoolManager::GetUnusedComponentName(class UObject* InOuter, struct FString* NamePrefix)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePoolManager.GetUnusedComponentName");

	UCreativePoolManager_GetUnusedComponentName_Params params;
	params.InOuter = InOuter;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (NamePrefix != nullptr)
		*NamePrefix = params.NamePrefix;

	return params.ReturnValue;
}


// Function Creative.CreativePoolManager.GetObject
// (Final, Native, Public)
// Parameters:
// int                            PoolId                         (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 NewOuter                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 InName                         (Parm, ZeroConstructor)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UCreativePoolManager::GetObject(int PoolId, class UObject* NewOuter, const struct FString& InName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePoolManager.GetObject");

	UCreativePoolManager_GetObject_Params params;
	params.PoolId = PoolId;
	params.NewOuter = NewOuter;
	params.InName = InName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativePoolManager.Get
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContext                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UCreativePoolManager*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCreativePoolManager* UCreativePoolManager::Get(class UObject* WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePoolManager.Get");

	UCreativePoolManager_Get_Params params;
	params.WorldContext = WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativePoolManager.ClearPoolObject
// (Final, Native, Public)

void UCreativePoolManager::ClearPoolObject()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativePoolManager.ClearPoolObject");

	UCreativePoolManager_ClearPoolObject_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeRuntimePlayerBattleDataObject.SetTeamGameOutcomeCondition
// (Final, Native, Protected, HasOutParms)
// Parameters:
// int                            TeamID                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FRuntimeTeamGameOutcomeConditionInfo TeamGameOutcomeCondition       (Parm, OutParm)
// bool                           bPropagateToChildren           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACreativeRuntimePlayerBattleDataObject::SetTeamGameOutcomeCondition(int TeamID, bool bPropagateToChildren, struct FRuntimeTeamGameOutcomeConditionInfo* TeamGameOutcomeCondition)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeRuntimePlayerBattleDataObject.SetTeamGameOutcomeCondition");

	ACreativeRuntimePlayerBattleDataObject_SetTeamGameOutcomeCondition_Params params;
	params.TeamID = TeamID;
	params.bPropagateToChildren = bPropagateToChildren;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TeamGameOutcomeCondition != nullptr)
		*TeamGameOutcomeCondition = params.TeamGameOutcomeCondition;

	return params.ReturnValue;
}


// Function Creative.CreativeRuntimePlayerBattleDataObject.SetPlayerBattleData
// (Final, Native, Protected, HasOutParms)
// Parameters:
// uint64_t                       UID                            (Parm, ZeroConstructor, IsPlainOldData)
// uint32_t                       PlayerKey                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FRuntimePlayerBattleDataInfo PlayerBattleData               (Parm, OutParm)
// bool                           bPropagateToChildren           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACreativeRuntimePlayerBattleDataObject::SetPlayerBattleData(uint64_t UID, uint32_t PlayerKey, bool bPropagateToChildren, struct FRuntimePlayerBattleDataInfo* PlayerBattleData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeRuntimePlayerBattleDataObject.SetPlayerBattleData");

	ACreativeRuntimePlayerBattleDataObject_SetPlayerBattleData_Params params;
	params.UID = UID;
	params.PlayerKey = PlayerKey;
	params.bPropagateToChildren = bPropagateToChildren;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (PlayerBattleData != nullptr)
		*PlayerBattleData = params.PlayerBattleData;

	return params.ReturnValue;
}


// Function Creative.CreativeRuntimePlayerBattleDataObject.ResetCurRoundPlayerBattleDataList
// (Final, Native, Protected)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACreativeRuntimePlayerBattleDataObject::ResetCurRoundPlayerBattleDataList()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeRuntimePlayerBattleDataObject.ResetCurRoundPlayerBattleDataList");

	ACreativeRuntimePlayerBattleDataObject_ResetCurRoundPlayerBattleDataList_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeRuntimePlayerBattleDataObject.OnRepTeamGameOutcomeConditionInfo
// (Final, Native, Public)
// Parameters:
// int                            TeamID                         (Parm, ZeroConstructor, IsPlainOldData)

void ACreativeRuntimePlayerBattleDataObject::OnRepTeamGameOutcomeConditionInfo(int TeamID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeRuntimePlayerBattleDataObject.OnRepTeamGameOutcomeConditionInfo");

	ACreativeRuntimePlayerBattleDataObject_OnRepTeamGameOutcomeConditionInfo_Params params;
	params.TeamID = TeamID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeRuntimePlayerBattleDataObject.OnRepCurRoundPlayerBattleDataInfo
// (Final, Native, Public)
// Parameters:
// uint64_t                       PlayerUID                      (Parm, ZeroConstructor, IsPlainOldData)
// uint64_t                       PlayerKey                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            ChangeTeamID                   (Parm, ZeroConstructor, IsPlainOldData)

void ACreativeRuntimePlayerBattleDataObject::OnRepCurRoundPlayerBattleDataInfo(uint64_t PlayerUID, uint64_t PlayerKey, int ChangeTeamID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeRuntimePlayerBattleDataObject.OnRepCurRoundPlayerBattleDataInfo");

	ACreativeRuntimePlayerBattleDataObject_OnRepCurRoundPlayerBattleDataInfo_Params params;
	params.PlayerUID = PlayerUID;
	params.PlayerKey = PlayerKey;
	params.ChangeTeamID = ChangeTeamID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeRuntimePlayerBattleDataObject.GetTeamGameOutcomeCondition
// (Final, Native, Protected)
// Parameters:
// int                            TeamID                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FRuntimeTeamGameOutcomeConditionInfo ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRuntimeTeamGameOutcomeConditionInfo ACreativeRuntimePlayerBattleDataObject::GetTeamGameOutcomeCondition(int TeamID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeRuntimePlayerBattleDataObject.GetTeamGameOutcomeCondition");

	ACreativeRuntimePlayerBattleDataObject_GetTeamGameOutcomeCondition_Params params;
	params.TeamID = TeamID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeRuntimePlayerBattleDataObject.GetCurRoundPlayerBattleData
// (Final, Native, Protected)
// Parameters:
// uint64_t                       PlayerUID                      (Parm, ZeroConstructor, IsPlainOldData)
// uint32_t                       PlayerKey                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FRuntimePlayerBattleDataInfo ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRuntimePlayerBattleDataInfo ACreativeRuntimePlayerBattleDataObject::GetCurRoundPlayerBattleData(uint64_t PlayerUID, uint32_t PlayerKey)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeRuntimePlayerBattleDataObject.GetCurRoundPlayerBattleData");

	ACreativeRuntimePlayerBattleDataObject_GetCurRoundPlayerBattleData_Params params;
	params.PlayerUID = PlayerUID;
	params.PlayerKey = PlayerKey;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeRuntimePlayerBattleDataObject.GetCurRoundAllPlayerBattleData
// (Final, Native, Protected)
// Parameters:
// TArray<struct FRuntimePlayerBattleDataInfo> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FRuntimePlayerBattleDataInfo> ACreativeRuntimePlayerBattleDataObject::GetCurRoundAllPlayerBattleData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeRuntimePlayerBattleDataObject.GetCurRoundAllPlayerBattleData");

	ACreativeRuntimePlayerBattleDataObject_GetCurRoundAllPlayerBattleData_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeRuntimePlayerBattleDataObject.GetCacheRoundPlayerBattleData
// (Final, Native, Protected)
// Parameters:
// int                            RoundIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// uint64_t                       PlayerUID                      (Parm, ZeroConstructor, IsPlainOldData)
// uint32_t                       PlayerKey                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FRuntimePlayerBattleDataInfo ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRuntimePlayerBattleDataInfo ACreativeRuntimePlayerBattleDataObject::GetCacheRoundPlayerBattleData(int RoundIndex, uint64_t PlayerUID, uint32_t PlayerKey)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeRuntimePlayerBattleDataObject.GetCacheRoundPlayerBattleData");

	ACreativeRuntimePlayerBattleDataObject_GetCacheRoundPlayerBattleData_Params params;
	params.RoundIndex = RoundIndex;
	params.PlayerUID = PlayerUID;
	params.PlayerKey = PlayerKey;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeRuntimePlayerBattleDataObject.GetCacheRoundBattleData
// (Final, Native, Protected)
// Parameters:
// int                            RoundIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FRuntimeCacheRoundBattleDataInfo ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRuntimeCacheRoundBattleDataInfo ACreativeRuntimePlayerBattleDataObject::GetCacheRoundBattleData(int RoundIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeRuntimePlayerBattleDataObject.GetCacheRoundBattleData");

	ACreativeRuntimePlayerBattleDataObject_GetCacheRoundBattleData_Params params;
	params.RoundIndex = RoundIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeRuntimePlayerBattleDataObject.GetAllRoundPlayerBattleData
// (Final, Native, Protected)
// Parameters:
// uint64_t                       PlayerUID                      (Parm, ZeroConstructor, IsPlainOldData)
// uint32_t                       PlayerKey                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FRuntimePlayerBattleDataInfo ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRuntimePlayerBattleDataInfo ACreativeRuntimePlayerBattleDataObject::GetAllRoundPlayerBattleData(uint64_t PlayerUID, uint32_t PlayerKey)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeRuntimePlayerBattleDataObject.GetAllRoundPlayerBattleData");

	ACreativeRuntimePlayerBattleDataObject_GetAllRoundPlayerBattleData_Params params;
	params.PlayerUID = PlayerUID;
	params.PlayerKey = PlayerKey;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeRuntimePlayerBattleDataObject.CacheCurRoundBattleData
// (Final, Native, Protected)
// Parameters:
// int                            RoundIndex                     (Parm, ZeroConstructor, IsPlainOldData)

void ACreativeRuntimePlayerBattleDataObject::CacheCurRoundBattleData(int RoundIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeRuntimePlayerBattleDataObject.CacheCurRoundBattleData");

	ACreativeRuntimePlayerBattleDataObject_CacheCurRoundBattleData_Params params;
	params.RoundIndex = RoundIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeSceneQueryManager.RemoveReplicateObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 InstanceID                     (Parm, ZeroConstructor)
// class UObject*                 Object                         (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeSceneQueryManager::RemoveReplicateObject(const struct FString& InstanceID, class UObject* Object)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeSceneQueryManager.RemoveReplicateObject");

	UCreativeSceneQueryManager_RemoveReplicateObject_Params params;
	params.InstanceID = InstanceID;
	params.Object = Object;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeSceneQueryManager.RemoveReplicateData
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 InstanceID                     (Parm, ZeroConstructor)

void UCreativeSceneQueryManager::RemoveReplicateData(const struct FString& InstanceID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeSceneQueryManager.RemoveReplicateData");

	UCreativeSceneQueryManager_RemoveReplicateData_Params params;
	params.InstanceID = InstanceID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeSceneQueryManager.OnReceivePreReplicateDataRemove
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 ID                             (Parm, ZeroConstructor)

void UCreativeSceneQueryManager::OnReceivePreReplicateDataRemove(const struct FString& ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeSceneQueryManager.OnReceivePreReplicateDataRemove");

	UCreativeSceneQueryManager_OnReceivePreReplicateDataRemove_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeSceneQueryManager.OnReceivePostReplicateDataChange
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FString                 ID                             (Parm, ZeroConstructor)
// TArray<class UObject*>         Objects                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UCreativeSceneQueryManager::OnReceivePostReplicateDataChange(const struct FString& ID, TArray<class UObject*> Objects)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeSceneQueryManager.OnReceivePostReplicateDataChange");

	UCreativeSceneQueryManager_OnReceivePostReplicateDataChange_Params params;
	params.ID = ID;
	params.Objects = Objects;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeSceneQueryManager.OnReceivePostReplicateDataAdd
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FString                 ID                             (Parm, ZeroConstructor)
// TArray<class UObject*>         Objects                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UCreativeSceneQueryManager::OnReceivePostReplicateDataAdd(const struct FString& ID, TArray<class UObject*> Objects)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeSceneQueryManager.OnReceivePostReplicateDataAdd");

	UCreativeSceneQueryManager_OnReceivePostReplicateDataAdd_Params params;
	params.ID = ID;
	params.Objects = Objects;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeSceneQueryManager.GetReplicatedObjects
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 InstanceID                     (Parm, ZeroConstructor)
// TArray<class UObject*>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UObject*> UCreativeSceneQueryManager::GetReplicatedObjects(const struct FString& InstanceID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeSceneQueryManager.GetReplicatedObjects");

	UCreativeSceneQueryManager_GetReplicatedObjects_Params params;
	params.InstanceID = InstanceID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeSceneQueryManager.Get
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContext                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UCreativeSceneQueryManager* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCreativeSceneQueryManager* UCreativeSceneQueryManager::Get(class UObject* WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeSceneQueryManager.Get");

	UCreativeSceneQueryManager_Get_Params params;
	params.WorldContext = WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeSceneQueryManager.AddReplicateObjectPostDeferred
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString                 InstanceID                     (Parm, ZeroConstructor)
// struct FTransform              SpawnTransform                 (Parm, IsPlainOldData)
// class UObject*                 ReplicatedObject               (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeSceneQueryManager::AddReplicateObjectPostDeferred(const struct FString& InstanceID, const struct FTransform& SpawnTransform, class UObject* ReplicatedObject)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeSceneQueryManager.AddReplicateObjectPostDeferred");

	UCreativeSceneQueryManager_AddReplicateObjectPostDeferred_Params params;
	params.InstanceID = InstanceID;
	params.SpawnTransform = SpawnTransform;
	params.ReplicatedObject = ReplicatedObject;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeSceneQueryManager.AddReplicateObjectDeferred
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString                 InstanceID                     (Parm, ZeroConstructor)
// class UClass*                  ObjectClass                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Name                           (Parm, ZeroConstructor)
// struct FTransform              SpawnTransform                 (Parm, IsPlainOldData)
// ESpawnActorCollisionHandlingMethod CollisionHandlingOverride      (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UCreativeSceneQueryManager::AddReplicateObjectDeferred(const struct FString& InstanceID, class UClass* ObjectClass, const struct FString& Name, const struct FTransform& SpawnTransform, ESpawnActorCollisionHandlingMethod CollisionHandlingOverride)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeSceneQueryManager.AddReplicateObjectDeferred");

	UCreativeSceneQueryManager_AddReplicateObjectDeferred_Params params;
	params.InstanceID = InstanceID;
	params.ObjectClass = ObjectClass;
	params.Name = Name;
	params.SpawnTransform = SpawnTransform;
	params.CollisionHandlingOverride = CollisionHandlingOverride;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeSceneQueryManager.AddReplicateObject
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString                 InstanceID                     (Parm, ZeroConstructor)
// class UClass*                  ObjectClass                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Name                           (Parm, ZeroConstructor)
// struct FTransform              SpawnTransform                 (Parm, IsPlainOldData)
// ESpawnActorCollisionHandlingMethod CollisionHandlingOverride      (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UCreativeSceneQueryManager::AddReplicateObject(const struct FString& InstanceID, class UClass* ObjectClass, const struct FString& Name, const struct FTransform& SpawnTransform, ESpawnActorCollisionHandlingMethod CollisionHandlingOverride)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeSceneQueryManager.AddReplicateObject");

	UCreativeSceneQueryManager_AddReplicateObject_Params params;
	params.InstanceID = InstanceID;
	params.ObjectClass = ObjectClass;
	params.Name = Name;
	params.SpawnTransform = SpawnTransform;
	params.CollisionHandlingOverride = CollisionHandlingOverride;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeScreenCaptureWidget.OnPanelInitialized
// (Native, Event, Public, BlueprintEvent)

void UCreativeScreenCaptureWidget::OnPanelInitialized()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeScreenCaptureWidget.OnPanelInitialized");

	UCreativeScreenCaptureWidget_OnPanelInitialized_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeModeSoftComponentManager.Get
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContext                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UCreativeModeSoftComponentManager* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCreativeModeSoftComponentManager* UCreativeModeSoftComponentManager::Get(class UObject* WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeSoftComponentManager.Get");

	UCreativeModeSoftComponentManager_Get_Params params;
	params.WorldContext = WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeModeSoftComponentManager.ClearAllLoading
// (Final, Native, Public)

void UCreativeModeSoftComponentManager::ClearAllLoading()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeModeSoftComponentManager.ClearAllLoading");

	UCreativeModeSoftComponentManager_ClearAllLoading_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.SoftStaticMeshComponent.SetSoftStaticMeshAsync
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 NewMeshPath                    (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USoftStaticMeshComponent::SetSoftStaticMeshAsync(struct FString* NewMeshPath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.SoftStaticMeshComponent.SetSoftStaticMeshAsync");

	USoftStaticMeshComponent_SetSoftStaticMeshAsync_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (NewMeshPath != nullptr)
		*NewMeshPath = params.NewMeshPath;

	return params.ReturnValue;
}


// Function Creative.SoftStaticMeshComponent.SetSoftStaticMesh
// (Native, Public, BlueprintCallable)
// Parameters:
// class UStaticMesh*             NewMesh                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSetStaticMesh                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USoftStaticMeshComponent::SetSoftStaticMesh(class UStaticMesh* NewMesh, bool bSetStaticMesh)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.SoftStaticMeshComponent.SetSoftStaticMesh");

	USoftStaticMeshComponent_SetSoftStaticMesh_Params params;
	params.NewMesh = NewMesh;
	params.bSetStaticMesh = bSetStaticMesh;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.SoftStaticMeshComponent.SetComponentOnlyRender
// (Final, Native, Public)
// Parameters:
// bool                           bOnlyRender                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void USoftStaticMeshComponent::SetComponentOnlyRender(bool bOnlyRender)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.SoftStaticMeshComponent.SetComponentOnlyRender");

	USoftStaticMeshComponent_SetComponentOnlyRender_Params params;
	params.bOnlyRender = bOnlyRender;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.SoftStaticMeshComponent.OnClientAsyncLoaded
// (Final, Native, Public, HasDefaults)
// Parameters:
// struct FSoftObjectPath         SoftObjectPath                 (Parm)

void USoftStaticMeshComponent::OnClientAsyncLoaded(const struct FSoftObjectPath& SoftObjectPath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.SoftStaticMeshComponent.OnClientAsyncLoaded");

	USoftStaticMeshComponent_OnClientAsyncLoaded_Params params;
	params.SoftObjectPath = SoftObjectPath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.SoftStaticMeshComponent.LoadSoftStaticMeshImmediately
// (Final, Native, Public)

void USoftStaticMeshComponent::LoadSoftStaticMeshImmediately()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.SoftStaticMeshComponent.LoadSoftStaticMeshImmediately");

	USoftStaticMeshComponent_LoadSoftStaticMeshImmediately_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeSoftStaticMeshComponent.OnReturnToPool
// (Native, Public)
// Parameters:
// class UObject*                 NewOuter                       (Parm, ZeroConstructor, IsPlainOldData)
// uint32_t                       RecycledSeq                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeSoftStaticMeshComponent::OnReturnToPool(class UObject* NewOuter, uint32_t RecycledSeq)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeSoftStaticMeshComponent.OnReturnToPool");

	UCreativeSoftStaticMeshComponent_OnReturnToPool_Params params;
	params.NewOuter = NewOuter;
	params.RecycledSeq = RecycledSeq;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeSoftStaticMeshComponent.OnPickFromPool
// (Native, Public)
// Parameters:
// class UObject*                 NewOuter                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 InName                         (Parm, ZeroConstructor)

void UCreativeSoftStaticMeshComponent::OnPickFromPool(class UObject* NewOuter, const struct FString& InName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeSoftStaticMeshComponent.OnPickFromPool");

	UCreativeSoftStaticMeshComponent_OnPickFromPool_Params params;
	params.NewOuter = NewOuter;
	params.InName = InName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeSpawnManager.SpawnTower
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// int                            ConfigId                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              Transform                      (Parm, IsPlainOldData)
// int                            TeamID                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            Campid                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            ParamsID                       (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UCreativeSpawnManager::SpawnTower(int ConfigId, const struct FTransform& Transform, int TeamID, int Campid, int ParamsID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeSpawnManager.SpawnTower");

	UCreativeSpawnManager_SpawnTower_Params params;
	params.ConfigId = ConfigId;
	params.Transform = Transform;
	params.TeamID = TeamID;
	params.Campid = Campid;
	params.ParamsID = ParamsID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeSpawnManager.SpawnHumanBot
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// int                            ConfigId                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              Transform                      (Parm, IsPlainOldData)
// int                            TeamID                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            Campid                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            ParamsID                       (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UCreativeSpawnManager::SpawnHumanBot(int ConfigId, const struct FTransform& Transform, int TeamID, int Campid, int ParamsID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeSpawnManager.SpawnHumanBot");

	UCreativeSpawnManager_SpawnHumanBot_Params params;
	params.ConfigId = ConfigId;
	params.Transform = Transform;
	params.TeamID = TeamID;
	params.Campid = Campid;
	params.ParamsID = ParamsID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeSpawnManager.SpawnAIPlayer
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// int                            ConfigId                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              Transform                      (Parm, IsPlainOldData)
// int                            TeamID                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            Campid                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            ParamsID                       (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UCreativeSpawnManager::SpawnAIPlayer(int ConfigId, const struct FTransform& Transform, int TeamID, int Campid, int ParamsID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeSpawnManager.SpawnAIPlayer");

	UCreativeSpawnManager_SpawnAIPlayer_Params params;
	params.ConfigId = ConfigId;
	params.Transform = Transform;
	params.TeamID = TeamID;
	params.Campid = Campid;
	params.ParamsID = ParamsID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeSpawnManager.OnUnitSpawned
// (Final, Native, Public)
// Parameters:
// class AActor*                  NewUnit                        (Parm, ZeroConstructor, IsPlainOldData)
// ESpecType                      SpecType                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UCreativeSpawnManager::OnUnitSpawned(class AActor* NewUnit, ESpecType SpecType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeSpawnManager.OnUnitSpawned");

	UCreativeSpawnManager_OnUnitSpawned_Params params;
	params.NewUnit = NewUnit;
	params.SpecType = SpecType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeSpawnManager.OnOwnedTowerDead
// (Final, Native, Public, HasOutParms, HasDefaults)
// Parameters:
// class ASTExtraBaseCharacter*   DeadCharacter                  (Parm, ZeroConstructor, IsPlainOldData)
// class AController*             Killer                         (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              KillingHitInfo                 (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 KillingHitImpulseDir           (Parm, IsPlainOldData)
// class UClass*                  KillingHitDamageType           (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeSpawnManager::OnOwnedTowerDead(class ASTExtraBaseCharacter* DeadCharacter, class AController* Killer, class AActor* DamageCauser, const struct FHitResult& KillingHitInfo, const struct FVector& KillingHitImpulseDir, class UClass* KillingHitDamageType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeSpawnManager.OnOwnedTowerDead");

	UCreativeSpawnManager_OnOwnedTowerDead_Params params;
	params.DeadCharacter = DeadCharacter;
	params.Killer = Killer;
	params.DamageCauser = DamageCauser;
	params.KillingHitInfo = KillingHitInfo;
	params.KillingHitImpulseDir = KillingHitImpulseDir;
	params.KillingHitDamageType = KillingHitDamageType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeSpawnManager.OnOwnedFakePlayerDead
// (Final, Native, Public, HasOutParms, HasDefaults)
// Parameters:
// class ASTExtraBaseCharacter*   DeadCharacter                  (Parm, ZeroConstructor, IsPlainOldData)
// class AController*             Killer                         (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              KillingHitInfo                 (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 KillingHitImpulseDir           (Parm, IsPlainOldData)
// class UClass*                  KillingHitDamageType           (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeSpawnManager::OnOwnedFakePlayerDead(class ASTExtraBaseCharacter* DeadCharacter, class AController* Killer, class AActor* DamageCauser, const struct FHitResult& KillingHitInfo, const struct FVector& KillingHitImpulseDir, class UClass* KillingHitDamageType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeSpawnManager.OnOwnedFakePlayerDead");

	UCreativeSpawnManager_OnOwnedFakePlayerDead_Params params;
	params.DeadCharacter = DeadCharacter;
	params.Killer = Killer;
	params.DamageCauser = DamageCauser;
	params.KillingHitInfo = KillingHitInfo;
	params.KillingHitImpulseDir = KillingHitImpulseDir;
	params.KillingHitDamageType = KillingHitDamageType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeSpawnManager.OnOwnedAIPlayerDead
// (Final, Native, Public, HasOutParms, HasDefaults)
// Parameters:
// class ASTExtraBaseCharacter*   DeadCharacter                  (Parm, ZeroConstructor, IsPlainOldData)
// class AController*             Killer                         (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              KillingHitInfo                 (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 KillingHitImpulseDir           (Parm, IsPlainOldData)
// class UClass*                  KillingHitDamageType           (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeSpawnManager::OnOwnedAIPlayerDead(class ASTExtraBaseCharacter* DeadCharacter, class AController* Killer, class AActor* DamageCauser, const struct FHitResult& KillingHitInfo, const struct FVector& KillingHitImpulseDir, class UClass* KillingHitDamageType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeSpawnManager.OnOwnedAIPlayerDead");

	UCreativeSpawnManager_OnOwnedAIPlayerDead_Params params;
	params.DeadCharacter = DeadCharacter;
	params.Killer = Killer;
	params.DamageCauser = DamageCauser;
	params.KillingHitInfo = KillingHitInfo;
	params.KillingHitImpulseDir = KillingHitImpulseDir;
	params.KillingHitDamageType = KillingHitDamageType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeSpawnManager.OnMonsterUnitDead
// (Final, Native, Public, HasOutParms, HasDefaults)
// Parameters:
// class ASTExtraSimpleCharacter* DeadCharacter                  (Parm, ZeroConstructor, IsPlainOldData)
// class AController*             Killer                         (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              KillingHitInfo                 (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 KillingHitImpulseDir           (Parm, IsPlainOldData)
// class UClass*                  KillingHitDamageType           (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeSpawnManager::OnMonsterUnitDead(class ASTExtraSimpleCharacter* DeadCharacter, class AController* Killer, class AActor* DamageCauser, const struct FHitResult& KillingHitInfo, const struct FVector& KillingHitImpulseDir, class UClass* KillingHitDamageType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeSpawnManager.OnMonsterUnitDead");

	UCreativeSpawnManager_OnMonsterUnitDead_Params params;
	params.DeadCharacter = DeadCharacter;
	params.Killer = Killer;
	params.DamageCauser = DamageCauser;
	params.KillingHitInfo = KillingHitInfo;
	params.KillingHitImpulseDir = KillingHitImpulseDir;
	params.KillingHitDamageType = KillingHitDamageType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeSpawnManager.OnDeadWithCategory
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// ESpecType                      Category                       (Parm, ZeroConstructor, IsPlainOldData)
// class APawn*                   DeadCharacter                  (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeSpawnManager::OnDeadWithCategory(ESpecType Category, class APawn* DeadCharacter)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeSpawnManager.OnDeadWithCategory");

	UCreativeSpawnManager_OnDeadWithCategory_Params params;
	params.Category = Category;
	params.DeadCharacter = DeadCharacter;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeSpawnManager.Get
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContext                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UCreativeSpawnManager*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCreativeSpawnManager* UCreativeSpawnManager::Get(class UObject* WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeSpawnManager.Get");

	UCreativeSpawnManager_Get_Params params;
	params.WorldContext = WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeStaticMeshComponent.OnReturnToPool
// (Native, Public)
// Parameters:
// class UObject*                 NewOuter                       (Parm, ZeroConstructor, IsPlainOldData)
// uint32_t                       RecycledSeq                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeStaticMeshComponent::OnReturnToPool(class UObject* NewOuter, uint32_t RecycledSeq)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeStaticMeshComponent.OnReturnToPool");

	UCreativeStaticMeshComponent_OnReturnToPool_Params params;
	params.NewOuter = NewOuter;
	params.RecycledSeq = RecycledSeq;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeStaticMeshComponent.OnPickFromPool
// (Native, Public)
// Parameters:
// class UObject*                 NewOuter                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 InName                         (Parm, ZeroConstructor)

void UCreativeStaticMeshComponent::OnPickFromPool(class UObject* NewOuter, const struct FString& InName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeStaticMeshComponent.OnPickFromPool");

	UCreativeStaticMeshComponent_OnPickFromPool_Params params;
	params.NewOuter = NewOuter;
	params.InName = InName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeStreamingManager.UnregisterStreamingSource
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Source                         (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeStreamingManager::UnregisterStreamingSource(class AActor* Source)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeStreamingManager.UnregisterStreamingSource");

	UCreativeStreamingManager_UnregisterStreamingSource_Params params;
	params.Source = Source;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeStreamingManager.StreamingManagerEnable
// (Final, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeStreamingManager::StreamingManagerEnable()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeStreamingManager.StreamingManagerEnable");

	UCreativeStreamingManager_StreamingManagerEnable_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeStreamingManager.RemoveStreamingObject
// (Final, Native, Public)
// Parameters:
// struct FString                 InstanceID                     (ConstParm, Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeStreamingManager::RemoveStreamingObject(const struct FString& InstanceID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeStreamingManager.RemoveStreamingObject");

	UCreativeStreamingManager_RemoveStreamingObject_Params params;
	params.InstanceID = InstanceID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeStreamingManager.RegisterStreamingSource
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Source                         (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeStreamingManager::RegisterStreamingSource(class AActor* Source)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeStreamingManager.RegisterStreamingSource");

	UCreativeStreamingManager_RegisterStreamingSource_Params params;
	params.Source = Source;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeStreamingManager.GetOnGridCellIndex
// (Final, Native, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FString                 GridName                       (Parm, ZeroConstructor)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FIntVector              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FIntVector UCreativeStreamingManager::GetOnGridCellIndex(const struct FString& GridName, const struct FVector& Location)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeStreamingManager.GetOnGridCellIndex");

	UCreativeStreamingManager_GetOnGridCellIndex_Params params;
	params.GridName = GridName;
	params.Location = Location;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeStreamingManager.GetGridLoadingRange
// (Final, Native, Public)
// Parameters:
// struct FString                 GridName                       (Parm, ZeroConstructor)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UCreativeStreamingManager::GetGridLoadingRange(const struct FString& GridName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeStreamingManager.GetGridLoadingRange");

	UCreativeStreamingManager_GetGridLoadingRange_Params params;
	params.GridName = GridName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeStreamingManager.GetGridList
// (Final, Native, Public)
// Parameters:
// TArray<struct FString>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FString> UCreativeStreamingManager::GetGridList()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeStreamingManager.GetGridList");

	UCreativeStreamingManager_GetGridList_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeStreamingManager.GetGridCellWidthHeight
// (Final, Native, Public, HasDefaults)
// Parameters:
// struct FString                 GridName                       (Parm, ZeroConstructor)
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector2D UCreativeStreamingManager::GetGridCellWidthHeight(const struct FString& GridName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeStreamingManager.GetGridCellWidthHeight");

	UCreativeStreamingManager_GetGridCellWidthHeight_Params params;
	params.GridName = GridName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeStreamingManager.GetCreativeModeStreamingSourceList
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FVector>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FVector> UCreativeStreamingManager::GetCreativeModeStreamingSourceList()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeStreamingManager.GetCreativeModeStreamingSourceList");

	UCreativeStreamingManager_GetCreativeModeStreamingSourceList_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeStreamingManager.Get
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContext                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UCreativeStreamingManager* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCreativeStreamingManager* UCreativeStreamingManager::Get(class UObject* WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeStreamingManager.Get");

	UCreativeStreamingManager_Get_Params params;
	params.WorldContext = WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeStreamingManager.ChangeStreamingObjectStreamingType
// (Final, Native, Public)
// Parameters:
// struct FString                 InstanceID                     (ConstParm, Parm, ZeroConstructor)
// ECreativeModeActorStreamingType NewStremaingType               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// ECreativeModeActorStreamingType ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ECreativeModeActorStreamingType UCreativeStreamingManager::ChangeStreamingObjectStreamingType(const struct FString& InstanceID, ECreativeModeActorStreamingType NewStremaingType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeStreamingManager.ChangeStreamingObjectStreamingType");

	UCreativeStreamingManager_ChangeStreamingObjectStreamingType_Params params;
	params.InstanceID = InstanceID;
	params.NewStremaingType = NewStremaingType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeStreamingManager.AddStreamingObject
// (Final, Native, Public)
// Parameters:
// struct FString                 InstanceID                     (ConstParm, Parm, ZeroConstructor)
// struct FCreativeModeStreamingParameters StreamingParameters            (ConstParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeStreamingManager::AddStreamingObject(const struct FString& InstanceID, const struct FCreativeModeStreamingParameters& StreamingParameters)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeStreamingManager.AddStreamingObject");

	UCreativeStreamingManager_AddStreamingObject_Params params;
	params.InstanceID = InstanceID;
	params.StreamingParameters = StreamingParameters;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeTimerApiObject.Clear
// (Final, Native, Public)

void UCreativeTimerApiObject::Clear()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeTimerApiObject.Clear");

	UCreativeTimerApiObject_Clear_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeTriggerAreaActor.OnTakeDamage
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void ACreativeTriggerAreaActor::OnTakeDamage(class AActor* DamageCauser)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeTriggerAreaActor.OnTakeDamage");

	ACreativeTriggerAreaActor_OnTakeDamage_Params params;
	params.DamageCauser = DamageCauser;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeWebSocketManager.SendMessage
// (Final, Native, Public)
// Parameters:
// struct FString                 Message                        (Parm, ZeroConstructor)

void UCreativeWebSocketManager::SendMessage(const struct FString& Message)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeWebSocketManager.SendMessage");

	UCreativeWebSocketManager_SendMessage_Params params;
	params.Message = Message;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeWebSocketManager.ReceiveOnPostSetLuaEventBridgeInstance
// (Event, Public, BlueprintEvent)

void UCreativeWebSocketManager::ReceiveOnPostSetLuaEventBridgeInstance()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeWebSocketManager.ReceiveOnPostSetLuaEventBridgeInstance");

	UCreativeWebSocketManager_ReceiveOnPostSetLuaEventBridgeInstance_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeWebSocketManager.OnTickTimer
// (Final, Native, Public)

void UCreativeWebSocketManager::OnTickTimer()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeWebSocketManager.OnTickTimer");

	UCreativeWebSocketManager_OnTickTimer_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeWebSocketManager.OnReceiveConnected
// (Event, Public, BlueprintEvent)

void UCreativeWebSocketManager::OnReceiveConnected()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeWebSocketManager.OnReceiveConnected");

	UCreativeWebSocketManager_OnReceiveConnected_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeWebSocketManager.OnPostSetLuaEventBridgeInstance
// (Final, Native, Public)

void UCreativeWebSocketManager::OnPostSetLuaEventBridgeInstance()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeWebSocketManager.OnPostSetLuaEventBridgeInstance");

	UCreativeWebSocketManager_OnPostSetLuaEventBridgeInstance_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeWebSocketManager.OnMessageSent
// (Final, Native, Public)
// Parameters:
// struct FString                 Message                        (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeWebSocketManager::OnMessageSent(const struct FString& Message)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeWebSocketManager.OnMessageSent");

	UCreativeWebSocketManager_OnMessageSent_Params params;
	params.Message = Message;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeWebSocketManager.OnMessageReceived
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 Message                        (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeWebSocketManager::OnMessageReceived(const struct FString& Message)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeWebSocketManager.OnMessageReceived");

	UCreativeWebSocketManager_OnMessageReceived_Params params;
	params.Message = Message;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeWebSocketManager.IsConnected
// (Final, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeWebSocketManager::IsConnected()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeWebSocketManager.IsConnected");

	UCreativeWebSocketManager_IsConnected_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeWebSocketManager.Get
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContext                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UCreativeWebSocketManager* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCreativeWebSocketManager* UCreativeWebSocketManager::Get(class UObject* WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeWebSocketManager.Get");

	UCreativeWebSocketManager_Get_Params params;
	params.WorldContext = WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeWebSocketManager.ConnectServer
// (Final, Native, Public)
// Parameters:
// struct FString                 ServerURL                      (Parm, ZeroConstructor)
// struct FString                 ServerProtocol                 (Parm, ZeroConstructor)

void UCreativeWebSocketManager::ConnectServer(const struct FString& ServerURL, const struct FString& ServerProtocol)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeWebSocketManager.ConnectServer");

	UCreativeWebSocketManager_ConnectServer_Params params;
	params.ServerURL = ServerURL;
	params.ServerProtocol = ServerProtocol;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeWidgetObject.UnregisterLiteComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ULiteComponent*          Component                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Destroy                        (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeWidgetObject::UnregisterLiteComponent(class ULiteComponent* Component, bool Destroy)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeWidgetObject.UnregisterLiteComponent");

	UCreativeWidgetObject_UnregisterLiteComponent_Params params;
	params.Component = Component;
	params.Destroy = Destroy;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeWidgetObject.ReturnObjectToPool
// (Native, Public)
// Parameters:
// class UObject*                 Obj                            (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeWidgetObject::ReturnObjectToPool(class UObject* Obj)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeWidgetObject.ReturnObjectToPool");

	UCreativeWidgetObject_ReturnObjectToPool_Params params;
	params.Obj = Obj;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeWidgetObject.ReturnObjectsToPool
// (Native, Public)
// Parameters:
// TArray<class UObject*>         Objs                           (Parm, ZeroConstructor)

void UCreativeWidgetObject::ReturnObjectsToPool(TArray<class UObject*> Objs)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeWidgetObject.ReturnObjectsToPool");

	UCreativeWidgetObject_ReturnObjectsToPool_Params params;
	params.Objs = Objs;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeWidgetObject.RegisterLiteComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ULiteComponent*          Component                      (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeWidgetObject::RegisterLiteComponent(class ULiteComponent* Component)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeWidgetObject.RegisterLiteComponent");

	UCreativeWidgetObject_RegisterLiteComponent_Params params;
	params.Component = Component;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeWidgetObject.ReceivePostBeginPlay
// (Event, Protected, BlueprintEvent)

void UCreativeWidgetObject::ReceivePostBeginPlay()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeWidgetObject.ReceivePostBeginPlay");

	UCreativeWidgetObject_ReceivePostBeginPlay_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeWidgetObject.ReceiveIsDedicatedServer
// (Final, Native, Public, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeWidgetObject::ReceiveIsDedicatedServer()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeWidgetObject.ReceiveIsDedicatedServer");

	UCreativeWidgetObject_ReceiveIsDedicatedServer_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeWidgetObject.ReceiveHasAuthority
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeWidgetObject::ReceiveHasAuthority()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeWidgetObject.ReceiveHasAuthority");

	UCreativeWidgetObject_ReceiveHasAuthority_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeWidgetObject.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)

void UCreativeWidgetObject::ReceiveEndPlay()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeWidgetObject.ReceiveEndPlay");

	UCreativeWidgetObject_ReceiveEndPlay_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeWidgetObject.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void UCreativeWidgetObject::ReceiveBeginPlay()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeWidgetObject.ReceiveBeginPlay");

	UCreativeWidgetObject_ReceiveBeginPlay_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeWidgetObject.GetObjectsFromPool
// (Native, Public, HasOutParms)
// Parameters:
// TArray<struct FCreativePoolGetObjectParamInfo> ObjectParams                   (Parm, OutParm, ZeroConstructor)
// TArray<class UObject*>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UObject*> UCreativeWidgetObject::GetObjectsFromPool(TArray<struct FCreativePoolGetObjectParamInfo>* ObjectParams)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeWidgetObject.GetObjectsFromPool");

	UCreativeWidgetObject_GetObjectsFromPool_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (ObjectParams != nullptr)
		*ObjectParams = params.ObjectParams;

	return params.ReturnValue;
}


// Function Creative.CreativeWidgetObject.GetObjectFromPool
// (Native, Public, HasOutParms)
// Parameters:
// int                            PoolId                         (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 NewOuter                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 InName                         (Parm, OutParm, ZeroConstructor)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UCreativeWidgetObject::GetObjectFromPool(int PoolId, class UObject* NewOuter, struct FString* InName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeWidgetObject.GetObjectFromPool");

	UCreativeWidgetObject_GetObjectFromPool_Params params;
	params.PoolId = PoolId;
	params.NewOuter = NewOuter;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (InName != nullptr)
		*InName = params.InName;

	return params.ReturnValue;
}


// Function Creative.CreativeWorldSubSystem.GetManagerCenter
// (Final, Native, Public)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UCreativeWorldSubSystem::GetManagerCenter()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeWorldSubSystem.GetManagerCenter");

	UCreativeWorldSubSystem_GetManagerCenter_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeWoWInactiveCheckComponent.ServerMarkPlayerActive
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)

void UCreativeWoWInactiveCheckComponent::ServerMarkPlayerActive()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeWoWInactiveCheckComponent.ServerMarkPlayerActive");

	UCreativeWoWInactiveCheckComponent_ServerMarkPlayerActive_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeWoWInactiveCheckComponent.MarkPlayerActive
// (Final, Native, Public, BlueprintCallable)

void UCreativeWoWInactiveCheckComponent::MarkPlayerActive()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeWoWInactiveCheckComponent.MarkPlayerActive");

	UCreativeWoWInactiveCheckComponent_MarkPlayerActive_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeWoWInactiveCheckComponent.KickOutPlayer
// (Event, Public, BlueprintEvent)

void UCreativeWoWInactiveCheckComponent::KickOutPlayer()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeWoWInactiveCheckComponent.KickOutPlayer");

	UCreativeWoWInactiveCheckComponent_KickOutPlayer_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeWoWInactiveCheckComponent.ClientShowKickOutTip
// (Net, NetReliable, Native, Event, Public, NetClient, BlueprintCallable)
// Parameters:
// float                          RemainTime                     (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeWoWInactiveCheckComponent::ClientShowKickOutTip(float RemainTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeWoWInactiveCheckComponent.ClientShowKickOutTip");

	UCreativeWoWInactiveCheckComponent_ClientShowKickOutTip_Params params;
	params.RemainTime = RemainTime;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeWoWInactiveCheckComponent.ClientCachedActiveState
// (Final, Exec, Native, Public, BlueprintCallable)

void UCreativeWoWInactiveCheckComponent::ClientCachedActiveState()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeWoWInactiveCheckComponent.ClientCachedActiveState");

	UCreativeWoWInactiveCheckComponent_ClientCachedActiveState_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeWoWInactiveCheckComponent.CheckForMovement
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCreativeWoWInactiveCheckComponent::CheckForMovement()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeWoWInactiveCheckComponent.CheckForMovement");

	UCreativeWoWInactiveCheckComponent_CheckForMovement_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.CreativeWoWInactiveCheckComponent.CheckForInactive
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UCreativeWoWInactiveCheckComponent::CheckForInactive()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeWoWInactiveCheckComponent.CheckForInactive");

	UCreativeWoWInactiveCheckComponent_CheckForInactive_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeWoWManager.ReceiveOnGameStateBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// class AGameStateBase*          GameState                      (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeWoWManager::ReceiveOnGameStateBeginPlay(class AGameStateBase* GameState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeWoWManager.ReceiveOnGameStateBeginPlay");

	UCreativeWoWManager_ReceiveOnGameStateBeginPlay_Params params;
	params.GameState = GameState;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeWoWManager.OnGameStateBeginPlay
// (Final, Native, Public)
// Parameters:
// class AGameStateBase*          GameState                      (Parm, ZeroConstructor, IsPlainOldData)

void UCreativeWoWManager::OnGameStateBeginPlay(class AGameStateBase* GameState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeWoWManager.OnGameStateBeginPlay");

	UCreativeWoWManager_OnGameStateBeginPlay_Params params;
	params.GameState = GameState;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.CreativeWoWManager.Get
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContext                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UCreativeWoWManager*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCreativeWoWManager* UCreativeWoWManager::Get(class UObject* WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.CreativeWoWManager.Get");

	UCreativeWoWManager_Get_Params params;
	params.WorldContext = WorldContext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.DancerDeviceActor.OnRep_SyncPlayerCharacter
// (Final, Native, Protected)

void ADancerDeviceActor::OnRep_SyncPlayerCharacter()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.DancerDeviceActor.OnRep_SyncPlayerCharacter");

	ADancerDeviceActor_OnRep_SyncPlayerCharacter_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.GameModeStateFighting_CreativeMode.SetToInfinityTime
// (Final, Native, Public)

void UGameModeStateFighting_CreativeMode::SetToInfinityTime()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.GameModeStateFighting_CreativeMode.SetToInfinityTime");

	UGameModeStateFighting_CreativeMode_SetToInfinityTime_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.GameModeStateFighting_CreativeMode.PlayersInfoRecord
// (Native, Public)

void UGameModeStateFighting_CreativeMode::PlayersInfoRecord()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.GameModeStateFighting_CreativeMode.PlayersInfoRecord");

	UGameModeStateFighting_CreativeMode_PlayersInfoRecord_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.GameProcessEventObject.ReceivePostEvent
// (Event, Protected, BlueprintEvent)
// Parameters:
// int                            ProcessType                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            Round                          (Parm, ZeroConstructor, IsPlainOldData)

void UGameProcessEventObject::ReceivePostEvent(int ProcessType, int Round)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.GameProcessEventObject.ReceivePostEvent");

	UGameProcessEventObject_ReceivePostEvent_Params params;
	params.ProcessType = ProcessType;
	params.Round = Round;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.GameProcessEventObject.OnEnterPlayProcess
// (Final, Native, Public)

void UGameProcessEventObject::OnEnterPlayProcess()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.GameProcessEventObject.OnEnterPlayProcess");

	UGameProcessEventObject_OnEnterPlayProcess_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.PlayerListenerEventObject.OnCppRemovePlayerListener
// (Native, Protected)
// Parameters:
// class UObject*                 Content                        (Parm, ZeroConstructor, IsPlainOldData)
// uint32_t                       PlayerKey                      (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerListenerEventObject::OnCppRemovePlayerListener(class UObject* Content, uint32_t PlayerKey)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.PlayerListenerEventObject.OnCppRemovePlayerListener");

	UPlayerListenerEventObject_OnCppRemovePlayerListener_Params params;
	params.Content = Content;
	params.PlayerKey = PlayerKey;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.PlayerListenerEventObject.OnCppAddPlayerListener
// (Native, Protected)
// Parameters:
// class UObject*                 Content                        (Parm, ZeroConstructor, IsPlainOldData)
// uint32_t                       PlayerKey                      (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerListenerEventObject::OnCppAddPlayerListener(class UObject* Content, uint32_t PlayerKey)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.PlayerListenerEventObject.OnCppAddPlayerListener");

	UPlayerListenerEventObject_OnCppAddPlayerListener_Params params;
	params.Content = Content;
	params.PlayerKey = PlayerKey;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.PlayerAttachedToVehicleEventObject.OnOwnerAttachedToVehicle
// (Final, Native, Public)
// Parameters:
// class ASTExtraVehicleBase*     InVehicle                      (Parm, ZeroConstructor, IsPlainOldData)
// uint32_t                       PlayerKey                      (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerAttachedToVehicleEventObject::OnOwnerAttachedToVehicle(class ASTExtraVehicleBase* InVehicle, uint32_t PlayerKey)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.PlayerAttachedToVehicleEventObject.OnOwnerAttachedToVehicle");

	UPlayerAttachedToVehicleEventObject_OnOwnerAttachedToVehicle_Params params;
	params.InVehicle = InVehicle;
	params.PlayerKey = PlayerKey;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.PlayerAttachedToVehicleEventObject.OnCppRemovePlayerListener
// (Native, Protected)
// Parameters:
// class UObject*                 Content                        (Parm, ZeroConstructor, IsPlainOldData)
// uint32_t                       PlayerKey                      (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerAttachedToVehicleEventObject::OnCppRemovePlayerListener(class UObject* Content, uint32_t PlayerKey)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.PlayerAttachedToVehicleEventObject.OnCppRemovePlayerListener");

	UPlayerAttachedToVehicleEventObject_OnCppRemovePlayerListener_Params params;
	params.Content = Content;
	params.PlayerKey = PlayerKey;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.PlayerAttachedToVehicleEventObject.OnCppAddPlayerListener
// (Native, Protected)
// Parameters:
// class UObject*                 Content                        (Parm, ZeroConstructor, IsPlainOldData)
// uint32_t                       PlayerKey                      (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerAttachedToVehicleEventObject::OnCppAddPlayerListener(class UObject* Content, uint32_t PlayerKey)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.PlayerAttachedToVehicleEventObject.OnCppAddPlayerListener");

	UPlayerAttachedToVehicleEventObject_OnCppAddPlayerListener_Params params;
	params.Content = Content;
	params.PlayerKey = PlayerKey;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.PlayerAttachedProxy.OnProxyAttachedToVehicle
// (Final, Native, Public)
// Parameters:
// class ASTExtraVehicleBase*     InVehicle                      (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerAttachedProxy::OnProxyAttachedToVehicle(class ASTExtraVehicleBase* InVehicle)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.PlayerAttachedProxy.OnProxyAttachedToVehicle");

	UPlayerAttachedProxy_OnProxyAttachedToVehicle_Params params;
	params.InVehicle = InVehicle;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.ShowAllPlayerManagerActor.TriggerRefresh
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ASTExtraBaseCharacter*   Character                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)

void AShowAllPlayerManagerActor::TriggerRefresh(class ASTExtraBaseCharacter* Character, bool bEnable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.ShowAllPlayerManagerActor.TriggerRefresh");

	AShowAllPlayerManagerActor_TriggerRefresh_Params params;
	params.Character = Character;
	params.bEnable = bEnable;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.ShowAllPlayerManagerActor.RefreshTeamPoseData
// (Native, Event, Public, BlueprintEvent)

void AShowAllPlayerManagerActor::RefreshTeamPoseData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.ShowAllPlayerManagerActor.RefreshTeamPoseData");

	AShowAllPlayerManagerActor_RefreshTeamPoseData_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.ShowAllPlayerManagerActor.RefreshMapMarkData
// (Native, Event, Public, BlueprintEvent)

void AShowAllPlayerManagerActor::RefreshMapMarkData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.ShowAllPlayerManagerActor.RefreshMapMarkData");

	AShowAllPlayerManagerActor_RefreshMapMarkData_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.ShowAllPlayerManagerActor.OnTeamPosDataChange
// (Native, Event, Public, BlueprintEvent)

void AShowAllPlayerManagerActor::OnTeamPosDataChange()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.ShowAllPlayerManagerActor.OnTeamPosDataChange");

	AShowAllPlayerManagerActor_OnTeamPosDataChange_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.ShowAllPlayerManagerActor.OnRep_TeamPosData
// (Final, Native, Public)

void AShowAllPlayerManagerActor::OnRep_TeamPosData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.ShowAllPlayerManagerActor.OnRep_TeamPosData");

	AShowAllPlayerManagerActor_OnRep_TeamPosData_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.ShowAllPlayerManagerActor.IsCharacterValidForShow
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class ASTExtraBaseCharacter*   Character                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AShowAllPlayerManagerActor::IsCharacterValidForShow(class ASTExtraBaseCharacter* Character)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.ShowAllPlayerManagerActor.IsCharacterValidForShow");

	AShowAllPlayerManagerActor_IsCharacterValidForShow_Params params;
	params.Character = Character;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Creative.ShowAllPlayerManagerActor.FlushBatchData
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// int                            BatchSize                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            CurExtraSize                   (Parm, ZeroConstructor, IsPlainOldData)

void AShowAllPlayerManagerActor::FlushBatchData(int BatchSize, int CurExtraSize)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.ShowAllPlayerManagerActor.FlushBatchData");

	AShowAllPlayerManagerActor_FlushBatchData_Params params;
	params.BatchSize = BatchSize;
	params.CurExtraSize = CurExtraSize;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.ShowAllPlayerManagerActor.EnableRefresh
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)

void AShowAllPlayerManagerActor::EnableRefresh(bool bEnable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.ShowAllPlayerManagerActor.EnableRefresh");

	AShowAllPlayerManagerActor_EnableRefresh_Params params;
	params.bEnable = bEnable;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Creative.ShowAllPlayerManagerActor.ClearAllMark
// (Final, Native, Public, BlueprintCallable)

void AShowAllPlayerManagerActor::ClearAllMark()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Creative.ShowAllPlayerManagerActor.ClearAllMark");

	AShowAllPlayerManagerActor_ClearAllMark_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}


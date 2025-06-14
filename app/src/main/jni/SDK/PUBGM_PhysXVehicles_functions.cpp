// SDKGen by @xninjaleaks | @talhaeens 
// Send message for SDKGen and Offset Finder Tool

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PhysXVehicles.VehicleAnimInstance.GetVehicle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AWheeledVehicle*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AWheeledVehicle* UVehicleAnimInstance::GetVehicle()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhysXVehicles.VehicleAnimInstance.GetVehicle");

	UVehicleAnimInstance_GetVehicle_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetUseAutoGears
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bUseAuto                       (Parm, ZeroConstructor, IsPlainOldData)

void UWheeledVehicleMovementComponent::SetUseAutoGears(bool bUseAuto)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhysXVehicles.WheeledVehicleMovementComponent.SetUseAutoGears");

	UWheeledVehicleMovementComponent_SetUseAutoGears_Params params;
	params.bUseAuto = bUseAuto;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetThrottleInput
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          Throttle                       (Parm, ZeroConstructor, IsPlainOldData)

void UWheeledVehicleMovementComponent::SetThrottleInput(float Throttle)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhysXVehicles.WheeledVehicleMovementComponent.SetThrottleInput");

	UWheeledVehicleMovementComponent_SetThrottleInput_Params params;
	params.Throttle = Throttle;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetTargetGear
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            GearNum                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bImmediate                     (Parm, ZeroConstructor, IsPlainOldData)

void UWheeledVehicleMovementComponent::SetTargetGear(int GearNum, bool bImmediate)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhysXVehicles.WheeledVehicleMovementComponent.SetTargetGear");

	UWheeledVehicleMovementComponent_SetTargetGear_Params params;
	params.GearNum = GearNum;
	params.bImmediate = bImmediate;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetSteeringInput
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          Steering                       (Parm, ZeroConstructor, IsPlainOldData)

void UWheeledVehicleMovementComponent::SetSteeringInput(float Steering)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhysXVehicles.WheeledVehicleMovementComponent.SetSteeringInput");

	UWheeledVehicleMovementComponent_SetSteeringInput_Params params;
	params.Steering = Steering;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetPhysActive
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           bActive                        (Parm, ZeroConstructor, IsPlainOldData)

void UWheeledVehicleMovementComponent::SetPhysActive(bool bActive)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhysXVehicles.WheeledVehicleMovementComponent.SetPhysActive");

	UWheeledVehicleMovementComponent_SetPhysActive_Params params;
	params.bActive = bActive;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetHandbrakeInput
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           bNewHandbrake                  (Parm, ZeroConstructor, IsPlainOldData)

void UWheeledVehicleMovementComponent::SetHandbrakeInput(bool bNewHandbrake)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhysXVehicles.WheeledVehicleMovementComponent.SetHandbrakeInput");

	UWheeledVehicleMovementComponent_SetHandbrakeInput_Params params;
	params.bNewHandbrake = bNewHandbrake;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToIgnoreMask
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FNavAvoidanceMask       GroupMask                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UWheeledVehicleMovementComponent::SetGroupsToIgnoreMask(const struct FNavAvoidanceMask& GroupMask)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToIgnoreMask");

	UWheeledVehicleMovementComponent_SetGroupsToIgnoreMask_Params params;
	params.GroupMask = GroupMask;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToIgnore
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            GroupFlags                     (Parm, ZeroConstructor, IsPlainOldData)

void UWheeledVehicleMovementComponent::SetGroupsToIgnore(int GroupFlags)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToIgnore");

	UWheeledVehicleMovementComponent_SetGroupsToIgnore_Params params;
	params.GroupFlags = GroupFlags;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToAvoidMask
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FNavAvoidanceMask       GroupMask                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UWheeledVehicleMovementComponent::SetGroupsToAvoidMask(const struct FNavAvoidanceMask& GroupMask)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToAvoidMask");

	UWheeledVehicleMovementComponent_SetGroupsToAvoidMask_Params params;
	params.GroupMask = GroupMask;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToAvoid
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            GroupFlags                     (Parm, ZeroConstructor, IsPlainOldData)

void UWheeledVehicleMovementComponent::SetGroupsToAvoid(int GroupFlags)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToAvoid");

	UWheeledVehicleMovementComponent_SetGroupsToAvoid_Params params;
	params.GroupFlags = GroupFlags;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetGearUp
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bNewGearUp                     (Parm, ZeroConstructor, IsPlainOldData)

void UWheeledVehicleMovementComponent::SetGearUp(bool bNewGearUp)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhysXVehicles.WheeledVehicleMovementComponent.SetGearUp");

	UWheeledVehicleMovementComponent_SetGearUp_Params params;
	params.bNewGearUp = bNewGearUp;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetGearDown
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bNewGearDown                   (Parm, ZeroConstructor, IsPlainOldData)

void UWheeledVehicleMovementComponent::SetGearDown(bool bNewGearDown)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhysXVehicles.WheeledVehicleMovementComponent.SetGearDown");

	UWheeledVehicleMovementComponent_SetGearDown_Params params;
	params.bNewGearDown = bNewGearDown;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetBrakeInput
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          Brake                          (Parm, ZeroConstructor, IsPlainOldData)

void UWheeledVehicleMovementComponent::SetBrakeInput(float Brake)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhysXVehicles.WheeledVehicleMovementComponent.SetBrakeInput");

	UWheeledVehicleMovementComponent_SetBrakeInput_Params params;
	params.Brake = Brake;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetAvoidanceGroupMask
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FNavAvoidanceMask       GroupMask                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UWheeledVehicleMovementComponent::SetAvoidanceGroupMask(const struct FNavAvoidanceMask& GroupMask)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhysXVehicles.WheeledVehicleMovementComponent.SetAvoidanceGroupMask");

	UWheeledVehicleMovementComponent_SetAvoidanceGroupMask_Params params;
	params.GroupMask = GroupMask;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetAvoidanceGroup
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            GroupFlags                     (Parm, ZeroConstructor, IsPlainOldData)

void UWheeledVehicleMovementComponent::SetAvoidanceGroup(int GroupFlags)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhysXVehicles.WheeledVehicleMovementComponent.SetAvoidanceGroup");

	UWheeledVehicleMovementComponent_SetAvoidanceGroup_Params params;
	params.GroupFlags = GroupFlags;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetAvoidanceEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)

void UWheeledVehicleMovementComponent::SetAvoidanceEnabled(bool bEnable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhysXVehicles.WheeledVehicleMovementComponent.SetAvoidanceEnabled");

	UWheeledVehicleMovementComponent_SetAvoidanceEnabled_Params params;
	params.bEnable = bEnable;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.ServerUpdateState
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// float                          InSteeringInput                (Parm, ZeroConstructor, IsPlainOldData)
// float                          InThrottleInput                (Parm, ZeroConstructor, IsPlainOldData)
// float                          InBrakeInput                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          InHandbrakeInput               (Parm, ZeroConstructor, IsPlainOldData)
// int                            CurrentGear                    (Parm, ZeroConstructor, IsPlainOldData)

void UWheeledVehicleMovementComponent::ServerUpdateState(float InSteeringInput, float InThrottleInput, float InBrakeInput, float InHandbrakeInput, int CurrentGear)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhysXVehicles.WheeledVehicleMovementComponent.ServerUpdateState");

	UWheeledVehicleMovementComponent_ServerUpdateState_Params params;
	params.InSteeringInput = InSteeringInput;
	params.InThrottleInput = InThrottleInput;
	params.InBrakeInput = InBrakeInput;
	params.InHandbrakeInput = InHandbrakeInput;
	params.CurrentGear = CurrentGear;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.IsSuspensionSweep
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWheeledVehicleMovementComponent::IsSuspensionSweep()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhysXVehicles.WheeledVehicleMovementComponent.IsSuspensionSweep");

	UWheeledVehicleMovementComponent_IsSuspensionSweep_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.GetWheelShapeIndices
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<int>                    OutWheelShapeIndices           (Parm, OutParm, ZeroConstructor)

void UWheeledVehicleMovementComponent::GetWheelShapeIndices(TArray<int>* OutWheelShapeIndices)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhysXVehicles.WheeledVehicleMovementComponent.GetWheelShapeIndices");

	UWheeledVehicleMovementComponent_GetWheelShapeIndices_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutWheelShapeIndices != nullptr)
		*OutWheelShapeIndices = params.OutWheelShapeIndices;
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.GetUseAutoGears
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWheeledVehicleMovementComponent::GetUseAutoGears()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhysXVehicles.WheeledVehicleMovementComponent.GetUseAutoGears");

	UWheeledVehicleMovementComponent_GetUseAutoGears_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.GetTargetGear
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UWheeledVehicleMovementComponent::GetTargetGear()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhysXVehicles.WheeledVehicleMovementComponent.GetTargetGear");

	UWheeledVehicleMovementComponent_GetTargetGear_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.GetForwardSpeed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UWheeledVehicleMovementComponent::GetForwardSpeed()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhysXVehicles.WheeledVehicleMovementComponent.GetForwardSpeed");

	UWheeledVehicleMovementComponent_GetForwardSpeed_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.GetEngineRotationSpeed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UWheeledVehicleMovementComponent::GetEngineRotationSpeed()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhysXVehicles.WheeledVehicleMovementComponent.GetEngineRotationSpeed");

	UWheeledVehicleMovementComponent_GetEngineRotationSpeed_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.GetEngineMaxRotationSpeed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UWheeledVehicleMovementComponent::GetEngineMaxRotationSpeed()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhysXVehicles.WheeledVehicleMovementComponent.GetEngineMaxRotationSpeed");

	UWheeledVehicleMovementComponent_GetEngineMaxRotationSpeed_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.GetCurrentGear
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UWheeledVehicleMovementComponent::GetCurrentGear()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhysXVehicles.WheeledVehicleMovementComponent.GetCurrentGear");

	UWheeledVehicleMovementComponent_GetCurrentGear_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.EnableVehicleWheel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            WheelIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           InEnable                       (Parm, ZeroConstructor, IsPlainOldData)

void UWheeledVehicleMovementComponent::EnableVehicleWheel(int WheelIndex, bool InEnable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhysXVehicles.WheeledVehicleMovementComponent.EnableVehicleWheel");

	UWheeledVehicleMovementComponent_EnableVehicleWheel_Params params;
	params.WheelIndex = WheelIndex;
	params.InEnable = InEnable;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.EnableVehicleSimulation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           InEnable                       (Parm, ZeroConstructor, IsPlainOldData)

void UWheeledVehicleMovementComponent::EnableVehicleSimulation(bool InEnable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhysXVehicles.WheeledVehicleMovementComponent.EnableVehicleSimulation");

	UWheeledVehicleMovementComponent_EnableVehicleSimulation_Params params;
	params.InEnable = InEnable;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.ClearAllInput
// (Final, Native, Public, BlueprintCallable)

void UWheeledVehicleMovementComponent::ClearAllInput()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhysXVehicles.WheeledVehicleMovementComponent.ClearAllInput");

	UWheeledVehicleMovementComponent_ClearAllInput_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PhysXVehicles.VehicleWheel.IsInAir
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVehicleWheel::IsInAir()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhysXVehicles.VehicleWheel.IsInAir");

	UVehicleWheel_IsInAir_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PhysXVehicles.VehicleWheel.GetSuspensionOffset
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UVehicleWheel::GetSuspensionOffset()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhysXVehicles.VehicleWheel.GetSuspensionOffset");

	UVehicleWheel_GetSuspensionOffset_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PhysXVehicles.VehicleWheel.GetSteerAngle
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UVehicleWheel::GetSteerAngle()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhysXVehicles.VehicleWheel.GetSteerAngle");

	UVehicleWheel_GetSteerAngle_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PhysXVehicles.VehicleWheel.GetRotationAngle
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UVehicleWheel::GetRotationAngle()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhysXVehicles.VehicleWheel.GetRotationAngle");

	UVehicleWheel_GetRotationAngle_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PhysXVehicles.SimpleWheeledVehicleMovementComponent.SetSteerAngle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          SteerAngle                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            WheelIndex                     (Parm, ZeroConstructor, IsPlainOldData)

void USimpleWheeledVehicleMovementComponent::SetSteerAngle(float SteerAngle, int WheelIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhysXVehicles.SimpleWheeledVehicleMovementComponent.SetSteerAngle");

	USimpleWheeledVehicleMovementComponent_SetSteerAngle_Params params;
	params.SteerAngle = SteerAngle;
	params.WheelIndex = WheelIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PhysXVehicles.SimpleWheeledVehicleMovementComponent.SetDriveTorque
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          DriveTorque                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            WheelIndex                     (Parm, ZeroConstructor, IsPlainOldData)

void USimpleWheeledVehicleMovementComponent::SetDriveTorque(float DriveTorque, int WheelIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhysXVehicles.SimpleWheeledVehicleMovementComponent.SetDriveTorque");

	USimpleWheeledVehicleMovementComponent_SetDriveTorque_Params params;
	params.DriveTorque = DriveTorque;
	params.WheelIndex = WheelIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PhysXVehicles.SimpleWheeledVehicleMovementComponent.SetBrakeTorque
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          BrakeTorque                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            WheelIndex                     (Parm, ZeroConstructor, IsPlainOldData)

void USimpleWheeledVehicleMovementComponent::SetBrakeTorque(float BrakeTorque, int WheelIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhysXVehicles.SimpleWheeledVehicleMovementComponent.SetBrakeTorque");

	USimpleWheeledVehicleMovementComponent_SetBrakeTorque_Params params;
	params.BrakeTorque = BrakeTorque;
	params.WheelIndex = WheelIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}


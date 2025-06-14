#pragma once

// SDKGen by @xninjaleaks | @talhaeens 
// Send message for SDKGen and Offset Finder Tool

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class GameFeatures.GameFeaturesProjectPolicies
// 0x0000 (0x0028 - 0x0028)
class UGameFeaturesProjectPolicies : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameFeatures.GameFeaturesProjectPolicies");
		return pStaticClass;
	}

};


// Class GameFeatures.DefaultGameFeaturesProjectPolicies
// 0x0000 (0x0028 - 0x0028)
class UDefaultGameFeaturesProjectPolicies : public UGameFeaturesProjectPolicies
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameFeatures.DefaultGameFeaturesProjectPolicies");
		return pStaticClass;
	}

};


// Class GameFeatures.GameFeatureAction
// 0x0000 (0x0028 - 0x0028)
class UGameFeatureAction : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameFeatures.GameFeatureAction");
		return pStaticClass;
	}

};


// Class GameFeatures.GameFeatureAction_AddComponents
// 0x0028 (0x0050 - 0x0028)
class UGameFeatureAction_AddComponents : public UGameFeatureAction
{
public:
	TArray<struct FGameFeatureComponentEntry>          ComponentList;                                            // 0x0028(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0038(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameFeatures.GameFeatureAction_AddComponents");
		return pStaticClass;
	}

};


// Class GameFeatures.GameFeatureData
// 0x0020 (0x0050 - 0x0030)
class UGameFeatureData : public UPrimaryDataAsset
{
public:
	TArray<class UGameFeatureAction*>                  Actions;                                                  // 0x0030(0x0010) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FPrimaryAssetTypeInfo>               PrimaryAssetTypesToScan;                                  // 0x0040(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameFeatures.GameFeatureData");
		return pStaticClass;
	}

};


// Class GameFeatures.GameFeaturePluginStateMachine
// 0x0130 (0x0158 - 0x0028)
class UGameFeaturePluginStateMachine : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET
	struct FGameFeaturePluginStateMachineProperties    StateProperties;                                          // 0x0048(0x0070) (Transient)
	unsigned char                                      UnknownData01[0xA0];                                      // 0x00B8(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameFeatures.GameFeaturePluginStateMachine");
		return pStaticClass;
	}

};


// Class GameFeatures.GameFeaturesSubsystem
// 0x00C0 (0x00F0 - 0x0030)
class UGameFeaturesSubsystem : public UEngineSubsystem
{
public:
	TMap<struct FString, class UGameFeaturePluginStateMachine*> GameFeaturePluginStateMachines;                           // 0x0030(0x0050) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0080(0x0050) MISSED OFFSET
	TArray<class UGameFeatureStateChangeObserver*>     Observers;                                                // 0x00D0(0x0010) (ZeroConstructor, Transient)
	class UGameFeaturesProjectPolicies*                GameSpecificPolicies;                                     // 0x00E0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x00E8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameFeatures.GameFeaturesSubsystem");
		return pStaticClass;
	}

};


// Class GameFeatures.GameFeaturesSubsystemSettings
// 0x0048 (0x0080 - 0x0038)
class UGameFeaturesSubsystemSettings : public UDeveloperSettings
{
public:
	struct FSoftClassPath                              GameFeaturesManagerClassName;                             // 0x0038(0x0018) (Edit, Config)
	TArray<struct FString>                             DisabledPlugins;                                          // 0x0050(0x0010) (Edit, ZeroConstructor, Config)
	TArray<struct FString>                             AdditionalPluginMetadataKeys;                             // 0x0060(0x0010) (Edit, ZeroConstructor, Config)
	struct FString                                     BuiltInGameFeaturePluginsFolder;                          // 0x0070(0x0010) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameFeatures.GameFeaturesSubsystemSettings");
		return pStaticClass;
	}

};


// Class GameFeatures.GameFeatureStateChangeObserver
// 0x0000 (0x0028 - 0x0028)
class UGameFeatureStateChangeObserver : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameFeatures.GameFeatureStateChangeObserver");
		return pStaticClass;
	}

};


}


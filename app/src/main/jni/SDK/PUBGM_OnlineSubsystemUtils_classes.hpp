#pragma once

// SDKGen by @xninjaleaks | @talhaeens 
// Send message for SDKGen and Offset Finder Tool

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class OnlineSubsystemUtils.IpConnection
// 0x0068 (0x356E8 - 0x35680)
class UIpConnection : public UNetConnection
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x35680(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class OnlineSubsystemUtils.IpConnection");
		return pStaticClass;
	}

};


// Class OnlineSubsystemUtils.IpNetDriver
// 0x00A8 (0x0738 - 0x0690)
class UIpNetDriver : public UNetDriver
{
public:
	unsigned char                                      LogPortUnreach : 1;                                       // 0x0690(0x0001) (Config)
	unsigned char                                      AllowPlayerPortUnreach : 1;                               // 0x0690(0x0001) (Config)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0691(0x0003) MISSED OFFSET
	uint32_t                                           MaxPortCountToTry;                                        // 0x0694(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0698(0x0018) MISSED OFFSET
	uint32_t                                           ServerDesiredSocketReceiveBufferBytes;                    // 0x06B0(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	uint32_t                                           ServerDesiredSocketSendBufferBytes;                       // 0x06B4(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	uint32_t                                           ClientDesiredSocketReceiveBufferBytes;                    // 0x06B8(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	uint32_t                                           ClientDesiredSocketSendBufferBytes;                       // 0x06BC(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x60];                                      // 0x06C0(0x0060) MISSED OFFSET
	float                                              RecreateSocketCooldownTime;                               // 0x0720(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              RecreateSocketMaxTryCount;                                // 0x0724(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bResolveRemoteHostOnRecreateSocket;                       // 0x0728(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bContinueProcessWhenReceiveEmptyPackets;                  // 0x0729(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bContinueProcessWhenConReceiveEmptyPackets;               // 0x072A(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData03[0xD];                                       // 0x072B(0x000D) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class OnlineSubsystemUtils.IpNetDriver");
		return pStaticClass;
	}

};


// Class OnlineSubsystemUtils.AchievementBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UAchievementBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class OnlineSubsystemUtils.AchievementBlueprintLibrary");
		return pStaticClass;
	}


	static void GetCachedAchievementProgress(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FName& AchievementID, bool* bFoundID, float* Progress);
	static void GetCachedAchievementDescription(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FName& AchievementID, bool* bFoundID, struct FText* Title, struct FText* LockedDescription, struct FText* UnlockedDescription, bool* bHidden);
};


// Class OnlineSubsystemUtils.AchievementQueryCallbackProxy
// 0x0038 (0x0060 - 0x0028)
class UAchievementQueryCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0048(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class OnlineSubsystemUtils.AchievementQueryCallbackProxy");
		return pStaticClass;
	}


	static class UAchievementQueryCallbackProxy* CacheAchievements(class UObject* WorldContextObject, class APlayerController* PlayerController);
	static class UAchievementQueryCallbackProxy* CacheAchievementDescriptions(class UObject* WorldContextObject, class APlayerController* PlayerController);
};


// Class OnlineSubsystemUtils.AchievementWriteCallbackProxy
// 0x0050 (0x0078 - 0x0028)
class UAchievementWriteCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0048(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class OnlineSubsystemUtils.AchievementWriteCallbackProxy");
		return pStaticClass;
	}


	static class UAchievementWriteCallbackProxy* WriteAchievementProgress(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FName& AchievementName, float Progress, int UserTag);
};


// Class OnlineSubsystemUtils.ConnectionCallbackProxy
// 0x0048 (0x0070 - 0x0028)
class UConnectionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0048(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class OnlineSubsystemUtils.ConnectionCallbackProxy");
		return pStaticClass;
	}


	static class UConnectionCallbackProxy* ConnectToService(class UObject* WorldContextObject, class APlayerController* PlayerController);
};


// Class OnlineSubsystemUtils.CreateSessionCallbackProxy
// 0x0068 (0x0090 - 0x0028)
class UCreateSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x48];                                      // 0x0048(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class OnlineSubsystemUtils.CreateSessionCallbackProxy");
		return pStaticClass;
	}


	static class UCreateSessionCallbackProxy* CreateSession(class UObject* WorldContextObject, class APlayerController* PlayerController, int PublicConnections, bool bUseLAN);
};


// Class OnlineSubsystemUtils.DestroySessionCallbackProxy
// 0x0048 (0x0070 - 0x0028)
class UDestroySessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0048(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class OnlineSubsystemUtils.DestroySessionCallbackProxy");
		return pStaticClass;
	}


	static class UDestroySessionCallbackProxy* DestroySession(class UObject* WorldContextObject, class APlayerController* PlayerController);
};


// Class OnlineSubsystemUtils.EndMatchCallbackProxy
// 0x0050 (0x0078 - 0x0028)
class UEndMatchCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0048(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class OnlineSubsystemUtils.EndMatchCallbackProxy");
		return pStaticClass;
	}


	static class UEndMatchCallbackProxy* EndMatch(class UObject* WorldContextObject, class APlayerController* PlayerController, const TScriptInterface<class UTurnBasedMatchInterface>& MatchActor, const struct FString& MatchID, TEnumAsByte<EMPMatchOutcome> LocalPlayerOutcome, TEnumAsByte<EMPMatchOutcome> OtherPlayersOutcome);
};


// Class OnlineSubsystemUtils.EndTurnCallbackProxy
// 0x0048 (0x0070 - 0x0028)
class UEndTurnCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0048(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class OnlineSubsystemUtils.EndTurnCallbackProxy");
		return pStaticClass;
	}


	static class UEndTurnCallbackProxy* EndTurn(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FString& MatchID, const TScriptInterface<class UTurnBasedMatchInterface>& TurnBasedMatchInterface);
};


// Class OnlineSubsystemUtils.FindSessionsCallbackProxy
// 0x0060 (0x0088 - 0x0028)
class UFindSessionsCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x40];                                      // 0x0048(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class OnlineSubsystemUtils.FindSessionsCallbackProxy");
		return pStaticClass;
	}


	static struct FString GetServerName(const struct FBlueprintSessionResult& Result);
	static int GetPingInMs(const struct FBlueprintSessionResult& Result);
	static int GetMaxPlayers(const struct FBlueprintSessionResult& Result);
	static int GetCurrentPlayers(const struct FBlueprintSessionResult& Result);
	static class UFindSessionsCallbackProxy* FindSessions(class UObject* WorldContextObject, class APlayerController* PlayerController, int MaxResults, bool bUseLAN);
};


// Class OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy
// 0x0058 (0x0080 - 0x0028)
class UFindTurnBasedMatchCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x38];                                      // 0x0048(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy");
		return pStaticClass;
	}


	static class UFindTurnBasedMatchCallbackProxy* FindTurnBasedMatch(class UObject* WorldContextObject, class APlayerController* PlayerController, const TScriptInterface<class UTurnBasedMatchInterface>& MatchActor, int MinPlayers, int MaxPlayers, int PlayerGroup, bool ShowExistingMatches);
};


// Class OnlineSubsystemUtils.InAppPurchaseCallbackProxy
// 0x0058 (0x0080 - 0x0028)
class UInAppPurchaseCallbackProxy : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x38];                                      // 0x0048(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class OnlineSubsystemUtils.InAppPurchaseCallbackProxy");
		return pStaticClass;
	}


	static class UInAppPurchaseCallbackProxy* CreateProxyObjectForInAppPurchase(class APlayerController* PlayerController, const struct FInAppPurchaseProductRequest& ProductRequest);
};


// Class OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy
// 0x0068 (0x0090 - 0x0028)
class UInAppPurchaseQueryCallbackProxy : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x48];                                      // 0x0048(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy");
		return pStaticClass;
	}


	static class UInAppPurchaseQueryCallbackProxy* CreateProxyObjectForInAppPurchaseQuery(class APlayerController* PlayerController, TArray<struct FString> ProductIdentifiers);
};


// Class OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy
// 0x0068 (0x0090 - 0x0028)
class UInAppPurchaseRestoreCallbackProxy : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x48];                                      // 0x0048(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy");
		return pStaticClass;
	}


	static class UInAppPurchaseRestoreCallbackProxy* CreateProxyObjectForInAppPurchaseRestore(TArray<struct FInAppPurchaseProductRequest> ConsumableProductFlags, class APlayerController* PlayerController);
};


// Class OnlineSubsystemUtils.JoinSessionCallbackProxy
// 0x0100 (0x0128 - 0x0028)
class UJoinSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0xE0];                                      // 0x0048(0x00E0) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class OnlineSubsystemUtils.JoinSessionCallbackProxy");
		return pStaticClass;
	}


	static class UJoinSessionCallbackProxy* JoinSession(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FBlueprintSessionResult& SearchResult);
};


// Class OnlineSubsystemUtils.LeaderboardBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class ULeaderboardBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class OnlineSubsystemUtils.LeaderboardBlueprintLibrary");
		return pStaticClass;
	}


	static bool WriteLeaderboardInteger(class APlayerController* PlayerController, const struct FName& StatName, int StatValue);
};


// Class OnlineSubsystemUtils.LeaderboardFlushCallbackProxy
// 0x0040 (0x0068 - 0x0028)
class ULeaderboardFlushCallbackProxy : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0048(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class OnlineSubsystemUtils.LeaderboardFlushCallbackProxy");
		return pStaticClass;
	}


	static class ULeaderboardFlushCallbackProxy* CreateProxyObjectForFlush(class APlayerController* PlayerController, const struct FName& SessionName);
};


// Class OnlineSubsystemUtils.LeaderboardQueryCallbackProxy
// 0x0070 (0x0098 - 0x0028)
class ULeaderboardQueryCallbackProxy : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0048(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class OnlineSubsystemUtils.LeaderboardQueryCallbackProxy");
		return pStaticClass;
	}


	static class ULeaderboardQueryCallbackProxy* CreateProxyObjectForIntQuery(class APlayerController* PlayerController, const struct FName& StatName);
};


// Class OnlineSubsystemUtils.LogoutCallbackProxy
// 0x0038 (0x0060 - 0x0028)
class ULogoutCallbackProxy : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0048(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class OnlineSubsystemUtils.LogoutCallbackProxy");
		return pStaticClass;
	}


	static class ULogoutCallbackProxy* Logout(class UObject* WorldContextObject, class APlayerController* PlayerController);
};


// Class OnlineSubsystemUtils.OnlineBeacon
// 0x0028 (0x0460 - 0x0438)
class AOnlineBeacon : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0438(0x0008) MISSED OFFSET
	float                                              BeaconConnectionInitialTimeout;                           // 0x0440(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              BeaconConnectionTimeout;                                  // 0x0444(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	class UNetDriver*                                  NetDriver;                                                // 0x0448(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0450(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class OnlineSubsystemUtils.OnlineBeacon");
		return pStaticClass;
	}

};


// Class OnlineSubsystemUtils.OnlineBeaconClient
// 0x0040 (0x04A0 - 0x0460)
class AOnlineBeaconClient : public AOnlineBeacon
{
public:
	class AOnlineBeaconHostObject*                     BeaconOwner;                                              // 0x0460(0x0008) (ZeroConstructor, IsPlainOldData)
	class UNetConnection*                              BeaconConnection;                                         // 0x0468(0x0008) (ZeroConstructor, IsPlainOldData)
	EBeaconConnectionState                             ConnectionState;                                          // 0x0470(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2F];                                      // 0x0471(0x002F) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class OnlineSubsystemUtils.OnlineBeaconClient");
		return pStaticClass;
	}


	void ClientOnConnected();
};


// Class OnlineSubsystemUtils.OnlineBeaconHost
// 0x00B8 (0x0518 - 0x0460)
class AOnlineBeaconHost : public AOnlineBeacon
{
public:
	int                                                ListenPort;                                               // 0x0460(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0464(0x0004) MISSED OFFSET
	TArray<class AOnlineBeaconClient*>                 ClientActors;                                             // 0x0468(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0xA0];                                      // 0x0478(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class OnlineSubsystemUtils.OnlineBeaconHost");
		return pStaticClass;
	}

};


// Class OnlineSubsystemUtils.OnlineBeaconHostObject
// 0x0028 (0x0460 - 0x0438)
class AOnlineBeaconHostObject : public AActor
{
public:
	struct FString                                     BeaconTypeName;                                           // 0x0438(0x0010) (ZeroConstructor, Transient)
	class UClass*                                      ClientBeaconActorClass;                                   // 0x0448(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class AOnlineBeaconClient*>                 ClientActors;                                             // 0x0450(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class OnlineSubsystemUtils.OnlineBeaconHostObject");
		return pStaticClass;
	}

};


// Class OnlineSubsystemUtils.OnlineEngineInterfaceImpl
// 0x0108 (0x0130 - 0x0028)
class UOnlineEngineInterfaceImpl : public UOnlineEngineInterface
{
public:
	struct FName                                       VoiceSubsystemNameOverride;                               // 0x0028(0x0008) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x100];                                     // 0x0030(0x0100) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class OnlineSubsystemUtils.OnlineEngineInterfaceImpl");
		return pStaticClass;
	}

};


// Class OnlineSubsystemUtils.OnlinePIESettings
// 0x0018 (0x0050 - 0x0038)
class UOnlinePIESettings : public UDeveloperSettings
{
public:
	bool                                               bOnlinePIEEnabled;                                        // 0x0038(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
	TArray<struct FPIELoginSettingsInternal>           Logins;                                                   // 0x0040(0x0010) (Edit, ZeroConstructor, Config)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class OnlineSubsystemUtils.OnlinePIESettings");
		return pStaticClass;
	}

};


// Class OnlineSubsystemUtils.OnlineSessionClient
// 0x0168 (0x0190 - 0x0028)
class UOnlineSessionClient : public UOnlineSession
{
public:
	unsigned char                                      UnknownData00[0x160];                                     // 0x0028(0x0160) MISSED OFFSET
	bool                                               bIsFromInvite;                                            // 0x0188(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bHandlingDisconnect;                                      // 0x0189(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x018A(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class OnlineSubsystemUtils.OnlineSessionClient");
		return pStaticClass;
	}

};


// Class OnlineSubsystemUtils.PartyBeaconClient
// 0x00A0 (0x0540 - 0x04A0)
class APartyBeaconClient : public AOnlineBeaconClient
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x04A0(0x0030) MISSED OFFSET
	struct FString                                     DestSessionId;                                            // 0x04D0(0x0010) (ZeroConstructor)
	struct FPartyReservation                           PendingReservation;                                       // 0x04E0(0x0030)
	EClientRequestType                                 RequestType;                                              // 0x0510(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bPendingReservationSent;                                  // 0x0511(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bCancelReservation;                                       // 0x0512(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2D];                                      // 0x0513(0x002D) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class OnlineSubsystemUtils.PartyBeaconClient");
		return pStaticClass;
	}


	void ServerUpdateReservationRequest(const struct FString& SessionId, const struct FPartyReservation& ReservationUpdate);
	void ServerReservationRequest(const struct FString& SessionId, const struct FPartyReservation& Reservation);
	void ServerCancelReservationRequest(const struct FUniqueNetIdRepl& PartyLeader);
	void ClientSendReservationUpdates(int NumRemainingReservations);
	void ClientSendReservationFull();
	void ClientReservationResponse(TEnumAsByte<EPartyReservationResult> ReservationResponse);
	void ClientCancelReservationResponse(TEnumAsByte<EPartyReservationResult> ReservationResponse);
};


// Class OnlineSubsystemUtils.PartyBeaconHost
// 0x0068 (0x04C8 - 0x0460)
class APartyBeaconHost : public AOnlineBeaconHostObject
{
public:
	class UPartyBeaconState*                           State;                                                    // 0x0460(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0468(0x0050) MISSED OFFSET
	bool                                               bLogoutOnSessionTimeout;                                  // 0x04B8(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x04B9(0x0003) MISSED OFFSET
	float                                              SessionTimeoutSecs;                                       // 0x04BC(0x0004) (ZeroConstructor, Transient, Config, IsPlainOldData)
	float                                              TravelSessionTimeoutSecs;                                 // 0x04C0(0x0004) (ZeroConstructor, Transient, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x04C4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class OnlineSubsystemUtils.PartyBeaconHost");
		return pStaticClass;
	}

};


// Class OnlineSubsystemUtils.PartyBeaconState
// 0x0048 (0x0070 - 0x0028)
class UPartyBeaconState : public UObject
{
public:
	struct FName                                       SessionName;                                              // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                NumConsumedReservations;                                  // 0x0030(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                MaxReservations;                                          // 0x0034(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                NumTeams;                                                 // 0x0038(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                NumPlayersPerTeam;                                        // 0x003C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	struct FName                                       TeamAssignmentMethod;                                     // 0x0040(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                ReservedHostTeamNum;                                      // 0x0048(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                ForceTeamNum;                                             // 0x004C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<struct FPartyReservation>                   Reservations;                                             // 0x0050(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0060(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class OnlineSubsystemUtils.PartyBeaconState");
		return pStaticClass;
	}

};


// Class OnlineSubsystemUtils.QuitMatchCallbackProxy
// 0x0048 (0x0070 - 0x0028)
class UQuitMatchCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0048(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class OnlineSubsystemUtils.QuitMatchCallbackProxy");
		return pStaticClass;
	}


	static class UQuitMatchCallbackProxy* QuitMatch(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FString& MatchID, TEnumAsByte<EMPMatchOutcome> Outcome, int TurnTimeoutInSeconds);
};


// Class OnlineSubsystemUtils.ShowLoginUICallbackProxy
// 0x0030 (0x0058 - 0x0028)
class UShowLoginUICallbackProxy : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0048(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class OnlineSubsystemUtils.ShowLoginUICallbackProxy");
		return pStaticClass;
	}


	static class UShowLoginUICallbackProxy* ShowExternalLoginUI(class UObject* WorldContextObject, class APlayerController* InPlayerController);
};


// Class OnlineSubsystemUtils.TestBeaconClient
// 0x0000 (0x04A0 - 0x04A0)
class ATestBeaconClient : public AOnlineBeaconClient
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class OnlineSubsystemUtils.TestBeaconClient");
		return pStaticClass;
	}


	void ServerPong();
	void ClientPing();
};


// Class OnlineSubsystemUtils.TestBeaconHost
// 0x0000 (0x0460 - 0x0460)
class ATestBeaconHost : public AOnlineBeaconHostObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class OnlineSubsystemUtils.TestBeaconHost");
		return pStaticClass;
	}

};


// Class OnlineSubsystemUtils.TurnBasedBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UTurnBasedBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class OnlineSubsystemUtils.TurnBasedBlueprintLibrary");
		return pStaticClass;
	}


	static void RegisterTurnBasedMatchInterfaceObject(class UObject* WorldContextObject, class APlayerController* PlayerController, class UObject* Object);
	static void GetPlayerDisplayName(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FString& MatchID, int playerIndex, struct FString* PlayerDisplayName);
	static void GetMyPlayerIndex(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FString& MatchID, int* playerIndex);
	static void GetIsMyTurn(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FString& MatchID, bool* bIsMyTurn);
};


}


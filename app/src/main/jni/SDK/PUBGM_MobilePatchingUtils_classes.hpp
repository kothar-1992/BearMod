#pragma once

// SDKGen by @xninjaleaks | @talhaeens 
// Send message for SDKGen and Offset Finder Tool

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class MobilePatchingUtils.MobileInstalledContent
// 0x0020 (0x0048 - 0x0028)
class UMobileInstalledContent : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MobilePatchingUtils.MobileInstalledContent");
		return pStaticClass;
	}


	bool Mount(int PakOrder, const struct FString& MountPoint);
	float GetInstalledContentSize();
	float GetDiskFreeSpace();
};


// Class MobilePatchingUtils.MobilePendingContent
// 0x0040 (0x0088 - 0x0048)
class UMobilePendingContent : public UMobileInstalledContent
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0048(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MobilePatchingUtils.MobilePendingContent");
		return pStaticClass;
	}


	void StartInstall(const struct FScriptDelegate& OnSucceeded, const struct FScriptDelegate& OnFailed);
	float GetTotalDownloadedSize();
	float GetRequiredDiskSpace();
	float GetInstallProgress();
	struct FText GetDownloadStatusText();
	float GetDownloadSpeed();
	float GetDownloadSize();
};


// Class MobilePatchingUtils.MobilePatchingLibrary
// 0x0000 (0x0028 - 0x0028)
class UMobilePatchingLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MobilePatchingUtils.MobilePatchingLibrary");
		return pStaticClass;
	}


	static void RequestContent(const struct FString& RemoteManifestURL, const struct FString& CloudURL, const struct FString& InstallDirectory, const struct FScriptDelegate& OnSucceeded, const struct FScriptDelegate& OnFailed);
	static bool HasActiveWiFiConnection();
	static TArray<struct FString> GetSupportedPlatformNames();
	static class UMobileInstalledContent* GetInstalledContent(const struct FString& InstallDirectory);
	static struct FString GetActiveDeviceProfileName();
};


}


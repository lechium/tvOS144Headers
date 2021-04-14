//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet, UARPMobileAssetManager, UARPiCloudAssetManager;
@protocol OS_dispatch_queue, OS_os_log, UARPAssetManagerDelegate;

__attribute__((visibility("hidden")))
@interface UARPAssetManager : NSObject
{
    id <UARPAssetManagerDelegate> _delegate;	// 8 = 0x8
    NSObject<OS_os_log> *_log;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_workQueue;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_delegateQueue;	// 32 = 0x20
    UARPMobileAssetManager *_mobileAssetManager;	// 40 = 0x28
    UARPiCloudAssetManager *_iCloudAssetManager;	// 48 = 0x30
    NSMutableDictionary *_iCloudContainerIDToAccessoriesMap;	// 56 = 0x38
    int _firmwareUpdateNotificationToken;	// 64 = 0x40
    NSMutableSet *_accessories;	// 72 = 0x48
}

@property(retain) NSMutableSet *accessories; // @synthesize accessories=_accessories;
- (void)assetAvailabilityUpdateForAccessory:(id)arg1 assetID:(id)arg2;	// IMP=0x0000000100028368
- (id)getAssetIDForAccessoryID:(id)arg1;	// IMP=0x0000000100028274
- (void)remoteFetchFromiCloudCompleteForAccessory:(id)arg1 error:(id)arg2;	// IMP=0x0000000100027f64
- (id)getiCloudAccessoriesForRemoteCheck;	// IMP=0x0000000100027be4
- (long long)updateProperty:(unsigned long long)arg1 value:(id)arg2 forAccessory:(id)arg3;	// IMP=0x0000000100027714
- (void)sendUpdateFirmwareAnalyticsEventForAccessoryID:(id)arg1 assetID:(id)arg2 params:(id)arg3;	// IMP=0x0000000100027580
- (void)manifestPropertiesReceivedForAccessoryID:(id)arg1 assetTag:(unsigned int)arg2 properties:(id)arg3;	// IMP=0x000000010002757c
- (long long)personalizationVectorForAccessoryID:(id)arg1 assetTag:(unsigned int)arg2 outVector:(unsigned int *)arg3;	// IMP=0x0000000100027574
- (id)containerIDForAssetID:(id)arg1;	// IMP=0x0000000100027434
- (void)removeAccessoryIDFromCache:(id)arg1;	// IMP=0x0000000100027424
- (void)cacheAccessoryID:(id)arg1;	// IMP=0x0000000100027414
- (void)updateCacheForAccessory:(id)arg1 addAccessory:(_Bool)arg2;	// IMP=0x0000000100026fac
- (id)createUARPAccessoryInternalFromArchivedData:(id)arg1;	// IMP=0x0000000100026ed0
- (void)allowConditionalDownloadOnCellular;	// IMP=0x0000000100026df8
- (id)getUARPAccessoryInternalForUARPAccessoryID:(id)arg1;	// IMP=0x0000000100026cb4
- (id)getSuperBinaryVersionForAsset:(id)arg1;	// IMP=0x0000000100026bbc
- (long long)checkDropBoxForAccessory:(id)arg1;	// IMP=0x00000001000267b4
- (long long)changeAssetLocation:(id)arg1 assetID:(id)arg2;	// IMP=0x00000001000265c8
- (void)postActiveFirmwareAnalyticsEventForAccessoryID:(id)arg1;	// IMP=0x00000001000264b0
- (void)handlePeriodicLaunch;	// IMP=0x0000000100026070
- (long long)checkForUpdate:(id)arg1;	// IMP=0x0000000100026000
- (long long)purgeAccessoryID:(id)arg1;	// IMP=0x0000000100025ff8
- (long long)removeAccessoryID:(id)arg1;	// IMP=0x0000000100025f28
- (long long)removeAccessoryIDInternal:(id)arg1;	// IMP=0x0000000100025da0
- (long long)downloadReleaseNotesFromLocalPathForAccessory:(id)arg1 assetID:(id)arg2;	// IMP=0x0000000100025b00
- (long long)downloadReleaseNotesForAccessoryID:(id)arg1 assetID:(id)arg2;	// IMP=0x00000001000257bc
- (long long)downloadFirmwareFromLocalPathForAccessory:(id)arg1 assetID:(id)arg2;	// IMP=0x000000010002555c
- (long long)downloadFirmwareForAccessory:(id)arg1 assetID:(id)arg2 userIntent:(_Bool)arg3;	// IMP=0x0000000100025198
- (void)performRemoteUpdateCheckForAllAccessories;	// IMP=0x0000000100025194
- (long long)performLocalUpdateCheckForAccessory:(id)arg1;	// IMP=0x0000000100024e18
- (long long)performRemoteUpdateCheckForAccessoryID:(id)arg1;	// IMP=0x0000000100024bf0
- (void)performRemoteUpdateCheckForCloudAccessories;	// IMP=0x00000001000249e8
- (void)createiCloudContainerIDToAccessoriesMap;	// IMP=0x0000000100024718
- (long long)addAccessoryID:(id)arg1 assetID:(id)arg2;	// IMP=0x00000001000244d8
- (void)postFirmwareUpdateAppliedNotificationForAccessoryID:(id)arg1;	// IMP=0x0000000100024458
- (void)dealloc;	// IMP=0x00000001000243c8
- (id)initWithDelegate:(id)arg1;	// IMP=0x0000000100024224

@end


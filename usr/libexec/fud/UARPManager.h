//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "UARPAssetManagerDelegate-Protocol.h"

@class NSString, UARPAssetManager;

__attribute__((visibility("hidden")))
@interface UARPManager : NSObject <UARPAssetManagerDelegate>
{
    UARPAssetManager *_assetManager;	// 8 = 0x8
}

@property(readonly, retain) UARPAssetManager *assetManager; // @synthesize assetManager=_assetManager;
- (void)dumpState;	// IMP=0x0000000100020bc8
- (id)getAssetIDForAccessoryID:(id)arg1;	// IMP=0x0000000100020bb8
- (long long)updateProperty:(unsigned long long)arg1 value:(id)arg2 forAccessory:(id)arg3;	// IMP=0x0000000100020ba8
- (void)sendUpdateFirmwareAnalyticsEventForAccessoryID:(id)arg1 assetID:(id)arg2 params:(id)arg3;	// IMP=0x0000000100020b98
- (void)manifestPropertiesReceivedForAccessoryID:(id)arg1 assetTag:(unsigned int)arg2 properties:(id)arg3;	// IMP=0x0000000100020b88
- (long long)personalizationVectorForAccessoryID:(id)arg1 assetTag:(unsigned int)arg2 outVector:(unsigned int *)arg3;	// IMP=0x0000000100020b78
- (long long)checkForUpdate:(id)arg1;	// IMP=0x0000000100020b68
- (void)assetAvailabilityUpdateForAccessory:(id)arg1 assetID:(id)arg2;	// IMP=0x0000000100020b64
- (void)firmwareUpdateProgressForAccessory:(id)arg1 assetID:(id)arg2 bytesSent:(unsigned long long)arg3 bytesTotal:(unsigned long long)arg4;	// IMP=0x0000000100020b60
- (long long)downloadReleaseNotesForAccessoryID:(id)arg1 assetID:(id)arg2;	// IMP=0x0000000100020b50
- (long long)downloadFirmwareForAccessory:(id)arg1 assetID:(id)arg2 userIntent:(_Bool)arg3;	// IMP=0x0000000100020b40
- (long long)changeAssetLocation:(id)arg1 assetID:(id)arg2;	// IMP=0x0000000100020b30
- (long long)removeAccessory:(id)arg1;	// IMP=0x0000000100020b20
- (long long)addAccessory:(id)arg1 assetID:(id)arg2;	// IMP=0x0000000100020b10
- (void)dealloc;	// IMP=0x0000000100020ac8
- (id)init;	// IMP=0x0000000100020a60

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ADCloudKitDataStoreProtocol-Protocol.h"

@class CKRecordZone, CKServerChangeToken, NSArray, NSDictionary, NSString;
@protocol OS_dispatch_queue;

@interface ADCloudKitVoiceTriggerDataStore : NSObject <ADCloudKitDataStoreProtocol>
{
    _Bool _dataStoreIsOnSharedDatabase;	// 8 = 0x8
    _Bool _dataStoreShouldMirrorData;	// 9 = 0x9
    _Bool _isMirroredDataStore;	// 10 = 0xa
    CKRecordZone *_zone;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_serialQueue;	// 24 = 0x18
    NSArray *_supportedRecordTypes;	// 32 = 0x20
    NSDictionary *_assetManifest;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000001002a32f8
@property(retain, nonatomic) NSDictionary *assetManifest; // @synthesize assetManifest=_assetManifest;
@property(copy, nonatomic) NSArray *supportedRecordTypes; // @synthesize supportedRecordTypes=_supportedRecordTypes;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(copy, nonatomic) CKRecordZone *zone; // @synthesize zone=_zone;
@property(nonatomic) _Bool isMirroredDataStore; // @synthesize isMirroredDataStore=_isMirroredDataStore;
@property(nonatomic) _Bool dataStoreShouldMirrorData; // @synthesize dataStoreShouldMirrorData=_dataStoreShouldMirrorData;
@property(nonatomic) _Bool dataStoreIsOnSharedDatabase; // @synthesize dataStoreIsOnSharedDatabase=_dataStoreIsOnSharedDatabase;
- (void)synchronizeUsingActivity:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001002a3260
- (void)fetchDeviceTypesForAllLanguages:(CDUnknownBlockType)arg1;	// IMP=0x00000001002a3244
- (void)fetchDeviceTypesForLanguage:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001002a322c
- (void)deleteUserData:(id)arg1;	// IMP=0x00000001002a3170
- (_Bool)_expandVoiceTriggerArchiveFiles:(id)arg1;	// IMP=0x00000001002a2b60
- (id)_createVoiceTriggerArchiveFileWithEnrolledLanguageList:(id *)arg1;	// IMP=0x00000001002a2550
- (id)_createCacheDirectory;	// IMP=0x00000001002a2474
- (_Bool)_cleanupCacheDirectory;	// IMP=0x00000001002a2368
- (id)_cacheDirectory;	// IMP=0x00000001002a22e4
- (void)_mergeDataWithModifiedRecords:(id)arg1 deletedRecordIDs:(id)arg2 containsAllChanges:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000001002a1468
- (void)mergeDataWithModifiedRecords:(id)arg1 deletedRecordIDs:(id)arg2 containsAllChanges:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000001002a1348
- (void)_synchronizeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001002a09ec
- (void)synchronizeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001002a0954
@property(retain, nonatomic) CKServerChangeToken *serverChangeToken;
@property(nonatomic) _Bool hasSetUpRecordZoneSubscription;
- (id)init;	// IMP=0x00000001002a0554

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


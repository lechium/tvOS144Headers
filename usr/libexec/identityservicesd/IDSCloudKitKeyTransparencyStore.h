//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CKContainer, CKRecordZone, CUTUnsafePromise, IDSCloudKitKeyTransparencyDeviceRecord, IDSServerBag;
@protocol OS_dispatch_queue;

@interface IDSCloudKitKeyTransparencyStore : NSObject
{
    CKContainer *_container;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    IDSServerBag *_serverBag;	// 24 = 0x18
    CKRecordZone *_cachedRecordZone;	// 32 = 0x20
    IDSCloudKitKeyTransparencyDeviceRecord *_lastSuccessfulUpsertDeviceRecord;	// 40 = 0x28
    CUTUnsafePromise *_currentDeviceRecordsPromise;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000010017c820
@property(retain, nonatomic) CUTUnsafePromise *currentDeviceRecordsPromise; // @synthesize currentDeviceRecordsPromise=_currentDeviceRecordsPromise;
@property(retain, nonatomic) IDSCloudKitKeyTransparencyDeviceRecord *lastSuccessfulUpsertDeviceRecord; // @synthesize lastSuccessfulUpsertDeviceRecord=_lastSuccessfulUpsertDeviceRecord;
@property(retain, nonatomic) CKRecordZone *cachedRecordZone; // @synthesize cachedRecordZone=_cachedRecordZone;
@property(readonly, nonatomic) IDSServerBag *serverBag; // @synthesize serverBag=_serverBag;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) CKContainer *container; // @synthesize container=_container;
- (id)_no_timeout_no_cache_fetchKeyTransparencyDeviceRecords;	// IMP=0x000000010017acf0
- (void)_no_timeout_fetchKeyTransparencyDeviceRecordsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010017a32c
- (void)fetchKeyTransparencyDeviceRecordsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001001797f8
- (void)_no_timeout_nukeKeyTransparencyDeviceRecordsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100178e18
- (void)nukeKeyTransparencyDeviceRecordsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100178444
- (void)deleteKeyTransparencyDeviceRecordsForPushToken:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100178348
- (void)_no_timeout_upsertKeyTransparencyDeviceRecord:(id)arg1 forPushToken:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100176d10
- (void)upsertKeyTransparencyDeviceRecord:(id)arg1 forPushToken:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100175fac
- (void)_no_timeout_verifyEncryptionPrerequisitesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100175a78
- (void)fetchAccountEligibilityForDeviceToDeviceEncryptionWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100174e18
- (void)_createZoneIfNeededUsingTimeIntervalForRequest:(double)arg1 isNonDiscretionary:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100173c28
- (void)_copyDeviceRecord:(id)arg1 toCloudKitRecordRef:(id *)arg2;	// IMP=0x0000000100173abc
- (id)_cloudKitRecordForPushToken:(id)arg1 deviceRecord:(id)arg2;	// IMP=0x0000000100173788
- (id)_deviceRecordForCloudKitRecord:(id)arg1;	// IMP=0x0000000100173534
- (id)_clientErrorWithCode:(long long)arg1 debugDescription:(id)arg2 underlyingError:(id)arg3;	// IMP=0x00000001001733d8
- (id)_recordIDForPushToken:(id)arg1;	// IMP=0x00000001001732f4
- (id)_recordNameForPushToken:(id)arg1;	// IMP=0x0000000100173278
- (id)_recordType;	// IMP=0x000000010017325c
- (id)_zoneID;	// IMP=0x00000001001731dc
- (id)database;	// IMP=0x0000000100173170
- (id)initWithContainer:(id)arg1 serverBag:(id)arg2 queue:(id)arg3;	// IMP=0x0000000100173020
- (id)initWithQueue:(id)arg1;	// IMP=0x0000000100172ee8

@end


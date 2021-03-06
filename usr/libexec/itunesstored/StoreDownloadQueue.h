//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ISOperationQueue, LoadDownloadQueueOperation, NSMutableOrderedSet, NSMutableSet, NSNumber, NSSet;
@protocol OS_dispatch_queue;

@interface StoreDownloadQueue : NSObject
{
    NSMutableOrderedSet *_activeRestoreIDs;	// 8 = 0x8
    _Bool _automaticDownloadsAreDisabled;	// 16 = 0x10
    _Bool _checkAutomaticDownloadQueueOnEnable;	// 17 = 0x11
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 24 = 0x18
    NSNumber *_lastCheckedAccountID;	// 32 = 0x20
    LoadDownloadQueueOperation *_loadAutomaticDownloadQueueOperation;	// 40 = 0x28
    ISOperationQueue *_operationQueue;	// 48 = 0x30
    ISOperationQueue *_restoreOperationQueue;	// 56 = 0x38
    NSMutableSet *_storeQueueRequests;	// 64 = 0x40
    NSMutableOrderedSet *_trackedPurchaseDownloadIDs;	// 72 = 0x48
}

+ (void)triggerDownloadsWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00000001000b6124
+ (void)synchronizeAutomaticDownloadKindsWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00000001000b6088
+ (void)setAutomaticDownloadKindsWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00000001000b5afc
+ (void)reloadFromServerWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00000001000b5774
+ (void)observeXPCServer:(id)arg1;	// IMP=0x00000001000b5690
+ (void)getAutomaticDownloadKindsWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00000001000b54fc
+ (void)cancelRedownloadsWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00000001000b5410
+ (id)sharedDownloadQueue;	// IMP=0x00000001000b2820
- (void).cxx_destruct;	// IMP=0x00000001000bb2d4
- (id)_validQueueIdentifiersForPlatform;	// IMP=0x00000001000bb1c0
- (id)_validQueueIdentifiersForDaemon;	// IMP=0x00000001000bb034
- (void)_synchronizeAutomaticDownloadKinds:(CDUnknownBlockType)arg1;	// IMP=0x00000001000bad94
- (void)_setLastCheckedAccountID:(id)arg1;	// IMP=0x00000001000bacd4
- (id)_restorableDownloadsQueryInDatabase:(id)arg1;	// IMP=0x00000001000baa74
- (void)_retrySoftFailedRestoreDownloads;	// IMP=0x00000001000ba7e8
- (void)_retryCanceledRestoreDownloads;	// IMP=0x00000001000ba544
- (id)_newSetAutomaticDownloadKindsOperationWithDownloadKinds:(id)arg1 account:(id)arg2;	// IMP=0x00000001000ba494
- (id)_newQueueRequestsWithReason:(id)arg1 session:(id)arg2;	// IMP=0x00000001000b9ea8
- (id)_newOperationByCommitingAutomaticDownloadKinds:(id)arg1 account:(id)arg2;	// IMP=0x00000001000b9dcc
- (id)_newLoadQueueOperationForQueueRequest:(id)arg1;	// IMP=0x00000001000b9120
- (id)_newCheckQueueOperationForQueueRequest:(id)arg1;	// IMP=0x00000001000b8358
- (_Bool)_ignoreVideos;	// IMP=0x00000001000b81f4
- (void)_checkAutomaticDownloadQueue:(id)arg1;	// IMP=0x00000001000b7518
- (void)_handleMessage:(id)arg1 connection:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000001000b737c
- (id)_downloadQueryWithQueueRequest:(id)arg1 database:(id)arg2;	// IMP=0x00000001000b7130
- (id)_automaticDownloadsQueryWithDatabase:(id)arg1 accountID:(id)arg2;	// IMP=0x00000001000b6f94
- (void)_addOperationsForRequests:(id)arg1 reason:(id)arg2;	// IMP=0x00000001000b6848
- (void)_networkTypeChangedNotification:(id)arg1;	// IMP=0x00000001000b6724
- (void)_accountStoreChangedNotification:(id)arg1;	// IMP=0x00000001000b65a4
- (void)_accountAuthenticatedNotification:(id)arg1;	// IMP=0x00000001000b62f4
- (void)synchronizeAutomaticDownloadKinds;	// IMP=0x00000001000b5400
- (void)setAutomaticDownloadKinds:(id)arg1 account:(id)arg2;	// IMP=0x00000001000b5368
@property(copy, nonatomic) NSSet *automaticDownloadKinds;
- (void)restoreDownloadsWithIdentifiers:(id)arg1 reason:(id)arg2;	// IMP=0x00000001000b4bf8
- (void)restoreAllRestorableDownloadsWithReason:(id)arg1;	// IMP=0x00000001000b49c4
@property(readonly, nonatomic) NSSet *enabledDownloadKinds;
- (void)enableAutomaticDownloadsWithReason:(id)arg1;	// IMP=0x00000001000b45a8
- (void)disableAutomaticDownloadsWithReason:(id)arg1;	// IMP=0x00000001000b4370
@property(readonly) NSSet *downloadKindsBeingChecked;
- (void)commitAutomaticDownloadKinds:(id)arg1 markAsDirty:(_Bool)arg2;	// IMP=0x00000001000b3b60
- (void)checkQueuesWithRequest:(id)arg1;	// IMP=0x00000001000b3a4c
- (_Bool)checkQueuesWithReason:(id)arg1;	// IMP=0x00000001000b383c
- (void)checkAutomaticDownloadQueue;	// IMP=0x00000001000b2c74
- (_Bool)cancelAllRedownloads;	// IMP=0x00000001000b2954
- (void)dealloc;	// IMP=0x00000001000b2688
- (id)init;	// IMP=0x00000001000b1fc0

@end


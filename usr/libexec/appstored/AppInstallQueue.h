//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "AppInstallPipeline-Protocol.h"
#import "CoordinatorPromiseDataConsumerDelegate-Protocol.h"

@class AppInstallsDatabaseStore, AssetSession, NSMutableDictionary, NSOperationQueue, NSString;
@protocol OS_dispatch_queue;

@interface AppInstallQueue : NSObject <CoordinatorPromiseDataConsumerDelegate, AppInstallPipeline>
{
    AssetSession *_assetSession;	// 8 = 0x8
    AppInstallsDatabaseStore *_databaseStore;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 24 = 0x18
    NSOperationQueue *_operationQueue;	// 32 = 0x20
    NSMutableDictionary *_requestLookup;	// 40 = 0x28
}

+ (long long)_computedPhaseForCoordinatorState:(unsigned long long)arg1 allowResume:(_Bool *)arg2;	// IMP=0x0000000100260e90
+ (id)sharedInstance;	// IMP=0x0000000100260cdc
- (void).cxx_destruct;	// IMP=0x0000000100266b40
- (void)_releaseTerminationAssertionUsingInstallInfo:(id)arg1;	// IMP=0x0000000100266b3c
- (_Bool)_isRecoverableNetworkError:(id)arg1;	// IMP=0x0000000100266a94
- (void)_endEventServiceInstallationEventForInstallInfo:(id)arg1;	// IMP=0x0000000100266a90
- (void)_postEventServiceInstallationEventWithPhase:(long long)arg1 forInstallInfo:(id)arg2 entity:(id)arg3;	// IMP=0x0000000100266a8c
- (void)_handleRecoveryResult:(_Bool)arg1 error:(id)arg2 usingInstallInfo:(id)arg3;	// IMP=0x00000001002667e0
- (void)_handleAssetResult:(id)arg1 error:(id)arg2 usingInstallInfo:(id)arg3;	// IMP=0x00000001002653d8
- (void)_finishPostambleTaskWithInstallInfo:(id)arg1;	// IMP=0x0000000100265214
- (void)_finishPreambleTaskWithResponse:(id)arg1;	// IMP=0x0000000100264798
- (void)_finishInstallingOperationWithResponse:(id)arg1;	// IMP=0x0000000100264394
- (void)_finishDownloadingOperationWithResponse:(id)arg1;	// IMP=0x0000000100263b48
- (void)_beginPreambleWithTask:(id)arg1 transaction:(id)arg2;	// IMP=0x000000010026372c
- (void)_beginPreambleForInstallsMatchingPredicate:(id)arg1 transaction:(id)arg2;	// IMP=0x0000000100263398
- (void)_beginPostambleUsingInstallInfo:(id)arg1 transaction:(id)arg2;	// IMP=0x0000000100263010
- (void)_beginInstallingUsingInstallInfo:(id)arg1 transaction:(id)arg2;	// IMP=0x0000000100262bb4
- (void)_beginDownloadingUsingInstallInfo:(id)arg1 transaction:(id)arg2;	// IMP=0x0000000100262784
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000001002624dc
- (void)coordinatorPromiseDataConsumer:(id)arg1 willBeginUsingPromise:(id)arg2 forReference:(id)arg3;	// IMP=0x00000001002622e4
- (void)stopInstallIDs:(id)arg1 withReason:(long long)arg2 transaction:(id)arg3;	// IMP=0x00000001002620bc
- (void)startInstallIDs:(id)arg1 transaction:(id)arg2;	// IMP=0x0000000100261e14
- (void)finishInstallIDs:(id)arg1 transaction:(id)arg2;	// IMP=0x0000000100261b5c
- (void)validateActiveInstallations;	// IMP=0x0000000100260ed0
- (id)init;	// IMP=0x0000000100260d48

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CPLCloudKitScopeProvider-Protocol.h"
#import "CPLCloudKitTrackableTask-Protocol.h"
#import "CPLEngineTransportTask-Protocol.h"

@class CKOperation, CKOperationGroup, CKRecordID, CPLSyncSession, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableSet, NSProgress, NSString;
@protocol CPLCloudKitActivityRequest, CPLCloudKitTaskController, CPLCloudKitTransportTaskGate, CPLEngineTransportGroup, OS_dispatch_queue, OS_xpc_object;

@interface CPLCloudKitTransportTask : NSObject <CPLCloudKitTrackableTask, CPLEngineTransportTask, CPLCloudKitScopeProvider>
{
    NSMutableArray *_currentOperations;	// 8 = 0x8
    NSMutableArray *_lastOperationRequestUUIDs;	// 16 = 0x10
    NSMutableDictionary *_cachedScopes;	// 24 = 0x18
    NSMutableDictionary *_cacheScopeIdentifiersPerZoneID;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_queue;	// 40 = 0x28
    _Bool _mustCallTaskDidFinish;	// 48 = 0x30
    unsigned long long _nonCKOperationCount;	// 56 = 0x38
    _Bool _foregroundHasBeenChanged;	// 64 = 0x40
    _Bool _hasProgress;	// 65 = 0x41
    NSProgress *_progress;	// 72 = 0x48
    NSObject<OS_dispatch_queue> *_progressQueue;	// 80 = 0x50
    NSMutableSet *_associatedMetrics;	// 88 = 0x58
    id <CPLCloudKitActivityRequest> _activityRequest;	// 96 = 0x60
    NSObject<OS_xpc_object> *_activity;	// 104 = 0x68
    _Bool _highPriorityBackground;	// 112 = 0x70
    _Bool _forcedTask;	// 113 = 0x71
    _Bool _backgroundTask;	// 114 = 0x72
    _Bool _foreground;	// 115 = 0x73
    _Bool _allowsCellular;	// 116 = 0x74
    _Bool _boostable;	// 117 = 0x75
    _Bool _isUpload;	// 118 = 0x76
    _Bool _isMetadata;	// 119 = 0x77
    _Bool _cancelled;	// 120 = 0x78
    id <CPLEngineTransportGroup> _transportGroup;	// 128 = 0x80
    id trackingContext;	// 136 = 0x88
    id <CPLCloudKitTaskController> _controller;	// 144 = 0x90
    id <CPLCloudKitTransportTaskGate> _gate;	// 152 = 0x98
    CPLSyncSession *_session;	// 160 = 0xa0
    CKRecordID *_userRecordID;	// 168 = 0xa8
    NSString *_operationType;	// 176 = 0xb0
    NSString *_sourceBundleIdentifier;	// 184 = 0xb8
    double _timeoutIntervalForRequest;	// 192 = 0xc0
    double _timeoutIntervalForResource;	// 200 = 0xc8
    NSString *_idleDescription;	// 208 = 0xd0
    NSDictionary *_transportScopes;	// 216 = 0xd8
}

+ (_Bool)allowsCellularForDownloadOperationOfSize:(unsigned long long)arg1 isForeground:(_Bool)arg2 isHighPriority:(_Bool)arg3;	// IMP=0x00000001000a718c
+ (_Bool)allowsCellularForDownloadOperationOfResource:(id)arg1 isForeground:(_Bool)arg2 isHighPriority:(_Bool)arg3;	// IMP=0x00000001000a710c
+ (void)initialize;	// IMP=0x00000001000a2adc
- (void).cxx_destruct;	// IMP=0x00000001000a7704
@property(readonly, nonatomic, getter=isCancelled) _Bool cancelled; // @synthesize cancelled=_cancelled;
@property(copy, nonatomic) NSDictionary *transportScopes; // @synthesize transportScopes=_transportScopes;
@property(copy) NSString *idleDescription; // @synthesize idleDescription=_idleDescription;
@property(nonatomic) _Bool isMetadata; // @synthesize isMetadata=_isMetadata;
@property(nonatomic) _Bool isUpload; // @synthesize isUpload=_isUpload;
@property(readonly, nonatomic) double timeoutIntervalForResource; // @synthesize timeoutIntervalForResource=_timeoutIntervalForResource;
@property(readonly, nonatomic) double timeoutIntervalForRequest; // @synthesize timeoutIntervalForRequest=_timeoutIntervalForRequest;
@property(nonatomic, getter=isBoostable) _Bool boostable; // @synthesize boostable=_boostable;
@property(nonatomic) _Bool allowsCellular; // @synthesize allowsCellular=_allowsCellular;
@property(copy, nonatomic) NSString *sourceBundleIdentifier; // @synthesize sourceBundleIdentifier=_sourceBundleIdentifier;
@property(readonly, nonatomic) NSString *operationType; // @synthesize operationType=_operationType;
@property(readonly, nonatomic) CKRecordID *userRecordID; // @synthesize userRecordID=_userRecordID;
@property(readonly, nonatomic) CPLSyncSession *session; // @synthesize session=_session;
@property(retain, nonatomic) id <CPLCloudKitTransportTaskGate> gate; // @synthesize gate=_gate;
@property(readonly, nonatomic) id <CPLCloudKitTaskController> controller; // @synthesize controller=_controller;
@property(retain, nonatomic) id trackingContext; // @synthesize trackingContext;
@property(nonatomic, getter=isBackgroundTask) _Bool backgroundTask; // @synthesize backgroundTask=_backgroundTask;
@property(nonatomic, getter=isForcedTask) _Bool forcedTask; // @synthesize forcedTask=_forcedTask;
@property(nonatomic, getter=isHighPriorityBackground) _Bool highPriorityBackground; // @synthesize highPriorityBackground=_highPriorityBackground;
@property(retain, nonatomic) id <CPLEngineTransportGroup> transportGroup; // @synthesize transportGroup=_transportGroup;
- (id)scopeIdentifierFromZoneID:(id)arg1;	// IMP=0x00000001000a7434
- (id)zoneIDFromScopeIdentifier:(id)arg1;	// IMP=0x00000001000a7388
- (id)cloudKitScopeForScopeIdentifier:(id)arg1;	// IMP=0x00000001000a71b0
- (id)_stringForNetworkBehavior:(unsigned long long)arg1;	// IMP=0x00000001000a70d0
- (id)_stringForQoS:(long long)arg1;	// IMP=0x00000001000a7070
- (id)_statusForConfiguration:(id)arg1;	// IMP=0x00000001000a6f5c
- (void)setupConfigurationForOperation:(id)arg1;	// IMP=0x00000001000a6af0
- (unsigned long long)_networkBehavior;	// IMP=0x00000001000a6a58
- (void)runOperations;	// IMP=0x00000001000a6994
- (void)processErrorIfNeeded:(id)arg1;	// IMP=0x00000001000a6984
- (void)popTaskOperation;	// IMP=0x00000001000a6954
- (void)pushTaskOperation;	// IMP=0x00000001000a6924
- (void)taskDidFinish;	// IMP=0x00000001000a6684
- (void)operationDidFinish:(id)arg1 error:(id)arg2;	// IMP=0x00000001000a62c4
- (void)updateContextWithBlock:(CDUnknownBlockType)arg1 forOperation:(id)arg2;	// IMP=0x00000001000a612c
- (void)updateProgress:(double)arg1 forOperation:(id)arg2;	// IMP=0x00000001000a5fa0
- (void)updateOneBatchForOperation:(id)arg1;	// IMP=0x00000001000a5e24
- (void)associateMetric:(id)arg1;	// IMP=0x00000001000a5d5c
@property(readonly, nonatomic) NSArray *lastOperationRequestUUIDs;
- (void)operationDidFinishWithError:(id)arg1;	// IMP=0x00000001000a5bac
- (void)operationDidFinish;	// IMP=0x00000001000a5b9c
- (void)updateContextWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001000a59f0
- (void)updateProgress:(double)arg1;	// IMP=0x00000001000a584c
- (void)updateOneBatch;	// IMP=0x00000001000a56dc
- (void)launchOperation:(id)arg1 type:(long long)arg2 withContext:(id)arg3 sourceBundleIdentifiers:(id)arg4;	// IMP=0x00000001000a4840
- (void)launchOperation:(id)arg1 type:(long long)arg2 withContext:(id)arg3;	// IMP=0x00000001000a4740
@property(readonly, nonatomic) CKOperation *currentOperation;
- (_Bool)shouldRunOperationsWithError:(id *)arg1;	// IMP=0x00000001000a4558
- (void)dispatchAfter:(double)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x00000001000a438c
- (void)dispatchAsync:(CDUnknownBlockType)arg1;	// IMP=0x00000001000a40cc
- (void)cancelIfBlocked;	// IMP=0x00000001000a3d98
- (void)_cancelAllOperationsIfBlocked;	// IMP=0x00000001000a3a7c
- (void)cancel;	// IMP=0x00000001000a3654
- (void)runWithinSyncSession:(id)arg1;	// IMP=0x00000001000a3648
- (void)runWithNoSyncSession;	// IMP=0x00000001000a3638
- (void)_runWithSyncSession:(id)arg1;	// IMP=0x00000001000a3130
- (void)_acquireActivityOfTypeAndLaunchOperation:(long long)arg1;	// IMP=0x00000001000a2ef0
- (void)_reallyStartOperation;	// IMP=0x00000001000a2de8
@property(nonatomic) _Bool foreground; // @synthesize foreground=_foreground;
@property(readonly, nonatomic) CKOperationGroup *operationGroup;
- (id)initWithController:(id)arg1 operationType:(id)arg2;	// IMP=0x00000001000a2b34

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


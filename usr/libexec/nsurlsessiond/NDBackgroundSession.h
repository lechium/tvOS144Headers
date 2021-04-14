//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NDApplicationObserver-Protocol.h"
#import "NDBackgroundSessionProtocol-Protocol.h"
#import "NDCallbackQueueDelegate-Protocol.h"
#import "NDCredentialStorageDelegate-Protocol.h"
#import "NSURLSessionDataDelegate_Internal-Protocol.h"
#import "NSURLSessionDelegate_Internal-Protocol.h"
#import "NSURLSessionDownloadDelegate-Protocol.h"
#import "NSURLSessionDownloadDelegate_Private-Protocol.h"
#import "NSURLSessionTaskDelegatePrivate-Protocol.h"

@class NDApplication, NDCallbackQueue, NDCredentialStorage, NSMutableArray, NSMutableDictionary, NSString, NSURL, NSURLSession, NSUUID, NSXPCConnection;
@protocol NDBackgroundSessionDelegate, NSXPCProxyCreating><NDBackgroundSessionClient, OS_dispatch_queue;

@interface NDBackgroundSession : NSObject <NDBackgroundSessionProtocol, NDCallbackQueueDelegate, NSURLSessionDataDelegate_Internal, NSURLSessionDownloadDelegate, NSURLSessionTaskDelegatePrivate, NSURLSessionDownloadDelegate_Private, NSURLSessionDelegate_Internal, NDCredentialStorageDelegate, NDApplicationObserver>
{
    NSURLSession *_userInitiatedSession;	// 8 = 0x8
    NSURLSession *_discretionaryPrioritySession;	// 16 = 0x10
    NDCredentialStorage *_credentialStorage;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_archiveQueue;	// 32 = 0x20
    NDApplication *_clientApplication;	// 40 = 0x28
    NDApplication *_connectedExtension;	// 48 = 0x30
    NSMutableDictionary *_tasksToIdentifiers;	// 56 = 0x38
    NSMutableDictionary *_identifiersToTasks;	// 64 = 0x40
    NSMutableDictionary *_identifiersToMonitors;	// 72 = 0x48
    NSMutableDictionary *_identifiersToStreams;	// 80 = 0x50
    NSMutableDictionary *_identifiersToStreamQueues;	// 88 = 0x58
    NSMutableArray *_outstandingTaskIDs;	// 96 = 0x60
    double _lastArchiveTime;	// 104 = 0x68
    _Bool _archiveWasDeferred;	// 112 = 0x70
    NSURL *_sessionDirectory;	// 120 = 0x78
    NSURL *_downloadDirectory;	// 128 = 0x80
    NSURL *_uploadsDirectory;	// 136 = 0x88
    _Bool _performsEVCertCheck;	// 144 = 0x90
    _Bool _clientImplementsWillSendRequest;	// 145 = 0x91
    _Bool _clientImplementsWillBeginDelayedRequest;	// 146 = 0x92
    _Bool _clientImplementsSessionChallenge;	// 147 = 0x93
    _Bool _clientImplementsTaskChallenge;	// 148 = 0x94
    _Bool _sendsLaunchEvents;	// 149 = 0x95
    _Bool _discretionary;	// 150 = 0x96
    _Bool _obliterated;	// 151 = 0x97
    _Bool _cleanedUp;	// 152 = 0x98
    _Bool _hasBeenSignalledToDeliverPendingEvents;	// 153 = 0x99
    _Bool _infersDiscretionary;	// 154 = 0x9a
    _Bool _shouldPullInitialCredentials;	// 155 = 0x9b
    CDUnknownBlockType _completeReconnectionBlock;	// 160 = 0xa0
    int _clientPID;	// 168 = 0xa8
    NSXPCConnection *_xpcConn;	// 176 = 0xb0
    NSString *_watchExtensionBundleIdentifier;	// 184 = 0xb8
    _Bool _retryDataTasks;	// 192 = 0xc0
    NSObject<OS_dispatch_queue> *_workQueue;	// 200 = 0xc8
    NDCallbackQueue *_callbackQueue;	// 208 = 0xd0
    NDApplication *_monitoredApplication;	// 216 = 0xd8
    NSMutableDictionary *_identifiersToTaskInfo;	// 224 = 0xe0
    id <NSXPCProxyCreating><NDBackgroundSessionClient> _clientProxy;	// 232 = 0xe8
    id <NDBackgroundSessionDelegate> _delegate;	// 240 = 0xf0
    NSUUID *_uuid;	// 248 = 0xf8
    NSString *_identifier;	// 256 = 0x100
    NSString *_clientBundleID;	// 264 = 0x108
    NSString *_monitoredAppBundleID;	// 272 = 0x110
    NSString *_secondaryID;	// 280 = 0x118
    CDUnknownBlockType _invalidateReply;	// 288 = 0x120
    NSString *_sharedContainerIdentifier;	// 296 = 0x128
}

- (void).cxx_destruct;	// IMP=0x000000010002b3a4
@property(copy) NSString *sharedContainerIdentifier; // @synthesize sharedContainerIdentifier=_sharedContainerIdentifier;
@property(copy) CDUnknownBlockType invalidateReply; // @synthesize invalidateReply=_invalidateReply;
@property(readonly) NSString *secondaryID; // @synthesize secondaryID=_secondaryID;
@property(readonly) NSString *monitoredAppBundleID; // @synthesize monitoredAppBundleID=_monitoredAppBundleID;
@property(readonly) NSString *clientBundleID; // @synthesize clientBundleID=_clientBundleID;
@property(readonly) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly) NSUUID *uuid; // @synthesize uuid=_uuid;
@property __weak id <NDBackgroundSessionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_URLSession:(id)arg1 task:(id)arg2 getAuthHeadersForResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000010002ac54
- (void)_URLSession:(id)arg1 openFileAtPath:(id)arg2 mode:(int)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000010002a81c
- (id)_URLSession:(id)arg1 downloadTaskNeedsDownloadDirectory:(id)arg2;	// IMP=0x000000010002a790
- (void)_URLSession:(id)arg1 downloadTask:(id)arg2 didReceiveResponse:(id)arg3;	// IMP=0x000000010002a470
- (void)URLSession:(id)arg1 task:(id)arg2 _conditionalRequirementsChanged:(_Bool)arg3;	// IMP=0x000000010002a2b0
- (void)URLSession:(id)arg1 task:(id)arg2 _isWaitingForConnectionWithReason:(long long)arg3;	// IMP=0x000000010002a094
- (void)URLSession:(id)arg1 task:(id)arg2 _willSendRequestForEstablishedConnection:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000100029858
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5;	// IMP=0x0000000100029690
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didResumeAtOffset:(long long)arg3 expectedTotalBytes:(long long)arg4;	// IMP=0x0000000100029408
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;	// IMP=0x0000000100029108
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didBecomeDownloadTask:(id)arg3;	// IMP=0x0000000100028d10
- (void)_URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000001000287d4
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000100028144
- (void)URLSession:(id)arg1 dataTask:(id)arg2 willCacheResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000100028134
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;	// IMP=0x0000000100026fc0
- (void)URLSession:(id)arg1 task:(id)arg2 needNewBodyStream:(CDUnknownBlockType)arg3;	// IMP=0x0000000100026c08
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;	// IMP=0x0000000100026ac4
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000100025f48
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000100025174
- (_Bool)trustPassesExtendedValidation:(struct __SecTrust *)arg1;	// IMP=0x0000000100024f18
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;	// IMP=0x0000000100024da8
- (void)invalidateWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000100024b70
- (void)resetStorageWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000100024b10
- (void)setTLSSessionCachePrefix:(id)arg1;	// IMP=0x0000000100024a9c
- (void)setDiscretionaryOverride:(long long)arg1 forTaskWithIdentifier:(unsigned long long)arg2;	// IMP=0x00000001000245fc
- (void)setTLSMaximumSupportedProtocolVersion:(unsigned short)arg1 forTaskWithIdentifier:(unsigned long long)arg2;	// IMP=0x000000010002449c
- (void)setTLSMinimumSupportedProtocolVersion:(unsigned short)arg1 forTaskWithIdentifier:(unsigned long long)arg2;	// IMP=0x000000010002433c
- (void)setExpectedProgressTarget:(unsigned long long)arg1 forTaskWithIdentifier:(unsigned long long)arg2;	// IMP=0x00000001000241dc
- (void)setBytesPerSecondLimit:(long long)arg1 forTaskWithIdentifier:(unsigned long long)arg2;	// IMP=0x0000000100023f70
- (void)setLoadingPoolPriority:(double)arg1 forTaskWithIdentifier:(unsigned long long)arg2;	// IMP=0x0000000100023c20
- (void)setPriority:(long long)arg1 forTaskWithIdentifier:(unsigned long long)arg2;	// IMP=0x000000010002345c
- (void)setDescription:(id)arg1 forTask:(unsigned long long)arg2;	// IMP=0x00000001000232dc
- (void)setPropertyOnStreamWithIdentifier:(unsigned long long)arg1 propDict:(id)arg2 propKey:(id)arg3 withReply:(CDUnknownBlockType)arg4;	// IMP=0x0000000100022fd8
- (void)resumeTaskWithIdentifier:(unsigned long long)arg1 withProperties:(id)arg2;	// IMP=0x0000000100022b4c
- (void)suspendTaskWithIdentifier:(unsigned long long)arg1;	// IMP=0x0000000100022928
- (void)cancelTaskWithIdentifier:(unsigned long long)arg1;	// IMP=0x00000001000226d0
- (void)cancelTaskWithIdentifier:(unsigned long long)arg1 byProducingResumeData:(CDUnknownBlockType)arg2;	// IMP=0x00000001000224b8
- (void)avAggregateAssetDownloadTaskWithDownloadToken:(unsigned long long)arg1 serializedMediaSelections:(id)arg2 assetTitle:(id)arg3 assetArtworkData:(id)arg4 options:(id)arg5 childDownloadSessionIdentifier:(id)arg6 identifier:(unsigned long long)arg7 uniqueIdentifier:(id)arg8 reply:(CDUnknownBlockType)arg9;	// IMP=0x00000001000224a8
- (void)avAssetDownloadTaskWithDownloadToken:(unsigned long long)arg1 URL:(id)arg2 destinationURL:(id)arg3 temporaryDestinationURL:(id)arg4 assetTitle:(id)arg5 assetArtworkData:(id)arg6 options:(id)arg7 identifier:(unsigned long long)arg8 uniqueIdentifier:(id)arg9 taskKind:(unsigned long long)arg10 reply:(CDUnknownBlockType)arg11;	// IMP=0x0000000100022498
- (void)dataTaskWithRequest:(id)arg1 originalRequest:(id)arg2 identifier:(unsigned long long)arg3 uniqueIdentifier:(id)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x00000001000220c4
- (void)uploadTaskWithRequest:(id)arg1 originalRequest:(id)arg2 fromFile:(id)arg3 sandboxExtensionData:(id)arg4 identifier:(unsigned long long)arg5 uniqueIdentifier:(id)arg6 potentialCredentials:(id)arg7 reply:(CDUnknownBlockType)arg8;	// IMP=0x0000000100021a00
- (void)downloadTaskWithRequest:(id)arg1 originalRequest:(id)arg2 downloadFilePath:(id)arg3 identifier:(unsigned long long)arg4 uniqueIdentifier:(id)arg5 reply:(CDUnknownBlockType)arg6;	// IMP=0x0000000100021420
- (void)downloadTaskWithResumeData:(id)arg1 identifier:(unsigned long long)arg2 uniqueIdentifier:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0000000100020f98
- (void)pingForXPCObjectValidityWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000100020f8c
- (void)performCommonSetupForTask:(id)arg1 taskInfo:(id)arg2 identifier:(unsigned long long)arg3 discretionaryStatus:(_Bool)arg4;	// IMP=0x0000000100020b24
- (void)setupDASPropertiesOnTask:(id)arg1 taskInfo:(id)arg2 discretionaryStatus:(_Bool)arg3;	// IMP=0x0000000100020390
- (void)wakeUpClient:(long long)arg1;	// IMP=0x000000010001fc3c
- (void)clientAcknowledgedTerminalCallbackForTask:(unsigned long long)arg1;	// IMP=0x000000010001f908
- (void)errorOccurredDuringAuthCallbackDelivery:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010001f7a0
- (void)errorOccurredDuringFinishedCallbackDelivery:(id)arg1;	// IMP=0x000000010001f64c
- (id)getClientProxy;	// IMP=0x000000010001f644
- (id)inputStreamWithFileHandle:(id)arg1 taskIdentifier:(unsigned long long)arg2;	// IMP=0x000000010001f468
- (id)makeTempUploadFile:(id)arg1 withExtensionData:(id)arg2;	// IMP=0x000000010001f05c
- (void)requeueTask:(unsigned long long)arg1;	// IMP=0x000000010001f04c
- (void)requeueTask:(unsigned long long)arg1 skipResume:(_Bool)arg2;	// IMP=0x000000010001eff0
- (void)removeOutstandingTaskWithIdentifier:(unsigned long long)arg1;	// IMP=0x000000010001ef84
- (void)addOutstandingTaskWithIdentifier:(unsigned long long)arg1;	// IMP=0x000000010001ef18
- (void)enqueueTaskWithIdentifier:(unsigned long long)arg1;	// IMP=0x000000010001ecd8
- (void)taskShouldSuspend:(unsigned long long)arg1;	// IMP=0x000000010001e9e8
- (void)taskShouldResume:(unsigned long long)arg1;	// IMP=0x000000010001e680
- (void)handleWillBeginDelayedRequestForTaskWithIdentifier:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010001df10
- (void)handleEarliestBeginDateForTaskWithIdentifier:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010001d9c0
- (void)cancelMonitorForTask:(unsigned long long)arg1;	// IMP=0x000000010001d8bc
- (_Bool)currentDiscretionaryStatus:(id)arg1 withOptionalTaskInfo:(id)arg2;	// IMP=0x000000010001cef8
- (long long)priorityForDiscretionaryStatus:(_Bool)arg1;	// IMP=0x000000010001cee4
- (id)getTLSSessionCachePrefix;	// IMP=0x000000010001ceac
- (id)getTasksForReconnection;	// IMP=0x000000010001cd40
- (void)triggerPowerlogPeriodicUpdate;	// IMP=0x000000010001cb88
- (void)fillInPropertiesForTaskInfo:(id)arg1 withTaskID:(id)arg2;	// IMP=0x000000010001cab4
- (void)fillInByteCountsForTaskInfo:(id)arg1 withTaskID:(id)arg2;	// IMP=0x000000010001c9a0
- (void)allowReconnect;	// IMP=0x000000010001c948
- (void)reconnectClient:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000010001c640
- (void)clientDidDisconnect;	// IMP=0x000000010001c460
- (void)cancelTasksRequiringClientConnectionAndResumeUnstartedTasks;	// IMP=0x000000010001bf98
- (_Bool)finalizeTaskCompletionWithSuppressedWake:(_Bool)arg1;	// IMP=0x000000010001bf04
- (void)handleCompletionOfTask:(id)arg1 identifier:(unsigned long long)arg2 taskInfo:(id)arg3 isRecoverable:(_Bool)arg4 suppressWake:(_Bool)arg5;	// IMP=0x000000010001be40
- (_Bool)clientIsActive;	// IMP=0x000000010001bce8
- (_Bool)sessionHasOutstandingTasks;	// IMP=0x000000010001bbac
- (void)removeUploadFileForTaskInfo:(id)arg1;	// IMP=0x000000010001bb38
- (void)removeDownloadFileForTaskInfo:(id)arg1;	// IMP=0x000000010001ba80
- (_Bool)retryTask:(id)arg1 originalError:(id)arg2 transactionMetrics:(id)arg3;	// IMP=0x000000010001b004
- (id)clientErrorForError:(id)arg1;	// IMP=0x000000010001ad8c
- (id)restoreTasks:(_Bool *)arg1;	// IMP=0x000000010001ac08
- (id)restoreTasksFromArchivedInfo:(id)arg1;	// IMP=0x000000010001ab08
- (id)restoreTask:(id)arg1 isOutstanding:(_Bool *)arg2;	// IMP=0x000000010001a668
- (id)restoreCompletedTask:(id)arg1;	// IMP=0x0000000100019f0c
- (id)restoreInProgressTask:(id)arg1;	// IMP=0x00000001000197e0
- (id)createNewTaskFromInfo:(id)arg1;	// IMP=0x00000001000191d4
- (void)ensureSessionDownloadDirectoryExists;	// IMP=0x0000000100019000
- (void)configureTask:(id)arg1 withTaskInfo:(id)arg2;	// IMP=0x0000000100018d60
- (void)configureAdditionalPropertiesOnTask:(id)arg1 taskInfo:(id)arg2;	// IMP=0x0000000100018b38
- (id)sanitizeTaskProperties:(id)arg1;	// IMP=0x0000000100017ee8
- (id)adjustDiscretionaryStatusForTaskInfo:(id)arg1;	// IMP=0x0000000100017e58
- (void)updateTaskInfoBasedOnCurrentDiscretionaryStatus:(id)arg1;	// IMP=0x0000000100017c08
- (id)requestWithAdjustedWindowForTaskInfo:(id)arg1;	// IMP=0x0000000100017888
- (id)descriptionForTCPConnectionWaitingReason:(long long)arg1;	// IMP=0x0000000100017750
- (id)descriptionForRequest:(id)arg1;	// IMP=0x0000000100017620
- (id)descriptionForTaskWithIdentifier:(unsigned long long)arg1;	// IMP=0x0000000100017530
- (void)_onqueue_archiveTaskInfo;	// IMP=0x0000000100017414
- (void)archiveTimerFired;	// IMP=0x00000001000173bc
- (void)archiveTaskInfo:(_Bool)arg1;	// IMP=0x000000010001734c
- (id)tasksArchivePath;	// IMP=0x00000001000172d4
- (void)obliterate;	// IMP=0x000000010001705c
- (void)cleanupSessionWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100016e78
- (id)setupDownloadDirectory;	// IMP=0x0000000100016ba0
- (void)clientApplicationWasReinstalled;	// IMP=0x0000000100016660
- (void)backgroundUpdatesEnabledForApplication:(id)arg1;	// IMP=0x00000001000165dc
- (void)applicationWasSuspended:(id)arg1;	// IMP=0x0000000100016558
- (_Bool)hasConnectedClient;	// IMP=0x00000001000163f0
- (void)setXPCConnection:(id)arg1;	// IMP=0x000000010001609c
- (id)sessionForDiscretionaryStatus:(_Bool)arg1;	// IMP=0x0000000100016084
- (id)initWithConfiguration:(id)arg1 bundleID:(id)arg2 isSpringBoardApp:(_Bool)arg3 downloadDirectory:(id)arg4 options:(id)arg5 clientProxy:(id)arg6 delegate:(id)arg7 workQueue:(id)arg8 archiveQueue:(id)arg9;	// IMP=0x0000000100015070
- (id)configurationWithClientConfiguration:(id)arg1 discretionary:(_Bool)arg2;	// IMP=0x000000010001429c
- (double)defaultWindowDurationForResourceTimeout:(double)arg1;	// IMP=0x0000000100014284

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


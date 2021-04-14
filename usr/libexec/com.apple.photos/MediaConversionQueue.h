//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "PFCameraViewfinderSessionWatcherDelegate-Protocol.h"

@class MediaConversionQueueEntry, NSMutableArray, NSString, PFCameraViewfinderSessionWatcher;
@protocol MediaConversionQueueDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MediaConversionQueue : NSObject <PFCameraViewfinderSessionWatcherDelegate>
{
    struct os_unfair_lock_s _stateLock;	// 8 = 0x8
    unsigned long long _queueEntryCounter;	// 16 = 0x10
    unsigned long long _requestCounter;	// 24 = 0x18
    NSMutableArray *_queuedRequests;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_requestProcessingQueue;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_cameraWatcherQueue;	// 48 = 0x30
    MediaConversionQueueEntry *_currentlyProcessingRequestQueueEntry;	// 56 = 0x38
    NSObject<MediaConversionQueueDelegate> *_delegate;	// 64 = 0x40
    PFCameraViewfinderSessionWatcher *_cameraWatcher;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000010000e5c8
@property(retain) PFCameraViewfinderSessionWatcher *cameraWatcher; // @synthesize cameraWatcher=_cameraWatcher;
@property __weak NSObject<MediaConversionQueueDelegate> *delegate; // @synthesize delegate=_delegate;
@property(retain) MediaConversionQueueEntry *currentlyProcessingRequestQueueEntry; // @synthesize currentlyProcessingRequestQueueEntry=_currentlyProcessingRequestQueueEntry;
@property(retain) NSObject<OS_dispatch_queue> *cameraWatcherQueue; // @synthesize cameraWatcherQueue=_cameraWatcherQueue;
@property(retain) NSObject<OS_dispatch_queue> *requestProcessingQueue; // @synthesize requestProcessingQueue=_requestProcessingQueue;
@property(retain) NSMutableArray *queuedRequests; // @synthesize queuedRequests=_queuedRequests;
@property unsigned long long requestCounter; // @synthesize requestCounter=_requestCounter;
@property unsigned long long queueEntryCounter; // @synthesize queueEntryCounter=_queueEntryCounter;
@property struct os_unfair_lock_s stateLock; // @synthesize stateLock=_stateLock;
- (void)cameraWatcherDidChangeState:(id)arg1;	// IMP=0x000000010000e334
- (void)sendCancellationReplyForClientRequest:(id)arg1;	// IMP=0x000000010000e10c
- (void)cancelRequestsForConnectionIdentifier:(id)arg1;	// IMP=0x000000010000df2c
- (void)assertDelegate:(id)arg1 respondsToSelector:(SEL)arg2;	// IMP=0x000000010000ddf4
- (_Bool)findAndRemoveCancelledRequest:(id *)arg1 queueEntryWithoutRemainingClients:(id *)arg2 forRequestIdentifier:(id)arg3 shouldCancelCurrentQueueEntry:(_Bool *)arg4;	// IMP=0x000000010000db14
- (void)cancelRequestWithIdentifier:(id)arg1;	// IMP=0x000000010000d88c
- (void)modifyRequestWithIdentifier:(id)arg1 changeHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010000d618
- (id)orderingSummaryForRequestList:(id)arg1;	// IMP=0x000000010000d5b0
- (_Bool)copyConversionOutput:(id)arg1 toRequestDestination:(id)arg2 requestIdentifier:(id)arg3 error:(id *)arg4;	// IMP=0x000000010000d3bc
- (void)processCompletedQueueEntry:(id)arg1 resultURLCollection:(id)arg2 didConvertSuccessfully:(_Bool)arg3 conversionOutputInformation:(id)arg4 conversionOutputData:(id)arg5 conversionOutputFileType:(id)arg6 conversionError:(id)arg7;	// IMP=0x000000010000cd0c
- (id)markCompletionAndRetrieveClientRequestsForQueueEntry:(id)arg1 resultURLCollection:(id)arg2 didConvertSuccessfully:(_Bool)arg3 conversionOutputInformation:(id)arg4 conversionOutputData:(id)arg5 conversionOutputFileType:(id)arg6 conversionError:(id)arg7;	// IMP=0x000000010000caf0
- (id)entriesSortedByExecutionOrderForPendingEntries:(id)arg1;	// IMP=0x000000010000ca88
- (id)optimizeQueueAndDequeueNextRequest;	// IMP=0x000000010000c720
- (void)processQueue;	// IMP=0x000000010000c548
- (void)scheduleQueueProcessing;	// IMP=0x000000010000c4f0
- (_Bool)allRequestsForEntry:(id)arg1 haveRequestPriority:(long long)arg2;	// IMP=0x000000010000c2f0
- (long long)highestRequestPriorityForEntry:(id)arg1;	// IMP=0x000000010000c134
- (id)anyDestinationURLCollectionForQueueEntry:(id)arg1;	// IMP=0x000000010000bf88
- (long long)compareProcessingOrderForEntry:(id)arg1 toEntry:(id)arg2;	// IMP=0x000000010000bcf8
- (long long)compareRequestPrioritiesForEntry:(id)arg1 toEntry:(id)arg2;	// IMP=0x000000010000bb88
- (void)enumerateCurrentlyProcessingAndQueuedEntries:(CDUnknownBlockType)arg1;	// IMP=0x000000010000bacc
- (_Bool)currentlyProcessingRequestQueueEntryIsOptional;	// IMP=0x000000010000ba80
- (_Bool)enqueueEntry:(id)arg1 clientRequest:(id)arg2 isDuplicateOfOriginalQueueEntry:(id *)arg3;	// IMP=0x000000010000b428
- (id)queueEntryWithConversionOptions:(id)arg1;	// IMP=0x000000010000b2fc
- (unsigned long long)nextRequestNumber;	// IMP=0x000000010000b2b4
- (id)initWithDelegate:(id)arg1;	// IMP=0x000000010000b160

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSURLSessionTaskDelegate-Protocol.h"

@class GEOXPCActivity, NSCache, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface GEOAnalyticsPipelineUploader : NSObject <NSURLSessionTaskDelegate>
{
    NSObject<OS_dispatch_queue> *_uploadQueue;	// 8 = 0x8
    NSObject<OS_dispatch_source> *_uploadTimer;	// 16 = 0x10
    GEOXPCActivity *_activity;	// 24 = 0x18
    NSCache *_sessionCache;	// 32 = 0x20
    NSCache *_transactionMetrics;	// 40 = 0x28
}

+ (id)sharedUploader;	// IMP=0x000000010002b298
- (void).cxx_destruct;	// IMP=0x000000010002f5fc
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *uploadQueue; // @synthesize uploadQueue=_uploadQueue;
- (id)_additionalHTTPHeadersForType:(int)arg1;	// IMP=0x000000010002f460
- (id)_urlForType:(int)arg1;	// IMP=0x000000010002f2e4
- (_Bool)_compressForType:(int)arg1;	// IMP=0x000000010002f2d8
- (void)URLSession:(id)arg1 task:(id)arg2 didFinishCollectingMetrics:(id)arg3;	// IMP=0x000000010002f164
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;	// IMP=0x000000010002db64
- (void)_startTaskForFile:(id)arg1 taskDescription:(id)arg2 handlingPolicyId:(int)arg3 sessionConfigType:(int)arg4 ttl:(double)arg5;	// IMP=0x000000010002d844
- (void)_issueUploadRequestForPolicyId:(int)arg1 request:(id)arg2 logMessageCount:(unsigned long long)arg3 batchSize:(unsigned long long)arg4 messageCreateTime:(id)arg5 sessionConfigType:(int)arg6 ttl:(double)arg7 uploadStageNumber:(unsigned long long)arg8;	// IMP=0x000000010002d4d0
- (void)_sessionForType:(int)arg1 result:(CDUnknownBlockType)arg2;	// IMP=0x000000010002d200
- (id)filePathForTaskDescription:(id)arg1;	// IMP=0x000000010002d150
- (void)_submitBatchForUploadOfType:(int)arg1;	// IMP=0x000000010002c4c4
- (void)submitBatchForUploadOfType:(int)arg1;	// IMP=0x000000010002c264
- (void)_submitBatchesForUpload;	// IMP=0x000000010002bff0
- (void)_clearExpired;	// IMP=0x000000010002bec4
- (void)_clearUploadTimer;	// IMP=0x000000010002beb0
- (void)_startUploadTimer;	// IMP=0x000000010002be5c
- (void)submitBatchesForUpload;	// IMP=0x000000010002bdf4
- (void)startCountsAggregator;	// IMP=0x000000010002bd9c
- (unsigned long long)batchSizeThreshold;	// IMP=0x000000010002bd8c
- (void)_registerXPCActivity;	// IMP=0x000000010002bb30
- (id)persistence;	// IMP=0x000000010002bab4
- (id)init;	// IMP=0x000000010002b304

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

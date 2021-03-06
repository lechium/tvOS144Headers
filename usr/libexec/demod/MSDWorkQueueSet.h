//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOperationQueue;
@protocol OS_dispatch_queue;

@interface MSDWorkQueueSet : NSObject
{
    NSObject<OS_dispatch_queue> *_demoUpdateQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_messageQueue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_pollingQueue;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_browseQueue;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_backgroundDownloadQueue;	// 40 = 0x28
    NSOperationQueue *_operationQueue;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_contentDownloadConcurrentQueue;	// 56 = 0x38
}

+ (id)sharedInstance;	// IMP=0x000000010001f580
- (void).cxx_destruct;	// IMP=0x000000010001f868
@property(retain) NSObject<OS_dispatch_queue> *contentDownloadConcurrentQueue; // @synthesize contentDownloadConcurrentQueue=_contentDownloadConcurrentQueue;
@property(retain) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain) NSObject<OS_dispatch_queue> *backgroundDownloadQueue; // @synthesize backgroundDownloadQueue=_backgroundDownloadQueue;
@property(retain) NSObject<OS_dispatch_queue> *browseQueue; // @synthesize browseQueue=_browseQueue;
@property(retain) NSObject<OS_dispatch_queue> *pollingQueue; // @synthesize pollingQueue=_pollingQueue;
@property(retain) NSObject<OS_dispatch_queue> *messageQueue; // @synthesize messageQueue=_messageQueue;
@property(retain) NSObject<OS_dispatch_queue> *demoUpdateQueue; // @synthesize demoUpdateQueue=_demoUpdateQueue;

@end


//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface _DASSignalQueue : NSObject
{
    struct os_unfair_lock_s _queueLock;	// 8 = 0x8
    unsigned long long _limit;	// 16 = 0x10
    NSMutableDictionary *_signalQueueDictionary;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_executionQueue;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000010000d350
@property(nonatomic) struct os_unfair_lock_s queueLock; // @synthesize queueLock=_queueLock;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *executionQueue; // @synthesize executionQueue=_executionQueue;
@property(retain, nonatomic) NSMutableDictionary *signalQueueDictionary; // @synthesize signalQueueDictionary=_signalQueueDictionary;
@property(nonatomic) unsigned long long limit; // @synthesize limit=_limit;
@property(readonly) unsigned long long count;
- (double)percentile:(double)arg1;	// IMP=0x000000010000d2b0
- (double)dominant;	// IMP=0x000000010000d2a8
- (double)trend;	// IMP=0x000000010000d2a0
- (double)rate;	// IMP=0x000000010000cfe8
- (double)mean;	// IMP=0x000000010000cdfc
- (id)top;	// IMP=0x000000010000cd30
- (id)allObjects;	// IMP=0x000000010000cb74
- (void)addObject:(id)arg1;	// IMP=0x000000010000ca20
- (id)initWithCount:(unsigned long long)arg1;	// IMP=0x000000010000c99c

@end

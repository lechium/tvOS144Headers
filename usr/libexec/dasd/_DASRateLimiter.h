//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCountedSet;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface _DASRateLimiter : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSCountedSet *_submitted;	// 16 = 0x10
    NSObject<OS_dispatch_source> *_timer;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000010000daac
@property(retain, nonatomic) NSObject<OS_dispatch_source> *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) NSCountedSet *submitted; // @synthesize submitted=_submitted;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)submitActivity:(id)arg1;	// IMP=0x000000010000d6c8
- (id)init;	// IMP=0x000000010000d548

@end


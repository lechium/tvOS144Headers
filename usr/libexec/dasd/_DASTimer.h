//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface _DASTimer : NSObject
{
    CDUnknownBlockType _callback;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSObject<OS_dispatch_source> *_timer;	// 24 = 0x18
    NSDictionary *_previousWakeRequestDictionary;	// 32 = 0x20
}

+ (id)timerWithCallback:(CDUnknownBlockType)arg1;	// IMP=0x000000010000fe4c
- (void).cxx_destruct;	// IMP=0x0000000100010334
@property(retain, nonatomic) NSDictionary *previousWakeRequestDictionary; // @synthesize previousWakeRequestDictionary=_previousWakeRequestDictionary;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
- (void)scheduleOnBehalfOf:(id)arg1 between:(double)arg2 and:(double)arg3 waking:(_Bool)arg4;	// IMP=0x00000001000101e4
- (void)requestSystemWakeOnBehalfOf:(id)arg1 at:(id)arg2 withLeeway:(double)arg3 cancelPrevious:(_Bool)arg4;	// IMP=0x000000010000ff9c
- (void)requestSystemWakeOBehalfOf:(id)arg1 at:(id)arg2 withLeeway:(double)arg3;	// IMP=0x000000010000ff38
- (void)cancelPreviousWakeRequest;	// IMP=0x000000010000fea0
- (id)initWithCallback:(CDUnknownBlockType)arg1;	// IMP=0x000000010000fc78

@end


//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "BKDigitizerEventSchedulerBase.h"

@class CADisplayLink, NSThread;

@interface BKDigitizerEventSchedulerWithDisplayLink : BKDigitizerEventSchedulerBase
{
    CADisplayLink *_displayLink;	// 8 = 0x8
    NSThread *_thread;	// 16 = 0x10
}

+ (Class)displayLinkClass;	// IMP=0x000000010000cf8c
@property(readonly, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
- (void)scheduleEvent:(struct __IOHIDEvent *)arg1 fromDigitizer:(struct OpaqueBKDigitizerInfo *)arg2 toClient:(unsigned int)arg3;	// IMP=0x000000010000cd40
- (void)_thread_scheduleEventWithBlock:(CDUnknownBlockType)arg1 event:(struct __IOHIDEvent *)arg2 clientTaskPort:(unsigned int)arg3;	// IMP=0x000000010000cd3c
- (void)_thread_displayLinkFired:(id)arg1;	// IMP=0x000000010000cd38
- (void)performSync:(CDUnknownBlockType)arg1;	// IMP=0x000000010000cc78
- (void)performAsync:(CDUnknownBlockType)arg1;	// IMP=0x000000010000cba4
- (void)_performBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010000cb98
- (void)_thread_startRunLoop;	// IMP=0x000000010000ca20
- (void)dealloc;	// IMP=0x000000010000c9c0
- (id)init;	// IMP=0x000000010000c8a8

@end


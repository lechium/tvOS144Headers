//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol TaskScheduler;

@interface PromiseObserver : NSObject
{
    CDUnknownBlockType _valueBlock;	// 8 = 0x8
    CDUnknownBlockType _errorBlock;	// 16 = 0x10
    id <TaskScheduler> _scheduler;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000010000d69c
@property(readonly) id <TaskScheduler> scheduler; // @synthesize scheduler=_scheduler;
@property(readonly) CDUnknownBlockType errorBlock; // @synthesize errorBlock=_errorBlock;
@property(readonly) CDUnknownBlockType valueBlock; // @synthesize valueBlock=_valueBlock;
- (void)notifyRejectedWithError:(id)arg1;	// IMP=0x000000010000d570
- (void)notifyResolvedWithValue:(id)arg1;	// IMP=0x000000010000d468
- (id)initWithValueBlock:(CDUnknownBlockType)arg1 errorBlock:(CDUnknownBlockType)arg2 scheduler:(id)arg3;	// IMP=0x000000010000d37c

@end


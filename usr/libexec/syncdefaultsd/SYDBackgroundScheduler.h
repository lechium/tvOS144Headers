//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SYDScheduler;

@interface SYDBackgroundScheduler : NSObject
{
    _Bool _allowsCellular;	// 8 = 0x8
    SYDScheduler *_scheduler;	// 16 = 0x10
    NSString *_identifier;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000010004be84
@property(nonatomic) _Bool allowsCellular; // @synthesize allowsCellular=_allowsCellular;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) SYDScheduler *scheduler; // @synthesize scheduler=_scheduler;
- (void)_noteBackgroundSchedulerWasPinged;	// IMP=0x000000010004bd90
- (void)shutdown;	// IMP=0x000000010004bd88
- (void)registerXPCActivityWithCriteria:(id)arg1;	// IMP=0x000000010004ba24
- (_Bool)scheduleRelaunchWithDate:(double)arg1;	// IMP=0x000000010004b8b8
- (id)initWithScheduler:(id)arg1;	// IMP=0x000000010004b7e0

@end


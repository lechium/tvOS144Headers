//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "_DASActivityPolicy-Protocol.h"

@class NSArray, NSDate, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface _DASThunderingHerdPolicy : NSObject <_DASActivityPolicy>
{
    _Bool _recentTriggerEvent;	// 8 = 0x8
    _Bool _waitingForInactivity;	// 9 = 0x9
    NSString *_policyName;	// 16 = 0x10
    NSArray *_triggers;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
    NSObject<OS_dispatch_source> *_shortTermTimer;	// 40 = 0x28
    NSObject<OS_dispatch_source> *_longTermTimer;	// 48 = 0x30
    NSDate *_eventTriggerTime;	// 56 = 0x38
}

+ (id)policyInstance;	// IMP=0x000000010002d924
- (void).cxx_destruct;	// IMP=0x000000010002de10
@property(nonatomic) _Bool waitingForInactivity; // @synthesize waitingForInactivity=_waitingForInactivity;
@property(nonatomic) _Bool recentTriggerEvent; // @synthesize recentTriggerEvent=_recentTriggerEvent;
@property(retain, nonatomic) NSDate *eventTriggerTime; // @synthesize eventTriggerTime=_eventTriggerTime;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *longTermTimer; // @synthesize longTermTimer=_longTermTimer;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *shortTermTimer; // @synthesize shortTermTimer=_shortTermTimer;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSArray *triggers; // @synthesize triggers=_triggers;
@property(retain, nonatomic) NSString *policyName; // @synthesize policyName=_policyName;
- (id)responseForActivity:(id)arg1 withState:(id)arg2;	// IMP=0x000000010002db94
- (double)weightForActivity:(id)arg1;	// IMP=0x000000010002db8c
- (_Bool)shouldIgnoreTrigger:(id)arg1 withState:(id)arg2;	// IMP=0x000000010002dad8
- (void)handleTriggerEvent;	// IMP=0x000000010002da44
- (_Bool)appliesToActivity:(id)arg1;	// IMP=0x000000010002d990
- (id)init;	// IMP=0x000000010002d498
- (id)initializeTriggers;	// IMP=0x000000010002d14c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

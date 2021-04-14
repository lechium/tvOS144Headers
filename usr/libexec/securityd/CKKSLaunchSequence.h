//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSBlockOperation, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface CKKSLaunchSequence : NSObject
{
    _Bool _firstLaunch;	// 8 = 0x8
    _Bool _launched;	// 9 = 0x9
    NSString *_name;	// 16 = 0x10
    NSMutableDictionary *_events;	// 24 = 0x18
    NSMutableDictionary *_attributes;	// 32 = 0x20
    NSBlockOperation *_launchOperation;	// 40 = 0x28
    NSMutableDictionary *_dependantLaunches;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000010018c4a4
@property(retain) NSMutableDictionary *dependantLaunches; // @synthesize dependantLaunches=_dependantLaunches;
@property(retain) NSBlockOperation *launchOperation; // @synthesize launchOperation=_launchOperation;
@property(retain) NSMutableDictionary *attributes; // @synthesize attributes=_attributes;
@property(retain) NSMutableDictionary *events; // @synthesize events=_events;
@property(retain) NSString *name; // @synthesize name=_name;
@property _Bool launched; // @synthesize launched=_launched;
- (id)eventsByTime;	// IMP=0x000000010018c0f0
- (id)eventsRelativeTime;	// IMP=0x000000010018bf0c
- (void)launch;	// IMP=0x000000010018bd50
- (void)reportMetric;	// IMP=0x000000010018ba80
- (void)addEvent:(id)arg1;	// IMP=0x000000010018b8d8
- (void)addAttribute:(id)arg1 value:(id)arg2;	// IMP=0x000000010018b784
- (void)addDependantLaunch:(id)arg1 child:(id)arg2;	// IMP=0x000000010018b608
@property _Bool firstLaunch;
- (id)initWithRocketName:(id)arg1;	// IMP=0x000000010018b430

@end


//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;
@protocol OS_xpc_object;

@interface BTXPCTimer : NSObject
{
    NSString *_name;	// 8 = 0x8
    NSDate *_date;	// 16 = 0x10
    double _gracePeriod;	// 24 = 0x18
    long long _priority;	// 32 = 0x20
    unsigned long long _options;	// 40 = 0x28
    CDUnknownBlockType _block;	// 48 = 0x30
    NSObject<OS_xpc_object> *_duetActivitySchedulerData;	// 56 = 0x38
    NSObject<OS_xpc_object> *_activity;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000100013144
@property(retain, nonatomic) NSObject<OS_xpc_object> *activity; // @synthesize activity=_activity;
@property(retain, nonatomic) NSObject<OS_xpc_object> *duetActivitySchedulerData; // @synthesize duetActivitySchedulerData=_duetActivitySchedulerData;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(nonatomic) unsigned long long options; // @synthesize options=_options;
@property(nonatomic) long long priority; // @synthesize priority=_priority;
@property(nonatomic) double gracePeriod; // @synthesize gracePeriod=_gracePeriod;
@property(copy, nonatomic) NSDate *date; // @synthesize date=_date;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void)handleActivity;	// IMP=0x000000010001301c
- (CDUnknownBlockType)activityHandler;	// IMP=0x000000010001267c
- (void)invalidate;	// IMP=0x00000001000124f0
- (id)criteria;	// IMP=0x00000001000121c4
- (id)initWithName:(id)arg1 timeInterval:(double)arg2 priority:(long long)arg3 options:(unsigned long long)arg4 block:(CDUnknownBlockType)arg5;	// IMP=0x00000001000120ec
- (id)initWithName:(id)arg1 timeInterval:(double)arg2 gracePeriod:(double)arg3 priority:(long long)arg4 options:(unsigned long long)arg5 block:(CDUnknownBlockType)arg6;	// IMP=0x0000000100012010
- (id)initWithName:(id)arg1 date:(id)arg2 priority:(long long)arg3 options:(unsigned long long)arg4 block:(CDUnknownBlockType)arg5;	// IMP=0x0000000100011f7c
- (id)initWithName:(id)arg1 date:(id)arg2 gracePeriod:(double)arg3 priority:(long long)arg4 options:(unsigned long long)arg5 block:(CDUnknownBlockType)arg6;	// IMP=0x0000000100011e40

@end


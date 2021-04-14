//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSUserDefaults;
@protocol OS_dispatch_queue;

@interface AgingController : NSObject
{
    int _mitigationStateToken;	// 8 = 0x8
    int _mitigationsDisabledToken;	// 12 = 0xc
    unsigned int _ppmService;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_connQueue;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_notifyQueue;	// 40 = 0x28
    int _UPOAgingMitigationsThreshold;	// 48 = 0x30
    unsigned long long _mitigationState;	// 56 = 0x38
    NSUserDefaults *_defaults;	// 64 = 0x40
}

+ (id)allocDefaults;	// IMP=0x00000001000137ec
+ (id)log;	// IMP=0x0000000100013780
@property(retain, nonatomic) NSUserDefaults *defaults; // @synthesize defaults=_defaults;
@property(nonatomic) unsigned long long mitigationState; // @synthesize mitigationState=_mitigationState;
@property(nonatomic) int UPOAgingMitigationsThreshold; // @synthesize UPOAgingMitigationsThreshold=_UPOAgingMitigationsThreshold;
- (id)currentBootSessionUUID;	// IMP=0x0000000100014ed4
- (void)xpcNotifyForMitigationsUI;	// IMP=0x0000000100014c04
- (void)notifyPPMOfMitigationState:(unsigned long long)arg1;	// IMP=0x0000000100014a2c
- (void)updateMitigationStateAndNotify:(unsigned long long)arg1;	// IMP=0x00000001000147fc
- (_Bool)shouldEnableAgeAwarenessForTableDrivenControllers;	// IMP=0x00000001000147d8
- (void)takeActionOnUPO:(int)arg1 forWRa:(int)arg2;	// IMP=0x0000000100014568
- (void)dealloc;	// IMP=0x0000000100014474
- (id)initWithParams:(id)arg1 currentWRa:(int)arg2 currentUPOCount:(int)arg3;	// IMP=0x0000000100013a88
- (void)migrateDefaultsPlist;	// IMP=0x00000001000138f0

@end

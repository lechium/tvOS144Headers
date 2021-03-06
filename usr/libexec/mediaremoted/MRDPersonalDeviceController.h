//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MSVPersistentTimer, NSSet;
@protocol MRDPersonalDeviceControllerDelegate, OS_dispatch_queue;

@interface MRDPersonalDeviceController : NSObject
{
    _Bool _personalDeviceWasRecentlyAttached;	// 8 = 0x8
    id <MRDPersonalDeviceControllerDelegate> _delegate;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    NSSet *_currentPersonalDeviceUIDs;	// 32 = 0x20
    MSVPersistentTimer *_overrideTimer;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000100034380
@property(retain, nonatomic) MSVPersistentTimer *overrideTimer; // @synthesize overrideTimer=_overrideTimer;
@property(retain, nonatomic) NSSet *currentPersonalDeviceUIDs; // @synthesize currentPersonalDeviceUIDs=_currentPersonalDeviceUIDs;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak id <MRDPersonalDeviceControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool personalDeviceWasRecentlyAttached; // @synthesize personalDeviceWasRecentlyAttached=_personalDeviceWasRecentlyAttached;
- (void)_onQueue_beginTimerWithInterval:(double)arg1;	// IMP=0x0000000100034098
- (void)_onQueue_recalculateStateForReason:(id)arg1;	// IMP=0x0000000100033b34
- (void)_onQueue_restoreState;	// IMP=0x00000001000337a4
- (void)_handlePersonalDeviceChangeNotification:(id)arg1;	// IMP=0x0000000100033734
- (id)init;	// IMP=0x0000000100033580

@end


//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FBSDisplayLayoutMonitor, NSDate;
@protocol OS_dispatch_queue;

@interface MRDDisplayMonitor : NSObject
{
    FBSDisplayLayoutMonitor *_displayMonitor;	// 8 = 0x8
    _Bool _layoutChangeScheduled;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_serialQueue;	// 24 = 0x18
    _Bool _displayOn;	// 32 = 0x20
    _Bool _lockScreenForegrounded;	// 33 = 0x21
    NSDate *_lockScreenForegroundedDate;	// 40 = 0x28
    NSDate *_lockScreenUnforegroundedDate;	// 48 = 0x30
    NSDate *_displayOnDate;	// 56 = 0x38
    NSDate *_displayOffDate;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000001000b0f14
@property(retain, nonatomic) NSDate *displayOffDate; // @synthesize displayOffDate=_displayOffDate;
@property(retain, nonatomic) NSDate *displayOnDate; // @synthesize displayOnDate=_displayOnDate;
@property(retain, nonatomic) NSDate *lockScreenUnforegroundedDate; // @synthesize lockScreenUnforegroundedDate=_lockScreenUnforegroundedDate;
@property(retain, nonatomic) NSDate *lockScreenForegroundedDate; // @synthesize lockScreenForegroundedDate=_lockScreenForegroundedDate;
@property(nonatomic) _Bool lockScreenForegrounded; // @synthesize lockScreenForegrounded=_lockScreenForegrounded;
@property(nonatomic) _Bool displayOn; // @synthesize displayOn=_displayOn;
- (void)dealloc;	// IMP=0x00000001000b0e64
- (void)scheduleLayoutChangeForReason:(id)arg1;	// IMP=0x00000001000b0c1c
- (void)layoutMonitor:(id)arg1 didUpdateDisplayLayout:(id)arg2 withContext:(id)arg3;	// IMP=0x00000001000b0978
@property(readonly, nonatomic) _Bool lockScreenVisible;
- (id)_fbsDisplayMonitorConfiguration;	// IMP=0x00000001000b06e8
- (id)init;	// IMP=0x00000001000b044c

@end


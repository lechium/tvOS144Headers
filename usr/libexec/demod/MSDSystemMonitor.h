//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSTimer, _CDClientContext, _CDContextualChangeRegistration;

@interface MSDSystemMonitor : NSObject
{
    _Bool _coreDuetTriggeredPause;	// 8 = 0x8
    _Bool _diskSpaceTriggeredPause;	// 9 = 0x9
    _CDClientContext *_coreDuetContext;	// 16 = 0x10
    NSTimer *_diskSpaceMonitoringTimer;	// 24 = 0x18
    _CDContextualChangeRegistration *_applicationRegistration;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x000000010000dd88
- (void).cxx_destruct;	// IMP=0x000000010000ec28
@property(retain) _CDContextualChangeRegistration *applicationRegistration; // @synthesize applicationRegistration=_applicationRegistration;
@property(retain) NSTimer *diskSpaceMonitoringTimer; // @synthesize diskSpaceMonitoringTimer=_diskSpaceMonitoringTimer;
@property _Bool diskSpaceTriggeredPause; // @synthesize diskSpaceTriggeredPause=_diskSpaceTriggeredPause;
@property _Bool coreDuetTriggeredPause; // @synthesize coreDuetTriggeredPause=_coreDuetTriggeredPause;
@property(retain) _CDClientContext *coreDuetContext; // @synthesize coreDuetContext=_coreDuetContext;
- (void)processCoreDuetCallBack;	// IMP=0x000000010000e540
- (void)startPowerForegroundAppMonitoring;	// IMP=0x000000010000e210
- (void)monitorDiskSpace;	// IMP=0x000000010000e0e8
- (void)startSystemIdleDetection;	// IMP=0x000000010000df14
- (void)stopSystemIdleDetection;	// IMP=0x000000010000ddf4

@end


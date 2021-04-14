//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CSAudioRouteChangeMonitor.h"

@class NSObject;
@protocol OS_dispatch_queue;

@interface CSAudioRouteChangeMonitorImplWatch : CSAudioRouteChangeMonitor
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    _Bool _isHearstConnected;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100082ddc
- (void)_notifyHearstConnectionState:(_Bool)arg1;	// IMP=0x0000000100082c5c
- (_Bool)_fetchHearstConnectionState;	// IMP=0x0000000100082ab4
- (void)_stopMonitoring;	// IMP=0x00000001000829d4
- (void)_startMonitoringWithQueue:(id)arg1;	// IMP=0x000000010008282c
- (void)activeAudioRouteDidChange:(id)arg1;	// IMP=0x00000001000826f0
- (_Bool)jarvisConnected;	// IMP=0x00000001000826e8
- (void)getJarvisConnected:(CDUnknownBlockType)arg1;	// IMP=0x0000000100082644
- (_Bool)hearstConnected;	// IMP=0x0000000100082590
- (void)getHearstConnected:(CDUnknownBlockType)arg1;	// IMP=0x00000001000824d8
- (id)init;	// IMP=0x0000000100082468

@end

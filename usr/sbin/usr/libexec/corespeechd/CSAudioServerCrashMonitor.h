//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CSEventMonitor.h"

#import "CSAudioServerCrashEventProvidingDelegate-Protocol.h"

@class NSString;

@interface CSAudioServerCrashMonitor : CSEventMonitor <CSAudioServerCrashEventProvidingDelegate>
{
    unsigned long long _serverState;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x00000001000269f0
@property(nonatomic) unsigned long long serverState; // @synthesize serverState=_serverState;
- (void)audioServerCrashEventProvidingLostMediaserverd;	// IMP=0x0000000100026cb4
- (void)_notifyObserver:(id)arg1 withMediaserverState:(unsigned long long)arg2;	// IMP=0x0000000100026c24
- (void)_didReceiveMediaserverNotification:(unsigned long long)arg1;	// IMP=0x0000000100026ba8
- (void)_mediaserverdDidRestart;	// IMP=0x0000000100026b98
- (void)_startMonitoringWithQueue:(id)arg1;	// IMP=0x0000000100026aa0
- (id)init;	// IMP=0x0000000100026a5c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


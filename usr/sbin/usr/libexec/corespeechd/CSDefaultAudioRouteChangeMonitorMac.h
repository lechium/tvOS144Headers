//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CSEventMonitor.h"

@interface CSDefaultAudioRouteChangeMonitorMac : CSEventMonitor
{
}

+ (id)sharedInstance;	// IMP=0x0000000100052c80
- (unsigned int)defaultOutputAudioDeviceID;	// IMP=0x0000000100052c98
- (_Bool)isDefaultOutputBultInSpeaker;	// IMP=0x0000000100052c90
- (_Bool)isDefaultInputBuiltInMic;	// IMP=0x0000000100052c88

@end


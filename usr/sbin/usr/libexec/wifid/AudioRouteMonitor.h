//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface AudioRouteMonitor : NSObject
{
    _Bool _monitoring;	// 8 = 0x8
    struct __WiFiAudioRoute *_audioRouteHandler;	// 16 = 0x10
}

@property _Bool monitoring; // @synthesize monitoring=_monitoring;
@property struct __WiFiAudioRoute *audioRouteHandler; // @synthesize audioRouteHandler=_audioRouteHandler;
- (void)stopMonitoring;	// IMP=0x000000010005a930
- (void)startMonitoring;	// IMP=0x000000010005a850
- (void)audioRouteChange:(id)arg1;	// IMP=0x000000010005a834
- (void)dealloc;	// IMP=0x000000010005a7d4
- (void)initializeWithHandler:(struct __WiFiAudioRoute *)arg1;	// IMP=0x000000010005a73c

@end


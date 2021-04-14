//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface HBThermalMonitor : NSObject
{
    int _thermalNotificationToken;	// 8 = 0x8
    _Bool _thermalNotificationTokenIsValid;	// 12 = 0xc
    _Bool _thermalShutdownEnabled;	// 13 = 0xd
}

+ (id)sharedThermalMonitor;	// IMP=0x00000001000363ec
@property(readonly, nonatomic, getter=isThermalShutdownEnabled) _Bool thermalShutdownEnabled; // @synthesize thermalShutdownEnabled=_thermalShutdownEnabled;
- (void)_updateThermalShutdownState;	// IMP=0x0000000100036600
- (void)dealloc;	// IMP=0x00000001000365b0
- (id)init;	// IMP=0x0000000100036458

@end


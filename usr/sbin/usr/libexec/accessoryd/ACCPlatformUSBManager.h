//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface ACCPlatformUSBManager : NSObject
{
    NSMutableArray *_usbModeSubscribers;	// 8 = 0x8
    NSMutableArray *_usbFaultSubscribers;	// 16 = 0x10
    NSMutableDictionary *_subscriberList;	// 24 = 0x18
}

+ (id)sharedManager;	// IMP=0x00000001000f5c68
- (void).cxx_destruct;	// IMP=0x00000001000f77b4
@property(retain, nonatomic) NSMutableDictionary *subscriberList; // @synthesize subscriberList=_subscriberList;
@property(retain, nonatomic) NSMutableArray *usbFaultSubscribers; // @synthesize usbFaultSubscribers=_usbFaultSubscribers;
@property(retain, nonatomic) NSMutableArray *usbModeSubscribers; // @synthesize usbModeSubscribers=_usbModeSubscribers;
- (void)usbFaultOccurredHandler:(id)arg1;	// IMP=0x00000001000f7620
- (void)usbModeChangedHandler:(id)arg1;	// IMP=0x00000001000f7524
- (_Bool)setUSBFaultMonitoringForEndpointUUID:(id)arg1 withState:(_Bool)arg2;	// IMP=0x00000001000f73cc
- (_Bool)setUSBModeMonitoringForEndpointUUID:(id)arg1 withState:(_Bool)arg2;	// IMP=0x00000001000f72ac
- (_Bool)setUSBModeForEndpointUUID:(id)arg1 newMode:(int)arg2;	// IMP=0x00000001000f6fec
- (int)getUSBModeForEndpointUUID:(id)arg1;	// IMP=0x00000001000f6e74
- (_Bool)sendUSBNotificationForEndpointUUID:(id)arg1 withMode:(id)arg2 andFault:(id)arg3 force:(_Bool)arg4;	// IMP=0x00000001000f6c48
- (int)getCachedUSBFaultForEndpointUUID:(id)arg1;	// IMP=0x00000001000f6a60
- (int)getCachedUSBModeForEndpointUUID:(id)arg1;	// IMP=0x00000001000f6878
- (void)updateSubscriberForEndpointUUID:(id)arg1 forFeature:(id)arg2;	// IMP=0x00000001000f67f0
- (void)removeSubscriberForEndpointUUID:(id)arg1 andFeature:(id)arg2;	// IMP=0x00000001000f6320
- (void)addSubscriberForEndpointUUID:(id)arg1 andFeature:(id)arg2;	// IMP=0x00000001000f5e60
- (id)init;	// IMP=0x00000001000f5d04

@end


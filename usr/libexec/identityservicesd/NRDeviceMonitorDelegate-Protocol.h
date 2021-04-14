//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NRDeviceMonitor;

@protocol NRDeviceMonitorDelegate <NSObject>

@optional
- (void)deviceIsClassCConnectedDidChange:(NRDeviceMonitor *)arg1 isClassCConnected:(_Bool)arg2;
- (void)deviceLinkTypeDidChange:(NRDeviceMonitor *)arg1 linkType:(unsigned char)arg2;
- (void)deviceIsAsleepDidChange:(NRDeviceMonitor *)arg1 isAsleep:(_Bool)arg2;
- (void)deviceIsCloudConnectedDidChange:(NRDeviceMonitor *)arg1 isCloudConnected:(_Bool)arg2;
- (void)deviceIsConnectedDidChange:(NRDeviceMonitor *)arg1 isConnected:(_Bool)arg2;
- (void)deviceIsNearbyDidChange:(NRDeviceMonitor *)arg1 isNearby:(_Bool)arg2;
- (void)deviceIsEnabledDidChange:(NRDeviceMonitor *)arg1 isEnabled:(_Bool)arg2;
- (void)deviceIsRegisteredDidChange:(NRDeviceMonitor *)arg1 isRegistered:(_Bool)arg2;
@end


//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSObject;
@protocol NSCopying;

@protocol DADeviceObserver <NSObject>
- (void)discoverAllDevicesWithCompletionHandler:(void (^)(NSSet *))arg1;
- (void)endDiscoveringDevicesWithIdentifier:(NSObject<NSCopying> *)arg1;
- (NSObject<NSCopying> *)beginDiscoveringDevicesWithHandler:(void (^)(NSSet *))arg1;
@end


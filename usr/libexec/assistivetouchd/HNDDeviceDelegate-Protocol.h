//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class HNDDevice, HNDEvent;

@protocol HNDDeviceDelegate <NSObject>
- (void)device:(HNDDevice *)arg1 didPostEvent:(HNDEvent *)arg2;
- (void)device:(HNDDevice *)arg1 didUnload:(_Bool)arg2;
@end

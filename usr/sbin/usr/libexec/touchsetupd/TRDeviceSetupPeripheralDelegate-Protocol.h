//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, TRDeviceSetupPeripheral;

@protocol TRDeviceSetupPeripheralDelegate <NSObject>

@optional
- (void)deviceSetupPeripheralSetupDidFail:(TRDeviceSetupPeripheral *)arg1 withError:(NSError *)arg2;
- (void)deviceSetupPeripheralSetupDidComplete:(TRDeviceSetupPeripheral *)arg1;
- (void)deviceSetupPeripheralDidTap:(TRDeviceSetupPeripheral *)arg1;
@end


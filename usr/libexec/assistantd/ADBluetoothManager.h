//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ADMobileBluetoothDeviceDataSource;

@interface ADBluetoothManager : NSObject
{
    ADMobileBluetoothDeviceDataSource *_dataSource;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x000000010029b4f0
- (void).cxx_destruct;	// IMP=0x000000010029b760
- (id)wirelessSplitterSession;	// IMP=0x000000010029b750
- (void)getPairedDevicesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010029b740
- (void)getConnectedDevicesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010029b730
- (id)deviceWithUID:(id)arg1;	// IMP=0x000000010029b720
- (id)deviceWithAddress:(id)arg1;	// IMP=0x000000010029b678
- (void)prewarmDeviceWithIdentifier:(id)arg1;	// IMP=0x000000010029b5cc
- (id)_init;	// IMP=0x000000010029b568

@end


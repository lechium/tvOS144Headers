//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, XDCDevice;
@protocol OS_dispatch_queue;

@interface XDCDeviceManager : NSObject
{
    NSMutableDictionary *_devices;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x0000000100117450
- (void).cxx_destruct;	// IMP=0x00000001001181cc
- (void)updateDevicesWithArray:(id)arg1;	// IMP=0x0000000100117e04
- (id)deviceForPairingID:(id)arg1;	// IMP=0x0000000100117af0
- (id)deviceForFromID:(id)arg1 usingService:(id)arg2;	// IMP=0x0000000100117824
- (id)deviceForDestinationID:(id)arg1;	// IMP=0x00000001001176fc
@property(readonly) XDCDevice *activePairedDevice;
- (id)init;	// IMP=0x00000001001174bc

@end

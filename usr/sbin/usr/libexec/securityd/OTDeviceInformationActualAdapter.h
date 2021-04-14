//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "OTDeviceInformationAdapter-Protocol.h"

@class CKKSListenerCollection;

__attribute__((visibility("hidden")))
@interface OTDeviceInformationActualAdapter : NSObject <OTDeviceInformationAdapter>
{
    CKKSListenerCollection *_deviceNameUpdateListeners;	// 8 = 0x8
    struct __SCDynamicStore *_store;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100033948
@property struct __SCDynamicStore *store; // @synthesize store=_store;
@property(retain) CKKSListenerCollection *deviceNameUpdateListeners; // @synthesize deviceNameUpdateListeners=_deviceNameUpdateListeners;
- (void)setupDeviceNameListener;	// IMP=0x0000000100033774
- (id)serialNumber;	// IMP=0x0000000100033680
- (id)osVersion;	// IMP=0x000000010003367c
- (void)registerForDeviceNameUpdates:(id)arg1;	// IMP=0x00000001000335c4
- (id)deviceName;	// IMP=0x0000000100033598
- (id)modelID;	// IMP=0x0000000100033558
- (void)dealloc;	// IMP=0x00000001000334e0

@end


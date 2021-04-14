//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NRDevice, NSDictionary, NSString, NSUUID;

@interface XDCDevice : NSObject
{
    NRDevice *_device;	// 8 = 0x8
    _Bool _activePairedDevice;	// 16 = 0x10
    _Bool _connected;	// 17 = 0x11
    _Bool _supported;	// 18 = 0x12
    _Bool _tombstone;	// 19 = 0x13
    NSString *_destinationID;	// 24 = 0x18
    NSString *_thinningVariant;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000100094c54
@property(readonly, getter=isTombstone) _Bool tombstone; // @synthesize tombstone=_tombstone;
@property(readonly) NSString *thinningVariant; // @synthesize thinningVariant=_thinningVariant;
@property(readonly, getter=isSupported) _Bool supported; // @synthesize supported=_supported;
@property(readonly) NSString *destinationID; // @synthesize destinationID=_destinationID;
@property(readonly, getter=isConnected) _Bool connected; // @synthesize connected=_connected;
@property(readonly, getter=isActivePairedDevice) _Bool activePairedDevice; // @synthesize activePairedDevice=_activePairedDevice;
- (id)description;	// IMP=0x0000000100094b88
- (void)updateWithIDSDevice:(id)arg1;	// IMP=0x0000000100094a6c
- (void)markAsTombstoneDevice;	// IMP=0x0000000100094a5c
@property(readonly) NSDictionary *thinningHeaders;
@property(readonly) NSString *systemVersion;
@property(readonly) NSString *productType;
@property(readonly) NSUUID *pairingID;
- (id)initWithIDSDevice:(id)arg1;	// IMP=0x00000001000946d0

@end

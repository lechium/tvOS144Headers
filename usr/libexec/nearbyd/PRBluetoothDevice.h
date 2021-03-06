//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CBDevice, NIDiscoveryToken, NSData, NSString;

@interface PRBluetoothDevice : NSObject
{
    CBDevice *_cbDevice;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000010015c450
@property(readonly) CBDevice *cbDevice; // @synthesize cbDevice=_cbDevice;
- (id)description;	// IMP=0x000000010015c434
@property(readonly, copy) NSString *name;
@property(readonly) _Bool systemKeyRelationship;
@property(readonly) unsigned long long u64Identifier;
@property(readonly) array_39163e03 btAdvertisingAddress;
@property(readonly, copy) NIDiscoveryToken *discoveryToken;
@property(readonly, copy) NSString *idsDeviceID;
@property(readonly, copy) NSData *cbSpatialTokenData;
- (id)initWithCBDevice:(id)arg1;	// IMP=0x000000010015be6c

@end


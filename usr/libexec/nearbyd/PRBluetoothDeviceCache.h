//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface PRBluetoothDeviceCache : NSObject
{
    NSMutableDictionary *_u64IdentifierToBluetoothDeviceMap;	// 8 = 0x8
    NSMutableDictionary *_tokenDataToBluetoothDeviceMap;	// 16 = 0x10
    NSMutableDictionary *_idsIdentifierToBluetoothDeviceMap;	// 24 = 0x18
    struct os_unfair_lock_s _lock;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000010015ccf4
- (id)deviceForIDSIdentifier:(id)arg1;	// IMP=0x000000010015cc60
- (id)deviceForTokenData:(id)arg1;	// IMP=0x000000010015cbcc
- (id)deviceForIdentifier:(unsigned long long)arg1;	// IMP=0x000000010015cb1c
- (_Bool)isCachedByTokenData:(id)arg1;	// IMP=0x000000010015ca9c
- (_Bool)isCached:(id)arg1;	// IMP=0x000000010015c9e0
- (_Bool)uncacheDeviceByTokenData:(id)arg1;	// IMP=0x000000010015c910
- (void)uncacheDevice:(id)arg1;	// IMP=0x000000010015c794
- (void)cacheDevice:(id)arg1;	// IMP=0x000000010015c584
- (void)reset;	// IMP=0x000000010015c524
- (id)init;	// IMP=0x000000010015c45c

@end


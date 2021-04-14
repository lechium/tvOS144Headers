//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NIConfiguration.h"

@class NSArray, NSData;

@interface NIHomeDeviceConfiguration : NIConfiguration
{
    _Bool _anchor;	// 8 = 0x8
    unsigned long long _allowedDevices;	// 16 = 0x10
    NSData *_sessionKey;	// 24 = 0x18
    NSArray *_monitoredRegions;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000001001a0c34
+ (id)new;	// IMP=0x00000001001a0aa0
- (void).cxx_destruct;	// IMP=0x00000001001a1504
@property(copy) NSArray *monitoredRegions; // @synthesize monitoredRegions=_monitoredRegions;
@property(getter=isAnchor) _Bool anchor; // @synthesize anchor=_anchor;
@property(copy) NSData *sessionKey; // @synthesize sessionKey=_sessionKey;
@property unsigned long long allowedDevices; // @synthesize allowedDevices=_allowedDevices;
- (id)descriptionInternal;	// IMP=0x00000001001a13a4
- (id)description;	// IMP=0x00000001001a12d8
- (unsigned long long)hash;	// IMP=0x00000001001a1260
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001001a1000
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001001a0d80
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000001001a0ca8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001001a0c3c
- (id)initWithAllowedDevices:(unsigned long long)arg1 sessionKey:(id)arg2 asAnchor:(_Bool)arg3 regions:(id)arg4;	// IMP=0x00000001001a0b40
- (id)initWithRegions:(id)arg1;	// IMP=0x00000001001a0aac
- (id)init;	// IMP=0x00000001001a0a0c

@end

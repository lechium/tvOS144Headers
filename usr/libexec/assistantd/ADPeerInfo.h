//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSDictionary, NSString;

@interface ADPeerInfo : NSObject <NSCopying>
{
    _Bool _deviceOwnedByCurrentUser;	// 8 = 0x8
    NSString *_idsIdentifier;	// 16 = 0x10
    NSString *_productType;	// 24 = 0x18
    NSString *_buildVersion;	// 32 = 0x20
    NSString *_name;	// 40 = 0x28
    NSString *_idsDeviceUniqueIdentifier;	// 48 = 0x30
    NSString *_idsFirstRoutableDestination;	// 56 = 0x38
    NSArray *_airPlayRouteIdentifiers;	// 64 = 0x40
    NSString *_rapportEffectiveIdentifier;	// 72 = 0x48
    NSString *_mediaSystemIdentifier;	// 80 = 0x50
    NSString *_roomName;	// 88 = 0x58
    unsigned long long _preferredMessagingOptionsForCommands;	// 96 = 0x60
    NSString *_userInterfaceIdiom;	// 104 = 0x68
    NSString *_aceVersion;	// 112 = 0x70
}

+ (void)updateSharedInfoWithIdentifier:(id)arg1 productType:(id)arg2 buildVersion:(id)arg3;	// IMP=0x00000001002a40b4
+ (id)locallyPairedPeerInfo;	// IMP=0x00000001002a374c
+ (id)_queue;	// IMP=0x00000001002a36dc
- (void).cxx_destruct;	// IMP=0x00000001002a448c
@property(copy, nonatomic) NSString *aceVersion; // @synthesize aceVersion=_aceVersion;
@property(copy, nonatomic) NSString *userInterfaceIdiom; // @synthesize userInterfaceIdiom=_userInterfaceIdiom;
@property(nonatomic) unsigned long long preferredMessagingOptionsForCommands; // @synthesize preferredMessagingOptionsForCommands=_preferredMessagingOptionsForCommands;
@property(copy, nonatomic) NSString *roomName; // @synthesize roomName=_roomName;
@property(copy, nonatomic) NSString *mediaSystemIdentifier; // @synthesize mediaSystemIdentifier=_mediaSystemIdentifier;
@property(copy, nonatomic) NSString *rapportEffectiveIdentifier; // @synthesize rapportEffectiveIdentifier=_rapportEffectiveIdentifier;
@property(copy, nonatomic) NSArray *airPlayRouteIdentifiers; // @synthesize airPlayRouteIdentifiers=_airPlayRouteIdentifiers;
@property(copy, nonatomic) NSString *idsFirstRoutableDestination; // @synthesize idsFirstRoutableDestination=_idsFirstRoutableDestination;
@property(nonatomic, getter=isDeviceOwnedByCurrentUser) _Bool deviceOwnedByCurrentUser; // @synthesize deviceOwnedByCurrentUser=_deviceOwnedByCurrentUser;
@property(copy, nonatomic) NSString *idsDeviceUniqueIdentifier; // @synthesize idsDeviceUniqueIdentifier=_idsDeviceUniqueIdentifier;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSString *buildVersion; // @synthesize buildVersion=_buildVersion;
@property(readonly, copy, nonatomic) NSString *productType; // @synthesize productType=_productType;
@property(readonly, copy, nonatomic) NSString *idsIdentifier; // @synthesize idsIdentifier=_idsIdentifier;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001002a41fc
- (unsigned long long)hash;	// IMP=0x00000001002a41ec
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001002a41e8
- (id)afPeerInfo;	// IMP=0x00000001002a3ee0
@property(readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
- (id)description;	// IMP=0x00000001002a3db0
- (id)initWithAFPeerInfo:(id)arg1;	// IMP=0x00000001002a3a5c
- (id)initWithUniqueIdentifer:(id)arg1;	// IMP=0x00000001002a39e0
- (id)initWithIDSIdentifer:(id)arg1;	// IMP=0x00000001002a39c8
- (id)initWithIDSIdentifer:(id)arg1 productType:(id)arg2 buildVersion:(id)arg3 name:(id)arg4;	// IMP=0x00000001002a3890

@end


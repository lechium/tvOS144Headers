//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSDictionary, NSNumber, NSString, NSUUID;

@interface IDSPairedDevice : NSObject
{
    NSDictionary *_properties;	// 8 = 0x8
    NSNumber *_pairingProtocolVersion;	// 16 = 0x10
    NSNumber *_minCompatibilityVersion;	// 24 = 0x18
    NSNumber *_maxCompatibilityVersion;	// 32 = 0x20
    NSNumber *_serviceMinCompatibilityVersion;	// 40 = 0x28
}

+ (id)localIdentitiesFromIdentities:(id)arg1;	// IMP=0x0000000100303038
+ (id)iCloudIdentitiesFromIdentities:(id)arg1;	// IMP=0x0000000100302dcc
- (void).cxx_destruct;	// IMP=0x0000000100303ed8
- (id)description;	// IMP=0x0000000100303d34
@property(readonly, nonatomic) _Bool isPairing;
@property(readonly, nonatomic) _Bool hasAllPublicKeys;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(readonly, nonatomic) unsigned int serviceMinCompatibilityVersion;
@property(readonly, nonatomic) unsigned int maxCompatibilityVersion;
@property(readonly, nonatomic) unsigned int minCompatibilityVersion;
@property(readonly, nonatomic) unsigned int pairingProtocolVersion;
@property(readonly, nonatomic) NSString *productName;
@property(readonly, nonatomic) NSString *productVersion;
@property(readonly, nonatomic) NSString *buildVersion;
@property(readonly, nonatomic) NSDictionary *privateData;
@property(readonly, nonatomic) NSArray *iCloudURIs;
@property(readonly, nonatomic) NSArray *localIdentities;
@property(readonly, nonatomic) NSArray *iCloudIdentities;
- (id)identities;	// IMP=0x0000000100302d88
@property(readonly, nonatomic) NSData *pushToken;
@property(readonly, nonatomic) NSData *publicClassDKey;
@property(readonly, nonatomic) NSData *publicClassCKey;
@property(readonly, nonatomic) NSData *publicClassAKey;
@property(readonly, nonatomic) long long pairingType;
@property(readonly, nonatomic) _Bool supportIPsec;
@property(readonly, nonatomic) _Bool isActive;
@property(readonly, nonatomic) NSString *uniqueID;
@property(readonly, nonatomic) NSUUID *cbuuidUUID;
@property(readonly, nonatomic) NSString *cbuuid;
- (id)persistedProperties;	// IMP=0x00000001003029c4
- (id)initWithProperties:(id)arg1;	// IMP=0x0000000100302918
- (id)pairedDeviceWithoutSecuredEncryptionKeys;	// IMP=0x000000010030277c
- (id)initWithPairedDevice:(id)arg1 iCloudURIs:(id)arg2 pushToken:(id)arg3;	// IMP=0x0000000100302294
- (id)initWithPairedDevice:(id)arg1 pairingType:(long long)arg2;	// IMP=0x000000010030202c
- (id)initWithPairedDevice:(id)arg1 supportIPsec:(_Bool)arg2;	// IMP=0x0000000100301db8
- (id)initWithPairedDevice:(id)arg1 isActive:(_Bool)arg2;	// IMP=0x0000000100301b44
- (id)initWithPairedDevice:(id)arg1 deviceInfoPayload:(id)arg2;	// IMP=0x00000001003010ec
- (id)initWithPairedDevice:(id)arg1 capabilityFlags:(unsigned long long)arg2;	// IMP=0x0000000100300f20
- (id)initWithPairedDevice:(id)arg1 deviceUniqueID:(id)arg2 pairingProtocolVersion:(unsigned int)arg3 minCompatibilityVersion:(unsigned int)arg4 maxCompatibilityVersion:(unsigned int)arg5 serviceMinCompatibilityVersion:(unsigned short)arg6 privateData:(id)arg7;	// IMP=0x0000000100300b30
- (id)initWithCBUUID:(id)arg1 pairingType:(long long)arg2;	// IMP=0x0000000100300758
- (id)initWithProperties:(id)arg1 pairingProtocolVersion:(id)arg2 minCompatibilityVersion:(id)arg3 maxCompatibilityVersion:(id)arg4 serviceMinCompatibilityVersion:(id)arg5;	// IMP=0x00000001003003d8

@end


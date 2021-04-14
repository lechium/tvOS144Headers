//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSNumber, NSString, NSURL, UARPPersonalizationDataTuple, UARPPersonalizationNumberTuple32, UARPPersonalizationNumberTuple64, UARPPersonalizationNumberTupleBool;

__attribute__((visibility("hidden")))
@interface UARPPersonalizationRequest : NSObject
{
    UARPPersonalizationNumberTuple32 *_boardID;	// 8 = 0x8
    UARPPersonalizationNumberTuple32 *_chipID;	// 16 = 0x10
    UARPPersonalizationNumberTuple32 *_securityDomain;	// 24 = 0x18
    UARPPersonalizationNumberTupleBool *_productionMode;	// 32 = 0x20
    UARPPersonalizationNumberTupleBool *_securityMode;	// 40 = 0x28
    UARPPersonalizationDataTuple *_nonce;	// 48 = 0x30
    UARPPersonalizationNumberTuple64 *_ecid;	// 56 = 0x38
    struct __AMAuthInstall *_authInstallRef;	// 64 = 0x40
    _Bool _useSingleSignOn;	// 72 = 0x48
    _Bool _effectiveProductionMode;	// 73 = 0x49
    _Bool _effectiveSecurityMode;	// 74 = 0x4a
    NSString *_chipName;	// 80 = 0x50
    NSArray *_manifestEntries;	// 88 = 0x58
    NSURL *_serverURL;	// 96 = 0x60
}

@property _Bool effectiveSecurityMode; // @synthesize effectiveSecurityMode=_effectiveSecurityMode;
@property _Bool effectiveProductionMode; // @synthesize effectiveProductionMode=_effectiveProductionMode;
@property _Bool useSingleSignOn; // @synthesize useSingleSignOn=_useSingleSignOn;
@property(retain) NSURL *serverURL; // @synthesize serverURL=_serverURL;
@property(readonly) NSArray *manifestEntries; // @synthesize manifestEntries=_manifestEntries;
@property(readonly) NSString *chipName; // @synthesize chipName=_chipName;
- (id)description;	// IMP=0x0000000100029408
- (_Bool)executeWithResponse:(CDUnknownBlockType)arg1;	// IMP=0x00000001000291fc
- (void)convertManifestEntries:(id)arg1 productionMode:(_Bool)arg2 securityMode:(_Bool)arg3;	// IMP=0x0000000100029018
- (id)responseTicketName;	// IMP=0x0000000100028fb0
- (id)requestTicketName;	// IMP=0x0000000100028f48
- (_Bool)supportsImg4;	// IMP=0x0000000100028f30
- (id)personalizationRequestDict;	// IMP=0x0000000100028cac
- (id)personalizationParameterDict;	// IMP=0x00000001000289f8
@property(readonly) NSNumber *ecid;
@property(readonly) _Bool securityMode;
- (void)setSecurityMode:(_Bool)arg1;	// IMP=0x0000000100028928
@property(readonly) _Bool productionMode;
- (void)setProductionMode:(_Bool)arg1;	// IMP=0x00000001000288a8
- (void)setNonce:(id)arg1;	// IMP=0x0000000100028838
- (void)setECID:(unsigned long long)arg1;	// IMP=0x00000001000287c8
- (id)keyForFieldName:(id)arg1 default:(struct __CFString *)arg2;	// IMP=0x000000010002874c
@property(readonly) NSData *nonce;
@property(readonly) unsigned int securityDomain;
@property(readonly) unsigned int chipID;
@property(readonly) unsigned int boardID;
- (void)dealloc;	// IMP=0x0000000100028678
- (id)initWithChipName:(id)arg1 boardID:(id)arg2 chipID:(id)arg3 securityDomain:(id)arg4 productionMode:(_Bool)arg5 securityMode:(_Bool)arg6 nonce:(id)arg7 manifestEntries:(id)arg8;	// IMP=0x000000010002852c

@end

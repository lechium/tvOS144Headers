//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MCNewPayloadHandler.h"

@class NSString;
@protocol NEProfileIngestionDelegate;

@interface MCVPNPayloadHandlerBase : MCNewPayloadHandler
{
    struct __SCPreferences *_scPreferences;	// 32 = 0x20
    NSString *_originalName;	// 40 = 0x28
    id <NEProfileIngestionDelegate> _neProfileIngestionHandler;	// 48 = 0x30
}

+ (id)managedServiceIDs;	// IMP=0x000000010007fa18
- (void).cxx_destruct;	// IMP=0x000000010007fdb0
@property(retain, nonatomic) id <NEProfileIngestionDelegate> neProfileIngestionHandler; // @synthesize neProfileIngestionHandler=_neProfileIngestionHandler;
@property(retain, nonatomic) NSString *originalName; // @synthesize originalName=_originalName;
@property(nonatomic) struct __SCPreferences *scPreferences; // @synthesize scPreferences=_scPreferences;
- (id)_copyCertificateWithPayloadUUID:(id)arg1 intoKeychainAccessGroup:(id)arg2;	// IMP=0x000000010007fa88
- (void)didInstallOldGlobalRestrictions:(id)arg1 newGlobalRestrictions:(id)arg2;	// IMP=0x000000010007f958
- (void)unsetAside;	// IMP=0x000000010007f6e8
- (void)setAside;	// IMP=0x000000010007f478
- (void)remove;	// IMP=0x000000010007f090
- (_Bool)isInstalled;	// IMP=0x000000010007eff0
- (_Bool)installWithInstaller:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 outError:(id *)arg4;	// IMP=0x000000010007e390
- (id)installService:(id)arg1;	// IMP=0x000000010007e388
- (id)cannotInstallError;	// IMP=0x000000010007e2a8
- (id)PPTPDeprecatedError;	// IMP=0x000000010007e210
- (_Bool)preflightUserInputResponses:(id)arg1 outError:(id *)arg2;	// IMP=0x000000010007de44
- (id)userInputFields;	// IMP=0x000000010007d4ec
- (id)initWithPayload:(id)arg1 profileHandler:(id)arg2;	// IMP=0x000000010007d370

@end

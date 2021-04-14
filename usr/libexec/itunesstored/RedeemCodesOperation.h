//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

#import "ISDialogOperationDelegate-Protocol.h"

@class ISBiometricStore, ISDialogButton, NSArray, NSDictionary, NSString, SSAuthenticationContext, SSRedeemCodesResponse;

@interface RedeemCodesOperation : ISOperation <ISDialogOperationDelegate>
{
    SSAuthenticationContext *_authenticationContext;	// 96 = 0x60
    ISBiometricStore *_biometricStore;	// 104 = 0x68
    _Bool _cameraRecognized;	// 112 = 0x70
    ISDialogButton *_dialogButton;	// 120 = 0x78
    _Bool _headless;	// 128 = 0x80
    NSDictionary *_installedExternalVersionByiTunesIdentifier;	// 136 = 0x88
    NSArray *_redeemCodes;	// 144 = 0x90
    NSDictionary *_redeemMetadataByCode;	// 152 = 0x98
    SSRedeemCodesResponse *_redeemResponse;	// 160 = 0xa0
    NSString *_userAgent;	// 168 = 0xa8
    NSString *_logCorrelationKey;	// 176 = 0xb0
    NSDictionary *_params;	// 184 = 0xb8
}

- (void).cxx_destruct;	// IMP=0x00000001001af498
@property(retain, nonatomic) NSDictionary *params; // @synthesize params=_params;
@property(retain, nonatomic) NSString *logCorrelationKey; // @synthesize logCorrelationKey=_logCorrelationKey;
@property _Bool cameraRecognized; // @synthesize cameraRecognized=_cameraRecognized;
@property _Bool headless; // @synthesize headless=_headless;
- (void)_postNotificationWithResponse:(id)arg1;	// IMP=0x00000001001af018
- (_Bool)_useLegacyRedeem;	// IMP=0x00000001001aed08
- (id)_installedExternalVersionForRedeemCodeMetadata:(id)arg1;	// IMP=0x00000001001aec28
- (_Bool)_fetchRedeemCodeMetadataWithError:(id *)arg1;	// IMP=0x00000001001ada30
- (_Bool)_didUserCancelWithError:(id)arg1;	// IMP=0x00000001001ada18
- (_Bool)_canPerformExtendedBiometricActions;	// IMP=0x00000001001ad988
- (id)_newURLRequestPropertiesForServiceActionButton:(id)arg1;	// IMP=0x00000001001ad774
- (id)_newURLRequestPropertiesForCode:(id)arg1;	// IMP=0x00000001001ad49c
- (_Bool)_processDictionary:(id)arg1 dialog:(id *)arg2 error:(id *)arg3;	// IMP=0x00000001001ad288
- (void)_runNonHeadless;	// IMP=0x00000001001abe2c
- (void)_runHeadless;	// IMP=0x00000001001ab090
- (id)_authenticateAppleAccount:(id)arg1 withTitle:(id)arg2 error:(id *)arg3;	// IMP=0x00000001001aa6b4
- (void)operation:(id)arg1 selectedButton:(id)arg2;	// IMP=0x00000001001aa6a0
- (void)run;	// IMP=0x00000001001aa674
@property(copy) NSString *userAgent;
@property(copy) SSAuthenticationContext *authenticationContext;
@property(readonly) SSRedeemCodesResponse *redeemResponse;
@property(readonly) NSArray *redeemCodes;
- (id)initWithRedeemCodes:(id)arg1;	// IMP=0x00000001001aa384

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


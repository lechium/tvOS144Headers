//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AKMasterToken, AKToken, NSArray, NSData, NSDictionary, NSMutableDictionary, NSNumber, NSString;

@interface AKAuthenticationServerResponse : NSObject
{
    NSMutableDictionary *_serviceTokens;	// 8 = 0x8
    _Bool _isRetryRequired;	// 16 = 0x10
    _Bool _isSecondaryActionRequired;	// 17 = 0x11
    _Bool _isURLSwitchingRequired;	// 18 = 0x12
    _Bool _isAnisetteResyncRequired;	// 19 = 0x13
    _Bool _isAnisetteReprovisioningRequired;	// 20 = 0x14
    _Bool _shouldProxyAnisetteAction;	// 21 = 0x15
    _Bool _isManagedAppleID;	// 22 = 0x16
    _Bool _isAuditLogin;	// 23 = 0x17
    _Bool _isServerUIRequired;	// 24 = 0x18
    _Bool _isPasscodeResetRequired;	// 25 = 0x19
    _Bool _requireSigningHeaders;	// 26 = 0x1a
    _Bool _allowPiggybacking;	// 27 = 0x1b
    _Bool _isUnderAgeOfMajority;	// 28 = 0x1c
    _Bool _isFirstPartyApp;	// 29 = 0x1d
    _Bool _primaryEmailVetted;	// 30 = 0x1e
    _Bool _isDemoAccount;	// 31 = 0x1f
    _Bool _authorizationUsed;	// 32 = 0x20
    _Bool _phoneAsAppleID;	// 33 = 0x21
    NSDictionary *_serverProvidedData;	// 40 = 0x28
    NSString *_appleID;	// 48 = 0x30
    NSNumber *_dsid;	// 56 = 0x38
    NSString *_altDSID;	// 64 = 0x40
    NSArray *_aliases;	// 72 = 0x48
    unsigned long long _appleIDSecurityLevel;	// 80 = 0x50
    unsigned long long _authMode;	// 88 = 0x58
    AKMasterToken *_masterToken;	// 96 = 0x60
    AKToken *_continuationToken;	// 104 = 0x68
    AKToken *_passwordResetToken;	// 112 = 0x70
    AKToken *_shortLivedToken;	// 120 = 0x78
    NSString *_secondaryActionURLKey;	// 128 = 0x80
    NSString *_secondaryActionMessage;	// 136 = 0x88
    NSString *_urlSwitchingData;	// 144 = 0x90
    NSData *_anisetteResyncData;	// 152 = 0x98
    long long _errorCode;	// 160 = 0xa0
    NSString *_errorMessage;	// 168 = 0xa8
    NSDictionary *_acceptedTermsInfo;	// 176 = 0xb0
    NSDictionary *_configurationInfo;	// 184 = 0xb8
    NSNumber *_acceptedDeviceTermsVersion;	// 192 = 0xc0
    NSString *_transactionId;	// 200 = 0xc8
    NSString *_serverInfo;	// 208 = 0xd0
    NSString *_privateEmail;	// 216 = 0xd8
    NSString *_primaryEmail;	// 224 = 0xe0
    NSDictionary *_additionalInfo;	// 232 = 0xe8
    NSString *_firstName;	// 240 = 0xf0
    NSString *_lastName;	// 248 = 0xf8
    NSString *_imageURLString;	// 256 = 0x100
    NSString *_federatedAuthURL;	// 264 = 0x108
    NSData *_federatedAuthRequestPayload;	// 272 = 0x110
    NSDictionary *_federatedAuthSamlRequest;	// 280 = 0x118
    NSArray *_federatedAuthURLWhiteList;	// 288 = 0x120
}

+ (id)decodedConfigurationInfo:(id)arg1;	// IMP=0x0000000100009f20
- (void).cxx_destruct;	// IMP=0x000000010000c678
@property(readonly, nonatomic) _Bool phoneAsAppleID; // @synthesize phoneAsAppleID=_phoneAsAppleID;
@property(readonly, nonatomic) _Bool authorizationUsed; // @synthesize authorizationUsed=_authorizationUsed;
@property(readonly, nonatomic) NSArray *federatedAuthURLWhiteList; // @synthesize federatedAuthURLWhiteList=_federatedAuthURLWhiteList;
@property(readonly, nonatomic) NSDictionary *federatedAuthSamlRequest; // @synthesize federatedAuthSamlRequest=_federatedAuthSamlRequest;
@property(readonly, nonatomic) NSData *federatedAuthRequestPayload; // @synthesize federatedAuthRequestPayload=_federatedAuthRequestPayload;
@property(readonly, nonatomic) NSString *federatedAuthURL; // @synthesize federatedAuthURL=_federatedAuthURL;
@property(readonly, nonatomic) _Bool isDemoAccount; // @synthesize isDemoAccount=_isDemoAccount;
@property(readonly, nonatomic) NSString *imageURLString; // @synthesize imageURLString=_imageURLString;
@property(readonly, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property(readonly, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
@property(readonly, nonatomic) NSDictionary *additionalInfo; // @synthesize additionalInfo=_additionalInfo;
@property(readonly, nonatomic) _Bool primaryEmailVetted; // @synthesize primaryEmailVetted=_primaryEmailVetted;
@property(readonly, nonatomic) NSString *primaryEmail; // @synthesize primaryEmail=_primaryEmail;
@property(readonly, nonatomic) NSString *privateEmail; // @synthesize privateEmail=_privateEmail;
@property(readonly, nonatomic) _Bool isFirstPartyApp; // @synthesize isFirstPartyApp=_isFirstPartyApp;
@property(readonly, nonatomic) _Bool isUnderAgeOfMajority; // @synthesize isUnderAgeOfMajority=_isUnderAgeOfMajority;
@property(readonly, nonatomic) _Bool allowPiggybacking; // @synthesize allowPiggybacking=_allowPiggybacking;
@property(readonly, nonatomic) NSString *serverInfo; // @synthesize serverInfo=_serverInfo;
@property(readonly, nonatomic) NSString *transactionId; // @synthesize transactionId=_transactionId;
@property(readonly, nonatomic) NSNumber *acceptedDeviceTermsVersion; // @synthesize acceptedDeviceTermsVersion=_acceptedDeviceTermsVersion;
@property(readonly, nonatomic) NSDictionary *configurationInfo; // @synthesize configurationInfo=_configurationInfo;
@property(readonly, nonatomic) _Bool requireSigningHeaders; // @synthesize requireSigningHeaders=_requireSigningHeaders;
@property(readonly, nonatomic) _Bool isPasscodeResetRequired; // @synthesize isPasscodeResetRequired=_isPasscodeResetRequired;
@property(readonly, nonatomic) _Bool isServerUIRequired; // @synthesize isServerUIRequired=_isServerUIRequired;
@property(readonly, nonatomic) _Bool isAuditLogin; // @synthesize isAuditLogin=_isAuditLogin;
@property(readonly, nonatomic) _Bool isManagedAppleID; // @synthesize isManagedAppleID=_isManagedAppleID;
@property(readonly, nonatomic) NSDictionary *acceptedTermsInfo; // @synthesize acceptedTermsInfo=_acceptedTermsInfo;
@property(readonly, nonatomic) NSString *errorMessage; // @synthesize errorMessage=_errorMessage;
@property(readonly, nonatomic) long long errorCode; // @synthesize errorCode=_errorCode;
@property(readonly, nonatomic) _Bool shouldProxyAnisetteAction; // @synthesize shouldProxyAnisetteAction=_shouldProxyAnisetteAction;
@property(readonly, nonatomic) _Bool isAnisetteReprovisioningRequired; // @synthesize isAnisetteReprovisioningRequired=_isAnisetteReprovisioningRequired;
@property(readonly, nonatomic) NSData *anisetteResyncData; // @synthesize anisetteResyncData=_anisetteResyncData;
@property(readonly, nonatomic) _Bool isAnisetteResyncRequired; // @synthesize isAnisetteResyncRequired=_isAnisetteResyncRequired;
@property(readonly, nonatomic) NSString *urlSwitchingData; // @synthesize urlSwitchingData=_urlSwitchingData;
@property(readonly, nonatomic) _Bool isURLSwitchingRequired; // @synthesize isURLSwitchingRequired=_isURLSwitchingRequired;
@property(readonly, nonatomic) NSString *secondaryActionMessage; // @synthesize secondaryActionMessage=_secondaryActionMessage;
@property(readonly, nonatomic) NSString *secondaryActionURLKey; // @synthesize secondaryActionURLKey=_secondaryActionURLKey;
@property(readonly, nonatomic) _Bool isSecondaryActionRequired; // @synthesize isSecondaryActionRequired=_isSecondaryActionRequired;
@property(readonly, nonatomic) _Bool isRetryRequired; // @synthesize isRetryRequired=_isRetryRequired;
@property(readonly, nonatomic) NSDictionary *serviceTokens; // @synthesize serviceTokens=_serviceTokens;
@property(readonly, nonatomic) AKToken *shortLivedToken; // @synthesize shortLivedToken=_shortLivedToken;
@property(readonly, nonatomic) AKToken *passwordResetToken; // @synthesize passwordResetToken=_passwordResetToken;
@property(readonly, nonatomic) AKToken *continuationToken; // @synthesize continuationToken=_continuationToken;
@property(readonly, nonatomic) AKMasterToken *masterToken; // @synthesize masterToken=_masterToken;
@property(readonly, nonatomic) unsigned long long authMode; // @synthesize authMode=_authMode;
@property(readonly, nonatomic) unsigned long long appleIDSecurityLevel; // @synthesize appleIDSecurityLevel=_appleIDSecurityLevel;
@property(readonly, nonatomic) NSArray *aliases; // @synthesize aliases=_aliases;
@property(readonly, nonatomic) NSString *altDSID; // @synthesize altDSID=_altDSID;
@property(readonly, nonatomic) NSNumber *dsid; // @synthesize dsid=_dsid;
@property(readonly, nonatomic) NSString *appleID; // @synthesize appleID=_appleID;
@property(readonly, nonatomic) NSDictionary *serverProvidedData; // @synthesize serverProvidedData=_serverProvidedData;
- (id)_numberFormatter;	// IMP=0x000000010000c474
- (id)_decodeBase64String:(id)arg1;	// IMP=0x000000010000c3f0
- (_Bool)updateWithSecondaryAuthenticationResponse:(id)arg1;	// IMP=0x000000010000b92c
- (void)_updateAccountInformationWithResultsDictionary:(id)arg1;	// IMP=0x000000010000b78c
- (void)updateWithSecondaryAuthenticationBody:(id)arg1;	// IMP=0x000000010000b6dc
@property(readonly, nonatomic) _Bool isUpdateable;
- (void)_setHeartbeatToken:(id)arg1;	// IMP=0x000000010000b6b4
@property(readonly, nonatomic) AKToken *heartbeatToken;
- (void)_setPasswordEquivalentToken:(id)arg1;	// IMP=0x000000010000b684
@property(readonly, nonatomic) AKToken *passwordEquivalentToken;
- (void)_harvestCommonFieldsFromBody:(id)arg1;	// IMP=0x000000010000b234
- (void)_harvestCommonFieldsFromResponse:(id)arg1;	// IMP=0x000000010000aef8
- (id)initWithServerResponse:(id)arg1 responseBody:(id)arg2;	// IMP=0x000000010000ae34
- (id)initWithServerResponse:(id)arg1 forAppleID:(id)arg2;	// IMP=0x000000010000ad78
- (id)_federatedPayloadFromInfo:(id)arg1;	// IMP=0x000000010000ac8c
- (id)initWithSRPContext:(id)arg1;	// IMP=0x000000010000a0e4

@end


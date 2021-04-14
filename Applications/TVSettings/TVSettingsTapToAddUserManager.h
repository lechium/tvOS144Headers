//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SFAuthenticateAccountsServiceDelegate-Protocol.h"

@class ACAccountStore, BKSProcessAssertion, NSMutableArray, NSRecursiveLock, NSString, PBSIgnoreUserProfileAccountNotificationsAssertion, SFAuthenticateAccountsService, TVSettingsUserProfilesValidator, UMUserPersonaContext;
@protocol TVSettingsTapToAddUserManagerDelegate;

@interface TVSettingsTapToAddUserManager : NSObject <SFAuthenticateAccountsServiceDelegate>
{
    _Bool _isNewPersona;	// 8 = 0x8
    id <TVSettingsTapToAddUserManagerDelegate> _delegate;	// 16 = 0x10
    SFAuthenticateAccountsService *_authService;	// 24 = 0x18
    NSString *_personaIdentifier;	// 32 = 0x20
    UMUserPersonaContext *_initialPersonaContext;	// 40 = 0x28
    long long _userProfileType;	// 48 = 0x30
    NSMutableArray *_signedInAccounts;	// 56 = 0x38
    long long _state;	// 64 = 0x40
    PBSIgnoreUserProfileAccountNotificationsAssertion *_ignoreAccountNotificationAssertion;	// 72 = 0x48
    BKSProcessAssertion *_processAssertion;	// 80 = 0x50
    TVSettingsUserProfilesValidator *_userProfilesValidator;	// 88 = 0x58
    NSRecursiveLock *_lock;	// 96 = 0x60
    ACAccountStore *_accountStore;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x00000001000e1a88
@property(retain, nonatomic) ACAccountStore *accountStore; // @synthesize accountStore=_accountStore;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) TVSettingsUserProfilesValidator *userProfilesValidator; // @synthesize userProfilesValidator=_userProfilesValidator;
@property(retain, nonatomic) BKSProcessAssertion *processAssertion; // @synthesize processAssertion=_processAssertion;
@property(retain, nonatomic) PBSIgnoreUserProfileAccountNotificationsAssertion *ignoreAccountNotificationAssertion; // @synthesize ignoreAccountNotificationAssertion=_ignoreAccountNotificationAssertion;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(retain, nonatomic) NSMutableArray *signedInAccounts; // @synthesize signedInAccounts=_signedInAccounts;
@property(nonatomic) long long userProfileType; // @synthesize userProfileType=_userProfileType;
@property(nonatomic) _Bool isNewPersona; // @synthesize isNewPersona=_isNewPersona;
@property(retain, nonatomic) UMUserPersonaContext *initialPersonaContext; // @synthesize initialPersonaContext=_initialPersonaContext;
@property(retain, nonatomic) NSString *personaIdentifier; // @synthesize personaIdentifier=_personaIdentifier;
@property(retain, nonatomic) SFAuthenticateAccountsService *authService; // @synthesize authService=_authService;
@property(nonatomic) __weak id <TVSettingsTapToAddUserManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_cancelIfNotConnectedYet;	// IMP=0x00000001000e18a0
- (void)_cleanUp;	// IMP=0x00000001000e179c
- (void)_deletePersonaIfNeeded;	// IMP=0x00000001000e1590
- (void)_finishWithError:(id)arg1;	// IMP=0x00000001000e0e54
- (void)_finish;	// IMP=0x00000001000e0778
- (void)_handleSetupServiceProgressEvent:(unsigned int)arg1 info:(id)arg2;	// IMP=0x00000001000dfebc
- (void)_restorePersona;	// IMP=0x00000001000dfd9c
- (void)_adoptPersona;	// IMP=0x00000001000dfaa4
- (void)_start;	// IMP=0x00000001000df644
- (void)authenticateAccountsService:(id)arg1 didAuthenticateWithAccountInfo:(id)arg2;	// IMP=0x00000001000df5d4
- (void)authenticateAccountsService:(id)arg1 didAttemptSignInWithAccountType:(unsigned int)arg2;	// IMP=0x00000001000df58c
- (void)authenticateAccountsService:(id)arg1 willAttemptSignInWithAccountType:(unsigned int)arg2;	// IMP=0x00000001000df544
- (_Bool)authenticateAccountsService:(id)arg1 shouldSignInAccounts:(id)arg2;	// IMP=0x00000001000df31c
- (void)stop;	// IMP=0x00000001000df130
- (void)start;	// IMP=0x00000001000ded5c
- (void)dealloc;	// IMP=0x00000001000ded10
- (id)initWithUserProfileType:(long long)arg1;	// IMP=0x00000001000dec0c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


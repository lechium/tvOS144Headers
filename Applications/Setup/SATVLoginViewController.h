//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVSetupKit/TVSKViewController.h>

@class NSString, SATVAuthenticationView, TVSKActivityIndicatorViewController, TVSStateMachine, TVSiCloudAccountManager, UISystemInputViewController;

@interface SATVLoginViewController : TVSKViewController
{
    _Bool _iCloudLoggedIn;	// 8 = 0x8
    _Bool _didLoginOrSkipFromAppleID;	// 9 = 0x9
    _Bool _comingFromTapToSetup;	// 10 = 0xa
    CDUnknownBlockType _completionHandler;	// 16 = 0x10
    TVSStateMachine *_loginStateMachine;	// 24 = 0x18
    UISystemInputViewController *_systemInputViewController;	// 32 = 0x20
    SATVAuthenticationView *_authenticationView;	// 40 = 0x28
    TVSKActivityIndicatorViewController *_activityIndicatorViewController;	// 48 = 0x30
    NSString *_appleIDUsername;	// 56 = 0x38
    NSString *_iCloudUsername;	// 64 = 0x40
    NSString *_iTunesUsername;	// 72 = 0x48
    TVSiCloudAccountManager *_iCloudAccountManager;	// 80 = 0x50
    CDUnknownBlockType _clientMenuHandler;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0000000100067664
@property(copy, nonatomic) CDUnknownBlockType clientMenuHandler; // @synthesize clientMenuHandler=_clientMenuHandler;
@property(nonatomic) _Bool comingFromTapToSetup; // @synthesize comingFromTapToSetup=_comingFromTapToSetup;
@property(nonatomic) _Bool didLoginOrSkipFromAppleID; // @synthesize didLoginOrSkipFromAppleID=_didLoginOrSkipFromAppleID;
@property(nonatomic, getter=isiCloudLoggedIn) _Bool iCloudLoggedIn; // @synthesize iCloudLoggedIn=_iCloudLoggedIn;
@property(retain, nonatomic) TVSiCloudAccountManager *iCloudAccountManager; // @synthesize iCloudAccountManager=_iCloudAccountManager;
@property(retain, nonatomic) NSString *iTunesUsername; // @synthesize iTunesUsername=_iTunesUsername;
@property(retain, nonatomic) NSString *iCloudUsername; // @synthesize iCloudUsername=_iCloudUsername;
@property(retain, nonatomic) NSString *appleIDUsername; // @synthesize appleIDUsername=_appleIDUsername;
@property(retain, nonatomic) TVSKActivityIndicatorViewController *activityIndicatorViewController; // @synthesize activityIndicatorViewController=_activityIndicatorViewController;
@property(retain, nonatomic) SATVAuthenticationView *authenticationView; // @synthesize authenticationView=_authenticationView;
@property(retain, nonatomic) UISystemInputViewController *systemInputViewController; // @synthesize systemInputViewController=_systemInputViewController;
@property(retain, nonatomic) TVSStateMachine *loginStateMachine; // @synthesize loginStateMachine=_loginStateMachine;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void)_loginCompleteWithResult:(unsigned long long)arg1;	// IMP=0x00000001000673d4
- (void)_postLoginSucceeded;	// IMP=0x000000010006738c
- (void)_postLoginFailed;	// IMP=0x0000000100067344
- (void)_postAuthenticationResults:(_Bool)arg1 forEmailAddress:(id)arg2;	// IMP=0x00000001000672f8
- (void)_authenticateiCloudAccountWithUsername:(id)arg1 password:(id)arg2;	// IMP=0x0000000100067130
- (void)_authenticateStoreAccountWithUsername:(id)arg1 password:(id)arg2;	// IMP=0x0000000100066f68
- (void)_authenticateAppleIDWithUsername:(id)arg1 password:(id)arg2;	// IMP=0x0000000100066da0
- (void)_crossFadeLoginViewWithChanges:(CDUnknownBlockType)arg1;	// IMP=0x0000000100066bc4
- (void)_setUsernamePlaceholder;	// IMP=0x0000000100066ae4
- (void)_setPasswordPlaceholder;	// IMP=0x0000000100066a04
- (void)_showiCloudPasswordScreen;	// IMP=0x000000010006661c
- (void)_showiCloudUsernameScreen;	// IMP=0x0000000100066268
- (void)_showiTunesPasswordScreen;	// IMP=0x0000000100065e80
- (void)_showiTunesUsernameScreen;	// IMP=0x0000000100065acc
- (void)_showPasswordSettingPrompt;	// IMP=0x00000001000658a8
- (void)_showAppleIDPasswordScreen;	// IMP=0x00000001000654c0
- (void)_showAppleIDUsernameScreen;	// IMP=0x000000010006510c
- (void)_reloadForStateChange;	// IMP=0x0000000100064f98
- (void)_setTextFieldText:(id)arg1;	// IMP=0x0000000100064f08
- (void)_clearTextField;	// IMP=0x0000000100064ea0
- (id)_textFieldText;	// IMP=0x0000000100064e0c
- (void)_hideLoginView;	// IMP=0x0000000100064d58
- (void)_hideActivityIndicator;	// IMP=0x0000000100064bd4
- (void)_showActivityIndicator;	// IMP=0x0000000100064ac0
- (void)_updatePreferredFocusedViewForGridLayoutGuide;	// IMP=0x0000000100064850
- (void)_rememberEmailRecentInput:(id)arg1;	// IMP=0x0000000100064828
- (void)_textDidChange;	// IMP=0x0000000100064720
- (void)_menuSelected;	// IMP=0x00000001000646d8
- (void)_useSeparateIDsSelected;	// IMP=0x0000000100064690
- (void)_skipButtonSelected;	// IMP=0x0000000100064648
- (void)_continueButtonSelected;	// IMP=0x0000000100064600
- (void)_setControlTargets;	// IMP=0x00000001000644c4
- (void)_setViewsForInitialState;	// IMP=0x0000000100063e60
- (void)_registerStateMachineEvents;	// IMP=0x0000000100062268
- (void)_doneButtonPressed:(id)arg1;	// IMP=0x00000001000621b8
- (_Bool)_enableAutomaticKeyboardPressDone;	// IMP=0x00000001000621b0
- (_Bool)_disableAutomaticKeyboardUI;	// IMP=0x00000001000621a8
- (id)preferredFocusEnvironments;	// IMP=0x0000000100062134
- (void)viewDidLayoutSubviews;	// IMP=0x000000010006203c
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100061fbc
- (void)_setupSystemInputViewController;	// IMP=0x0000000100061e08
- (void)_addConstrainstToLoginView;	// IMP=0x0000000100061ae4
- (void)viewDidLoad;	// IMP=0x0000000100061994
- (void)loadView;	// IMP=0x00000001000617dc
- (_Bool)shouldUpdateFocusInContext:(id)arg1;	// IMP=0x000000010006174c
- (void)setMenuHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100061740
- (void)reset;	// IMP=0x0000000100061660
- (id)init;	// IMP=0x0000000100061344

@end


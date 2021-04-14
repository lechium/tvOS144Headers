//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIResponder.h>

#import "TVApplicationControllerPrivateDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "VUIApplicationDelegate-Protocol.h"

@class ATAOpenURLController, ATAParsedOpenURL, ATATabBarController, BKSProcessAssertion, NSArray, NSDictionary, NSString, TVApplicationController, TVSUser, UIWindow, VUIBootURLController, VUINavigateToUpNextHandler, VUIStateMachine;

@interface AppleTVAppDelegate : UIResponder <TVApplicationControllerPrivateDelegate, UIGestureRecognizerDelegate, VUIApplicationDelegate>
{
    _Bool _enablePortraitLock;	// 8 = 0x8
    _Bool _overrideOrientation;	// 9 = 0x9
    _Bool _debugGestureSetupDone;	// 10 = 0xa
    _Bool _appWasForegrounded;	// 11 = 0xb
    UIWindow *_window;	// 16 = 0x10
    TVApplicationController *_appController;	// 24 = 0x18
    BKSProcessAssertion *_launchAssertion;	// 32 = 0x20
    NSDictionary *_launchOptions;	// 40 = 0x28
    ATAParsedOpenURL *_deferredParsedOpenURL;	// 48 = 0x30
    ATAOpenURLController *_openURLController;	// 56 = 0x38
    VUIBootURLController *_bootURLController;	// 64 = 0x40
    ATATabBarController *_tabBarController;	// 72 = 0x48
    NSArray *_tabBarItems;	// 80 = 0x50
    VUIStateMachine *_stateMachine;	// 88 = 0x58
    VUINavigateToUpNextHandler *_navigateToUpNextHandler;	// 96 = 0x60
    TVSUser *_currentActiveUser;	// 104 = 0x68
}

+ (_Bool)_isDeeplinkTVButton:(id)arg1;	// IMP=0x0000000100009f6c
- (void).cxx_destruct;	// IMP=0x000000010000a268
@property(retain, nonatomic) TVSUser *currentActiveUser; // @synthesize currentActiveUser=_currentActiveUser;
@property(retain, nonatomic) VUINavigateToUpNextHandler *navigateToUpNextHandler; // @synthesize navigateToUpNextHandler=_navigateToUpNextHandler;
@property(nonatomic) _Bool appWasForegrounded; // @synthesize appWasForegrounded=_appWasForegrounded;
@property(nonatomic) _Bool debugGestureSetupDone; // @synthesize debugGestureSetupDone=_debugGestureSetupDone;
@property(nonatomic) _Bool overrideOrientation; // @synthesize overrideOrientation=_overrideOrientation;
@property(retain, nonatomic) VUIStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(retain, nonatomic) NSArray *tabBarItems; // @synthesize tabBarItems=_tabBarItems;
@property(retain, nonatomic) ATATabBarController *tabBarController; // @synthesize tabBarController=_tabBarController;
@property(retain, nonatomic) VUIBootURLController *bootURLController; // @synthesize bootURLController=_bootURLController;
@property(retain, nonatomic) ATAOpenURLController *openURLController; // @synthesize openURLController=_openURLController;
@property(retain, nonatomic) ATAParsedOpenURL *deferredParsedOpenURL; // @synthesize deferredParsedOpenURL=_deferredParsedOpenURL;
@property(copy, nonatomic) NSDictionary *launchOptions; // @synthesize launchOptions=_launchOptions;
@property(retain, nonatomic) BKSProcessAssertion *launchAssertion; // @synthesize launchAssertion=_launchAssertion;
@property(retain, nonatomic) TVApplicationController *appController; // @synthesize appController=_appController;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
- (void)_hideLoadingView;	// IMP=0x0000000100009eec
- (void)_showLoadingView;	// IMP=0x0000000100009e64
- (void)_refreshTabBarItems;	// IMP=0x0000000100009d18
- (void)_accountsChanged:(id)arg1;	// IMP=0x0000000100009cd0
- (void)_presentErrorDialogWithNetworkAvailable:(_Bool)arg1;	// IMP=0x00000001000099e8
- (void)_handleDeferredParsedOpenURLIfNeeded;	// IMP=0x0000000100009970
- (void)_resetDeferredParsedOpenURL;	// IMP=0x0000000100009960
- (void)_handleParsedOpenURL:(id)arg1;	// IMP=0x0000000100009470
- (void)_releaseLaunchAssertion;	// IMP=0x0000000100009418
- (void)_acquireLaunchAssertion;	// IMP=0x0000000100009398
- (void)_userSwitchAppReload;	// IMP=0x0000000100009158
- (void)_hideUserSwitchSpinner;	// IMP=0x0000000100009110
- (void)_showUserSwitchSpinnerUserSwitchState:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100009034
- (void)_handleTVAccountsChanged;	// IMP=0x0000000100008ba4
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000100008a70
- (void)_stopApplicationController;	// IMP=0x0000000100008a30
- (void)_startApplicationControllerWithBootURL:(id)arg1;	// IMP=0x00000001000085b0
- (void)_fetchApplicationControllerBootURL;	// IMP=0x000000010000813c
- (void)_fetchFullFeatureFlag:(id)arg1;	// IMP=0x0000000100007e3c
- (void)_resetJavascriptState;	// IMP=0x0000000100007dec
- (void)_showJavascriptUnavailableUIWithNetworkAvailable:(_Bool)arg1;	// IMP=0x0000000100007c60
- (void)_updateTabControllerWithTabBarItems:(id)arg1 setSelectedIndexFromDefaults:(_Bool)arg2;	// IMP=0x0000000100007924
- (void)_finishJavascriptSetupWithTabBarItems:(id)arg1 setSelectedIndexFromDefaults:(_Bool)arg2;	// IMP=0x00000001000077e0
- (void)_startJavascriptSetup;	// IMP=0x000000010000779c
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x0000000100007794
- (void)_handleDebugUIGesture:(id)arg1;	// IMP=0x00000001000076d8
- (void)_handleNetworkReachabilityDidChangeNotification:(id)arg1;	// IMP=0x0000000100007588
- (void)_initializePlayer;	// IMP=0x0000000100007460
- (_Bool)_isActiveMediaLibraryTheDeviceMediaLibrary;	// IMP=0x00000001000073d0
- (void)_initializeMediaLibrary;	// IMP=0x0000000100007184
- (void)_updateDeviceMediaLibraryFromCloud;	// IMP=0x0000000100007118
- (void)_syncBookmarkServiceIfRequired;	// IMP=0x00000001000070a4
- (void)_initializeBookmarkService;	// IMP=0x000000010000704c
- (void)_registerStateMachineHandlers;	// IMP=0x0000000100004a40
- (void)_configureStateMachine;	// IMP=0x00000001000049a8
- (void)_javascriptSetTabBarItems:(id)arg1;	// IMP=0x00000001000047e8
- (id)rootViewControllerForAppController:(id)arg1;	// IMP=0x00000001000046a4
- (void)appController:(id)arg1 evaluateAppJavaScriptInContext:(id)arg2;	// IMP=0x0000000100004504
- (void)appController:(id)arg1 didStopWithOptions:(id)arg2;	// IMP=0x000000010000440c
- (void)appController:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x0000000100004314
- (void)appController:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;	// IMP=0x000000010000421c
- (unsigned long long)application:(id)arg1 supportedInterfaceOrientationsForWindow:(id)arg2;	// IMP=0x0000000100004214
- (void)applicationWillTerminate:(id)arg1;	// IMP=0x0000000100004174
- (void)applicationDidEnterBackground:(id)arg1;	// IMP=0x0000000100004128
- (void)applicationDidBecomeActive:(id)arg1;	// IMP=0x0000000100003f5c
- (void)applicationWillResignActive:(id)arg1;	// IMP=0x0000000100003f00
- (void)applicationWillEnterForeground:(id)arg1;	// IMP=0x0000000100003ee4
- (_Bool)application:(id)arg1 openURL:(id)arg2 options:(id)arg3;	// IMP=0x0000000100003d3c
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;	// IMP=0x000000010000389c
- (_Bool)application:(id)arg1 willFinishLaunchingWithOptions:(id)arg2;	// IMP=0x00000001000037a0
- (void)applicationDidInitialize:(_Bool)arg1;	// IMP=0x0000000100003794
- (_Bool)isDeviceAsleepAndSleptManually:(_Bool *)arg1;	// IMP=0x0000000100003574
- (void)updateIdleModeVisualEffectsStatus:(_Bool)arg1;	// IMP=0x0000000100003498
- (void)enablePortraitLock:(_Bool)arg1;	// IMP=0x0000000100003430
- (void)dealloc;	// IMP=0x0000000100003398
- (id)init;	// IMP=0x000000010000324c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


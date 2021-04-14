//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BuddyLanguageChangeObserverDelegate-Protocol.h"

@class BuddyLanguageChangeObserver, NSString, SATVFlowManager, SATVWindow, TVSKNavigationController, UIView;

@interface TVSetupController : NSObject <BuddyLanguageChangeObserverDelegate>
{
    SATVWindow *_window;	// 8 = 0x8
    UIView *_windowView;	// 16 = 0x10
    unsigned long long _earliestCompletionTime;	// 24 = 0x18
    TVSKNavigationController *_nav;	// 32 = 0x20
    _Bool _buddyDone;	// 40 = 0x28
    NSString *_languageAtStartup;	// 48 = 0x30
    NSString *_localeIdentifierAtStartup;	// 56 = 0x38
    BuddyLanguageChangeObserver *_languageObserver;	// 64 = 0x40
    SATVFlowManager *_flowManager;	// 72 = 0x48
}

+ (id)sharedSetupController;	// IMP=0x0000000100019e00
- (void).cxx_destruct;	// IMP=0x000000010001b240
- (void)_localeChanged;	// IMP=0x000000010001b1f8
- (_Bool)deviceHasWiFi;	// IMP=0x000000010001b134
- (void)_refreshLanguage;	// IMP=0x000000010001b080
- (void)observer:(id)arg1 didObserveLanguageChange:(_Bool)arg2 localeChange:(_Bool)arg3;	// IMP=0x000000010001af70
- (void)exitBuddy;	// IMP=0x000000010001af6c
- (void)didEnterBackground;	// IMP=0x000000010001aec4
- (void)respring;	// IMP=0x000000010001ae84
- (void)suspendApp;	// IMP=0x000000010001ac70
- (void)resign;	// IMP=0x000000010001ac28
- (void)resume;	// IMP=0x000000010001ac24
- (void)run;	// IMP=0x000000010001a6b4
- (void)_createNav;	// IMP=0x000000010001a3f0
- (id)navigationController;	// IMP=0x000000010001a3e8
- (void)_finishBuddy;	// IMP=0x000000010001a1e8
- (void)_finishBuddyWhenReady;	// IMP=0x000000010001a178
- (void)setBuddyComplete;	// IMP=0x0000000100019ea0
- (void)dealloc;	// IMP=0x0000000100019e44

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIResponder.h>

#import "UIApplicationDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class MISSING_TYPE, UIWindow;

@interface _TtC8AppStore15BaseAppDelegate : UIResponder <UIApplicationDelegate, UIGestureRecognizerDelegate>
{
    MISSING_TYPE *window;	// 8 = 0x8
    MISSING_TYPE *appHasBeenInBackground;	// 16 = 0x10
    MISSING_TYPE *eventWatchdoge;	// 24 = 0x18
    MISSING_TYPE *freshnessWatchdog;	// 32 = 0x20
    MISSING_TYPE *urlActionRunner;	// 40 = 0x28
    MISSING_TYPE *deepLinkController;	// 48 = 0x30
    MISSING_TYPE *pendingBootstrap;	// 56 = 0x38
    MISSING_TYPE *pendingOnboarding;	// 64 = 0x40
    MISSING_TYPE *isOnboardingFinished;	// 72 = 0x48
    MISSING_TYPE *flowController;	// 80 = 0x50
    MISSING_TYPE *showDebugClosure;	// 120 = 0x78
    MISSING_TYPE *shouldAnimateDeepLinksWithCrossfade;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x00000001000fdd24
- (id)init;	// IMP=0x00000001000fdcd4
- (void)performDebugGesture:(id)arg1;	// IMP=0x00000001000fd4f8
- (_Bool)application:(id)arg1 openURL:(id)arg2 options:(id)arg3;	// IMP=0x00000001000fd3b4
- (void)applicationDidEnterBackground:(id)arg1;	// IMP=0x00000001000fd290
- (void)applicationWillEnterForeground:(id)arg1;	// IMP=0x00000001000fd244
- (void)applicationDidBecomeActive:(id)arg1;	// IMP=0x00000001000fd1f8
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;	// IMP=0x00000001000fd05c
@property(nonatomic, retain) UIWindow *window; // @synthesize window;

@end


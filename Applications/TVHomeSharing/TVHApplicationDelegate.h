//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIResponder.h>

#import "UIApplicationDelegate-Protocol.h"
#import "UIApplicationTestingDelegate-Protocol.h"

@class NSString, TVHKMediaLibrariesManager, TVHMainSceneDelegate, UIWindow;

@interface TVHApplicationDelegate : UIResponder <UIApplicationTestingDelegate, UIApplicationDelegate>
{
    TVHKMediaLibrariesManager *_mediaLibrariesManager;	// 8 = 0x8
}

+ (id)sharedApplicationDelegate;	// IMP=0x00000001000921e8
- (void).cxx_destruct;	// IMP=0x0000000100092914
@property(readonly, nonatomic) TVHKMediaLibrariesManager *mediaLibrariesManager; // @synthesize mediaLibrariesManager=_mediaLibrariesManager;
- (void)_initializeScreenSaverProvider;	// IMP=0x0000000100092860
- (void)_initializeAssetLibrary;	// IMP=0x000000010009278c
- (void)_initializeMediaLibrariesManager;	// IMP=0x0000000100092708
- (void)_enqueueAsyncMainQueueBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010009260c
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000001000924ac
- (void)applicationWillEnterForeground:(id)arg1;	// IMP=0x000000010009246c
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;	// IMP=0x0000000100092408
@property(readonly, nonatomic) TVHMainSceneDelegate *mainSceneDelegate;
- (void)dealloc;	// IMP=0x0000000100092160
- (id)init;	// IMP=0x0000000100092098
- (_Bool)application:(id)arg1 runTest:(id)arg2 options:(id)arg3;	// IMP=0x0000000100019430

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIWindow *window;

@end


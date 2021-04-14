//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBInstanceDependable-Protocol.h"
#import "PBSystemOverlayUIProvider-Protocol.h"
#import "PBSystemUIManaging-Protocol.h"

@class NSString, PBSystemOverlayController, PBWallpaperViewController;

@interface PBWallpaperManager : NSObject <PBSystemOverlayUIProvider, PBSystemUIManaging, PBInstanceDependable>
{
    PBSystemOverlayController *_overlayController;	// 8 = 0x8
    PBWallpaperViewController *_wallpaperViewController;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x000000010016924c
+ (id)dependencyDescription;	// IMP=0x000000010016906c
- (void).cxx_destruct;	// IMP=0x0000000100169b84
@property(readonly, nonatomic) PBWallpaperViewController *wallpaperViewController; // @synthesize wallpaperViewController=_wallpaperViewController;
@property(readonly, nonatomic) PBSystemOverlayController *overlayController; // @synthesize overlayController=_overlayController;
- (void)prepareUIForSystemOverlayPresentationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100169adc
@property(readonly, nonatomic, getter=isPresenting) _Bool presenting;
- (void)updateWallpaperWithTransitionContext:(id)arg1;	// IMP=0x0000000100169a30
- (void)dismissWallpaperAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001698f8
- (void)presentWallpaperAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001697a4
- (id)init;	// IMP=0x000000010016931c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


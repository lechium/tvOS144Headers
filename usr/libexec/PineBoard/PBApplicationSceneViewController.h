//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "PBApplicationSceneLayoutElement-Protocol.h"
#import "PBApplicationSceneViewDelegate-Protocol.h"

@class NSString, PBApplicationSceneView, PBSceneDeferralTargetAssertion, PBSceneHandle;

@interface PBApplicationSceneViewController : UIViewController <PBApplicationSceneLayoutElement, PBApplicationSceneViewDelegate>
{
    _Bool _ready;	// 8 = 0x8
    _Bool _preferLaunchImageSnapshot;	// 9 = 0x9
    PBSceneHandle *_sceneHandle;	// 16 = 0x10
    NSString *_identifier;	// 24 = 0x18
    long long _layoutLevel;	// 32 = 0x20
    PBSceneDeferralTargetAssertion *_deferralTargetAssertion;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000100213f04
@property(readonly, nonatomic) PBSceneDeferralTargetAssertion *deferralTargetAssertion; // @synthesize deferralTargetAssertion=_deferralTargetAssertion;
@property(nonatomic) _Bool preferLaunchImageSnapshot; // @synthesize preferLaunchImageSnapshot=_preferLaunchImageSnapshot;
@property(readonly, nonatomic, getter=isReady) _Bool ready; // @synthesize ready=_ready;
@property(readonly, nonatomic) long long layoutLevel; // @synthesize layoutLevel=_layoutLevel;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) PBSceneHandle *sceneHandle; // @synthesize sceneHandle=_sceneHandle;
- (void)applicationSceneView:(id)arg1 didUpdateReadiness:(_Bool)arg2;	// IMP=0x0000000100213cf0
- (void)applicationSceneViewDidUpdatePresentationMode:(id)arg1;	// IMP=0x0000000100213c8c
- (void)applicationSceneView:(id)arg1 willLoadSnapshotWithRequest:(id)arg2;	// IMP=0x0000000100213bdc
@property(nonatomic, getter=isEligibleForFocus) _Bool eligibleForFocus;
@property(nonatomic) _Bool allowSnapshots;
@property(nonatomic, getter=isWallpaperEnabled) _Bool wallpaperEnabled;
- (void)_updateDeferralTargetAssertionIfNeeded;	// IMP=0x0000000100213724
- (id)preferredFocusEnvironments;	// IMP=0x0000000100213664
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x0000000100213598
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) unsigned long long effectivePresentationMode;
@property(nonatomic) unsigned long long presentationMode;
- (void)setPresentationMode:(unsigned long long)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100213290
@property(readonly, nonatomic) PBApplicationSceneView *sceneView;
- (void)loadView;	// IMP=0x0000000100213084
- (void)dealloc;	// IMP=0x000000010021300c
- (id)initWithSceneHandle:(id)arg1 layoutLevel:(long long)arg2;	// IMP=0x0000000100212ea8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


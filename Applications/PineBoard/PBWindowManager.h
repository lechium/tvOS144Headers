//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBInstanceDependable-Protocol.h"
#import "PBPresentationElementFocusCoordinatorObserver-Protocol.h"
#import "PBSceneLayoutViewControllerDisplayPublisherDelegate-Protocol.h"
#import "PBSystemUIPresenting-Protocol.h"

@class BSMutableIntegerMap, NSMutableDictionary, NSString, PBPresentationElementFocusCoordinator, PBSceneLayoutDebugWindow, PBUIDebugWindow, UIWindow;

@interface PBWindowManager : NSObject <PBPresentationElementFocusCoordinatorObserver, PBSceneLayoutViewControllerDisplayPublisherDelegate, PBInstanceDependable, PBSystemUIPresenting>
{
    PBPresentationElementFocusCoordinator *_focusCoordinator;	// 8 = 0x8
    long long _activeLayoutLevel;	// 16 = 0x10
    BSMutableIntegerMap *_layoutLevelToWindow;	// 24 = 0x18
    BSMutableIntegerMap *_layoutLevelToPresentationElement;	// 32 = 0x20
    NSMutableDictionary *_identifierToDisplayElementAssertions;	// 40 = 0x28
    NSMutableDictionary *_identifierToDisplayTransitionAssertions;	// 48 = 0x30
    PBUIDebugWindow *_uiDebugWindow;	// 56 = 0x38
    PBSceneLayoutDebugWindow *_uiLayoutDebugWindow;	// 64 = 0x40
}

+ (id)sharedInstance;	// IMP=0x000000010009958c
+ (id)dependencyDescription;	// IMP=0x00000001000994d4
- (void).cxx_destruct;	// IMP=0x000000010009f054
@property(readonly, nonatomic) PBSceneLayoutDebugWindow *uiLayoutDebugWindow; // @synthesize uiLayoutDebugWindow=_uiLayoutDebugWindow;
@property(readonly, nonatomic) PBUIDebugWindow *uiDebugWindow; // @synthesize uiDebugWindow=_uiDebugWindow;
@property(retain, nonatomic) NSMutableDictionary *identifierToDisplayTransitionAssertions; // @synthesize identifierToDisplayTransitionAssertions=_identifierToDisplayTransitionAssertions;
@property(retain, nonatomic) NSMutableDictionary *identifierToDisplayElementAssertions; // @synthesize identifierToDisplayElementAssertions=_identifierToDisplayElementAssertions;
@property(retain, nonatomic) BSMutableIntegerMap *layoutLevelToPresentationElement; // @synthesize layoutLevelToPresentationElement=_layoutLevelToPresentationElement;
@property(retain, nonatomic) BSMutableIntegerMap *layoutLevelToWindow; // @synthesize layoutLevelToWindow=_layoutLevelToWindow;
@property(nonatomic) long long activeLayoutLevel; // @synthesize activeLayoutLevel=_activeLayoutLevel;
@property(readonly, nonatomic) PBPresentationElementFocusCoordinator *focusCoordinator; // @synthesize focusCoordinator=_focusCoordinator;
- (void)_updateUILayoutDebugWindow;	// IMP=0x000000010009ed2c
- (void)_updateUIDebugWindow;	// IMP=0x000000010009eb28
- (void)prepareDebugWindows;	// IMP=0x000000010009e2f8
- (id)_windowForLayoutLevel:(long long)arg1 createIfNeeded:(_Bool)arg2;	// IMP=0x000000010009d13c
- (void)_handleDisplayElementUpdate;	// IMP=0x000000010009cb70
- (void)_removeDisplayLayoutElementWithIdentifier:(id)arg1;	// IMP=0x000000010009caa8
- (void)_addDisplayLayoutElement:(id)arg1;	// IMP=0x000000010009c7e8
- (id)_displayLayoutElementForOverlayLevel:(long long)arg1;	// IMP=0x000000010009c68c
- (id)_displayLayoutElementForSceneLayoutElement:(id)arg1;	// IMP=0x000000010009c474
- (void)invalidateSystemUIAtLevel:(long long)arg1;	// IMP=0x000000010009c090
- (void)unhideSystemUIAtLevel:(long long)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010009bb50
- (void)hideSystemUIAtLevel:(long long)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010009b44c
- (void)dismissSystemUIAtLevel:(long long)arg1 animated:(_Bool)arg2 transitionBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000010009aaf4
- (void)presentSystemUI:(id)arg1 withContext:(id)arg2 animated:(_Bool)arg3 transitionBlock:(CDUnknownBlockType)arg4;	// IMP=0x000000010009a33c
- (void)sceneLayoutViewController:(id)arg1 didEndTransitionForTransitionElement:(id)arg2 forReason:(id)arg3;	// IMP=0x000000010009a218
- (void)sceneLayoutViewController:(id)arg1 didStartTransitionForTransitionElement:(id)arg2 forReason:(id)arg3;	// IMP=0x0000000100099fb4
- (void)sceneLayoutViewController:(id)arg1 didRemoveTransitionElement:(id)arg2;	// IMP=0x0000000100099db8
- (void)sceneLayoutViewController:(id)arg1 didAddTransitionElement:(id)arg2;	// IMP=0x0000000100099ce4
- (void)presentationElementFocusCoordinator:(id)arg1 didUpdateToActiveLayoutLevel:(long long)arg2 fromLevel:(long long)arg3;	// IMP=0x0000000100099bfc
@property(readonly, nonatomic, getter=isShowingWallpaperOnly) _Bool showingWallpaperOnly;
@property(readonly, nonatomic, getter=isShowingBaseUIOnly) _Bool showingBaseUIOnly;
- (id)windowForLayoutLevel:(long long)arg1;	// IMP=0x0000000100099a64
- (void)presentSceneLayoutWindow;	// IMP=0x0000000100099940
@property(readonly, nonatomic) UIWindow *activeWindow;
- (_Bool)shouldForwardSystemAppEvent;	// IMP=0x00000001000997dc
- (id)init;	// IMP=0x000000010009965c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

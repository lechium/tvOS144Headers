//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CAAnimationDelegate-Protocol.h"
#import "SCATCursorControllerDelegate-Protocol.h"

@class NSString, SCATCursorController;
@protocol SCATCursorManagerDelegate, SCATDisplaySource;

@interface SCATCursorManager : NSObject <SCATCursorControllerDelegate, CAAnimationDelegate>
{
    _Bool _cursorUIHidden;	// 8 = 0x8
    id <SCATDisplaySource> _displaySourceDelegate;	// 16 = 0x10
    id <SCATCursorManagerDelegate> _delegate;	// 24 = 0x18
    SCATCursorController *_focusedItemCursorController;	// 32 = 0x20
    SCATCursorController *_containingGroupCursorController;	// 40 = 0x28
    SCATCursorController *_menuItemCursorController;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000001000a7780
@property(nonatomic, getter=isCursorUIHidden) _Bool cursorUIHidden; // @synthesize cursorUIHidden=_cursorUIHidden;
@property(retain, nonatomic) SCATCursorController *menuItemCursorController; // @synthesize menuItemCursorController=_menuItemCursorController;
@property(retain, nonatomic) SCATCursorController *containingGroupCursorController; // @synthesize containingGroupCursorController=_containingGroupCursorController;
@property(retain, nonatomic) SCATCursorController *focusedItemCursorController; // @synthesize focusedItemCursorController=_focusedItemCursorController;
@property(nonatomic) __weak id <SCATCursorManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id <SCATDisplaySource> displaySourceDelegate; // @synthesize displaySourceDelegate=_displaySourceDelegate;
- (id)_cursorPathAndFrame:(struct CGRect *)arg1 forElementFrame:(struct CGRect)arg2 inDisplayContext:(id)arg3;	// IMP=0x00000001000a745c
- (void)_path:(id *)arg1 frame:(struct CGRect *)arg2 isSimpleRect:(_Bool *)arg3 forFocusContext:(id)arg4 cursor:(id)arg5;	// IMP=0x00000001000a704c
- (void)_theme:(int *)arg1 level:(int *)arg2 forFocusContext:(id)arg3 cursor:(id)arg4 options:(int)arg5;	// IMP=0x00000001000a6b30
- (void)_reorderLayersIfNeeded;	// IMP=0x00000001000a6930
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;	// IMP=0x00000001000a6794
- (void)hideCursor:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00000001000a662c
- (void)cancelSelectTimeoutAnimationIfNeeded;	// IMP=0x00000001000a65c0
- (void)beginSelectTimeoutAnimation:(double)arg1;	// IMP=0x00000001000a643c
- (void)updateMainCursorWithElement:(id)arg1;	// IMP=0x00000001000a6384
- (void)updateWithFocusContext:(id)arg1 animated:(_Bool)arg2 options:(int)arg3;	// IMP=0x00000001000a6158
- (void)_updateCursor:(id)arg1 withFocusContext:(id)arg2 shouldAnimate:(_Bool)arg3 options:(int)arg4;	// IMP=0x00000001000a5fa4
- (void)_updateZoom:(struct CGRect)arg1 withElement:(id)arg2 cursorController:(id)arg3;	// IMP=0x00000001000a5de8
- (id)styleProvider;	// IMP=0x00000001000a5dd4
- (id)cursors;	// IMP=0x00000001000a5cdc
- (id)displayContextForCursor:(id)arg1;	// IMP=0x00000001000a5c10
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x00000001000a5a10
- (id)initWithDisplaySource:(id)arg1;	// IMP=0x00000001000a58d8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

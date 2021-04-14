//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "PGPictureInPictureViewControllerContentContainer-Protocol.h"

@class NSDate, NSString, PBPIPControlsViewController, PGPictureInPictureViewController, _PBPIPHintView;
@protocol PBPIPContainerViewControllerAnimationDelegate;

@interface PBPIPContainerViewController : UIViewController <PGPictureInPictureViewControllerContentContainer>
{
    PGPictureInPictureViewController *_pictureInPictureViewController;	// 8 = 0x8
    id <PBPIPContainerViewControllerAnimationDelegate> _animationDelegate;	// 16 = 0x10
    PBPIPControlsViewController *_controlsViewController;	// 24 = 0x18
    _PBPIPHintView *_hintView;	// 32 = 0x20
    NSDate *_editingStartDate;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000010004dd78
@property(retain, nonatomic) NSDate *editingStartDate; // @synthesize editingStartDate=_editingStartDate;
@property(retain, nonatomic) _PBPIPHintView *hintView; // @synthesize hintView=_hintView;
@property(readonly, nonatomic) PBPIPControlsViewController *controlsViewController; // @synthesize controlsViewController=_controlsViewController;
@property(nonatomic) __weak id <PBPIPContainerViewControllerAnimationDelegate> animationDelegate; // @synthesize animationDelegate=_animationDelegate;
@property(retain, nonatomic) PGPictureInPictureViewController *pictureInPictureViewController; // @synthesize pictureInPictureViewController=_pictureInPictureViewController;
- (void)performStopAnimationWithFinalInterfaceOrientation:(long long)arg1 finalLayerFrame:(struct CGRect)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010004dad8
- (void)prepareStopAnimationWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010004da48
- (void)performStartAnimationWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010004d9b8
- (void)prepareStartAnimationWithInitialInterfaceOrientation:(long long)arg1 initialLayerFrame:(struct CGRect)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010004d904
- (void)preferredContentSizeDidChangeForPictureInPictureViewController;	// IMP=0x000000010004d8f0
- (void)hideControlsHint;	// IMP=0x000000010004d5e8
- (void)showControlsHint;	// IMP=0x000000010004cce4
- (void)_hideControlsUsingAnimationStyle:(long long)arg1;	// IMP=0x000000010004cb78
- (void)_showControlsUsingAnimationStyle:(long long)arg1 inQuadrant:(long long)arg2;	// IMP=0x000000010004c644
- (void)setEditing:(_Bool)arg1 animationStyle:(long long)arg2 inQuadrant:(long long)arg3;	// IMP=0x000000010004c46c
- (id)preferredFocusEnvironments;	// IMP=0x000000010004c358
- (void)viewDidLoad;	// IMP=0x000000010004bcac
- (void)dealloc;	// IMP=0x000000010004bc1c
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010004bb0c
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000010004b9d0
- (id)initWithPictureInPictureViewController:(id)arg1;	// IMP=0x000000010004b8a4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

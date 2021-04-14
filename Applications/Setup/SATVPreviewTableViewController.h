//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import "UITableViewDelegate-Protocol.h"

@class NSIndexPath, NSString, SATVFocusRedirectView, SATVTableView, UIView, UIViewController, UIVisualEffectView;

@interface SATVPreviewTableViewController : UITableViewController <UITableViewDelegate>
{
    UIVisualEffectView *_backdropView;	// 8 = 0x8
    UIView *_tableContainingView;	// 16 = 0x10
    SATVFocusRedirectView *_previewContainerView;	// 24 = 0x18
    NSIndexPath *_lastAutoUpdatePreviewIndexPath;	// 32 = 0x20
    double _lastAutoUpdatePreviewDelay;	// 40 = 0x28
    NSIndexPath *_pendingAutoUpdatePreviewIndexPath;	// 48 = 0x30
    long long _initializationStyle;	// 56 = 0x38
    _Bool _previewOnRightSide;	// 64 = 0x40
    _Bool _fadeThroughPreviews;	// 65 = 0x41
    UIViewController *_previewViewController;	// 72 = 0x48
    double _tableViewWidth;	// 80 = 0x50
    unsigned long long _backdropViewMode;	// 88 = 0x58
    UIView *_bannerView;	// 96 = 0x60
    UIView *_headerView;	// 104 = 0x68
    UIView *_previewView;	// 112 = 0x70
    CDUnknownBlockType _autoUpdatePreviewViewControllerBlock;	// 120 = 0x78
    struct UIEdgeInsets _tableViewPadding;	// 128 = 0x80
    struct UIEdgeInsets _previewViewPadding;	// 160 = 0xa0
}

+ (double)defaultSectionHeaderHeight;	// IMP=0x00000001000767bc
+ (double)defaultRowHeight;	// IMP=0x00000001000767b0
- (void).cxx_destruct;	// IMP=0x00000001000768d8
@property(copy, nonatomic) CDUnknownBlockType autoUpdatePreviewViewControllerBlock; // @synthesize autoUpdatePreviewViewControllerBlock=_autoUpdatePreviewViewControllerBlock;
@property(nonatomic) _Bool fadeThroughPreviews; // @synthesize fadeThroughPreviews=_fadeThroughPreviews;
@property(retain, nonatomic) UIView *previewView; // @synthesize previewView=_previewView;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) UIView *bannerView; // @synthesize bannerView=_bannerView;
@property(nonatomic) unsigned long long backdropViewMode; // @synthesize backdropViewMode=_backdropViewMode;
@property(nonatomic) _Bool previewOnRightSide; // @synthesize previewOnRightSide=_previewOnRightSide;
@property(nonatomic) struct UIEdgeInsets previewViewPadding; // @synthesize previewViewPadding=_previewViewPadding;
@property(nonatomic) struct UIEdgeInsets tableViewPadding; // @synthesize tableViewPadding=_tableViewPadding;
@property(nonatomic) double tableViewWidth; // @synthesize tableViewWidth=_tableViewWidth;
@property(retain, nonatomic) UIViewController *previewViewController; // @synthesize previewViewController=_previewViewController;
- (void)_setPreviewPaused:(_Bool)arg1;	// IMP=0x0000000100076734
- (struct CGRect)_frameForPreview;	// IMP=0x00000001000764ec
- (struct CGRect)_frameForTable;	// IMP=0x0000000100076380
- (struct CGRect)_frameForHeaderView;	// IMP=0x00000001000762f8
- (void)_updateBackdropViewBeforeSettingPreviewViewIfNessecary;	// IMP=0x0000000100076274
- (void)_updateBackdropViewAfterSettingPreviewViewIfNessecary;	// IMP=0x000000010007620c
- (_Bool)_isBackdropViewVisible;	// IMP=0x00000001000761dc
- (void)_unregisterForBackdropViewHideStateUpdates;	// IMP=0x00000001000761b8
- (void)_registerForBackdropViewHideStateUpdates;	// IMP=0x00000001000760c4
- (void)_delayedAutoUpdatePreviewViewController;	// IMP=0x0000000100075f80
- (void)_cancelAutoUpdatingPreviewViewController;	// IMP=0x0000000100075f4c
- (void)_resetAutoUpdatePreviewViewControllerState;	// IMP=0x0000000100075efc
- (void)_cancelDelayedAutoUpdateOfPreviewViewController;	// IMP=0x0000000100075ed8
- (_Bool)_isAutoUpdatingPreviewViewController;	// IMP=0x0000000100075e9c
- (void)_removeBackdropView;	// IMP=0x0000000100075e60
- (void)_addBackdropView;	// IMP=0x0000000100075d40
- (void)setBackdropViewHidden:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0000000100075c34
- (struct CGRect)adjustedFrameForPreviewFrame:(struct CGRect)arg1;	// IMP=0x0000000100075924
- (void)_setPreviewView:(id)arg1 forced:(_Bool)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000001000755ac
- (void)setPreviewViewController:(id)arg1 forced:(_Bool)arg2;	// IMP=0x00000001000752f8
- (void)tableView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x00000001000751b4
- (void)_applicationDidFinishSuspension:(id)arg1;	// IMP=0x0000000100075084
- (void)_applicationWillEnterForeground:(id)arg1;	// IMP=0x0000000100075074
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000100074fa0
- (void)viewDidLayoutSubviews;	// IMP=0x0000000100074bfc
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0000000100074aa0
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000010007492c
@property(retain, nonatomic) SATVTableView *tableView; // @dynamic tableView;
- (id)preferredFocusEnvironments;	// IMP=0x0000000100074824
- (void)loadView;	// IMP=0x0000000100074580
- (id)initWithStyle:(long long)arg1;	// IMP=0x00000001000744d8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class NSArray, NSString, UITapGestureRecognizer;
@protocol TVSettingsBetaTermsViewControllerDelegate;

@interface TVSettingsBetaTermsViewController : UIViewController <UIViewControllerTransitioningDelegate>
{
    _Bool _termTextVisible;	// 8 = 0x8
    id <TVSettingsBetaTermsViewControllerDelegate> _delegate;	// 16 = 0x10
    NSArray *_terms;	// 24 = 0x18
    UIViewController *_currentChildViewController;	// 32 = 0x20
    UITapGestureRecognizer *_menuRecognizer;	// 40 = 0x28
    unsigned long long _currentTermIndex;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000100020ad0
@property(nonatomic) _Bool termTextVisible; // @synthesize termTextVisible=_termTextVisible;
@property(nonatomic) unsigned long long currentTermIndex; // @synthesize currentTermIndex=_currentTermIndex;
@property(retain, nonatomic) UITapGestureRecognizer *menuRecognizer; // @synthesize menuRecognizer=_menuRecognizer;
@property(retain, nonatomic) UIViewController *currentChildViewController; // @synthesize currentChildViewController=_currentChildViewController;
@property(copy, nonatomic) NSArray *terms; // @synthesize terms=_terms;
@property(nonatomic) __weak id <TVSettingsBetaTermsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_transitionToViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000100020650
- (void)_completeWithResult:(_Bool)arg1;	// IMP=0x00000001000205a0
- (void)_showTermText;	// IMP=0x0000000100020454
- (void)_showButtons;	// IMP=0x000000010001fe50
- (void)_handleMenuButton:(id)arg1;	// IMP=0x000000010001fdfc
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;	// IMP=0x000000010001fd88
- (id)animationControllerForDismissedController:(id)arg1;	// IMP=0x000000010001fd5c
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;	// IMP=0x000000010001fd30
- (id)preferredFocusEnvironments;	// IMP=0x000000010001fcdc
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x000000010001fc20
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000010001fb4c
- (void)viewDidLoad;	// IMP=0x000000010001fafc
- (id)initWithTerms:(id)arg1;	// IMP=0x000000010001fa18

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


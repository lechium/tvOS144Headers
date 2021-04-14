//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSString, UIActivityIndicatorView, UIButton, UIImageView, UILabel, UILayoutGuide, UIView;
@protocol TVNPOdeonMainViewControllerDelegate;

@interface TVNPOdeonMainViewController : UIViewController
{
    _Bool _updatesHomeKit;	// 8 = 0x8
    id <TVNPOdeonMainViewControllerDelegate> _delegate;	// 16 = 0x10
    NSString *_routeUID;	// 24 = 0x18
    UIView *_lockupView;	// 32 = 0x20
    UILabel *_titleLabel;	// 40 = 0x28
    UILabel *_descriptionLabel;	// 48 = 0x30
    UIButton *_primaryButton;	// 56 = 0x38
    UIButton *_secondaryButton;	// 64 = 0x40
    UILabel *_footerLabel;	// 72 = 0x48
    UIImageView *_imageView;	// 80 = 0x50
    UILabel *_settingUpLabel;	// 88 = 0x58
    UIActivityIndicatorView *_spinnerView;	// 96 = 0x60
    UILayoutGuide *_settingUpGuide;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x000000010001bd04
@property(readonly, nonatomic) UILayoutGuide *settingUpGuide; // @synthesize settingUpGuide=_settingUpGuide;
@property(readonly, nonatomic) UIActivityIndicatorView *spinnerView; // @synthesize spinnerView=_spinnerView;
@property(readonly, nonatomic) UILabel *settingUpLabel; // @synthesize settingUpLabel=_settingUpLabel;
@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(readonly, nonatomic) UILabel *footerLabel; // @synthesize footerLabel=_footerLabel;
@property(readonly, nonatomic) UIButton *secondaryButton; // @synthesize secondaryButton=_secondaryButton;
@property(readonly, nonatomic) UIButton *primaryButton; // @synthesize primaryButton=_primaryButton;
@property(readonly, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) UIView *lockupView; // @synthesize lockupView=_lockupView;
@property(readonly, nonatomic) NSString *routeUID; // @synthesize routeUID=_routeUID;
@property(nonatomic) _Bool updatesHomeKit; // @synthesize updatesHomeKit=_updatesHomeKit;
@property(nonatomic) __weak id <TVNPOdeonMainViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dismissOdeonPrompt;	// IMP=0x000000010001bbb4
- (void)_handleSkipButton;	// IMP=0x000000010001ba84
- (void)_handleAcceptButton;	// IMP=0x000000010001b27c
- (id)preferredFocusEnvironments;	// IMP=0x000000010001b1a4
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000010001b140
- (void)viewDidLoad;	// IMP=0x00000001000194f0
- (id)initWithRouteUID:(id)arg1;	// IMP=0x000000010001945c

@end


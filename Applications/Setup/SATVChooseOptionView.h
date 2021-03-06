//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, SATVHeaderView, TVSKLabel, UIButton;
@protocol SATVChooseOptionViewDataSource, SATVChooseOptionViewDelegate;

@interface SATVChooseOptionView : UIView
{
    id <SATVChooseOptionViewDataSource> _dataSource;	// 8 = 0x8
    id <SATVChooseOptionViewDelegate> _delegate;	// 16 = 0x10
    UIButton *_firstOptionButton;	// 24 = 0x18
    UIButton *_secondOptionButton;	// 32 = 0x20
    UIButton *_thirdOptionButton;	// 40 = 0x28
    SATVHeaderView *_headerView;	// 48 = 0x30
    TVSKLabel *_footerLabel;	// 56 = 0x38
    UIView *_footerView;	// 64 = 0x40
    UIView *_lastPreferredFocusedButton;	// 72 = 0x48
    NSString *_firstOptionFooterText;	// 80 = 0x50
    NSString *_secondOptionFooterText;	// 88 = 0x58
    NSString *_thirdOptionFooterText;	// 96 = 0x60
    UIView *_firstOptionFooterView;	// 104 = 0x68
    UIView *_secondOptionFooterView;	// 112 = 0x70
    UIView *_thirdOptionFooterView;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x0000000100055c90
@property(retain, nonatomic) UIView *thirdOptionFooterView; // @synthesize thirdOptionFooterView=_thirdOptionFooterView;
@property(retain, nonatomic) UIView *secondOptionFooterView; // @synthesize secondOptionFooterView=_secondOptionFooterView;
@property(retain, nonatomic) UIView *firstOptionFooterView; // @synthesize firstOptionFooterView=_firstOptionFooterView;
@property(copy, nonatomic) NSString *thirdOptionFooterText; // @synthesize thirdOptionFooterText=_thirdOptionFooterText;
@property(copy, nonatomic) NSString *secondOptionFooterText; // @synthesize secondOptionFooterText=_secondOptionFooterText;
@property(copy, nonatomic) NSString *firstOptionFooterText; // @synthesize firstOptionFooterText=_firstOptionFooterText;
@property(retain, nonatomic) UIView *lastPreferredFocusedButton; // @synthesize lastPreferredFocusedButton=_lastPreferredFocusedButton;
@property(retain, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(readonly, nonatomic) TVSKLabel *footerLabel; // @synthesize footerLabel=_footerLabel;
@property(readonly, nonatomic) SATVHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) UIButton *thirdOptionButton; // @synthesize thirdOptionButton=_thirdOptionButton;
@property(readonly, nonatomic) UIButton *secondOptionButton; // @synthesize secondOptionButton=_secondOptionButton;
@property(readonly, nonatomic) UIButton *firstOptionButton; // @synthesize firstOptionButton=_firstOptionButton;
@property(nonatomic) __weak id <SATVChooseOptionViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <SATVChooseOptionViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (struct CGSize)sizeThatFitsOptionButton:(id)arg1 withinSize:(struct CGSize)arg2;	// IMP=0x0000000100055a34
- (struct CGSize)_optionButtonSizeFromFitSizes:(id)arg1;	// IMP=0x00000001000558d8
- (void)_thirdOptionButtonSelected;	// IMP=0x0000000100055874
- (void)_secondOptionButtonSelected;	// IMP=0x000000010005582c
- (void)_firstOptionButtonSelected;	// IMP=0x00000001000557e4
- (_Bool)_hasFooterView;	// IMP=0x0000000100055670
- (void)_updateFooter;	// IMP=0x0000000100055168
- (void)_populateViews;	// IMP=0x0000000100054bb4
- (struct CGSize)_computeFramesForBounds:(struct CGRect)arg1 forCalculationOnly:(_Bool)arg2;	// IMP=0x00000001000543a8
- (id)preferredFocusEnvironments;	// IMP=0x00000001000542b0
- (_Bool)canBecomeFocused;	// IMP=0x000000010005422c
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x00000001000540bc
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000100054098
- (void)layoutSubviews;	// IMP=0x0000000100054060
- (void)reloadData;	// IMP=0x0000000100054054
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100053ce8

@end


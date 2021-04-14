//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, UIButton, UIFocusGuide, UILabel, UITextField;

@interface SATVTextEntryView : UIView
{
    _Bool _touchInputEnabled;	// 8 = 0x8
    UILabel *_titleLabel;	// 16 = 0x10
    UILabel *_subtitleLabel;	// 24 = 0x18
    UITextField *_textField;	// 32 = 0x20
    UIButton *_continueButton;	// 40 = 0x28
    UIView *_systemInputView;	// 48 = 0x30
    NSArray *_keyboardConstraints;	// 56 = 0x38
    UIFocusGuide *_gridFocusGuide;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000010006c520
@property(retain, nonatomic) UIFocusGuide *gridFocusGuide; // @synthesize gridFocusGuide=_gridFocusGuide;
@property(nonatomic) _Bool touchInputEnabled; // @synthesize touchInputEnabled=_touchInputEnabled;
@property(retain, nonatomic) NSArray *keyboardConstraints; // @synthesize keyboardConstraints=_keyboardConstraints;
@property(readonly, nonatomic) UIView *systemInputView; // @synthesize systemInputView=_systemInputView;
@property(readonly, nonatomic) UIButton *continueButton; // @synthesize continueButton=_continueButton;
@property(readonly, nonatomic) UITextField *textField; // @synthesize textField=_textField;
@property(readonly, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)_setSystemInputView:(id)arg1;	// IMP=0x000000010006c35c
- (void)_gridAlignFrame:(struct CGRect *)arg1;	// IMP=0x000000010006c31c
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x000000010006c23c
- (void)layoutSubviews;	// IMP=0x000000010006bd68
- (void)updateConstraints;	// IMP=0x000000010006b9e0
- (void)setSystemInputView:(id)arg1 touchInputEnabled:(_Bool)arg2;	// IMP=0x000000010006b8b8
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010006b4fc

@end


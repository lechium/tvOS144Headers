//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

@class NSString, SRCarPlayFocusView, SUICProgressIndicatorView, UIImageView, UILabel, UIView;

@interface SRStarkConfirmationButton : UIButton
{
    UIView *_backgroundView;	// 8 = 0x8
    SRCarPlayFocusView *_focusView;	// 16 = 0x10
    _Bool _messageReadingProgressHidden;	// 24 = 0x18
    NSString *_title;	// 32 = 0x20
    UIImageView *_iconImageView;	// 40 = 0x28
    long long _iconType;	// 48 = 0x30
    long long _type;	// 56 = 0x38
    unsigned long long _style;	// 64 = 0x40
    NSString *_unreadMessagesCount;	// 72 = 0x48
    CDUnknownBlockType _handlerBlock;	// 80 = 0x50
    SUICProgressIndicatorView *_readingProgressIndicatorView;	// 88 = 0x58
    UILabel *_customTitleLabel;	// 96 = 0x60
    CDStruct_f0ed7c64 _layoutAttributes;	// 104 = 0x68
}

+ (CDStruct_f0ed7c64)_attributesForStyle:(unsigned long long)arg1;	// IMP=0x0000000100039a34
+ (unsigned long long)_derivedStyleFromIconType:(long long)arg1 viewStyle:(unsigned long long)arg2;	// IMP=0x0000000100039a1c
+ (id)_templateImageForIconType:(long long)arg1;	// IMP=0x0000000100037e10
+ (id)buttonWithIconType:(long long)arg1 buttonType:(long long)arg2 title:(id)arg3 unreadMessagesCount:(id)arg4 viewStyle:(unsigned long long)arg5 handler:(CDUnknownBlockType)arg6;	// IMP=0x0000000100037610
- (void).cxx_destruct;	// IMP=0x000000010003a820
@property(nonatomic) CDStruct_f0ed7c64 layoutAttributes; // @synthesize layoutAttributes=_layoutAttributes;
@property(retain, nonatomic) UILabel *customTitleLabel; // @synthesize customTitleLabel=_customTitleLabel;
@property(retain, nonatomic) SUICProgressIndicatorView *readingProgressIndicatorView; // @synthesize readingProgressIndicatorView=_readingProgressIndicatorView;
@property(copy, nonatomic, getter=_handlerBlock) CDUnknownBlockType handlerBlock; // @synthesize handlerBlock=_handlerBlock;
@property(copy, nonatomic) NSString *unreadMessagesCount; // @synthesize unreadMessagesCount=_unreadMessagesCount;
@property(nonatomic, getter=isMessageReadingProgressHidden) _Bool messageReadingProgressHidden; // @synthesize messageReadingProgressHidden=_messageReadingProgressHidden;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) long long iconType; // @synthesize iconType=_iconType;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void)_updateCornerRadiusForLayer:(id)arg1;	// IMP=0x000000010003a64c
- (void)_updateFocusFrameForStyle:(unsigned long long)arg1 iconType:(long long)arg2;	// IMP=0x000000010003a334
- (void)_updateViewAlphasForStyle:(unsigned long long)arg1 focused:(_Bool)arg2 selected:(_Bool)arg3;	// IMP=0x0000000100039ff4
- (void)_updateCompositingFilterForUserInterfaceStyle:(long long)arg1;	// IMP=0x0000000100039f08
- (void)_updateIconAndProgressIndicatorColorsForTraitCollection:(id)arg1;	// IMP=0x0000000100039df0
- (void)_updateTextColorForStyle:(unsigned long long)arg1 userInterfaceStyle:(long long)arg2 focused:(_Bool)arg3;	// IMP=0x0000000100039d20
- (id)_stringForStyle:(unsigned long long)arg1;	// IMP=0x0000000100039c9c
- (id)_stringForButtonType:(long long)arg1;	// IMP=0x0000000100039c04
- (id)_stringForIconType:(long long)arg1;	// IMP=0x0000000100039a7c
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000001000398e0
- (id)description;	// IMP=0x0000000100039780
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000001000396d8
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000100039630
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000010003948c
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000001000393e4
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000010003933c
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000010003919c
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x0000000100039060
- (_Bool)canBecomeFocused;	// IMP=0x000000010003901c
- (void)setEnabled:(_Bool)arg1;	// IMP=0x0000000100038f90
- (_Bool)_isButtonIconTypeUnreadMessagesType:(long long)arg1;	// IMP=0x0000000100038f74
- (_Bool)_isButtonIconTypeReadingType:(long long)arg1;	// IMP=0x0000000100038f64
- (_Bool)isTypeEqual:(id)arg1;	// IMP=0x0000000100038df0
- (void)_configureForButtonStyle:(unsigned long long)arg1;	// IMP=0x0000000100038c10
- (void)_invokeConfirmationHandler:(id)arg1;	// IMP=0x0000000100038bc0
- (void)_maskImageView:(id)arg1 withText:(id)arg2;	// IMP=0x0000000100038998
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010003891c
- (_Bool)isEqualToStarkConfirmationButton:(id)arg1;	// IMP=0x0000000100038880
- (void)layoutSubviews;	// IMP=0x0000000100038104
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000100037fc0
- (void)updateMessageReadingProgress:(double)arg1 animated:(_Bool)arg2;	// IMP=0x0000000100037d50
- (void)updateButtonImageToIconType:(long long)arg1;	// IMP=0x0000000100037a50

@end

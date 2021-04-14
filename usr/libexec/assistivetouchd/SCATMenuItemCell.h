//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NSLayoutConstraint, SCATMenuLabel, SCATModernMenuItem, UIActivityIndicatorView, UIImage, UIImageView, UIVisualEffect, UIVisualEffectView;

@interface SCATMenuItemCell : UICollectionViewCell
{
    _Bool _shouldUseActivityIndicator;	// 8 = 0x8
    _Bool _shouldIncludeTextLabels;	// 9 = 0x9
    NSLayoutConstraint *_titleHiddenConstraint;	// 16 = 0x10
    SCATModernMenuItem *_menuItem;	// 24 = 0x18
    UIImage *_iconImage;	// 32 = 0x20
    double _iconImageAngle;	// 40 = 0x28
    UIImageView *_pressedBackgroundBorderImageView;	// 48 = 0x30
    UIImage *_defaultBackgroundImage;	// 56 = 0x38
    UIImage *_pressedBackgroundImage;	// 64 = 0x40
    UIImage *_dimmedBackgroundImage;	// 72 = 0x48
    SCATMenuLabel *_titleLabel;	// 80 = 0x50
    UIImageView *_backgroundBorderImageView;	// 88 = 0x58
    UIVisualEffectView *_borderContainerView;	// 96 = 0x60
    UIImage *_dimmedIconImage;	// 104 = 0x68
    UIImage *_highVisBackgroundAndIconImage;	// 112 = 0x70
    UIImage *_dimmedBorderImage;	// 120 = 0x78
    UIImageView *_iconImageView;	// 128 = 0x80
    UIVisualEffect *_iconEffect;	// 136 = 0x88
    UIActivityIndicatorView *_activityIndicatorView;	// 144 = 0x90
    UIVisualEffectView *_iconContainerView;	// 152 = 0x98
}

+ (struct CGSize)cellSizeForTitle:(id)arg1;	// IMP=0x0000000100094d38
+ (struct CGSize)maxCellSize;	// IMP=0x0000000100094d14
+ (id)measuringCell;	// IMP=0x0000000100094bac
+ (id)titleToSizeCache;	// IMP=0x0000000100094a88
- (void).cxx_destruct;	// IMP=0x0000000100097d08
@property(retain, nonatomic) UIVisualEffectView *iconContainerView; // @synthesize iconContainerView=_iconContainerView;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(retain, nonatomic) UIVisualEffect *iconEffect; // @synthesize iconEffect=_iconEffect;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UIImage *dimmedBorderImage; // @synthesize dimmedBorderImage=_dimmedBorderImage;
@property(retain, nonatomic) UIImage *highVisBackgroundAndIconImage; // @synthesize highVisBackgroundAndIconImage=_highVisBackgroundAndIconImage;
@property(retain, nonatomic) UIImage *dimmedIconImage; // @synthesize dimmedIconImage=_dimmedIconImage;
@property(retain, nonatomic) UIVisualEffectView *borderContainerView; // @synthesize borderContainerView=_borderContainerView;
@property(retain, nonatomic) UIImageView *backgroundBorderImageView; // @synthesize backgroundBorderImageView=_backgroundBorderImageView;
@property(nonatomic) _Bool shouldIncludeTextLabels; // @synthesize shouldIncludeTextLabels=_shouldIncludeTextLabels;
@property(retain, nonatomic) SCATMenuLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImage *dimmedBackgroundImage; // @synthesize dimmedBackgroundImage=_dimmedBackgroundImage;
@property(retain, nonatomic) UIImage *pressedBackgroundImage; // @synthesize pressedBackgroundImage=_pressedBackgroundImage;
@property(retain, nonatomic) UIImage *defaultBackgroundImage; // @synthesize defaultBackgroundImage=_defaultBackgroundImage;
@property(retain, nonatomic) UIImageView *pressedBackgroundBorderImageView; // @synthesize pressedBackgroundBorderImageView=_pressedBackgroundBorderImageView;
@property(nonatomic) double iconImageAngle; // @synthesize iconImageAngle=_iconImageAngle;
@property(retain, nonatomic) UIImage *iconImage; // @synthesize iconImage=_iconImage;
@property(nonatomic) __weak SCATModernMenuItem *menuItem; // @synthesize menuItem=_menuItem;
@property(nonatomic) _Bool shouldUseActivityIndicator; // @synthesize shouldUseActivityIndicator=_shouldUseActivityIndicator;
- (void)resetCell;	// IMP=0x0000000100097aa4
- (_Bool)allowsDwellScanningToAbortAfterTimeout;	// IMP=0x0000000100097a58
- (id)accessibilityLabel;	// IMP=0x0000000100097a04
- (id)scatSpeakableDescription;	// IMP=0x00000001000979b0
- (_Bool)scatIndicatesOwnFocus;	// IMP=0x00000001000979a8
- (_Bool)scatShouldActivateDirectly;	// IMP=0x00000001000979a0
- (_Bool)scatPerformAction:(int)arg1;	// IMP=0x000000010009793c
- (_Bool)scatSupportsAction:(int)arg1;	// IMP=0x0000000100097930
- (void)prepareForReuse;	// IMP=0x00000001000976d0
- (void)didUpdateScatMenuItemStyle;	// IMP=0x0000000100097540
- (void)_setIconDimmed:(_Bool)arg1 asDimAsBorder:(_Bool)arg2 focused:(_Bool)arg3;	// IMP=0x0000000100097264
- (void)_setBorderDimmed:(_Bool)arg1 focused:(_Bool)arg2 hidden:(_Bool)arg3;	// IMP=0x0000000100096ca4
- (_Bool)_useHighVisibilityImage;	// IMP=0x0000000100096c9c
@property(readonly, nonatomic) NSLayoutConstraint *titleHiddenConstraint; // @synthesize titleHiddenConstraint=_titleHiddenConstraint;
- (id)description;	// IMP=0x000000010009672c
- (void)_setupConstraints;	// IMP=0x0000000100095410
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100094ef8

@end


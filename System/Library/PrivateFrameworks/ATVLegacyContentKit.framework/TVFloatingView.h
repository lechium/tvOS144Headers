/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:43 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ATVLegacyContentKit/ATVLegacyContentKit-Structs.h>
#import <UIKitCore/UIView.h>

@class _TVKTSpecialAnimatingView, CALayer, UIView, UIColor, UIMotionEffectGroup;

@interface TVFloatingView : UIView {

	_TVKTSpecialAnimatingView* _shadowView;
	CALayer* _shadowMaskLayer;
	_TVKTSpecialAnimatingView* _containerView;
	_TVKTSpecialAnimatingView* _highlightView;
	UIView* _contentView;
	UIColor* _unselectedBackgroundColor;
	UIMotionEffectGroup* _motionEffectGroup;
	double _currentScale;
	double _scaleFactor;
	BOOL _contentOpaque;
	BOOL _appliesContentFilters;
	BOOL _shadowEnabled;
	BOOL _selected;
	BOOL _enableFocusDirection;
	BOOL _scalesBackwards;
	BOOL _roundContentWhenDeselected;
	double _cornerRadius;
	UIColor* _selectedBackgroundColor;
	CGSize _shadowSize;
	CGPoint _focusDirection;

}

@property (assign,nonatomic) BOOL scalesBackwards;                                   //@synthesize scalesBackwards=_scalesBackwards - In the implementation block
@property (assign,nonatomic) BOOL roundContentWhenDeselected;                        //@synthesize roundContentWhenDeselected=_roundContentWhenDeselected - In the implementation block
@property (nonatomic,readonly) UIView * contentView; 
@property (assign,nonatomic) double cornerRadius;                                    //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (assign,getter=isContentOpaque,nonatomic) BOOL contentOpaque;              //@synthesize contentOpaque=_contentOpaque - In the implementation block
@property (assign,nonatomic) BOOL appliesContentFilters;                             //@synthesize appliesContentFilters=_appliesContentFilters - In the implementation block
@property (assign,getter=isShadowEnabled,nonatomic) BOOL shadowEnabled;              //@synthesize shadowEnabled=_shadowEnabled - In the implementation block
@property (assign,nonatomic) CGSize shadowSize;                                      //@synthesize shadowSize=_shadowSize - In the implementation block
@property (assign,getter=isSelected,nonatomic) BOOL selected;                        //@synthesize selected=_selected - In the implementation block
@property (nonatomic,retain) UIColor * selectedBackgroundColor;                      //@synthesize selectedBackgroundColor=_selectedBackgroundColor - In the implementation block
@property (assign,nonatomic) BOOL enableFocusDirection;                              //@synthesize enableFocusDirection=_enableFocusDirection - In the implementation block
@property (assign,nonatomic) CGPoint focusDirection;                                 //@synthesize focusDirection=_focusDirection - In the implementation block
+(CGSize)_scaledSizeForSize:(CGSize)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)isSelected;
-(id)backgroundColor;
-(void)setBackgroundColor:(id)arg1 ;
-(double)cornerRadius;
-(void)setCornerRadius:(double)arg1 ;
-(double)_scaleFactor;
-(CGSize)shadowSize;
-(void)setShadowSize:(CGSize)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIView *)contentView;
-(void)layoutSubviews;
-(void)setClipsToBounds:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)canBecomeFocused;
-(BOOL)_applyKeyPathsAndRelativeValues:(id)arg1 forMotionEffect:(id)arg2 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)setShadowEnabled:(BOOL)arg1 ;
-(BOOL)isShadowEnabled;
-(void)setContentOpaque:(BOOL)arg1 ;
-(void)setRoundContentWhenDeselected:(BOOL)arg1 ;
-(CGPoint)focusDirection;
-(void)setFocusDirection:(CGPoint)arg1 animated:(BOOL)arg2 ;
-(void)setFocusDirection:(CGPoint)arg1 ;
-(void)didSelect;
-(void)_setFocusDirection:(CGPoint)arg1 duration:(double)arg2 ;
-(void)_attachMotionEffects;
-(void)_detachMotionEffects;
-(void)setScalesBackwards:(BOOL)arg1 ;
-(void)setAppliesContentFilters:(BOOL)arg1 ;
-(void)setSelectedBackgroundColor:(UIColor *)arg1 ;
-(BOOL)_unapplyMotionEffect:(id)arg1 ;
-(void)_updateShadowMask;
-(void)_applyFocusDirectionTransform;
-(BOOL)isContentOpaque;
-(void)_updateScaleFactor;
-(void)_setSelected:(BOOL)arg1 duration:(double)arg2 ;
-(void)_updateContainerFilters;
-(UIColor *)selectedBackgroundColor;
-(BOOL)scalesBackwards;
-(BOOL)appliesContentFilters;
-(BOOL)enableFocusDirection;
-(void)setEnableFocusDirection:(BOOL)arg1 ;
-(BOOL)roundContentWhenDeselected;
@end


/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:08 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVKit/AVKit-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class _UIFloatingContentView, UIVisualEffectView, UIView, UILabel, NSLayoutConstraint, NSString;

@interface AVInfoMenuCell : UICollectionViewCell {

	_UIFloatingContentView* _floatingView;
	UIVisualEffectView* _visualEffectView;
	UIView* _focusView;
	UILabel* _label;
	NSLayoutConstraint* _floatingViewHeightConstraint;

}

@property (nonatomic,retain) _UIFloatingContentView * floatingView;                          //@synthesize floatingView=_floatingView - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * visualEffectView;                          //@synthesize visualEffectView=_visualEffectView - In the implementation block
@property (nonatomic,retain) UIView * focusView;                                             //@synthesize focusView=_focusView - In the implementation block
@property (nonatomic,retain) UILabel * label;                                                //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * floatingViewHeightConstraint;              //@synthesize floatingViewHeightConstraint=_floatingViewHeightConstraint - In the implementation block
@property (nonatomic,copy) NSString * text; 
+(double)widthForText:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(UILabel *)label;
-(void)setLabel:(UILabel *)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)prepareForReuse;
-(void)setSelected:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIView *)focusView;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)_updateAppearance;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)updateFocusState:(id)arg1 ;
-(UIVisualEffectView *)visualEffectView;
-(_UIFloatingContentView *)floatingView;
-(void)setFloatingView:(_UIFloatingContentView *)arg1 ;
-(void)setFocusView:(UIView *)arg1 ;
-(unsigned long long)elementControlState;
-(id)unfocusedElementTintColor;
-(id)elementTintColor;
-(double)elementFocusViewOpacity;
-(void)applyFocusStateForEvent:(id)arg1 controlState:(unsigned long long)arg2 ;
-(void)setVisualEffectView:(UIVisualEffectView *)arg1 ;
-(NSLayoutConstraint *)floatingViewHeightConstraint;
-(void)setFloatingViewHeightConstraint:(NSLayoutConstraint *)arg1 ;
@end


/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:38 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <UIKitCore/UIKitCore-Structs.h>
@class _UIKeyboardPopover, UIKBVisualEffectView, _UIPopoverView, _UIKeyboardPopoverAffordance, NSLayoutConstraint, UIView;

@interface UIKeyboardPopoverContainer : NSObject {

	_UIKeyboardPopover* _popoverContainerView;
	UIKBVisualEffectView* _backdrop;
	_UIPopoverView* _popover;
	_UIKeyboardPopoverAffordance* _affordance;
	CGRect _targetFull;
	double _arrowOffset;
	unsigned long long _direction;
	NSLayoutConstraint* _keyboardAreaHeight;

}

@property (retain,readonly) UIView * affordance; 
@property (readonly) CGRect frame; 
+(CGSize)shadowOffset;
+(id)shadowColor;
+(id)borderColor;
+(double)borderWidth;
+(double)cornerRadius;
+(double)shadowOpacity;
+(double)shadowRadius;
+(UIEdgeInsets)contentInsets;
+(id)pillColor;
+(double)arrowHeight;
+(CGSize)pillSize;
+(id)propertiesForTargetRect:(CGRect)arg1 withHeight:(double)arg2 onScreenSize:(CGSize)arg3 ;
+(id)propertiesForSpecificKeyboardFrame:(CGRect)arg1 onScreenSize:(CGSize)arg2 ;
+(CGRect)frameAtOffset:(CGPoint)arg1 keyboardSize:(CGSize)arg2 screenSize:(CGSize)arg3 ;
+(double)dragAreaHeight;
+(double)edgeOffset;
+(double)extraWidth;
+(double)pillCornerRadius;
+(double)pillDistanceToEdge;
-(void)invalidate;
-(CGRect)frame;
-(UIView *)affordance;
-(id)initWithView:(id)arg1 usingBackdropStyle:(long long)arg2 ;
-(void)applyProperties:(id)arg1 ;
-(void)updateBackdropStyle:(long long)arg1 ;
@end


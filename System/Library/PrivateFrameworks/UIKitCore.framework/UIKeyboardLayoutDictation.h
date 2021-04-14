/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:34 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIKeyboardLayout.h>

@class UIKBBackgroundView, UIKBTree;

@interface UIKeyboardLayoutDictation : UIKeyboardLayout {

	UIKBBackgroundView* _backgroundView;
	UIKBTree* _keyplane;

}
+(id)activeInstance;
+(CGSize)keyboardSizeForInputMode:(id)arg1 screenTraits:(id)arg2 keyboardType:(long long)arg3 ;
+(BOOL)keyboardInputMode:(id)arg1 supportsResizingOffsetForScreenTraits:(id)arg2 ;
-(BOOL)visible;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)_moveWithEvent:(id)arg1 ;
-(void)setRenderConfig:(id)arg1 ;
-(id)currentKeyplane;
-(unsigned long long)_clipCornersOfView:(id)arg1 ;
-(BOOL)usesAutoShift;
-(void)showKeyboardWithInputTraits:(id)arg1 screenTraits:(id)arg2 splitTraits:(id)arg3 ;
-(CGRect)dragGestureRectInView:(id)arg1 ;
-(CGSize)splitLeftSize;
-(void)setupBackgroundViewForNewSplitTraits:(id)arg1 ;
-(BOOL)shouldFadeFromLayout;
-(BOOL)shouldFadeToLayout;
@end


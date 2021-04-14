/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:22 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/HeadBoardUI.framework/HeadBoardUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HeadBoardUI/HeadBoardUI-Structs.h>
#import <UIKitCore/UIView.h>

@interface HBUITopShelfParadeButtonIndeterminateProgressView : UIView {

	BOOL _animating;

}

@property (getter=isAnimating,nonatomic,readonly) BOOL animating;              //@synthesize animating=_animating - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)startAnimating;
-(void)drawRect:(CGRect)arg1 ;
-(void)_applicationWillEnterForeground;
-(void)stopAnimating;
-(void)didMoveToWindow;
-(void)tintColorDidChange;
-(void)willMoveToWindow:(id)arg1 ;
-(void)_applicationDidEnterBackground;
-(BOOL)isAnimating;
-(CGRect)_contentRect;
-(void)_removeRotationAnimation;
-(void)_addRotationAnimationIfNeeded;
@end

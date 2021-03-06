/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:05 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVKit/AVKit-Structs.h>
#import <UIKitCore/UIView.h>

@class CAAnimationGroup, UIColor, CALayer;

@interface AVSpinnerView : UIView {

	CGSize _size;
	id _didBecomeActiveNotificationObserver;
	id _willResignActiveNotificationObserver;
	BOOL _animating;
	CAAnimationGroup* _animations;
	UIColor* _color;
	CALayer* _mainLayer;
	CALayer* _overlayLayer;

}

@property (nonatomic,retain) CAAnimationGroup * animations;                  //@synthesize animations=_animations - In the implementation block
@property (nonatomic,retain) UIColor * color;                                //@synthesize color=_color - In the implementation block
@property (nonatomic,retain) CALayer * mainLayer;                            //@synthesize mainLayer=_mainLayer - In the implementation block
@property (nonatomic,retain) CALayer * overlayLayer;                         //@synthesize overlayLayer=_overlayLayer - In the implementation block
@property (assign,getter=isAnimating,nonatomic) BOOL animating;              //@synthesize animating=_animating - In the implementation block
+(id)spinnerAnimationGroup;
+(CGImageRef)spinnerImageWithSize:(CGSize)arg1 color:(id)arg2 ;
+(id)repeatingRotationAnimation;
-(void)dealloc;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(CAAnimationGroup *)animations;
-(void)setAnimations:(CAAnimationGroup *)arg1 ;
-(id)initWithSize:(CGSize)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)layoutSubviews;
-(void)setAnimating:(BOOL)arg1 ;
-(BOOL)isAnimating;
-(void)_addAnimations;
-(void)_removeAnimations;
-(id)_animationToOpacity:(double)arg1 ;
-(CALayer *)mainLayer;
-(void)setMainLayer:(CALayer *)arg1 ;
-(CALayer *)overlayLayer;
-(void)setOverlayLayer:(CALayer *)arg1 ;
@end


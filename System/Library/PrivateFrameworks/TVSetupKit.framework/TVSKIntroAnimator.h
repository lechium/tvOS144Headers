/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:37 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TVSetupKit.framework/TVSetupKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CAAnimationDelegate.h>

@class CAAnimation, CALayer, NSArray, NSString;

@interface TVSKIntroAnimator : NSObject <CAAnimationDelegate> {

	BOOL _clickRunning;
	BOOL _shadowRunning;
	BOOL _enabled;
	BOOL _paused;
	double _cycleDuration;
	CAAnimation* _shadowAnimation;
	CAAnimation* _clickAnimation;
	CALayer* _clickLayer;
	CALayer* _shadowLayer;
	NSArray* _cyclingViews;

}

@property (nonatomic,retain) CAAnimation * shadowAnimation;              //@synthesize shadowAnimation=_shadowAnimation - In the implementation block
@property (nonatomic,retain) CAAnimation * clickAnimation;               //@synthesize clickAnimation=_clickAnimation - In the implementation block
@property (nonatomic,retain) CALayer * clickLayer;                       //@synthesize clickLayer=_clickLayer - In the implementation block
@property (nonatomic,retain) CALayer * shadowLayer;                      //@synthesize shadowLayer=_shadowLayer - In the implementation block
@property (nonatomic,retain) NSArray * cyclingViews;                     //@synthesize cyclingViews=_cyclingViews - In the implementation block
@property (assign,nonatomic) BOOL clickRunning;                          //@synthesize clickRunning=_clickRunning - In the implementation block
@property (assign,nonatomic) BOOL shadowRunning;                         //@synthesize shadowRunning=_shadowRunning - In the implementation block
@property (assign,nonatomic) BOOL enabled;                               //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) BOOL paused;                                //@synthesize paused=_paused - In the implementation block
@property (assign,nonatomic) double cycleDuration;                       //@synthesize cycleDuration=_cycleDuration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(BOOL)enabled;
-(void)setEnabled:(BOOL)arg1 ;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(id)animationForKey:(id)arg1 ;
-(void)setPaused:(BOOL)arg1 ;
-(void)applicationWillResignActive:(id)arg1 ;
-(BOOL)paused;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)startAnimation;
-(void)_addAnimations;
-(void)_removeAnimations;
-(void)stopAnimation;
-(id)layerForKey:(id)arg1 ;
-(id)initWithAnimations:(id)arg1 layers:(id)arg2 cyclingViews:(id)arg3 ;
-(void)setCycleDuration:(double)arg1 ;
-(CAAnimation *)clickAnimation;
-(CAAnimation *)shadowAnimation;
-(CALayer *)clickLayer;
-(CALayer *)shadowLayer;
-(void)setShadowRunning:(BOOL)arg1 ;
-(void)setClickRunning:(BOOL)arg1 ;
-(double)cycleDuration;
-(NSArray *)cyclingViews;
-(BOOL)clickRunning;
-(BOOL)shadowRunning;
-(void)setShadowAnimation:(CAAnimation *)arg1 ;
-(void)setClickAnimation:(CAAnimation *)arg1 ;
-(void)setClickLayer:(CALayer *)arg1 ;
-(void)setShadowLayer:(CALayer *)arg1 ;
-(void)setCyclingViews:(NSArray *)arg1 ;
@end


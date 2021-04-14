/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:54 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ShazamKitUI.framework/ShazamKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <QuartzCore/CALayer.h>

@class NSArray, CAMediaTimingFunction;

@interface SHTaggingViewOuterCirclesLayer : CALayer {

	NSArray* _outerCircleLayers;

}

@property (nonatomic,retain) NSArray * outerCircleLayers;                                     //@synthesize outerCircleLayers=_outerCircleLayers - In the implementation block
@property (nonatomic,readonly) CAMediaTimingFunction * inOutSineTimingFunction; 
@property (nonatomic,readonly) CAMediaTimingFunction * inOutQuartTimingFunction; 
@property (nonatomic,readonly) CAMediaTimingFunction * linearTimingFunction; 
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)layoutSublayers;
-(CAMediaTimingFunction *)linearTimingFunction;
-(void)setupSublayers;
-(CAMediaTimingFunction *)inOutSineTimingFunction;
-(void)startTaggingAnimation;
-(id)buildOuterCircleLayers;
-(void)setOuterCircleLayers:(NSArray *)arg1 ;
-(NSArray *)outerCircleLayers;
-(void)addCoreAnimationToOuterCircleLayer:(id)arg1 withStartOffset:(double)arg2 ;
-(void)addScaleAnimationToCircleLayer:(id)arg1 ;
-(id)scaleNullAnimation;
-(id)outerCircleCoreSizeAnimation;
-(id)outerCircleCoreBorderWidthAnimation;
-(id)outerCircleCoreScaleAnimation;
-(CAMediaTimingFunction *)inOutQuartTimingFunction;
@end


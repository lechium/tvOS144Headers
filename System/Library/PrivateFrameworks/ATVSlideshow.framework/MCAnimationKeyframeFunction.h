/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:47 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ATVSlideshow/MCAnimationKeyframe.h>

@class NSString, NSDictionary;

@interface MCAnimationKeyframeFunction : MCAnimationKeyframe {

	float mInnerEaseInControl;
	float mInnerEaseOutControl;
	double mDuration;
	NSString* mFunction;
	NSDictionary* mFunctionParameters;
	double mFunctionTimeOffset;
	double mFunctionTimeFactor;

}

@property (assign,nonatomic) double duration; 
@property (nonatomic,copy) NSString * function; 
@property (nonatomic,retain) NSDictionary * functionParameters; 
@property (assign,nonatomic) double functionTimeOffset; 
@property (assign,nonatomic) double functionTimeFactor; 
@property (assign,nonatomic) float innerEaseInControl; 
@property (assign,nonatomic) float innerEaseOutControl; 
+(id)keyframeWithFunction:(id)arg1 atTime:(double)arg2 offsetKind:(int)arg3 forDuration:(double)arg4 ;
-(id)description;
-(id)init;
-(NSString *)function;
-(double)duration;
-(void)setFunction:(NSString *)arg1 ;
-(void)setDuration:(double)arg1 ;
-(void)setFunctionTimeOffset:(double)arg1 ;
-(void)setFunctionTimeFactor:(double)arg1 ;
-(void)setInnerEaseInControl:(float)arg1 ;
-(void)setInnerEaseOutControl:(float)arg1 ;
-(void)setFunctionParameters:(NSDictionary *)arg1 ;
-(NSDictionary *)functionParameters;
-(double)functionTimeOffset;
-(double)functionTimeFactor;
-(float)innerEaseInControl;
-(float)innerEaseOutControl;
-(void)demolish;
-(id)imprint;
-(void)_copySelfToSnapshot:(id)arg1 ;
-(id)initWithImprint:(id)arg1 ;
@end


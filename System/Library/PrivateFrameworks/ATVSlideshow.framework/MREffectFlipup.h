/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:48 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ATVSlideshow/ATVSlideshow-Structs.h>
#import <ATVSlideshow/MREffect.h>
#import <libobjc.A.dylib/MZEffectTiming.h>

@class NSMutableDictionary, MRImageProvider, NSArray;

@interface MREffectFlipup : MREffect <MZEffectTiming> {

	NSMutableDictionary* mSprites;
	NSMutableDictionary* mBreakInformation;
	double mZPositions[6];
	double mXPositions[6];
	BOOL mIsLoaded;
	double mTiming[6];
	MRImageProvider* mGradientProvider;
	NSArray* mSortDescriptors;
	BOOL mIsFirst;

}

@property (nonatomic,readonly) double phaseInDuration; 
@property (nonatomic,readonly) double mainDuration; 
@property (nonatomic,readonly) double phaseOutDuration; 
+(void)initialize;
+(id)customTimingWithEffectID:(id)arg1 effectAttributes:(id)arg2 slideInformation:(id)arg3 textInformation:(id)arg4 inAspectRatio:(double)arg5 ;
+(BOOL)hasCustomTiming;
-(void)setAttributes:(id)arg1 ;
-(void)_cleanup;
-(void)setPixelSize:(CGSize)arg1 ;
-(id)initWithEffectID:(id)arg1 ;
-(void)_unload;
-(void)setPhaseInDuration:(double)arg1 mainDuration:(double)arg2 phaseOutDuration:(double)arg3 ;
-(double)lowestDisplayTime;
-(double)showTimeForSlideAtIndex:(unsigned long long)arg1 ;
-(double)showDurationForSlideAtIndex:(unsigned long long)arg1 ;
-(double)displayTimeForSlideAtIndex:(unsigned long long)arg1 ;
-(BOOL)isLoadedForTime:(double)arg1 ;
-(void)renderAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(BOOL)prerenderForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(id)elementHitAtPoint:(CGPoint)arg1 withInverseMatrix:(float)arg2 localPoint:(CGPoint*)arg3 ;
-(BOOL)getVerticesCoordinates:(CGPoint*)arg1 withMatrix:(float)arg2 forElement:(id)arg3 ;
-(void)_applyTimingToSlideProviders;
-(double)displayTimeForTextAtIndex:(unsigned long long)arg1 ;
-(void)_applySizeScripts:(double)arg1 ;
-(void)_setupForSlideInformation:(id)arg1 aspectRatio:(double)arg2 ;
-(double)_durationForEffect:(long long)arg1 ;
-(double)_aspectRatioForSlideIndex:(long long)arg1 ;
-(void)loadPositions;
-(long long)_iterationForTime:(double)arg1 ;
-(double)_startTimeForIteration:(long long)arg1 ;
@end


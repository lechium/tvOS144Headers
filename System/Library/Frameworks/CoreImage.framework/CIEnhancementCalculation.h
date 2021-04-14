/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:03 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CoreImage/CoreImage-Structs.h>
@class CIEnhancementHistogram;

@interface CIEnhancementCalculation : NSObject {

	CGSize originalFaceColor;
	CIEnhancementHistogram* lumHist;
	CIEnhancementHistogram* rgbSumHist;
	CIEnhancementHistogram* satHist;
	CIEnhancementHistogram* borderHist;
	double exposureValue;
	double maxShadow;
	double minShadow;
	double exposureValueAtZeroShadow;
	double curvePercent;
	BOOL faceInputSet;
	double percentFaceChange;

}

@property (readonly) CGSize originalFaceColor; 
@property (readonly) CIEnhancementHistogram * lumHist; 
@property (readonly) CIEnhancementHistogram * rgbSumHist; 
@property (readonly) CIEnhancementHistogram * satHist; 
@property (readonly) CIEnhancementHistogram * borderHist; 
+(double)bestWarmthForI:(double)arg1 q:(double)arg2 percentChange:(double*)arg3 ;
-(id)init;
-(void)dealloc;
-(id)faceBalanceWarmth;
-(id)faceBalanceStrength;
-(CGSize)originalFaceColor;
-(id)vibrance;
-(unsigned long long)curveCount;
-(CGPoint)curvePointAtIndex:(unsigned long long)arg1 ;
-(id)shadow;
-(void)setFaceColorFromChromaI:(double)arg1 andChromaQ:(double)arg2 ;
-(id)rawShadow;
-(int)putShadowsAnalysisInto:(double*)arg1 ;
-(void)downSampleHistogram:(id)arg1 to:(unsigned)arg2 storeIn:(double*)arg3 ;
-(void)printAnalysis;
-(void)setCurvePercent:(double)arg1 ;
-(void)setLuminanceHistogram:(id)arg1 ;
-(void)setRGBSumHistogram:(id)arg1 ;
-(void)setBorderHistogram:(id)arg1 ;
-(void)setSaturationHistogram:(id)arg1 ;
-(void)setupFaceColor:(id)arg1 redIndex:(int)arg2 greenIndex:(int)arg3 blueIndex:(int)arg4 ;
-(void)setExposureValue:(double)arg1 ;
-(void)setShadowsMin:(double)arg1 max:(double)arg2 zeroExposure:(double)arg3 ;
-(void)printHistogram:(id)arg1 downsampledTo:(unsigned)arg2 ;
-(void)printHistogramsDownsampledTo:(unsigned)arg1 ;
-(CIEnhancementHistogram *)lumHist;
-(CIEnhancementHistogram *)rgbSumHist;
-(CIEnhancementHistogram *)satHist;
-(CIEnhancementHistogram *)borderHist;
@end


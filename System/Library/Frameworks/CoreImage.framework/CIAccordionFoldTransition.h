/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:57 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface CIAccordionFoldTransition : CIFilter {

	CIImage* inputImage;
	CIImage* inputTargetImage;
	NSNumber* inputBottomHeight;
	NSNumber* inputNumberOfFolds;
	NSNumber* inputFoldShadowAmount;
	NSNumber* inputTime;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIImage * inputTargetImage; 
@property (nonatomic,retain) NSNumber * inputBottomHeight; 
@property (nonatomic,retain) NSNumber * inputNumberOfFolds; 
@property (nonatomic,retain) NSNumber * inputFoldShadowAmount; 
@property (nonatomic,retain) NSNumber * inputTime; 
+(id)customAttributes;
-(void)setInputTime:(NSNumber *)arg1 ;
-(NSNumber *)inputTime;
-(id)_kernelWarpS;
-(id)_kernelWarpT;
-(id)_kernelMix;
-(id)_kernel;
-(id)outputImage;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(CIImage *)inputTargetImage;
-(void)setInputTargetImage:(CIImage *)arg1 ;
-(NSNumber *)inputBottomHeight;
-(void)setInputBottomHeight:(NSNumber *)arg1 ;
-(NSNumber *)inputNumberOfFolds;
-(void)setInputNumberOfFolds:(NSNumber *)arg1 ;
-(NSNumber *)inputFoldShadowAmount;
-(void)setInputFoldShadowAmount:(NSNumber *)arg1 ;
@end


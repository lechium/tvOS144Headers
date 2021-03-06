/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:59 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber, NSDictionary;

@interface CIFaceMaskApply : CIFilter {

	CIImage* inputImage;
	CIImage* inputParameterImage;
	CIVector* inputFacesCenterX;
	CIVector* inputFacesCenterY;
	CIVector* inputFacesChinX;
	CIVector* inputFacesChinY;
	CIVector* inputK0;
	CIVector* inputK1;
	CIVector* inputK2;
	CIVector* inputK3;
	NSNumber* inputK4;
	NSDictionary* inputTuningParameters;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIImage * inputParameterImage; 
@property (nonatomic,copy) CIVector * inputFacesCenterX; 
@property (nonatomic,copy) CIVector * inputFacesCenterY; 
@property (nonatomic,copy) CIVector * inputFacesChinX; 
@property (nonatomic,copy) CIVector * inputFacesChinY; 
@property (nonatomic,copy) CIVector * inputK0; 
@property (nonatomic,copy) CIVector * inputK1; 
@property (nonatomic,copy) CIVector * inputK2; 
@property (nonatomic,copy) CIVector * inputK3; 
@property (nonatomic,copy) NSNumber * inputK4; 
@property (nonatomic,copy) NSDictionary * inputTuningParameters; 
+(id)_kernel;
-(id)outputImage;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(CIImage *)inputParameterImage;
-(void)setInputParameterImage:(CIImage *)arg1 ;
-(CIVector *)inputFacesCenterX;
-(void)setInputFacesCenterX:(CIVector *)arg1 ;
-(CIVector *)inputFacesCenterY;
-(void)setInputFacesCenterY:(CIVector *)arg1 ;
-(CIVector *)inputFacesChinX;
-(void)setInputFacesChinX:(CIVector *)arg1 ;
-(CIVector *)inputFacesChinY;
-(void)setInputFacesChinY:(CIVector *)arg1 ;
-(CIVector *)inputK0;
-(void)setInputK0:(CIVector *)arg1 ;
-(CIVector *)inputK1;
-(void)setInputK1:(CIVector *)arg1 ;
-(CIVector *)inputK2;
-(void)setInputK2:(CIVector *)arg1 ;
-(CIVector *)inputK3;
-(void)setInputK3:(CIVector *)arg1 ;
-(NSNumber *)inputK4;
-(void)setInputK4:(NSNumber *)arg1 ;
-(NSDictionary *)inputTuningParameters;
-(void)setInputTuningParameters:(NSDictionary *)arg1 ;
@end


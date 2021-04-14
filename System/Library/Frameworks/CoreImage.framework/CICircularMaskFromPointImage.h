/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:01 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface CICircularMaskFromPointImage : CIFilter {

	CIImage* inputImage;
	CIImage* inputCoordinate;
	NSNumber* inputInnerRadius;
	NSNumber* inputOuterRadius;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIImage * inputCoordinate; 
@property (nonatomic,copy) NSNumber * inputInnerRadius; 
@property (nonatomic,copy) NSNumber * inputOuterRadius; 
+(id)customAttributes;
-(id)outputImage;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(id)_kernelDraw;
-(CIImage *)inputCoordinate;
-(void)setInputCoordinate:(CIImage *)arg1 ;
-(NSNumber *)inputInnerRadius;
-(void)setInputInnerRadius:(NSNumber *)arg1 ;
-(NSNumber *)inputOuterRadius;
-(void)setInputOuterRadius:(NSNumber *)arg1 ;
@end


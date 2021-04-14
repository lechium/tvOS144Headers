/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:00 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface CILanczosScaleTransform : CIFilter {

	CIImage* inputImage;
	NSNumber* inputScale;
	NSNumber* inputAspectRatio;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) NSNumber * inputScale; 
@property (nonatomic,retain) NSNumber * inputAspectRatio; 
+(id)customAttributes;
-(BOOL)_isIdentity;
-(id)outputImage;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(NSNumber *)inputScale;
-(void)setInputScale:(NSNumber *)arg1 ;
-(id)outputImageNewScaleX:(double)arg1 scaleY:(double)arg2 ;
-(id)outputImageOldScaleX:(double)arg1 scaleY:(double)arg2 ;
-(NSNumber *)inputAspectRatio;
-(void)setInputAspectRatio:(NSNumber *)arg1 ;
@end


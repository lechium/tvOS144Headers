/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:02 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface CIProSharpenEdges : CIFilter {

	CIImage* inputImage;
	NSNumber* inputFalloff;
	NSNumber* inputSharpness;
	NSNumber* inputEdgeScale;

}
+(id)customAttributes;
-(id)outputImage;
-(id)_CIEdgesPrep;
-(id)_CIFindEdges;
-(id)_CIConvertRGBtoY;
-(id)_CIBlur1;
-(id)_CIBlur2;
-(id)_CIBlur4;
-(id)_CISharpenCombineEdges;
@end


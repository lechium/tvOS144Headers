/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:10 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/CoreServices/RawCamera.bundle/RawCamera
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RawCamera/RawCamera-Structs.h>
#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber, NSData;

@interface RAWLensCorrectionDistortionFilter : CIFilter {

	CIImage* inputImage;
	NSNumber* inputDistortionAmount;
	NSData* inputDistortionMap;
	NSNumber* inputDistortionMapWidth;
	NSNumber* inputDistortionMapHeight;
	id inputColorSpace;
	CIImage* mapImg;

}
+(id)customAttributes;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(id)customAttributes;
-(id)outputImage;
-(CGRect)regionOf:(int)arg1 destRect:(CGRect)arg2 userInfo:(id)arg3 ;
-(BOOL)makeMapImages;
-(CGRect)mapPoint:(CGPoint)arg1 extent:(CGRect)arg2 map:(const vec2*)arg3 mapWidth:(int)arg4 mapHeight:(int)arg5 amount:(float)arg6 ;
@end


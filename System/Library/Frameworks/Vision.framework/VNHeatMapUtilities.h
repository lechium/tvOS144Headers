/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:52 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <Vision/Vision-Structs.h>
@interface VNHeatMapUtilities : NSObject
+(BOOL)smoothedFloat32ImageBuffer:(vImage_Buffer*)arg1 fromImageBuffer:(vImage_Buffer*)arg2 originalImageSize:(CGSize)arg3 sigmaX:(float)arg4 sigmaY:(float)arg5 nStd:(float)arg6 ;
+(float)maximumValueFromFloat32ImageBuffer:(vImage_Buffer*)arg1 ;
+(id)significantRegionsFromFloat32ImageBuffer:(vImage_Buffer*)arg1 threshold:(float)arg2 ;
+(id)significantRegionsFromFloat32ImageBuffer:(vImage_Buffer*)arg1 threshold:(float)arg2 relativeToMaximum:(BOOL)arg3 ;
+(id)significantRegionsFromFloat32PixelBuffer:(CVBufferRef)arg1 threshold:(float)arg2 relativeToMaximum:(BOOL)arg3 error:(id*)arg4 ;
+(id)boundingBoxesFromFloat32ImageBuffer:(vImage_Buffer*)arg1 thresholds:(id)arg2 error:(id*)arg3 ;
+(id)boundingBoxesFromFloat32ImageBuffer:(vImage_Buffer*)arg1 thresholds:(id)arg2 relativeToMaximum:(BOOL)arg3 applySmoothing:(BOOL)arg4 originalImageSize:(CGSize)arg5 sigmaX:(float)arg6 sigmaY:(float)arg7 nStd:(float)arg8 error:(id*)arg9 ;
+(id)boundingBoxesFromFloat32PixelBuffer:(CVBufferRef)arg1 thresholds:(id)arg2 relativeToMaximum:(BOOL)arg3 applySmoothing:(BOOL)arg4 originalImageSize:(CGSize)arg5 sigmaX:(float)arg6 sigmaY:(float)arg7 nStd:(float)arg8 error:(id*)arg9 ;
@end


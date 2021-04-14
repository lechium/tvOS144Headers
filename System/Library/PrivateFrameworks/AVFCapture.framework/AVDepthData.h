/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:49 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AVFCapture/AVFCapture-Structs.h>
@class AVDepthDataInternal, NSArray, AVCameraCalibrationData;

@interface AVDepthData : NSObject {

	AVDepthDataInternal* _internal;

}

@property (readonly) NSArray * availableDepthDataTypes; 
@property (readonly) unsigned depthDataType; 
@property (readonly) CVBufferRef depthDataMap; 
@property (readonly) long long depthDataQuality; 
@property (getter=isDepthDataFiltered,readonly) BOOL depthDataFiltered; 
@property (readonly) long long depthDataAccuracy; 
@property (readonly) AVCameraCalibrationData * cameraCalibrationData; 
+(void)initialize;
+(id)_allSupportedDepthDataPixelFormatTypes;
+(id)depthDataFromDictionaryRepresentation:(id)arg1 error:(id*)arg2 ;
-(id)debugDescription;
-(id)description;
-(void)dealloc;
-(unsigned)depthDataType;
-(id)depthDataByConvertingToDepthDataType:(unsigned)arg1 ;
-(id)depthDataByReplacingDepthDataMapWithPixelBuffer:(CVBufferRef)arg1 error:(id*)arg2 ;
-(CVBufferRef)depthDataMap;
-(id)dictionaryRepresentationForAuxiliaryDataType:(id*)arg1 ;
-(AVCameraCalibrationData *)cameraCalibrationData;
-(long long)depthDataAccuracy;
-(float)portraitScore;
-(id)initWithPixelBuffer:(CVBufferRef)arg1 depthMetadataDictionary:(id)arg2 ;
-(id)initWithPixelBuffer:(CVBufferRef)arg1 auxiliaryMetadata:(CGImageMetadataRef)arg2 ;
-(CGImageMetadataRef)copyAuxiliaryMetadata;
-(CFStringRef)auxiliaryImageType;
-(BOOL)isDepthDataFiltered;
-(float)depthBlurEffectSimulatedAperture;
-(id)depthBlurEffectRenderingParameters;
-(BOOL)portraitScoreIsHigh;
-(float)portraitLightingEffectStrength;
-(NSArray *)availableDepthDataTypes;
-(CVBufferRef)_copyPixelBufferRepresentationWithPixelFormatType:(unsigned)arg1 ;
-(short)depthDataVersionMajor;
-(short)depthDataVersionMinor;
-(long long)depthDataQuality;
-(id)depthDataByApplyingExifOrientation:(unsigned)arg1 ;
@end


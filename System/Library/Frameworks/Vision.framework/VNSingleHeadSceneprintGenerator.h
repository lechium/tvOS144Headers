/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:51 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Vision/Vision-Structs.h>
#import <Vision/VNEspressoModelFileBasedDetector.h>

@interface VNSingleHeadSceneprintGenerator : VNEspressoModelFileBasedDetector
+(void)recordDefaultConfigurationOptionsInDictionary:(id)arg1 ;
+(id)configurationOptionKeysForDetectorKey;
+(id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)arg1 ;
+(id)espressoModelFileNameForConfigurationOptions:(id)arg1 ;
+(void)fullyPopulateConfigurationOptions:(id)arg1 ;
-(BOOL)supportsProcessingDevice:(id)arg1 ;
-(id)processWithOptions:(id)arg1 regionOfInterest:(CGRect)arg2 warningRecorder:(id)arg3 error:(id*)arg4 ;
-(BOOL)completeInitializationForSession:(id)arg1 error:(id*)arg2 ;
-(BOOL)_analyzePixelBuffer:(CVBufferRef)arg1 sceneprintOutputBuffer:(SCD_Struct_VN40*)arg2 options:(id)arg3 error:(id*)arg4 ;
-(BOOL)_analyzeRegionOfInterest:(CGRect)arg1 sceneprintOutputBuffer:(SCD_Struct_VN40*)arg2 options:(id)arg3 warningRecorder:(id)arg4 error:(id*)arg5 ;
-(id)_observationsForSceneprintOutput:(const SCD_Struct_VN40*)arg1 requestRevision:(unsigned long long)arg2 error:(id*)arg3 ;
@end


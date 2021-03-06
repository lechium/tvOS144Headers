/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:54 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Vision/Vision-Structs.h>
#import <Vision/VNEspressoModelFileBasedDetector.h>

@interface VNGenerateObjectnessBasedSaliencyDetector : VNEspressoModelFileBasedDetector
+(id)configurationOptionKeysForDetectorKey;
+(id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)arg1 ;
+(id)espressoModelFileNameForConfigurationOptions:(id)arg1 ;
-(BOOL)supportsProcessingDevice:(id)arg1 ;
-(id)processWithOptions:(id)arg1 regionOfInterest:(CGRect)arg2 warningRecorder:(id)arg3 error:(id*)arg4 ;
-(BOOL)warmUpSession:(id)arg1 withOptions:(id)arg2 error:(id*)arg3 ;
-(BOOL)_runAnalysisOnImage:(CVBufferRef)arg1 espressoResources:(id)arg2 inputBlobName:(id)arg3 error:(id*)arg4 ;
-(id)_observationsForImageIn32BGRAPixelBuffer:(CVBufferRef)arg1 withOptions:(id)arg2 originalImageSize:(CGSize)arg3 regionOfInterest:(CGRect)arg4 warningRecorder:(id)arg5 error:(id*)arg6 ;
@end


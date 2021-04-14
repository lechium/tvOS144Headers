/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:42 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWStillImageProcessorInput.h>

@interface BWUBInferenceControllerInput : BWStillImageProcessorInput {

	opaqueCMSampleBufferRef _inferenceImage;
	opaqueCMSampleBufferRef _propagationImage;
	BOOL _generateSemanticSkinMatte;
	BOOL _generateSemanticSkyMatte;
	BOOL _generateLowResPersonSegmentationMask;
	BOOL _generateFaceObservations;

}

@property (nonatomic,readonly) opaqueCMSampleBufferRef inferenceImage;                //@synthesize inferenceImage=_inferenceImage - In the implementation block
@property (nonatomic,readonly) opaqueCMSampleBufferRef propagationImage; 
@property (assign,nonatomic) BOOL generateSemanticSkinMatte;                          //@synthesize generateSemanticSkinMatte=_generateSemanticSkinMatte - In the implementation block
@property (assign,nonatomic) BOOL generateSemanticSkyMatte;                           //@synthesize generateSemanticSkyMatte=_generateSemanticSkyMatte - In the implementation block
@property (assign,nonatomic) BOOL generateLowResPersonSegmentationMask;               //@synthesize generateLowResPersonSegmentationMask=_generateLowResPersonSegmentationMask - In the implementation block
@property (assign,nonatomic) BOOL generateFaceObservations;                           //@synthesize generateFaceObservations=_generateFaceObservations - In the implementation block
-(void)dealloc;
-(void)addInferenceImage:(opaqueCMSampleBufferRef)arg1 ;
-(void)addPropagationImage:(opaqueCMSampleBufferRef)arg1 ;
-(opaqueCMSampleBufferRef)propagationImage;
-(opaqueCMSampleBufferRef)inferenceImage;
-(BOOL)generateSemanticSkinMatte;
-(void)setGenerateSemanticSkinMatte:(BOOL)arg1 ;
-(BOOL)generateSemanticSkyMatte;
-(void)setGenerateSemanticSkyMatte:(BOOL)arg1 ;
-(BOOL)generateLowResPersonSegmentationMask;
-(void)setGenerateLowResPersonSegmentationMask:(BOOL)arg1 ;
-(BOOL)generateFaceObservations;
-(void)setGenerateFaceObservations:(BOOL)arg1 ;
@end

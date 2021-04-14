/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:48 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CMCapture/CMCapture-Structs.h>
#import <libobjc.A.dylib/BWInferenceProvider.h>
#import <libobjc.A.dylib/BWInferenceSubmittable.h>

@protocol MTLCommandQueue;
@class NSDictionary, FigMatting, NSMutableArray, BWInferenceVideoRequirement, BWInferenceCloneVideoRequirement, NSArray, NSMutableDictionary, BWInferenceMetadataRequirement, NSSet, NSString;

@interface BWMattingV2InferenceProvider : NSObject <BWInferenceProvider, BWInferenceSubmittable> {

	NSDictionary* _sensorConfigurationsByPortType;
	FigMatting* _mattingProcessor;
	int _mattingProcessorVersion;
	int _mattingTuningConfiguration;
	BOOL _submitWithoutSynchronization;
	NSMutableArray* _inputVideoRequirements;
	NSMutableArray* _outputVideoRequirements;
	NSMutableArray* _inputMetadataRequirements;
	NSMutableArray* _outputMetadataRequirements;
	BWInferenceVideoRequirement* _primaryFormatInputVideoRequirement;
	BWInferenceVideoRequirement* _depthInputVideoRequirement;
	BWInferenceVideoRequirement* _disparityInputVideoRequirement;
	BWInferenceVideoRequirement* _segmentationInputVideoRequirement;
	BWInferenceVideoRequirement* _segmentationOutputVideoRequirement;
	BWInferenceCloneVideoRequirement* _lowResSegmentationCloneOutputVideoRequirement;
	BWInferenceVideoRequirement* _refinedDepthOutputVideoRequirement;
	NSArray* _enabledSemanticMattingOutputTypes;
	NSMutableDictionary* _semanticMatteInputVideoRequirementsByMattingOutputType;
	NSMutableDictionary* _semanticMatteOutputVideoRequirementsByMattingOutputType;
	BWInferenceMetadataRequirement* _faceSegmentsWithLandmarksMetadataRequirement;
	BWInferenceMetadataRequirement* _outputMasksContainsValidContentRequirement;
	id<MTLCommandQueue> _metalCommandQueue;
	OpaqueVTPixelTransferSessionRef _lowResSegmentationCloneCopySession;

}

@property (nonatomic,readonly) int type; 
@property (nonatomic,readonly) int executionTarget; 
@property (nonatomic,copy,readonly) NSSet * preventionReasons; 
@property (nonatomic,readonly) NSArray * inputVideoRequirements; 
@property (nonatomic,readonly) NSArray * outputVideoRequirements; 
@property (nonatomic,readonly) NSArray * cloneVideoRequirements; 
@property (nonatomic,readonly) NSArray * inputMetadataRequirements; 
@property (nonatomic,readonly) NSArray * outputMetadataRequirements; 
@property (nonatomic,readonly) unsigned allowedPixelBufferCompressionDirection; 
@property (nonatomic,readonly) id<BWInferenceExecutable> executable; 
@property (nonatomic,readonly) id<BWInferenceSubmittable> submittable; 
@property (nonatomic,readonly) id<BWInferenceExtractable> extractable; 
@property (nonatomic,readonly) id<BWInferencePropagatable> propagatable; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)dealloc;
-(int)type;
-(id)initWithConfiguration:(id)arg1 ;
-(id<BWInferenceExecutable>)executable;
-(id)newStorage;
-(id<BWInferenceSubmittable>)submittable;
-(id<BWInferenceExtractable>)extractable;
-(id<BWInferencePropagatable>)propagatable;
-(id)_processorOptions;
-(int)executionTarget;
-(int)_loadMattingProcessor;
-(int)_configureMattingProcessor;
-(void)propagateInferenceResultsToInferenceDictionary:(id)arg1 usingStorage:(id)arg2 propagationSampleBuffer:(opaqueCMSampleBufferRef)arg3 ;
-(int)prewarmUsingLimitedMemory:(BOOL)arg1 ;
-(NSSet *)preventionReasons;
-(NSArray *)inputVideoRequirements;
-(NSArray *)outputVideoRequirements;
-(NSArray *)cloneVideoRequirements;
-(NSArray *)inputMetadataRequirements;
-(NSArray *)outputMetadataRequirements;
-(unsigned)allowedPixelBufferCompressionDirection;
-(int)submitForSampleBuffer:(opaqueCMSampleBufferRef)arg1 usingStorage:(id)arg2 withSubmissionTime:(SCD_Struct_BW7)arg3 workQueue:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(int)prepareForSubmissionWithWorkQueue:(id)arg1 ;
-(CVBufferRef)_outputPixelBufferForOutputVideoRequirement:(id)arg1 storage:(id)arg2 isMatte:(BOOL)arg3 ;
-(void)propagateMattingOutputToSampleBuffer:(opaqueCMSampleBufferRef)arg1 storage:(id)arg2 ;
-(id)mutableInputVideoRequirements;
-(id)mutableOutputVideoRequirements;
-(int)setInputsAndOutputsOnMattingProcessor:(id)arg1 inputSampleBuffer:(opaqueCMSampleBufferRef)arg2 storage:(id)arg3 ;
@end


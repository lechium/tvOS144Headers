/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:46 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSArray, BWVideoFormat, NSDictionary, FigStillImageSharedProcessingResources;


@protocol BWNoiseReductionAndFusionProcessorControllerConfiguration <NSObject>
@property (nonatomic,retain) NSArray * sensorConfigurations; 
@property (assign,nonatomic) BOOL deferredProcessingEnabled; 
@property (nonatomic,retain) id<MTLCommandQueue> metalCommandQueue; 
@property (nonatomic,retain) BWVideoFormat * inputFormat; 
@property (nonatomic,retain) BWVideoFormat * outputFormat; 
@property (assign,nonatomic) BOOL fusionEnabled; 
@property (assign,nonatomic) BOOL lowLightFusionEnabled; 
@property (assign,nonatomic) BOOL deepFusionEnabled; 
@property (assign,nonatomic) BOOL deepFusionWaitForProcessingToFinish; 
@property (assign,nonatomic) BOOL depthDataDeliveryEnabled; 
@property (assign,nonatomic) BOOL alwaysAllowModifyingInputBuffers; 
@property (assign,nonatomic) unsigned figThreadPriority; 
@property (assign,nonatomic) BOOL semanticRenderingEnabled; 
@property (assign,nonatomic) BOOL demosaicedRawEnabled; 
@property (assign,nonatomic) unsigned demosaicedRawPixelFormat; 
@property (nonatomic,retain) NSDictionary * rawColorCalibrationsByPortType; 
@property (nonatomic,retain) NSDictionary * rawLensShadingCorrectionCoefficientsByPortType; 
@property (assign,nonatomic) float gainMapMainImageDownscalingFactor; 
@property (nonatomic,retain) FigStillImageSharedProcessingResources * sharedResources; 
@required
-(BWVideoFormat *)outputFormat;
-(void)setOutputFormat:(id)arg1;
-(BWVideoFormat *)inputFormat;
-(FigStillImageSharedProcessingResources *)sharedResources;
-(void)setInputFormat:(id)arg1;
-(BOOL)depthDataDeliveryEnabled;
-(void)setDepthDataDeliveryEnabled:(BOOL)arg1;
-(BOOL)deferredProcessingEnabled;
-(NSArray *)sensorConfigurations;
-(void)setSensorConfigurations:(id)arg1;
-(void)setDeferredProcessingEnabled:(BOOL)arg1;
-(id<MTLCommandQueue>)metalCommandQueue;
-(void)setMetalCommandQueue:(id)arg1;
-(unsigned)figThreadPriority;
-(void)setFigThreadPriority:(unsigned)arg1;
-(void)setDemosaicedRawPixelFormat:(unsigned)arg1;
-(void)setDemosaicedRawEnabled:(BOOL)arg1;
-(void)setGainMapMainImageDownscalingFactor:(float)arg1;
-(BOOL)fusionEnabled;
-(void)setFusionEnabled:(BOOL)arg1;
-(BOOL)lowLightFusionEnabled;
-(void)setLowLightFusionEnabled:(BOOL)arg1;
-(BOOL)deepFusionEnabled;
-(void)setDeepFusionEnabled:(BOOL)arg1;
-(BOOL)deepFusionWaitForProcessingToFinish;
-(void)setDeepFusionWaitForProcessingToFinish:(BOOL)arg1;
-(BOOL)alwaysAllowModifyingInputBuffers;
-(void)setAlwaysAllowModifyingInputBuffers:(BOOL)arg1;
-(BOOL)semanticRenderingEnabled;
-(void)setSemanticRenderingEnabled:(BOOL)arg1;
-(BOOL)demosaicedRawEnabled;
-(unsigned)demosaicedRawPixelFormat;
-(NSDictionary *)rawColorCalibrationsByPortType;
-(void)setRawColorCalibrationsByPortType:(id)arg1;
-(NSDictionary *)rawLensShadingCorrectionCoefficientsByPortType;
-(void)setRawLensShadingCorrectionCoefficientsByPortType:(id)arg1;
-(float)gainMapMainImageDownscalingFactor;
-(void)setSharedResources:(id)arg1;

@end


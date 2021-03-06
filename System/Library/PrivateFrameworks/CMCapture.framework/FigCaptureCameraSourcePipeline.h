/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:47 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/FigCaptureSourcePipeline.h>

@class NSMutableArray, BWMultiStreamCameraSourceNode, BWNodeOutput, NSArray, NSDictionary, BWFigVideoCaptureDevice, FigCaptureSourceVideoFormat, FigCaptureSourceDepthDataFormat, BWMemoryPool;

@interface FigCaptureCameraSourcePipeline : FigCaptureSourcePipeline {

	BOOL _useCaptureOutputForPreview;
	BOOL _allowISPVISForPreview;
	int _deviceType;
	int _devicePosition;
	NSMutableArray* _sourceNodes;
	BWMultiStreamCameraSourceNode* _sourceNode;
	BWMultiStreamCameraSourceNode* _telephotoSourceNode;
	BWMultiStreamCameraSourceNode* _superWideSourceNode;
	BWMultiStreamCameraSourceNode* _infraredSourceNode;
	BWNodeOutput* _sourceFormatReferenceOutput;
	NSMutableArray* _synchronizerNodes;
	NSArray* _previewFilters;
	NSDictionary* _previewOutputsBySourceDeviceType;
	NSDictionary* _stillImageOutputsByPortType;
	NSDictionary* _videoCaptureOutputsArrayBySourceDeviceType;
	unsigned _nextVideoCaptureOutputIndexBySourceDeviceType[11];
	NSDictionary* _detectedObjectsOutputsBySourceDeviceType;
	NSDictionary* _visionDataOutputsBySourceDeviceType;
	BWFigVideoCaptureDevice* _captureDevice;
	OpaqueFigCaptureSourceRef _captureSource;
	FigCaptureSourceVideoFormat* _captureSourceVideoFormat;
	FigCaptureSourceDepthDataFormat* _captureSourceDepthDataFormat;
	CGRect _overscanRect;
	BOOL _stillImageOutputDerivesFromVideoCaptureOutput;
	BWMemoryPool* _memoryPool;
	BOOL _overCapturePercentage;
	BOOL _hardwareDepthFilteringEnabled;
	int _stillImageOutputRetainedBufferCountOverride;

}

@property (assign,nonatomic) id<BWDetectedFacesFilterDelegate> faceFilteringDelegate; 
@property (assign,nonatomic) int stillImageOutputRetainedBufferCountOverride;                               //@synthesize stillImageOutputRetainedBufferCountOverride=_stillImageOutputRetainedBufferCountOverride - In the implementation block
@property (assign,nonatomic) OpaqueCMClockRef masterClock; 
@property (assign,nonatomic) BOOL keepISPStreamingWhenStopping; 
@property (nonatomic,readonly) NSDictionary * stillImageOutputsByPortType;                                  //@synthesize stillImageOutputsByPortType=_stillImageOutputsByPortType - In the implementation block
@property (nonatomic,readonly) BWNodeOutput * pointCloudOutput; 
@property (nonatomic,readonly) BOOL stillImageOutputDerivesFromVideoCaptureOutput;                          //@synthesize stillImageOutputDerivesFromVideoCaptureOutput=_stillImageOutputDerivesFromVideoCaptureOutput - In the implementation block
@property (nonatomic,readonly) OpaqueCMClockRef clock; 
@property (nonatomic,readonly) BOOL requiresMasterClock; 
@property (nonatomic,readonly) BWFigVideoCaptureDevice * captureDevice;                                     //@synthesize captureDevice=_captureDevice - In the implementation block
@property (nonatomic,readonly) OpaqueFigCaptureSourceRef captureSource;                                     //@synthesize captureSource=_captureSource - In the implementation block
@property (nonatomic,readonly) FigCaptureSourceVideoFormat * captureSourceVideoFormat;                      //@synthesize captureSourceVideoFormat=_captureSourceVideoFormat - In the implementation block
@property (nonatomic,readonly) FigCaptureSourceDepthDataFormat * captureSourceDepthDataFormat;              //@synthesize captureSourceDepthDataFormat=_captureSourceDepthDataFormat - In the implementation block
@property (nonatomic,readonly) NSDictionary * videoOutputColorInfo; 
@property (nonatomic,readonly) CGRect overscanRect;                                                         //@synthesize overscanRect=_overscanRect - In the implementation block
@property (nonatomic,readonly) BWNodeOutput * sourceFormatReferenceOutput;                                  //@synthesize sourceFormatReferenceOutput=_sourceFormatReferenceOutput - In the implementation block
@property (nonatomic,readonly) FigCaptureVideoTransform videoCaptureOutputTransform; 
@property (nonatomic,readonly) int motionAttachmentsSource; 
@property (nonatomic,readonly) BOOL hardwareDepthFilteringEnabled;                                          //@synthesize hardwareDepthFilteringEnabled=_hardwareDepthFilteringEnabled - In the implementation block
@property (nonatomic,readonly) NSArray * portTypesWithGeometricDistortionCorrectionEnabled; 
@property (nonatomic,readonly) BWMultiStreamCameraSourceNode * sourceNode;                                  //@synthesize sourceNode=_sourceNode - In the implementation block
+(void)initialize;
-(void)dealloc;
-(OpaqueCMClockRef)clock;
-(void)setMasterClock:(OpaqueCMClockRef)arg1 ;
-(OpaqueFigCaptureSourceRef)captureSource;
-(BWMultiStreamCameraSourceNode *)sourceNode;
-(OpaqueCMClockRef)masterClock;
-(int)motionAttachmentsSource;
-(BWFigVideoCaptureDevice *)captureDevice;
-(NSArray *)portTypesWithGeometricDistortionCorrectionEnabled;
-(int)stillImageOutputRetainedBufferCountOverride;
-(void)setStillImageOutputRetainedBufferCountOverride:(int)arg1 ;
-(int)_buildMultiStreamCameraSourcePipeline:(id)arg1 graph:(id)arg2 renderDelegate:(id)arg3 ;
-(BWNodeOutput *)pointCloudOutput;
-(void)setKeepISPStreamingWhenStopping:(BOOL)arg1 ;
-(BOOL)keepISPStreamingWhenStopping;
-(BOOL)hardwareDepthFilteringEnabled;
-(int)_addDepthFromInfraredSynchronizer:(id)arg1 previewOutputsBySourceDeviceType:(id)arg2 pipelineConfiguration:(id)arg3 graph:(id)arg4 ;
-(int)_buildVideoCaptureOutputNetwork:(id)arg1 previewOutputsBySourceDeviceType:(id)arg2 pipelineConfiguration:(id)arg3 graph:(id)arg4 ;
-(int)_buildPreviewOutputNetwork:(id)arg1 pipelineConfiguration:(id)arg2 graph:(id)arg3 ;
-(int)_buildDetectedObjectsOutputNetwork:(id)arg1 pipelineConfiguration:(id)arg2 graph:(id)arg3 ;
-(int)_insertCrossOverAndOverCaptureNodesOnOutputsBySourceDeviceType:(id)arg1 connectionConfigurations:(id)arg2 pipelineConfiguration:(id)arg3 graph:(id)arg4 outputNetworkType:(int)arg5 ;
-(int)_addOverCaptureDepthSynchronizerForOutputs:(id*)arg1 pipelineConfiguration:(id)arg2 graph:(id)arg3 ;
-(id)_addCrossOverNodeToGraph:(id)arg1 inputs:(id)arg2 mediaType:(unsigned)arg3 name:(id)arg4 outErr:(int*)arg5 ;
-(id)_addOverCaptureSourcePipelineToGraph:(id)arg1 upstreamVideoCaptureOutputsBySourceDeviceType:(id)arg2 depthEnabled:(BOOL)arg3 forPreview:(BOOL)arg4 outErr:(int*)arg5 ;
-(id)initWithConfiguration:(id)arg1 captureDevice:(id)arg2 graph:(id)arg3 name:(id)arg4 renderDelegate:(id)arg5 ;
-(NSDictionary *)videoOutputColorInfo;
-(id)previewOutputForSourceDeviceType:(int)arg1 ;
-(id)detectedObjectsOutputForSourceDeviceType:(int)arg1 ;
-(id)visionDataOutputForSourceDeviceType:(int)arg1 ;
-(FigCaptureVideoTransform)videoCaptureOutputTransform;
-(id)nextVideoCaptureOutputForSourceDeviceType:(int)arg1 ;
-(void)logCameraStreamingInformationToAggd:(long long)arg1 applicationID:(id)arg2 ;
-(void)hackRetainedBufferCountsForDualStreamSources;
-(int)allocateSharedBufferPools;
-(void)setFaceFilteringDelegate:(id<BWDetectedFacesFilterDelegate>)arg1 ;
-(id<BWDetectedFacesFilterDelegate>)faceFilteringDelegate;
-(int)prepareForStillImageCaptureWithStillImageOutputRetainedBufferCountOverride:(int)arg1 clientBracketCount:(int)arg2 enableSushiRawAttachmentOption:(BOOL)arg3 ;
-(BOOL)newConfigurationRequiresStreamRestart:(id)arg1 ;
-(void)setStreamsSuspendedBySourceDeviceType:(id)arg1 ;
-(BOOL)requiresMasterClock;
-(void)setPreviewShift:(CGPoint)arg1 previewScaleFactor:(float)arg2 forPortType:(id)arg3 ;
-(FigCaptureSourceVideoFormat *)captureSourceVideoFormat;
-(FigCaptureSourceDepthDataFormat *)captureSourceDepthDataFormat;
-(NSDictionary *)stillImageOutputsByPortType;
-(BOOL)stillImageOutputDerivesFromVideoCaptureOutput;
-(BWNodeOutput *)sourceFormatReferenceOutput;
-(CGRect)overscanRect;
@end


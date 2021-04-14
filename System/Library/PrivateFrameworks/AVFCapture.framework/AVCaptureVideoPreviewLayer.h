/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:50 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVFCapture/AVFCapture-Structs.h>
#import <QuartzCore/CALayer.h>

@class AVCaptureVideoPreviewLayerInternal, AVCaptureSession, AVCaptureConnection, NSString;

@interface AVCaptureVideoPreviewLayer : CALayer {

	AVCaptureVideoPreviewLayerInternal* _internal;
	BOOL _previewing;

}

@property (nonatomic,retain) AVCaptureSession * session; 
@property (nonatomic,readonly) AVCaptureConnection * connection; 
@property (copy) NSString * videoGravity; 
@property (getter=isPreviewing,nonatomic,readonly) BOOL previewing;                                  //@synthesize previewing=_previewing - In the implementation block
@property (getter=isOrientationSupported,nonatomic,readonly) BOOL orientationSupported; 
@property (assign,nonatomic) long long orientation; 
@property (getter=isMirroringSupported,nonatomic,readonly) BOOL mirroringSupported; 
@property (assign,nonatomic) BOOL automaticallyAdjustsMirroring; 
@property (assign,getter=isMirrored,nonatomic) BOOL mirrored; 
+(void)initialize;
+(id)layerWithSession:(id)arg1 ;
+(id)layerWithSessionWithNoConnection:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(AVCaptureSession *)session;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(BOOL)isPaused;
-(AVCaptureConnection *)connection;
-(void)setSession:(AVCaptureSession *)arg1 ;
-(id)_input;
-(long long)orientation;
-(void)setOrientation:(long long)arg1 ;
-(long long)_orientation;
-(void)setPaused:(BOOL)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)layerDidBecomeVisible:(BOOL)arg1 ;
-(id)initWithLayer:(id)arg1 ;
-(void)layoutSublayers;
-(void)setVideoGravity:(NSString *)arg1 ;
-(BOOL)isMirrored;
-(id)initWithSession:(id)arg1 ;
-(void)removeConnection:(id)arg1 ;
-(NSString *)videoGravity;
-(void)setMirrored:(BOOL)arg1 ;
-(id)sinkID;
-(void)performFigCaptureSessionOperationSafelyUsingBlock:(/*^block*/id)arg1 ;
-(id)weakReference;
-(void)bumpChangeSeed;
-(void)attachSafelyToFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(void)detachSafelyFromFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(id)connectionMediaTypes;
-(BOOL)canAddConnection:(id)arg1 failureReason:(id*)arg2 ;
-(void)_handleNotification:(id)arg1 payload:(id)arg2 ;
-(BOOL)isDepthDataDeliveryEnabled;
-(id)addConnection:(id)arg1 error:(id*)arg2 ;
-(int)changeSeed;
-(void)setSinkID:(id)arg1 ;
-(void)attachToFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(void)detachFromFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(CGRect)metadataOutputRectOfInterestForRect:(CGRect)arg1 ;
-(CGRect)rectForMetadataOutputRectOfInterest:(CGRect)arg1 ;
-(void)handleChangedActiveFormat:(id)arg1 forDevice:(id)arg2 ;
-(void)setDepthDataDeliveryEnabled:(BOOL)arg1 ;
-(BOOL)isFilterRenderingEnabled;
-(void)setFilterRenderingEnabled:(BOOL)arg1 ;
-(unsigned)imageQueueSlot;
-(double)previewRotationDegrees;
-(BOOL)automaticallyAdjustsMirroring;
-(id)videoPreviewFilters;
-(id)initWithSessionWithNoConnection:(id)arg1 ;
-(id)_initWithSession:(id)arg1 makeConnection:(BOOL)arg2 ;
-(void)centerSublayer:(long long)arg1 ;
-(void)setSessionWithNoConnection:(id)arg1 ;
-(BOOL)_automaticallyAdjustsMirroring;
-(BOOL)_isMirrored;
-(void)_updatePreviewTransforms;
-(void)_updateDepthDataDeliverySupported;
-(BOOL)isMirroringSupported;
-(BOOL)isChromaNoiseReductionSupported;
-(BOOL)_setVideoPreviewFilters:(id)arg1 checkForExceptionalInput:(BOOL)arg2 exceptionReason:(id*)arg3 ;
-(BOOL)_filtersAreOptimized:(id)arg1 exceptionReason:(id*)arg2 ;
-(void)_setSensorAndEstimatedPreviewSizes;
-(void)_updateCaptureDeviceTransform;
-(CGAffineTransform)captureDeviceTransformForSensorSize:(CGSize)arg1 previewSize:(CGSize)arg2 sensorToPreviewVTScalingMode:(id)arg3 ;
-(void)didUpdatePreviewFormatDescription:(opaqueCMFormatDescriptionRef)arg1 ;
-(void)didUpdatePreviewImageQueueSlot:(unsigned)arg1 imageQueue:(id)arg2 rotationDegrees:(double)arg3 size:(CGSize)arg4 ;
-(BOOL)isOrientationSupported;
-(void)setAutomaticallyAdjustsMirroring:(BOOL)arg1 ;
-(BOOL)isChromaNoiseReductionEnabled;
-(void)setChromaNoiseReductionEnabled:(BOOL)arg1 ;
-(BOOL)isDepthDataDeliverySupported;
-(void)setVideoPreviewFilters:(id)arg1 ;
-(BOOL)isUnoptimizedFilterRenderingEnabled;
-(void)setUnoptimizedFilterRenderingEnabled:(BOOL)arg1 ;
-(CGPoint)captureDevicePointOfInterestForPoint:(CGPoint)arg1 ;
-(CGPoint)pointForCaptureDevicePointOfInterest:(CGPoint)arg1 ;
-(id)transformedMetadataObjectForMetadataObject:(id)arg1 ;
-(void)setCaptureDeviceTransformNeedsUpdate;
-(BOOL)isPreviewing;
@end


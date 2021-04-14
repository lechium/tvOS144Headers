/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:50 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVFCapture/AVFCapture-Structs.h>
#import <AVFCapture/AVCaptureOutput.h>

@class AVCapturePhotoOutputInternal, NSArray, AVCapturePhotoSettings;

@interface AVCapturePhotoOutput : AVCaptureOutput {

	AVCapturePhotoOutputInternal* _internal;
	BOOL _appleProRAWSupported;
	BOOL _appleProRAWEnabled;
	BOOL _virtualDeviceFusionSupported;
	BOOL _virtualDeviceConstituentPhotoDeliverySupported;
	BOOL _virtualDeviceConstituentPhotoDeliveryEnabled;
	BOOL _autoRedEyeReductionSupported;
	BOOL _contentAwareDistortionCorrectionSupported;
	BOOL _contentAwareDistortionCorrectionEnabled;
	long long _maxPhotoQualityPrioritization;

}

@property (nonatomic,readonly) NSArray * preparedPhotoSettingsArray; 
@property (nonatomic,readonly) NSArray * availablePhotoPixelFormatTypes; 
@property (nonatomic,readonly) NSArray * availablePhotoCodecTypes; 
@property (getter=isAppleProRAWSupported,nonatomic,readonly) BOOL appleProRAWSupported;                                                                      //@synthesize appleProRAWSupported=_appleProRAWSupported - In the implementation block
@property (assign,getter=isAppleProRAWEnabled,nonatomic) BOOL appleProRAWEnabled;                                                                            //@synthesize appleProRAWEnabled=_appleProRAWEnabled - In the implementation block
@property (nonatomic,readonly) NSArray * availableRawPhotoPixelFormatTypes; 
@property (nonatomic,readonly) NSArray * availablePhotoFileTypes; 
@property (nonatomic,readonly) NSArray * availableRawPhotoFileTypes; 
@property (assign,nonatomic) long long maxPhotoQualityPrioritization;                                                                                        //@synthesize maxPhotoQualityPrioritization=_maxPhotoQualityPrioritization - In the implementation block
@property (getter=isStillImageStabilizationSupported,nonatomic,readonly) BOOL stillImageStabilizationSupported; 
@property (nonatomic,readonly) BOOL isStillImageStabilizationScene; 
@property (getter=isVirtualDeviceFusionSupported,nonatomic,readonly) BOOL virtualDeviceFusionSupported;                                                      //@synthesize virtualDeviceFusionSupported=_virtualDeviceFusionSupported - In the implementation block
@property (getter=isDualCameraFusionSupported,nonatomic,readonly) BOOL dualCameraFusionSupported; 
@property (getter=isVirtualDeviceConstituentPhotoDeliverySupported,nonatomic,readonly) BOOL virtualDeviceConstituentPhotoDeliverySupported;                  //@synthesize virtualDeviceConstituentPhotoDeliverySupported=_virtualDeviceConstituentPhotoDeliverySupported - In the implementation block
@property (getter=isDualCameraDualPhotoDeliverySupported,nonatomic,readonly) BOOL dualCameraDualPhotoDeliverySupported; 
@property (assign,getter=isVirtualDeviceConstituentPhotoDeliveryEnabled,nonatomic) BOOL virtualDeviceConstituentPhotoDeliveryEnabled;                        //@synthesize virtualDeviceConstituentPhotoDeliveryEnabled=_virtualDeviceConstituentPhotoDeliveryEnabled - In the implementation block
@property (assign,getter=isDualCameraDualPhotoDeliveryEnabled,nonatomic) BOOL dualCameraDualPhotoDeliveryEnabled; 
@property (getter=isCameraCalibrationDataDeliverySupported,nonatomic,readonly) BOOL cameraCalibrationDataDeliverySupported; 
@property (nonatomic,readonly) NSArray * supportedFlashModes; 
@property (getter=isAutoRedEyeReductionSupported,nonatomic,readonly) BOOL autoRedEyeReductionSupported;                                                      //@synthesize autoRedEyeReductionSupported=_autoRedEyeReductionSupported - In the implementation block
@property (nonatomic,readonly) BOOL isFlashScene; 
@property (nonatomic,copy) AVCapturePhotoSettings * photoSettingsForSceneMonitoring; 
@property (assign,getter=isHighResolutionCaptureEnabled,nonatomic) BOOL highResolutionCaptureEnabled; 
@property (nonatomic,readonly) unsigned long long maxBracketedCapturePhotoCount; 
@property (getter=isLensStabilizationDuringBracketedCaptureSupported,nonatomic,readonly) BOOL lensStabilizationDuringBracketedCaptureSupported; 
@property (getter=isLivePhotoCaptureSupported,nonatomic,readonly) BOOL livePhotoCaptureSupported; 
@property (assign,getter=isLivePhotoCaptureEnabled,nonatomic) BOOL livePhotoCaptureEnabled; 
@property (assign,getter=isLivePhotoCaptureSuspended,nonatomic) BOOL livePhotoCaptureSuspended; 
@property (assign,getter=isLivePhotoAutoTrimmingEnabled,nonatomic) BOOL livePhotoAutoTrimmingEnabled; 
@property (nonatomic,readonly) NSArray * availableLivePhotoVideoCodecTypes; 
@property (getter=isContentAwareDistortionCorrectionSupported,nonatomic,readonly) BOOL contentAwareDistortionCorrectionSupported;                            //@synthesize contentAwareDistortionCorrectionSupported=_contentAwareDistortionCorrectionSupported - In the implementation block
@property (assign,getter=isContentAwareDistortionCorrectionEnabled,nonatomic) BOOL contentAwareDistortionCorrectionEnabled;                                  //@synthesize contentAwareDistortionCorrectionEnabled=_contentAwareDistortionCorrectionEnabled - In the implementation block
+(void)initialize;
+(id)new;
+(id)validMetadataTopLevelCGImagePropertiesKeys;
+(SCD_Struct_AV18)maxLivePhotoMovieDimensions;
+(id)JPEGPhotoDataRepresentationForJPEGSampleBuffer:(opaqueCMSampleBufferRef)arg1 previewPhotoSampleBuffer:(opaqueCMSampleBufferRef)arg2 ;
+(id)DNGPhotoDataRepresentationForRawSampleBuffer:(opaqueCMSampleBufferRef)arg1 previewPhotoSampleBuffer:(opaqueCMSampleBufferRef)arg2 ;
+(unsigned long long)maxLivePhotoDataSize;
-(id)init;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4 ;
-(void)removeObserver:(id)arg1 forKeyPath:(id)arg2 ;
-(id)supportedHDRModes;
-(void)removeConnection:(id)arg1 ;
-(void)attachSafelyToFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(void)detachSafelyFromFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(void)safelyHandleServerConnectionDeathForFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(id)connectionMediaTypes;
-(BOOL)canAddConnection:(id)arg1 failureReason:(id*)arg2 ;
-(BOOL)isDepthDataDeliveryEnabled;
-(id)addConnection:(id)arg1 error:(id*)arg2 ;
-(BOOL)isStillImageStabilizationSupported;
-(SCD_Struct_AV0)livePhotoMovieVideoFrameDuration;
-(void)handleChangedActiveFormat:(id)arg1 forDevice:(id)arg2 ;
-(BOOL)isDualCameraDualPhotoDeliveryEnabled;
-(void)setDualCameraDualPhotoDeliveryEnabled:(BOOL)arg1 ;
-(void)setDepthDataDeliveryEnabled:(BOOL)arg1 ;
-(SCD_Struct_AV18)livePhotoMovieDimensions;
-(BOOL)isContentAwareDistortionCorrectionEnabled;
-(BOOL)isLivePhotoCaptureEnabled;
-(SCD_Struct_AV0)livePhotoMovieDuration;
-(BOOL)isLivePhotoAutoTrimmingEnabled;
-(id)figCaptureIrisPreparedSettings;
-(BOOL)optimizesImagesForOfflineVideoStabilization;
-(void)setOptimizesImagesForOfflineVideoStabilization:(BOOL)arg1 ;
-(BOOL)isHighResolutionCaptureEnabled;
-(BOOL)isFilterRenderingEnabled;
-(void)setFilterRenderingEnabled:(BOOL)arg1 ;
-(BOOL)isLensStabilizationDuringBracketedCaptureSupported;
-(BOOL)isStillImageStabilizationScene;
-(BOOL)isDepthDataDeliverySupported;
-(NSArray *)availablePhotoPixelFormatTypes;
-(NSArray *)availablePhotoCodecTypes;
-(NSArray *)availableRawPhotoPixelFormatTypes;
-(NSArray *)availablePhotoFileTypes;
-(NSArray *)availableRawPhotoFileTypes;
-(NSArray *)supportedFlashModes;
-(unsigned long long)maxBracketedCapturePhotoCount;
-(NSArray *)availableLivePhotoVideoCodecTypes;
-(SCD_Struct_AV18)optimizedImageDimensionsForOfflineStabilization;
-(BOOL)isFlashScene;
-(BOOL)isHDRScene;
-(AVCapturePhotoSettings *)photoSettingsForSceneMonitoring;
-(BOOL)isDualCameraDualPhotoDeliverySupported;
-(BOOL)isLivePhotoCaptureSupported;
-(void)setFigCaptureSessionSectionProperty:(CFStringRef)arg1 withHostTime:(SCD_Struct_AV0)arg2 settingStateVariableToNoOnFailure:(BOOL*)arg3 ;
-(void)capturePhotoWithSettings:(id)arg1 delegate:(id)arg2 ;
-(NSArray *)preparedPhotoSettingsArray;
-(void)setPreparedPhotoSettingsArray:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)supportedPhotoPixelFormatTypesForFileType:(id)arg1 ;
-(id)supportedPhotoCodecTypesForFileType:(id)arg1 ;
-(id)supportedRawPhotoPixelFormatTypesForFileType:(id)arg1 ;
-(BOOL)isDualCameraFusionSupported;
-(BOOL)isCameraCalibrationDataDeliverySupported;
-(void)setPhotoSettingsForSceneMonitoring:(AVCapturePhotoSettings *)arg1 ;
-(void)setHighResolutionCaptureEnabled:(BOOL)arg1 ;
-(void)setLivePhotoCaptureEnabled:(BOOL)arg1 ;
-(BOOL)isLivePhotoCaptureSuspended;
-(void)setLivePhotoCaptureSuspended:(BOOL)arg1 ;
-(void)setLivePhotoAutoTrimmingEnabled:(BOOL)arg1 ;
-(BOOL)isLivePhotoMovieProcessingSuspended;
-(void)setLivePhotoMovieProcessingSuspended:(BOOL)arg1 ;
-(BOOL)isImageOptimizationForOfflineVideoStabilizationSupported;
-(void)userInitiatedCaptureRequestAtTime:(unsigned long long)arg1 ;
-(id)_avErrorUserInfoDictionaryForError:(int)arg1 photoRequest:(id)arg2 payload:(id)arg3 isOriginalMovie:(BOOL)arg4 ;
-(BOOL)isAppleProRAWSupported;
-(BOOL)isAppleProRAWEnabled;
-(void)setAppleProRAWEnabled:(BOOL)arg1 ;
-(long long)maxPhotoQualityPrioritization;
-(void)setMaxPhotoQualityPrioritization:(long long)arg1 ;
-(BOOL)isVirtualDeviceFusionSupported;
-(BOOL)isVirtualDeviceConstituentPhotoDeliverySupported;
-(BOOL)isVirtualDeviceConstituentPhotoDeliveryEnabled;
-(void)setVirtualDeviceConstituentPhotoDeliveryEnabled:(BOOL)arg1 ;
-(BOOL)isAutoRedEyeReductionSupported;
-(BOOL)isContentAwareDistortionCorrectionSupported;
-(void)setContentAwareDistortionCorrectionEnabled:(BOOL)arg1 ;
@end


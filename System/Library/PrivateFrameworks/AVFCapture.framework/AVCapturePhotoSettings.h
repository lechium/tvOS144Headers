/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:49 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVFCapture/AVFCapture-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AVCapturePhotoSettingsInternal, NSArray, NSDictionary, NSString, NSURL;

@interface AVCapturePhotoSettings : NSObject <NSCopying> {

	AVCapturePhotoSettingsInternal* _internal;
	BOOL _autoRedEyeReductionEnabled;
	BOOL _autoVirtualDeviceFusionEnabled;
	BOOL _portraitEffectsMatteDeliveryEnabled;
	BOOL _embedsPortraitEffectsMatteInPhoto;
	BOOL _embedsSemanticSegmentationMattesInPhoto;
	BOOL _autoContentAwareDistortionCorrectionEnabled;
	long long _photoQualityPrioritization;
	NSArray* _virtualDeviceConstituentPhotoDeliveryEnabledDevices;
	NSArray* _enabledSemanticSegmentationMatteTypes;
	NSArray* _availableRawEmbeddedThumbnailPhotoCodecTypes;
	NSDictionary* _rawEmbeddedThumbnailPhotoFormat;

}

@property (readonly) long long uniqueID; 
@property (copy,readonly) NSDictionary * format; 
@property (readonly) NSString * processedFileType; 
@property (readonly) unsigned rawPhotoPixelFormatType; 
@property (readonly) NSString * rawFileType; 
@property (assign,nonatomic) long long flashMode; 
@property (assign,getter=isAutoRedEyeReductionEnabled,nonatomic) BOOL autoRedEyeReductionEnabled;                                                //@synthesize autoRedEyeReductionEnabled=_autoRedEyeReductionEnabled - In the implementation block
@property (assign,nonatomic) long long photoQualityPrioritization;                                                                               //@synthesize photoQualityPrioritization=_photoQualityPrioritization - In the implementation block
@property (assign,getter=isAutoStillImageStabilizationEnabled,nonatomic) BOOL autoStillImageStabilizationEnabled; 
@property (assign,getter=isAutoVirtualDeviceFusionEnabled,nonatomic) BOOL autoVirtualDeviceFusionEnabled;                                        //@synthesize autoVirtualDeviceFusionEnabled=_autoVirtualDeviceFusionEnabled - In the implementation block
@property (assign,getter=isAutoDualCameraFusionEnabled,nonatomic) BOOL autoDualCameraFusionEnabled; 
@property (nonatomic,copy) NSArray * virtualDeviceConstituentPhotoDeliveryEnabledDevices;                                                        //@synthesize virtualDeviceConstituentPhotoDeliveryEnabledDevices=_virtualDeviceConstituentPhotoDeliveryEnabledDevices - In the implementation block
@property (assign,getter=isDualCameraDualPhotoDeliveryEnabled,nonatomic) BOOL dualCameraDualPhotoDeliveryEnabled; 
@property (assign,getter=isHighResolutionPhotoEnabled,nonatomic) BOOL highResolutionPhotoEnabled; 
@property (assign,getter=isDepthDataDeliveryEnabled,nonatomic) BOOL depthDataDeliveryEnabled; 
@property (assign,nonatomic) BOOL embedsDepthDataInPhoto; 
@property (assign,getter=isDepthDataFiltered,nonatomic) BOOL depthDataFiltered; 
@property (assign,getter=isCameraCalibrationDataDeliveryEnabled,nonatomic) BOOL cameraCalibrationDataDeliveryEnabled; 
@property (assign,getter=isPortraitEffectsMatteDeliveryEnabled,nonatomic) BOOL portraitEffectsMatteDeliveryEnabled;                              //@synthesize portraitEffectsMatteDeliveryEnabled=_portraitEffectsMatteDeliveryEnabled - In the implementation block
@property (assign,nonatomic) BOOL embedsPortraitEffectsMatteInPhoto;                                                                             //@synthesize embedsPortraitEffectsMatteInPhoto=_embedsPortraitEffectsMatteInPhoto - In the implementation block
@property (nonatomic,copy) NSArray * enabledSemanticSegmentationMatteTypes;                                                                      //@synthesize enabledSemanticSegmentationMatteTypes=_enabledSemanticSegmentationMatteTypes - In the implementation block
@property (assign,nonatomic) BOOL embedsSemanticSegmentationMattesInPhoto;                                                                       //@synthesize embedsSemanticSegmentationMattesInPhoto=_embedsSemanticSegmentationMattesInPhoto - In the implementation block
@property (nonatomic,copy) NSDictionary * metadata; 
@property (nonatomic,copy) NSURL * livePhotoMovieFileURL; 
@property (nonatomic,copy) NSString * livePhotoVideoCodecType; 
@property (nonatomic,copy) NSArray * livePhotoMovieMetadata; 
@property (nonatomic,readonly) NSArray * availablePreviewPhotoPixelFormatTypes; 
@property (nonatomic,copy) NSDictionary * previewPhotoFormat; 
@property (nonatomic,readonly) NSArray * availableEmbeddedThumbnailPhotoCodecTypes; 
@property (nonatomic,copy) NSDictionary * embeddedThumbnailPhotoFormat; 
@property (nonatomic,readonly) NSArray * availableRawEmbeddedThumbnailPhotoCodecTypes;                                                           //@synthesize availableRawEmbeddedThumbnailPhotoCodecTypes=_availableRawEmbeddedThumbnailPhotoCodecTypes - In the implementation block
@property (nonatomic,copy) NSDictionary * rawEmbeddedThumbnailPhotoFormat;                                                                       //@synthesize rawEmbeddedThumbnailPhotoFormat=_rawEmbeddedThumbnailPhotoFormat - In the implementation block
@property (assign,getter=isAutoContentAwareDistortionCorrectionEnabled,nonatomic) BOOL autoContentAwareDistortionCorrectionEnabled;              //@synthesize autoContentAwareDistortionCorrectionEnabled=_autoContentAwareDistortionCorrectionEnabled - In the implementation block
+(void)initialize;
+(long long)uniqueID;
+(id)photoSettings;
+(id)photoSettingsWithFormat:(id)arg1 ;
+(id)photoSettingsWithRawPixelFormatType:(unsigned)arg1 ;
+(id)photoSettingsWithRawPixelFormatType:(unsigned)arg1 processedFormat:(id)arg2 ;
+(id)photoSettingsWithRawPixelFormatType:(unsigned)arg1 rawFileType:(id)arg2 processedFormat:(id)arg3 processedFileType:(id)arg4 ;
+(id)burstQualityPhotoSettings;
+(id)photoSettingsFromPhotoSettings:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)debugDescription;
-(id)description;
-(id)init;
-(void)dealloc;
-(long long)uniqueID;
-(NSDictionary *)metadata;
-(NSDictionary *)format;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(NSString *)processedFileType;
-(NSDictionary *)embeddedThumbnailPhotoFormat;
-(BOOL)isCameraCalibrationDataDeliveryEnabled;
-(BOOL)isDepthDataDeliveryEnabled;
-(id)livePhotoMovieFileURLForOriginalPhoto;
-(NSURL *)livePhotoMovieFileURL;
-(unsigned)rawPhotoPixelFormatType;
-(NSString *)rawFileType;
-(long long)flashMode;
-(long long)HDRMode;
-(BOOL)embedsDepthDataInPhoto;
-(NSString *)livePhotoVideoCodecType;
-(NSArray *)livePhotoMovieMetadata;
-(id)livePhotoMovieMetadataForOriginalPhoto;
-(NSDictionary *)previewPhotoFormat;
-(id)photoFilters;
-(id)adjustedPhotoFilters;
-(unsigned)shutterSound;
-(unsigned long long)userInitiatedPhotoRequestTime;
-(id)livePhotoContentIdentifier;
-(id)livePhotoContentIdentifierForOriginalPhoto;
-(id)_initWithFormat:(id)arg1 processedFileType:(id)arg2 rawPixelFormatType:(unsigned)arg3 rawFileType:(id)arg4 burstQualityCaptureEnabled:(BOOL)arg5 uniqueID:(long long)arg6 exceptionReason:(id*)arg7 ;
-(id)_sanitizedLivePhotoMovieMetadataForArray:(id)arg1 exceptionReason:(id*)arg2 ;
-(unsigned)formatFourCC;
-(NSArray *)availablePreviewPhotoPixelFormatTypes;
-(NSArray *)availableEmbeddedThumbnailPhotoCodecTypes;
-(BOOL)isBurstQualityCaptureEnabled;
-(BOOL)isTurboModeEnabled;
-(void)setTurboModeEnabled:(BOOL)arg1 ;
-(void)setFlashMode:(long long)arg1 ;
-(void)setHDRMode:(long long)arg1 ;
-(BOOL)isEV0PhotoDeliveryEnabled;
-(void)setEV0PhotoDeliveryEnabled:(BOOL)arg1 ;
-(BOOL)isAutoStillImageStabilizationEnabled;
-(void)setAutoStillImageStabilizationEnabled:(BOOL)arg1 ;
-(BOOL)isAutoDualCameraFusionEnabled;
-(void)setAutoDualCameraFusionEnabled:(BOOL)arg1 ;
-(BOOL)isDualCameraDualPhotoDeliveryEnabled;
-(void)setDualCameraDualPhotoDeliveryEnabled:(BOOL)arg1 ;
-(BOOL)isHighResolutionPhotoEnabled;
-(void)setHighResolutionPhotoEnabled:(BOOL)arg1 ;
-(void)setDepthDataDeliveryEnabled:(BOOL)arg1 ;
-(void)setEmbedsDepthDataInPhoto:(BOOL)arg1 ;
-(BOOL)isDepthDataFiltered;
-(void)setDepthDataFiltered:(BOOL)arg1 ;
-(void)setCameraCalibrationDataDeliveryEnabled:(BOOL)arg1 ;
-(void)setLivePhotoMovieFileURL:(NSURL *)arg1 ;
-(void)setLivePhotoMovieFileURLForOriginalPhoto:(id)arg1 ;
-(void)setLivePhotoVideoCodecType:(NSString *)arg1 ;
-(void)setLivePhotoContentIdentifier:(id)arg1 ;
-(void)setLivePhotoContentIdentifierForOriginalPhoto:(id)arg1 ;
-(void)setLivePhotoMovieMetadata:(NSArray *)arg1 ;
-(void)setLivePhotoMovieMetadataForOriginalPhoto:(id)arg1 ;
-(void)setPreviewPhotoFormat:(NSDictionary *)arg1 ;
-(void)setEmbeddedThumbnailPhotoFormat:(NSDictionary *)arg1 ;
-(BOOL)isSquareCropEnabled;
-(void)setSquareCropEnabled:(BOOL)arg1 ;
-(void)setShutterSound:(unsigned)arg1 ;
-(unsigned)previewFormatFourCC;
-(CGSize)previewCGSize;
-(unsigned)embeddedThumbnailFormatFourCC;
-(CGSize)embeddedThumbnailCGSize;
-(void)setUserInitiatedPhotoRequestTime:(unsigned long long)arg1 ;
-(void)setPhotoFilters:(id)arg1 ;
-(void)setAdjustedPhotoFilters:(id)arg1 ;
-(BOOL)isAutoRedEyeReductionEnabled;
-(void)setAutoRedEyeReductionEnabled:(BOOL)arg1 ;
-(long long)photoQualityPrioritization;
-(void)setPhotoQualityPrioritization:(long long)arg1 ;
-(BOOL)isAutoVirtualDeviceFusionEnabled;
-(void)setAutoVirtualDeviceFusionEnabled:(BOOL)arg1 ;
-(NSArray *)virtualDeviceConstituentPhotoDeliveryEnabledDevices;
-(void)setVirtualDeviceConstituentPhotoDeliveryEnabledDevices:(NSArray *)arg1 ;
-(BOOL)isPortraitEffectsMatteDeliveryEnabled;
-(void)setPortraitEffectsMatteDeliveryEnabled:(BOOL)arg1 ;
-(BOOL)embedsPortraitEffectsMatteInPhoto;
-(void)setEmbedsPortraitEffectsMatteInPhoto:(BOOL)arg1 ;
-(NSArray *)enabledSemanticSegmentationMatteTypes;
-(void)setEnabledSemanticSegmentationMatteTypes:(NSArray *)arg1 ;
-(BOOL)embedsSemanticSegmentationMattesInPhoto;
-(void)setEmbedsSemanticSegmentationMattesInPhoto:(BOOL)arg1 ;
-(NSArray *)availableRawEmbeddedThumbnailPhotoCodecTypes;
-(NSDictionary *)rawEmbeddedThumbnailPhotoFormat;
-(void)setRawEmbeddedThumbnailPhotoFormat:(NSDictionary *)arg1 ;
-(BOOL)isAutoContentAwareDistortionCorrectionEnabled;
-(void)setAutoContentAwareDistortionCorrectionEnabled:(BOOL)arg1 ;
@end


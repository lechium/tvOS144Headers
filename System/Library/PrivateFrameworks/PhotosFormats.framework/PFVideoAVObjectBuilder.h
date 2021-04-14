/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:50 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <PhotosFormats/PhotosFormats-Structs.h>
@class AVAsset, PFVideoAdjustments, PFSlowMotionTimeRangeMapper, AVAudioMix, AVVideoComposition;

@interface PFVideoAVObjectBuilder : NSObject {

	AVAsset* _videoAsset;
	PFVideoAdjustments* _videoAdjustments;
	PFSlowMotionTimeRangeMapper* __timeRangeMapperForPlayback;
	PFSlowMotionTimeRangeMapper* __timeRangeMapperForExport;
	AVAsset* __finalAsset;
	AVAudioMix* __finalAudioMix;
	AVVideoComposition* __finalVideoComposition;

}

@property (nonatomic,readonly) PFSlowMotionTimeRangeMapper * _timeRangeMapperForPlayback;              //@synthesize _timeRangeMapperForPlayback=__timeRangeMapperForPlayback - In the implementation block
@property (nonatomic,readonly) PFSlowMotionTimeRangeMapper * _timeRangeMapperForExport;                //@synthesize _timeRangeMapperForExport=__timeRangeMapperForExport - In the implementation block
@property (nonatomic,readonly) AVAsset * _finalAsset;                                                  //@synthesize _finalAsset=__finalAsset - In the implementation block
@property (nonatomic,readonly) AVAudioMix * _finalAudioMix;                                            //@synthesize _finalAudioMix=__finalAudioMix - In the implementation block
@property (nonatomic,readonly) AVVideoComposition * _finalVideoComposition;                            //@synthesize _finalVideoComposition=__finalVideoComposition - In the implementation block
@property (nonatomic,readonly) AVAsset * videoAsset;                                                   //@synthesize videoAsset=_videoAsset - In the implementation block
@property (nonatomic,readonly) PFVideoAdjustments * videoAdjustments;                                  //@synthesize videoAdjustments=_videoAdjustments - In the implementation block
-(id)description;
-(AVAsset *)videoAsset;
-(SCD_Struct_PF3)convertToScaledTimeFromOriginalTime:(SCD_Struct_PF3)arg1 forExport:(BOOL)arg2 ;
-(SCD_Struct_PF3)convertToOriginalTimeFromScaledTime:(SCD_Struct_PF3)arg1 forExport:(BOOL)arg2 ;
-(id)initWithVideoAsset:(id)arg1 videoAdjustments:(id)arg2 ;
-(id)initWithAsset:(id)arg1 audioMix:(id)arg2 videoComposition:(id)arg3 ;
-(void)requestPlayerItemWithResultHandler:(/*^block*/id)arg1 ;
-(void)requestAsynchronousPlayerItemWithResultHandler:(/*^block*/id)arg1 ;
-(void)requestExportSessionWithExportPreset:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
-(void)requestAsynchronousExportSessionWithExportPreset:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
-(void)requestAVAssetWithResultHandler:(/*^block*/id)arg1 ;
-(void)requestAsynchronousAVAssetWithResultHandler:(/*^block*/id)arg1 ;
-(void)requestAVAssetForExport:(BOOL)arg1 withResultHandler:(/*^block*/id)arg2 ;
-(void)_synchronouslyLoadSlowMotionPropertiesFromAsset:(id)arg1 ;
-(PFVideoAdjustments *)videoAdjustments;
-(PFSlowMotionTimeRangeMapper *)_timeRangeMapperForPlayback;
-(PFSlowMotionTimeRangeMapper *)_timeRangeMapperForExport;
-(AVAsset *)_finalAsset;
-(AVAudioMix *)_finalAudioMix;
-(AVVideoComposition *)_finalVideoComposition;
-(id)_getOrCreateTimeRangeMapperForExport:(BOOL)arg1 ;
-(SCD_Struct_PF4)slowMotionRampInRangeForExport:(BOOL)arg1 ;
-(SCD_Struct_PF4)slowMotionRampOutRangeForExport:(BOOL)arg1 ;
@end


/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:55 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVFigObjectInspector.h>
#import <AVFCore/AVAsynchronousKeyValueLoading.h>

@class AVWeakReference, AVDispatchOnce, NSArray, NSString, NSLocale, NSDictionary;

@interface AVAssetTrackInspector : AVFigObjectInspector <AVAsynchronousKeyValueLoading> {

	AVWeakReference* _weakReference;
	AVDispatchOnce* _synthesizeMediaCharacteristicsOnce;
	NSArray* _cachedMediaCharacteristics;

}

@property (nonatomic,readonly) int trackID; 
@property (getter=_figMediaType,nonatomic,readonly) unsigned figMediaType; 
@property (getter=_figTrackReader,nonatomic,readonly) OpaqueFigTrackReaderRef figTrackReader; 
@property (getter=_figAssetTrack,nonatomic,readonly) OpaqueFigAssetTrackRef figAssetTrack; 
@property (nonatomic,readonly) NSString * mediaType; 
@property (nonatomic,readonly) NSArray * formatDescriptions; 
@property (getter=isPlayable,nonatomic,readonly) BOOL playable; 
@property (getter=isDecodable,nonatomic,readonly) BOOL decodable; 
@property (getter=isEnabled,nonatomic,readonly) BOOL enabled; 
@property (getter=isSelfContained,nonatomic,readonly) BOOL selfContained; 
@property (nonatomic,readonly) long long totalSampleDataLength; 
@property (nonatomic,readonly) SCD_Struct_AV7 timeRange; 
@property (nonatomic,readonly) SCD_Struct_AV7 mediaPresentationTimeRange; 
@property (nonatomic,readonly) SCD_Struct_AV7 mediaDecodeTimeRange; 
@property (nonatomic,readonly) SCD_Struct_AV6 latentBaseDecodeTimeStampOfFirstTrackFragment; 
@property (nonatomic,readonly) BOOL requiresFrameReordering; 
@property (nonatomic,readonly) int naturalTimeScale; 
@property (nonatomic,readonly) float estimatedDataRate; 
@property (nonatomic,readonly) float peakDataRate; 
@property (nonatomic,readonly) NSString * languageCode; 
@property (nonatomic,readonly) NSArray * mediaCharacteristics; 
@property (nonatomic,readonly) NSString * extendedLanguageTag; 
@property (nonatomic,readonly) NSLocale * locale; 
@property (nonatomic,readonly) CGSize naturalSize; 
@property (nonatomic,readonly) CGAffineTransform preferredTransform; 
@property (nonatomic,readonly) long long layer; 
@property (nonatomic,readonly) float preferredVolume; 
@property (nonatomic,readonly) BOOL hasAudioSampleDependencies; 
@property (nonatomic,readonly) NSDictionary * loudnessInfo; 
@property (nonatomic,readonly) float nominalFrameRate; 
@property (nonatomic,readonly) SCD_Struct_AV6 minSampleDuration; 
@property (nonatomic,copy,readonly) NSArray * segments; 
@property (nonatomic,readonly) NSArray * commonMetadata; 
@property (nonatomic,readonly) NSArray * availableMetadataFormats; 
@property (nonatomic,readonly) long long alternateGroupID; 
@property (nonatomic,readonly) long long defaultAlternateGroupID; 
@property (nonatomic,readonly) long long provisionalAlternateGroupID; 
@property (getter=isExcludedFromAutoselectionInTrackGroup,nonatomic,readonly) BOOL excludedFromAutoselectionInTrackGroup; 
@property (nonatomic,readonly) CGSize dimensions; 
@property (getter=_trackReferences,nonatomic,readonly) NSDictionary * trackReferences; 
@property (nonatomic,readonly) BOOL hasProtectedContent; 
@property (nonatomic,readonly) BOOL hasAudibleBooksContent; 
@property (nonatomic,readonly) BOOL isAudibleBooksContentAuthorized; 
@property (nonatomic,readonly) int playabilityValidationResult; 
@property (nonatomic,readonly) BOOL segmentsExcludeAudioPrimingAndRemainderDurations; 
@property (nonatomic,readonly) SCD_Struct_AV7 gaplessSourceTimeRange; 
@property (nonatomic,copy,readonly) NSArray * segmentsAsPresented; 
+(id)assetTrackInspectorWithAsset:(id)arg1 trackID:(int)arg2 trackIndex:(long long)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)dealloc;
-(NSLocale *)locale;
-(NSString *)languageCode;
-(BOOL)isEnabled;
-(BOOL)hasProtectedContent;
-(long long)layer;
-(SCD_Struct_AV7)timeRange;
-(int)trackID;
-(NSArray *)segments;
-(NSString *)mediaType;
-(CGSize)dimensions;
-(id)_weakReference;
-(NSArray *)formatDescriptions;
-(NSArray *)commonMetadata;
-(NSString *)extendedLanguageTag;
-(void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(CGAffineTransform)preferredTransform;
-(CGSize)naturalSize;
-(long long)totalSampleDataLength;
-(long long)statusOfValueForKey:(id)arg1 error:(id*)arg2 ;
-(BOOL)isPlayable;
-(BOOL)isDecodable;
-(float)nominalFrameRate;
-(id)metadataForFormat:(id)arg1 ;
-(NSArray *)mediaCharacteristics;
-(NSArray *)availableMetadataFormats;
-(float)preferredVolume;
-(int)naturalTimeScale;
-(id)_initWithAsset:(id)arg1 trackID:(int)arg2 ;
-(id)_initWithAsset:(id)arg1 trackIndex:(long long)arg2 ;
-(OpaqueFigAssetTrackRef)_figAssetTrack;
-(id)_initWithAsset:(id)arg1 trackID:(int)arg2 trackIndex:(long long)arg3 ;
-(OpaqueFigTrackReaderRef)_figTrackReader;
-(int)playabilityValidationResult;
-(BOOL)isSelfContained;
-(SCD_Struct_AV7)mediaPresentationTimeRange;
-(SCD_Struct_AV7)mediaDecodeTimeRange;
-(SCD_Struct_AV6)latentBaseDecodeTimeStampOfFirstTrackFragment;
-(BOOL)requiresFrameReordering;
-(BOOL)hasAudioSampleDependencies;
-(float)estimatedDataRate;
-(float)peakDataRate;
-(NSDictionary *)loudnessInfo;
-(SCD_Struct_AV6)minSampleDuration;
-(id)segmentForTrackTime:(SCD_Struct_AV6)arg1 ;
-(BOOL)segmentsExcludeAudioPrimingAndRemainderDurations;
-(SCD_Struct_AV7)gaplessSourceTimeRange;
-(NSArray *)segmentsAsPresented;
-(SCD_Struct_AV6)samplePresentationTimeForTrackTime:(SCD_Struct_AV6)arg1 ;
-(long long)alternateGroupID;
-(long long)defaultAlternateGroupID;
-(long long)provisionalAlternateGroupID;
-(BOOL)isExcludedFromAutoselectionInTrackGroup;
-(id)_trackReferences;
-(BOOL)hasAudibleBooksContent;
-(BOOL)isAudibleBooksContentAuthorized;
-(unsigned)_figMediaType;
@end

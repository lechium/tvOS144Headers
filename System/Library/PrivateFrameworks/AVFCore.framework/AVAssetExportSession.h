/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:53 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AVFCore/AVFCore-Structs.h>
@class AVAssetExportSessionInternal, NSString, AVAsset, NSURL, NSError;

@interface AVAssetExportSession : NSObject {

	AVAssetExportSessionInternal* _exportSession;

}

@property (nonatomic,readonly) NSString * presetName; 
@property (nonatomic,retain,readonly) AVAsset * asset; 
@property (nonatomic,copy) NSString * outputFileType; 
@property (nonatomic,copy) NSURL * outputURL; 
@property (assign,nonatomic) BOOL shouldOptimizeForNetworkUse; 
@property (nonatomic,readonly) long long status; 
@property (nonatomic,readonly) NSError * error; 
@property (nonatomic,readonly) float progress; 
+(SCD_Struct_AV6)maximumDurationForPreset:(id)arg1 properties:(id)arg2 ;
+(id)exportSessionWithAsset:(id)arg1 presetName:(id)arg2 ;
+(long long)estimatedOutputFileLengthForPreset:(id)arg1 duration:(SCD_Struct_AV6)arg2 properties:(id)arg3 ;
+(void)determineCompatibilityOfExportPreset:(id)arg1 withAsset:(id)arg2 outputFileType:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
+(id)exportPresetsCompatibleWithAsset:(id)arg1 ;
+(id)allExportPresets;
+(id)keyPathsForValuesAffectingEstimatedOutputFileLength;
-(id)description;
-(id)init;
-(void)dealloc;
-(NSError *)error;
-(float)progress;
-(long long)status;
-(id)metadata;
-(void)setOutputURL:(NSURL *)arg1 ;
-(NSURL *)outputURL;
-(void)setMetadata:(id)arg1 ;
-(void)setTimeRange:(SCD_Struct_AV7)arg1 ;
-(SCD_Struct_AV7)timeRange;
-(id)supportedFileTypes;
-(AVAsset *)asset;
-(void)setAudioMix:(id)arg1 ;
-(void)setAudioTimePitchAlgorithm:(id)arg1 ;
-(id)videoComposition;
-(void)setVideoComposition:(id)arg1 ;
-(void)exportAsynchronouslyWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)audioMix;
-(void)setOutputFileType:(NSString *)arg1 ;
-(id)initWithAsset:(id)arg1 presetName:(id)arg2 ;
-(void)cancelExport;
-(void)setVideoFrameRateConversionAlgorithm:(id)arg1 ;
-(void)setMinVideoFrameDuration:(SCD_Struct_AV6)arg1 ;
-(BOOL)maximizePowerEfficiency;
-(void)setMaximizePowerEfficiency:(BOOL)arg1 ;
-(void)determineCompatibleFileTypesWithCompletionHandler:(/*^block*/id)arg1 ;
-(long long)estimatedOutputFileLength;
-(void)setDirectoryForTemporaryFiles:(id)arg1 ;
-(void)setMetadataItemFilter:(id)arg1 ;
-(void)setShouldOptimizeForNetworkUse:(BOOL)arg1 ;
-(NSString *)presetName;
-(NSString *)outputFileType;
-(SCD_Struct_AV6)maxDuration;
-(id)audioTimePitchAlgorithm;
-(void)setFileLengthLimit:(long long)arg1 ;
-(id)customVideoCompositor;
-(BOOL)shouldOptimizeForNetworkUse;
-(id)directoryForTemporaryFiles;
-(id)metadataItemFilter;
-(void)estimateMaximumDurationWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)estimateOutputFileLengthWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)AVExportSessionExportAsynchronouslyCompletionHandler;
-(SCD_Struct_AV6)minVideoFrameDuration;
-(id)videoFrameRateConversionAlgorithm;
-(void)setPreserveSyncFrames:(BOOL)arg1 ;
-(BOOL)preserveSyncFrames;
-(long long)fileLengthLimit;
-(BOOL)canPerformMultiplePassesOverSourceMediaData;
-(void)setCanPerformMultiplePassesOverSourceMediaData:(BOOL)arg1 ;
@end


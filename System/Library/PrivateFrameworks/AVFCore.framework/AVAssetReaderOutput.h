/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:52 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AVFCore/AVFCore-Structs.h>
@class AVAssetReaderOutputInternal, AVWeakReference, NSDictionary, NSString;

@interface AVAssetReaderOutput : NSObject {

	AVAssetReaderOutputInternal* _internal;

}

@property (getter=_weakReferenceToAssetReader,nonatomic,readonly) AVWeakReference * weakReferenceToAssetReader; 
@property (assign,setter=_setExtractionID:,getter=_extractionID,nonatomic) int extractionID; 
@property (getter=_figAssetReaderExtractionOptions,nonatomic,readonly) NSDictionary * figAssetReaderExtractionOptions; 
@property (getter=_trimsSampleDurations,nonatomic,readonly) BOOL trimsSampleDurations; 
@property (nonatomic,readonly) NSString * mediaType; 
@property (assign,nonatomic) BOOL alwaysCopiesSampleData; 
+(void)initialize;
+(id)_figAssetReaderVideoScalingPropertiesFromVideoSettings:(id)arg1 withFormatDescription:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(long long)_status;
-(BOOL)_isFinished;
-(NSString *)mediaType;
-(id)_asset;
-(void)setAlwaysCopiesSampleData:(BOOL)arg1 ;
-(opaqueCMSampleBufferRef)copyNextSampleBuffer;
-(BOOL)maximizePowerEfficiency;
-(void)setMaximizePowerEfficiency:(BOOL)arg1 ;
-(void)setSupportsRandomAccess:(BOOL)arg1 ;
-(void)resetForReadingTimeRanges:(id)arg1 ;
-(BOOL)supportsRandomAccess;
-(void)markConfigurationAsFinal;
-(id)_errorForOSStatus:(int)arg1 ;
-(void)_attachToWeakReferenceToAssetReader:(id)arg1 ;
-(BOOL)_prepareForReadingReturningError:(id*)arg1 ;
-(void)_cancelReading;
-(OpaqueFigAssetReaderRef)_figAssetReader;
-(BOOL)alwaysCopiesSampleData;
-(id)currentTimeRanges;
-(void)_setFigAssetReader:(OpaqueFigAssetReaderRef)arg1 ;
-(id)_weakReferenceToAssetReader;
-(BOOL)_trimsSampleDurations;
-(int)_extractionID;
-(BOOL)_enableTrackExtractionReturningError:(id*)arg1 ;
-(void)_markAsFinished;
-(BOOL)_updateTimeRangesOnFigAssetReaderReturningError:(id*)arg1 ;
-(void)_setExtractionID:(int)arg1 ;
-(id)_figAssetReaderExtractionOptions;
-(void)_figAssetReaderSampleBufferDidBecomeAvailableForExtractionID:(int)arg1 ;
-(void)_figAssetReaderDecodeError;
-(void)_figAssetReaderFailed;
-(void)_figAssetReaderServerConnectionDied;
@end


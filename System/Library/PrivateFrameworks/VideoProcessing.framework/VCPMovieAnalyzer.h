/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:59 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <VideoProcessing/VideoProcessing-Structs.h>
@class NSMutableDictionary, VCPAsset, NSDictionary;

@interface VCPMovieAnalyzer : NSObject {

	unsigned long long _requestedAnalyses;
	NSMutableDictionary* _analysis;
	NSMutableDictionary* _privateResults;
	VCPAsset* _asset;
	BOOL _supportConditionalAnalysis;
	NSDictionary* _existingAnalysis;
	BOOL _prepareLivePhotoScenes;
	BOOL _faceDominated;
	BOOL _allowStreaming;
	float _maxHighlightDuration;
	long long _status;

}

@property (assign,nonatomic) BOOL allowStreaming;                     //@synthesize allowStreaming=_allowStreaming - In the implementation block
@property (assign,nonatomic) float maxHighlightDuration;              //@synthesize maxHighlightDuration=_maxHighlightDuration - In the implementation block
@property (assign,nonatomic) BOOL faceDominated;                      //@synthesize faceDominated=_faceDominated - In the implementation block
@property (readonly) long long status;                                //@synthesize status=_status - In the implementation block
+(BOOL)canAnalyzeUndegraded:(id)arg1 withResources:(id)arg2 ;
+(id)analyzerWithVCPAsset:(id)arg1 withExistingAnalysis:(id)arg2 forAnalysisTypes:(unsigned long long)arg3 ;
+(float)getMaximumHighlightInSec;
-(long long)status;
-(id)privateResults;
-(id)initWithPHAsset:(id)arg1 withExistingAnalysis:(id)arg2 forAnalysisTypes:(unsigned long long)arg3 ;
-(id)analyzeAsset:(/*^block*/id)arg1 streamed:(BOOL*)arg2 ;
-(void)setMaxHighlightDuration:(float)arg1 ;
-(void)setAllowStreaming:(BOOL)arg1 ;
-(id)initWithVCPAsset:(id)arg1 withExistingAnalysis:(id)arg2 forAnalysisTypes:(unsigned long long)arg3 ;
-(id)processExistingAnalysisForTimeRange:(SCD_Struct_VC17)arg1 analysisTypes:(unsigned long long*)arg2 ;
-(id)createDecoderForTrack:(id)arg1 timerange:(const SCD_Struct_VC17*)arg2 forAnalysisTypes:(unsigned long long)arg3 ;
-(id)createVideoAnalyzer:(id)arg1 withFrameStats:(id)arg2 ;
-(int)analyzeVideoSegment:(id)arg1 timerange:(const SCD_Struct_VC17*)arg2 forAnalysisTypes:(unsigned long long)arg3 cancel:(/*^block*/id)arg4 ;
-(BOOL)allowStreaming;
-(void)loadPropertiesForAsset:(id)arg1 ;
-(int)performMetadataAnalysisOnAsset:(id)arg1 withCancelBlock:(/*^block*/id)arg2 ;
-(int)analyzeVideoTrack:(id)arg1 start:(SCD_Struct_VC6)arg2 forAnalysisTypes:(unsigned long long)arg3 cancel:(/*^block*/id)arg4 ;
-(int)generateKeyFrameResource:(id)arg1 ;
-(id)initWithPHAsset:(id)arg1 withPausedAnalysis:(id)arg2 forAnalysisTypes:(unsigned long long)arg3 ;
-(float)maxHighlightDuration;
-(BOOL)faceDominated;
-(void)setFaceDominated:(BOOL)arg1 ;
@end


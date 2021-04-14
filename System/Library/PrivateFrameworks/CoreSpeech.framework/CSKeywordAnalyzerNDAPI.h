/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:30 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CSKeywordAnalyzerNDAPIScoreDelegate;
@class CSNovDetector;

@interface CSKeywordAnalyzerNDAPI : NSObject {

	CSNovDetector* _novDetector;
	unsigned long long _startAnalyzeSampleCount;
	BOOL _isStartSampleCountMarked;
	unsigned long long _lastSampleFed;
	unsigned long long _sampleFedWrapAroundOffset;
	unsigned _activePhraseId;
	unsigned long long _activeChannel;
	id<CSKeywordAnalyzerNDAPIScoreDelegate> _delegate;

}

@property (assign,nonatomic) unsigned long long activeChannel;                                     //@synthesize activeChannel=_activeChannel - In the implementation block
@property (assign,nonatomic) unsigned activePhraseId;                                              //@synthesize activePhraseId=_activePhraseId - In the implementation block
@property (assign,nonatomic,__weak) id<CSKeywordAnalyzerNDAPIScoreDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<CSKeywordAnalyzerNDAPIScoreDelegate>)delegate;
-(void)setDelegate:(id<CSKeywordAnalyzerNDAPIScoreDelegate>)arg1 ;
-(void)reset;
-(unsigned long long)activeChannel;
-(void)setActiveChannel:(unsigned long long)arg1 ;
-(id)initWithConfigPath:(id)arg1 resourcePath:(id)arg2 ;
-(void)resetBest;
-(void)analyzeWavData:(id)arg1 numSamples:(unsigned long long)arg2 ;
-(void)analyzeWavFloatData:(id)arg1 numSamples:(unsigned long long)arg2 ;
-(id)getSuperVectorWithEndPoint:(unsigned long long)arg1 ;
-(id)getAnalyzedResult;
-(void)_resetStartAnalyzeTime;
-(void)_setStartAnalyzeTime:(unsigned long long)arg1 ;
-(void)processAudioChunk:(id)arg1 ;
-(float)getThreshold;
-(void)setActivePhraseId:(unsigned)arg1 ;
-(id)getAnalyzedMpVtResults;
-(id)_keywordAnalyzerNDAPIResultForPhraseId:(unsigned)arg1 withNovDetectorResult:(id)arg2 ;
-(float)getLoggingThreshold;
-(float)getRejectLoggingThreshold;
-(unsigned)activePhraseId;
@end


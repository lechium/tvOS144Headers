/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:36 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray;

@interface VTKeywordAnalyzerResults : NSObject {

	unsigned long long _detectorType;
	unsigned long long _numPhraseResults;
	NSArray* _phraseScores;

}

@property (assign,nonatomic) unsigned long long detectorType;                  //@synthesize detectorType=_detectorType - In the implementation block
@property (assign,nonatomic) unsigned long long numPhraseResults;              //@synthesize numPhraseResults=_numPhraseResults - In the implementation block
@property (nonatomic,retain) NSArray * phraseScores;                           //@synthesize phraseScores=_phraseScores - In the implementation block
-(id)description;
-(id)init;
-(unsigned long long)detectorType;
-(void)setDetectorType:(unsigned long long)arg1 ;
-(unsigned long long)numPhraseResults;
-(NSArray *)phraseScores;
-(void)setNumPhraseResults:(unsigned long long)arg1 ;
-(void)setPhraseScores:(NSArray *)arg1 ;
@end


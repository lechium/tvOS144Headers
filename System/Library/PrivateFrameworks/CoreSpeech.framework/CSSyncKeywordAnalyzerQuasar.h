/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:30 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableArray, NSArray, _EARSyncSpeechRecognizer, NSDictionary;

@interface CSSyncKeywordAnalyzerQuasar : NSObject {

	NSMutableArray* _previousUtteranceTokens;
	NSArray* _lastReportedRecogResults;
	NSArray* _triggerTokenList;
	_EARSyncSpeechRecognizer* _syncRecognizer;
	BOOL _useKeywordSpotting;
	double _triggerConfidence;
	unsigned long long _activeChannel;
	NSDictionary* _ctcKwdToPhraseIdMap;

}

@property (assign,nonatomic) double triggerConfidence;                        //@synthesize triggerConfidence=_triggerConfidence - In the implementation block
@property (assign,nonatomic) unsigned long long activeChannel;                //@synthesize activeChannel=_activeChannel - In the implementation block
@property (nonatomic,retain) NSDictionary * ctcKwdToPhraseIdMap;              //@synthesize ctcKwdToPhraseIdMap=_ctcKwdToPhraseIdMap - In the implementation block
@property (nonatomic,readonly) NSDictionary * phraseIdScores; 
+(void)dumpEARSpeechRecognitionResults:(id)arg1 ;
-(unsigned long long)activeChannel;
-(void)setActiveChannel:(unsigned long long)arg1 ;
-(NSDictionary *)ctcKwdToPhraseIdMap;
-(void)setCtcKwdToPhraseIdMap:(NSDictionary *)arg1 ;
-(double)_getConfidence:(id)arg1 ;
-(double)triggerConfidence;
-(void)processAudioChunk:(id)arg1 ;
-(void)_calculateTriggerConfidence:(id)arg1 ;
-(id)initWithConfigPath:(id)arg1 triggerTokens:(id)arg2 useKeywordSpotting:(BOOL)arg3 ;
-(void)resetWithLanguage:(id)arg1 withFarField:(unsigned char)arg2 withAudioSource:(id)arg3 ;
-(void)flushAudio;
-(NSDictionary *)phraseIdScores;
-(void)setTriggerConfidence:(double)arg1 ;
@end


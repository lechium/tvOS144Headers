/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:32 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, CSKeywordAnalyzerNDAPIResult;

@interface CSVTSecondPassPhraseScore : NSObject {

	BOOL _useKwdSpotting;
	BOOL _isMaximized;
	float _threshold;
	float _secondChanceThreshold;
	float _loggingThreshold;
	float _recognizerScoreScaleFactor;
	float _recognizerThresholdOffset;
	float _satThreshold;
	float _tdsrSatCombinedSATThreshold;
	float _ndapiScore;
	float _ctcCheckerScore;
	float _combinedScore;
	unsigned long long _phId;
	NSString* _phStr;
	CSKeywordAnalyzerNDAPIResult* _ndapiResult;

}

@property (assign,nonatomic) unsigned long long phId;                                 //@synthesize phId=_phId - In the implementation block
@property (nonatomic,retain) NSString * phStr;                                        //@synthesize phStr=_phStr - In the implementation block
@property (assign,nonatomic) float threshold;                                         //@synthesize threshold=_threshold - In the implementation block
@property (assign,nonatomic) float secondChanceThreshold;                             //@synthesize secondChanceThreshold=_secondChanceThreshold - In the implementation block
@property (assign,nonatomic) float loggingThreshold;                                  //@synthesize loggingThreshold=_loggingThreshold - In the implementation block
@property (assign,nonatomic) BOOL useKwdSpotting;                                     //@synthesize useKwdSpotting=_useKwdSpotting - In the implementation block
@property (assign,nonatomic) float recognizerScoreScaleFactor;                        //@synthesize recognizerScoreScaleFactor=_recognizerScoreScaleFactor - In the implementation block
@property (assign,nonatomic) float recognizerThresholdOffset;                         //@synthesize recognizerThresholdOffset=_recognizerThresholdOffset - In the implementation block
@property (assign,nonatomic) float satThreshold;                                      //@synthesize satThreshold=_satThreshold - In the implementation block
@property (assign,nonatomic) float tdsrSatCombinedSATThreshold;                       //@synthesize tdsrSatCombinedSATThreshold=_tdsrSatCombinedSATThreshold - In the implementation block
@property (assign,nonatomic) float ndapiScore;                                        //@synthesize ndapiScore=_ndapiScore - In the implementation block
@property (assign,nonatomic) float ctcCheckerScore;                                   //@synthesize ctcCheckerScore=_ctcCheckerScore - In the implementation block
@property (assign,nonatomic) float combinedScore;                                     //@synthesize combinedScore=_combinedScore - In the implementation block
@property (assign,nonatomic) BOOL isMaximized;                                        //@synthesize isMaximized=_isMaximized - In the implementation block
@property (nonatomic,retain) CSKeywordAnalyzerNDAPIResult * ndapiResult;              //@synthesize ndapiResult=_ndapiResult - In the implementation block
-(id)debugDescription;
-(id)description;
-(void)_update;
-(void)setThreshold:(float)arg1 ;
-(float)threshold;
-(float)combinedScore;
-(void)setCombinedScore:(float)arg1 ;
-(NSString *)phStr;
-(void)setPhStr:(NSString *)arg1 ;
-(CSKeywordAnalyzerNDAPIResult *)ndapiResult;
-(float)effectiveThresholdWithSecondChanceEnabled:(BOOL)arg1 ;
-(float)ctcCheckerScore;
-(float)recognizerThresholdOffset;
-(float)recognizerScoreScaleFactor;
-(id)dictionaryRepresentationWithSecondChanceEnabled:(BOOL)arg1 ;
-(void)setRecognizerScoreScaleFactor:(float)arg1 ;
-(void)setRecognizerThresholdOffset:(float)arg1 ;
-(BOOL)didTriggerWithSecondChanceEnabled:(BOOL)arg1 ;
-(id)initWithPhraseInfoDict:(id)arg1 useKeywordSpotting:(BOOL)arg2 ;
-(void)updateWithNdapiResult:(id)arg1 ;
-(void)updateWithCtcScore:(float)arg1 ;
-(BOOL)hasNearMissTriggerWithSecondChanceEnabled:(BOOL)arg1 ;
-(unsigned long long)phId;
-(void)setPhId:(unsigned long long)arg1 ;
-(float)secondChanceThreshold;
-(void)setSecondChanceThreshold:(float)arg1 ;
-(float)loggingThreshold;
-(void)setLoggingThreshold:(float)arg1 ;
-(BOOL)useKwdSpotting;
-(void)setUseKwdSpotting:(BOOL)arg1 ;
-(float)satThreshold;
-(void)setSatThreshold:(float)arg1 ;
-(float)tdsrSatCombinedSATThreshold;
-(void)setTdsrSatCombinedSATThreshold:(float)arg1 ;
-(float)ndapiScore;
-(void)setNdapiScore:(float)arg1 ;
-(void)setCtcCheckerScore:(float)arg1 ;
-(BOOL)isMaximized;
-(void)setIsMaximized:(BOOL)arg1 ;
-(void)setNdapiResult:(CSKeywordAnalyzerNDAPIResult *)arg1 ;
@end


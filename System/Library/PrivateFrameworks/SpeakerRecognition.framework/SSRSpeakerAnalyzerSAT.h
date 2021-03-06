/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:17 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SpeakerRecognition.framework/SpeakerRecognition
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol SSRSpeakerAnalyzerSATDelegate, OS_dispatch_queue;
@class NSURL, SSRSpeakerRecognitionContext, NSDictionary, NSArray, NSObject;

@interface SSRSpeakerAnalyzerSAT : NSObject {

	void* _novDetect;
	unsigned long long _numSamplesProcessed;
	BOOL _triggerPhraseDetectedOnTap;
	id<SSRSpeakerAnalyzerSATDelegate> _delegate;
	NSURL* _configFilePath;
	NSURL* _resourceFilePath;
	SSRSpeakerRecognitionContext* _context;
	NSDictionary* _voiceProfilesModelFilePaths;
	NSDictionary* _voiceProfilesExpModelFilePaths;
	NSArray* _satScorers;
	NSDictionary* _scoreCard;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (assign,nonatomic,__weak) id<SSRSpeakerAnalyzerSATDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSURL * configFilePath;                                         //@synthesize configFilePath=_configFilePath - In the implementation block
@property (nonatomic,retain) NSURL * resourceFilePath;                                       //@synthesize resourceFilePath=_resourceFilePath - In the implementation block
@property (nonatomic,retain) SSRSpeakerRecognitionContext * context;                         //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSDictionary * voiceProfilesModelFilePaths;                     //@synthesize voiceProfilesModelFilePaths=_voiceProfilesModelFilePaths - In the implementation block
@property (nonatomic,retain) NSDictionary * voiceProfilesExpModelFilePaths;                  //@synthesize voiceProfilesExpModelFilePaths=_voiceProfilesExpModelFilePaths - In the implementation block
@property (nonatomic,retain) NSArray * satScorers;                                           //@synthesize satScorers=_satScorers - In the implementation block
@property (nonatomic,retain) NSDictionary * scoreCard;                                       //@synthesize scoreCard=_scoreCard - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                             //@synthesize queue=_queue - In the implementation block
-(void)dealloc;
-(id<SSRSpeakerAnalyzerSATDelegate>)delegate;
-(void)setDelegate:(id<SSRSpeakerAnalyzerSATDelegate>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(SSRSpeakerRecognitionContext *)context;
-(void)setContext:(SSRSpeakerRecognitionContext *)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)endAudio;
-(id)resetForNewRequest;
-(void)processAudioData:(id)arg1 numSamples:(unsigned long long)arg2 ;
-(NSURL *)configFilePath;
-(NSURL *)resourceFilePath;
-(NSDictionary *)voiceProfilesModelFilePaths;
-(id)initWithVoiceRecognitionContext:(id)arg1 delegate:(id)arg2 queue:(id)arg3 ;
-(id)getVoiceRecognizerResults;
-(void)setConfigFilePath:(NSURL *)arg1 ;
-(void)setResourceFilePath:(NSURL *)arg1 ;
-(void)setVoiceProfilesModelFilePaths:(NSDictionary *)arg1 ;
-(NSDictionary *)voiceProfilesExpModelFilePaths;
-(void)setVoiceProfilesExpModelFilePaths:(NSDictionary *)arg1 ;
-(id)_updateScoreCardForFinalResult:(BOOL)arg1 ;
-(id)_getAnalyzedResult;
-(id)_getSuperVectorWithEndPoint:(unsigned long long)arg1 ;
-(id)_processSuperVector:(id)arg1 withSize:(unsigned long long)arg2 processedAudioDurationMs:(unsigned long long)arg3 isFinal:(BOOL)arg4 ;
-(NSArray *)satScorers;
-(void)setSatScorers:(NSArray *)arg1 ;
-(NSDictionary *)scoreCard;
-(void)setScoreCard:(NSDictionary *)arg1 ;
@end


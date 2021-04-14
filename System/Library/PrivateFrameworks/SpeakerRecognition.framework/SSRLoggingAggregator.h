/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:17 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SpeakerRecognition.framework/SpeakerRecognition
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSMutableDictionary;

@interface SSRLoggingAggregator : NSObject {

	NSString* _eventString;
	NSMutableDictionary* _eventContext;
	unsigned long long explicitUtteranceIndex;
	unsigned long long explicitFailedUtteranceIndex;
	unsigned long long implicitUtteranceIndex;
	unsigned long long implicitDiscardedUtteranceIndex;
	float _voiceProfileUpdateScoreMSE;
	unsigned long long _voiceProfilePruningFailureReasonCode;
	unsigned long long _voiceProfileDiscardedUtteranceCount;
	unsigned long long _voiceProfilePrunedUtteranceCount;
	unsigned long long _voiceProfileRetainedUtteranceCount;
	unsigned long long _voiceProfileRetrainingFailureReasonCode;
	double _retrainingWaitTime;
	unsigned long long _speakerRecognitionProcessingStatus;
	double _speakerRecognitionWaitTime;
	unsigned long long _speakerRecognitionPSRProcessingStatus;
	unsigned long long _speakerRecognitionSATProcessingStatus;

}

@property (assign,nonatomic) unsigned long long voiceProfilePruningFailureReasonCode;                 //@synthesize voiceProfilePruningFailureReasonCode=_voiceProfilePruningFailureReasonCode - In the implementation block
@property (assign,nonatomic) float voiceProfileUpdateScoreMSE;                                        //@synthesize voiceProfileUpdateScoreMSE=_voiceProfileUpdateScoreMSE - In the implementation block
@property (assign,nonatomic) unsigned long long voiceProfileDiscardedUtteranceCount;                  //@synthesize voiceProfileDiscardedUtteranceCount=_voiceProfileDiscardedUtteranceCount - In the implementation block
@property (assign,nonatomic) unsigned long long voiceProfilePrunedUtteranceCount;                     //@synthesize voiceProfilePrunedUtteranceCount=_voiceProfilePrunedUtteranceCount - In the implementation block
@property (assign,nonatomic) unsigned long long voiceProfileRetainedUtteranceCount;                   //@synthesize voiceProfileRetainedUtteranceCount=_voiceProfileRetainedUtteranceCount - In the implementation block
@property (assign,nonatomic) unsigned long long voiceProfileRetrainingFailureReasonCode;              //@synthesize voiceProfileRetrainingFailureReasonCode=_voiceProfileRetrainingFailureReasonCode - In the implementation block
@property (assign,nonatomic) double retrainingWaitTime;                                               //@synthesize retrainingWaitTime=_retrainingWaitTime - In the implementation block
@property (assign,nonatomic) unsigned long long speakerRecognitionProcessingStatus;                   //@synthesize speakerRecognitionProcessingStatus=_speakerRecognitionProcessingStatus - In the implementation block
@property (assign,nonatomic) double speakerRecognitionWaitTime;                                       //@synthesize speakerRecognitionWaitTime=_speakerRecognitionWaitTime - In the implementation block
@property (assign,nonatomic) unsigned long long speakerRecognitionPSRProcessingStatus;                //@synthesize speakerRecognitionPSRProcessingStatus=_speakerRecognitionPSRProcessingStatus - In the implementation block
@property (assign,nonatomic) unsigned long long speakerRecognitionSATProcessingStatus;                //@synthesize speakerRecognitionSATProcessingStatus=_speakerRecognitionSATProcessingStatus - In the implementation block
-(void)setSpeakerRecognitionPSRProcessingStatus:(unsigned long long)arg1 ;
-(void)setSpeakerRecognitionProcessingStatus:(unsigned long long)arg1 ;
-(void)setSpeakerRecognitionWaitTime:(double)arg1 ;
-(void)pushAnalytics;
-(id)initWithEvent:(id)arg1 locale:(id)arg2 configVersion:(id)arg3 ;
-(void)pushAnalyticsWithLazyBlock:(/*^block*/id)arg1 ;
-(void)setVoiceProfilePruningFailureReasonCode:(unsigned long long)arg1 ;
-(void)setVoiceProfileUpdateScoreMSE:(float)arg1 ;
-(void)setVoiceProfileDiscardedUtteranceCount:(unsigned long long)arg1 ;
-(void)setvoiceProfilePrunedUtteranceCount:(unsigned long long)arg1 ;
-(void)setVoiceProfileRetainedUtteranceCount:(unsigned long long)arg1 ;
-(void)appendVoiceProfileExplicitUtteranceScoreWith:(float)arg1 ;
-(void)appendVoiceProfileImplicitUtteranceScoreWith:(float)arg1 ;
-(void)appendVoiceProfileDiscardedImplicitUtteranceScoreWith:(float)arg1 ;
-(void)appendVoiceProfileFailedExplicitUtteranceScoreWith:(float)arg1 ;
-(void)setVoiceProfileRetrainingFailureReasonCode:(unsigned long long)arg1 ;
-(void)setRetrainingWaitTime:(double)arg1 ;
-(unsigned long long)voiceProfilePruningFailureReasonCode;
-(float)voiceProfileUpdateScoreMSE;
-(unsigned long long)voiceProfileDiscardedUtteranceCount;
-(unsigned long long)voiceProfilePrunedUtteranceCount;
-(void)setVoiceProfilePrunedUtteranceCount:(unsigned long long)arg1 ;
-(unsigned long long)voiceProfileRetainedUtteranceCount;
-(unsigned long long)voiceProfileRetrainingFailureReasonCode;
-(double)retrainingWaitTime;
-(unsigned long long)speakerRecognitionProcessingStatus;
-(double)speakerRecognitionWaitTime;
-(unsigned long long)speakerRecognitionPSRProcessingStatus;
-(unsigned long long)speakerRecognitionSATProcessingStatus;
-(void)setSpeakerRecognitionSATProcessingStatus:(unsigned long long)arg1 ;
@end


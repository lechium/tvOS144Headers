/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:30 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface CSVoiceTriggerStatAggregator : NSObject {

	unsigned long long _numFalseWakeUp;
	unsigned long long _lastAggTimeFalseWakeUp;

}

@property (assign,nonatomic) unsigned long long numFalseWakeUp;                      //@synthesize numFalseWakeUp=_numFalseWakeUp - In the implementation block
@property (assign,nonatomic) unsigned long long lastAggTimeFalseWakeUp;              //@synthesize lastAggTimeFalseWakeUp=_lastAggTimeFalseWakeUp - In the implementation block
+(id)sharedAggregator;
-(id)init;
-(void)logFalseWakeUp:(BOOL)arg1 ;
-(void)logAudioZeroRun:(float)arg1 ;
-(void)logSecondPassResult:(int)arg1 eventInfo:(id)arg2 triggerAPWakeUp:(BOOL)arg3 ;
-(void)_borealisPowerlog:(id)arg1 ;
-(void)powerLogVoiceTriggerStart;
-(void)powerLogVoiceTriggerStop;
-(void)logAOPFirstPassTriggerWakeupLatency:(float)arg1 ;
-(void)logTriggerLengthSampleCountStatistics:(unsigned long long)arg1 withFirstPassDeterministicTriggerLengthSampleCount:(unsigned long long)arg2 ;
-(unsigned long long)numFalseWakeUp;
-(void)setNumFalseWakeUp:(unsigned long long)arg1 ;
-(unsigned long long)lastAggTimeFalseWakeUp;
-(void)setLastAggTimeFalseWakeUp:(unsigned long long)arg1 ;
@end


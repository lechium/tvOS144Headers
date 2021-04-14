/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:28 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString;


@protocol CSEndpointAnalyzerImpl <CSEndpointAnalyzer>
@property (assign,nonatomic,__weak) id<CSEndpointAnalyzerDelegate> delegate; 
@property (assign,nonatomic,__weak) id<CSEndpointAnalyzerImplDelegate> implDelegate; 
@property (nonatomic,readonly) BOOL canProcessCurrentRequest; 
@property (assign,nonatomic) unsigned long long activeChannel; 
@property (nonatomic,readonly) NSString * endpointerModelVersion; 
@property (nonatomic,readonly) double elapsedTimeWithNoSpeech; 
@optional
-(void)processServerEndpointFeatures:(id)arg1;
-(void)updateEndpointerThreshold:(float)arg1;
-(void)updateEndpointerDelayedTrigger:(BOOL)arg1;
-(void)shouldAcceptEagerResultForDuration:(double)arg1 resultsCompletionHandler:(/*^block*/id)arg2;
-(void)logFeaturesWithEvent:(id)arg1 locale:(id)arg2;
-(void)handleVoiceTriggerWithActivationInfo:(id)arg1;
-(NSString *)endpointerModelVersion;
-(double)elapsedTimeWithNoSpeech;

@required
-(id<CSEndpointAnalyzerDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(unsigned long long)activeChannel;
-(void)setActiveChannel:(unsigned long long)arg1;
-(void)resetForNewRequestWithSampleRate:(unsigned long long)arg1 recordContext:(id)arg2 recordSettings:(id)arg3;
-(void)processAudioSamplesAsynchronously:(id)arg1;
-(void)stopEndpointer;
-(void)recordingStoppedForReason:(long long)arg1;
-(double)trailingSilenceDurationAtEndpoint;
-(id<CSEndpointAnalyzerImplDelegate>)implDelegate;
-(void)setImplDelegate:(id)arg1;
-(BOOL)canProcessCurrentRequest;

@end


/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:09 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/AFAudioPowerUpdaterDelegate.h>

@protocol AFUIPowerLevelListenerDelegate;
@class AFAudioPowerUpdater, VSSpeechSynthesizer, NSString;

@interface AFUIPowerLevelListener : NSObject <AFAudioPowerUpdaterDelegate> {

	id<AFUIPowerLevelListenerDelegate> _powerLevelListenerDelegate;
	AFAudioPowerUpdater* _outputAudioPowerUpdater;
	VSSpeechSynthesizer* _synthesizer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithDelegate:(id)arg1 ;
-(long long)_frequency;
-(void)audioPowerUpdaterDidUpdate:(id)arg1 averagePower:(float)arg2 peakPower:(float)arg3 ;
-(void)endListening;
-(void)beginListeningToSpeechSynthesizer:(id)arg1 ;
@end


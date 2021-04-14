/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:36 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libvoiced_tts.dylib/VSSpeechSpeakTask.h>
#import <libobjc.A.dylib/VSSpeechEagerProtocol.h>

@class VSSpeechSpeakTask, NSString;

@interface VSSpeechSynthesisTask : VSSpeechSpeakTask <VSSpeechEagerProtocol> {

	BOOL _readyForEagerTask;
	VSSpeechSpeakTask* _speakTask;

}

@property (nonatomic,retain) VSSpeechSpeakTask * speakTask;              //@synthesize speakTask=_speakTask - In the implementation block
@property (assign,nonatomic) BOOL readyForEagerTask;                     //@synthesize readyForEagerTask=_readyForEagerTask - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)main;
-(BOOL)isSpeaking;
-(id)initWithRequest:(id)arg1 ;
-(VSSpeechSpeakTask *)speakTask;
-(void)synthesize;
-(void)reportTimingInfo;
-(void)setReadyForEagerTask:(BOOL)arg1 ;
-(void)reportInstrumentMetrics;
-(void)reportFinish;
-(void)reportSpeechStart;
-(BOOL)readyForEagerTask;
-(void)setSpeakTask:(VSSpeechSpeakTask *)arg1 ;
@end


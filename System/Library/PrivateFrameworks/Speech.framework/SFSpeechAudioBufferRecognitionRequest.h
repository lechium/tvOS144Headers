/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:18 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Speech.framework/Speech
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Speech/Speech-Structs.h>
#import <Speech/SFSpeechRecognitionRequest.h>

@protocol SFSpeechRecognitionBufferDelegate, OS_dispatch_queue;
@class NSMutableArray, NSObject, AVAudioConverter, AVAudioFormat;

@interface SFSpeechAudioBufferRecognitionRequest : SFSpeechRecognitionRequest {

	id<SFSpeechRecognitionBufferDelegate> _bufferDelegate;
	NSMutableArray* _queuedBuffers;
	NSObject*<OS_dispatch_queue> _queue;
	AVAudioConverter* _converter;
	BOOL _audioEnded;

}

@property (nonatomic,readonly) AVAudioFormat * nativeAudioFormat; 
-(id)init;
-(void)endAudio;
-(void)appendAudioPCMBuffer:(id)arg1 ;
-(id)_startedConnectionWithLanguageCode:(id)arg1 delegate:(id)arg2 taskHint:(long long)arg3 requestIdentifier:(id)arg4 ;
-(void)_appendAudioPCMBuffer:(id)arg1 ;
-(void)_appendAudioSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)_endAudio;
-(AVAudioFormat *)nativeAudioFormat;
-(void)_drainAndClearAudioConverter;
-(void)_convertAndFeedPCMBuffer:(id)arg1 ;
-(void)appendAudioSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
@end


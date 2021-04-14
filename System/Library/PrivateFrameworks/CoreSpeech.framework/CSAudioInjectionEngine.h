/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:30 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue, CSAudioInjectionEngineDelegate, OS_dispatch_source;
#import <CoreSpeech/CoreSpeech-Structs.h>
@class NSObject, CSAudioInjectionFileOption, NSMutableArray, NSUUID;

@interface CSAudioInjectionEngine : NSObject {

	BOOL _isRecording;
	BOOL _didSetScaleFactor;
	float _scaleFactor;
	unsigned long long _audioStreamHandleId;
	NSObject*<OS_dispatch_queue> _queue;
	id<CSAudioInjectionEngineDelegate> _delegate;
	CSAudioInjectionFileOption* _fileOption;
	NSObject*<OS_dispatch_source> _audioFeedTimer;
	double _bufferDuration;
	NSMutableArray* _injectionAudioFileList;
	NSMutableArray* _injectionStartNotifyBlocks;
	NSMutableArray* _injectionCompletionNotifyBlocks;
	NSUUID* _uuid;
	OpaqueAudioConverterRef _deinterleaver;
	AudioBufferList* _pNonInterleavedABL;
	AudioStreamBasicDescription _outASBD;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                              //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic,__weak) id<CSAudioInjectionEngineDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long audioStreamHandleId;                          //@synthesize audioStreamHandleId=_audioStreamHandleId - In the implementation block
@property (nonatomic,retain) CSAudioInjectionFileOption * fileOption;                         //@synthesize fileOption=_fileOption - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> audioFeedTimer;                    //@synthesize audioFeedTimer=_audioFeedTimer - In the implementation block
@property (assign,nonatomic) BOOL isRecording;                                                //@synthesize isRecording=_isRecording - In the implementation block
@property (assign,nonatomic) AudioStreamBasicDescription outASBD;                             //@synthesize outASBD=_outASBD - In the implementation block
@property (assign,nonatomic) double bufferDuration;                                           //@synthesize bufferDuration=_bufferDuration - In the implementation block
@property (nonatomic,retain) NSMutableArray * injectionAudioFileList;                         //@synthesize injectionAudioFileList=_injectionAudioFileList - In the implementation block
@property (nonatomic,retain) NSMutableArray * injectionStartNotifyBlocks;                     //@synthesize injectionStartNotifyBlocks=_injectionStartNotifyBlocks - In the implementation block
@property (nonatomic,retain) NSMutableArray * injectionCompletionNotifyBlocks;                //@synthesize injectionCompletionNotifyBlocks=_injectionCompletionNotifyBlocks - In the implementation block
@property (nonatomic,retain) NSUUID * uuid;                                                   //@synthesize uuid=_uuid - In the implementation block
@property (assign,nonatomic) OpaqueAudioConverterRef deinterleaver;                           //@synthesize deinterleaver=_deinterleaver - In the implementation block
@property (assign,nonatomic) AudioBufferList* pNonInterleavedABL;                             //@synthesize pNonInterleavedABL=_pNonInterleavedABL - In the implementation block
@property (assign,nonatomic) BOOL didSetScaleFactor;                                          //@synthesize didSetScaleFactor=_didSetScaleFactor - In the implementation block
@property (assign,nonatomic) float scaleFactor;                                               //@synthesize scaleFactor=_scaleFactor - In the implementation block
-(void)dealloc;
-(id<CSAudioInjectionEngineDelegate>)delegate;
-(void)setDelegate:(id<CSAudioInjectionEngineDelegate>)arg1 ;
-(void)start;
-(void)stop;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSUUID *)uuid;
-(void)setUuid:(NSUUID *)arg1 ;
-(float)scaleFactor;
-(void)setScaleFactor:(float)arg1 ;
-(BOOL)isRecording;
-(void)setIsRecording:(BOOL)arg1 ;
-(id)initWithStreamHandleId:(unsigned long long)arg1 ;
-(BOOL)isAlwaysOnVoiceTriggerAvailable;
-(void)setAlwaysOnVoiceTriggerEnabled:(BOOL)arg1 ;
-(void)startAudioStreamWithOption:(id)arg1 ;
-(void)stopAudioStream;
-(BOOL)injectAudio:(id)arg1 ;
-(BOOL)injectAudio:(id)arg1 withScaleFactor:(float)arg2 playbackStarted:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(unsigned long long)audioStreamHandleId;
-(BOOL)alwaysOnVoiceTriggerEnabled;
-(void)attachDevice:(id)arg1 ;
-(AudioStreamBasicDescription)outASBD;
-(void)setOutASBD:(AudioStreamBasicDescription)arg1 ;
-(void)_readAudioBufferAndFeed;
-(void)_createDeInterleaverIfNeeded;
-(void)_startAudioFeedingTimer;
-(id)_deinterleaveBufferIfNeeded:(AudioBufferList*)arg1 ;
-(id)_compensateChannelDataIfNeeded:(id)arg1 receivedNumChannels:(unsigned)arg2 ;
-(void)setFileOption:(CSAudioInjectionFileOption *)arg1 ;
-(AudioStreamBasicDescription)_defaultOutASBD;
-(BOOL)injectAudio:(id)arg1 withScaleFactor:(float)arg2 outASBD:(AudioStreamBasicDescription)arg3 playbackStarted:(/*^block*/id)arg4 completion:(/*^block*/id)arg5 ;
-(void)setAudioStreamHandleId:(unsigned long long)arg1 ;
-(CSAudioInjectionFileOption *)fileOption;
-(NSObject*<OS_dispatch_source>)audioFeedTimer;
-(void)setAudioFeedTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(double)bufferDuration;
-(void)setBufferDuration:(double)arg1 ;
-(NSMutableArray *)injectionAudioFileList;
-(void)setInjectionAudioFileList:(NSMutableArray *)arg1 ;
-(NSMutableArray *)injectionStartNotifyBlocks;
-(void)setInjectionStartNotifyBlocks:(NSMutableArray *)arg1 ;
-(NSMutableArray *)injectionCompletionNotifyBlocks;
-(void)setInjectionCompletionNotifyBlocks:(NSMutableArray *)arg1 ;
-(OpaqueAudioConverterRef)deinterleaver;
-(void)setDeinterleaver:(OpaqueAudioConverterRef)arg1 ;
-(AudioBufferList*)pNonInterleavedABL;
-(void)setPNonInterleavedABL:(AudioBufferList*)arg1 ;
-(BOOL)didSetScaleFactor;
-(void)setDidSetScaleFactor:(BOOL)arg1 ;
@end


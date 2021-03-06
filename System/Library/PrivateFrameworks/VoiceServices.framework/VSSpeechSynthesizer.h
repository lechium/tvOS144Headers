/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:37 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VoiceServices/VoiceServices-Structs.h>
#import <libobjc.A.dylib/VSSpeechConnectionDelegate.h>

@protocol OS_dispatch_queue, VSSpeechSynthesizerDelegate;
@class NSString, NSObject, VSSpeechConnection, NSMutableDictionary;

@interface VSSpeechSynthesizer : NSObject <VSSpeechConnectionDelegate> {

	NSString* _clientBundleIdentifier;
	unsigned _audioSessionID;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	VSSpeechConnection* _xpcConnection;
	NSString* _identifier;
	struct {
		unsigned delegateStart : 1;
		unsigned delegateFinish : 1;
		unsigned delegateFinishWithPhonemesSpoken : 1;
		unsigned delegatePause : 1;
		unsigned delegateContinue : 1;
		unsigned delegateWillSpeak : 1;
		unsigned delegateStartWithRequest : 1;
		unsigned delegateFinishWithRequest : 1;
		unsigned delegateFinishWithPhonemesSpokenWithRequest : 1;
		unsigned delegateSuccessWithInstrumentMetrics : 1;
		unsigned delegatePauseWithRequest : 1;
		unsigned delegateContinueWithRequest : 1;
		unsigned delegateWillSpeakWithRequest : 1;
		unsigned willUseInput : 1;
	}  _synthesizerFlags;
	float _rate;
	float _pitch;
	float _volume;
	id<VSSpeechSynthesizerDelegate> _delegate;
	NSString* _voice;
	NSString* _language;
	NSMutableDictionary* _durationRequests;

}

@property (nonatomic,copy) NSString * language;                                            //@synthesize language=_language - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * durationRequests;                       //@synthesize durationRequests=_durationRequests - In the implementation block
@property (assign,nonatomic,__weak) id<VSSpeechSynthesizerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) float rate;                                                   //@synthesize rate=_rate - In the implementation block
@property (assign,nonatomic) float pitch;                                                  //@synthesize pitch=_pitch - In the implementation block
@property (assign,nonatomic) float volume;                                                 //@synthesize volume=_volume - In the implementation block
@property (nonatomic,retain) NSString * voice;                                             //@synthesize voice=_voice - In the implementation block
+(id)sharedInstance;
+(id)errorWithReason:(id)arg1 ;
+(BOOL)playVoicePreviewForLanguageCode:(id)arg1 gender:(long long)arg2 completion:(/*^block*/id)arg3 ;
+(id)validateRequest:(id)arg1 ;
+(id)validatePresynthesizedAudioRequest:(id)arg1 ;
+(id)characterClassCountForUtterance:(id)arg1 language:(id)arg2 ;
+(BOOL)playVoicePreviewForLanguageCode:(id)arg1 gender:(long long)arg2 ;
-(id)init;
-(id<VSSpeechSynthesizerDelegate>)delegate;
-(void)setDelegate:(id<VSSpeechSynthesizerDelegate>)arg1 ;
-(void)_setDelegate:(id)arg1 ;
-(NSString *)voice;
-(void)setVoice:(NSString *)arg1 ;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
-(float)pitch;
-(void)setPitch:(float)arg1 ;
-(void)setRate:(float)arg1 ;
-(float)rate;
-(float)volume;
-(void)setVolume:(float)arg1 ;
-(id)speechString;
-(BOOL)isSpeaking;
-(id)startSpeakingRequest:(id)arg1 ;
-(BOOL)stopSpeakingAtNextBoundary:(long long)arg1 synchronously:(BOOL)arg2 error:(id*)arg3 ;
-(id)initForInputFeedback;
-(void)getVoiceResourceForLanguage:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)connection:(id)arg1 presynthesizedAudioRequest:(id)arg2 didStopAtEnd:(BOOL)arg3 error:(id)arg4 ;
-(id)cachePresynthesizedAudioRequest:(id)arg1 ;
-(id)_stopSpeakingRequestAtNextBoundary:(long long)arg1 synchronously:(BOOL)arg2 ;
-(id)_stopSpeakingPresynthesizedAudioRequestSynchronously:(BOOL)arg1 ;
-(id)_pauseSpeakingRequestAtNextBoundary:(long long)arg1 synchronously:(BOOL)arg2 ;
-(BOOL)isSystemSpeaking;
-(NSMutableDictionary *)durationRequests;
-(void)setLogToFile:(BOOL)arg1 ;
-(void)getLogToFile:(/*^block*/id)arg1 ;
-(id)_continueSpeakingRequest;
-(void)getTTSServerVoicesWithFilter:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)forwardStreamObject:(id)arg1 ;
-(void)cancelDownloads:(/*^block*/id)arg1 ;
-(void)invokeDaemon:(/*^block*/id)arg1 ;
-(void)killDaemon;
-(void)beginAudioPowerUpdateWithReply:(/*^block*/id)arg1 ;
-(void)endAudioPowerUpdate;
-(void)cleanUnusedAssets:(/*^block*/id)arg1 ;
-(void)getLocalVoiceAssetsForLanguage:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)getLocalVoiceResources:(/*^block*/id)arg1 ;
-(void)getVoiceInfoForLanguageCode:(id)arg1 footprint:(long long)arg2 gender:(long long)arg3 type:(long long)arg4 reply:(/*^block*/id)arg5 ;
-(id)availableVoicesForLanguageCode:(id)arg1 ;
-(id)availableFootprintsForVoice:(id)arg1 languageCode:(id)arg2 ;
-(void)connection:(id)arg1 speechRequestDidStart:(id)arg2 ;
-(void)connection:(id)arg1 speechRequestDidPause:(id)arg2 ;
-(void)connection:(id)arg1 speechRequestDidContinue:(id)arg2 ;
-(void)connection:(id)arg1 speechRequest:(id)arg2 didStopAtEnd:(BOOL)arg3 phonemesSpoken:(id)arg4 error:(id)arg5 ;
-(void)connection:(id)arg1 speechRequest:(id)arg2 willSpeakMark:(long long)arg3 inRange:(NSRange)arg4 ;
-(void)connection:(id)arg1 speechRequest:(id)arg2 successWithInstrumentMetrics:(id)arg3 ;
-(void)connection:(id)arg1 speechRequest:(id)arg2 didReceiveTimingInfo:(id)arg3 ;
-(void)connection:(id)arg1 synthesisRequest:(id)arg2 didFinishWithInstrumentMetrics:(id)arg3 error:(id)arg4 ;
-(void)connection:(id)arg1 presynthesizedAudioRequestDidStart:(id)arg2 ;
-(void)connection:(id)arg1 presynthesizedAudioRequest:(id)arg2 successWithInstrumentMetrics:(id)arg3 error:(id)arg4 ;
-(void)connection:(id)arg1 invalidatedWithError:(id)arg2 ;
-(id)prewarmIfNeededWithRequest:(id)arg1 ;
-(BOOL)queryPhaticCapability:(id)arg1 ;
-(id)startSynthesizingRequest:(id)arg1 ;
-(id)startSpeakingPresynthesizedAudioRequest:(id)arg1 ;
-(BOOL)stopSpeakingPresynthesizedAudioSynchronously:(BOOL)arg1 error:(id*)arg2 ;
-(BOOL)pauseSpeakingAtNextBoundary:(long long)arg1 synchronously:(BOOL)arg2 error:(id*)arg3 ;
-(float)minimumRate;
-(float)maximumRate;
-(double)estimateDurationOfRequest:(id)arg1 ;
-(void)estimateDurationOfRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setMaintainPersistentConnection:(BOOL)arg1 ;
-(void)setMaintainInactivePersistentConnection:(BOOL)arg1 ;
-(void)useSharedAudioSession:(BOOL)arg1 ;
-(void)useSpecificAudioSession:(unsigned)arg1 ;
-(BOOL)continueSpeakingWithError:(id*)arg1 ;
-(void)getLocalVoiceAssets:(/*^block*/id)arg1 ;
-(void)setAutoDownloadedVoiceAssets:(id)arg1 ;
-(void)triggerCellularDownloadedVoiceAssets:(id)arg1 ;
-(void)getAutoDownloadedVoiceAssets:(/*^block*/id)arg1 ;
-(id)availableLanguageCodes;
-(void)setDurationRequests:(NSMutableDictionary *)arg1 ;
@end


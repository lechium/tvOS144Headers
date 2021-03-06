/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:37 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSOperation.h>

@protocol VSDeviceTTSCoreDelegate;
@class VSSpeechRequest, VSInstrumentMetrics, NSError, VSAudioData, VSStreamAudioData, VSSpeechEngine, VSCachingService, VSVoiceAssetSelection, VSVoiceResourceAsset, VSVoiceBooster;

@interface VSDeviceTTSCore : NSOperation {

	VSSpeechRequest* _request;
	id<VSDeviceTTSCoreDelegate> _delegate;
	VSInstrumentMetrics* _instrumentMetrics;
	NSError* _error;
	VSAudioData* _compressedAudio;
	VSStreamAudioData* _streamAudio;
	VSSpeechEngine* _engine;
	VSCachingService* _cachingService;
	VSVoiceAssetSelection* _selectedVoice;
	VSVoiceResourceAsset* _selectedVoiceResource;
	VSVoiceBooster* _voiceBooster;

}

@property (nonatomic,retain) VSCachingService * cachingService;                           //@synthesize cachingService=_cachingService - In the implementation block
@property (nonatomic,retain) VSVoiceAssetSelection * selectedVoice;                       //@synthesize selectedVoice=_selectedVoice - In the implementation block
@property (nonatomic,retain) VSVoiceResourceAsset * selectedVoiceResource;                //@synthesize selectedVoiceResource=_selectedVoiceResource - In the implementation block
@property (nonatomic,retain) VSVoiceBooster * voiceBooster;                               //@synthesize voiceBooster=_voiceBooster - In the implementation block
@property (nonatomic,readonly) VSSpeechRequest * request;                                 //@synthesize request=_request - In the implementation block
@property (assign,nonatomic,__weak) id<VSDeviceTTSCoreDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) VSInstrumentMetrics * instrumentMetrics;              //@synthesize instrumentMetrics=_instrumentMetrics - In the implementation block
@property (nonatomic,retain) NSError * error;                                             //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) VSAudioData * compressedAudio;                             //@synthesize compressedAudio=_compressedAudio - In the implementation block
@property (nonatomic,readonly) VSStreamAudioData * streamAudio;                           //@synthesize streamAudio=_streamAudio - In the implementation block
@property (nonatomic,retain) VSSpeechEngine * engine;                                     //@synthesize engine=_engine - In the implementation block
-(id<VSDeviceTTSCoreDelegate>)delegate;
-(void)setDelegate:(id<VSDeviceTTSCoreDelegate>)arg1 ;
-(NSError *)error;
-(VSSpeechRequest *)request;
-(void)cancel;
-(void)setError:(NSError *)arg1 ;
-(void)main;
-(VSSpeechEngine *)engine;
-(id)initWithRequest:(id)arg1 ;
-(void)setEngine:(VSSpeechEngine *)arg1 ;
-(void)setInstrumentMetrics:(VSInstrumentMetrics *)arg1 ;
-(VSInstrumentMetrics *)instrumentMetrics;
-(VSCachingService *)cachingService;
-(VSStreamAudioData *)streamAudio;
-(id)prepareForSynthesis;
-(VSVoiceBooster *)voiceBooster;
-(id)taskHash;
-(VSVoiceAssetSelection *)selectedVoice;
-(VSVoiceResourceAsset *)selectedVoiceResource;
-(VSAudioData *)compressedAudio;
-(void)setVoiceBooster:(VSVoiceBooster *)arg1 ;
-(void)setCachingService:(VSCachingService *)arg1 ;
-(id)voiceSelectionWithRequest:(id)arg1 error:(id*)arg2 ;
-(id)getCacheForHash:(id)arg1 ;
-(void)reportWordTimingInfo:(id)arg1 ;
-(void)reportAudio:(id)arg1 ;
-(void)adjustWordTimingInfo:(id)arg1 ;
-(id)voiceSelection_noRetry_WithRequest:(id)arg1 error:(id*)arg2 ;
-(void)setSelectedVoice:(VSVoiceAssetSelection *)arg1 ;
-(void)setSelectedVoiceResource:(VSVoiceResourceAsset *)arg1 ;
@end


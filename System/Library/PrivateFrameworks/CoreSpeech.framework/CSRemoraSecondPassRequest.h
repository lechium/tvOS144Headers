/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:27 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, CSVoiceTriggerSecondPass, CSAudioStreamHolding, CSAudioProvider;

@interface CSRemoraSecondPassRequest : NSObject {

	BOOL _isSecondPassRunning;
	NSString* _firstPassDeviceID;
	CSVoiceTriggerSecondPass* _voiceTriggerSecondPass;
	CSAudioStreamHolding* _audioStreamHolding;
	CSAudioProvider* _audioProvider;

}

@property (nonatomic,retain) NSString * firstPassDeviceID;                                   //@synthesize firstPassDeviceID=_firstPassDeviceID - In the implementation block
@property (nonatomic,retain) CSVoiceTriggerSecondPass * voiceTriggerSecondPass;              //@synthesize voiceTriggerSecondPass=_voiceTriggerSecondPass - In the implementation block
@property (assign,nonatomic) BOOL isSecondPassRunning;                                       //@synthesize isSecondPassRunning=_isSecondPassRunning - In the implementation block
@property (nonatomic,retain) CSAudioStreamHolding * audioStreamHolding;                      //@synthesize audioStreamHolding=_audioStreamHolding - In the implementation block
@property (nonatomic,retain) CSAudioProvider * audioProvider;                                //@synthesize audioProvider=_audioProvider - In the implementation block
-(void)dealloc;
-(void)start;
-(void)reset;
-(id)initWithDeviceID:(id)arg1 ;
-(void)setAsset:(id)arg1 ;
-(CSAudioProvider *)audioProvider;
-(void)holdAudioStreamWithTimeout:(double)arg1 ;
-(void)cancelAudioStreamHold;
-(NSString *)firstPassDeviceID;
-(void)setFirstPassDeviceID:(NSString *)arg1 ;
-(CSVoiceTriggerSecondPass *)voiceTriggerSecondPass;
-(void)setVoiceTriggerSecondPass:(CSVoiceTriggerSecondPass *)arg1 ;
-(BOOL)isSecondPassRunning;
-(void)setIsSecondPassRunning:(BOOL)arg1 ;
-(CSAudioStreamHolding *)audioStreamHolding;
-(void)setAudioStreamHolding:(CSAudioStreamHolding *)arg1 ;
-(void)setAudioProvider:(CSAudioProvider *)arg1 ;
@end


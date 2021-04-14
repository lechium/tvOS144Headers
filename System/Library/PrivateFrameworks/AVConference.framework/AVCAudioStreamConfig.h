/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:15 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface AVCAudioStreamConfig : NSObject {

	long long _codecType;
	BOOL _cnEnabled;
	unsigned long long _cnPayloadType;
	unsigned long long _dtmfPayloadType;
	unsigned long long _dtmfTimestampRate;
	unsigned long long _ptime;
	unsigned long long _maxPtime;
	unsigned long long _channelAwareOffset;
	long long _audioStreamMode;
	unsigned _codecRateModeMask;
	long long _preferredCodecRateMode;
	BOOL _octetAligned;
	BOOL _headerFullOnly;
	BOOL _dtxEnabled;
	BOOL _latencySensitiveMode;
	BOOL _enableMaxBitrateOnNoChangeCMR;
	unsigned long long _numRedundantPayloads;
	unsigned long long _txRedPayloadType;
	unsigned long long _rxRedPayloadType;
	float _volume;

}

@property (assign,nonatomic) long long audioStreamMode;                                            //@synthesize audioStreamMode=_audioStreamMode - In the implementation block
@property (assign,nonatomic) long long codecType;                                                  //@synthesize codecType=_codecType - In the implementation block
@property (assign,getter=isCNEnabled,nonatomic) BOOL cnEnabled;                                    //@synthesize cnEnabled=_cnEnabled - In the implementation block
@property (assign,nonatomic) unsigned long long cnPayloadType;                                     //@synthesize cnPayloadType=_cnPayloadType - In the implementation block
@property (assign,nonatomic) unsigned long long dtmfPayloadType;                                   //@synthesize dtmfPayloadType=_dtmfPayloadType - In the implementation block
@property (assign,nonatomic) unsigned long long dtmfTimestampRate;                                 //@synthesize dtmfTimestampRate=_dtmfTimestampRate - In the implementation block
@property (assign,nonatomic) unsigned long long ptime;                                             //@synthesize ptime=_ptime - In the implementation block
@property (assign,nonatomic) unsigned long long maxPtime;                                          //@synthesize maxPtime=_maxPtime - In the implementation block
@property (assign,nonatomic) float volume;                                                         //@synthesize volume=_volume - In the implementation block
@property (assign,nonatomic) unsigned long long channelAwareOffset;                                //@synthesize channelAwareOffset=_channelAwareOffset - In the implementation block
@property (assign,getter=isOctectAligned,nonatomic) BOOL octetAligned;                             //@synthesize octetAligned=_octetAligned - In the implementation block
@property (assign,getter=isHeaderFullOnly,nonatomic) BOOL headerFullOnly;                          //@synthesize headerFullOnly=_headerFullOnly - In the implementation block
@property (assign,getter=isDTXEnabled,nonatomic) BOOL dtxEnabled;                                  //@synthesize dtxEnabled=_dtxEnabled - In the implementation block
@property (assign,nonatomic) long long preferredCodecRateMode;                                     //@synthesize preferredCodecRateMode=_preferredCodecRateMode - In the implementation block
@property (assign,nonatomic) unsigned codecRateModeMask;                                           //@synthesize codecRateModeMask=_codecRateModeMask - In the implementation block
@property (assign,getter=isLatencySensitiveMode,nonatomic) BOOL latencySensitiveMode;              //@synthesize latencySensitiveMode=_latencySensitiveMode - In the implementation block
@property (assign,nonatomic) BOOL enableMaxBitrateOnNoChangeCMR;                                   //@synthesize enableMaxBitrateOnNoChangeCMR=_enableMaxBitrateOnNoChangeCMR - In the implementation block
@property (assign,nonatomic) unsigned long long numRedundantPayloads;                              //@synthesize numRedundantPayloads=_numRedundantPayloads - In the implementation block
@property (assign,nonatomic) unsigned long long txRedPayloadType;                                  //@synthesize txRedPayloadType=_txRedPayloadType - In the implementation block
@property (assign,nonatomic) unsigned long long rxRedPayloadType;                                  //@synthesize rxRedPayloadType=_rxRedPayloadType - In the implementation block
+(long long)clientCodecTypeWithCodecType:(long long)arg1 ;
+(long long)clientStreamModeWithStreamMode:(long long)arg1 ;
+(unsigned)clientCodecRateMaskForCodecRateMode:(unsigned)arg1 ;
+(long long)clientCodecRateModeForCodecRateMode:(int)arg1 ;
+(long long)streamModeWithClientStreamMode:(long long)arg1 ;
+(unsigned)codecRateMaskForClientCodecRateMode:(unsigned)arg1 ;
+(int)codecRateModeForClientCodecRateMode:(long long)arg1 ;
+(long long)codecTypeWithClientCodecType:(long long)arg1 ;
-(id)init;
-(BOOL)isValid;
-(id)dictionary;
-(float)volume;
-(void)setVolume:(float)arg1 ;
-(long long)codecType;
-(void)setCodecType:(long long)arg1 ;
-(BOOL)isDTXEnabled;
-(void)setDtxEnabled:(BOOL)arg1 ;
-(void)setOctetAligned:(BOOL)arg1 ;
-(unsigned long long)numRedundantPayloads;
-(unsigned long long)ptime;
-(BOOL)enableMaxBitrateOnNoChangeCMR;
-(long long)audioStreamMode;
-(void)setNumRedundantPayloads:(unsigned long long)arg1 ;
-(void)setAudioStreamMode:(long long)arg1 ;
-(void)setPtime:(unsigned long long)arg1 ;
-(unsigned long long)maxPtime;
-(void)setMaxPtime:(unsigned long long)arg1 ;
-(void)setEnableMaxBitrateOnNoChangeCMR:(BOOL)arg1 ;
-(void)setUpWithDictionary:(id)arg1 ;
-(BOOL)isDTMFValid;
-(BOOL)isCNValid;
-(BOOL)isRedValid;
-(unsigned long long)dtmfPayloadType;
-(BOOL)isCNEnabled;
-(unsigned long long)cnPayloadType;
-(unsigned long long)txRedPayloadType;
-(unsigned long long)rxRedPayloadType;
-(void)setCnEnabled:(BOOL)arg1 ;
-(void)setCnPayloadType:(unsigned long long)arg1 ;
-(void)setDtmfPayloadType:(unsigned long long)arg1 ;
-(unsigned long long)dtmfTimestampRate;
-(void)setDtmfTimestampRate:(unsigned long long)arg1 ;
-(unsigned long long)channelAwareOffset;
-(void)setChannelAwareOffset:(unsigned long long)arg1 ;
-(BOOL)isOctectAligned;
-(BOOL)isHeaderFullOnly;
-(void)setHeaderFullOnly:(BOOL)arg1 ;
-(unsigned)codecRateModeMask;
-(void)setCodecRateModeMask:(unsigned)arg1 ;
-(long long)preferredCodecRateMode;
-(void)setPreferredCodecRateMode:(long long)arg1 ;
-(BOOL)isLatencySensitiveMode;
-(void)setLatencySensitiveMode:(BOOL)arg1 ;
-(void)setTxRedPayloadType:(unsigned long long)arg1 ;
-(void)setRxRedPayloadType:(unsigned long long)arg1 ;
@end


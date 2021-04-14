/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:30 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary, NSData;

@interface CSAdBlockerAssetDecoderV2 : NSObject {

	float _maxFingerprintBufferSize;
	NSMutableDictionary* _shouldResetAdsDictionary;
	NSData* _payloadData;

}

@property (nonatomic,retain) NSData * payloadData;                                          //@synthesize payloadData=_payloadData - In the implementation block
@property (nonatomic,readonly) float maxFingerprintBufferSize;                              //@synthesize maxFingerprintBufferSize=_maxFingerprintBufferSize - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * shouldResetAdsDictionary;              //@synthesize shouldResetAdsDictionary=_shouldResetAdsDictionary - In the implementation block
-(id)initWithData:(id)arg1 ;
-(void)setPayloadData:(NSData *)arg1 ;
-(NSData *)payloadData;
-(id)decodeAsset;
-(float)maxFingerprintBufferSize;
-(NSMutableDictionary *)shouldResetAdsDictionary;
@end


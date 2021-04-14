/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:16 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NetworkExtension/NEIKEv2Payload.h>

@class NSData, NEIKEv2SPI;

@interface NEIKEv2NotifyPayload : NEIKEv2Payload {

	unsigned long long _notifyType;
	NSData* _data;
	NEIKEv2SPI* _spi;

}

@property (readonly) BOOL isError; 
@property (readonly) BOOL isPrivateError; 
@property (assign) unsigned long long notifyType;              //@synthesize notifyType=_notifyType - In the implementation block
@property (retain) NSData * data;                              //@synthesize data=_data - In the implementation block
@property (retain) NEIKEv2SPI * spi;                           //@synthesize spi=_spi - In the implementation block
+(id)copyTypeDescription;
+(id)createNotifyPayloadType:(unsigned long long)arg1 spi:(id)arg2 ;
+(id)createNotifyPayloadType:(unsigned long long)arg1 ;
+(id)createNotifyPayloadType:(unsigned long long)arg1 data:(id)arg2 ;
-(id)description;
-(NSData *)data;
-(unsigned long long)type;
-(void)setData:(NSData *)arg1 ;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(NEIKEv2SPI *)spi;
-(void)setSpi:(NEIKEv2SPI *)arg1 ;
-(id)copyTypeDescription;
-(BOOL)isError;
-(id)copyError;
-(unsigned long long)notifyType;
-(id)copyAdditionalAddress;
-(void)setNotifyType:(unsigned long long)arg1 ;
-(BOOL)isPrivateError;
-(BOOL)hasRequiredFields;
-(BOOL)generatePayloadData;
-(BOOL)parsePayloadData;
-(id)copyServerRedirectNonce;
-(id)copyServerRedirectEndpoint;
@end


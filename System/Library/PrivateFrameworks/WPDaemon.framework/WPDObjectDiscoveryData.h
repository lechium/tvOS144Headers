/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:40 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/WPDaemon.framework/WPDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableData;

@interface WPDObjectDiscoveryData : NSObject {

	long long _length;
	NSMutableData* _address;
	NSMutableData* _payload;

}

@property (nonatomic,retain) NSMutableData * address;              //@synthesize address=_address - In the implementation block
@property (nonatomic,retain) NSMutableData * payload;              //@synthesize payload=_payload - In the implementation block
@property (assign,nonatomic) long long length;                     //@synthesize length=_length - In the implementation block
+(unsigned char)applyMaskToAddress:(id)arg1 ;
+(id)addressFromNearbyToken:(id)arg1 ;
+(id)objectDiscoveryReportFromAdvReport:(id)arg1 ;
+(id)addressesFromNearbyTokens:(id)arg1 ;
-(id)description;
-(id)init;
-(long long)length;
-(void)setLength:(long long)arg1 ;
-(NSMutableData *)address;
-(NSMutableData *)payload;
-(void)setAddress:(NSMutableData *)arg1 ;
-(void)setPayload:(NSMutableData *)arg1 ;
-(void)wipeout;
-(id)updateWithKey:(id)arg1 Status:(unsigned char)arg2 Reserved:(id)arg3 ;
@end


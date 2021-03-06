/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:37 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSData, CATAddress;

@interface CATEndPoint : NSObject {

	unsigned _port;
	NSData* _data;
	CATAddress* _address;

}

@property (nonatomic,readonly) NSData * data;                     //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) CATAddress * address;              //@synthesize address=_address - In the implementation block
@property (nonatomic,readonly) unsigned port;                     //@synthesize port=_port - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(NSData *)data;
-(id)initWithData:(id)arg1 ;
-(unsigned)port;
-(CATAddress *)address;
-(id)initWithAddress:(id)arg1 port:(unsigned)arg2 ;
-(BOOL)isEqualToEndPoint:(id)arg1 ;
@end


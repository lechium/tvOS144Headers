/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:19:54 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSData, NSString;

@interface NSURLSessionWebSocketMessage : NSObject {

	id content;
	long long _type;

}

@property (readonly) long long type;                      //@synthesize type=_type - In the implementation block
@property (copy,readonly) NSData * data; 
@property (copy,readonly) NSString * string; 
-(NSString *)string;
-(NSData *)data;
-(id)initWithData:(id)arg1 ;
-(id)initWithString:(id)arg1 ;
-(long long)type;
@end


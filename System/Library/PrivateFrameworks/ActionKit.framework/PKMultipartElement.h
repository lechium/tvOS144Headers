/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:06 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSData, NSInputStream;

@interface PKMultipartElement : NSObject {

	NSData* _headers;
	NSInputStream* _body;
	unsigned long long _headersLength;
	unsigned long long _bodyLength;
	unsigned long long _length;
	unsigned long long _delivered;

}

@property (nonatomic,retain) NSData * headers;                              //@synthesize headers=_headers - In the implementation block
@property (nonatomic,retain) NSInputStream * body;                          //@synthesize body=_body - In the implementation block
@property (assign,nonatomic) unsigned long long headersLength;              //@synthesize headersLength=_headersLength - In the implementation block
@property (assign,nonatomic) unsigned long long bodyLength;                 //@synthesize bodyLength=_bodyLength - In the implementation block
@property (assign,nonatomic) unsigned long long length;                     //@synthesize length=_length - In the implementation block
@property (assign,nonatomic) unsigned long long delivered;                  //@synthesize delivered=_delivered - In the implementation block
-(unsigned long long)length;
-(void)setLength:(unsigned long long)arg1 ;
-(unsigned long long)read:(char*)arg1 maxLength:(unsigned long long)arg2 ;
-(void)setBody:(NSInputStream *)arg1 ;
-(NSInputStream *)body;
-(NSData *)headers;
-(void)setHeaders:(NSData *)arg1 ;
-(void)appendNewLine:(id)arg1 ;
-(void)setDelivered:(unsigned long long)arg1 ;
-(unsigned long long)bodyLength;
-(void)updateLength;
-(id)initWithName:(id)arg1 boundary:(id)arg2 string:(id)arg3 ;
-(id)initWithName:(id)arg1 boundary:(id)arg2 data:(id)arg3 contentType:(id)arg4 ;
-(id)initWithName:(id)arg1 boundary:(id)arg2 data:(id)arg3 contentType:(id)arg4 filename:(id)arg5 ;
-(id)initWithName:(id)arg1 filename:(id)arg2 boundary:(id)arg3 path:(id)arg4 ;
-(id)initWithName:(id)arg1 filename:(id)arg2 boundary:(id)arg3 path:(id)arg4 contentType:(id)arg5 ;
-(id)initWithName:(id)arg1 filename:(id)arg2 boundary:(id)arg3 stream:(id)arg4 streamLength:(unsigned long long)arg5 ;
-(id)initWithHeaders:(id)arg1 string:(id)arg2 boundary:(id)arg3 ;
-(id)initWithHeaders:(id)arg1 path:(id)arg2 boundary:(id)arg3 ;
-(id)makeHeadersDataFromHeadersDict:(id)arg1 boundary:(id)arg2 ;
-(unsigned long long)headersLength;
-(void)setHeadersLength:(unsigned long long)arg1 ;
-(void)setBodyLength:(unsigned long long)arg1 ;
-(unsigned long long)delivered;
@end


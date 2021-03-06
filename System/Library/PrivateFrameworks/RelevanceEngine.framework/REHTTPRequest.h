/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:26 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <RelevanceEngine/RelevanceEngine-Structs.h>
@class NSInputStream, NSMutableData, REHTTPConnection, NSString, NSURL, NSDictionary, NSData;

@interface REHTTPRequest : NSObject {

	CFHTTPServerRequestRef _request;
	NSInputStream* _stream;
	NSMutableData* _bodyData;
	REHTTPConnection* _connection;
	NSString* _method;
	NSURL* _url;
	NSDictionary* _headerFields;

}

@property (nonatomic,readonly) CFHTTPServerRequestRef request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) NSInputStream * stream; 
@property (nonatomic,readonly) REHTTPConnection * connection;               //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) NSString * method;                           //@synthesize method=_method - In the implementation block
@property (nonatomic,readonly) NSURL * url;                                 //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) NSDictionary * headerFields;                 //@synthesize headerFields=_headerFields - In the implementation block
@property (nonatomic,readonly) NSData * bodyData; 
-(void)dealloc;
-(CFHTTPServerRequestRef)request;
-(NSData *)bodyData;
-(NSURL *)url;
-(NSString *)method;
-(void)appendData:(id)arg1 ;
-(REHTTPConnection *)connection;
-(NSInputStream *)stream;
-(NSDictionary *)headerFields;
-(id)responseWithStatusCode:(long long)arg1 ;
-(id)initWithConnect:(id)arg1 request:(CFHTTPServerRequestRef)arg2 ;
@end


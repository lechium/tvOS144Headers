/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:24 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVHomeSharingKit/TVHKAsynchronousOperation.h>

@class SSURLConnectionResponse, NSError, SSURLConnectionRequest;

@interface TVHKStoreConnectionRequestOperation : TVHKAsynchronousOperation {

	SSURLConnectionResponse* _response;
	NSError* _error;
	SSURLConnectionRequest* _request;

}

@property (nonatomic,readonly) SSURLConnectionRequest * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) SSURLConnectionResponse * response;              //@synthesize response=_response - In the implementation block
@property (nonatomic,retain) NSError * error;                                 //@synthesize error=_error - In the implementation block
+(id)new;
-(id)init;
-(NSError *)error;
-(SSURLConnectionRequest *)request;
-(void)cancel;
-(void)setResponse:(SSURLConnectionResponse *)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(SSURLConnectionResponse *)response;
-(id)initWithRequest:(id)arg1 ;
-(void)executionDidBegin;
@end


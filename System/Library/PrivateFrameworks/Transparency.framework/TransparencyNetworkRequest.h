/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:42 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSURL, NSData;

@interface TransparencyNetworkRequest : NSObject {

	BOOL _authenticated;
	BOOL _isGET;
	NSURL* _url;
	NSData* _data;
	double _timeout;

}

@property (retain) NSURL * url;                     //@synthesize url=_url - In the implementation block
@property (retain) NSData * data;                   //@synthesize data=_data - In the implementation block
@property (assign) double timeout;                  //@synthesize timeout=_timeout - In the implementation block
@property (assign) BOOL isGET;                      //@synthesize isGET=_isGET - In the implementation block
@property (assign) BOOL authenticated;              //@synthesize authenticated=_authenticated - In the implementation block
-(NSData *)data;
-(void)setTimeout:(double)arg1 ;
-(void)setUrl:(NSURL *)arg1 ;
-(NSURL *)url;
-(void)setData:(NSData *)arg1 ;
-(double)timeout;
-(void)setAuthenticated:(BOOL)arg1 ;
-(BOOL)authenticated;
-(id)initWithRequest:(id)arg1 ;
-(id)initWithURL:(id)arg1 data:(id)arg2 timeout:(double)arg3 isGET:(BOOL)arg4 ;
-(void)setIsGET:(BOOL)arg1 ;
-(id)initGETWithURL:(id)arg1 ;
-(id)initPOSTWithURL:(id)arg1 data:(id)arg2 ;
-(BOOL)isGET;
-(id)createGETRequestForURL:(id)arg1 timeout:(double)arg2 error:(id*)arg3 ;
-(id)createPOSTRequestForURL:(id)arg1 timeout:(double)arg2 contents:(id)arg3 error:(id*)arg4 ;
-(id)copyRequest:(id*)arg1 ;
@end


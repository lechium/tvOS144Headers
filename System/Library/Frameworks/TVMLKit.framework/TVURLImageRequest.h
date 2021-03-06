/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:29 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol TVImageDecrypter;
@class NSURL, NSDictionary, NSString;

@interface TVURLImageRequest : NSObject {

	NSURL* _url;
	NSDictionary* _headers;
	id<TVImageDecrypter> _decrypter;
	NSString* _identifier;

}

@property (nonatomic,retain) NSURL * url;                                 //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) NSDictionary * headers;                      //@synthesize headers=_headers - In the implementation block
@property (nonatomic,retain) NSString * identifier;                       //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) id<TVImageDecrypter> decrypter;              //@synthesize decrypter=_decrypter - In the implementation block
-(NSString *)identifier;
-(void)setUrl:(NSURL *)arg1 ;
-(NSURL *)url;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSDictionary *)headers;
-(void)setHeaders:(NSDictionary *)arg1 ;
-(id<TVImageDecrypter>)decrypter;
-(id)initWithURL:(id)arg1 headers:(id)arg2 identifier:(id)arg3 decrypter:(id)arg4 ;
-(id)initWithURL:(id)arg1 headers:(id)arg2 decrypter:(id)arg3 ;
-(void)setDecrypter:(id<TVImageDecrypter>)arg1 ;
@end


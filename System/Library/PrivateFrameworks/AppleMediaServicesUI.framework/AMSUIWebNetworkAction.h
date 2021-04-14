/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:31 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/AMSUIWebActionRunnable.h>

@class NSString, ACAccount, NSDictionary, NSURL, AMSUIWebClientContext;

@interface AMSUIWebNetworkAction : NSObject <AMSUIWebActionRunnable> {

	BOOL _includeiCloudTokens;
	NSString* _body;
	ACAccount* _account;
	NSDictionary* _headers;
	NSString* _method;
	NSURL* _URL;
	AMSUIWebClientContext* _context;

}

@property (nonatomic,retain) AMSUIWebClientContext * context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSString * body;                              //@synthesize body=_body - In the implementation block
@property (nonatomic,retain) ACAccount * account;                          //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) NSDictionary * headers;                       //@synthesize headers=_headers - In the implementation block
@property (assign,nonatomic) BOOL includeiCloudTokens;                     //@synthesize includeiCloudTokens=_includeiCloudTokens - In the implementation block
@property (nonatomic,retain) NSString * method;                            //@synthesize method=_method - In the implementation block
@property (nonatomic,retain) NSURL * URL;                                  //@synthesize URL=_URL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
-(NSString *)method;
-(AMSUIWebClientContext *)context;
-(void)setContext:(AMSUIWebClientContext *)arg1 ;
-(void)setBody:(NSString *)arg1 ;
-(NSString *)body;
-(void)setMethod:(NSString *)arg1 ;
-(NSDictionary *)headers;
-(void)setHeaders:(NSDictionary *)arg1 ;
-(ACAccount *)account;
-(void)setAccount:(ACAccount *)arg1 ;
-(id)initWithJSObject:(id)arg1 context:(id)arg2 ;
-(id)runAction;
-(BOOL)includeiCloudTokens;
-(void)setIncludeiCloudTokens:(BOOL)arg1 ;
@end


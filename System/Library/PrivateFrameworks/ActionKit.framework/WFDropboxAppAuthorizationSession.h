/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:04 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/WFOAuth2AuthorizationSession.h>

@class NSArray, NSURL, NSString;

@interface WFDropboxAppAuthorizationSession : NSObject <WFOAuth2AuthorizationSession> {

	NSArray* _authorizationURLs;
	NSURL* _successURI;
	NSURL* _cancelURI;
	NSString* _clientID;
	NSString* _state;
	/*^block*/id _completionHandler;

}

@property (nonatomic,readonly) NSString * clientID;                      //@synthesize clientID=_clientID - In the implementation block
@property (nonatomic,readonly) NSString * state;                         //@synthesize state=_state - In the implementation block
@property (nonatomic,copy) id completionHandler;                         //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,readonly) NSArray * authorizationURLs;              //@synthesize authorizationURLs=_authorizationURLs - In the implementation block
@property (nonatomic,readonly) NSURL * successURI;                       //@synthesize successURI=_successURI - In the implementation block
@property (nonatomic,readonly) NSURL * cancelURI;                        //@synthesize cancelURI=_cancelURI - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)state;
-(NSString *)clientID;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(BOOL)resumeSessionWithURL:(id)arg1 ;
-(id)initWithClientID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSArray *)authorizationURLs;
-(NSURL *)successURI;
-(NSURL *)cancelURI;
@end


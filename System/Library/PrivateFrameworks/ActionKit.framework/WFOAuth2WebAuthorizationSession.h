/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:11 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/WFOAuth2AuthorizationSession.h>

@class NSURL, WFOAuth2SessionManager, NSString;

@interface WFOAuth2WebAuthorizationSession : NSObject <WFOAuth2AuthorizationSession> {

	NSURL* _authorizationURL;
	NSURL* _redirectURI;
	WFOAuth2SessionManager* _sessionManager;
	NSString* _responseType;
	NSString* _state;
	/*^block*/id _completionHandler;
	NSString* _responseKey;

}

@property (nonatomic,readonly) WFOAuth2SessionManager * sessionManager;              //@synthesize sessionManager=_sessionManager - In the implementation block
@property (nonatomic,copy,readonly) NSString * responseType;                         //@synthesize responseType=_responseType - In the implementation block
@property (nonatomic,readonly) NSString * state;                                     //@synthesize state=_state - In the implementation block
@property (nonatomic,copy) id completionHandler;                                     //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,readonly) NSString * responseKey;                               //@synthesize responseKey=_responseKey - In the implementation block
@property (nonatomic,copy,readonly) NSURL * authorizationURL;                        //@synthesize authorizationURL=_authorizationURL - In the implementation block
@property (nonatomic,copy,readonly) NSURL * redirectURI;                             //@synthesize redirectURI=_redirectURI - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)state;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(NSString *)responseType;
-(WFOAuth2SessionManager *)sessionManager;
-(NSURL *)authorizationURL;
-(BOOL)resumeSessionWithURL:(id)arg1 ;
-(NSURL *)redirectURI;
-(id)initWithSessionManager:(id)arg1 authorizationURL:(id)arg2 responseType:(id)arg3 redirectURI:(id)arg4 specifyRedirectURI:(BOOL)arg5 completionHandler:(/*^block*/id)arg6 ;
-(BOOL)resumeSessionWithResponseObject:(id)arg1 ;
-(NSString *)responseKey;
@end


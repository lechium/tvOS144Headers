/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:09 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class AKAuthorizationClientImpl, AKAuthorizationDaemonConnection;

@interface AKAuthorizationController : NSObject {

	AKAuthorizationClientImpl* _clientImpl;
	AKAuthorizationDaemonConnection* _daemonConnection;

}

@property (retain) id<AKAuthorizationUIProvider> uiProvider; 
+(id)sharedController;
+(id)appleOwnedDomains;
+(BOOL)canPerformAuthorization;
+(BOOL)shouldProcessURL:(id)arg1 ;
+(BOOL)isURLFromAppleOwnedDomain:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)initWithDaemonXPCEndpoint:(id)arg1 ;
-(void)setUiProvider:(id<AKAuthorizationUIProvider>)arg1 ;
-(void)performAuthorizationWithContext:(id)arg1 withUserProvidedInformation:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)getCredentialStateForRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getCredentialStateForClientID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getPresentationContextForRequestContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchAppleIDAuthorizeHTMLResponseTemplateWithCompletion:(/*^block*/id)arg1 ;
-(void)continueFetchingIconForRequestContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)establishConnectionWithNotificationHandlerEndpoint:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)establishConnectionWithStateBroadcastHandlerEndpoint:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id<AKAuthorizationUIProvider>)uiProvider;
-(BOOL)_shouldOverrideProxiedBundleIDForContext:(id)arg1 ;
-(id)_appleIDAuthorizationURLs;
-(id)_appleOwnedDomains;
-(void)performAuthorizationWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)revokeAuthorizationWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)primaryApplicationInformationForWebServiceWithInfo:(id)arg1 error:(id*)arg2 ;
@end


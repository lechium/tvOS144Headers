/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:47 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol SSDownloadHandlerDelegate, OS_dispatch_queue;
@class SSXPCConnection, NSObject, NSArray;

@interface SSDownloadHandler : NSObject {

	SSXPCConnection* _controlConnection;
	id<SSDownloadHandlerDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSArray* _downloadPhasesToIgnore;
	long long _handlerID;
	SSXPCConnection* _observerConnection;
	BOOL _sessionsNeedPowerAssertion;
	BOOL _sessionsShouldBlockOtherDownloads;

}

@property (readonly) long long handlerIdentifier; 
@property (assign) id<SSDownloadHandlerDelegate> delegate; 
@property (copy) NSArray * downloadPhasesToIgnore; 
@property (assign) BOOL sessionsNeedPowerAssertion; 
@property (assign) BOOL sessionsShouldBlockOtherDownloads; 
-(id)description;
-(id)init;
-(void)dealloc;
-(id<SSDownloadHandlerDelegate>)delegate;
-(void)setDelegate:(id<SSDownloadHandlerDelegate>)arg1 ;
-(void)setDownloadPhasesToIgnore:(NSArray *)arg1 ;
-(long long)handlerIdentifier;
-(void)_setValue:(id)arg1 forProperty:(const char*)arg2 ;
-(void)_handleMessage:(id)arg1 fromServerConnection:(id)arg2 ;
-(void)_connectToDaemon;
-(void)_sendDisconnectMessage;
-(BOOL)_sendAuthenticationSessionWithMessage:(id)arg1 ;
-(BOOL)_sendSessionHandleWithMessage:(id)arg1 ;
-(BOOL)_sendSessionCancelWithMessage:(id)arg1 ;
-(BOOL)_sendSessionPauseWithMessage:(id)arg1 ;
-(id)_controlConnection;
-(id)_newSessionWithMessage:(id)arg1 ;
-(NSArray *)downloadPhasesToIgnore;
-(void)resetDisavowedSessions;
-(BOOL)sessionsNeedPowerAssertion;
-(BOOL)sessionsShouldBlockOtherDownloads;
-(void)setSessionsNeedPowerAssertion:(BOOL)arg1 ;
-(void)setSessionsShouldBlockOtherDownloads:(BOOL)arg1 ;
@end

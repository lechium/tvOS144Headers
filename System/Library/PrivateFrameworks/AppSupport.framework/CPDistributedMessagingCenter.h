/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:12 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AppSupport/AppSupport-Structs.h>
@class NSString, NSLock, NSOperationQueue, NSMutableDictionary, CPDistributedMessagingCallout;

@interface CPDistributedMessagingCenter : NSObject {

	NSString* _centerName;
	NSLock* _lock;
	unsigned _sendPort;
	NSOperationQueue* _asyncQueue;
	CFRunLoopSourceRef _serverSource;
	NSString* _requiredEntitlement;
	NSMutableDictionary* _callouts;
	unsigned _parkedServerPort;
	CPDistributedMessagingCallout* _currentCallout;
	unsigned _replyPort;
	BOOL _portPassing;
	BOOL _delayedReply;
	BOOL _requireLookupByPID;
	int _targetPID;

}
+(id)centerNamed:(id)arg1 ;
+(id)_centerNamed:(id)arg1 requireLookupByPID:(BOOL)arg2 ;
+(id)pidRestrictedCenterNamed:(id)arg1 ;
-(id)name;
-(void)dealloc;
-(id)_initWithServerName:(id)arg1 ;
-(void)runServerOnCurrentThread;
-(id)_initWithServerName:(id)arg1 requireLookupByPID:(BOOL)arg2 ;
-(void)_setSendPort:(unsigned)arg1 ;
-(void)_setupInvalidationSource;
-(BOOL)_sendMessage:(id)arg1 userInfo:(id)arg2 receiveReply:(id*)arg3 error:(id*)arg4 toTarget:(id)arg5 selector:(SEL)arg6 context:(void*)arg7 ;
-(BOOL)_sendMessage:(id)arg1 userInfo:(id)arg2 receiveReply:(id*)arg3 error:(id*)arg4 toTarget:(id)arg5 selector:(SEL)arg6 context:(void*)arg7 nonBlocking:(BOOL)arg8 ;
-(BOOL)_sendMessage:(id)arg1 userInfoData:(id)arg2 oolKey:(id)arg3 oolData:(id)arg4 makeServer:(BOOL)arg5 receiveReply:(id*)arg6 nonBlocking:(BOOL)arg7 error:(id*)arg8 ;
-(unsigned)_sendPort;
-(id)_initAnonymousServer;
-(unsigned)_serverPort;
-(void)runServerOnCurrentThreadProtectedByEntitlement:(id)arg1 ;
-(void)_sendReplyMessage:(id)arg1 portPassing:(BOOL)arg2 onMachPort:(unsigned)arg3 ;
-(id)_initClientWithPort:(unsigned)arg1 ;
-(void)setTargetPID:(int)arg1 ;
-(BOOL)sendMessageName:(id)arg1 userInfo:(id)arg2 ;
-(BOOL)sendNonBlockingMessageName:(id)arg1 userInfo:(id)arg2 ;
-(id)sendMessageAndReceiveReplyName:(id)arg1 userInfo:(id)arg2 ;
-(id)sendMessageAndReceiveReplyName:(id)arg1 userInfo:(id)arg2 error:(id*)arg3 ;
-(void)sendMessageAndReceiveReplyName:(id)arg1 userInfo:(id)arg2 toTarget:(id)arg3 selector:(SEL)arg4 context:(void*)arg5 ;
-(void)stopServer;
-(void)registerForMessageName:(id)arg1 target:(id)arg2 selector:(SEL)arg3 ;
-(id)delayReply;
-(void)sendDelayedReply:(id)arg1 dictionary:(id)arg2 ;
-(void)unregisterForMessageName:(id)arg1 ;
-(BOOL)doesServerExist;
-(void)_dispatchMessageNamed:(id)arg1 userInfo:(id)arg2 reply:(id*)arg3 auditToken:(SCD_Struct_CP3*)arg4 ;
-(BOOL)_isTaskEntitled:(SCD_Struct_CP3*)arg1 ;
-(id)_requiredEntitlement;
@end


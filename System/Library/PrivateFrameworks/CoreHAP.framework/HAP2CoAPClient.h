/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:39 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreHAP/CoreHAP-Structs.h>
#import <CoreHAP/HAP2LoggingObject.h>
#import <libobjc.A.dylib/HAP2CoAPIOConsumer.h>
#import <libobjc.A.dylib/HAP2CoAPClient.h>

@protocol HAP2CoAPClient <NSObject>
@property (assign,nonatomic,__weak) id<HAP2CoAPClientDelegate> delegate; 
@property (nonatomic,readonly) BOOL connected; 
@property (nonatomic,readonly) unsigned long long maxTransmitAttempts; 
@property (nonatomic,readonly) double initialACKTimeout; 
@required
-(id<HAP2CoAPClientDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(BOOL)connected;
-(void)closeWithError:(id)arg1 completion:(/*^block*/id)arg2;
-(void)openWithCompletion:(/*^block*/id)arg1;
-(unsigned long long)maxTransmitAttempts;
-(double)initialACKTimeout;
-(void)sendRequestWithMethod:(unsigned char)arg1 path:(id)arg2 payload:(id)arg3 completion:(/*^block*/id)arg4;
-(void)alterMaxTransmitAttempts:(unsigned long long)arg1 initialACKTimeout:(double)arg2;

@end


@protocol HAP2CoAPClientDelegate, OS_dispatch_queue;
@class NSMutableDictionary, NSError, NSMutableSet, NSMutableOrderedSet, HAP2PropertyLock, NSObject, NSThread, NSString;

@interface HAP2CoAPClient : HAP2LoggingObject <HAP2CoAPIOConsumer, HAP2CoAPClient> {

	coap_address_t _address;
	BOOL _connected;
	BOOL _registered;
	id<HAP2CoAPClientDelegate> _delegate;
	unsigned long long _maxTransmitAttempts;
	double _initialACKTimeout;
	/*^block*/id _openCompletion;
	/*^block*/id _closeCompletion;
	NSMutableDictionary* _responseCompletionsByToken;
	NSError* _closeError;
	NSMutableSet* _activeTokens;
	NSMutableOrderedSet* _previousResponseMessageIDs;
	NSMutableOrderedSet* _previousEventMessageIDs;
	HAP2PropertyLock* _propertyLock;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSThread* _ioThread;
	coap_resource_t* _notificationResource;

}

@property (assign,nonatomic) BOOL connected;                                          //@synthesize connected=_connected - In the implementation block
@property (assign,nonatomic) unsigned long long maxTransmitAttempts;                  //@synthesize maxTransmitAttempts=_maxTransmitAttempts - In the implementation block
@property (assign,nonatomic) double initialACKTimeout;                                //@synthesize initialACKTimeout=_initialACKTimeout - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<HAP2CoAPClientDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<HAP2CoAPClientDelegate>)delegate;
-(void)setDelegate:(id<HAP2CoAPClientDelegate>)arg1 ;
-(BOOL)connected;
-(void)setConnected:(BOOL)arg1 ;
-(id)initWithSocketAddress:(const sockaddr*)arg1 ;
-(void)closeWithError:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)openWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithSocketAddress:(const sockaddr*)arg1 maxTransmitAttempts:(unsigned long long)arg2 initialACKTimeout:(double)arg3 ;
-(id)initWithIPAddress:(id)arg1 port:(unsigned short)arg2 maxTransmitAttempts:(unsigned long long)arg3 initialACKTimeout:(double)arg4 ;
-(id)initWithIPAddress:(id)arg1 port:(unsigned short)arg2 ;
-(void)setMaxTransmitAttempts:(unsigned long long)arg1 ;
-(void)setInitialACKTimeout:(double)arg1 ;
-(unsigned long long)maxTransmitAttempts;
-(double)initialACKTimeout;
-(coap_session_t*)shouldOpenSessionWithContext:(coap_context_t*)arg1 ;
-(void)didReceiveResponseInSession:(coap_session_t*)arg1 messageID:(unsigned long long)arg2 response:(coap_pdu_t*)arg3 ;
-(void)didFailToSendMessageInSession:(coap_session_t*)arg1 messageID:(unsigned long long)arg2 message:(coap_pdu_t*)arg3 reason:(unsigned long long)arg4 ;
-(void)didReceivePongInSession:(coap_session_t*)arg1 messageID:(unsigned long long)arg2 ;
-(void)didReceiveRequestInSession:(coap_session_t*)arg1 messageID:(unsigned long long)arg2 request:(coap_pdu_t*)arg3 response:(coap_pdu_t*)arg4 ;
-(void)didCloseSession;
-(void)didRegister;
-(void)didUnregister;
-(void)sendRequestWithMethod:(unsigned char)arg1 path:(id)arg2 payload:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)alterMaxTransmitAttempts:(unsigned long long)arg1 initialACKTimeout:(double)arg2 ;
-(id)initWithIPAddress:(id)arg1 port:(unsigned short)arg2 maxTransmitAttempts:(unsigned long long)arg3 initialACKTimeout:(double)arg4 workQueue:(id)arg5 ;
-(id)initWithIPAddress:(id)arg1 ;
@end


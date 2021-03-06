/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:43 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/WiFiPeerToPeer.framework/WiFiPeerToPeer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WiFiPeerToPeer/WiFiAwareSubscriberXPCDelegate.h>

@protocol OS_dispatch_queue, WiFiAwareSubscriberXPC, WiFiAwareSubscriberDelegate;
@class NSXPCConnection, NSObject, NSNumber, WiFiAwareSubscribeConfiguration, NSString;

@interface WiFiAwareSubscriber : NSObject <WiFiAwareSubscriberXPCDelegate> {

	NSXPCConnection* _xpcConnection;
	NSObject*<OS_dispatch_queue> _queue;
	NSNumber* _subscribeID;
	id<WiFiAwareSubscriberXPC> _subscriberProxy;
	id<WiFiAwareSubscriberDelegate> _delegate;
	WiFiAwareSubscribeConfiguration* _configuration;

}

@property (assign,nonatomic,__weak) id<WiFiAwareSubscriberDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) WiFiAwareSubscribeConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(void)dealloc;
-(id<WiFiAwareSubscriberDelegate>)delegate;
-(void)setDelegate:(id<WiFiAwareSubscriberDelegate>)arg1 ;
-(void)start;
-(void)stop;
-(WiFiAwareSubscribeConfiguration *)configuration;
-(id)initWithConfiguration:(id)arg1 ;
-(BOOL)isConnected;
-(void)sendMessage:(id)arg1 toPeerAddress:(id)arg2 withInstanceID:(unsigned char)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)resetState;
-(void)handleError;
-(void)subscribeStartedWithInstanceID:(unsigned char)arg1 ;
-(void)subscribeTerminatedWithReason:(long long)arg1 ;
-(void)subscribeReceivedDiscoveryResult:(id)arg1 ;
-(void)subscribeLostDiscoveryResultForPublishID:(unsigned char)arg1 address:(id)arg2 ;
-(void)subscribeFailedToStartWithError:(long long)arg1 ;
-(void)subscribeReceivedMessage:(id)arg1 fromPublishID:(unsigned char)arg2 address:(id)arg3 ;
-(void)startSubscribeSync;
@end


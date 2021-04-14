/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:32 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/GameController.framework/GameController
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/_GCIPCEndpointServer.h>
#import <libobjc.A.dylib/GCLightXPCProxyRemoteServerEndpointInterface.h>

@protocol GCLightXPCProxyRemoteClientEndpointInterface, _GCIPCEndpointConnection, NSObjectNSCopyingNSSecureCoding, GCLightXPCProxyServerEndpointDelegate;
@class GCDeviceLight, NSString;

@interface GCLightXPCProxyServerEndpoint : NSObject <_GCIPCEndpointServer, GCLightXPCProxyRemoteServerEndpointInterface> {

	id<GCLightXPCProxyRemoteClientEndpointInterface> _clientEndpoint;
	id<_GCIPCEndpointConnection> _connection;
	id _connectionInterruptionRegistration;
	id _connectionInvalidationRegistration;
	unsigned long long _pendingUpdates;
	id<NSObject><NSCopying><NSSecureCoding> _identifier;
	GCDeviceLight* _light;
	id<GCLightXPCProxyServerEndpointDelegate> _delegate;
	id _userInfo;

}

@property (nonatomic,readonly) id<_GCControllerComponentDescription> receiverDescription; 
@property (assign,nonatomic,__weak) id<GCLightXPCProxyServerEndpointDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) id userInfo;                                                              //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,retain) GCDeviceLight * light;                                                    //@synthesize light=_light - In the implementation block
@property (readonly) id<NSObject><NSCopying><NSSecureCoding> identifier;                               //@synthesize identifier=_identifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)userInfo;
-(id<GCLightXPCProxyServerEndpointDelegate>)delegate;
-(void)setDelegate:(id<GCLightXPCProxyServerEndpointDelegate>)arg1 ;
-(id<NSObject><NSCopying><NSSecureCoding>)identifier;
-(void)setUserInfo:(id)arg1 ;
-(void)invalidateConnection;
-(GCDeviceLight *)light;
-(void)setLight:(GCDeviceLight *)arg1 ;
-(void)fetchObjectIdentifierWithReply:(/*^block*/id)arg1 ;
-(id)initWithIdentifier:(id)arg1 initialValue:(id)arg2 ;
-(BOOL)acceptClient:(id)arg1 onConnection:(id)arg2 error:(id*)arg3 ;
-(id)initWithInitialValue:(id)arg1 ;
-(id<_GCControllerComponentDescription>)receiverDescription;
-(void)invalidateClient;
-(void)newLight:(id)arg1 ;
-(void)fetchLightWithReply:(/*^block*/id)arg1 ;
@end


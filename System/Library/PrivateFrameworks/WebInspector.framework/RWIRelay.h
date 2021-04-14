/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:30 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/_RWIRelayConnectionToApplicationDelegate.h>
#import <libobjc.A.dylib/_RWIRelayClientConnectionDelegate.h>
#import <libobjc.A.dylib/_RWIClientToRelayMessageReceiver.h>

@protocol OS_xpc_object, RWIRelayDelegate;
@class NSObject, NSMutableArray, NSMutableDictionary, NSString;

@interface RWIRelay : NSObject <_RWIRelayConnectionToApplicationDelegate, _RWIRelayClientConnectionDelegate, _RWIClientToRelayMessageReceiver> {

	NSObject*<OS_xpc_object> _xpcApplicationListenConnection;
	NSMutableArray* _pendingClientConnections;
	NSMutableDictionary* _pendingProxyApplicationConnections;
	NSMutableArray* _automaticInspectionDebuggers;
	NSMutableDictionary* _automaticInspectionSessions;
	id<RWIRelayDelegate> _delegate;
	NSMutableDictionary* _applicationConnections;
	NSMutableDictionary* _clientConnections;
	NSMutableDictionary* _driverInterfaces;

}

@property (nonatomic,readonly) NSMutableDictionary * applicationConnections;              //@synthesize applicationConnections=_applicationConnections - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * clientConnections;                   //@synthesize clientConnections=_clientConnections - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * driverInterfaces;                    //@synthesize driverInterfaces=_driverInterfaces - In the implementation block
@property (assign,nonatomic) id<RWIRelayDelegate> delegate;                               //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<RWIRelayDelegate>)delegate;
-(void)setDelegate:(id<RWIRelayDelegate>)arg1 ;
-(void)setup;
-(void)clientConnectionDidClose:(id)arg1 ;
-(void)xpcConnection:(id)arg1 unhandledMessage:(id)arg2 ;
-(void)xpcConnectionFailed:(id)arg1 ;
-(void)xpcConnection:(id)arg1 receivedMessage:(id)arg2 userInfo:(id)arg3 ;
-(void)_setAutomaticInspectionGlobalState:(BOOL)arg1 ;
-(void)_handleApplicationListenConnectionEvent:(id)arg1 ;
-(void)_developerPreferencesChanged;
-(void)_addPendingClientConnection:(id)arg1 ;
-(void)_applicationUpdated:(id)arg1 ;
-(void)_reportCurrentStateToAllClients;
-(void)_reportCurrentStateToClient:(id)arg1 ;
-(void)_finalizePendingClientConnection:(id)arg1 withIdentifier:(id)arg2 ;
-(id)_allApplicationDetails;
-(void)_driverConnected:(id)arg1 ;
-(void)_driverUpdated:(id)arg1 ;
-(void)_driverDisconnected:(id)arg1 ;
-(id)_allDriverDetails;
-(void)_disconnectApplicationConnect:(id)arg1 ;
-(void)_applicationConnected:(id)arg1 ;
-(void)_proxyApplicationConnected:(id)arg1 ;
-(void)_applicationDisconnected:(id)arg1 ;
-(void)_receivedDataMessage:(id)arg1 connection:(id)arg2 ;
-(void)_receivedListingMessage:(id)arg1 connection:(id)arg2 ;
-(void)_receivedProxyApplicationSetupResponseMessage:(id)arg1 connection:(id)arg2 ;
-(void)_receivedAutomaticInspectionCandidate:(id)arg1 connection:(id)arg2 ;
-(void)_proxyApplicationResponse:(id)arg1 userInfo:(id)arg2 ;
-(void)_rpc_reportIdentifier:(id)arg1 ;
-(void)_rpc_forwardDidClose:(id)arg1 ;
-(void)_rpc_forwardGetListing:(id)arg1 ;
-(void)_rpc_forwardIndicateWebView:(id)arg1 ;
-(void)_rpc_forwardSocketData:(id)arg1 ;
-(void)_rpc_forwardSocketSetup:(id)arg1 ;
-(void)_rpc_getConnectedApplications:(id)arg1 ;
-(void)_rpc_forwardAutomaticInspectionConfiguration:(id)arg1 ;
-(void)_rpc_forwardAutomaticInspectionRejection:(id)arg1 ;
-(void)_rpc_reportDriverConnected:(id)arg1 ;
-(void)_rpc_reportDriverUpdated:(id)arg1 ;
-(void)_rpc_reportDriverDisconnected:(id)arg1 ;
-(void)_rpc_forwardDriverStateChangeRequest:(id)arg1 ;
-(void)_rpc_getConnectedDrivers:(id)arg1 ;
-(void)_rpc_forwardAutomationSessionRequest:(id)arg1 ;
-(void)_rpc_requestApplicationLaunch:(id)arg1 ;
-(void)shutdownIfDisabled;
-(void)addPendingClientConnection:(id)arg1 ;
-(void)updateApplication:(id)arg1 ;
-(void)_rpc_debuggerWillSleep:(id)arg1 ;
-(void)_rpc_debuggerDidWake:(id)arg1 ;
-(NSMutableDictionary *)applicationConnections;
-(NSMutableDictionary *)clientConnections;
-(NSMutableDictionary *)driverInterfaces;
@end


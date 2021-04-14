/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:33 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/GameController.framework/GameController
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/_GCDeviceClient.h>
#import <libobjc.A.dylib/GCControllerServiceRemoteServerInterface.h>
#import <libobjc.A.dylib/GCPlayerIndicatorXPCProxyServiceRemoteServerInterface.h>
#import <libobjc.A.dylib/GCLightXPCProxyServiceRemoteServerInterface.h>
#import <libobjc.A.dylib/GCMotionXPCProxyServiceRemoteServerInterface.h>
#import <libobjc.A.dylib/GCBatteryXPCProxyServiceRemoteServerInterface.h>
#import <libobjc.A.dylib/GCSettingsXPCProxyServiceRemoteServerInterface.h>
#import <libobjc.A.dylib/_GCAppServerInterface.h>

@protocol _GCIPCIncomingConnection, GCControllerServiceRemoteClientInterface;
@class NSString, _GCControllerManagerServer, NSMapTable, NSArray;

@interface _GCAppClientProxy : NSObject <_GCDeviceClient, GCControllerServiceRemoteServerInterface, GCPlayerIndicatorXPCProxyServiceRemoteServerInterface, GCLightXPCProxyServiceRemoteServerInterface, GCMotionXPCProxyServiceRemoteServerInterface, GCBatteryXPCProxyServiceRemoteServerInterface, GCSettingsXPCProxyServiceRemoteServerInterface, _GCAppServerInterface> {

	_GCControllerManagerServer* _server;
	AB _invalid;
	id<_GCIPCIncomingConnection> _connection;
	id _connectionInvalidationRegistration;
	id _connectionInterruptedRegistration;
	id<GCControllerServiceRemoteClientInterface> _controllerServiceClient;
	unsigned long long _controllerServiceClientPendingUpdates;
	NSMapTable* _publishedControllerDescriptions;
	NSArray* _invalidationHandlers;

}

@property (getter=isInvalid,nonatomic,readonly) BOOL invalid; 
@property (nonatomic,readonly) NSString * bundleIdentifier; 
@property (readonly) id<_GCIPCObjectRegistry> IPCObjectRegistry; 
@property (readonly) id<_GCIPCServiceRegistry> IPCServiceRegistry; 
@property (copy) NSArray * invalidationHandlers;                                //@synthesize invalidationHandlers=_invalidationHandlers - In the implementation block
+(id)clientProxyWithConnection:(id)arg1 server:(id)arg2 ;
-(id)debugDescription;
-(id)description;
-(id)init;
-(void)dealloc;
-(id)redactedDescription;
-(NSString *)bundleIdentifier;
-(void)_invalidate;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(BOOL)isInvalid;
-(void)pingWithReply:(/*^block*/id)arg1 ;
-(id)addInvalidationHandler:(/*^block*/id)arg1 ;
-(void)fetchControllerDescriptionsWithReply:(/*^block*/id)arg1 ;
-(id<_GCIPCServiceRegistry>)IPCServiceRegistry;
-(id<_GCIPCObjectRegistry>)IPCObjectRegistry;
-(void)motionXPCProxyServiceClientEndpointConnect:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)lightXPCProxyServiceClientEndpointConnect:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)settingsXPCProxyServiceClientEndpointConnect:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)connectToControllerServiceWithClient:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)connectToPlayerIndicatorXPCProxyServiceWithClient:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)connectToLightXPCProxyServiceWithClient:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)connectToMotionXPCProxyServiceWithClient:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)connectToBatteryXPCProxyServiceWithClient:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)connectToSettingsXPCProxyServiceWithClient:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)connectToPhotoVideoXPCProxyServiceWithClient:(id)arg1 reply:(/*^block*/id)arg2 ;
-(NSArray *)invalidationHandlers;
-(void)setInvalidationHandlers:(NSArray *)arg1 ;
-(void)onVideoRecordingStart:(/*^block*/id)arg1 ;
-(void)onVideoRecordingStopWithURL:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)generateURLFor:(id)arg1 optionalFolder:(id)arg2 withReply:(/*^block*/id)arg3 ;
-(void)takeScreenshotWithReply:(/*^block*/id)arg1 ;
-(id)_initWithConnection:(id)arg1 server:(id)arg2 ;
-(void)playerIndicatorXPCProxyServiceClientEndpointConnect:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)batteryXPCProxyServiceClientEndpointConnect:(id)arg1 reply:(/*^block*/id)arg2 ;
@end


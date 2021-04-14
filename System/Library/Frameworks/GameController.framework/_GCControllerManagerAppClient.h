/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:32 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/GameController.framework/GameController
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GameController/GameController-Structs.h>
#import <GameController/_GCControllerManager.h>
#import <libobjc.A.dylib/GCControllerServiceRemoteClientInterface.h>
#import <libobjc.A.dylib/GCPlayerIndicatorXPCProxyServiceClient.h>
#import <libobjc.A.dylib/GCPlayerIndicatorXPCProxyServiceRemoteClientInterface.h>
#import <libobjc.A.dylib/GCLightXPCProxyServiceClient.h>
#import <libobjc.A.dylib/GCLightXPCProxyServiceRemoteClientInterface.h>
#import <libobjc.A.dylib/GCMotionXPCProxyServiceClient.h>
#import <libobjc.A.dylib/GCMotionXPCProxyServiceRemoteClientInterface.h>
#import <libobjc.A.dylib/GCBatteryXPCProxyServiceClient.h>
#import <libobjc.A.dylib/GCBatteryXPCProxyServiceRemoteClientInterface.h>
#import <libobjc.A.dylib/GCSettingsXPCProxyServiceClient.h>
#import <libobjc.A.dylib/GCSettingsXPCProxyServiceRemoteClientInterface.h>
#import <libobjc.A.dylib/RPPreviewViewControllerDelegate.h>
#import <libobjc.A.dylib/_GCAppClientInterface.h>

@protocol _GCIPCOutgoingConnection, GCControllerServiceRemoteServerInterface, GCPlayerIndicatorXPCProxyServiceRemoteServerInterface, GCLightXPCProxyServiceRemoteServerInterface, GCSettingsXPCProxyServiceRemoteServerInterface, GCMotionXPCProxyServiceRemoteServerInterface, GCBatteryXPCProxyServiceRemoteServerInterface, GCPhotoVideoXPCProxyServiceRemoteServerInterface;
@class NSMutableSet, NSMutableDictionary, NSString;

@interface _GCControllerManagerAppClient : _GCControllerManager <GCControllerServiceRemoteClientInterface, GCPlayerIndicatorXPCProxyServiceClient, GCPlayerIndicatorXPCProxyServiceRemoteClientInterface, GCLightXPCProxyServiceClient, GCLightXPCProxyServiceRemoteClientInterface, GCMotionXPCProxyServiceClient, GCMotionXPCProxyServiceRemoteClientInterface, GCBatteryXPCProxyServiceClient, GCBatteryXPCProxyServiceRemoteClientInterface, GCSettingsXPCProxyServiceClient, GCSettingsXPCProxyServiceRemoteClientInterface, RPPreviewViewControllerDelegate, _GCAppClientInterface> {

	NSMutableSet* _knownHIDServices;
	NSMutableDictionary* _publishedControllers;
	NSMutableSet* _pendingControllers;
	NSMutableSet* _serverValidControllerIdentifiers;
	id<_GCIPCOutgoingConnection> _serverConnection;
	id _serverConnectionInvalidation;
	id _serverConnectionInterruption;
	id<GCControllerServiceRemoteServerInterface> _controllerService;
	id<GCPlayerIndicatorXPCProxyServiceRemoteServerInterface> _playerIndicatorXPCProxyService;
	id<GCLightXPCProxyServiceRemoteServerInterface> _lightXPCProxyService;
	id<GCSettingsXPCProxyServiceRemoteServerInterface> _settingsXPCProxyService;
	id<GCMotionXPCProxyServiceRemoteServerInterface> _motionXPCProxyService;
	id<GCBatteryXPCProxyServiceRemoteServerInterface> _batteryXPCProxyService;
	id<GCPhotoVideoXPCProxyServiceRemoteServerInterface> _photoVideoService;
	BOOL _shouldResumeDaemonConnectionOnForeground;

}

@property (readonly) id<_GCIPCEndpointConnection> playerIndicatorXPCProxyServiceConnection; 
@property (readonly) id<GCPlayerIndicatorXPCProxyServiceRemoteServerInterface> playerIndicatorXPCProxyServiceRemoteServer; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) id<_GCIPCEndpointConnection> lightXPCProxyServiceConnection; 
@property (readonly) id<GCLightXPCProxyServiceRemoteServerInterface> lightXPCProxyServiceRemoteServer; 
@property (readonly) id<_GCIPCEndpointConnection> motionXPCProxyServiceConnection; 
@property (readonly) id<GCMotionXPCProxyServiceRemoteServerInterface> motionXPCProxyServiceRemoteServer; 
@property (readonly) id<_GCIPCEndpointConnection> batteryXPCProxyServiceConnection; 
@property (readonly) id<GCBatteryXPCProxyServiceRemoteServerInterface> batteryXPCProxyServiceRemoteServer; 
@property (readonly) id<_GCIPCEndpointConnection> settingsXPCProxyServiceConnection; 
@property (readonly) id<GCSettingsXPCProxyServiceRemoteServerInterface> settingsXPCProxyServiceRemoteServer; 
-(id)init;
-(void)open;
-(id)controllers;
-(void)_connectToDaemon;
-(void)CBApplicationDidBecomeActive;
-(void)previewControllerDidFinish:(id)arg1 ;
-(void)setProperty:(id)arg1 forKey:(id)arg2 forHIDServiceClientWithRegistryID:(id)arg3 ;
-(void)onHIDDeviceAdded:(IOHIDServiceClientRef)arg1 ;
-(void)onHIDDeviceRemoved:(IOHIDServiceClientRef)arg1 ;
-(id)mice;
-(void)publishControllers:(id)arg1 ;
-(void)unpublishControllersWithIdentifiers:(id)arg1 ;
-(void)refreshControllers;
-(id)serviceClientForIPCService:(id)arg1 ;
-(id<GCMotionXPCProxyServiceRemoteServerInterface>)motionXPCProxyServiceRemoteServer;
-(id<_GCIPCEndpointConnection>)motionXPCProxyServiceConnection;
-(void)onVideoRecordingToggledWithController:(id)arg1 ;
-(void)_onqueue_publishController:(id)arg1 ;
-(void)_onqueue_unpublishController:(id)arg1 ;
-(id)currentController;
-(void)setCurrentController:(id)arg1 ;
-(void)handleKeyboardEventAsFrontmostApp:(id)arg1 ;
-(void)handleMouseEventAsFrontmostApp:(id)arg1 ;
-(id)currentExtendedGamepad;
-(id<GCLightXPCProxyServiceRemoteServerInterface>)lightXPCProxyServiceRemoteServer;
-(id<_GCIPCEndpointConnection>)lightXPCProxyServiceConnection;
-(id<GCSettingsXPCProxyServiceRemoteServerInterface>)settingsXPCProxyServiceRemoteServer;
-(id<_GCIPCEndpointConnection>)settingsXPCProxyServiceConnection;
-(void)_resumeDaemonConnection;
-(void)updateCurrentControllerAndProfileForUnpublishedController:(id)arg1 ;
-(id)_mostRecentlyActiveControllerIgnoring:(id)arg1 ;
-(void)_setCurrentController:(id)arg1 ;
-(id)_mostRecentlyActiveExtendedGamepadIgnoring:(id)arg1 ;
-(void)setCurrentExtendedGamepad:(id)arg1 ;
-(id)_mostRecentlyActiveMicroGamepadIgnoring:(id)arg1 ;
-(void)setCurrentMicroGamepad:(id)arg1 ;
-(void)_setCurrentExtendedGamepad:(id)arg1 ;
-(void)_setCurrentMicroGamepad:(id)arg1 ;
-(void)_onqueue_refreshPublishedControllers;
-(BOOL)isVideoRecordingAllowedForController:(id)arg1 ;
-(id<_GCIPCEndpointConnection>)playerIndicatorXPCProxyServiceConnection;
-(id<GCPlayerIndicatorXPCProxyServiceRemoteServerInterface>)playerIndicatorXPCProxyServiceRemoteServer;
-(id<_GCIPCEndpointConnection>)batteryXPCProxyServiceConnection;
-(id<GCBatteryXPCProxyServiceRemoteServerInterface>)batteryXPCProxyServiceRemoteServer;
-(void)_onqueue_addPendingController:(id)arg1 ;
-(BOOL)_containsPublishedController:(id)arg1 ;
-(id)currentMicroGamepad;
-(BOOL)isScreenShotAllowedForController:(id)arg1 ;
@end


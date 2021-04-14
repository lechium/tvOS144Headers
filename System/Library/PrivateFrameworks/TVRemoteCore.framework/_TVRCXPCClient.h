/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:35 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVRemoteCore/TVRCXPCResponseProtocol.h>
#import <TVRemoteCore/TVRCXPCRequestProtocol.h>

@protocol TVRCXPCRequestProtocol;
@class NSXPCConnection, NSMutableDictionary, NSString;

@interface _TVRCXPCClient : NSObject <TVRCXPCResponseProtocol, TVRCXPCRequestProtocol> {

	NSXPCConnection* _xpcConnection;
	id<TVRCXPCRequestProtocol> _remoteObject;
	NSMutableDictionary* _eventObserversByID;

}

@property (nonatomic,retain) NSXPCConnection * xpcConnection;                       //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (nonatomic,retain) id<TVRCXPCRequestProtocol> remoteObject;               //@synthesize remoteObject=_remoteObject - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * eventObserversByID;              //@synthesize eventObserversByID=_eventObserversByID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(NSXPCConnection *)xpcConnection;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(id<TVRCXPCRequestProtocol>)remoteObject;
-(void)setRemoteObject:(id<TVRCXPCRequestProtocol>)arg1 ;
-(void)fulfillAuthChallengeForDeviceWithIdentifier:(id)arg1 withLocallyEnteredCode:(id)arg2 ;
-(void)cancelAuthChallengeForDeviceWithIdentifier:(id)arg1 ;
-(void)_setupConnectionIfNeeded;
-(void)openConnectionToDeviceWithIdentifier:(id)arg1 ;
-(void)closeConnectionToDeviceWithIdentifier:(id)arg1 withType:(unsigned long long)arg2 ;
-(void)sendButtonEvent:(id)arg1 toDeviceWithIdentifier:(id)arg2 ;
-(void)sendTouchEvent:(id)arg1 toDeviceWithIdentifier:(id)arg2 ;
-(void)sendGameControllerEvent:(id)arg1 toDeviceWithIdentifier:(id)arg2 ;
-(void)sendInputText:(id)arg1 toDeviceWithIdentifier:(id)arg2 ;
-(void)sendInputReturnKeyToDeviceWithIdentifier:(id)arg1 ;
-(void)sendInputTextPayload:(id)arg1 toDeviceWithIdentifier:(id)arg2 ;
-(void)setVoiceRecorderAutomaticRecording:(BOOL)arg1 forDeviceWithIdentifier:(id)arg2 ;
-(void)startVoiceRecordingForDeviceWithIdentifier:(id)arg1 ;
-(void)stopVoiceRecordingForDeviceWithIdentifier:(id)arg1 ;
-(void)beginDeviceQuery;
-(void)endDeviceQuery;
-(void)fetchActiveMREndpointUIDWithCompletion:(/*^block*/id)arg1 ;
-(void)sendEvent:(id)arg1 toDeviceWithIdentifier:(id)arg2 options:(id)arg3 response:(/*^block*/id)arg4 ;
-(void)_broadcastStateUpdateToDevices:(id)arg1 ;
-(void)_disconnectAllDevices;
-(void)_postInvalidationNotification;
-(void)deviceUpdatedState:(id)arg1 ;
-(void)deviceWithState:(id)arg1 encounteredAuthChallengeOfType:(long long)arg2 attributes:(long long)arg3 codeToEnterOnDevice:(id)arg4 throttleSeconds:(long long)arg5 ;
-(void)deviceQueryUpdatedDiscoveredDevices:(id)arg1 ;
-(void)addEventObserver:(id)arg1 forDeviceWithIdentifier:(id)arg2 ;
-(void)removeEventObserver:(id)arg1 forDeviceWithIdentifier:(id)arg2 ;
-(NSMutableDictionary *)eventObserversByID;
-(void)setEventObserversByID:(NSMutableDictionary *)arg1 ;
@end


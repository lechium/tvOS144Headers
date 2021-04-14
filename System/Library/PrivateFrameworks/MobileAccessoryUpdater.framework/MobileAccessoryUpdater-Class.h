/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:19 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/MobileAccessoryUpdater.framework/MobileAccessoryUpdater
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MobileAccessoryUpdaterDelegate, FudConnection, OS_dispatch_queue, OS_dispatch_queue_attr;
@class NSString, NSObject;

@interface MobileAccessoryUpdater : NSObject {

	id<MobileAccessoryUpdaterDelegate> _delegate;
	id<FudConnection> _connection;
	NSString* _bundleIdentifier;
	NSString* _clientIdentifier;
	char* _cClientIdentifier;
	NSObject*<OS_dispatch_queue> _sessionQueue;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	NSObject*<OS_dispatch_queue_attr> _attr;
	NSString* _activeFilter;
	BOOL _isInternalClient;
	BOOL _didUnregister;

}
-(void)dealloc;
-(id)bundleIdentifier;
-(id)clientIdentifier;
-(void)createConnection;
-(void)unregister;
-(BOOL)registerForIdentifier:(id)arg1 isGroupIdentifier:(BOOL)arg2 ;
-(id)initWithPluginIdentifier:(id)arg1 isGroupIdentifier:(BOOL)arg2 delegate:(id)arg3 isInternalClient:(BOOL)arg4 options:(id)arg5 error:(id*)arg6 ;
-(void)handleInboundEvent:(id)arg1 ;
-(void)handleAUNotificationEvent:(id)arg1 ;
-(BOOL)sendMessageForCommand:(int)arg1 withOptions:(id)arg2 requiresFilter:(BOOL)arg3 replyHandler:(/*^block*/id)arg4 ;
-(const char*)getActiveDeviceClassCString;
-(BOOL)sendMessageForCommand:(int)arg1 withOptions:(id)arg2 requiresFilter:(BOOL)arg3 ;
-(id)getActiveDeviceClass;
-(int)getOperationCodeFromName:(id)arg1 ;
-(BOOL)doesOperationCodeRequireFilter:(int)arg1 ;
-(void)performStep:(id)arg1 withOptions:(id)arg2 ;
-(id)initWithDelegate:(id)arg1 isInternalClient:(BOOL)arg2 options:(id)arg3 error:(id*)arg4 ;
-(id)initWithGroupIdentifer:(id)arg1 delegate:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
-(id)initWithPluginIdentifier:(id)arg1 delegate:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
-(id)getPluginsList;
-(BOOL)loadPluginWithAccessoryInfo:(id)arg1 options:(id)arg2 ;
-(id)queryNextStep:(id*)arg1 ;
-(BOOL)setActiveDeviceClass:(id)arg1 ;
-(void)doneWithOptions:(id)arg1 ;
-(void)performNextStepWithOptions:(id)arg1 ;
-(BOOL)setLastRemoteFindDate:(id)arg1 ;
-(id)activeFilter;
@end


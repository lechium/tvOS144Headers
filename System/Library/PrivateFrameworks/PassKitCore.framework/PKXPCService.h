/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:24 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/PKForegroundActiveArbiterObserver.h>

@protocol PKForegroundActiveArbiter, NSObject, PKInvalidatable, PKXPCServiceDelegate;
@class NSXPCInterface, NSString, NSXPCConnection, PKXPCForwarder;

@interface PKXPCService : NSObject <PKForegroundActiveArbiterObserver> {

	NSXPCInterface* _remoteObjectInterface;
	NSXPCInterface* _exportedObjectInterface;
	NSString* _className;
	NSString* _serviceResumedNotificationName;
	os_unfair_lock_s _lock;
	NSXPCConnection* _connection;
	PKXPCForwarder* _templateExportedProxy;
	PKXPCForwarder* _currentExportedProxy;
	BOOL _suspendCallbacks;
	BOOL _forceConnectionOnResume;
	id<PKForegroundActiveArbiter> _foregroundActiveArbiter;
	id<NSObject> _foregroundListener;
	id<NSObject> _backgroundListener;
	id<PKInvalidatable> _serviceResumedListenerInvalidater;
	id<PKXPCServiceDelegate> _delegate;
	NSString* _machServiceName;
	unsigned long long _options;

}

@property (nonatomic,readonly) NSString * machServiceName;                          //@synthesize machServiceName=_machServiceName - In the implementation block
@property (nonatomic,readonly) unsigned long long options;                          //@synthesize options=_options - In the implementation block
@property (assign,nonatomic,__weak) id<PKXPCServiceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (getter=isSuspended,nonatomic,readonly) BOOL suspended; 
@property (nonatomic,readonly) BOOL connectionEstablished; 
@property (assign,nonatomic) BOOL forceConnectionOnResume; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)setForegroundActiveArbiter:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id<PKXPCServiceDelegate>)delegate;
-(void)setDelegate:(id<PKXPCServiceDelegate>)arg1 ;
-(id)_connection;
-(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)synchronousRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)remoteObjectProxy;
-(unsigned long long)options;
-(BOOL)isSuspended;
-(NSString *)machServiceName;
-(id)initWithMachServiceName:(id)arg1 remoteObjectInterface:(id)arg2 exportedObjectInterface:(id)arg3 exportedObject:(id)arg4 serviceResumedNotificationName:(id)arg5 options:(unsigned long long)arg6 ;
-(id)initWithMachServiceName:(id)arg1 remoteObjectInterface:(id)arg2 exportedObjectInterface:(id)arg3 exportedObject:(id)arg4 serviceResumedNotificationName:(id)arg5 ;
-(id)remoteObjectProxyWithFailureHandler:(/*^block*/id)arg1 ;
-(id)initWithMachServiceName:(id)arg1 remoteObjectInterface:(id)arg2 exportedObjectInterface:(id)arg3 exportedObject:(id)arg4 ;
-(void)_registerForApplicationLifeCycleNotifications;
-(void)_registerForServiceListenerResumedNotifications;
-(void)_establishServiceConnection;
-(void)_unregisterForServiceListenerResumedNotifications;
-(void)_unregisterForApplicationLifeCycleNotifications;
-(void)_invalidateConnectionIfPossible;
-(/*^block*/id)_newWrappedErrorHandlerForHandler:(/*^block*/id)arg1 ;
-(/*^block*/id)_newErrorHandlerWithSemaphore:(id)arg1 ;
-(id)existingRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(void)_createConnectionIfPossible:(BOOL)arg1 ;
-(void)_sendResumed;
-(void)_sendSuspended;
-(void)foregroundActiveArbiter:(id)arg1 didUpdateForegroundActiveState:(SCD_Struct_PK11)arg2 ;
-(id)remoteObjectProxyWithSemaphore:(id)arg1 ;
-(id)existingRemoteObjectProxy;
-(id)existingSynchronousRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(BOOL)connectionEstablished;
-(void)setForceConnectionOnResume:(BOOL)arg1 ;
-(BOOL)forceConnectionOnResume;
@end


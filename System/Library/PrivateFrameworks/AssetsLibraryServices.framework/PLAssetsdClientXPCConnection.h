/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:59 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PLXPCProxyCreating.h>

@protocol OS_dispatch_queue;
@class NSObject, NSXPCConnection, PLXPCMessageLogger, PLAssetsdClientService, NSString;

@interface PLAssetsdClientXPCConnection : NSObject <PLXPCProxyCreating> {

	NSObject*<OS_dispatch_queue> _isolationQueue;
	NSObject*<OS_dispatch_queue> _externalNotificationQueue;
	NSXPCConnection* _connection;
	PLXPCMessageLogger* _connectionLogger;
	PLAssetsdClientService* _assetsdClientService;
	BOOL _isShuttingDown;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)synchronousRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)_unboostingRemoteObjectProxy;
-(void)addBarrierBlock:(/*^block*/id)arg1 ;
-(void)handleInterruption;
-(void)addPhotoLibraryUnavailabilityHandler:(/*^block*/id)arg1 ;
-(void)prepareToShutdown;
-(void)_postInterruptedNotification;
-(void)handleInvalidation;
-(id)connectionWithErrorHandler:(/*^block*/id)arg1 ;
-(id)_primitiveSynchronousRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
@end


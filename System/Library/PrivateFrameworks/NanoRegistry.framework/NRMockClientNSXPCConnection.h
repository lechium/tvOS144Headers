/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:42 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NRNSXPCConnectionProtocol.h>

@protocol OS_dispatch_queue;
@class NSString, NRMockServerNSXPCConnection, NSXPCInterface, NSObject;

@interface NRMockClientNSXPCConnection : NSObject <NRNSXPCConnectionProtocol> {

	NSString* _name;
	NRMockServerNSXPCConnection* _serverConnection;
	id _synchronousRemoteObjectProxy;
	id _remoteObjectProxy;
	BOOL _invalidated;
	NSXPCInterface* _exportedInterface;
	id _exportedObject;
	/*^block*/id _invalidationHandler;
	/*^block*/id _interruptionHandler;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                          //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) NRMockServerNSXPCConnection * serverConnection; 
@property (nonatomic,readonly) BOOL invalidated;                                            //@synthesize invalidated=_invalidated - In the implementation block
@property (nonatomic,retain) NSXPCInterface * exportedInterface;                            //@synthesize exportedInterface=_exportedInterface - In the implementation block
@property (nonatomic,retain) id exportedObject;                                             //@synthesize exportedObject=_exportedObject - In the implementation block
@property (nonatomic,retain) NSXPCInterface * remoteObjectInterface; 
@property (nonatomic,retain,readonly) id remoteObjectProxy; 
@property (nonatomic,copy) id interruptionHandler;                                          //@synthesize interruptionHandler=_interruptionHandler - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                          //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,readonly) int processIdentifier; 
@property (nonatomic,retain,readonly) NSString * processName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)invalidate;
-(void)resume;
-(void)setExportedObject:(id)arg1 ;
-(void)setExportedInterface:(NSXPCInterface *)arg1 ;
-(void)suspend;
-(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)synchronousRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)remoteObjectProxy;
-(void)setInvalidationHandler:(id)arg1 ;
-(void)setInterruptionHandler:(id)arg1 ;
-(void)setRemoteObjectInterface:(NSXPCInterface *)arg1 ;
-(id)initWithMachServiceName:(id)arg1 options:(unsigned long long)arg2 ;
-(void)_invalidate;
-(void)_setQueue:(id)arg1 ;
-(int)processIdentifier;
-(NSString *)processName;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)valueForEntitlement:(id)arg1 ;
-(id)interruptionHandler;
-(id)invalidationHandler;
-(id)exportedObject;
-(NSXPCInterface *)exportedInterface;
-(NSXPCInterface *)remoteObjectInterface;
-(BOOL)invalidated;
-(NRMockServerNSXPCConnection *)serverConnection;
-(void)runCompletionBlock:(/*^block*/id)arg1 ;
-(id)remoteObjectProxyAsync:(BOOL)arg1 ;
@end


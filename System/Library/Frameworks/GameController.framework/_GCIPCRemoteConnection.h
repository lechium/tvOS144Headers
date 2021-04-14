/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:33 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/GameController.framework/GameController
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/_GCIPCConnection.h>

@class NSXPCConnection, NSArray;

@interface _GCIPCRemoteConnection : NSObject <_GCIPCConnection> {

	AB _invalid;
	NSXPCConnection* _connection;
	NSArray* _interruptionHandlers;
	NSArray* _invalidationHandlers;

}

@property (nonatomic,retain) NSXPCConnection * connection;                 //@synthesize connection=_connection - In the implementation block
@property (copy) NSArray * interruptionHandlers;                           //@synthesize interruptionHandlers=_interruptionHandlers - In the implementation block
@property (copy) NSArray * invalidationHandlers;                           //@synthesize invalidationHandlers=_invalidationHandlers - In the implementation block
@property (getter=isInvalid,nonatomic,readonly) BOOL invalid; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)debugDescription;
-(id)description;
-(id)init;
-(id)redactedDescription;
-(void)invalidate;
-(void)resume;
-(void)suspend;
-(void)scheduleSendBarrierBlock:(/*^block*/id)arg1 ;
-(NSXPCConnection *)connection;
-(id)initWithConnection:(id)arg1 ;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(BOOL)isInvalid;
-(id)addInvalidationHandler:(/*^block*/id)arg1 ;
-(id)remoteProxy;
-(id)addInterruptionHandler:(/*^block*/id)arg1 ;
-(id)remoteProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)synchronousRemoteProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(NSArray *)interruptionHandlers;
-(NSArray *)invalidationHandlers;
-(void)setInterruptionHandlers:(NSArray *)arg1 ;
-(void)setInvalidationHandlers:(NSArray *)arg1 ;
-(BOOL)isEqualToConnection:(id)arg1 ;
@end


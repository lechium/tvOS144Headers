/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:42 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol NRXPCProxyDelegate, NRNSXPCConnectionProtocol;
@class NSString;

@interface NRXPCProxy : NSObject {

	id<NRXPCProxyDelegate> _delegate;
	unsigned _entitlementBitmask;
	BOOL _invalidated;
	BOOL _monitorClientForSuspension;
	NSString* _appPath;
	id _target;
	id<NRNSXPCConnectionProtocol> _connection;

}

@property (nonatomic,readonly) BOOL invalidated;                                      //@synthesize invalidated=_invalidated - In the implementation block
@property (nonatomic,readonly) int pid; 
@property (nonatomic,readonly) NSString * appPath;                                    //@synthesize appPath=_appPath - In the implementation block
@property (nonatomic,readonly) id target;                                             //@synthesize target=_target - In the implementation block
@property (nonatomic,readonly) id remoteObjectProxy; 
@property (nonatomic,readonly) id<NRNSXPCConnectionProtocol> connection;              //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic) BOOL monitorClientForSuspension;                         //@synthesize monitorClientForSuspension=_monitorClientForSuspension - In the implementation block
+(id)entitlements;
+(id)machServiceName;
+(id)serverExportedInterface;
+(id)serverRemoteObjectInterface;
+(id)clientExportedInterface;
+(id)clientRemoteObjectInterface;
+(BOOL)requireAnEntitlement;
-(id)target;
-(id)remoteObjectProxy;
-(void)_invalidate;
-(id<NRNSXPCConnectionProtocol>)connection;
-(int)pid;
-(BOOL)hasEntitlement:(id)arg1 ;
-(BOOL)invalidated;
-(NSString *)appPath;
-(BOOL)hasEntitlements;
-(id)initWithConnection:(id)arg1 delegate:(id)arg2 xpcTarget:(id)arg3 entitlementBitmask:(unsigned)arg4 ;
-(void)setMonitorClientForSuspension:(BOOL)arg1 ;
-(BOOL)monitorClientForSuspension;
@end

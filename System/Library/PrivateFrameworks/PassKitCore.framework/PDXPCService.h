/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:28 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/PDXPCServiceExportedInterface.h>

@class NSXPCConnection, NSString, PDXPCApplicationInfo;

@interface PDXPCService : NSObject <PDXPCServiceExportedInterface> {

	os_unfair_lock_s _lock;
	NSXPCConnection* _connection;
	NSString* _className;
	BOOL _callbacksSuspended;
	int _remoteProcessIdentifier;
	NSString* _remoteProcessApplicationIdentifier;

}

@property (nonatomic,readonly) int remoteProcessIdentifier;                                      //@synthesize remoteProcessIdentifier=_remoteProcessIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * remoteProcessApplicationIdentifier;                    //@synthesize remoteProcessApplicationIdentifier=_remoteProcessApplicationIdentifier - In the implementation block
@property (nonatomic,readonly) PDXPCApplicationInfo * remoteProcessApplicationInfo; 
@property (nonatomic,readonly) NSString * remoteProcessBundleIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)remoteObjectProxy;
-(id)connection;
-(id)initWithConnection:(id)arg1 ;
-(void)serviceResumed;
-(void)serviceSuspended;
-(void)clearConnectionReference;
-(int)remoteProcessIdentifier;
-(PDXPCApplicationInfo *)remoteProcessApplicationInfo;
-(NSString *)remoteProcessBundleIdentifier;
-(NSString *)remoteProcessApplicationIdentifier;
@end


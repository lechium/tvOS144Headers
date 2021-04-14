/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:39 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/BoardServices.framework/BoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BoardServices/BoardServices-Structs.h>
#import <libobjc.A.dylib/BSServiceConnectionContext.h>
#import <libobjc.A.dylib/BSXPCServiceConnectionMessaging.h>
#import <libobjc.A.dylib/BSInvalidatable.h>

@protocol NSCopying;
@class BSProcessHandle, BSXPCServiceConnection, _BSServiceConnectionConfiguration, BSAtomicSignal, NSString;

@interface BSServiceConnection : NSObject <BSServiceConnectionContext, BSXPCServiceConnectionMessaging, BSInvalidatable> {

	BSXPCServiceConnection* _connection;
	id<NSCopying> _userInfo;
	os_unfair_lock_s _lock;
	_BSServiceConnectionConfiguration* _lock_config;
	BSAtomicSignal* _lock_activatedSignal;
	BOOL _lock_invalidated;
	BOOL _lock_noAssertInvalidatedOnDealloc;
	NSString* _service;
	NSString* _instance;

}

@property (nonatomic,readonly) BSProcessHandle * remoteProcess; 
@property (nonatomic,copy,readonly) NSString * service;                      //@synthesize service=_service - In the implementation block
@property (nonatomic,copy,readonly) NSString * instance;                     //@synthesize instance=_instance - In the implementation block
@property (nonatomic,readonly) id remoteTarget; 
@property (nonatomic,readonly) id<NSCopying> userInfo; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)connectionWithEndpoint:(id)arg1 ;
+(id)connectionWithEndpoint:(id)arg1 clientContextBuilder:(/*^block*/id)arg2 ;
+(id)currentContext;
-(NSString *)description;
-(id)init;
-(void)dealloc;
-(id<NSCopying>)userInfo;
-(void)invalidate;
-(void)activate;
-(NSString *)instance;
-(NSString *)service;
-(id)createMessage;
-(id)remoteTarget;
-(void)configureConnection:(/*^block*/id)arg1 ;
-(BSProcessHandle *)remoteProcess;
-(void)_configureConnection:(/*^block*/id)arg1 ;
-(id)createMessageWithCompletion:(/*^block*/id)arg1 ;
@end

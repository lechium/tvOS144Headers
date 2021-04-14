/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:39 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/BoardServices.framework/BoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BoardServices/BoardServices-Structs.h>
#import <libobjc.A.dylib/BSServiceConnectionListenerConfiguring.h>
#import <libobjc.A.dylib/BSServiceListener.h>
#import <libobjc.A.dylib/BSInvalidatable.h>

@protocol BSServiceConnectionListenerDelegate, BSInvalidatable;
@class NSString, BSServiceManager, BSServiceConnectionEndpoint;

@interface BSServiceConnectionListener : NSObject <BSServiceConnectionListenerConfiguring, BSServiceListener, BSInvalidatable> {

	BSServiceManager* _manager;
	os_unfair_lock_s _lock;
	id<BSServiceConnectionListenerDelegate> _lock_delegate;
	BOOL _lock_activated;
	BOOL _lock_invalidated;
	os_unfair_lock_s _registrationLock;
	id<BSInvalidatable> _registrationLock_assertion;
	NSString* _domain;
	NSString* _service;
	NSString* _instance;
	BSServiceConnectionEndpoint* _endpoint;

}

@property (nonatomic,copy,readonly) NSString * domain;                                   //@synthesize domain=_domain - In the implementation block
@property (nonatomic,copy,readonly) NSString * service;                                  //@synthesize service=_service - In the implementation block
@property (nonatomic,copy,readonly) NSString * instance;                                 //@synthesize instance=_instance - In the implementation block
@property (nonatomic,copy,readonly) BSServiceConnectionEndpoint * endpoint;              //@synthesize endpoint=_endpoint - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)listenerWithConfigurator:(/*^block*/id)arg1 ;
+(id)extendBootstrap;
-(NSString *)description;
-(id)init;
-(void)dealloc;
-(NSString *)domain;
-(void)invalidate;
-(void)setDelegate:(id)arg1 ;
-(void)setDomain:(NSString *)arg1 ;
-(BSServiceConnectionEndpoint *)endpoint;
-(void)activate;
-(NSString *)instance;
-(NSString *)service;
-(void)setService:(NSString *)arg1 ;
-(void)setInstance:(NSString *)arg1 ;
-(void)didReceiveConnection:(id)arg1 ;
@end


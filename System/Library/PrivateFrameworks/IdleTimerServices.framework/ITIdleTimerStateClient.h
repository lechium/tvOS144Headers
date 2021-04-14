/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:33 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/IdleTimerServices.framework/IdleTimerServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <IdleTimerServices/IdleTimerServices-Structs.h>
#import <libobjc.A.dylib/ITIdleTimerClientInterface.h>
#import <libobjc.A.dylib/ITIdleTimerStateRequestHandling.h>

@protocol ITIdleTimerStateRequestDelegate;
@class BSServiceConnection, NSString;

@interface ITIdleTimerStateClient : NSObject <ITIdleTimerClientInterface, ITIdleTimerStateRequestHandling> {

	os_unfair_lock_s _accessLock;
	unsigned long long _access_serviceAvailability;
	BSServiceConnection* _connection;
	id<ITIdleTimerStateRequestDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithDelegate:(id)arg1 ;
-(void)_connectionInterrupted;
-(BOOL)handleIdleEvent:(id)arg1 usingConfigurationWithIdentifier:(id)arg2 ;
-(BOOL)isIdleTimerServiceAvailable;
-(void)_access_addIdleTimerConfiguration:(id)arg1 forReason:(id)arg2 error:(id*)arg3 ;
-(void)_access_removeIdleTimerConfiguration:(id)arg1 forReason:(id)arg2 ;
-(void)addIdleTimerConfiguration:(id)arg1 forReason:(id)arg2 error:(id*)arg3 ;
-(void)removeIdleTimerConfiguration:(id)arg1 forReason:(id)arg2 ;
@end


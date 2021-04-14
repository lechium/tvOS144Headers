/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:27 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/ICEnvironmentMonitorObserver.h>

@protocol OS_dispatch_source;
@class ICURLBag, NSObject, ICUserIdentityStore, NSMutableDictionary, NSString;

@interface ICURLBagMonitor : NSObject <ICEnvironmentMonitorObserver> {

	ICURLBag* _bag;
	NSObject*<OS_dispatch_source> _bagExpirationTimer;
	ICUserIdentityStore* _identityStore;
	NSMutableDictionary* _observers;
	os_unfair_lock_s _lock;

}

@property (readonly) ICURLBag * bag; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedBagMonitor;
-(NSString *)description;
-(void)dealloc;
-(id)_init;
-(id)_description;
-(ICURLBag *)bag;
-(void)environmentMonitorDidChangeNetworkReachability:(id)arg1 ;
-(void)_endObservingBag;
-(void)_beginObservingBag;
-(void)_requestBagWithPolicy:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_invalidateBagExpirationTimer;
-(void)_handleBagExpirationTimerFired;
-(void)_handleUserIdentityStoreDidChange:(id)arg1 ;
-(void)_scheduleBagExpirationTimerForDate:(id)arg1 ;
-(void)_updateWithBag:(id)arg1 ;
-(id)beginObservingBagWithHandler:(/*^block*/id)arg1 ;
-(void)endObservingBagWithToken:(id)arg1 ;
@end


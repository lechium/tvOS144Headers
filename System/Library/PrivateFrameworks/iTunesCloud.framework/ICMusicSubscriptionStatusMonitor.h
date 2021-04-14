/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:28 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <iTunesCloud/iTunesCloud-Structs.h>
@class ICUserIdentityContext, NSMutableDictionary, ICMusicSubscriptionStatus, ICUserIdentity;

@interface ICMusicSubscriptionStatusMonitor : NSObject {

	ICUserIdentityContext* _identityContext;
	NSMutableDictionary* _observers;
	os_unfair_lock_s _lock;
	ICMusicSubscriptionStatus* _subscriptionStatus;

}

@property (nonatomic,readonly) ICUserIdentity * identity; 
@property (nonatomic,readonly) ICMusicSubscriptionStatus * subscriptionStatus;              //@synthesize subscriptionStatus=_subscriptionStatus - In the implementation block
+(id)sharedMonitorForIdentity:(id)arg1 identityStore:(id)arg2 ;
+(id)_sharedInstanceManager;
+(id)sharedMonitorForIdentity:(id)arg1 ;
-(id)description;
-(void)dealloc;
-(ICUserIdentity *)identity;
-(ICMusicSubscriptionStatus *)subscriptionStatus;
-(void)_handleUserIdentityStoreDidChange:(id)arg1 ;
-(void)_endObservingSubscriptionStatus;
-(void)_beginObservingSubscriptionStatus;
-(void)_requestSubscriptionStatusWithCachingPolicy:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(id)_effectiveIdentityForRequestingSubscriptionStatus;
-(id)_initWithIdentityContext:(id)arg1 ;
-(void)_handleSubscriptionStatusDidChange:(id)arg1 ;
-(void)_updateWithSubscriptionStatus:(id)arg1 ;
-(id)beginObservingSubscriptionStatusWithHandler:(/*^block*/id)arg1 ;
-(void)endObservingSubscriptionStatusWithToken:(id)arg1 ;
-(void)refreshSubscriptionStatus;
@end

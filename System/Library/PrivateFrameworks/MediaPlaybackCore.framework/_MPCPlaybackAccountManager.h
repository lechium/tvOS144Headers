/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:38 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_group;
#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
@class NSMutableDictionary, NSObject, MPCPlaybackEngine, NSArray, MPCPlaybackAccount;

@interface _MPCPlaybackAccountManager : NSObject {

	os_unfair_lock_s _lock;
	NSMutableDictionary* _accounts;
	BOOL _needsRefreshDueToTimeout;
	NSObject*<OS_dispatch_group> _initialAccountGroup;
	MPCPlaybackEngine* _playbackEngine;

}

@property (nonatomic,__weak,readonly) MPCPlaybackEngine * playbackEngine;              //@synthesize playbackEngine=_playbackEngine - In the implementation block
@property (nonatomic,copy,readonly) NSArray * accounts; 
@property (nonatomic,readonly) BOOL hasLoadedInitialAccounts; 
@property (nonatomic,readonly) MPCPlaybackAccount * activeAccount; 
-(NSArray *)accounts;
-(MPCPlaybackAccount *)activeAccount;
-(MPCPlaybackEngine *)playbackEngine;
-(id)initWithPlaybackEngine:(id)arg1 ;
-(BOOL)hasLoadedInitialAccounts;
-(id)accountForDSID:(id)arg1 ;
-(id)accountForUserIdentity:(id)arg1 ;
-(id)accountForHashedDSID:(id)arg1 ;
-(void)performAfterLoadingAccounts:(/*^block*/id)arg1 ;
-(void)_subscriptionStatusChangedNotification:(id)arg1 ;
-(void)_userIdentityStoreChangedNotification:(id)arg1 ;
-(void)_updateAccounts;
-(void)_buildAccountFromLocalIdentity:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_buildAccountFromDelegatedIdentity:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_enumerateIdentitiesWithCompletion:(/*^block*/id)arg1 ;
@end


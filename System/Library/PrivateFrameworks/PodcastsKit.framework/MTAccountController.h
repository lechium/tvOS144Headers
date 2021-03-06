/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:18 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Podcasts/MTSingleton.h>

@class ACAccount;

@interface MTAccountController : MTSingleton {

	BOOL _hasFetchedInitialAccount;
	ACAccount* _accountOverride;
	ACAccount* __activeAccount;

}

@property (retain) ACAccount * _activeAccount;                         //@synthesize _activeAccount=__activeAccount - In the implementation block
@property (assign) BOOL hasFetchedInitialAccount;                      //@synthesize hasFetchedInitialAccount=_hasFetchedInitialAccount - In the implementation block
@property (nonatomic,retain) ACAccount * accountOverride;              //@synthesize accountOverride=_accountOverride - In the implementation block
+(BOOL)iTunesAccountDidChangeForACAccountNotification:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)activeAccount;
-(void)setActiveAccount:(id)arg1 ;
-(ACAccount *)_activeAccount;
-(id)activeDsid;
-(void)_updateActiveAccount;
-(void)didChangeStoreAccount:(id)arg1 ;
-(id)_activeAccountBlocking;
-(void)setHasFetchedInitialAccount:(BOOL)arg1 ;
-(id)activeStorefront;
-(id)activeEmail;
-(id)activeFullName;
-(BOOL)isUserLoggedIn;
-(BOOL)activeAccountIsManagedAppleID;
-(BOOL)hasFetchedInitialAccount;
-(ACAccount *)accountOverride;
-(void)setAccountOverride:(ACAccount *)arg1 ;
-(void)set_activeAccount:(ACAccount *)arg1 ;
@end


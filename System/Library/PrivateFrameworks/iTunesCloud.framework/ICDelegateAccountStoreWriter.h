/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:24 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol ICDelegateAccountStoreWriter <NSObject>
@required
-(void)addDelegationUUIDs:(id)arg1 forUserIdentity:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)removeAllTokensWithCompletionHandler:(/*^block*/id)arg1;
-(void)removeDelegationUUIDs:(id)arg1 forUserIdentity:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)removeIdentityPropertiesForUserIdentity:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)removeTokenForUserIdentity:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)removeTokensExpiringBeforeDate:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)setIdentityProperties:(id)arg1 forUserIdentity:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)setToken:(id)arg1 forUserIdentity:(id)arg2 completionHandler:(/*^block*/id)arg3;

@end


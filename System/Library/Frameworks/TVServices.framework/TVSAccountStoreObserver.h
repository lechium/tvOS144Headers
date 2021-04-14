/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:34 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVServices/TVSAccountsCacheObserver.h>

@protocol TVSAccountStoreObserverDelegate;
@class NSSet, TVSAccountsCache, ACAccountStore, NSMutableSet;

@interface TVSAccountStoreObserver : NSObject <TVSAccountsCacheObserver> {

	BOOL _registeredPrimaryAppleAccount;
	id<TVSAccountStoreObserverDelegate> _delegate;
	TVSAccountsCache* _accountsCache;
	ACAccountStore* _accountStore;
	NSMutableSet* _accountIdentifiers;

}

@property (nonatomic,retain) TVSAccountsCache * accountsCache;                                 //@synthesize accountsCache=_accountsCache - In the implementation block
@property (nonatomic,retain) ACAccountStore * accountStore;                                    //@synthesize accountStore=_accountStore - In the implementation block
@property (nonatomic,retain) NSMutableSet * accountIdentifiers;                                //@synthesize accountIdentifiers=_accountIdentifiers - In the implementation block
@property (assign,nonatomic) BOOL registeredPrimaryAppleAccount;                               //@synthesize registeredPrimaryAppleAccount=_registeredPrimaryAppleAccount - In the implementation block
@property (assign,nonatomic,__weak) id<TVSAccountStoreObserverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSSet * registeredAccountIdentifiers; 
-(id)init;
-(void)dealloc;
-(id<TVSAccountStoreObserverDelegate>)delegate;
-(void)setDelegate:(id<TVSAccountStoreObserverDelegate>)arg1 ;
-(void)setAccountStore:(ACAccountStore *)arg1 ;
-(ACAccountStore *)accountStore;
-(TVSAccountsCache *)accountsCache;
-(void)setAccountsCache:(TVSAccountsCache *)arg1 ;
-(NSMutableSet *)accountIdentifiers;
-(id)registerPrimaryAppleAccount;
-(void)accountsCacheDidModifyAccount:(id)arg1 ;
-(void)accountsCacheDidModifyPrimaryAppleAccount:(id)arg1 ;
-(NSSet *)registeredAccountIdentifiers;
-(id)registerAppleAccountWithAltDSID:(id)arg1 ;
-(void)setAccountIdentifiers:(NSMutableSet *)arg1 ;
-(BOOL)registeredPrimaryAppleAccount;
-(void)setRegisteredPrimaryAppleAccount:(BOOL)arg1 ;
@end


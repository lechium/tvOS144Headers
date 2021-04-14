/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:12 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACardDAV.framework/DACardDAV
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CardDAVDelegateInfoProvider.h>

@class ACAccountStore, ACAccountType, NSString;

@interface CardDAViCloudDelegateInfoProvider : NSObject <CardDAVDelegateInfoProvider> {

	ACAccountStore* _accountStore;
	ACAccountType* _accountsType;

}

@property (nonatomic,retain) ACAccountStore * accountStore;              //@synthesize accountStore=_accountStore - In the implementation block
@property (nonatomic,retain) ACAccountType * accountsType;               //@synthesize accountsType=_accountsType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)delegateInfoForFamilyMembers:(id)arg1 ;
-(id)init;
-(void)setAccountStore:(ACAccountStore *)arg1 ;
-(ACAccountStore *)accountStore;
-(ACAccountType *)accountsType;
-(id)collectDelegatesForAccount:(id)arg1 error:(id*)arg2 ;
-(id)familyCircleReturningError:(id*)arg1 ;
-(BOOL)fetchGuardianStatus:(BOOL*)arg1 family:(id)arg2 account:(id)arg3 error:(id*)arg4 ;
-(id)nonParentsInFamily:(id)arg1 error:(id*)arg2 ;
-(id)familyMembersPromise;
-(id)cardDAVAccounts;
-(id)appleIDsOfExistingDelegates:(id)arg1 ;
-(void)setAccountsType:(ACAccountType *)arg1 ;
@end


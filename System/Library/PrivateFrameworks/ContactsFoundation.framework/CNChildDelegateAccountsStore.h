/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:02 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CNDelegateAccountSource.h>
#import <libobjc.A.dylib/CNDelegateAccountSink.h>

@class ACAccount, ACAccountStore, NSString;

@interface CNChildDelegateAccountsStore : NSObject <CNDelegateAccountSource, CNDelegateAccountSink> {

	ACAccount* _parentAccount;
	ACAccountStore* _accountStore;

}

@property (nonatomic,readonly) ACAccount * parentAccount;                  //@synthesize parentAccount=_parentAccount - In the implementation block
@property (nonatomic,readonly) ACAccountStore * accountStore;              //@synthesize accountStore=_accountStore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)os_log;
+(void)configureChildAccount:(id)arg1 withSettingsFromDelegateInfo:(id)arg2 parent:(id)arg3 ;
-(NSString *)description;
-(ACAccountStore *)accountStore;
-(ACAccount *)parentAccount;
-(id)delegateAccounts;
-(id)primaryAccount;
-(id)initWithParentAccount:(id)arg1 accountStore:(id)arg2 ;
-(BOOL)updateAccounts:(id)arg1 error:(id*)arg2 ;
-(id)addChildWithDelegateInfo:(id)arg1 ;
-(id)updateAccount:(id)arg1 ;
-(id)removeAccount:(id)arg1 ;
@end


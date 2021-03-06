/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:03 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CNACAccountProvider.h>

@protocol CNACAccountProvider <NSObject>
@required
-(id)accountsWithAccountType:(id)arg1;
-(id)allAccountTypes;
-(id)childAccountsForAccount:(id)arg1;
-(BOOL)isAccountSyncable:(id)arg1;
-(BOOL)isAnyAccountSyncableIgnoringAccount:(id)arg1;

@end


@class NSString;

@interface CNACAccountProvider : NSObject <CNACAccountProvider>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)providerWithStore:(id)arg1 ;
+(id)providerWithAccounts:(id)arg1 ;
-(id)accountsWithAccountType:(id)arg1 ;
-(id)allAccountTypes;
-(id)childAccountsForAccount:(id)arg1 ;
-(BOOL)isAccountSyncable:(id)arg1 ;
-(BOOL)isAnyAccountSyncableIgnoringAccount:(id)arg1 ;
@end

